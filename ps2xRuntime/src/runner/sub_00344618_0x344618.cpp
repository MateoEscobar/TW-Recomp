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

// Function: sub_00344618
// Address: 0x344618 - 0x345108
void sub_00344618_0x344618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344618_0x344618");
#endif

    switch (ctx->pc) {
        case 0x344618u: goto label_344618;
        case 0x34461cu: goto label_34461c;
        case 0x344620u: goto label_344620;
        case 0x344624u: goto label_344624;
        case 0x344628u: goto label_344628;
        case 0x34462cu: goto label_34462c;
        case 0x344630u: goto label_344630;
        case 0x344634u: goto label_344634;
        case 0x344638u: goto label_344638;
        case 0x34463cu: goto label_34463c;
        case 0x344640u: goto label_344640;
        case 0x344644u: goto label_344644;
        case 0x344648u: goto label_344648;
        case 0x34464cu: goto label_34464c;
        case 0x344650u: goto label_344650;
        case 0x344654u: goto label_344654;
        case 0x344658u: goto label_344658;
        case 0x34465cu: goto label_34465c;
        case 0x344660u: goto label_344660;
        case 0x344664u: goto label_344664;
        case 0x344668u: goto label_344668;
        case 0x34466cu: goto label_34466c;
        case 0x344670u: goto label_344670;
        case 0x344674u: goto label_344674;
        case 0x344678u: goto label_344678;
        case 0x34467cu: goto label_34467c;
        case 0x344680u: goto label_344680;
        case 0x344684u: goto label_344684;
        case 0x344688u: goto label_344688;
        case 0x34468cu: goto label_34468c;
        case 0x344690u: goto label_344690;
        case 0x344694u: goto label_344694;
        case 0x344698u: goto label_344698;
        case 0x34469cu: goto label_34469c;
        case 0x3446a0u: goto label_3446a0;
        case 0x3446a4u: goto label_3446a4;
        case 0x3446a8u: goto label_3446a8;
        case 0x3446acu: goto label_3446ac;
        case 0x3446b0u: goto label_3446b0;
        case 0x3446b4u: goto label_3446b4;
        case 0x3446b8u: goto label_3446b8;
        case 0x3446bcu: goto label_3446bc;
        case 0x3446c0u: goto label_3446c0;
        case 0x3446c4u: goto label_3446c4;
        case 0x3446c8u: goto label_3446c8;
        case 0x3446ccu: goto label_3446cc;
        case 0x3446d0u: goto label_3446d0;
        case 0x3446d4u: goto label_3446d4;
        case 0x3446d8u: goto label_3446d8;
        case 0x3446dcu: goto label_3446dc;
        case 0x3446e0u: goto label_3446e0;
        case 0x3446e4u: goto label_3446e4;
        case 0x3446e8u: goto label_3446e8;
        case 0x3446ecu: goto label_3446ec;
        case 0x3446f0u: goto label_3446f0;
        case 0x3446f4u: goto label_3446f4;
        case 0x3446f8u: goto label_3446f8;
        case 0x3446fcu: goto label_3446fc;
        case 0x344700u: goto label_344700;
        case 0x344704u: goto label_344704;
        case 0x344708u: goto label_344708;
        case 0x34470cu: goto label_34470c;
        case 0x344710u: goto label_344710;
        case 0x344714u: goto label_344714;
        case 0x344718u: goto label_344718;
        case 0x34471cu: goto label_34471c;
        case 0x344720u: goto label_344720;
        case 0x344724u: goto label_344724;
        case 0x344728u: goto label_344728;
        case 0x34472cu: goto label_34472c;
        case 0x344730u: goto label_344730;
        case 0x344734u: goto label_344734;
        case 0x344738u: goto label_344738;
        case 0x34473cu: goto label_34473c;
        case 0x344740u: goto label_344740;
        case 0x344744u: goto label_344744;
        case 0x344748u: goto label_344748;
        case 0x34474cu: goto label_34474c;
        case 0x344750u: goto label_344750;
        case 0x344754u: goto label_344754;
        case 0x344758u: goto label_344758;
        case 0x34475cu: goto label_34475c;
        case 0x344760u: goto label_344760;
        case 0x344764u: goto label_344764;
        case 0x344768u: goto label_344768;
        case 0x34476cu: goto label_34476c;
        case 0x344770u: goto label_344770;
        case 0x344774u: goto label_344774;
        case 0x344778u: goto label_344778;
        case 0x34477cu: goto label_34477c;
        case 0x344780u: goto label_344780;
        case 0x344784u: goto label_344784;
        case 0x344788u: goto label_344788;
        case 0x34478cu: goto label_34478c;
        case 0x344790u: goto label_344790;
        case 0x344794u: goto label_344794;
        case 0x344798u: goto label_344798;
        case 0x34479cu: goto label_34479c;
        case 0x3447a0u: goto label_3447a0;
        case 0x3447a4u: goto label_3447a4;
        case 0x3447a8u: goto label_3447a8;
        case 0x3447acu: goto label_3447ac;
        case 0x3447b0u: goto label_3447b0;
        case 0x3447b4u: goto label_3447b4;
        case 0x3447b8u: goto label_3447b8;
        case 0x3447bcu: goto label_3447bc;
        case 0x3447c0u: goto label_3447c0;
        case 0x3447c4u: goto label_3447c4;
        case 0x3447c8u: goto label_3447c8;
        case 0x3447ccu: goto label_3447cc;
        case 0x3447d0u: goto label_3447d0;
        case 0x3447d4u: goto label_3447d4;
        case 0x3447d8u: goto label_3447d8;
        case 0x3447dcu: goto label_3447dc;
        case 0x3447e0u: goto label_3447e0;
        case 0x3447e4u: goto label_3447e4;
        case 0x3447e8u: goto label_3447e8;
        case 0x3447ecu: goto label_3447ec;
        case 0x3447f0u: goto label_3447f0;
        case 0x3447f4u: goto label_3447f4;
        case 0x3447f8u: goto label_3447f8;
        case 0x3447fcu: goto label_3447fc;
        case 0x344800u: goto label_344800;
        case 0x344804u: goto label_344804;
        case 0x344808u: goto label_344808;
        case 0x34480cu: goto label_34480c;
        case 0x344810u: goto label_344810;
        case 0x344814u: goto label_344814;
        case 0x344818u: goto label_344818;
        case 0x34481cu: goto label_34481c;
        case 0x344820u: goto label_344820;
        case 0x344824u: goto label_344824;
        case 0x344828u: goto label_344828;
        case 0x34482cu: goto label_34482c;
        case 0x344830u: goto label_344830;
        case 0x344834u: goto label_344834;
        case 0x344838u: goto label_344838;
        case 0x34483cu: goto label_34483c;
        case 0x344840u: goto label_344840;
        case 0x344844u: goto label_344844;
        case 0x344848u: goto label_344848;
        case 0x34484cu: goto label_34484c;
        case 0x344850u: goto label_344850;
        case 0x344854u: goto label_344854;
        case 0x344858u: goto label_344858;
        case 0x34485cu: goto label_34485c;
        case 0x344860u: goto label_344860;
        case 0x344864u: goto label_344864;
        case 0x344868u: goto label_344868;
        case 0x34486cu: goto label_34486c;
        case 0x344870u: goto label_344870;
        case 0x344874u: goto label_344874;
        case 0x344878u: goto label_344878;
        case 0x34487cu: goto label_34487c;
        case 0x344880u: goto label_344880;
        case 0x344884u: goto label_344884;
        case 0x344888u: goto label_344888;
        case 0x34488cu: goto label_34488c;
        case 0x344890u: goto label_344890;
        case 0x344894u: goto label_344894;
        case 0x344898u: goto label_344898;
        case 0x34489cu: goto label_34489c;
        case 0x3448a0u: goto label_3448a0;
        case 0x3448a4u: goto label_3448a4;
        case 0x3448a8u: goto label_3448a8;
        case 0x3448acu: goto label_3448ac;
        case 0x3448b0u: goto label_3448b0;
        case 0x3448b4u: goto label_3448b4;
        case 0x3448b8u: goto label_3448b8;
        case 0x3448bcu: goto label_3448bc;
        case 0x3448c0u: goto label_3448c0;
        case 0x3448c4u: goto label_3448c4;
        case 0x3448c8u: goto label_3448c8;
        case 0x3448ccu: goto label_3448cc;
        case 0x3448d0u: goto label_3448d0;
        case 0x3448d4u: goto label_3448d4;
        case 0x3448d8u: goto label_3448d8;
        case 0x3448dcu: goto label_3448dc;
        case 0x3448e0u: goto label_3448e0;
        case 0x3448e4u: goto label_3448e4;
        case 0x3448e8u: goto label_3448e8;
        case 0x3448ecu: goto label_3448ec;
        case 0x3448f0u: goto label_3448f0;
        case 0x3448f4u: goto label_3448f4;
        case 0x3448f8u: goto label_3448f8;
        case 0x3448fcu: goto label_3448fc;
        case 0x344900u: goto label_344900;
        case 0x344904u: goto label_344904;
        case 0x344908u: goto label_344908;
        case 0x34490cu: goto label_34490c;
        case 0x344910u: goto label_344910;
        case 0x344914u: goto label_344914;
        case 0x344918u: goto label_344918;
        case 0x34491cu: goto label_34491c;
        case 0x344920u: goto label_344920;
        case 0x344924u: goto label_344924;
        case 0x344928u: goto label_344928;
        case 0x34492cu: goto label_34492c;
        case 0x344930u: goto label_344930;
        case 0x344934u: goto label_344934;
        case 0x344938u: goto label_344938;
        case 0x34493cu: goto label_34493c;
        case 0x344940u: goto label_344940;
        case 0x344944u: goto label_344944;
        case 0x344948u: goto label_344948;
        case 0x34494cu: goto label_34494c;
        case 0x344950u: goto label_344950;
        case 0x344954u: goto label_344954;
        case 0x344958u: goto label_344958;
        case 0x34495cu: goto label_34495c;
        case 0x344960u: goto label_344960;
        case 0x344964u: goto label_344964;
        case 0x344968u: goto label_344968;
        case 0x34496cu: goto label_34496c;
        case 0x344970u: goto label_344970;
        case 0x344974u: goto label_344974;
        case 0x344978u: goto label_344978;
        case 0x34497cu: goto label_34497c;
        case 0x344980u: goto label_344980;
        case 0x344984u: goto label_344984;
        case 0x344988u: goto label_344988;
        case 0x34498cu: goto label_34498c;
        case 0x344990u: goto label_344990;
        case 0x344994u: goto label_344994;
        case 0x344998u: goto label_344998;
        case 0x34499cu: goto label_34499c;
        case 0x3449a0u: goto label_3449a0;
        case 0x3449a4u: goto label_3449a4;
        case 0x3449a8u: goto label_3449a8;
        case 0x3449acu: goto label_3449ac;
        case 0x3449b0u: goto label_3449b0;
        case 0x3449b4u: goto label_3449b4;
        case 0x3449b8u: goto label_3449b8;
        case 0x3449bcu: goto label_3449bc;
        case 0x3449c0u: goto label_3449c0;
        case 0x3449c4u: goto label_3449c4;
        case 0x3449c8u: goto label_3449c8;
        case 0x3449ccu: goto label_3449cc;
        case 0x3449d0u: goto label_3449d0;
        case 0x3449d4u: goto label_3449d4;
        case 0x3449d8u: goto label_3449d8;
        case 0x3449dcu: goto label_3449dc;
        case 0x3449e0u: goto label_3449e0;
        case 0x3449e4u: goto label_3449e4;
        case 0x3449e8u: goto label_3449e8;
        case 0x3449ecu: goto label_3449ec;
        case 0x3449f0u: goto label_3449f0;
        case 0x3449f4u: goto label_3449f4;
        case 0x3449f8u: goto label_3449f8;
        case 0x3449fcu: goto label_3449fc;
        case 0x344a00u: goto label_344a00;
        case 0x344a04u: goto label_344a04;
        case 0x344a08u: goto label_344a08;
        case 0x344a0cu: goto label_344a0c;
        case 0x344a10u: goto label_344a10;
        case 0x344a14u: goto label_344a14;
        case 0x344a18u: goto label_344a18;
        case 0x344a1cu: goto label_344a1c;
        case 0x344a20u: goto label_344a20;
        case 0x344a24u: goto label_344a24;
        case 0x344a28u: goto label_344a28;
        case 0x344a2cu: goto label_344a2c;
        case 0x344a30u: goto label_344a30;
        case 0x344a34u: goto label_344a34;
        case 0x344a38u: goto label_344a38;
        case 0x344a3cu: goto label_344a3c;
        case 0x344a40u: goto label_344a40;
        case 0x344a44u: goto label_344a44;
        case 0x344a48u: goto label_344a48;
        case 0x344a4cu: goto label_344a4c;
        case 0x344a50u: goto label_344a50;
        case 0x344a54u: goto label_344a54;
        case 0x344a58u: goto label_344a58;
        case 0x344a5cu: goto label_344a5c;
        case 0x344a60u: goto label_344a60;
        case 0x344a64u: goto label_344a64;
        case 0x344a68u: goto label_344a68;
        case 0x344a6cu: goto label_344a6c;
        case 0x344a70u: goto label_344a70;
        case 0x344a74u: goto label_344a74;
        case 0x344a78u: goto label_344a78;
        case 0x344a7cu: goto label_344a7c;
        case 0x344a80u: goto label_344a80;
        case 0x344a84u: goto label_344a84;
        case 0x344a88u: goto label_344a88;
        case 0x344a8cu: goto label_344a8c;
        case 0x344a90u: goto label_344a90;
        case 0x344a94u: goto label_344a94;
        case 0x344a98u: goto label_344a98;
        case 0x344a9cu: goto label_344a9c;
        case 0x344aa0u: goto label_344aa0;
        case 0x344aa4u: goto label_344aa4;
        case 0x344aa8u: goto label_344aa8;
        case 0x344aacu: goto label_344aac;
        case 0x344ab0u: goto label_344ab0;
        case 0x344ab4u: goto label_344ab4;
        case 0x344ab8u: goto label_344ab8;
        case 0x344abcu: goto label_344abc;
        case 0x344ac0u: goto label_344ac0;
        case 0x344ac4u: goto label_344ac4;
        case 0x344ac8u: goto label_344ac8;
        case 0x344accu: goto label_344acc;
        case 0x344ad0u: goto label_344ad0;
        case 0x344ad4u: goto label_344ad4;
        case 0x344ad8u: goto label_344ad8;
        case 0x344adcu: goto label_344adc;
        case 0x344ae0u: goto label_344ae0;
        case 0x344ae4u: goto label_344ae4;
        case 0x344ae8u: goto label_344ae8;
        case 0x344aecu: goto label_344aec;
        case 0x344af0u: goto label_344af0;
        case 0x344af4u: goto label_344af4;
        case 0x344af8u: goto label_344af8;
        case 0x344afcu: goto label_344afc;
        case 0x344b00u: goto label_344b00;
        case 0x344b04u: goto label_344b04;
        case 0x344b08u: goto label_344b08;
        case 0x344b0cu: goto label_344b0c;
        case 0x344b10u: goto label_344b10;
        case 0x344b14u: goto label_344b14;
        case 0x344b18u: goto label_344b18;
        case 0x344b1cu: goto label_344b1c;
        case 0x344b20u: goto label_344b20;
        case 0x344b24u: goto label_344b24;
        case 0x344b28u: goto label_344b28;
        case 0x344b2cu: goto label_344b2c;
        case 0x344b30u: goto label_344b30;
        case 0x344b34u: goto label_344b34;
        case 0x344b38u: goto label_344b38;
        case 0x344b3cu: goto label_344b3c;
        case 0x344b40u: goto label_344b40;
        case 0x344b44u: goto label_344b44;
        case 0x344b48u: goto label_344b48;
        case 0x344b4cu: goto label_344b4c;
        case 0x344b50u: goto label_344b50;
        case 0x344b54u: goto label_344b54;
        case 0x344b58u: goto label_344b58;
        case 0x344b5cu: goto label_344b5c;
        case 0x344b60u: goto label_344b60;
        case 0x344b64u: goto label_344b64;
        case 0x344b68u: goto label_344b68;
        case 0x344b6cu: goto label_344b6c;
        case 0x344b70u: goto label_344b70;
        case 0x344b74u: goto label_344b74;
        case 0x344b78u: goto label_344b78;
        case 0x344b7cu: goto label_344b7c;
        case 0x344b80u: goto label_344b80;
        case 0x344b84u: goto label_344b84;
        case 0x344b88u: goto label_344b88;
        case 0x344b8cu: goto label_344b8c;
        case 0x344b90u: goto label_344b90;
        case 0x344b94u: goto label_344b94;
        case 0x344b98u: goto label_344b98;
        case 0x344b9cu: goto label_344b9c;
        case 0x344ba0u: goto label_344ba0;
        case 0x344ba4u: goto label_344ba4;
        case 0x344ba8u: goto label_344ba8;
        case 0x344bacu: goto label_344bac;
        case 0x344bb0u: goto label_344bb0;
        case 0x344bb4u: goto label_344bb4;
        case 0x344bb8u: goto label_344bb8;
        case 0x344bbcu: goto label_344bbc;
        case 0x344bc0u: goto label_344bc0;
        case 0x344bc4u: goto label_344bc4;
        case 0x344bc8u: goto label_344bc8;
        case 0x344bccu: goto label_344bcc;
        case 0x344bd0u: goto label_344bd0;
        case 0x344bd4u: goto label_344bd4;
        case 0x344bd8u: goto label_344bd8;
        case 0x344bdcu: goto label_344bdc;
        case 0x344be0u: goto label_344be0;
        case 0x344be4u: goto label_344be4;
        case 0x344be8u: goto label_344be8;
        case 0x344becu: goto label_344bec;
        case 0x344bf0u: goto label_344bf0;
        case 0x344bf4u: goto label_344bf4;
        case 0x344bf8u: goto label_344bf8;
        case 0x344bfcu: goto label_344bfc;
        case 0x344c00u: goto label_344c00;
        case 0x344c04u: goto label_344c04;
        case 0x344c08u: goto label_344c08;
        case 0x344c0cu: goto label_344c0c;
        case 0x344c10u: goto label_344c10;
        case 0x344c14u: goto label_344c14;
        case 0x344c18u: goto label_344c18;
        case 0x344c1cu: goto label_344c1c;
        case 0x344c20u: goto label_344c20;
        case 0x344c24u: goto label_344c24;
        case 0x344c28u: goto label_344c28;
        case 0x344c2cu: goto label_344c2c;
        case 0x344c30u: goto label_344c30;
        case 0x344c34u: goto label_344c34;
        case 0x344c38u: goto label_344c38;
        case 0x344c3cu: goto label_344c3c;
        case 0x344c40u: goto label_344c40;
        case 0x344c44u: goto label_344c44;
        case 0x344c48u: goto label_344c48;
        case 0x344c4cu: goto label_344c4c;
        case 0x344c50u: goto label_344c50;
        case 0x344c54u: goto label_344c54;
        case 0x344c58u: goto label_344c58;
        case 0x344c5cu: goto label_344c5c;
        case 0x344c60u: goto label_344c60;
        case 0x344c64u: goto label_344c64;
        case 0x344c68u: goto label_344c68;
        case 0x344c6cu: goto label_344c6c;
        case 0x344c70u: goto label_344c70;
        case 0x344c74u: goto label_344c74;
        case 0x344c78u: goto label_344c78;
        case 0x344c7cu: goto label_344c7c;
        case 0x344c80u: goto label_344c80;
        case 0x344c84u: goto label_344c84;
        case 0x344c88u: goto label_344c88;
        case 0x344c8cu: goto label_344c8c;
        case 0x344c90u: goto label_344c90;
        case 0x344c94u: goto label_344c94;
        case 0x344c98u: goto label_344c98;
        case 0x344c9cu: goto label_344c9c;
        case 0x344ca0u: goto label_344ca0;
        case 0x344ca4u: goto label_344ca4;
        case 0x344ca8u: goto label_344ca8;
        case 0x344cacu: goto label_344cac;
        case 0x344cb0u: goto label_344cb0;
        case 0x344cb4u: goto label_344cb4;
        case 0x344cb8u: goto label_344cb8;
        case 0x344cbcu: goto label_344cbc;
        case 0x344cc0u: goto label_344cc0;
        case 0x344cc4u: goto label_344cc4;
        case 0x344cc8u: goto label_344cc8;
        case 0x344cccu: goto label_344ccc;
        case 0x344cd0u: goto label_344cd0;
        case 0x344cd4u: goto label_344cd4;
        case 0x344cd8u: goto label_344cd8;
        case 0x344cdcu: goto label_344cdc;
        case 0x344ce0u: goto label_344ce0;
        case 0x344ce4u: goto label_344ce4;
        case 0x344ce8u: goto label_344ce8;
        case 0x344cecu: goto label_344cec;
        case 0x344cf0u: goto label_344cf0;
        case 0x344cf4u: goto label_344cf4;
        case 0x344cf8u: goto label_344cf8;
        case 0x344cfcu: goto label_344cfc;
        case 0x344d00u: goto label_344d00;
        case 0x344d04u: goto label_344d04;
        case 0x344d08u: goto label_344d08;
        case 0x344d0cu: goto label_344d0c;
        case 0x344d10u: goto label_344d10;
        case 0x344d14u: goto label_344d14;
        case 0x344d18u: goto label_344d18;
        case 0x344d1cu: goto label_344d1c;
        case 0x344d20u: goto label_344d20;
        case 0x344d24u: goto label_344d24;
        case 0x344d28u: goto label_344d28;
        case 0x344d2cu: goto label_344d2c;
        case 0x344d30u: goto label_344d30;
        case 0x344d34u: goto label_344d34;
        case 0x344d38u: goto label_344d38;
        case 0x344d3cu: goto label_344d3c;
        case 0x344d40u: goto label_344d40;
        case 0x344d44u: goto label_344d44;
        case 0x344d48u: goto label_344d48;
        case 0x344d4cu: goto label_344d4c;
        case 0x344d50u: goto label_344d50;
        case 0x344d54u: goto label_344d54;
        case 0x344d58u: goto label_344d58;
        case 0x344d5cu: goto label_344d5c;
        case 0x344d60u: goto label_344d60;
        case 0x344d64u: goto label_344d64;
        case 0x344d68u: goto label_344d68;
        case 0x344d6cu: goto label_344d6c;
        case 0x344d70u: goto label_344d70;
        case 0x344d74u: goto label_344d74;
        case 0x344d78u: goto label_344d78;
        case 0x344d7cu: goto label_344d7c;
        case 0x344d80u: goto label_344d80;
        case 0x344d84u: goto label_344d84;
        case 0x344d88u: goto label_344d88;
        case 0x344d8cu: goto label_344d8c;
        case 0x344d90u: goto label_344d90;
        case 0x344d94u: goto label_344d94;
        case 0x344d98u: goto label_344d98;
        case 0x344d9cu: goto label_344d9c;
        case 0x344da0u: goto label_344da0;
        case 0x344da4u: goto label_344da4;
        case 0x344da8u: goto label_344da8;
        case 0x344dacu: goto label_344dac;
        case 0x344db0u: goto label_344db0;
        case 0x344db4u: goto label_344db4;
        case 0x344db8u: goto label_344db8;
        case 0x344dbcu: goto label_344dbc;
        case 0x344dc0u: goto label_344dc0;
        case 0x344dc4u: goto label_344dc4;
        case 0x344dc8u: goto label_344dc8;
        case 0x344dccu: goto label_344dcc;
        case 0x344dd0u: goto label_344dd0;
        case 0x344dd4u: goto label_344dd4;
        case 0x344dd8u: goto label_344dd8;
        case 0x344ddcu: goto label_344ddc;
        case 0x344de0u: goto label_344de0;
        case 0x344de4u: goto label_344de4;
        case 0x344de8u: goto label_344de8;
        case 0x344decu: goto label_344dec;
        case 0x344df0u: goto label_344df0;
        case 0x344df4u: goto label_344df4;
        case 0x344df8u: goto label_344df8;
        case 0x344dfcu: goto label_344dfc;
        case 0x344e00u: goto label_344e00;
        case 0x344e04u: goto label_344e04;
        case 0x344e08u: goto label_344e08;
        case 0x344e0cu: goto label_344e0c;
        case 0x344e10u: goto label_344e10;
        case 0x344e14u: goto label_344e14;
        case 0x344e18u: goto label_344e18;
        case 0x344e1cu: goto label_344e1c;
        case 0x344e20u: goto label_344e20;
        case 0x344e24u: goto label_344e24;
        case 0x344e28u: goto label_344e28;
        case 0x344e2cu: goto label_344e2c;
        case 0x344e30u: goto label_344e30;
        case 0x344e34u: goto label_344e34;
        case 0x344e38u: goto label_344e38;
        case 0x344e3cu: goto label_344e3c;
        case 0x344e40u: goto label_344e40;
        case 0x344e44u: goto label_344e44;
        case 0x344e48u: goto label_344e48;
        case 0x344e4cu: goto label_344e4c;
        case 0x344e50u: goto label_344e50;
        case 0x344e54u: goto label_344e54;
        case 0x344e58u: goto label_344e58;
        case 0x344e5cu: goto label_344e5c;
        case 0x344e60u: goto label_344e60;
        case 0x344e64u: goto label_344e64;
        case 0x344e68u: goto label_344e68;
        case 0x344e6cu: goto label_344e6c;
        case 0x344e70u: goto label_344e70;
        case 0x344e74u: goto label_344e74;
        case 0x344e78u: goto label_344e78;
        case 0x344e7cu: goto label_344e7c;
        case 0x344e80u: goto label_344e80;
        case 0x344e84u: goto label_344e84;
        case 0x344e88u: goto label_344e88;
        case 0x344e8cu: goto label_344e8c;
        case 0x344e90u: goto label_344e90;
        case 0x344e94u: goto label_344e94;
        case 0x344e98u: goto label_344e98;
        case 0x344e9cu: goto label_344e9c;
        case 0x344ea0u: goto label_344ea0;
        case 0x344ea4u: goto label_344ea4;
        case 0x344ea8u: goto label_344ea8;
        case 0x344eacu: goto label_344eac;
        case 0x344eb0u: goto label_344eb0;
        case 0x344eb4u: goto label_344eb4;
        case 0x344eb8u: goto label_344eb8;
        case 0x344ebcu: goto label_344ebc;
        case 0x344ec0u: goto label_344ec0;
        case 0x344ec4u: goto label_344ec4;
        case 0x344ec8u: goto label_344ec8;
        case 0x344eccu: goto label_344ecc;
        case 0x344ed0u: goto label_344ed0;
        case 0x344ed4u: goto label_344ed4;
        case 0x344ed8u: goto label_344ed8;
        case 0x344edcu: goto label_344edc;
        case 0x344ee0u: goto label_344ee0;
        case 0x344ee4u: goto label_344ee4;
        case 0x344ee8u: goto label_344ee8;
        case 0x344eecu: goto label_344eec;
        case 0x344ef0u: goto label_344ef0;
        case 0x344ef4u: goto label_344ef4;
        case 0x344ef8u: goto label_344ef8;
        case 0x344efcu: goto label_344efc;
        case 0x344f00u: goto label_344f00;
        case 0x344f04u: goto label_344f04;
        case 0x344f08u: goto label_344f08;
        case 0x344f0cu: goto label_344f0c;
        case 0x344f10u: goto label_344f10;
        case 0x344f14u: goto label_344f14;
        case 0x344f18u: goto label_344f18;
        case 0x344f1cu: goto label_344f1c;
        case 0x344f20u: goto label_344f20;
        case 0x344f24u: goto label_344f24;
        case 0x344f28u: goto label_344f28;
        case 0x344f2cu: goto label_344f2c;
        case 0x344f30u: goto label_344f30;
        case 0x344f34u: goto label_344f34;
        case 0x344f38u: goto label_344f38;
        case 0x344f3cu: goto label_344f3c;
        case 0x344f40u: goto label_344f40;
        case 0x344f44u: goto label_344f44;
        case 0x344f48u: goto label_344f48;
        case 0x344f4cu: goto label_344f4c;
        case 0x344f50u: goto label_344f50;
        case 0x344f54u: goto label_344f54;
        case 0x344f58u: goto label_344f58;
        case 0x344f5cu: goto label_344f5c;
        case 0x344f60u: goto label_344f60;
        case 0x344f64u: goto label_344f64;
        case 0x344f68u: goto label_344f68;
        case 0x344f6cu: goto label_344f6c;
        case 0x344f70u: goto label_344f70;
        case 0x344f74u: goto label_344f74;
        case 0x344f78u: goto label_344f78;
        case 0x344f7cu: goto label_344f7c;
        case 0x344f80u: goto label_344f80;
        case 0x344f84u: goto label_344f84;
        case 0x344f88u: goto label_344f88;
        case 0x344f8cu: goto label_344f8c;
        case 0x344f90u: goto label_344f90;
        case 0x344f94u: goto label_344f94;
        case 0x344f98u: goto label_344f98;
        case 0x344f9cu: goto label_344f9c;
        case 0x344fa0u: goto label_344fa0;
        case 0x344fa4u: goto label_344fa4;
        case 0x344fa8u: goto label_344fa8;
        case 0x344facu: goto label_344fac;
        case 0x344fb0u: goto label_344fb0;
        case 0x344fb4u: goto label_344fb4;
        case 0x344fb8u: goto label_344fb8;
        case 0x344fbcu: goto label_344fbc;
        case 0x344fc0u: goto label_344fc0;
        case 0x344fc4u: goto label_344fc4;
        case 0x344fc8u: goto label_344fc8;
        case 0x344fccu: goto label_344fcc;
        case 0x344fd0u: goto label_344fd0;
        case 0x344fd4u: goto label_344fd4;
        case 0x344fd8u: goto label_344fd8;
        case 0x344fdcu: goto label_344fdc;
        case 0x344fe0u: goto label_344fe0;
        case 0x344fe4u: goto label_344fe4;
        case 0x344fe8u: goto label_344fe8;
        case 0x344fecu: goto label_344fec;
        case 0x344ff0u: goto label_344ff0;
        case 0x344ff4u: goto label_344ff4;
        case 0x344ff8u: goto label_344ff8;
        case 0x344ffcu: goto label_344ffc;
        case 0x345000u: goto label_345000;
        case 0x345004u: goto label_345004;
        case 0x345008u: goto label_345008;
        case 0x34500cu: goto label_34500c;
        case 0x345010u: goto label_345010;
        case 0x345014u: goto label_345014;
        case 0x345018u: goto label_345018;
        case 0x34501cu: goto label_34501c;
        case 0x345020u: goto label_345020;
        case 0x345024u: goto label_345024;
        case 0x345028u: goto label_345028;
        case 0x34502cu: goto label_34502c;
        case 0x345030u: goto label_345030;
        case 0x345034u: goto label_345034;
        case 0x345038u: goto label_345038;
        case 0x34503cu: goto label_34503c;
        case 0x345040u: goto label_345040;
        case 0x345044u: goto label_345044;
        case 0x345048u: goto label_345048;
        case 0x34504cu: goto label_34504c;
        case 0x345050u: goto label_345050;
        case 0x345054u: goto label_345054;
        case 0x345058u: goto label_345058;
        case 0x34505cu: goto label_34505c;
        case 0x345060u: goto label_345060;
        case 0x345064u: goto label_345064;
        case 0x345068u: goto label_345068;
        case 0x34506cu: goto label_34506c;
        case 0x345070u: goto label_345070;
        case 0x345074u: goto label_345074;
        case 0x345078u: goto label_345078;
        case 0x34507cu: goto label_34507c;
        case 0x345080u: goto label_345080;
        case 0x345084u: goto label_345084;
        case 0x345088u: goto label_345088;
        case 0x34508cu: goto label_34508c;
        case 0x345090u: goto label_345090;
        case 0x345094u: goto label_345094;
        case 0x345098u: goto label_345098;
        case 0x34509cu: goto label_34509c;
        case 0x3450a0u: goto label_3450a0;
        case 0x3450a4u: goto label_3450a4;
        case 0x3450a8u: goto label_3450a8;
        case 0x3450acu: goto label_3450ac;
        case 0x3450b0u: goto label_3450b0;
        case 0x3450b4u: goto label_3450b4;
        case 0x3450b8u: goto label_3450b8;
        case 0x3450bcu: goto label_3450bc;
        case 0x3450c0u: goto label_3450c0;
        case 0x3450c4u: goto label_3450c4;
        case 0x3450c8u: goto label_3450c8;
        case 0x3450ccu: goto label_3450cc;
        case 0x3450d0u: goto label_3450d0;
        case 0x3450d4u: goto label_3450d4;
        case 0x3450d8u: goto label_3450d8;
        case 0x3450dcu: goto label_3450dc;
        case 0x3450e0u: goto label_3450e0;
        case 0x3450e4u: goto label_3450e4;
        case 0x3450e8u: goto label_3450e8;
        case 0x3450ecu: goto label_3450ec;
        case 0x3450f0u: goto label_3450f0;
        case 0x3450f4u: goto label_3450f4;
        case 0x3450f8u: goto label_3450f8;
        case 0x3450fcu: goto label_3450fc;
        case 0x345100u: goto label_345100;
        case 0x345104u: goto label_345104;
        default: break;
    }

    ctx->pc = 0x344618u;

label_344618:
    // 0x344618: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x344618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_34461c:
    // 0x34461c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x34461cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_344620:
    // 0x344620: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x344620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_344624:
    // 0x344624: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x344624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_344628:
    // 0x344628: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x344628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_34462c:
    // 0x34462c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x34462cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_344630:
    // 0x344630: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x344630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_344634:
    // 0x344634: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x344634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_344638:
    // 0x344638: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x344638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_34463c:
    // 0x34463c: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x34463cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
label_344640:
    // 0x344640: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x344640u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_344644:
    // 0x344644: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x344644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
label_344648:
    // 0x344648: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x344648u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34464c:
    // 0x34464c: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x34464cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_344650:
    // 0x344650: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x344650u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344654:
    // 0x344654: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x344654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_344658:
    // 0x344658: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x344658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
label_34465c:
    // 0x34465c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x34465cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_344660:
    // 0x344660: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x344660u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_344664:
    // 0x344664: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x344664u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_344668:
    // 0x344668: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x344668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
label_34466c:
    // 0x34466c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34466cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344670:
    // 0x344670: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x344670u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_344674:
    // 0x344674: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x344674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_344678:
    // 0x344678: 0xafa900b0  sw          $t1, 0xB0($sp)
    ctx->pc = 0x344678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 9));
label_34467c:
    // 0x34467c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x34467cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_344680:
    // 0x344680: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x344680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_344684:
    // 0x344684: 0xc08a61a  jal         func_229868
label_344688:
    if (ctx->pc == 0x344688u) {
        ctx->pc = 0x344688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344684u;
        // 0x344688: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x34468Cu;
        goto label_34468c;
    }
    ctx->pc = 0x344684u;
    SET_GPR_U32(ctx, 31, 0x34468Cu);
    ctx->pc = 0x344688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344684u;
    // 0x344688: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x344684u, 0x34468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34468Cu;
label_34468c:
    // 0x34468c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34468cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_344690:
    // 0x344690: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x344690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_344694:
    // 0x344694: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x344694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_344698:
    // 0x344698: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_34469c:
    if (ctx->pc == 0x34469Cu) {
        ctx->pc = 0x34469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344698u;
        // 0x34469c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3446A0u;
        goto label_3446a0;
    }
    ctx->pc = 0x344698u;
    {
        const bool branch_taken_0x344698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344698u;
        // 0x34469c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344698) {
            ctx->pc = 0x3446D0u;
            goto label_3446d0;
        }
    }
    ctx->pc = 0x3446A0u;
label_3446a0:
    // 0x3446a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3446a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3446a4:
    // 0x3446a4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3446a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3446a8:
    // 0x3446a8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3446a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3446ac:
    // 0x3446ac: 0x40f809  jalr        $v0
label_3446b0:
    if (ctx->pc == 0x3446B0u) {
        ctx->pc = 0x3446B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446ACu;
        // 0x3446b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3446B4u;
        goto label_3446b4;
    }
    ctx->pc = 0x3446ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3446B4u);
        ctx->pc = 0x3446B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446ACu;
        // 0x3446b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3446ACu, 0x3446B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3446B4u;
label_3446b4:
    // 0x3446b4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3446b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_3446b8:
    // 0x3446b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3446b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3446bc:
    // 0x3446bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3446c0:
    if (ctx->pc == 0x3446C0u) {
        ctx->pc = 0x3446C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446BCu;
        // 0x3446c0: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3446C4u;
        goto label_3446c4;
    }
    ctx->pc = 0x3446BCu;
    {
        const bool branch_taken_0x3446bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3446C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446BCu;
        // 0x3446c0: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3446bc) {
            ctx->pc = 0x3446D0u;
            goto label_3446d0;
        }
    }
    ctx->pc = 0x3446C4u;
label_3446c4:
    // 0x3446c4: 0xc089fd0  jal         func_227F40
label_3446c8:
    if (ctx->pc == 0x3446C8u) {
        ctx->pc = 0x3446C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3446C4u;
        // 0x3446c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3446CCu;
        goto label_3446cc;
    }
    ctx->pc = 0x3446C4u;
    SET_GPR_U32(ctx, 31, 0x3446CCu);
    ctx->pc = 0x3446C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3446C4u;
    // 0x3446c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F40u, 0x3446C4u, 0x3446CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3446CCu;
label_3446cc:
    // 0x3446cc: 0x2702b  sltu        $t6, $zero, $v0
    ctx->pc = 0x3446ccu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3446d0:
    // 0x3446d0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3446d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3446d4:
    // 0x3446d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3446d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3446d8:
    // 0x3446d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3446d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3446dc:
    // 0x3446dc: 0x7ac70050  lq          $a3, 0x50($s6)
    ctx->pc = 0x3446dcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 22), 80)));
label_3446e0:
    // 0x3446e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3446e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3446e4:
    // 0x3446e4: 0x264d0040  addiu       $t5, $s2, 0x40
    ctx->pc = 0x3446e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_3446e8:
    // 0x3446e8: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x3446e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
label_3446ec:
    // 0x3446ec: 0x0  nop
    ctx->pc = 0x3446ecu;
    // NOP
label_3446f0:
    // 0x3446f0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3446f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3446f4:
    // 0x3446f4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3446f4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_3446f8:
    // 0x3446f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3446f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3446fc:
    // 0x3446fc: 0x0  nop
    ctx->pc = 0x3446fcu;
    // NOP
label_344700:
    // 0x344700: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_344704:
    if (ctx->pc == 0x344704u) {
        ctx->pc = 0x344704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344700u;
        // 0x344704: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344708u;
        goto label_344708;
    }
    ctx->pc = 0x344700u;
    {
        const bool branch_taken_0x344700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x344700) {
            ctx->pc = 0x344704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344700u;
            // 0x344704: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344714u;
            goto label_344714;
        }
    }
    ctx->pc = 0x344708u;
label_344708:
    // 0x344708: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x344708u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_34470c:
    // 0x34470c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x34470cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_344710:
    // 0x344710: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x344710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_344714:
    // 0x344714: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x344714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_344718:
    // 0x344718: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_34471c:
    if (ctx->pc == 0x34471Cu) {
        ctx->pc = 0x34471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344718u;
        // 0x34471c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344720u;
        goto label_344720;
    }
    ctx->pc = 0x344718u;
    {
        const bool branch_taken_0x344718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344718u;
        // 0x34471c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344718) {
            ctx->pc = 0x3446F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3446f0;
        }
    }
    ctx->pc = 0x344720u;
label_344720:
    // 0x344720: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x344720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_344724:
    // 0x344724: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x344724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_344728:
    // 0x344728: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x344728u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_34472c:
    // 0x34472c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x34472cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_344730:
    // 0x344730: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_344734:
    if (ctx->pc == 0x344734u) {
        ctx->pc = 0x344734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344730u;
        // 0x344734: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x344738u;
        goto label_344738;
    }
    ctx->pc = 0x344730u;
    {
        const bool branch_taken_0x344730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344730) {
            ctx->pc = 0x344734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344730u;
            // 0x344734: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x344738u;
            goto label_344738;
        }
    }
    ctx->pc = 0x344738u;
label_344738:
    // 0x344738: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x344738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_34473c:
    // 0x34473c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x34473cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_344740:
    // 0x344740: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x344740u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_344744:
    // 0x344744: 0x244616c0  addiu       $a2, $v0, 0x16C0
    ctx->pc = 0x344744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_344748:
    // 0x344748: 0x7a420080  lq          $v0, 0x80($s2)
    ctx->pc = 0x344748u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 128)));
label_34474c:
    // 0x34474c: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x34474cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_344750:
    // 0x344750: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x344750u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_344754:
    // 0x344754: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x344754u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_344758:
    // 0x344758: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x344758u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_34475c:
    // 0x34475c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34475cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_344760:
    // 0x344760: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x344760u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_344764:
    // 0x344764: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x344764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
label_344768:
    // 0x344768: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x344768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_34476c:
    // 0x34476c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x34476cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_344770:
    // 0x344770: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x344770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_344774:
    // 0x344774: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x344774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_344778:
    // 0x344778: 0x7bab0000  lq          $t3, 0x0($sp)
    ctx->pc = 0x344778u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34477c:
    // 0x34477c: 0x78ca0000  lq          $t2, 0x0($a2)
    ctx->pc = 0x34477cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_344780:
    // 0x344780: 0x7a470050  lq          $a3, 0x50($s2)
    ctx->pc = 0x344780u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 80)));
label_344784:
    // 0x344784: 0x7a480060  lq          $t0, 0x60($s2)
    ctx->pc = 0x344784u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 18), 96)));
label_344788:
    // 0x344788: 0x7a490070  lq          $t1, 0x70($s2)
    ctx->pc = 0x344788u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 18), 112)));
label_34478c:
    // 0x34478c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x34478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_344790:
    // 0x344790: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x344790u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_344794:
    // 0x344794: 0x2010  mfhi        $a0
    ctx->pc = 0x344794u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_344798:
    // 0x344798: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x344798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_34479c:
    // 0x34479c: 0x49900  sll         $s3, $a0, 4
    ctx->pc = 0x34479cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3447a0:
    // 0x3447a0: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x3447a0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_3447a4:
    // 0x3447a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3447a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3447a8:
    // 0x3447a8: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x3447a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_3447ac:
    // 0x3447ac: 0x1a4b821  addu        $s7, $t5, $a0
    ctx->pc = 0x3447acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_3447b0:
    // 0x3447b0: 0x78430050  lq          $v1, 0x50($v0)
    ctx->pc = 0x3447b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 80)));
label_3447b4:
    // 0x3447b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3447b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3447b8:
    // 0x3447b8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x3447b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3447bc:
    // 0x3447bc: 0x48ab0800  qmtc2.ni    $t3, $vf1
    ctx->pc = 0x3447bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
label_3447c0:
    // 0x3447c0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3447c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3447c4:
    // 0x3447c4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3447c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3447c8:
    // 0x3447c8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3447c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3447cc:
    // 0x3447cc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3447ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3447d0:
    // 0x3447d0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x3447d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_3447d4:
    // 0x3447d4: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x3447d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3447d8:
    // 0x3447d8: 0x78820050  lq          $v0, 0x50($a0)
    ctx->pc = 0x3447d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 80)));
label_3447dc:
    // 0x3447dc: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x3447dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_3447e0:
    // 0x3447e0: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3447e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3447e4:
    // 0x3447e4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3447e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3447e8:
    // 0x3447e8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3447e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3447ec:
    // 0x3447ec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3447ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3447f0:
    // 0x3447f0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3447f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3447f4:
    // 0x3447f4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3447f4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_3447f8:
    // 0x3447f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3447f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3447fc:
    // 0x3447fc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x3447fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344800:
    // 0x344800: 0x6010  mfhi        $t4
    ctx->pc = 0x344800u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_344804:
    // 0x344804: 0xc8900  sll         $s1, $t4, 4
    ctx->pc = 0x344804u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_344808:
    // 0x344808: 0x2322021  addu        $a0, $s1, $s2
    ctx->pc = 0x344808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_34480c:
    // 0x34480c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34480cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_344810:
    // 0x344810: 0x78820050  lq          $v0, 0x50($a0)
    ctx->pc = 0x344810u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 80)));
label_344814:
    // 0x344814: 0x78a30050  lq          $v1, 0x50($a1)
    ctx->pc = 0x344814u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 80)));
label_344818:
    // 0x344818: 0x48ab0800  qmtc2.ni    $t3, $vf1
    ctx->pc = 0x344818u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
label_34481c:
    // 0x34481c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34481cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_344820:
    // 0x344820: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x344820u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_344824:
    // 0x344824: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x344824u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_344828:
    // 0x344828: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x344828u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_34482c:
    // 0x34482c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x34482cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_344830:
    // 0x344830: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x344830u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_344834:
    // 0x344834: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x344834u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_344838:
    // 0x344838: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x344838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_34483c:
    // 0x34483c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34483cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_344840:
    // 0x344840: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x344840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_344844:
    // 0x344844: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x344844u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_344848:
    // 0x344848: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x344848u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_34484c:
    // 0x34484c: 0x44858000  mtc1        $a1, $f16
    ctx->pc = 0x34484cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_344850:
    // 0x344850: 0x7fa70050  sq          $a3, 0x50($sp)
    ctx->pc = 0x344850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
label_344854:
    // 0x344854: 0x7fa80060  sq          $t0, 0x60($sp)
    ctx->pc = 0x344854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 8));
label_344858:
    // 0x344858: 0x7fa90070  sq          $t1, 0x70($sp)
    ctx->pc = 0x344858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 9));
label_34485c:
    // 0x34485c: 0x450000ae  bc1f        . + 4 + (0xAE << 2)
label_344860:
    if (ctx->pc == 0x344860u) {
        ctx->pc = 0x344860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34485Cu;
        // 0x344860: 0x7faa0080  sq          $t2, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344864u;
        goto label_344864;
    }
    ctx->pc = 0x34485Cu;
    {
        const bool branch_taken_0x34485c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34485Cu;
        // 0x344860: 0x7faa0080  sq          $t2, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34485c) {
            ctx->pc = 0x344B18u;
            goto label_344b18;
        }
    }
    ctx->pc = 0x344864u;
label_344864:
    // 0x344864: 0xc1080  sll         $v0, $t4, 2
    ctx->pc = 0x344864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_344868:
    // 0x344868: 0x1a2a021  addu        $s4, $t5, $v0
    ctx->pc = 0x344868u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_34486c:
    // 0x34486c: 0xc6920000  lwc1        $f18, 0x0($s4)
    ctx->pc = 0x34486cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_344870:
    // 0x344870: 0x46009007  neg.s       $f0, $f18
    ctx->pc = 0x344870u;
    ctx->f[0] = FPU_NEG_S(ctx->f[18]);
label_344874:
    // 0x344874: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x344874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344878:
    // 0x344878: 0x0  nop
    ctx->pc = 0x344878u;
    // NOP
label_34487c:
    // 0x34487c: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
label_344880:
    if (ctx->pc == 0x344880u) {
        ctx->pc = 0x344880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34487Cu;
        // 0x344880: 0x46000bc6  mov.s       $f15, $f1 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x344884u;
        goto label_344884;
    }
    ctx->pc = 0x34487Cu;
    {
        const bool branch_taken_0x34487c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34487Cu;
        // 0x344880: 0x46000bc6  mov.s       $f15, $f1 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34487c) {
            ctx->pc = 0x344970u;
            goto label_344970;
        }
    }
    ctx->pc = 0x344884u;
label_344884:
    // 0x344884: 0xc6ce0040  lwc1        $f14, 0x40($s6)
    ctx->pc = 0x344884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_344888:
    // 0x344888: 0x46001446  mov.s       $f17, $f2
    ctx->pc = 0x344888u;
    ctx->f[17] = FPU_MOV_S(ctx->f[2]);
label_34488c:
    // 0x34488c: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x34488cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_344890:
    // 0x344890: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x344890u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_344894:
    // 0x344894: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x344894u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_344898:
    // 0x344898: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x344898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_34489c:
    // 0x34489c: 0x27a500a4  addiu       $a1, $sp, 0xA4
    ctx->pc = 0x34489cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_3448a0:
    // 0x3448a0: 0xc0d28c6  jal         func_34A318
label_3448a4:
    if (ctx->pc == 0x3448A4u) {
        ctx->pc = 0x3448A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448A0u;
        // 0x3448a4: 0x27a600a8  addiu       $a2, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3448A8u;
        goto label_3448a8;
    }
    ctx->pc = 0x3448A0u;
    SET_GPR_U32(ctx, 31, 0x3448A8u);
    ctx->pc = 0x3448A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3448A0u;
    // 0x3448a4: 0x27a600a8  addiu       $a2, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A318u, 0x3448A0u, 0x3448A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3448A8u;
label_3448a8:
    // 0x3448a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3448a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3448ac:
    // 0x3448ac: 0x120001be  beqz        $s0, . + 4 + (0x1BE << 2)
label_3448b0:
    if (ctx->pc == 0x3448B0u) {
        ctx->pc = 0x3448B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448ACu;
        // 0x3448b0: 0xc7a200a0  lwc1        $f2, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3448B4u;
        goto label_3448b4;
    }
    ctx->pc = 0x3448ACu;
    {
        const bool branch_taken_0x3448ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3448B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448ACu;
        // 0x3448b0: 0xc7a200a0  lwc1        $f2, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3448ac) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x3448B4u;
label_3448b4:
    // 0x3448b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3448b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3448b8:
    // 0x3448b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3448b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3448bc:
    // 0x3448bc: 0x0  nop
    ctx->pc = 0x3448bcu;
    // NOP
label_3448c0:
    // 0x3448c0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3448c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3448c4:
    // 0x3448c4: 0x0  nop
    ctx->pc = 0x3448c4u;
    // NOP
label_3448c8:
    // 0x3448c8: 0x450001b7  bc1f        . + 4 + (0x1B7 << 2)
label_3448cc:
    if (ctx->pc == 0x3448CCu) {
        ctx->pc = 0x3448CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448C8u;
        // 0x3448cc: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3448D0u;
        goto label_3448d0;
    }
    ctx->pc = 0x3448C8u;
    {
        const bool branch_taken_0x3448c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3448CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448C8u;
        // 0x3448cc: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3448c8) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x3448D0u;
label_3448d0:
    // 0x3448d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3448d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3448d4:
    // 0x3448d4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x3448d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_3448d8:
    // 0x3448d8: 0x2322021  addu        $a0, $s1, $s2
    ctx->pc = 0x3448d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_3448dc:
    // 0x3448dc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3448dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3448e0:
    // 0x3448e0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3448e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3448e4:
    // 0x3448e4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3448e4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3448e8:
    // 0x3448e8: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x3448e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3448ec:
    // 0x3448ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3448ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3448f0:
    // 0x3448f0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3448f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3448f4:
    // 0x3448f4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x3448f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3448f8:
    // 0x3448f8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3448f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3448fc:
    // 0x3448fc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3448fcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_344900:
    // 0x344900: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x344900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_344904:
    // 0x344904: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x344904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344908:
    // 0x344908: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x344908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_34490c:
    // 0x34490c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x34490cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_344910:
    // 0x344910: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x344910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_344914:
    // 0x344914: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x344914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_344918:
    // 0x344918: 0x78830050  lq          $v1, 0x50($a0)
    ctx->pc = 0x344918u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 80)));
label_34491c:
    // 0x34491c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34491cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_344920:
    // 0x344920: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x344920u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_344924:
    // 0x344924: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x344924u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344928:
    // 0x344928: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x344928u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_34492c:
    // 0x34492c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x34492cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_344930:
    // 0x344930: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x344930u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_344934:
    // 0x344934: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x344934u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344938:
    // 0x344938: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x344938u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_34493c:
    // 0x34493c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x34493cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344940:
    // 0x344940: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x344940u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_344944:
    // 0x344944: 0x4a0003bf  vwaitq
    ctx->pc = 0x344944u;
    // VWAITQ (Q already resolved in this runtime)
label_344948:
    // 0x344948: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x344948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_34494c:
    // 0x34494c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x34494cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_344950:
    // 0x344950: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x344950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_344954:
    // 0x344954: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x344954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_344958:
    // 0x344958: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x344958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
label_34495c:
    // 0x34495c: 0x45000170  bc1f        . + 4 + (0x170 << 2)
label_344960:
    if (ctx->pc == 0x344960u) {
        ctx->pc = 0x344960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34495Cu;
        // 0x344960: 0x7fa40090  sq          $a0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344964u;
        goto label_344964;
    }
    ctx->pc = 0x34495Cu;
    {
        const bool branch_taken_0x34495c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34495Cu;
        // 0x344960: 0x7fa40090  sq          $a0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34495c) {
            ctx->pc = 0x344F20u;
            goto label_344f20;
        }
    }
    ctx->pc = 0x344964u;
label_344964:
    // 0x344964: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x344964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344968:
    // 0x344968: 0x1000016f  b           . + 4 + (0x16F << 2)
label_34496c:
    if (ctx->pc == 0x34496Cu) {
        ctx->pc = 0x34496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344968u;
        // 0x34496c: 0xc7a100a8  lwc1        $f1, 0xA8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344970u;
        goto label_344970;
    }
    ctx->pc = 0x344968u;
    {
        const bool branch_taken_0x344968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344968u;
        // 0x34496c: 0xc7a100a8  lwc1        $f1, 0xA8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344968) {
            ctx->pc = 0x344F28u;
            goto label_344f28;
        }
    }
    ctx->pc = 0x344970u;
label_344970:
    // 0x344970: 0x4612a036  c.le.s      $f20, $f18
    ctx->pc = 0x344970u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[18])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344974:
    // 0x344974: 0x0  nop
    ctx->pc = 0x344974u;
    // NOP
label_344978:
    // 0x344978: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_34497c:
    if (ctx->pc == 0x34497Cu) {
        ctx->pc = 0x34497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344978u;
        // 0x34497c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x344980u;
        goto label_344980;
    }
    ctx->pc = 0x344978u;
    {
        const bool branch_taken_0x344978 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344978u;
        // 0x34497c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344978) {
            ctx->pc = 0x344A00u;
            goto label_344a00;
        }
    }
    ctx->pc = 0x344980u;
label_344980:
    // 0x344980: 0xc6ce0040  lwc1        $f14, 0x40($s6)
    ctx->pc = 0x344980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_344984:
    // 0x344984: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x344984u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_344988:
    // 0x344988: 0x46000bc6  mov.s       $f15, $f1
    ctx->pc = 0x344988u;
    ctx->f[15] = FPU_MOV_S(ctx->f[1]);
label_34498c:
    // 0x34498c: 0x46001446  mov.s       $f17, $f2
    ctx->pc = 0x34498cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[2]);
label_344990:
    // 0x344990: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x344990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_344994:
    // 0x344994: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x344994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_344998:
    // 0x344998: 0x27a500a4  addiu       $a1, $sp, 0xA4
    ctx->pc = 0x344998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_34499c:
    // 0x34499c: 0xc0d29b4  jal         func_34A6D0
label_3449a0:
    if (ctx->pc == 0x3449A0u) {
        ctx->pc = 0x3449A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34499Cu;
        // 0x3449a0: 0x27a600a8  addiu       $a2, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3449A4u;
        goto label_3449a4;
    }
    ctx->pc = 0x34499Cu;
    SET_GPR_U32(ctx, 31, 0x3449A4u);
    ctx->pc = 0x3449A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34499Cu;
    // 0x3449a0: 0x27a600a8  addiu       $a2, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A6D0u, 0x34499Cu, 0x3449A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449A4u;
label_3449a4:
    // 0x3449a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3449a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3449a8:
    // 0x3449a8: 0x1200017f  beqz        $s0, . + 4 + (0x17F << 2)
label_3449ac:
    if (ctx->pc == 0x3449ACu) {
        ctx->pc = 0x3449ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3449A8u;
        // 0x3449ac: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3449B0u;
        goto label_3449b0;
    }
    ctx->pc = 0x3449A8u;
    {
        const bool branch_taken_0x3449a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3449ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3449A8u;
        // 0x3449ac: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3449a8) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x3449B0u;
label_3449b0:
    // 0x3449b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3449b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3449b4:
    // 0x3449b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3449b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3449b8:
    // 0x3449b8: 0x0  nop
    ctx->pc = 0x3449b8u;
    // NOP
label_3449bc:
    // 0x3449bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3449bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3449c0:
    // 0x3449c0: 0x0  nop
    ctx->pc = 0x3449c0u;
    // NOP
label_3449c4:
    // 0x3449c4: 0x45000178  bc1f        . + 4 + (0x178 << 2)
label_3449c8:
    if (ctx->pc == 0x3449C8u) {
        ctx->pc = 0x3449C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3449C4u;
        // 0x3449c8: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3449CCu;
        goto label_3449cc;
    }
    ctx->pc = 0x3449C4u;
    {
        const bool branch_taken_0x3449c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3449C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3449C4u;
        // 0x3449c8: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3449c4) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x3449CCu;
label_3449cc:
    // 0x3449cc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3449ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3449d0:
    // 0x3449d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3449d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3449d4:
    // 0x3449d4: 0x78620050  lq          $v0, 0x50($v1)
    ctx->pc = 0x3449d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 80)));
label_3449d8:
    // 0x3449d8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x3449d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_3449dc:
    // 0x3449dc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3449dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3449e0:
    // 0x3449e0: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x3449e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3449e4:
    // 0x3449e4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3449e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3449e8:
    // 0x3449e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3449e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3449ec:
    // 0x3449ec: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x3449ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_3449f0:
    // 0x3449f0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3449f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3449f4:
    // 0x3449f4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3449f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3449f8:
    // 0x3449f8: 0x10000072  b           . + 4 + (0x72 << 2)
label_3449fc:
    if (ctx->pc == 0x3449FCu) {
        ctx->pc = 0x3449FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3449F8u;
        // 0x3449fc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344A00u;
        goto label_344a00;
    }
    ctx->pc = 0x3449F8u;
    {
        const bool branch_taken_0x3449f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3449FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3449F8u;
        // 0x3449fc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3449f8) {
            ctx->pc = 0x344BC4u;
            goto label_344bc4;
        }
    }
    ctx->pc = 0x344A00u;
label_344a00:
    // 0x344a00: 0x46008407  neg.s       $f16, $f16
    ctx->pc = 0x344a00u;
    ctx->f[16] = FPU_NEG_S(ctx->f[16]);
label_344a04:
    // 0x344a04: 0xc6ce0040  lwc1        $f14, 0x40($s6)
    ctx->pc = 0x344a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_344a08:
    // 0x344a08: 0x4600a347  neg.s       $f13, $f20
    ctx->pc = 0x344a08u;
    ctx->f[13] = FPU_NEG_S(ctx->f[20]);
label_344a0c:
    // 0x344a0c: 0x46000bc6  mov.s       $f15, $f1
    ctx->pc = 0x344a0cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[1]);
label_344a10:
    // 0x344a10: 0x46001446  mov.s       $f17, $f2
    ctx->pc = 0x344a10u;
    ctx->f[17] = FPU_MOV_S(ctx->f[2]);
label_344a14:
    // 0x344a14: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x344a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_344a18:
    // 0x344a18: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x344a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_344a1c:
    // 0x344a1c: 0x27a500a4  addiu       $a1, $sp, 0xA4
    ctx->pc = 0x344a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_344a20:
    // 0x344a20: 0xc0d28c6  jal         func_34A318
label_344a24:
    if (ctx->pc == 0x344A24u) {
        ctx->pc = 0x344A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344A20u;
        // 0x344a24: 0x27a600a8  addiu       $a2, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344A28u;
        goto label_344a28;
    }
    ctx->pc = 0x344A20u;
    SET_GPR_U32(ctx, 31, 0x344A28u);
    ctx->pc = 0x344A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A20u;
    // 0x344a24: 0x27a600a8  addiu       $a2, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A318u, 0x344A20u, 0x344A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A28u;
label_344a28:
    // 0x344a28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x344a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_344a2c:
    // 0x344a2c: 0x1200015e  beqz        $s0, . + 4 + (0x15E << 2)
label_344a30:
    if (ctx->pc == 0x344A30u) {
        ctx->pc = 0x344A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344A2Cu;
        // 0x344a30: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344A34u;
        goto label_344a34;
    }
    ctx->pc = 0x344A2Cu;
    {
        const bool branch_taken_0x344a2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x344A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344A2Cu;
        // 0x344a30: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344a2c) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x344A34u;
label_344a34:
    // 0x344a34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x344a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_344a38:
    // 0x344a38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x344a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344a3c:
    // 0x344a3c: 0x0  nop
    ctx->pc = 0x344a3cu;
    // NOP
label_344a40:
    // 0x344a40: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x344a40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344a44:
    // 0x344a44: 0x0  nop
    ctx->pc = 0x344a44u;
    // NOP
label_344a48:
    // 0x344a48: 0x45000157  bc1f        . + 4 + (0x157 << 2)
label_344a4c:
    if (ctx->pc == 0x344A4Cu) {
        ctx->pc = 0x344A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344A48u;
        // 0x344a4c: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344A50u;
        goto label_344a50;
    }
    ctx->pc = 0x344A48u;
    {
        const bool branch_taken_0x344a48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344A48u;
        // 0x344a4c: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344a48) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x344A50u;
label_344a50:
    // 0x344a50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x344a50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344a54:
    // 0x344a54: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x344a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_344a58:
    // 0x344a58: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x344a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_344a5c:
    // 0x344a5c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x344a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_344a60:
    // 0x344a60: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x344a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344a64:
    // 0x344a64: 0x2322021  addu        $a0, $s1, $s2
    ctx->pc = 0x344a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_344a68:
    // 0x344a68: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x344a68u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_344a6c:
    // 0x344a6c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x344a6cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_344a70:
    // 0x344a70: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x344a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_344a74:
    // 0x344a74: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x344a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344a78:
    // 0x344a78: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x344a78u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_344a7c:
    // 0x344a7c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x344a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_344a80:
    // 0x344a80: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x344a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_344a84:
    // 0x344a84: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x344a84u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_344a88:
    // 0x344a88: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x344a88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_344a8c:
    // 0x344a8c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x344a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344a90:
    // 0x344a90: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x344a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_344a94:
    // 0x344a94: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x344a94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_344a98:
    // 0x344a98: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x344a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_344a9c:
    // 0x344a9c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x344a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_344aa0:
    // 0x344aa0: 0x78830050  lq          $v1, 0x50($a0)
    ctx->pc = 0x344aa0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 80)));
label_344aa4:
    // 0x344aa4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x344aa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_344aa8:
    // 0x344aa8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x344aa8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_344aac:
    // 0x344aac: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x344aacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344ab0:
    // 0x344ab0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x344ab0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_344ab4:
    // 0x344ab4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x344ab4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_344ab8:
    // 0x344ab8: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x344ab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_344abc:
    // 0x344abc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x344abcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_344ac0:
    // 0x344ac0: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x344ac0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344ac4:
    // 0x344ac4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x344ac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344ac8:
    // 0x344ac8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x344ac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344acc:
    // 0x344acc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x344accu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_344ad0:
    // 0x344ad0: 0x4a0003bf  vwaitq
    ctx->pc = 0x344ad0u;
    // VWAITQ (Q already resolved in this runtime)
label_344ad4:
    // 0x344ad4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x344ad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_344ad8:
    // 0x344ad8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x344ad8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_344adc:
    // 0x344adc: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x344adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_344ae0:
    // 0x344ae0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x344ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_344ae4:
    // 0x344ae4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x344ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_344ae8:
    // 0x344ae8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_344aec:
    if (ctx->pc == 0x344AECu) {
        ctx->pc = 0x344AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344AE8u;
        // 0x344aec: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344AF0u;
        goto label_344af0;
    }
    ctx->pc = 0x344AE8u;
    {
        const bool branch_taken_0x344ae8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344AE8u;
        // 0x344aec: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ae8) {
            ctx->pc = 0x344B08u;
            goto label_344b08;
        }
    }
    ctx->pc = 0x344AF0u;
label_344af0:
    // 0x344af0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x344af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344af4:
    // 0x344af4: 0x4602a041  sub.s       $f1, $f20, $f2
    ctx->pc = 0x344af4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_344af8:
    // 0x344af8: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x344af8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_344afc:
    // 0x344afc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x344afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_344b00:
    // 0x344b00: 0x1000010d  b           . + 4 + (0x10D << 2)
label_344b04:
    if (ctx->pc == 0x344B04u) {
        ctx->pc = 0x344B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B00u;
        // 0x344b04: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344B08u;
        goto label_344b08;
    }
    ctx->pc = 0x344B00u;
    {
        const bool branch_taken_0x344b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B00u;
        // 0x344b04: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b00) {
            ctx->pc = 0x344F38u;
            goto label_344f38;
        }
    }
    ctx->pc = 0x344B08u;
label_344b08:
    // 0x344b08: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x344b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344b0c:
    // 0x344b0c: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x344b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_344b10:
    // 0x344b10: 0x10000106  b           . + 4 + (0x106 << 2)
label_344b14:
    if (ctx->pc == 0x344B14u) {
        ctx->pc = 0x344B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B10u;
        // 0x344b14: 0x4600a800  add.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x344B18u;
        goto label_344b18;
    }
    ctx->pc = 0x344B10u;
    {
        const bool branch_taken_0x344b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B10u;
        // 0x344b14: 0x4600a800  add.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b10) {
            ctx->pc = 0x344F2Cu;
            goto label_344f2c;
        }
    }
    ctx->pc = 0x344B18u;
label_344b18:
    // 0x344b18: 0x4602a836  c.le.s      $f21, $f2
    ctx->pc = 0x344b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344b1c:
    // 0x344b1c: 0x0  nop
    ctx->pc = 0x344b1cu;
    // NOP
label_344b20:
    // 0x344b20: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
label_344b24:
    if (ctx->pc == 0x344B24u) {
        ctx->pc = 0x344B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B20u;
        // 0x344b24: 0xc1080  sll         $v0, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344B28u;
        goto label_344b28;
    }
    ctx->pc = 0x344B20u;
    {
        const bool branch_taken_0x344b20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B20u;
        // 0x344b24: 0xc1080  sll         $v0, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b20) {
            ctx->pc = 0x344CD0u;
            goto label_344cd0;
        }
    }
    ctx->pc = 0x344B28u;
label_344b28:
    // 0x344b28: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x344b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_344b2c:
    // 0x344b2c: 0xc4510000  lwc1        $f17, 0x0($v0)
    ctx->pc = 0x344b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_344b30:
    // 0x344b30: 0x46008807  neg.s       $f0, $f17
    ctx->pc = 0x344b30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[17]);
label_344b34:
    // 0x344b34: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x344b34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344b38:
    // 0x344b38: 0x0  nop
    ctx->pc = 0x344b38u;
    // NOP
label_344b3c:
    // 0x344b3c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_344b40:
    if (ctx->pc == 0x344B40u) {
        ctx->pc = 0x344B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B3Cu;
        // 0x344b40: 0x460083c6  mov.s       $f15, $f16 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x344B44u;
        goto label_344b44;
    }
    ctx->pc = 0x344B3Cu;
    {
        const bool branch_taken_0x344b3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B3Cu;
        // 0x344b40: 0x460083c6  mov.s       $f15, $f16 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b3c) {
            ctx->pc = 0x344BCCu;
            goto label_344bcc;
        }
    }
    ctx->pc = 0x344B44u;
label_344b44:
    // 0x344b44: 0xc6ce0040  lwc1        $f14, 0x40($s6)
    ctx->pc = 0x344b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_344b48:
    // 0x344b48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x344b48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_344b4c:
    // 0x344b4c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x344b4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_344b50:
    // 0x344b50: 0x46000c06  mov.s       $f16, $f1
    ctx->pc = 0x344b50u;
    ctx->f[16] = FPU_MOV_S(ctx->f[1]);
label_344b54:
    // 0x344b54: 0x46001486  mov.s       $f18, $f2
    ctx->pc = 0x344b54u;
    ctx->f[18] = FPU_MOV_S(ctx->f[2]);
label_344b58:
    // 0x344b58: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x344b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_344b5c:
    // 0x344b5c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x344b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_344b60:
    // 0x344b60: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x344b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_344b64:
    // 0x344b64: 0xc0d29b4  jal         func_34A6D0
label_344b68:
    if (ctx->pc == 0x344B68u) {
        ctx->pc = 0x344B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B64u;
        // 0x344b68: 0x27a600a4  addiu       $a2, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344B6Cu;
        goto label_344b6c;
    }
    ctx->pc = 0x344B64u;
    SET_GPR_U32(ctx, 31, 0x344B6Cu);
    ctx->pc = 0x344B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344B64u;
    // 0x344b68: 0x27a600a4  addiu       $a2, $sp, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A6D0u, 0x344B64u, 0x344B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B6Cu;
label_344b6c:
    // 0x344b6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x344b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_344b70:
    // 0x344b70: 0x1200010d  beqz        $s0, . + 4 + (0x10D << 2)
label_344b74:
    if (ctx->pc == 0x344B74u) {
        ctx->pc = 0x344B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B70u;
        // 0x344b74: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344B78u;
        goto label_344b78;
    }
    ctx->pc = 0x344B70u;
    {
        const bool branch_taken_0x344b70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x344B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B70u;
        // 0x344b74: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b70) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x344B78u;
label_344b78:
    // 0x344b78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x344b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_344b7c:
    // 0x344b7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x344b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_344b80:
    // 0x344b80: 0x0  nop
    ctx->pc = 0x344b80u;
    // NOP
label_344b84:
    // 0x344b84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x344b84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344b88:
    // 0x344b88: 0x0  nop
    ctx->pc = 0x344b88u;
    // NOP
label_344b8c:
    // 0x344b8c: 0x45000106  bc1f        . + 4 + (0x106 << 2)
label_344b90:
    if (ctx->pc == 0x344B90u) {
        ctx->pc = 0x344B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B8Cu;
        // 0x344b90: 0x2321821  addu        $v1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344B94u;
        goto label_344b94;
    }
    ctx->pc = 0x344B8Cu;
    {
        const bool branch_taken_0x344b8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B8Cu;
        // 0x344b90: 0x2321821  addu        $v1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b8c) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x344B94u;
label_344b94:
    // 0x344b94: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x344b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_344b98:
    // 0x344b98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x344b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344b9c:
    // 0x344b9c: 0x78620050  lq          $v0, 0x50($v1)
    ctx->pc = 0x344b9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 80)));
label_344ba0:
    // 0x344ba0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x344ba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_344ba4:
    // 0x344ba4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x344ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_344ba8:
    // 0x344ba8: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x344ba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_344bac:
    // 0x344bac: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x344bacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_344bb0:
    // 0x344bb0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x344bb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_344bb4:
    // 0x344bb4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x344bb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_344bb8:
    // 0x344bb8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x344bb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_344bbc:
    // 0x344bbc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x344bbcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_344bc0:
    // 0x344bc0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x344bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_344bc4:
    // 0x344bc4: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_344bc8:
    if (ctx->pc == 0x344BC8u) {
        ctx->pc = 0x344BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344BC4u;
        // 0x344bc8: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344BCCu;
        goto label_344bcc;
    }
    ctx->pc = 0x344BC4u;
    {
        const bool branch_taken_0x344bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344BC4u;
        // 0x344bc8: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344bc4) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x344BCCu;
label_344bcc:
    // 0x344bcc: 0x4611a036  c.le.s      $f20, $f17
    ctx->pc = 0x344bccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344bd0:
    // 0x344bd0: 0x0  nop
    ctx->pc = 0x344bd0u;
    // NOP
label_344bd4:
    // 0x344bd4: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_344bd8:
    if (ctx->pc == 0x344BD8u) {
        ctx->pc = 0x344BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344BD4u;
        // 0x344bd8: 0x2321021  addu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344BDCu;
        goto label_344bdc;
    }
    ctx->pc = 0x344BD4u;
    {
        const bool branch_taken_0x344bd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344BD4u;
        // 0x344bd8: 0x2321021  addu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344bd4) {
            ctx->pc = 0x344C60u;
            goto label_344c60;
        }
    }
    ctx->pc = 0x344BDCu;
label_344bdc:
    // 0x344bdc: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x344bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_344be0:
    // 0x344be0: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x344be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_344be4:
    // 0x344be4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x344be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_344be8:
    // 0x344be8: 0x78430050  lq          $v1, 0x50($v0)
    ctx->pc = 0x344be8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 80)));
label_344bec:
    // 0x344bec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x344becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_344bf0:
    // 0x344bf0: 0x78820050  lq          $v0, 0x50($a0)
    ctx->pc = 0x344bf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 80)));
label_344bf4:
    // 0x344bf4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x344bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_344bf8:
    // 0x344bf8: 0x48ab0800  qmtc2.ni    $t3, $vf1
    ctx->pc = 0x344bf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
label_344bfc:
    // 0x344bfc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x344bfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_344c00:
    // 0x344c00: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x344c00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_344c04:
    // 0x344c04: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x344c04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_344c08:
    // 0x344c08: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x344c08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_344c0c:
    // 0x344c0c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x344c0cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_344c10:
    // 0x344c10: 0x48ab0800  qmtc2.ni    $t3, $vf1
    ctx->pc = 0x344c10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
label_344c14:
    // 0x344c14: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x344c14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_344c18:
    // 0x344c18: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x344c18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_344c1c:
    // 0x344c1c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x344c1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_344c20:
    // 0x344c20: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x344c20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_344c24:
    // 0x344c24: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x344c24u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
label_344c28:
    // 0x344c28: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x344c28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_344c2c:
    // 0x344c2c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x344c2cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344c30:
    // 0x344c30: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x344c30u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_344c34:
    // 0x344c34: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x344c34u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_344c38:
    // 0x344c38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x344c38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344c3c:
    // 0x344c3c: 0x0  nop
    ctx->pc = 0x344c3cu;
    // NOP
label_344c40:
    // 0x344c40: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_344c44:
    if (ctx->pc == 0x344C44u) {
        ctx->pc = 0x344C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C40u;
        // 0x344c44: 0x78a20050  lq          $v0, 0x50($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344C48u;
        goto label_344c48;
    }
    ctx->pc = 0x344C40u;
    {
        const bool branch_taken_0x344c40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x344c40) {
            ctx->pc = 0x344C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344C40u;
            // 0x344c44: 0x78a20050  lq          $v0, 0x50($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344C4Cu;
            goto label_344c4c;
        }
    }
    ctx->pc = 0x344C48u;
label_344c48:
    // 0x344c48: 0x78c20050  lq          $v0, 0x50($a2)
    ctx->pc = 0x344c48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 80)));
label_344c4c:
    // 0x344c4c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x344c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_344c50:
    // 0x344c50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x344c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_344c54:
    // 0x344c54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x344c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344c58:
    // 0x344c58: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_344c5c:
    if (ctx->pc == 0x344C5Cu) {
        ctx->pc = 0x344C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C58u;
        // 0x344c5c: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344C60u;
        goto label_344c60;
    }
    ctx->pc = 0x344C58u;
    {
        const bool branch_taken_0x344c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C58u;
        // 0x344c5c: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c58) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x344C60u;
label_344c60:
    // 0x344c60: 0x460083c7  neg.s       $f15, $f16
    ctx->pc = 0x344c60u;
    ctx->f[15] = FPU_NEG_S(ctx->f[16]);
label_344c64:
    // 0x344c64: 0xc6ce0040  lwc1        $f14, 0x40($s6)
    ctx->pc = 0x344c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_344c68:
    // 0x344c68: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x344c68u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
label_344c6c:
    // 0x344c6c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x344c6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_344c70:
    // 0x344c70: 0x46000c06  mov.s       $f16, $f1
    ctx->pc = 0x344c70u;
    ctx->f[16] = FPU_MOV_S(ctx->f[1]);
label_344c74:
    // 0x344c74: 0x46001486  mov.s       $f18, $f2
    ctx->pc = 0x344c74u;
    ctx->f[18] = FPU_MOV_S(ctx->f[2]);
label_344c78:
    // 0x344c78: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x344c78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_344c7c:
    // 0x344c7c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x344c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_344c80:
    // 0x344c80: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x344c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_344c84:
    // 0x344c84: 0xc0d29b4  jal         func_34A6D0
label_344c88:
    if (ctx->pc == 0x344C88u) {
        ctx->pc = 0x344C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C84u;
        // 0x344c88: 0x27a600a4  addiu       $a2, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344C8Cu;
        goto label_344c8c;
    }
    ctx->pc = 0x344C84u;
    SET_GPR_U32(ctx, 31, 0x344C8Cu);
    ctx->pc = 0x344C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344C84u;
    // 0x344c88: 0x27a600a4  addiu       $a2, $sp, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A6D0u, 0x344C84u, 0x344C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C8Cu;
label_344c8c:
    // 0x344c8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x344c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_344c90:
    // 0x344c90: 0x120000c5  beqz        $s0, . + 4 + (0xC5 << 2)
label_344c94:
    if (ctx->pc == 0x344C94u) {
        ctx->pc = 0x344C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C90u;
        // 0x344c94: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344C98u;
        goto label_344c98;
    }
    ctx->pc = 0x344C90u;
    {
        const bool branch_taken_0x344c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x344C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C90u;
        // 0x344c94: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c90) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x344C98u;
label_344c98:
    // 0x344c98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x344c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_344c9c:
    // 0x344c9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x344c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_344ca0:
    // 0x344ca0: 0x0  nop
    ctx->pc = 0x344ca0u;
    // NOP
label_344ca4:
    // 0x344ca4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x344ca4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344ca8:
    // 0x344ca8: 0x0  nop
    ctx->pc = 0x344ca8u;
    // NOP
label_344cac:
    // 0x344cac: 0x450000be  bc1f        . + 4 + (0xBE << 2)
label_344cb0:
    if (ctx->pc == 0x344CB0u) {
        ctx->pc = 0x344CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CACu;
        // 0x344cb0: 0xc7a000a8  lwc1        $f0, 0xA8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344CB4u;
        goto label_344cb4;
    }
    ctx->pc = 0x344CACu;
    {
        const bool branch_taken_0x344cac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CACu;
        // 0x344cb0: 0xc7a000a8  lwc1        $f0, 0xA8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344cac) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x344CB4u;
label_344cb4:
    // 0x344cb4: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x344cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_344cb8:
    // 0x344cb8: 0x78430050  lq          $v1, 0x50($v0)
    ctx->pc = 0x344cb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 80)));
label_344cbc:
    // 0x344cbc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x344cbcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_344cc0:
    // 0x344cc0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x344cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_344cc4:
    // 0x344cc4: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x344cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_344cc8:
    // 0x344cc8: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_344ccc:
    if (ctx->pc == 0x344CCCu) {
        ctx->pc = 0x344CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CC8u;
        // 0x344ccc: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344CD0u;
        goto label_344cd0;
    }
    ctx->pc = 0x344CC8u;
    {
        const bool branch_taken_0x344cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CC8u;
        // 0x344ccc: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344cc8) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x344CD0u;
label_344cd0:
    // 0x344cd0: 0x1a2a021  addu        $s4, $t5, $v0
    ctx->pc = 0x344cd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_344cd4:
    // 0x344cd4: 0xc6920000  lwc1        $f18, 0x0($s4)
    ctx->pc = 0x344cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_344cd8:
    // 0x344cd8: 0x46009007  neg.s       $f0, $f18
    ctx->pc = 0x344cd8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[18]);
label_344cdc:
    // 0x344cdc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x344cdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344ce0:
    // 0x344ce0: 0x0  nop
    ctx->pc = 0x344ce0u;
    // NOP
label_344ce4:
    // 0x344ce4: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
label_344ce8:
    if (ctx->pc == 0x344CE8u) {
        ctx->pc = 0x344CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CE4u;
        // 0x344ce8: 0x46001446  mov.s       $f17, $f2 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x344CECu;
        goto label_344cec;
    }
    ctx->pc = 0x344CE4u;
    {
        const bool branch_taken_0x344ce4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CE4u;
        // 0x344ce8: 0x46001446  mov.s       $f17, $f2 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ce4) {
            ctx->pc = 0x344DD0u;
            goto label_344dd0;
        }
    }
    ctx->pc = 0x344CECu;
label_344cec:
    // 0x344cec: 0x46000bc7  neg.s       $f15, $f1
    ctx->pc = 0x344cecu;
    ctx->f[15] = FPU_NEG_S(ctx->f[1]);
label_344cf0:
    // 0x344cf0: 0xc6ce0040  lwc1        $f14, 0x40($s6)
    ctx->pc = 0x344cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_344cf4:
    // 0x344cf4: 0x4600ab07  neg.s       $f12, $f21
    ctx->pc = 0x344cf4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[21]);
label_344cf8:
    // 0x344cf8: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x344cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_344cfc:
    // 0x344cfc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x344cfcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_344d00:
    // 0x344d00: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x344d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_344d04:
    // 0x344d04: 0x27a500a4  addiu       $a1, $sp, 0xA4
    ctx->pc = 0x344d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_344d08:
    // 0x344d08: 0xc0d28c6  jal         func_34A318
label_344d0c:
    if (ctx->pc == 0x344D0Cu) {
        ctx->pc = 0x344D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D08u;
        // 0x344d0c: 0x27a600a8  addiu       $a2, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344D10u;
        goto label_344d10;
    }
    ctx->pc = 0x344D08u;
    SET_GPR_U32(ctx, 31, 0x344D10u);
    ctx->pc = 0x344D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D08u;
    // 0x344d0c: 0x27a600a8  addiu       $a2, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A318u, 0x344D08u, 0x344D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344D10u;
label_344d10:
    // 0x344d10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x344d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_344d14:
    // 0x344d14: 0x120000a4  beqz        $s0, . + 4 + (0xA4 << 2)
label_344d18:
    if (ctx->pc == 0x344D18u) {
        ctx->pc = 0x344D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D14u;
        // 0x344d18: 0xc7a200a0  lwc1        $f2, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344D1Cu;
        goto label_344d1c;
    }
    ctx->pc = 0x344D14u;
    {
        const bool branch_taken_0x344d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x344D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D14u;
        // 0x344d18: 0xc7a200a0  lwc1        $f2, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344d14) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x344D1Cu;
label_344d1c:
    // 0x344d1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x344d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_344d20:
    // 0x344d20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x344d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344d24:
    // 0x344d24: 0x0  nop
    ctx->pc = 0x344d24u;
    // NOP
label_344d28:
    // 0x344d28: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x344d28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344d2c:
    // 0x344d2c: 0x0  nop
    ctx->pc = 0x344d2cu;
    // NOP
label_344d30:
    // 0x344d30: 0x4500009d  bc1f        . + 4 + (0x9D << 2)
label_344d34:
    if (ctx->pc == 0x344D34u) {
        ctx->pc = 0x344D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D30u;
        // 0x344d34: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344D38u;
        goto label_344d38;
    }
    ctx->pc = 0x344D30u;
    {
        const bool branch_taken_0x344d30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D30u;
        // 0x344d34: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344d30) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x344D38u;
label_344d38:
    // 0x344d38: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x344d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344d3c:
    // 0x344d3c: 0x78430050  lq          $v1, 0x50($v0)
    ctx->pc = 0x344d3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 80)));
label_344d40:
    // 0x344d40: 0x2322021  addu        $a0, $s1, $s2
    ctx->pc = 0x344d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_344d44:
    // 0x344d44: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x344d44u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_344d48:
    // 0x344d48: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x344d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_344d4c:
    // 0x344d4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x344d4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344d50:
    // 0x344d50: 0x78820050  lq          $v0, 0x50($a0)
    ctx->pc = 0x344d50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 80)));
label_344d54:
    // 0x344d54: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x344d54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_344d58:
    // 0x344d58: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x344d58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_344d5c:
    // 0x344d5c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x344d5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344d60:
    // 0x344d60: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x344d60u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_344d64:
    // 0x344d64: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x344d64u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_344d68:
    // 0x344d68: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x344d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344d6c:
    // 0x344d6c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x344d6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_344d70:
    // 0x344d70: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x344d70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344d74:
    // 0x344d74: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x344d74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344d78:
    // 0x344d78: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x344d78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344d7c:
    // 0x344d7c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x344d7cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_344d80:
    // 0x344d80: 0x4a0003bf  vwaitq
    ctx->pc = 0x344d80u;
    // VWAITQ (Q already resolved in this runtime)
label_344d84:
    // 0x344d84: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x344d84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_344d88:
    // 0x344d88: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x344d88u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_344d8c:
    // 0x344d8c: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x344d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_344d90:
    // 0x344d90: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x344d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_344d94:
    // 0x344d94: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x344d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_344d98:
    // 0x344d98: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x344d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_344d9c:
    // 0x344d9c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_344da0:
    if (ctx->pc == 0x344DA0u) {
        ctx->pc = 0x344DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D9Cu;
        // 0x344da0: 0xe7a100a4  swc1        $f1, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344DA4u;
        goto label_344da4;
    }
    ctx->pc = 0x344D9Cu;
    {
        const bool branch_taken_0x344d9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D9Cu;
        // 0x344da0: 0xe7a100a4  swc1        $f1, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344d9c) {
            ctx->pc = 0x344DBCu;
            goto label_344dbc;
        }
    }
    ctx->pc = 0x344DA4u;
label_344da4:
    // 0x344da4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x344da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344da8:
    // 0x344da8: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x344da8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_344dac:
    // 0x344dac: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x344dacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_344db0:
    // 0x344db0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x344db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_344db4:
    // 0x344db4: 0x10000060  b           . + 4 + (0x60 << 2)
label_344db8:
    if (ctx->pc == 0x344DB8u) {
        ctx->pc = 0x344DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DB4u;
        // 0x344db8: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344DBCu;
        goto label_344dbc;
    }
    ctx->pc = 0x344DB4u;
    {
        const bool branch_taken_0x344db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DB4u;
        // 0x344db8: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344db4) {
            ctx->pc = 0x344F38u;
            goto label_344f38;
        }
    }
    ctx->pc = 0x344DBCu;
label_344dbc:
    // 0x344dbc: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x344dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344dc0:
    // 0x344dc0: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x344dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_344dc4:
    // 0x344dc4: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x344dc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_344dc8:
    // 0x344dc8: 0x10000059  b           . + 4 + (0x59 << 2)
label_344dcc:
    if (ctx->pc == 0x344DCCu) {
        ctx->pc = 0x344DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DC8u;
        // 0x344dcc: 0x4601a040  add.s       $f1, $f20, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x344DD0u;
        goto label_344dd0;
    }
    ctx->pc = 0x344DC8u;
    {
        const bool branch_taken_0x344dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DC8u;
        // 0x344dcc: 0x4601a040  add.s       $f1, $f20, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344dc8) {
            ctx->pc = 0x344F30u;
            goto label_344f30;
        }
    }
    ctx->pc = 0x344DD0u;
label_344dd0:
    // 0x344dd0: 0x4612a036  c.le.s      $f20, $f18
    ctx->pc = 0x344dd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[18])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344dd4:
    // 0x344dd4: 0x0  nop
    ctx->pc = 0x344dd4u;
    // NOP
label_344dd8:
    // 0x344dd8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_344ddc:
    if (ctx->pc == 0x344DDCu) {
        ctx->pc = 0x344DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DD8u;
        // 0x344ddc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x344DE0u;
        goto label_344de0;
    }
    ctx->pc = 0x344DD8u;
    {
        const bool branch_taken_0x344dd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DD8u;
        // 0x344ddc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344dd8) {
            ctx->pc = 0x344E48u;
            goto label_344e48;
        }
    }
    ctx->pc = 0x344DE0u;
label_344de0:
    // 0x344de0: 0x4600ab07  neg.s       $f12, $f21
    ctx->pc = 0x344de0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[21]);
label_344de4:
    // 0x344de4: 0xc6ce0040  lwc1        $f14, 0x40($s6)
    ctx->pc = 0x344de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_344de8:
    // 0x344de8: 0x46000bc7  neg.s       $f15, $f1
    ctx->pc = 0x344de8u;
    ctx->f[15] = FPU_NEG_S(ctx->f[1]);
label_344dec:
    // 0x344dec: 0x46001446  mov.s       $f17, $f2
    ctx->pc = 0x344decu;
    ctx->f[17] = FPU_MOV_S(ctx->f[2]);
label_344df0:
    // 0x344df0: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x344df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_344df4:
    // 0x344df4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x344df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_344df8:
    // 0x344df8: 0x27a500a4  addiu       $a1, $sp, 0xA4
    ctx->pc = 0x344df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_344dfc:
    // 0x344dfc: 0xc0d29b4  jal         func_34A6D0
label_344e00:
    if (ctx->pc == 0x344E00u) {
        ctx->pc = 0x344E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DFCu;
        // 0x344e00: 0x27a600a8  addiu       $a2, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344E04u;
        goto label_344e04;
    }
    ctx->pc = 0x344DFCu;
    SET_GPR_U32(ctx, 31, 0x344E04u);
    ctx->pc = 0x344E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344DFCu;
    // 0x344e00: 0x27a600a8  addiu       $a2, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A6D0u, 0x344DFCu, 0x344E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344E04u;
label_344e04:
    // 0x344e04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x344e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_344e08:
    // 0x344e08: 0x12000067  beqz        $s0, . + 4 + (0x67 << 2)
label_344e0c:
    if (ctx->pc == 0x344E0Cu) {
        ctx->pc = 0x344E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E08u;
        // 0x344e0c: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344E10u;
        goto label_344e10;
    }
    ctx->pc = 0x344E08u;
    {
        const bool branch_taken_0x344e08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x344E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E08u;
        // 0x344e0c: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e08) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x344E10u;
label_344e10:
    // 0x344e10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x344e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_344e14:
    // 0x344e14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x344e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_344e18:
    // 0x344e18: 0x0  nop
    ctx->pc = 0x344e18u;
    // NOP
label_344e1c:
    // 0x344e1c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x344e1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344e20:
    // 0x344e20: 0x0  nop
    ctx->pc = 0x344e20u;
    // NOP
label_344e24:
    // 0x344e24: 0x45000060  bc1f        . + 4 + (0x60 << 2)
label_344e28:
    if (ctx->pc == 0x344E28u) {
        ctx->pc = 0x344E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E24u;
        // 0x344e28: 0xc7a000a4  lwc1        $f0, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344E2Cu;
        goto label_344e2c;
    }
    ctx->pc = 0x344E24u;
    {
        const bool branch_taken_0x344e24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E24u;
        // 0x344e28: 0xc7a000a4  lwc1        $f0, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e24) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x344E2Cu;
label_344e2c:
    // 0x344e2c: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x344e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_344e30:
    // 0x344e30: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x344e30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_344e34:
    // 0x344e34: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x344e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_344e38:
    // 0x344e38: 0x78620050  lq          $v0, 0x50($v1)
    ctx->pc = 0x344e38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 80)));
label_344e3c:
    // 0x344e3c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x344e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_344e40:
    // 0x344e40: 0x10000059  b           . + 4 + (0x59 << 2)
label_344e44:
    if (ctx->pc == 0x344E44u) {
        ctx->pc = 0x344E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E40u;
        // 0x344e44: 0xe7a1002c  swc1        $f1, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344E48u;
        goto label_344e48;
    }
    ctx->pc = 0x344E40u;
    {
        const bool branch_taken_0x344e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E40u;
        // 0x344e44: 0xe7a1002c  swc1        $f1, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e40) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x344E48u;
label_344e48:
    // 0x344e48: 0x46000bc7  neg.s       $f15, $f1
    ctx->pc = 0x344e48u;
    ctx->f[15] = FPU_NEG_S(ctx->f[1]);
label_344e4c:
    // 0x344e4c: 0xc6ce0040  lwc1        $f14, 0x40($s6)
    ctx->pc = 0x344e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_344e50:
    // 0x344e50: 0x46008407  neg.s       $f16, $f16
    ctx->pc = 0x344e50u;
    ctx->f[16] = FPU_NEG_S(ctx->f[16]);
label_344e54:
    // 0x344e54: 0x46001446  mov.s       $f17, $f2
    ctx->pc = 0x344e54u;
    ctx->f[17] = FPU_MOV_S(ctx->f[2]);
label_344e58:
    // 0x344e58: 0x4600ab07  neg.s       $f12, $f21
    ctx->pc = 0x344e58u;
    ctx->f[12] = FPU_NEG_S(ctx->f[21]);
label_344e5c:
    // 0x344e5c: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x344e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_344e60:
    // 0x344e60: 0x4600a347  neg.s       $f13, $f20
    ctx->pc = 0x344e60u;
    ctx->f[13] = FPU_NEG_S(ctx->f[20]);
label_344e64:
    // 0x344e64: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x344e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_344e68:
    // 0x344e68: 0x27a500a4  addiu       $a1, $sp, 0xA4
    ctx->pc = 0x344e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_344e6c:
    // 0x344e6c: 0xc0d28c6  jal         func_34A318
label_344e70:
    if (ctx->pc == 0x344E70u) {
        ctx->pc = 0x344E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E6Cu;
        // 0x344e70: 0x27a600a8  addiu       $a2, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344E74u;
        goto label_344e74;
    }
    ctx->pc = 0x344E6Cu;
    SET_GPR_U32(ctx, 31, 0x344E74u);
    ctx->pc = 0x344E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344E6Cu;
    // 0x344e70: 0x27a600a8  addiu       $a2, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A318u, 0x344E6Cu, 0x344E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344E74u;
label_344e74:
    // 0x344e74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x344e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_344e78:
    // 0x344e78: 0x1200004b  beqz        $s0, . + 4 + (0x4B << 2)
label_344e7c:
    if (ctx->pc == 0x344E7Cu) {
        ctx->pc = 0x344E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E78u;
        // 0x344e7c: 0xc7a200a0  lwc1        $f2, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344E80u;
        goto label_344e80;
    }
    ctx->pc = 0x344E78u;
    {
        const bool branch_taken_0x344e78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x344E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E78u;
        // 0x344e7c: 0xc7a200a0  lwc1        $f2, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e78) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x344E80u;
label_344e80:
    // 0x344e80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x344e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_344e84:
    // 0x344e84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x344e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344e88:
    // 0x344e88: 0x0  nop
    ctx->pc = 0x344e88u;
    // NOP
label_344e8c:
    // 0x344e8c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x344e8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344e90:
    // 0x344e90: 0x0  nop
    ctx->pc = 0x344e90u;
    // NOP
label_344e94:
    // 0x344e94: 0x45000044  bc1f        . + 4 + (0x44 << 2)
label_344e98:
    if (ctx->pc == 0x344E98u) {
        ctx->pc = 0x344E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E94u;
        // 0x344e98: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344E9Cu;
        goto label_344e9c;
    }
    ctx->pc = 0x344E94u;
    {
        const bool branch_taken_0x344e94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E94u;
        // 0x344e98: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e94) {
            ctx->pc = 0x344FA8u;
            goto label_344fa8;
        }
    }
    ctx->pc = 0x344E9Cu;
label_344e9c:
    // 0x344e9c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x344e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_344ea0:
    // 0x344ea0: 0x78430050  lq          $v1, 0x50($v0)
    ctx->pc = 0x344ea0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 80)));
label_344ea4:
    // 0x344ea4: 0x2322021  addu        $a0, $s1, $s2
    ctx->pc = 0x344ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_344ea8:
    // 0x344ea8: 0x46000b47  neg.s       $f13, $f1
    ctx->pc = 0x344ea8u;
    ctx->f[13] = FPU_NEG_S(ctx->f[1]);
label_344eac:
    // 0x344eac: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x344eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344eb0:
    // 0x344eb0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x344eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_344eb4:
    // 0x344eb4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x344eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_344eb8:
    // 0x344eb8: 0x78820050  lq          $v0, 0x50($a0)
    ctx->pc = 0x344eb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 80)));
label_344ebc:
    // 0x344ebc: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x344ebcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_344ec0:
    // 0x344ec0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x344ec0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_344ec4:
    // 0x344ec4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x344ec4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_344ec8:
    // 0x344ec8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x344ec8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344ecc:
    // 0x344ecc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x344eccu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_344ed0:
    // 0x344ed0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x344ed0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_344ed4:
    // 0x344ed4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x344ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344ed8:
    // 0x344ed8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x344ed8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_344edc:
    // 0x344edc: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x344edcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344ee0:
    // 0x344ee0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x344ee0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344ee4:
    // 0x344ee4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x344ee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344ee8:
    // 0x344ee8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x344ee8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_344eec:
    // 0x344eec: 0x4a0003bf  vwaitq
    ctx->pc = 0x344eecu;
    // VWAITQ (Q already resolved in this runtime)
label_344ef0:
    // 0x344ef0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x344ef0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_344ef4:
    // 0x344ef4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x344ef4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_344ef8:
    // 0x344ef8: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x344ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_344efc:
    // 0x344efc: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x344efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_344f00:
    // 0x344f00: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x344f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_344f04:
    // 0x344f04: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x344f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_344f08:
    // 0x344f08: 0xe7ad00a4  swc1        $f13, 0xA4($sp)
    ctx->pc = 0x344f08u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_344f0c:
    // 0x344f0c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_344f10:
    if (ctx->pc == 0x344F10u) {
        ctx->pc = 0x344F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F0Cu;
        // 0x344f10: 0xe7ac00a8  swc1        $f12, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344F14u;
        goto label_344f14;
    }
    ctx->pc = 0x344F0Cu;
    {
        const bool branch_taken_0x344f0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F0Cu;
        // 0x344f10: 0xe7ac00a8  swc1        $f12, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344f0c) {
            ctx->pc = 0x344F20u;
            goto label_344f20;
        }
    }
    ctx->pc = 0x344F14u;
label_344f14:
    // 0x344f14: 0x460da801  sub.s       $f0, $f21, $f13
    ctx->pc = 0x344f14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[13]);
label_344f18:
    // 0x344f18: 0x10000005  b           . + 4 + (0x5 << 2)
label_344f1c:
    if (ctx->pc == 0x344F1Cu) {
        ctx->pc = 0x344F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F18u;
        // 0x344f1c: 0x460ca041  sub.s       $f1, $f20, $f12 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x344F20u;
        goto label_344f20;
    }
    ctx->pc = 0x344F18u;
    {
        const bool branch_taken_0x344f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F18u;
        // 0x344f1c: 0x460ca041  sub.s       $f1, $f20, $f12 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344f18) {
            ctx->pc = 0x344F30u;
            goto label_344f30;
        }
    }
    ctx->pc = 0x344F20u;
label_344f20:
    // 0x344f20: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x344f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344f24:
    // 0x344f24: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x344f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_344f28:
    // 0x344f28: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x344f28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_344f2c:
    // 0x344f2c: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x344f2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_344f30:
    // 0x344f30: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x344f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_344f34:
    // 0x344f34: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x344f34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_344f38:
    // 0x344f38: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x344f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_344f3c:
    // 0x344f3c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x344f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_344f40:
    // 0x344f40: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x344f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_344f44:
    // 0x344f44: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x344f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_344f48:
    // 0x344f48: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x344f48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_344f4c:
    // 0x344f4c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x344f4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_344f50:
    // 0x344f50: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x344f50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_344f54:
    // 0x344f54: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x344f54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_344f58:
    // 0x344f58: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x344f58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_344f5c:
    // 0x344f5c: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x344f5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_344f60:
    // 0x344f60: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x344f60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_344f64:
    // 0x344f64: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x344f64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_344f68:
    // 0x344f68: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x344f68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_344f6c:
    // 0x344f6c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x344f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_344f70:
    // 0x344f70: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x344f70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_344f74:
    // 0x344f74: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x344f74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_344f78:
    // 0x344f78: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x344f78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_344f7c:
    // 0x344f7c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x344f7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344f80:
    // 0x344f80: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x344f80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344f84:
    // 0x344f84: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x344f84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_344f88:
    // 0x344f88: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x344f88u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_344f8c:
    // 0x344f8c: 0x4a0003bf  vwaitq
    ctx->pc = 0x344f8cu;
    // VWAITQ (Q already resolved in this runtime)
label_344f90:
    // 0x344f90: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x344f90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_344f94:
    // 0x344f94: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x344f94u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_344f98:
    // 0x344f98: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x344f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_344f9c:
    // 0x344f9c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x344f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_344fa0:
    // 0x344fa0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x344fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_344fa4:
    // 0x344fa4: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x344fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_344fa8:
    // 0x344fa8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x344fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_344fac:
    // 0x344fac: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x344facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_344fb0:
    // 0x344fb0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x344fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_344fb4:
    // 0x344fb4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x344fb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_344fb8:
    // 0x344fb8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x344fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_344fbc:
    // 0x344fbc: 0x40f809  jalr        $v0
label_344fc0:
    if (ctx->pc == 0x344FC0u) {
        ctx->pc = 0x344FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FBCu;
        // 0x344fc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344FC4u;
        goto label_344fc4;
    }
    ctx->pc = 0x344FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x344FC4u);
        ctx->pc = 0x344FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FBCu;
        // 0x344fc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344FBCu, 0x344FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x344FC4u;
label_344fc4:
    // 0x344fc4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x344fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_344fc8:
    // 0x344fc8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x344fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_344fcc:
    // 0x344fcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_344fd0:
    if (ctx->pc == 0x344FD0u) {
        ctx->pc = 0x344FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FCCu;
        // 0x344fd0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344FD4u;
        goto label_344fd4;
    }
    ctx->pc = 0x344FCCu;
    {
        const bool branch_taken_0x344fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FCCu;
        // 0x344fd0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344fcc) {
            ctx->pc = 0x344FE0u;
            goto label_344fe0;
        }
    }
    ctx->pc = 0x344FD4u;
label_344fd4:
    // 0x344fd4: 0x248316c0  addiu       $v1, $a0, 0x16C0
    ctx->pc = 0x344fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
label_344fd8:
    // 0x344fd8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x344fd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_344fdc:
    // 0x344fdc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x344fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_344fe0:
    // 0x344fe0: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
label_344fe4:
    if (ctx->pc == 0x344FE4u) {
        ctx->pc = 0x344FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FE0u;
        // 0x344fe4: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344FE8u;
        goto label_344fe8;
    }
    ctx->pc = 0x344FE0u;
    {
        const bool branch_taken_0x344fe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x344FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FE0u;
        // 0x344fe4: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344fe0) {
            ctx->pc = 0x3450CCu;
            goto label_3450cc;
        }
    }
    ctx->pc = 0x344FE8u;
label_344fe8:
    // 0x344fe8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x344fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_344fec:
    // 0x344fec: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x344fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_344ff0:
    // 0x344ff0: 0x0  nop
    ctx->pc = 0x344ff0u;
    // NOP
label_344ff4:
    // 0x344ff4: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x344ff4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344ff8:
    // 0x344ff8: 0x0  nop
    ctx->pc = 0x344ff8u;
    // NOP
label_344ffc:
    // 0x344ffc: 0x45000033  bc1f        . + 4 + (0x33 << 2)
label_345000:
    if (ctx->pc == 0x345000u) {
        ctx->pc = 0x345000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FFCu;
        // 0x345000: 0x26a70060  addiu       $a3, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345004u;
        goto label_345004;
    }
    ctx->pc = 0x344FFCu;
    {
        const bool branch_taken_0x344ffc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x345000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FFCu;
        // 0x345000: 0x26a70060  addiu       $a3, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ffc) {
            ctx->pc = 0x3450CCu;
            goto label_3450cc;
        }
    }
    ctx->pc = 0x345004u;
label_345004:
    // 0x345004: 0xe6a00080  swc1        $f0, 0x80($s5)
    ctx->pc = 0x345004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 128), bits); }
label_345008:
    // 0x345008: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x345008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_34500c:
    // 0x34500c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34500cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_345010:
    // 0x345010: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x345010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_345014:
    // 0x345014: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x345014u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_345018:
    // 0x345018: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x345018u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_34501c:
    // 0x34501c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34501cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_345020:
    // 0x345020: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x345020u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_345024:
    // 0x345024: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x345024u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_345028:
    // 0x345028: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x345028u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_34502c:
    // 0x34502c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x34502cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_345030:
    // 0x345030: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x345030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_345034:
    // 0x345034: 0x7ea40090  sq          $a0, 0x90($s5)
    ctx->pc = 0x345034u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 144), GPR_VEC(ctx, 4));
label_345038:
    // 0x345038: 0x7ac30050  lq          $v1, 0x50($s6)
    ctx->pc = 0x345038u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 80)));
label_34503c:
    // 0x34503c: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x34503cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_345040:
    // 0x345040: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x345040u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_345044:
    // 0x345044: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x345044u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_345048:
    // 0x345048: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x345048u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_34504c:
    // 0x34504c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34504cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_345050:
    // 0x345050: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x345050u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_345054:
    // 0x345054: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x345054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_345058:
    // 0x345058: 0x7ea30090  sq          $v1, 0x90($s5)
    ctx->pc = 0x345058u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 144), GPR_VEC(ctx, 3));
label_34505c:
    // 0x34505c: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x34505cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
label_345060:
    // 0x345060: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x345060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_345064:
    // 0x345064: 0xc6c00044  lwc1        $f0, 0x44($s6)
    ctx->pc = 0x345064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_345068:
    // 0x345068: 0xc6a10098  lwc1        $f1, 0x98($s5)
    ctx->pc = 0x345068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34506c:
    // 0x34506c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x34506cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_345070:
    // 0x345070: 0x7ea60050  sq          $a2, 0x50($s5)
    ctx->pc = 0x345070u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 80), GPR_VEC(ctx, 6));
label_345074:
    // 0x345074: 0x7ea500a0  sq          $a1, 0xA0($s5)
    ctx->pc = 0x345074u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 160), GPR_VEC(ctx, 5));
label_345078:
    // 0x345078: 0xaebe00b0  sw          $fp, 0xB0($s5)
    ctx->pc = 0x345078u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 176), GPR_U32(ctx, 30));
label_34507c:
    // 0x34507c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34507cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_345080:
    // 0x345080: 0xe6a30060  swc1        $f3, 0x60($s5)
    ctx->pc = 0x345080u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 96), bits); }
label_345084:
    // 0x345084: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x345084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_345088:
    // 0x345088: 0xe6a10098  swc1        $f1, 0x98($s5)
    ctx->pc = 0x345088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 152), bits); }
label_34508c:
    // 0x34508c: 0xe4e5000c  swc1        $f5, 0xC($a3)
    ctx->pc = 0x34508cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_345090:
    // 0x345090: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x345090u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_345094:
    // 0x345094: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x345094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_345098:
    // 0x345098: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x345098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_34509c:
    // 0x34509c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x34509cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3450a0:
    // 0x3450a0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3450a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3450a4:
    // 0x3450a4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3450a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3450a8:
    // 0x3450a8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3450a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3450ac:
    // 0x3450ac: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3450acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3450b0:
    // 0x3450b0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3450b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3450b4:
    // 0x3450b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x3450b4u;
    // VWAITQ (Q already resolved in this runtime)
label_3450b8:
    // 0x3450b8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3450b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3450bc:
    // 0x3450bc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3450bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_3450c0:
    // 0x3450c0: 0x7ea30010  sq          $v1, 0x10($s5)
    ctx->pc = 0x3450c0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 3));
label_3450c4:
    // 0x3450c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3450c8:
    if (ctx->pc == 0x3450C8u) {
        ctx->pc = 0x3450C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3450C4u;
        // 0x3450c8: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3450CCu;
        goto label_3450cc;
    }
    ctx->pc = 0x3450C4u;
    {
        const bool branch_taken_0x3450c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3450C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3450C4u;
        // 0x3450c8: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3450c4) {
            ctx->pc = 0x3450D0u;
            goto label_3450d0;
        }
    }
    ctx->pc = 0x3450CCu;
label_3450cc:
    // 0x3450cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3450ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3450d0:
    // 0x3450d0: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x3450d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3450d4:
    // 0x3450d4: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x3450d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3450d8:
    // 0x3450d8: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x3450d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3450dc:
    // 0x3450dc: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x3450dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3450e0:
    // 0x3450e0: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x3450e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3450e4:
    // 0x3450e4: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x3450e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3450e8:
    // 0x3450e8: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x3450e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3450ec:
    // 0x3450ec: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x3450ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3450f0:
    // 0x3450f0: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x3450f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3450f4:
    // 0x3450f4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3450f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_3450f8:
    // 0x3450f8: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x3450f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3450fc:
    // 0x3450fc: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x3450fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_345100:
    // 0x345100: 0x3e00008  jr          $ra
label_345104:
    if (ctx->pc == 0x345104u) {
        ctx->pc = 0x345104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345100u;
        // 0x345104: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345108u;
        goto label_fallthrough_0x345100;
    }
    ctx->pc = 0x345100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345100u;
        // 0x345104: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x345100:
    ctx->pc = 0x345108u;
}
