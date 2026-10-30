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

// Function: sub_00301538
// Address: 0x301538 - 0x301cf8
void sub_00301538_0x301538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301538_0x301538");
#endif

    switch (ctx->pc) {
        case 0x301538u: goto label_301538;
        case 0x30153cu: goto label_30153c;
        case 0x301540u: goto label_301540;
        case 0x301544u: goto label_301544;
        case 0x301548u: goto label_301548;
        case 0x30154cu: goto label_30154c;
        case 0x301550u: goto label_301550;
        case 0x301554u: goto label_301554;
        case 0x301558u: goto label_301558;
        case 0x30155cu: goto label_30155c;
        case 0x301560u: goto label_301560;
        case 0x301564u: goto label_301564;
        case 0x301568u: goto label_301568;
        case 0x30156cu: goto label_30156c;
        case 0x301570u: goto label_301570;
        case 0x301574u: goto label_301574;
        case 0x301578u: goto label_301578;
        case 0x30157cu: goto label_30157c;
        case 0x301580u: goto label_301580;
        case 0x301584u: goto label_301584;
        case 0x301588u: goto label_301588;
        case 0x30158cu: goto label_30158c;
        case 0x301590u: goto label_301590;
        case 0x301594u: goto label_301594;
        case 0x301598u: goto label_301598;
        case 0x30159cu: goto label_30159c;
        case 0x3015a0u: goto label_3015a0;
        case 0x3015a4u: goto label_3015a4;
        case 0x3015a8u: goto label_3015a8;
        case 0x3015acu: goto label_3015ac;
        case 0x3015b0u: goto label_3015b0;
        case 0x3015b4u: goto label_3015b4;
        case 0x3015b8u: goto label_3015b8;
        case 0x3015bcu: goto label_3015bc;
        case 0x3015c0u: goto label_3015c0;
        case 0x3015c4u: goto label_3015c4;
        case 0x3015c8u: goto label_3015c8;
        case 0x3015ccu: goto label_3015cc;
        case 0x3015d0u: goto label_3015d0;
        case 0x3015d4u: goto label_3015d4;
        case 0x3015d8u: goto label_3015d8;
        case 0x3015dcu: goto label_3015dc;
        case 0x3015e0u: goto label_3015e0;
        case 0x3015e4u: goto label_3015e4;
        case 0x3015e8u: goto label_3015e8;
        case 0x3015ecu: goto label_3015ec;
        case 0x3015f0u: goto label_3015f0;
        case 0x3015f4u: goto label_3015f4;
        case 0x3015f8u: goto label_3015f8;
        case 0x3015fcu: goto label_3015fc;
        case 0x301600u: goto label_301600;
        case 0x301604u: goto label_301604;
        case 0x301608u: goto label_301608;
        case 0x30160cu: goto label_30160c;
        case 0x301610u: goto label_301610;
        case 0x301614u: goto label_301614;
        case 0x301618u: goto label_301618;
        case 0x30161cu: goto label_30161c;
        case 0x301620u: goto label_301620;
        case 0x301624u: goto label_301624;
        case 0x301628u: goto label_301628;
        case 0x30162cu: goto label_30162c;
        case 0x301630u: goto label_301630;
        case 0x301634u: goto label_301634;
        case 0x301638u: goto label_301638;
        case 0x30163cu: goto label_30163c;
        case 0x301640u: goto label_301640;
        case 0x301644u: goto label_301644;
        case 0x301648u: goto label_301648;
        case 0x30164cu: goto label_30164c;
        case 0x301650u: goto label_301650;
        case 0x301654u: goto label_301654;
        case 0x301658u: goto label_301658;
        case 0x30165cu: goto label_30165c;
        case 0x301660u: goto label_301660;
        case 0x301664u: goto label_301664;
        case 0x301668u: goto label_301668;
        case 0x30166cu: goto label_30166c;
        case 0x301670u: goto label_301670;
        case 0x301674u: goto label_301674;
        case 0x301678u: goto label_301678;
        case 0x30167cu: goto label_30167c;
        case 0x301680u: goto label_301680;
        case 0x301684u: goto label_301684;
        case 0x301688u: goto label_301688;
        case 0x30168cu: goto label_30168c;
        case 0x301690u: goto label_301690;
        case 0x301694u: goto label_301694;
        case 0x301698u: goto label_301698;
        case 0x30169cu: goto label_30169c;
        case 0x3016a0u: goto label_3016a0;
        case 0x3016a4u: goto label_3016a4;
        case 0x3016a8u: goto label_3016a8;
        case 0x3016acu: goto label_3016ac;
        case 0x3016b0u: goto label_3016b0;
        case 0x3016b4u: goto label_3016b4;
        case 0x3016b8u: goto label_3016b8;
        case 0x3016bcu: goto label_3016bc;
        case 0x3016c0u: goto label_3016c0;
        case 0x3016c4u: goto label_3016c4;
        case 0x3016c8u: goto label_3016c8;
        case 0x3016ccu: goto label_3016cc;
        case 0x3016d0u: goto label_3016d0;
        case 0x3016d4u: goto label_3016d4;
        case 0x3016d8u: goto label_3016d8;
        case 0x3016dcu: goto label_3016dc;
        case 0x3016e0u: goto label_3016e0;
        case 0x3016e4u: goto label_3016e4;
        case 0x3016e8u: goto label_3016e8;
        case 0x3016ecu: goto label_3016ec;
        case 0x3016f0u: goto label_3016f0;
        case 0x3016f4u: goto label_3016f4;
        case 0x3016f8u: goto label_3016f8;
        case 0x3016fcu: goto label_3016fc;
        case 0x301700u: goto label_301700;
        case 0x301704u: goto label_301704;
        case 0x301708u: goto label_301708;
        case 0x30170cu: goto label_30170c;
        case 0x301710u: goto label_301710;
        case 0x301714u: goto label_301714;
        case 0x301718u: goto label_301718;
        case 0x30171cu: goto label_30171c;
        case 0x301720u: goto label_301720;
        case 0x301724u: goto label_301724;
        case 0x301728u: goto label_301728;
        case 0x30172cu: goto label_30172c;
        case 0x301730u: goto label_301730;
        case 0x301734u: goto label_301734;
        case 0x301738u: goto label_301738;
        case 0x30173cu: goto label_30173c;
        case 0x301740u: goto label_301740;
        case 0x301744u: goto label_301744;
        case 0x301748u: goto label_301748;
        case 0x30174cu: goto label_30174c;
        case 0x301750u: goto label_301750;
        case 0x301754u: goto label_301754;
        case 0x301758u: goto label_301758;
        case 0x30175cu: goto label_30175c;
        case 0x301760u: goto label_301760;
        case 0x301764u: goto label_301764;
        case 0x301768u: goto label_301768;
        case 0x30176cu: goto label_30176c;
        case 0x301770u: goto label_301770;
        case 0x301774u: goto label_301774;
        case 0x301778u: goto label_301778;
        case 0x30177cu: goto label_30177c;
        case 0x301780u: goto label_301780;
        case 0x301784u: goto label_301784;
        case 0x301788u: goto label_301788;
        case 0x30178cu: goto label_30178c;
        case 0x301790u: goto label_301790;
        case 0x301794u: goto label_301794;
        case 0x301798u: goto label_301798;
        case 0x30179cu: goto label_30179c;
        case 0x3017a0u: goto label_3017a0;
        case 0x3017a4u: goto label_3017a4;
        case 0x3017a8u: goto label_3017a8;
        case 0x3017acu: goto label_3017ac;
        case 0x3017b0u: goto label_3017b0;
        case 0x3017b4u: goto label_3017b4;
        case 0x3017b8u: goto label_3017b8;
        case 0x3017bcu: goto label_3017bc;
        case 0x3017c0u: goto label_3017c0;
        case 0x3017c4u: goto label_3017c4;
        case 0x3017c8u: goto label_3017c8;
        case 0x3017ccu: goto label_3017cc;
        case 0x3017d0u: goto label_3017d0;
        case 0x3017d4u: goto label_3017d4;
        case 0x3017d8u: goto label_3017d8;
        case 0x3017dcu: goto label_3017dc;
        case 0x3017e0u: goto label_3017e0;
        case 0x3017e4u: goto label_3017e4;
        case 0x3017e8u: goto label_3017e8;
        case 0x3017ecu: goto label_3017ec;
        case 0x3017f0u: goto label_3017f0;
        case 0x3017f4u: goto label_3017f4;
        case 0x3017f8u: goto label_3017f8;
        case 0x3017fcu: goto label_3017fc;
        case 0x301800u: goto label_301800;
        case 0x301804u: goto label_301804;
        case 0x301808u: goto label_301808;
        case 0x30180cu: goto label_30180c;
        case 0x301810u: goto label_301810;
        case 0x301814u: goto label_301814;
        case 0x301818u: goto label_301818;
        case 0x30181cu: goto label_30181c;
        case 0x301820u: goto label_301820;
        case 0x301824u: goto label_301824;
        case 0x301828u: goto label_301828;
        case 0x30182cu: goto label_30182c;
        case 0x301830u: goto label_301830;
        case 0x301834u: goto label_301834;
        case 0x301838u: goto label_301838;
        case 0x30183cu: goto label_30183c;
        case 0x301840u: goto label_301840;
        case 0x301844u: goto label_301844;
        case 0x301848u: goto label_301848;
        case 0x30184cu: goto label_30184c;
        case 0x301850u: goto label_301850;
        case 0x301854u: goto label_301854;
        case 0x301858u: goto label_301858;
        case 0x30185cu: goto label_30185c;
        case 0x301860u: goto label_301860;
        case 0x301864u: goto label_301864;
        case 0x301868u: goto label_301868;
        case 0x30186cu: goto label_30186c;
        case 0x301870u: goto label_301870;
        case 0x301874u: goto label_301874;
        case 0x301878u: goto label_301878;
        case 0x30187cu: goto label_30187c;
        case 0x301880u: goto label_301880;
        case 0x301884u: goto label_301884;
        case 0x301888u: goto label_301888;
        case 0x30188cu: goto label_30188c;
        case 0x301890u: goto label_301890;
        case 0x301894u: goto label_301894;
        case 0x301898u: goto label_301898;
        case 0x30189cu: goto label_30189c;
        case 0x3018a0u: goto label_3018a0;
        case 0x3018a4u: goto label_3018a4;
        case 0x3018a8u: goto label_3018a8;
        case 0x3018acu: goto label_3018ac;
        case 0x3018b0u: goto label_3018b0;
        case 0x3018b4u: goto label_3018b4;
        case 0x3018b8u: goto label_3018b8;
        case 0x3018bcu: goto label_3018bc;
        case 0x3018c0u: goto label_3018c0;
        case 0x3018c4u: goto label_3018c4;
        case 0x3018c8u: goto label_3018c8;
        case 0x3018ccu: goto label_3018cc;
        case 0x3018d0u: goto label_3018d0;
        case 0x3018d4u: goto label_3018d4;
        case 0x3018d8u: goto label_3018d8;
        case 0x3018dcu: goto label_3018dc;
        case 0x3018e0u: goto label_3018e0;
        case 0x3018e4u: goto label_3018e4;
        case 0x3018e8u: goto label_3018e8;
        case 0x3018ecu: goto label_3018ec;
        case 0x3018f0u: goto label_3018f0;
        case 0x3018f4u: goto label_3018f4;
        case 0x3018f8u: goto label_3018f8;
        case 0x3018fcu: goto label_3018fc;
        case 0x301900u: goto label_301900;
        case 0x301904u: goto label_301904;
        case 0x301908u: goto label_301908;
        case 0x30190cu: goto label_30190c;
        case 0x301910u: goto label_301910;
        case 0x301914u: goto label_301914;
        case 0x301918u: goto label_301918;
        case 0x30191cu: goto label_30191c;
        case 0x301920u: goto label_301920;
        case 0x301924u: goto label_301924;
        case 0x301928u: goto label_301928;
        case 0x30192cu: goto label_30192c;
        case 0x301930u: goto label_301930;
        case 0x301934u: goto label_301934;
        case 0x301938u: goto label_301938;
        case 0x30193cu: goto label_30193c;
        case 0x301940u: goto label_301940;
        case 0x301944u: goto label_301944;
        case 0x301948u: goto label_301948;
        case 0x30194cu: goto label_30194c;
        case 0x301950u: goto label_301950;
        case 0x301954u: goto label_301954;
        case 0x301958u: goto label_301958;
        case 0x30195cu: goto label_30195c;
        case 0x301960u: goto label_301960;
        case 0x301964u: goto label_301964;
        case 0x301968u: goto label_301968;
        case 0x30196cu: goto label_30196c;
        case 0x301970u: goto label_301970;
        case 0x301974u: goto label_301974;
        case 0x301978u: goto label_301978;
        case 0x30197cu: goto label_30197c;
        case 0x301980u: goto label_301980;
        case 0x301984u: goto label_301984;
        case 0x301988u: goto label_301988;
        case 0x30198cu: goto label_30198c;
        case 0x301990u: goto label_301990;
        case 0x301994u: goto label_301994;
        case 0x301998u: goto label_301998;
        case 0x30199cu: goto label_30199c;
        case 0x3019a0u: goto label_3019a0;
        case 0x3019a4u: goto label_3019a4;
        case 0x3019a8u: goto label_3019a8;
        case 0x3019acu: goto label_3019ac;
        case 0x3019b0u: goto label_3019b0;
        case 0x3019b4u: goto label_3019b4;
        case 0x3019b8u: goto label_3019b8;
        case 0x3019bcu: goto label_3019bc;
        case 0x3019c0u: goto label_3019c0;
        case 0x3019c4u: goto label_3019c4;
        case 0x3019c8u: goto label_3019c8;
        case 0x3019ccu: goto label_3019cc;
        case 0x3019d0u: goto label_3019d0;
        case 0x3019d4u: goto label_3019d4;
        case 0x3019d8u: goto label_3019d8;
        case 0x3019dcu: goto label_3019dc;
        case 0x3019e0u: goto label_3019e0;
        case 0x3019e4u: goto label_3019e4;
        case 0x3019e8u: goto label_3019e8;
        case 0x3019ecu: goto label_3019ec;
        case 0x3019f0u: goto label_3019f0;
        case 0x3019f4u: goto label_3019f4;
        case 0x3019f8u: goto label_3019f8;
        case 0x3019fcu: goto label_3019fc;
        case 0x301a00u: goto label_301a00;
        case 0x301a04u: goto label_301a04;
        case 0x301a08u: goto label_301a08;
        case 0x301a0cu: goto label_301a0c;
        case 0x301a10u: goto label_301a10;
        case 0x301a14u: goto label_301a14;
        case 0x301a18u: goto label_301a18;
        case 0x301a1cu: goto label_301a1c;
        case 0x301a20u: goto label_301a20;
        case 0x301a24u: goto label_301a24;
        case 0x301a28u: goto label_301a28;
        case 0x301a2cu: goto label_301a2c;
        case 0x301a30u: goto label_301a30;
        case 0x301a34u: goto label_301a34;
        case 0x301a38u: goto label_301a38;
        case 0x301a3cu: goto label_301a3c;
        case 0x301a40u: goto label_301a40;
        case 0x301a44u: goto label_301a44;
        case 0x301a48u: goto label_301a48;
        case 0x301a4cu: goto label_301a4c;
        case 0x301a50u: goto label_301a50;
        case 0x301a54u: goto label_301a54;
        case 0x301a58u: goto label_301a58;
        case 0x301a5cu: goto label_301a5c;
        case 0x301a60u: goto label_301a60;
        case 0x301a64u: goto label_301a64;
        case 0x301a68u: goto label_301a68;
        case 0x301a6cu: goto label_301a6c;
        case 0x301a70u: goto label_301a70;
        case 0x301a74u: goto label_301a74;
        case 0x301a78u: goto label_301a78;
        case 0x301a7cu: goto label_301a7c;
        case 0x301a80u: goto label_301a80;
        case 0x301a84u: goto label_301a84;
        case 0x301a88u: goto label_301a88;
        case 0x301a8cu: goto label_301a8c;
        case 0x301a90u: goto label_301a90;
        case 0x301a94u: goto label_301a94;
        case 0x301a98u: goto label_301a98;
        case 0x301a9cu: goto label_301a9c;
        case 0x301aa0u: goto label_301aa0;
        case 0x301aa4u: goto label_301aa4;
        case 0x301aa8u: goto label_301aa8;
        case 0x301aacu: goto label_301aac;
        case 0x301ab0u: goto label_301ab0;
        case 0x301ab4u: goto label_301ab4;
        case 0x301ab8u: goto label_301ab8;
        case 0x301abcu: goto label_301abc;
        case 0x301ac0u: goto label_301ac0;
        case 0x301ac4u: goto label_301ac4;
        case 0x301ac8u: goto label_301ac8;
        case 0x301accu: goto label_301acc;
        case 0x301ad0u: goto label_301ad0;
        case 0x301ad4u: goto label_301ad4;
        case 0x301ad8u: goto label_301ad8;
        case 0x301adcu: goto label_301adc;
        case 0x301ae0u: goto label_301ae0;
        case 0x301ae4u: goto label_301ae4;
        case 0x301ae8u: goto label_301ae8;
        case 0x301aecu: goto label_301aec;
        case 0x301af0u: goto label_301af0;
        case 0x301af4u: goto label_301af4;
        case 0x301af8u: goto label_301af8;
        case 0x301afcu: goto label_301afc;
        case 0x301b00u: goto label_301b00;
        case 0x301b04u: goto label_301b04;
        case 0x301b08u: goto label_301b08;
        case 0x301b0cu: goto label_301b0c;
        case 0x301b10u: goto label_301b10;
        case 0x301b14u: goto label_301b14;
        case 0x301b18u: goto label_301b18;
        case 0x301b1cu: goto label_301b1c;
        case 0x301b20u: goto label_301b20;
        case 0x301b24u: goto label_301b24;
        case 0x301b28u: goto label_301b28;
        case 0x301b2cu: goto label_301b2c;
        case 0x301b30u: goto label_301b30;
        case 0x301b34u: goto label_301b34;
        case 0x301b38u: goto label_301b38;
        case 0x301b3cu: goto label_301b3c;
        case 0x301b40u: goto label_301b40;
        case 0x301b44u: goto label_301b44;
        case 0x301b48u: goto label_301b48;
        case 0x301b4cu: goto label_301b4c;
        case 0x301b50u: goto label_301b50;
        case 0x301b54u: goto label_301b54;
        case 0x301b58u: goto label_301b58;
        case 0x301b5cu: goto label_301b5c;
        case 0x301b60u: goto label_301b60;
        case 0x301b64u: goto label_301b64;
        case 0x301b68u: goto label_301b68;
        case 0x301b6cu: goto label_301b6c;
        case 0x301b70u: goto label_301b70;
        case 0x301b74u: goto label_301b74;
        case 0x301b78u: goto label_301b78;
        case 0x301b7cu: goto label_301b7c;
        case 0x301b80u: goto label_301b80;
        case 0x301b84u: goto label_301b84;
        case 0x301b88u: goto label_301b88;
        case 0x301b8cu: goto label_301b8c;
        case 0x301b90u: goto label_301b90;
        case 0x301b94u: goto label_301b94;
        case 0x301b98u: goto label_301b98;
        case 0x301b9cu: goto label_301b9c;
        case 0x301ba0u: goto label_301ba0;
        case 0x301ba4u: goto label_301ba4;
        case 0x301ba8u: goto label_301ba8;
        case 0x301bacu: goto label_301bac;
        case 0x301bb0u: goto label_301bb0;
        case 0x301bb4u: goto label_301bb4;
        case 0x301bb8u: goto label_301bb8;
        case 0x301bbcu: goto label_301bbc;
        case 0x301bc0u: goto label_301bc0;
        case 0x301bc4u: goto label_301bc4;
        case 0x301bc8u: goto label_301bc8;
        case 0x301bccu: goto label_301bcc;
        case 0x301bd0u: goto label_301bd0;
        case 0x301bd4u: goto label_301bd4;
        case 0x301bd8u: goto label_301bd8;
        case 0x301bdcu: goto label_301bdc;
        case 0x301be0u: goto label_301be0;
        case 0x301be4u: goto label_301be4;
        case 0x301be8u: goto label_301be8;
        case 0x301becu: goto label_301bec;
        case 0x301bf0u: goto label_301bf0;
        case 0x301bf4u: goto label_301bf4;
        case 0x301bf8u: goto label_301bf8;
        case 0x301bfcu: goto label_301bfc;
        case 0x301c00u: goto label_301c00;
        case 0x301c04u: goto label_301c04;
        case 0x301c08u: goto label_301c08;
        case 0x301c0cu: goto label_301c0c;
        case 0x301c10u: goto label_301c10;
        case 0x301c14u: goto label_301c14;
        case 0x301c18u: goto label_301c18;
        case 0x301c1cu: goto label_301c1c;
        case 0x301c20u: goto label_301c20;
        case 0x301c24u: goto label_301c24;
        case 0x301c28u: goto label_301c28;
        case 0x301c2cu: goto label_301c2c;
        case 0x301c30u: goto label_301c30;
        case 0x301c34u: goto label_301c34;
        case 0x301c38u: goto label_301c38;
        case 0x301c3cu: goto label_301c3c;
        case 0x301c40u: goto label_301c40;
        case 0x301c44u: goto label_301c44;
        case 0x301c48u: goto label_301c48;
        case 0x301c4cu: goto label_301c4c;
        case 0x301c50u: goto label_301c50;
        case 0x301c54u: goto label_301c54;
        case 0x301c58u: goto label_301c58;
        case 0x301c5cu: goto label_301c5c;
        case 0x301c60u: goto label_301c60;
        case 0x301c64u: goto label_301c64;
        case 0x301c68u: goto label_301c68;
        case 0x301c6cu: goto label_301c6c;
        case 0x301c70u: goto label_301c70;
        case 0x301c74u: goto label_301c74;
        case 0x301c78u: goto label_301c78;
        case 0x301c7cu: goto label_301c7c;
        case 0x301c80u: goto label_301c80;
        case 0x301c84u: goto label_301c84;
        case 0x301c88u: goto label_301c88;
        case 0x301c8cu: goto label_301c8c;
        case 0x301c90u: goto label_301c90;
        case 0x301c94u: goto label_301c94;
        case 0x301c98u: goto label_301c98;
        case 0x301c9cu: goto label_301c9c;
        case 0x301ca0u: goto label_301ca0;
        case 0x301ca4u: goto label_301ca4;
        case 0x301ca8u: goto label_301ca8;
        case 0x301cacu: goto label_301cac;
        case 0x301cb0u: goto label_301cb0;
        case 0x301cb4u: goto label_301cb4;
        case 0x301cb8u: goto label_301cb8;
        case 0x301cbcu: goto label_301cbc;
        case 0x301cc0u: goto label_301cc0;
        case 0x301cc4u: goto label_301cc4;
        case 0x301cc8u: goto label_301cc8;
        case 0x301cccu: goto label_301ccc;
        case 0x301cd0u: goto label_301cd0;
        case 0x301cd4u: goto label_301cd4;
        case 0x301cd8u: goto label_301cd8;
        case 0x301cdcu: goto label_301cdc;
        case 0x301ce0u: goto label_301ce0;
        case 0x301ce4u: goto label_301ce4;
        case 0x301ce8u: goto label_301ce8;
        case 0x301cecu: goto label_301cec;
        case 0x301cf0u: goto label_301cf0;
        case 0x301cf4u: goto label_301cf4;
        default: break;
    }

    ctx->pc = 0x301538u;

label_301538:
    // 0x301538: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x301538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_30153c:
    // 0x30153c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x30153cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_301540:
    // 0x301540: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x301540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_301544:
    // 0x301544: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x301544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_301548:
    // 0x301548: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x301548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_30154c:
    // 0x30154c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x30154cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_301550:
    // 0x301550: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x301550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_301554:
    // 0x301554: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x301554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_301558:
    // 0x301558: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x301558u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30155c:
    // 0x30155c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x30155cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_301560:
    // 0x301560: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x301560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_301564:
    // 0x301564: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x301564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_301568:
    // 0x301568: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x301568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_30156c:
    // 0x30156c: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x30156cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_301570:
    // 0x301570: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x301570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_301574:
    // 0x301574: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x301574u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_301578:
    // 0x301578: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x301578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
label_30157c:
    // 0x30157c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x30157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_301580:
    // 0x301580: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x301580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
label_301584:
    // 0x301584: 0xc0a40d2  jal         func_290348
label_301588:
    if (ctx->pc == 0x301588u) {
        ctx->pc = 0x301588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301584u;
        // 0x301588: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30158Cu;
        goto label_30158c;
    }
    ctx->pc = 0x301584u;
    SET_GPR_U32(ctx, 31, 0x30158Cu);
    ctx->pc = 0x301588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301584u;
    // 0x301588: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x301584u, 0x30158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30158Cu;
label_30158c:
    // 0x30158c: 0x105501cc  beq         $v0, $s5, . + 4 + (0x1CC << 2)
label_301590:
    if (ctx->pc == 0x301590u) {
        ctx->pc = 0x301590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30158Cu;
        // 0x301590: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301594u;
        goto label_301594;
    }
    ctx->pc = 0x30158Cu;
    {
        const bool branch_taken_0x30158c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x301590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30158Cu;
        // 0x301590: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30158c) {
            ctx->pc = 0x301CC0u;
            goto label_301cc0;
        }
    }
    ctx->pc = 0x301594u;
label_301594:
    // 0x301594: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x301594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_301598:
    // 0x301598: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x301598u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30159c:
    // 0x30159c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x30159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3015a0:
    // 0x3015a0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x3015a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_3015a4:
    // 0x3015a4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x3015a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_3015a8:
    // 0x3015a8: 0x60f809  jalr        $v1
label_3015ac:
    if (ctx->pc == 0x3015ACu) {
        ctx->pc = 0x3015ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015A8u;
        // 0x3015ac: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3015B0u;
        goto label_3015b0;
    }
    ctx->pc = 0x3015A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3015B0u);
        ctx->pc = 0x3015ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015A8u;
        // 0x3015ac: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3015A8u, 0x3015B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3015B0u;
label_3015b0:
    // 0x3015b0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3015b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3015b4:
    // 0x3015b4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3015b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3015b8:
    // 0x3015b8: 0xc0a51a0  jal         func_294680
label_3015bc:
    if (ctx->pc == 0x3015BCu) {
        ctx->pc = 0x3015BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015B8u;
        // 0x3015bc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3015C0u;
        goto label_3015c0;
    }
    ctx->pc = 0x3015B8u;
    SET_GPR_U32(ctx, 31, 0x3015C0u);
    ctx->pc = 0x3015BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3015B8u;
    // 0x3015bc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294680u, 0x3015B8u, 0x3015C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3015C0u;
label_3015c0:
    // 0x3015c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3015c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3015c4:
    // 0x3015c4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3015c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3015c8:
    // 0x3015c8: 0xc0a785a  jal         func_29E168
label_3015cc:
    if (ctx->pc == 0x3015CCu) {
        ctx->pc = 0x3015CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015C8u;
        // 0x3015cc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3015D0u;
        goto label_3015d0;
    }
    ctx->pc = 0x3015C8u;
    SET_GPR_U32(ctx, 31, 0x3015D0u);
    ctx->pc = 0x3015CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3015C8u;
    // 0x3015cc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E168u, 0x3015C8u, 0x3015D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3015D0u;
label_3015d0:
    // 0x3015d0: 0x105501bc  beq         $v0, $s5, . + 4 + (0x1BC << 2)
label_3015d4:
    if (ctx->pc == 0x3015D4u) {
        ctx->pc = 0x3015D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015D0u;
        // 0x3015d4: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3015D8u;
        goto label_3015d8;
    }
    ctx->pc = 0x3015D0u;
    {
        const bool branch_taken_0x3015d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x3015D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015D0u;
        // 0x3015d4: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3015d0) {
            ctx->pc = 0x301CC4u;
            goto label_301cc4;
        }
    }
    ctx->pc = 0x3015D8u;
label_3015d8:
    // 0x3015d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3015d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3015dc:
    // 0x3015dc: 0xc08a200  jal         func_228800
label_3015e0:
    if (ctx->pc == 0x3015E0u) {
        ctx->pc = 0x3015E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015DCu;
        // 0x3015e0: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3015E4u;
        goto label_3015e4;
    }
    ctx->pc = 0x3015DCu;
    SET_GPR_U32(ctx, 31, 0x3015E4u);
    ctx->pc = 0x3015E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3015DCu;
    // 0x3015e0: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x3015DCu, 0x3015E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3015E4u;
label_3015e4:
    // 0x3015e4: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x3015e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
label_3015e8:
    // 0x3015e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3015e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3015ec:
    // 0x3015ec: 0xc634012c  lwc1        $f20, 0x12C($s1)
    ctx->pc = 0x3015ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3015f0:
    // 0x3015f0: 0x3863000a  xori        $v1, $v1, 0xA
    ctx->pc = 0x3015f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
label_3015f4:
    // 0x3015f4: 0xc0a2fc0  jal         func_28BF00
label_3015f8:
    if (ctx->pc == 0x3015F8u) {
        ctx->pc = 0x3015F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015F4u;
        // 0x3015f8: 0x2c730001  sltiu       $s3, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3015FCu;
        goto label_3015fc;
    }
    ctx->pc = 0x3015F4u;
    SET_GPR_U32(ctx, 31, 0x3015FCu);
    ctx->pc = 0x3015F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3015F4u;
    // 0x3015f8: 0x2c730001  sltiu       $s3, $v1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x3015F4u, 0x3015FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3015FCu;
label_3015fc:
    // 0x3015fc: 0x124000d7  beqz        $s2, . + 4 + (0xD7 << 2)
label_301600:
    if (ctx->pc == 0x301600u) {
        ctx->pc = 0x301600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015FCu;
        // 0x301600: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x301604u;
        goto label_301604;
    }
    ctx->pc = 0x3015FCu;
    {
        const bool branch_taken_0x3015fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x301600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015FCu;
        // 0x301600: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3015fc) {
            ctx->pc = 0x30195Cu;
            goto label_30195c;
        }
    }
    ctx->pc = 0x301604u;
label_301604:
    // 0x301604: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x301604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_301608:
    // 0x301608: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x301608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_30160c:
    // 0x30160c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x30160cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_301610:
    // 0x301610: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x301610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_301614:
    // 0x301614: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x301614u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_301618:
    // 0x301618: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x301618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_30161c:
    // 0x30161c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x30161cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_301620:
    // 0x301620: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x301620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_301624:
    // 0x301624: 0xc0888fa  jal         func_2223E8
label_301628:
    if (ctx->pc == 0x301628u) {
        ctx->pc = 0x301628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301624u;
        // 0x301628: 0x460e0382  mul.s       $f14, $f0, $f14 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30162Cu;
        goto label_30162c;
    }
    ctx->pc = 0x301624u;
    SET_GPR_U32(ctx, 31, 0x30162Cu);
    ctx->pc = 0x301628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301624u;
    // 0x301628: 0x460e0382  mul.s       $f14, $f0, $f14 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x301624u, 0x30162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30162Cu;
label_30162c:
    // 0x30162c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30162cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301630:
    // 0x301630: 0x161500ca  bne         $s0, $s5, . + 4 + (0xCA << 2)
label_301634:
    if (ctx->pc == 0x301634u) {
        ctx->pc = 0x301638u;
        goto label_301638;
    }
    ctx->pc = 0x301630u;
    {
        const bool branch_taken_0x301630 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x301630) {
            ctx->pc = 0x30195Cu;
            goto label_30195c;
        }
    }
    ctx->pc = 0x301638u;
label_301638:
    // 0x301638: 0x52600007  beql        $s3, $zero, . + 4 + (0x7 << 2)
label_30163c:
    if (ctx->pc == 0x30163Cu) {
        ctx->pc = 0x30163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301638u;
        // 0x30163c: 0x8222002c  lb          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301640u;
        goto label_301640;
    }
    ctx->pc = 0x301638u;
    {
        const bool branch_taken_0x301638 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x301638) {
            ctx->pc = 0x30163Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301638u;
            // 0x30163c: 0x8222002c  lb          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301658u;
            goto label_301658;
        }
    }
    ctx->pc = 0x301640u;
label_301640:
    // 0x301640: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x301640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_301644:
    // 0x301644: 0xc088976  jal         func_2225D8
label_301648:
    if (ctx->pc == 0x301648u) {
        ctx->pc = 0x301648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301644u;
        // 0x301648: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30164Cu;
        goto label_30164c;
    }
    ctx->pc = 0x301644u;
    SET_GPR_U32(ctx, 31, 0x30164Cu);
    ctx->pc = 0x301648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301644u;
    // 0x301648: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2225D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2225D8u, 0x301644u, 0x30164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30164Cu;
label_30164c:
    // 0x30164c: 0x145000c3  bne         $v0, $s0, . + 4 + (0xC3 << 2)
label_301650:
    if (ctx->pc == 0x301650u) {
        ctx->pc = 0x301654u;
        goto label_301654;
    }
    ctx->pc = 0x30164Cu;
    {
        const bool branch_taken_0x30164c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x30164c) {
            ctx->pc = 0x30195Cu;
            goto label_30195c;
        }
    }
    ctx->pc = 0x301654u;
label_301654:
    // 0x301654: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x301654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_301658:
    // 0x301658: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
label_30165c:
    if (ctx->pc == 0x30165Cu) {
        ctx->pc = 0x30165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301658u;
        // 0x30165c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301660u;
        goto label_301660;
    }
    ctx->pc = 0x301658u;
    {
        const bool branch_taken_0x301658 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301658u;
        // 0x30165c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301658) {
            ctx->pc = 0x3016A4u;
            goto label_3016a4;
        }
    }
    ctx->pc = 0x301660u;
label_301660:
    // 0x301660: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_301664:
    if (ctx->pc == 0x301664u) {
        ctx->pc = 0x301664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301660u;
        // 0x301664: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301668u;
        goto label_301668;
    }
    ctx->pc = 0x301660u;
    {
        const bool branch_taken_0x301660 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x301664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301660u;
        // 0x301664: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301660) {
            ctx->pc = 0x301674u;
            goto label_301674;
        }
    }
    ctx->pc = 0x301668u;
label_301668:
    // 0x301668: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x301668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_30166c:
    // 0x30166c: 0x10000002  b           . + 4 + (0x2 << 2)
label_301670:
    if (ctx->pc == 0x301670u) {
        ctx->pc = 0x301670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30166Cu;
        // 0x301670: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301674u;
        goto label_301674;
    }
    ctx->pc = 0x30166Cu;
    {
        const bool branch_taken_0x30166c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30166Cu;
        // 0x301670: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30166c) {
            ctx->pc = 0x301678u;
            goto label_301678;
        }
    }
    ctx->pc = 0x301674u;
label_301674:
    // 0x301674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x301674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301678:
    // 0x301678: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x301678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_30167c:
    // 0x30167c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30167cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_301680:
    // 0x301680: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x301680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_301684:
    // 0x301684: 0x40f809  jalr        $v0
label_301688:
    if (ctx->pc == 0x301688u) {
        ctx->pc = 0x301688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301684u;
        // 0x301688: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30168Cu;
        goto label_30168c;
    }
    ctx->pc = 0x301684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30168Cu);
        ctx->pc = 0x301688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301684u;
        // 0x301688: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301684u, 0x30168Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30168Cu;
label_30168c:
    // 0x30168c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30168cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_301690:
    // 0x301690: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_301694:
    if (ctx->pc == 0x301694u) {
        ctx->pc = 0x301694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301690u;
        // 0x301694: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301698u;
        goto label_301698;
    }
    ctx->pc = 0x301690u;
    {
        const bool branch_taken_0x301690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x301694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301690u;
        // 0x301694: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301690) {
            ctx->pc = 0x3016A4u;
            goto label_3016a4;
        }
    }
    ctx->pc = 0x301698u;
label_301698:
    // 0x301698: 0xc0a35f6  jal         func_28D7D8
label_30169c:
    if (ctx->pc == 0x30169Cu) {
        ctx->pc = 0x30169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301698u;
        // 0x30169c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3016A0u;
        goto label_3016a0;
    }
    ctx->pc = 0x301698u;
    SET_GPR_U32(ctx, 31, 0x3016A0u);
    ctx->pc = 0x30169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301698u;
    // 0x30169c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x301698u, 0x3016A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3016A0u;
label_3016a0:
    // 0x3016a0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3016a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3016a4:
    // 0x3016a4: 0x17d0000d  bne         $fp, $s0, . + 4 + (0xD << 2)
label_3016a8:
    if (ctx->pc == 0x3016A8u) {
        ctx->pc = 0x3016ACu;
        goto label_3016ac;
    }
    ctx->pc = 0x3016A4u;
    {
        const bool branch_taken_0x3016a4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 16));
        if (branch_taken_0x3016a4) {
            ctx->pc = 0x3016DCu;
            goto label_3016dc;
        }
    }
    ctx->pc = 0x3016ACu;
label_3016ac:
    // 0x3016ac: 0xc087502  jal         func_21D408
label_3016b0:
    if (ctx->pc == 0x3016B0u) {
        ctx->pc = 0x3016B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016ACu;
        // 0x3016b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3016B4u;
        goto label_3016b4;
    }
    ctx->pc = 0x3016ACu;
    SET_GPR_U32(ctx, 31, 0x3016B4u);
    ctx->pc = 0x3016B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3016ACu;
    // 0x3016b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3016ACu, 0x3016B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3016B4u;
label_3016b4:
    // 0x3016b4: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x3016b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_3016b8:
    // 0x3016b8: 0x8c6205e8  lw          $v0, 0x5E8($v1)
    ctx->pc = 0x3016b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1512)));
label_3016bc:
    // 0x3016bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3016bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3016c0:
    // 0x3016c0: 0x145e0180  bne         $v0, $fp, . + 4 + (0x180 << 2)
label_3016c4:
    if (ctx->pc == 0x3016C4u) {
        ctx->pc = 0x3016C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016C0u;
        // 0x3016c4: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3016C8u;
        goto label_3016c8;
    }
    ctx->pc = 0x3016C0u;
    {
        const bool branch_taken_0x3016c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x3016C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016C0u;
        // 0x3016c4: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3016c0) {
            ctx->pc = 0x301CC4u;
            goto label_301cc4;
        }
    }
    ctx->pc = 0x3016C8u;
label_3016c8:
    // 0x3016c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3016c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3016cc:
    // 0x3016cc: 0xc0a354e  jal         func_28D538
label_3016d0:
    if (ctx->pc == 0x3016D0u) {
        ctx->pc = 0x3016D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016CCu;
        // 0x3016d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3016D4u;
        goto label_3016d4;
    }
    ctx->pc = 0x3016CCu;
    SET_GPR_U32(ctx, 31, 0x3016D4u);
    ctx->pc = 0x3016D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3016CCu;
    // 0x3016d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D538u, 0x3016CCu, 0x3016D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3016D4u;
label_3016d4:
    // 0x3016d4: 0x1000017b  b           . + 4 + (0x17B << 2)
label_3016d8:
    if (ctx->pc == 0x3016D8u) {
        ctx->pc = 0x3016D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016D4u;
        // 0x3016d8: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3016DCu;
        goto label_3016dc;
    }
    ctx->pc = 0x3016D4u;
    {
        const bool branch_taken_0x3016d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3016D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016D4u;
        // 0x3016d8: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3016d4) {
            ctx->pc = 0x301CC4u;
            goto label_301cc4;
        }
    }
    ctx->pc = 0x3016DCu;
label_3016dc:
    // 0x3016dc: 0xc0c080e  jal         func_302038
label_3016e0:
    if (ctx->pc == 0x3016E0u) {
        ctx->pc = 0x3016E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016DCu;
        // 0x3016e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3016E4u;
        goto label_3016e4;
    }
    ctx->pc = 0x3016DCu;
    SET_GPR_U32(ctx, 31, 0x3016E4u);
    ctx->pc = 0x3016E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3016DCu;
    // 0x3016e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302038u, 0x3016DCu, 0x3016E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3016E4u;
label_3016e4:
    // 0x3016e4: 0x14500177  bne         $v0, $s0, . + 4 + (0x177 << 2)
label_3016e8:
    if (ctx->pc == 0x3016E8u) {
        ctx->pc = 0x3016E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016E4u;
        // 0x3016e8: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3016ECu;
        goto label_3016ec;
    }
    ctx->pc = 0x3016E4u;
    {
        const bool branch_taken_0x3016e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3016E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016E4u;
        // 0x3016e8: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3016e4) {
            ctx->pc = 0x301CC4u;
            goto label_301cc4;
        }
    }
    ctx->pc = 0x3016ECu;
label_3016ec:
    // 0x3016ec: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x3016ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3016f0:
    // 0x3016f0: 0xc0e3d62  jal         func_38F588
label_3016f4:
    if (ctx->pc == 0x3016F4u) {
        ctx->pc = 0x3016F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016F0u;
        // 0x3016f4: 0x24150005  addiu       $s5, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3016F8u;
        goto label_3016f8;
    }
    ctx->pc = 0x3016F0u;
    SET_GPR_U32(ctx, 31, 0x3016F8u);
    ctx->pc = 0x3016F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3016F0u;
    // 0x3016f4: 0x24150005  addiu       $s5, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F588u, 0x3016F0u, 0x3016F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3016F8u;
label_3016f8:
    // 0x3016f8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x3016f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3016fc:
    // 0x3016fc: 0xc0e3d62  jal         func_38F588
label_301700:
    if (ctx->pc == 0x301700u) {
        ctx->pc = 0x301700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016FCu;
        // 0x301700: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301704u;
        goto label_301704;
    }
    ctx->pc = 0x3016FCu;
    SET_GPR_U32(ctx, 31, 0x301704u);
    ctx->pc = 0x301700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3016FCu;
    // 0x301700: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F588u, 0x3016FCu, 0x301704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301704u;
label_301704:
    // 0x301704: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x301704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_301708:
    // 0x301708: 0xc0e2612  jal         func_389848
label_30170c:
    if (ctx->pc == 0x30170Cu) {
        ctx->pc = 0x30170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301708u;
        // 0x30170c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301710u;
        goto label_301710;
    }
    ctx->pc = 0x301708u;
    SET_GPR_U32(ctx, 31, 0x301710u);
    ctx->pc = 0x30170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301708u;
    // 0x30170c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x301708u, 0x301710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301710u;
label_301710:
    // 0x301710: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_301714:
    if (ctx->pc == 0x301714u) {
        ctx->pc = 0x301714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301710u;
        // 0x301714: 0x2415000d  addiu       $s5, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301718u;
        goto label_301718;
    }
    ctx->pc = 0x301710u;
    {
        const bool branch_taken_0x301710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301710) {
            ctx->pc = 0x301714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301710u;
            // 0x301714: 0x2415000d  addiu       $s5, $zero, 0xD (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301768u;
            goto label_301768;
        }
    }
    ctx->pc = 0x301718u;
label_301718:
    // 0x301718: 0x56600013  bnel        $s3, $zero, . + 4 + (0x13 << 2)
label_30171c:
    if (ctx->pc == 0x30171Cu) {
        ctx->pc = 0x30171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301718u;
        // 0x30171c: 0x2415000d  addiu       $s5, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301720u;
        goto label_301720;
    }
    ctx->pc = 0x301718u;
    {
        const bool branch_taken_0x301718 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x301718) {
            ctx->pc = 0x30171Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301718u;
            // 0x30171c: 0x2415000d  addiu       $s5, $zero, 0xD (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301768u;
            goto label_301768;
        }
    }
    ctx->pc = 0x301720u;
label_301720:
    // 0x301720: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
label_301724:
    if (ctx->pc == 0x301724u) {
        ctx->pc = 0x301724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301720u;
        // 0x301724: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301728u;
        goto label_301728;
    }
    ctx->pc = 0x301720u;
    {
        const bool branch_taken_0x301720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x301720) {
            ctx->pc = 0x301724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301720u;
            // 0x301724: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301730u;
            goto label_301730;
        }
    }
    ctx->pc = 0x301728u;
label_301728:
    // 0x301728: 0x1000000f  b           . + 4 + (0xF << 2)
label_30172c:
    if (ctx->pc == 0x30172Cu) {
        ctx->pc = 0x30172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301728u;
        // 0x30172c: 0x2415000d  addiu       $s5, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301730u;
        goto label_301730;
    }
    ctx->pc = 0x301728u;
    {
        const bool branch_taken_0x301728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301728u;
        // 0x30172c: 0x2415000d  addiu       $s5, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301728) {
            ctx->pc = 0x301768u;
            goto label_301768;
        }
    }
    ctx->pc = 0x301730u;
label_301730:
    // 0x301730: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x301730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_301734:
    // 0x301734: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x301734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_301738:
    // 0x301738: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x301738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_30173c:
    // 0x30173c: 0x84640092  lh          $a0, 0x92($v1)
    ctx->pc = 0x30173cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_301740:
    // 0x301740: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x301740u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_301744:
    // 0x301744: 0xc0cdb38  jal         func_336CE0
label_301748:
    if (ctx->pc == 0x301748u) {
        ctx->pc = 0x301748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301744u;
        // 0x301748: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30174Cu;
        goto label_30174c;
    }
    ctx->pc = 0x301744u;
    SET_GPR_U32(ctx, 31, 0x30174Cu);
    ctx->pc = 0x301748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301744u;
    // 0x301748: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x301744u, 0x30174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30174Cu;
label_30174c:
    // 0x30174c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x30174cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_301750:
    // 0x301750: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x301750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_301754:
    // 0x301754: 0x0  nop
    ctx->pc = 0x301754u;
    // NOP
label_301758:
    // 0x301758: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x301758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30175c:
    // 0x30175c: 0x0  nop
    ctx->pc = 0x30175cu;
    // NOP
label_301760:
    // 0x301760: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_301764:
    if (ctx->pc == 0x301764u) {
        ctx->pc = 0x301764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301760u;
        // 0x301764: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301768u;
        goto label_301768;
    }
    ctx->pc = 0x301760u;
    {
        const bool branch_taken_0x301760 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301760) {
            ctx->pc = 0x301764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301760u;
            // 0x301764: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301768u;
            goto label_301768;
        }
    }
    ctx->pc = 0x301768u;
label_301768:
    // 0x301768: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x301768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_30176c:
    // 0x30176c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x30176cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_301770:
    // 0x301770: 0xc10743a  jal         func_41D0E8
label_301774:
    if (ctx->pc == 0x301774u) {
        ctx->pc = 0x301774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301770u;
        // 0x301774: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301778u;
        goto label_301778;
    }
    ctx->pc = 0x301770u;
    SET_GPR_U32(ctx, 31, 0x301778u);
    ctx->pc = 0x301774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301770u;
    // 0x301774: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D0E8u, 0x301770u, 0x301778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301778u;
label_301778:
    // 0x301778: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x301778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_30177c:
    // 0x30177c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x30177cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_301780:
    // 0x301780: 0x62a80a  movz        $s5, $v1, $v0
    ctx->pc = 0x301780u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
label_301784:
    // 0x301784: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x301784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_301788:
    // 0x301788: 0x16a2003a  bne         $s5, $v0, . + 4 + (0x3A << 2)
label_30178c:
    if (ctx->pc == 0x30178Cu) {
        ctx->pc = 0x30178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301788u;
        // 0x30178c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301790u;
        goto label_301790;
    }
    ctx->pc = 0x301788u;
    {
        const bool branch_taken_0x301788 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x30178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301788u;
        // 0x30178c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301788) {
            ctx->pc = 0x301874u;
            goto label_301874;
        }
    }
    ctx->pc = 0x301790u;
label_301790:
    // 0x301790: 0xc087502  jal         func_21D408
label_301794:
    if (ctx->pc == 0x301794u) {
        ctx->pc = 0x301794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301790u;
        // 0x301794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301798u;
        goto label_301798;
    }
    ctx->pc = 0x301790u;
    SET_GPR_U32(ctx, 31, 0x301798u);
    ctx->pc = 0x301794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301790u;
    // 0x301794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x301790u, 0x301798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301798u;
label_301798:
    // 0x301798: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x301798u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_30179c:
    // 0x30179c: 0x8e0205e8  lw          $v0, 0x5E8($s0)
    ctx->pc = 0x30179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1512)));
label_3017a0:
    // 0x3017a0: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_3017a4:
    if (ctx->pc == 0x3017A4u) {
        ctx->pc = 0x3017A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017A0u;
        // 0x3017a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3017A8u;
        goto label_3017a8;
    }
    ctx->pc = 0x3017A0u;
    {
        const bool branch_taken_0x3017a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3017A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017A0u;
        // 0x3017a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3017a0) {
            ctx->pc = 0x301874u;
            goto label_301874;
        }
    }
    ctx->pc = 0x3017A8u;
label_3017a8:
    // 0x3017a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3017a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3017ac:
    // 0x3017ac: 0xc089fda  jal         func_227F68
label_3017b0:
    if (ctx->pc == 0x3017B0u) {
        ctx->pc = 0x3017B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017ACu;
        // 0x3017b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3017B4u;
        goto label_3017b4;
    }
    ctx->pc = 0x3017ACu;
    SET_GPR_U32(ctx, 31, 0x3017B4u);
    ctx->pc = 0x3017B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3017ACu;
    // 0x3017b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F68u, 0x3017ACu, 0x3017B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3017B4u;
label_3017b4:
    // 0x3017b4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_3017b8:
    if (ctx->pc == 0x3017B8u) {
        ctx->pc = 0x3017B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017B4u;
        // 0x3017b8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3017BCu;
        goto label_3017bc;
    }
    ctx->pc = 0x3017B4u;
    {
        const bool branch_taken_0x3017b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3017b4) {
            ctx->pc = 0x3017B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3017B4u;
            // 0x3017b8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3017F4u;
            goto label_3017f4;
        }
    }
    ctx->pc = 0x3017BCu;
label_3017bc:
    // 0x3017bc: 0xc089fe4  jal         func_227F90
label_3017c0:
    if (ctx->pc == 0x3017C0u) {
        ctx->pc = 0x3017C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017BCu;
        // 0x3017c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3017C4u;
        goto label_3017c4;
    }
    ctx->pc = 0x3017BCu;
    SET_GPR_U32(ctx, 31, 0x3017C4u);
    ctx->pc = 0x3017C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3017BCu;
    // 0x3017c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x3017BCu, 0x3017C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3017C4u;
label_3017c4:
    // 0x3017c4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3017c8:
    if (ctx->pc == 0x3017C8u) {
        ctx->pc = 0x3017C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017C4u;
        // 0x3017c8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3017CCu;
        goto label_3017cc;
    }
    ctx->pc = 0x3017C4u;
    {
        const bool branch_taken_0x3017c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3017c4) {
            ctx->pc = 0x3017C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3017C4u;
            // 0x3017c8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3017F4u;
            goto label_3017f4;
        }
    }
    ctx->pc = 0x3017CCu;
label_3017cc:
    // 0x3017cc: 0xc08a0fa  jal         func_2283E8
label_3017d0:
    if (ctx->pc == 0x3017D0u) {
        ctx->pc = 0x3017D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017CCu;
        // 0x3017d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3017D4u;
        goto label_3017d4;
    }
    ctx->pc = 0x3017CCu;
    SET_GPR_U32(ctx, 31, 0x3017D4u);
    ctx->pc = 0x3017D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3017CCu;
    // 0x3017d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2283E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2283E8u, 0x3017CCu, 0x3017D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3017D4u;
label_3017d4:
    // 0x3017d4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3017d8:
    if (ctx->pc == 0x3017D8u) {
        ctx->pc = 0x3017D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017D4u;
        // 0x3017d8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3017DCu;
        goto label_3017dc;
    }
    ctx->pc = 0x3017D4u;
    {
        const bool branch_taken_0x3017d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3017d4) {
            ctx->pc = 0x3017D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3017D4u;
            // 0x3017d8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3017F4u;
            goto label_3017f4;
        }
    }
    ctx->pc = 0x3017DCu;
label_3017dc:
    // 0x3017dc: 0x8e4201a8  lw          $v0, 0x1A8($s2)
    ctx->pc = 0x3017dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_3017e0:
    // 0x3017e0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x3017e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_3017e4:
    // 0x3017e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3017e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3017e8:
    // 0x3017e8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3017ec:
    if (ctx->pc == 0x3017ECu) {
        ctx->pc = 0x3017ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017E8u;
        // 0x3017ec: 0x8e0205ec  lw          $v0, 0x5EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3017F0u;
        goto label_3017f0;
    }
    ctx->pc = 0x3017E8u;
    {
        const bool branch_taken_0x3017e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3017e8) {
            ctx->pc = 0x3017ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3017E8u;
            // 0x3017ec: 0x8e0205ec  lw          $v0, 0x5EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3017F8u;
            goto label_3017f8;
        }
    }
    ctx->pc = 0x3017F0u;
label_3017f0:
    // 0x3017f0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3017f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3017f4:
    // 0x3017f4: 0x8e0205ec  lw          $v0, 0x5EC($s0)
    ctx->pc = 0x3017f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1516)));
label_3017f8:
    // 0x3017f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3017fc:
    if (ctx->pc == 0x3017FCu) {
        ctx->pc = 0x3017FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017F8u;
        // 0x3017fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301800u;
        goto label_301800;
    }
    ctx->pc = 0x3017F8u;
    {
        const bool branch_taken_0x3017f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3017FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3017F8u;
        // 0x3017fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3017f8) {
            ctx->pc = 0x301808u;
            goto label_301808;
        }
    }
    ctx->pc = 0x301800u;
label_301800:
    // 0x301800: 0x1662001c  bne         $s3, $v0, . + 4 + (0x1C << 2)
label_301804:
    if (ctx->pc == 0x301804u) {
        ctx->pc = 0x301804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301800u;
        // 0x301804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301808u;
        goto label_301808;
    }
    ctx->pc = 0x301800u;
    {
        const bool branch_taken_0x301800 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x301804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301800u;
        // 0x301804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301800) {
            ctx->pc = 0x301874u;
            goto label_301874;
        }
    }
    ctx->pc = 0x301808u;
label_301808:
    // 0x301808: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x301808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30180c:
    // 0x30180c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30180cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_301810:
    // 0x301810: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x301810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_301814:
    // 0x301814: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x301814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_301818:
    // 0x301818: 0x40f809  jalr        $v0
label_30181c:
    if (ctx->pc == 0x30181Cu) {
        ctx->pc = 0x30181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301818u;
        // 0x30181c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301820u;
        goto label_301820;
    }
    ctx->pc = 0x301818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x301820u);
        ctx->pc = 0x30181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301818u;
        // 0x30181c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301818u, 0x301820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301820u;
label_301820:
    // 0x301820: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x301820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_301824:
    // 0x301824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x301824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301828:
    // 0x301828: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x301828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_30182c:
    // 0x30182c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x30182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_301830:
    // 0x301830: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x301830u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_301834:
    // 0x301834: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x301834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_301838:
    // 0x301838: 0x60f809  jalr        $v1
label_30183c:
    if (ctx->pc == 0x30183Cu) {
        ctx->pc = 0x30183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301838u;
        // 0x30183c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301840u;
        goto label_301840;
    }
    ctx->pc = 0x301838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x301840u);
        ctx->pc = 0x30183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301838u;
        // 0x30183c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301838u, 0x301840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301840u;
label_301840:
    // 0x301840: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x301840u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_301844:
    // 0x301844: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x301844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_301848:
    // 0x301848: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x301848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30184c:
    // 0x30184c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30184cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_301850:
    // 0x301850: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x301850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_301854:
    // 0x301854: 0x40f809  jalr        $v0
label_301858:
    if (ctx->pc == 0x301858u) {
        ctx->pc = 0x301858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301854u;
        // 0x301858: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30185Cu;
        goto label_30185c;
    }
    ctx->pc = 0x301854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30185Cu);
        ctx->pc = 0x301858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301854u;
        // 0x301858: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301854u, 0x30185Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30185Cu;
label_30185c:
    // 0x30185c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30185cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_301860:
    // 0x301860: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x301860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_301864:
    // 0x301864: 0xc0b1a2e  jal         func_2C68B8
label_301868:
    if (ctx->pc == 0x301868u) {
        ctx->pc = 0x301868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301864u;
        // 0x301868: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30186Cu;
        goto label_30186c;
    }
    ctx->pc = 0x301864u;
    SET_GPR_U32(ctx, 31, 0x30186Cu);
    ctx->pc = 0x301868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301864u;
    // 0x301868: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C68B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C68B8u, 0x301864u, 0x30186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30186Cu;
label_30186c:
    // 0x30186c: 0x10000115  b           . + 4 + (0x115 << 2)
label_301870:
    if (ctx->pc == 0x301870u) {
        ctx->pc = 0x301870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30186Cu;
        // 0x301870: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301874u;
        goto label_301874;
    }
    ctx->pc = 0x30186Cu;
    {
        const bool branch_taken_0x30186c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30186Cu;
        // 0x301870: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30186c) {
            ctx->pc = 0x301CC4u;
            goto label_301cc4;
        }
    }
    ctx->pc = 0x301874u;
label_301874:
    // 0x301874: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x301874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_301878:
    // 0x301878: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x301878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_30187c:
    // 0x30187c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x30187cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_301880:
    // 0x301880: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x301880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_301884:
    // 0x301884: 0xc0c0846  jal         func_302118
label_301888:
    if (ctx->pc == 0x301888u) {
        ctx->pc = 0x301888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301884u;
        // 0x301888: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30188Cu;
        goto label_30188c;
    }
    ctx->pc = 0x301884u;
    SET_GPR_U32(ctx, 31, 0x30188Cu);
    ctx->pc = 0x301888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301884u;
    // 0x301888: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302118u, 0x301884u, 0x30188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30188Cu;
label_30188c:
    // 0x30188c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x30188cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_301890:
    // 0x301890: 0xa220028f  sb          $zero, 0x28F($s1)
    ctx->pc = 0x301890u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 655), (uint8_t)GPR_U32(ctx, 0));
label_301894:
    // 0x301894: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x301894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301898:
    // 0x301898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30189c:
    // 0x30189c: 0xc0a3464  jal         func_28D190
label_3018a0:
    if (ctx->pc == 0x3018A0u) {
        ctx->pc = 0x3018A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30189Cu;
        // 0x3018a0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3018A4u;
        goto label_3018a4;
    }
    ctx->pc = 0x30189Cu;
    SET_GPR_U32(ctx, 31, 0x3018A4u);
    ctx->pc = 0x3018A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30189Cu;
    // 0x3018a0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D190u, 0x30189Cu, 0x3018A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3018A4u;
label_3018a4:
    // 0x3018a4: 0x1a600013  blez        $s3, . + 4 + (0x13 << 2)
label_3018a8:
    if (ctx->pc == 0x3018A8u) {
        ctx->pc = 0x3018A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3018A4u;
        // 0x3018a8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3018ACu;
        goto label_3018ac;
    }
    ctx->pc = 0x3018A4u;
    {
        const bool branch_taken_0x3018a4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3018A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3018A4u;
        // 0x3018a8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3018a4) {
            ctx->pc = 0x3018F4u;
            goto label_3018f4;
        }
    }
    ctx->pc = 0x3018ACu;
label_3018ac:
    // 0x3018ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3018acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3018b0:
    // 0x3018b0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3018b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3018b4:
    // 0x3018b4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3018b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3018b8:
    // 0x3018b8: 0x40f809  jalr        $v0
label_3018bc:
    if (ctx->pc == 0x3018BCu) {
        ctx->pc = 0x3018BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3018B8u;
        // 0x3018bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3018C0u;
        goto label_3018c0;
    }
    ctx->pc = 0x3018B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3018C0u);
        ctx->pc = 0x3018BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3018B8u;
        // 0x3018bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3018B8u, 0x3018C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3018C0u;
label_3018c0:
    // 0x3018c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3018c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3018c4:
    // 0x3018c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3018c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3018c8:
    // 0x3018c8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3018c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3018cc:
    // 0x3018cc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3018ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3018d0:
    // 0x3018d0: 0x40f809  jalr        $v0
label_3018d4:
    if (ctx->pc == 0x3018D4u) {
        ctx->pc = 0x3018D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3018D0u;
        // 0x3018d4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3018D8u;
        goto label_3018d8;
    }
    ctx->pc = 0x3018D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3018D8u);
        ctx->pc = 0x3018D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3018D0u;
        // 0x3018d4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3018D0u, 0x3018D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3018D8u;
label_3018d8:
    // 0x3018d8: 0x8fa80060  lw          $t0, 0x60($sp)
    ctx->pc = 0x3018d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_3018dc:
    // 0x3018dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3018dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3018e0:
    // 0x3018e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3018e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3018e4:
    // 0x3018e4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3018e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3018e8:
    // 0x3018e8: 0xc0b11c4  jal         func_2C4710
label_3018ec:
    if (ctx->pc == 0x3018ECu) {
        ctx->pc = 0x3018ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3018E8u;
        // 0x3018ec: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3018F0u;
        goto label_3018f0;
    }
    ctx->pc = 0x3018E8u;
    SET_GPR_U32(ctx, 31, 0x3018F0u);
    ctx->pc = 0x3018ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3018E8u;
    // 0x3018ec: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4710u, 0x3018E8u, 0x3018F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3018F0u;
label_3018f0:
    // 0x3018f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3018f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3018f4:
    // 0x3018f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3018f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3018f8:
    // 0x3018f8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3018f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3018fc:
    // 0x3018fc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3018fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_301900:
    // 0x301900: 0x40f809  jalr        $v0
label_301904:
    if (ctx->pc == 0x301904u) {
        ctx->pc = 0x301904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301900u;
        // 0x301904: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301908u;
        goto label_301908;
    }
    ctx->pc = 0x301900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x301908u);
        ctx->pc = 0x301904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301900u;
        // 0x301904: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301900u, 0x301908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301908u;
label_301908:
    // 0x301908: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x301908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30190c:
    // 0x30190c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30190cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301910:
    // 0x301910: 0x86500092  lh          $s0, 0x92($s2)
    ctx->pc = 0x301910u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_301914:
    // 0x301914: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x301914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_301918:
    // 0x301918: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x301918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_30191c:
    // 0x30191c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x30191cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_301920:
    // 0x301920: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x301920u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_301924:
    // 0x301924: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x301924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_301928:
    // 0x301928: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x301928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_30192c:
    // 0x30192c: 0x40f809  jalr        $v0
label_301930:
    if (ctx->pc == 0x301930u) {
        ctx->pc = 0x301930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30192Cu;
        // 0x301930: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301934u;
        goto label_301934;
    }
    ctx->pc = 0x30192Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x301934u);
        ctx->pc = 0x301930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30192Cu;
        // 0x301930: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30192Cu, 0x301934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301934u;
label_301934:
    // 0x301934: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x301934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_301938:
    // 0x301938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30193c:
    // 0x30193c: 0x8c68bd30  lw          $t0, -0x42D0($v1)
    ctx->pc = 0x30193cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_301940:
    // 0x301940: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x301940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_301944:
    // 0x301944: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x301944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_301948:
    // 0x301948: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x301948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30194c:
    // 0x30194c: 0xc0b1018  jal         func_2C4060
label_301950:
    if (ctx->pc == 0x301950u) {
        ctx->pc = 0x301950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30194Cu;
        // 0x301950: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301954u;
        goto label_301954;
    }
    ctx->pc = 0x30194Cu;
    SET_GPR_U32(ctx, 31, 0x301954u);
    ctx->pc = 0x301950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30194Cu;
    // 0x301950: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4060u, 0x30194Cu, 0x301954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301954u;
label_301954:
    // 0x301954: 0x100000db  b           . + 4 + (0xDB << 2)
label_301958:
    if (ctx->pc == 0x301958u) {
        ctx->pc = 0x301958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301954u;
        // 0x301958: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30195Cu;
        goto label_30195c;
    }
    ctx->pc = 0x301954u;
    {
        const bool branch_taken_0x301954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301954u;
        // 0x301958: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301954) {
            ctx->pc = 0x301CC4u;
            goto label_301cc4;
        }
    }
    ctx->pc = 0x30195Cu;
label_30195c:
    // 0x30195c: 0xc0a44f0  jal         func_2913C0
label_301960:
    if (ctx->pc == 0x301960u) {
        ctx->pc = 0x301960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30195Cu;
        // 0x301960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301964u;
        goto label_301964;
    }
    ctx->pc = 0x30195Cu;
    SET_GPR_U32(ctx, 31, 0x301964u);
    ctx->pc = 0x301960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30195Cu;
    // 0x301960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2913C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2913C0u, 0x30195Cu, 0x301964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301964u;
label_301964:
    // 0x301964: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x301964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301968:
    // 0x301968: 0x144300d6  bne         $v0, $v1, . + 4 + (0xD6 << 2)
label_30196c:
    if (ctx->pc == 0x30196Cu) {
        ctx->pc = 0x30196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301968u;
        // 0x30196c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301970u;
        goto label_301970;
    }
    ctx->pc = 0x301968u;
    {
        const bool branch_taken_0x301968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301968u;
        // 0x30196c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301968) {
            ctx->pc = 0x301CC4u;
            goto label_301cc4;
        }
    }
    ctx->pc = 0x301970u;
label_301970:
    // 0x301970: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x301970u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_301974:
    // 0x301974: 0x4420012  bltzl       $v0, . + 4 + (0x12 << 2)
label_301978:
    if (ctx->pc == 0x301978u) {
        ctx->pc = 0x301978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301974u;
        // 0x301978: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30197Cu;
        goto label_30197c;
    }
    ctx->pc = 0x301974u;
    {
        const bool branch_taken_0x301974 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x301974) {
            ctx->pc = 0x301978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301974u;
            // 0x301978: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3019C0u;
            goto label_3019c0;
        }
    }
    ctx->pc = 0x30197Cu;
label_30197c:
    // 0x30197c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_301980:
    if (ctx->pc == 0x301980u) {
        ctx->pc = 0x301980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30197Cu;
        // 0x301980: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301984u;
        goto label_301984;
    }
    ctx->pc = 0x30197Cu;
    {
        const bool branch_taken_0x30197c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x301980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30197Cu;
        // 0x301980: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30197c) {
            ctx->pc = 0x301990u;
            goto label_301990;
        }
    }
    ctx->pc = 0x301984u;
label_301984:
    // 0x301984: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x301984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_301988:
    // 0x301988: 0x10000002  b           . + 4 + (0x2 << 2)
label_30198c:
    if (ctx->pc == 0x30198Cu) {
        ctx->pc = 0x30198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301988u;
        // 0x30198c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301990u;
        goto label_301990;
    }
    ctx->pc = 0x301988u;
    {
        const bool branch_taken_0x301988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301988u;
        // 0x30198c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301988) {
            ctx->pc = 0x301994u;
            goto label_301994;
        }
    }
    ctx->pc = 0x301990u;
label_301990:
    // 0x301990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x301990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301994:
    // 0x301994: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x301994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_301998:
    // 0x301998: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x301998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30199c:
    // 0x30199c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3019a0:
    // 0x3019a0: 0x40f809  jalr        $v0
label_3019a4:
    if (ctx->pc == 0x3019A4u) {
        ctx->pc = 0x3019A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3019A0u;
        // 0x3019a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3019A8u;
        goto label_3019a8;
    }
    ctx->pc = 0x3019A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3019A8u);
        ctx->pc = 0x3019A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3019A0u;
        // 0x3019a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3019A0u, 0x3019A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3019A8u;
label_3019a8:
    // 0x3019a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3019a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3019ac:
    // 0x3019ac: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_3019b0:
    if (ctx->pc == 0x3019B0u) {
        ctx->pc = 0x3019B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3019ACu;
        // 0x3019b0: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3019B4u;
        goto label_3019b4;
    }
    ctx->pc = 0x3019ACu;
    {
        const bool branch_taken_0x3019ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3019ac) {
            ctx->pc = 0x3019B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3019ACu;
            // 0x3019b0: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3019C0u;
            goto label_3019c0;
        }
    }
    ctx->pc = 0x3019B4u;
label_3019b4:
    // 0x3019b4: 0xc0a35f6  jal         func_28D7D8
label_3019b8:
    if (ctx->pc == 0x3019B8u) {
        ctx->pc = 0x3019B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3019B4u;
        // 0x3019b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3019BCu;
        goto label_3019bc;
    }
    ctx->pc = 0x3019B4u;
    SET_GPR_U32(ctx, 31, 0x3019BCu);
    ctx->pc = 0x3019B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3019B4u;
    // 0x3019b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x3019B4u, 0x3019BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3019BCu;
label_3019bc:
    // 0x3019bc: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x3019bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3019c0:
    // 0x3019c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3019c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3019c4:
    // 0x3019c4: 0xc0e3d62  jal         func_38F588
label_3019c8:
    if (ctx->pc == 0x3019C8u) {
        ctx->pc = 0x3019C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3019C4u;
        // 0x3019c8: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3019CCu;
        goto label_3019cc;
    }
    ctx->pc = 0x3019C4u;
    SET_GPR_U32(ctx, 31, 0x3019CCu);
    ctx->pc = 0x3019C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3019C4u;
    // 0x3019c8: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F588u, 0x3019C4u, 0x3019CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3019CCu;
label_3019cc:
    // 0x3019cc: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x3019ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3019d0:
    // 0x3019d0: 0xc0e3d62  jal         func_38F588
label_3019d4:
    if (ctx->pc == 0x3019D4u) {
        ctx->pc = 0x3019D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3019D0u;
        // 0x3019d4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3019D8u;
        goto label_3019d8;
    }
    ctx->pc = 0x3019D0u;
    SET_GPR_U32(ctx, 31, 0x3019D8u);
    ctx->pc = 0x3019D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3019D0u;
    // 0x3019d4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F588u, 0x3019D0u, 0x3019D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3019D8u;
label_3019d8:
    // 0x3019d8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x3019d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3019dc:
    // 0x3019dc: 0xc0e57ce  jal         func_395F38
label_3019e0:
    if (ctx->pc == 0x3019E0u) {
        ctx->pc = 0x3019E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3019DCu;
        // 0x3019e0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3019E4u;
        goto label_3019e4;
    }
    ctx->pc = 0x3019DCu;
    SET_GPR_U32(ctx, 31, 0x3019E4u);
    ctx->pc = 0x3019E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3019DCu;
    // 0x3019e0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3019DCu, 0x3019E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3019E4u;
label_3019e4:
    // 0x3019e4: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x3019e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3019e8:
    // 0x3019e8: 0xc0e57ce  jal         func_395F38
label_3019ec:
    if (ctx->pc == 0x3019ECu) {
        ctx->pc = 0x3019ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3019E8u;
        // 0x3019ec: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3019F0u;
        goto label_3019f0;
    }
    ctx->pc = 0x3019E8u;
    SET_GPR_U32(ctx, 31, 0x3019F0u);
    ctx->pc = 0x3019ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3019E8u;
    // 0x3019ec: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3019E8u, 0x3019F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3019F0u;
label_3019f0:
    // 0x3019f0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x3019f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3019f4:
    // 0x3019f4: 0xc0e2612  jal         func_389848
label_3019f8:
    if (ctx->pc == 0x3019F8u) {
        ctx->pc = 0x3019F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3019F4u;
        // 0x3019f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3019FCu;
        goto label_3019fc;
    }
    ctx->pc = 0x3019F4u;
    SET_GPR_U32(ctx, 31, 0x3019FCu);
    ctx->pc = 0x3019F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3019F4u;
    // 0x3019f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x3019F4u, 0x3019FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3019FCu;
label_3019fc:
    // 0x3019fc: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x3019fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_301a00:
    // 0x301a00: 0xc0e2612  jal         func_389848
label_301a04:
    if (ctx->pc == 0x301A04u) {
        ctx->pc = 0x301A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A00u;
        // 0x301a04: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301A08u;
        goto label_301a08;
    }
    ctx->pc = 0x301A00u;
    SET_GPR_U32(ctx, 31, 0x301A08u);
    ctx->pc = 0x301A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301A00u;
    // 0x301a04: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x301A00u, 0x301A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301A08u;
label_301a08:
    // 0x301a08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x301a08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301a0c:
    // 0x301a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x301a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301a10:
    // 0x301a10: 0x17c2000b  bne         $fp, $v0, . + 4 + (0xB << 2)
label_301a14:
    if (ctx->pc == 0x301A14u) {
        ctx->pc = 0x301A18u;
        goto label_301a18;
    }
    ctx->pc = 0x301A10u;
    {
        const bool branch_taken_0x301a10 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x301a10) {
            ctx->pc = 0x301A40u;
            goto label_301a40;
        }
    }
    ctx->pc = 0x301A18u;
label_301a18:
    // 0x301a18: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_301a1c:
    if (ctx->pc == 0x301A1Cu) {
        ctx->pc = 0x301A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A18u;
        // 0x301a1c: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301A20u;
        goto label_301a20;
    }
    ctx->pc = 0x301A18u;
    {
        const bool branch_taken_0x301a18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x301A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A18u;
        // 0x301a1c: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301a18) {
            ctx->pc = 0x301A38u;
            goto label_301a38;
        }
    }
    ctx->pc = 0x301A20u;
label_301a20:
    // 0x301a20: 0xc087502  jal         func_21D408
label_301a24:
    if (ctx->pc == 0x301A24u) {
        ctx->pc = 0x301A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A20u;
        // 0x301a24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301A28u;
        goto label_301a28;
    }
    ctx->pc = 0x301A20u;
    SET_GPR_U32(ctx, 31, 0x301A28u);
    ctx->pc = 0x301A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301A20u;
    // 0x301a24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x301A20u, 0x301A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301A28u;
label_301a28:
    // 0x301a28: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x301a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_301a2c:
    // 0x301a2c: 0x8c6205e8  lw          $v0, 0x5E8($v1)
    ctx->pc = 0x301a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1512)));
label_301a30:
    // 0x301a30: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
label_301a34:
    if (ctx->pc == 0x301A34u) {
        ctx->pc = 0x301A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A30u;
        // 0x301a34: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301A38u;
        goto label_301a38;
    }
    ctx->pc = 0x301A30u;
    {
        const bool branch_taken_0x301a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A30u;
        // 0x301a34: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301a30) {
            ctx->pc = 0x301CC0u;
            goto label_301cc0;
        }
    }
    ctx->pc = 0x301A38u;
label_301a38:
    // 0x301a38: 0x10000008  b           . + 4 + (0x8 << 2)
label_301a3c:
    if (ctx->pc == 0x301A3Cu) {
        ctx->pc = 0x301A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A38u;
        // 0x301a3c: 0xafa30068  sw          $v1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301A40u;
        goto label_301a40;
    }
    ctx->pc = 0x301A38u;
    {
        const bool branch_taken_0x301a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A38u;
        // 0x301a3c: 0xafa30068  sw          $v1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301a38) {
            ctx->pc = 0x301A5Cu;
            goto label_301a5c;
        }
    }
    ctx->pc = 0x301A40u;
label_301a40:
    // 0x301a40: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_301a44:
    if (ctx->pc == 0x301A44u) {
        ctx->pc = 0x301A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A40u;
        // 0x301a44: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301A48u;
        goto label_301a48;
    }
    ctx->pc = 0x301A40u;
    {
        const bool branch_taken_0x301a40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x301A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A40u;
        // 0x301a44: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301a40) {
            ctx->pc = 0x301A58u;
            goto label_301a58;
        }
    }
    ctx->pc = 0x301A48u;
label_301a48:
    // 0x301a48: 0x56e00004  bnel        $s7, $zero, . + 4 + (0x4 << 2)
label_301a4c:
    if (ctx->pc == 0x301A4Cu) {
        ctx->pc = 0x301A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A48u;
        // 0x301a4c: 0xafa40068  sw          $a0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301A50u;
        goto label_301a50;
    }
    ctx->pc = 0x301A48u;
    {
        const bool branch_taken_0x301a48 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x301a48) {
            ctx->pc = 0x301A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301A48u;
            // 0x301a4c: 0xafa40068  sw          $a0, 0x68($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301A5Cu;
            goto label_301a5c;
        }
    }
    ctx->pc = 0x301A50u;
label_301a50:
    // 0x301a50: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_301a54:
    if (ctx->pc == 0x301A54u) {
        ctx->pc = 0x301A58u;
        goto label_301a58;
    }
    ctx->pc = 0x301A50u;
    {
        const bool branch_taken_0x301a50 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x301a50) {
            ctx->pc = 0x301A5Cu;
            goto label_301a5c;
        }
    }
    ctx->pc = 0x301A58u;
label_301a58:
    // 0x301a58: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x301a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_301a5c:
    // 0x301a5c: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
label_301a60:
    if (ctx->pc == 0x301A60u) {
        ctx->pc = 0x301A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A5Cu;
        // 0x301a60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301A64u;
        goto label_301a64;
    }
    ctx->pc = 0x301A5Cu;
    {
        const bool branch_taken_0x301a5c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x301A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A5Cu;
        // 0x301a60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301a5c) {
            ctx->pc = 0x301A74u;
            goto label_301a74;
        }
    }
    ctx->pc = 0x301A64u;
label_301a64:
    // 0x301a64: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_301a68:
    if (ctx->pc == 0x301A68u) {
        ctx->pc = 0x301A6Cu;
        goto label_301a6c;
    }
    ctx->pc = 0x301A64u;
    {
        const bool branch_taken_0x301a64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x301a64) {
            ctx->pc = 0x301AB8u;
            goto label_301ab8;
        }
    }
    ctx->pc = 0x301A6Cu;
label_301a6c:
    // 0x301a6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_301a70:
    if (ctx->pc == 0x301A70u) {
        ctx->pc = 0x301A74u;
        goto label_301a74;
    }
    ctx->pc = 0x301A6Cu;
    {
        const bool branch_taken_0x301a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301a6c) {
            ctx->pc = 0x301A90u;
            goto label_301a90;
        }
    }
    ctx->pc = 0x301A74u;
label_301a74:
    // 0x301a74: 0x96c50112  lhu         $a1, 0x112($s6)
    ctx->pc = 0x301a74u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 274)));
label_301a78:
    // 0x301a78: 0xc0e44cc  jal         func_391330
label_301a7c:
    if (ctx->pc == 0x301A7Cu) {
        ctx->pc = 0x301A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A78u;
        // 0x301a7c: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301A80u;
        goto label_301a80;
    }
    ctx->pc = 0x301A78u;
    SET_GPR_U32(ctx, 31, 0x301A80u);
    ctx->pc = 0x301A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301A78u;
    // 0x301a7c: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x301A78u, 0x301A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301A80u;
label_301a80:
    // 0x301a80: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x301a80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_301a84:
    // 0x301a84: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x301a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_301a88:
    // 0x301a88: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_301a8c:
    if (ctx->pc == 0x301A8Cu) {
        ctx->pc = 0x301A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A88u;
        // 0x301a8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301A90u;
        goto label_301a90;
    }
    ctx->pc = 0x301A88u;
    {
        const bool branch_taken_0x301a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x301A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A88u;
        // 0x301a8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301a88) {
            ctx->pc = 0x301AB4u;
            goto label_301ab4;
        }
    }
    ctx->pc = 0x301A90u;
label_301a90:
    // 0x301a90: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_301a94:
    if (ctx->pc == 0x301A94u) {
        ctx->pc = 0x301A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A90u;
        // 0x301a94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301A98u;
        goto label_301a98;
    }
    ctx->pc = 0x301A90u;
    {
        const bool branch_taken_0x301a90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x301A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A90u;
        // 0x301a94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301a90) {
            ctx->pc = 0x301AB8u;
            goto label_301ab8;
        }
    }
    ctx->pc = 0x301A98u;
label_301a98:
    // 0x301a98: 0x96050112  lhu         $a1, 0x112($s0)
    ctx->pc = 0x301a98u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
label_301a9c:
    // 0x301a9c: 0xc0e44cc  jal         func_391330
label_301aa0:
    if (ctx->pc == 0x301AA0u) {
        ctx->pc = 0x301AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A9Cu;
        // 0x301aa0: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301AA4u;
        goto label_301aa4;
    }
    ctx->pc = 0x301A9Cu;
    SET_GPR_U32(ctx, 31, 0x301AA4u);
    ctx->pc = 0x301AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301A9Cu;
    // 0x301aa0: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x301A9Cu, 0x301AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301AA4u;
label_301aa4:
    // 0x301aa4: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x301aa4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_301aa8:
    // 0x301aa8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x301aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_301aac:
    // 0x301aac: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_301ab0:
    if (ctx->pc == 0x301AB0u) {
        ctx->pc = 0x301AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AACu;
        // 0x301ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301AB4u;
        goto label_301ab4;
    }
    ctx->pc = 0x301AACu;
    {
        const bool branch_taken_0x301aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x301AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AACu;
        // 0x301ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301aac) {
            ctx->pc = 0x301AB8u;
            goto label_301ab8;
        }
    }
    ctx->pc = 0x301AB4u;
label_301ab4:
    // 0x301ab4: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x301ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_301ab8:
    // 0x301ab8: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_301abc:
    if (ctx->pc == 0x301ABCu) {
        ctx->pc = 0x301ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AB8u;
        // 0x301abc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301AC0u;
        goto label_301ac0;
    }
    ctx->pc = 0x301AB8u;
    {
        const bool branch_taken_0x301ab8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x301ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AB8u;
        // 0x301abc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ab8) {
            ctx->pc = 0x301AD8u;
            goto label_301ad8;
        }
    }
    ctx->pc = 0x301AC0u;
label_301ac0:
    // 0x301ac0: 0x926212d5  lbu         $v0, 0x12D5($s3)
    ctx->pc = 0x301ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4821)));
label_301ac4:
    // 0x301ac4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_301ac8:
    if (ctx->pc == 0x301AC8u) {
        ctx->pc = 0x301AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AC4u;
        // 0x301ac8: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x301ACCu;
        goto label_301acc;
    }
    ctx->pc = 0x301AC4u;
    {
        const bool branch_taken_0x301ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AC4u;
        // 0x301ac8: 0x2182b  sltu        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ac4) {
            ctx->pc = 0x301AD8u;
            goto label_301ad8;
        }
    }
    ctx->pc = 0x301ACCu;
label_301acc:
    // 0x301acc: 0x2741026  xor         $v0, $s3, $s4
    ctx->pc = 0x301accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 20));
label_301ad0:
    // 0x301ad0: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x301ad0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_301ad4:
    // 0x301ad4: 0x2a80b  movn        $s5, $zero, $v0
    ctx->pc = 0x301ad4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_301ad8:
    // 0x301ad8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x301ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_301adc:
    // 0x301adc: 0xc087420  jal         func_21D080
label_301ae0:
    if (ctx->pc == 0x301AE0u) {
        ctx->pc = 0x301AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301ADCu;
        // 0x301ae0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301AE4u;
        goto label_301ae4;
    }
    ctx->pc = 0x301ADCu;
    SET_GPR_U32(ctx, 31, 0x301AE4u);
    ctx->pc = 0x301AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301ADCu;
    // 0x301ae0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x301ADCu, 0x301AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301AE4u;
label_301ae4:
    // 0x301ae4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x301ae4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_301ae8:
    // 0x301ae8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x301ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_301aec:
    // 0x301aec: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_301af0:
    if (ctx->pc == 0x301AF0u) {
        ctx->pc = 0x301AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AECu;
        // 0x301af0: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301AF4u;
        goto label_301af4;
    }
    ctx->pc = 0x301AECu;
    {
        const bool branch_taken_0x301aec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x301AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AECu;
        // 0x301af0: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301aec) {
            ctx->pc = 0x301B04u;
            goto label_301b04;
        }
    }
    ctx->pc = 0x301AF4u;
label_301af4:
    // 0x301af4: 0xc087420  jal         func_21D080
label_301af8:
    if (ctx->pc == 0x301AF8u) {
        ctx->pc = 0x301AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AF4u;
        // 0x301af8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301AFCu;
        goto label_301afc;
    }
    ctx->pc = 0x301AF4u;
    SET_GPR_U32(ctx, 31, 0x301AFCu);
    ctx->pc = 0x301AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301AF4u;
    // 0x301af8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x301AF4u, 0x301AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301AFCu;
label_301afc:
    // 0x301afc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x301afcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_301b00:
    // 0x301b00: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x301b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_301b04:
    // 0x301b04: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x301b04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_301b08:
    // 0x301b08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x301b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_301b0c:
    // 0x301b0c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x301b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_301b10:
    // 0x301b10: 0xc136afa  jal         func_4DABE8
label_301b14:
    if (ctx->pc == 0x301B14u) {
        ctx->pc = 0x301B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301B10u;
        // 0x301b14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301B18u;
        goto label_301b18;
    }
    ctx->pc = 0x301B10u;
    SET_GPR_U32(ctx, 31, 0x301B18u);
    ctx->pc = 0x301B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301B10u;
    // 0x301b14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x301B10u, 0x301B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301B18u;
label_301b18:
    // 0x301b18: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x301b18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_301b1c:
    // 0x301b1c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x301b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_301b20:
    // 0x301b20: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x301b20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_301b24:
    // 0x301b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_301b28:
    // 0x301b28: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x301b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_301b2c:
    // 0x301b2c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x301b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_301b30:
    // 0x301b30: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x301b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_301b34:
    // 0x301b34: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x301b34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_301b38:
    // 0x301b38: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x301b38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_301b3c:
    // 0x301b3c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x301b3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_301b40:
    // 0x301b40: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x301b40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_301b44:
    // 0x301b44: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x301b44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_301b48:
    // 0x301b48: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x301b48u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_301b4c:
    // 0x301b4c: 0x4a0003bf  vwaitq
    ctx->pc = 0x301b4cu;
    // VWAITQ (Q already resolved in this runtime)
label_301b50:
    // 0x301b50: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x301b50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_301b54:
    // 0x301b54: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x301b54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_301b58:
    // 0x301b58: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x301b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_301b5c:
    // 0x301b5c: 0xc094ab8  jal         func_252AE0
label_301b60:
    if (ctx->pc == 0x301B60u) {
        ctx->pc = 0x301B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301B5Cu;
        // 0x301b60: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301B64u;
        goto label_301b64;
    }
    ctx->pc = 0x301B5Cu;
    SET_GPR_U32(ctx, 31, 0x301B64u);
    ctx->pc = 0x301B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301B5Cu;
    // 0x301b60: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252AE0u, 0x301B5Cu, 0x301B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301B64u;
label_301b64:
    // 0x301b64: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_301b68:
    if (ctx->pc == 0x301B68u) {
        ctx->pc = 0x301B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301B64u;
        // 0x301b68: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301B6Cu;
        goto label_301b6c;
    }
    ctx->pc = 0x301B64u;
    {
        const bool branch_taken_0x301b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301B64u;
        // 0x301b68: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301b64) {
            ctx->pc = 0x301C3Cu;
            goto label_301c3c;
        }
    }
    ctx->pc = 0x301B6Cu;
label_301b6c:
    // 0x301b6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x301b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_301b70:
    // 0x301b70: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x301b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_301b74:
    // 0x301b74: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x301b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_301b78:
    // 0x301b78: 0x84640092  lh          $a0, 0x92($v1)
    ctx->pc = 0x301b78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_301b7c:
    // 0x301b7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x301b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301b80:
    // 0x301b80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x301b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301b84:
    // 0x301b84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x301b84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301b88:
    // 0x301b88: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x301b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_301b8c:
    // 0x301b8c: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x301b8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_301b90:
    // 0x301b90: 0xc09381e  jal         func_24E078
label_301b94:
    if (ctx->pc == 0x301B94u) {
        ctx->pc = 0x301B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301B90u;
        // 0x301b94: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301B98u;
        goto label_301b98;
    }
    ctx->pc = 0x301B90u;
    SET_GPR_U32(ctx, 31, 0x301B98u);
    ctx->pc = 0x301B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301B90u;
    // 0x301b94: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x301B90u, 0x301B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301B98u;
label_301b98:
    // 0x301b98: 0x1453002a  bne         $v0, $s3, . + 4 + (0x2A << 2)
label_301b9c:
    if (ctx->pc == 0x301B9Cu) {
        ctx->pc = 0x301BA0u;
        goto label_301ba0;
    }
    ctx->pc = 0x301B98u;
    {
        const bool branch_taken_0x301b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x301b98) {
            ctx->pc = 0x301C44u;
            goto label_301c44;
        }
    }
    ctx->pc = 0x301BA0u;
label_301ba0:
    // 0x301ba0: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x301ba0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_301ba4:
    // 0x301ba4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_301ba8:
    if (ctx->pc == 0x301BA8u) {
        ctx->pc = 0x301BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BA4u;
        // 0x301ba8: 0x9223002c  lbu         $v1, 0x2C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301BACu;
        goto label_301bac;
    }
    ctx->pc = 0x301BA4u;
    {
        const bool branch_taken_0x301ba4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x301BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BA4u;
        // 0x301ba8: 0x9223002c  lbu         $v1, 0x2C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ba4) {
            ctx->pc = 0x301BBCu;
            goto label_301bbc;
        }
    }
    ctx->pc = 0x301BACu;
label_301bac:
    // 0x301bac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x301bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_301bb0:
    // 0x301bb0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x301bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_301bb4:
    // 0x301bb4: 0x10000002  b           . + 4 + (0x2 << 2)
label_301bb8:
    if (ctx->pc == 0x301BB8u) {
        ctx->pc = 0x301BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BB4u;
        // 0x301bb8: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301BBCu;
        goto label_301bbc;
    }
    ctx->pc = 0x301BB4u;
    {
        const bool branch_taken_0x301bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BB4u;
        // 0x301bb8: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301bb4) {
            ctx->pc = 0x301BC0u;
            goto label_301bc0;
        }
    }
    ctx->pc = 0x301BBCu;
label_301bbc:
    // 0x301bbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x301bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301bc0:
    // 0x301bc0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_301bc4:
    if (ctx->pc == 0x301BC4u) {
        ctx->pc = 0x301BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BC0u;
        // 0x301bc4: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301BC8u;
        goto label_301bc8;
    }
    ctx->pc = 0x301BC0u;
    {
        const bool branch_taken_0x301bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BC0u;
        // 0x301bc4: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301bc0) {
            ctx->pc = 0x301C0Cu;
            goto label_301c0c;
        }
    }
    ctx->pc = 0x301BC8u;
label_301bc8:
    // 0x301bc8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x301bc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_301bcc:
    // 0x301bcc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_301bd0:
    if (ctx->pc == 0x301BD0u) {
        ctx->pc = 0x301BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BCCu;
        // 0x301bd0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301BD4u;
        goto label_301bd4;
    }
    ctx->pc = 0x301BCCu;
    {
        const bool branch_taken_0x301bcc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x301BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BCCu;
        // 0x301bd0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301bcc) {
            ctx->pc = 0x301BE0u;
            goto label_301be0;
        }
    }
    ctx->pc = 0x301BD4u;
label_301bd4:
    // 0x301bd4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x301bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_301bd8:
    // 0x301bd8: 0x10000002  b           . + 4 + (0x2 << 2)
label_301bdc:
    if (ctx->pc == 0x301BDCu) {
        ctx->pc = 0x301BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BD8u;
        // 0x301bdc: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301BE0u;
        goto label_301be0;
    }
    ctx->pc = 0x301BD8u;
    {
        const bool branch_taken_0x301bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BD8u;
        // 0x301bdc: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301bd8) {
            ctx->pc = 0x301BE4u;
            goto label_301be4;
        }
    }
    ctx->pc = 0x301BE0u;
label_301be0:
    // 0x301be0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x301be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301be4:
    // 0x301be4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x301be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_301be8:
    // 0x301be8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x301be8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_301bec:
    // 0x301bec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x301becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_301bf0:
    // 0x301bf0: 0x40f809  jalr        $v0
label_301bf4:
    if (ctx->pc == 0x301BF4u) {
        ctx->pc = 0x301BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BF0u;
        // 0x301bf4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301BF8u;
        goto label_301bf8;
    }
    ctx->pc = 0x301BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x301BF8u);
        ctx->pc = 0x301BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BF0u;
        // 0x301bf4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301BF0u, 0x301BF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301BF8u;
label_301bf8:
    // 0x301bf8: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x301bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_301bfc:
    // 0x301bfc: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x301bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_301c00:
    // 0x301c00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x301c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301c04:
    // 0x301c04: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x301c04u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_301c08:
    // 0x301c08: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x301c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
label_301c0c:
    // 0x301c0c: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_301c10:
    if (ctx->pc == 0x301C10u) {
        ctx->pc = 0x301C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C0Cu;
        // 0x301c10: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301C14u;
        goto label_301c14;
    }
    ctx->pc = 0x301C0Cu;
    {
        const bool branch_taken_0x301c0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x301C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C0Cu;
        // 0x301c10: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301c0c) {
            ctx->pc = 0x301C44u;
            goto label_301c44;
        }
    }
    ctx->pc = 0x301C14u;
label_301c14:
    // 0x301c14: 0xc087502  jal         func_21D408
label_301c18:
    if (ctx->pc == 0x301C18u) {
        ctx->pc = 0x301C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C14u;
        // 0x301c18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301C1Cu;
        goto label_301c1c;
    }
    ctx->pc = 0x301C14u;
    SET_GPR_U32(ctx, 31, 0x301C1Cu);
    ctx->pc = 0x301C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301C14u;
    // 0x301c18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x301C14u, 0x301C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301C1Cu;
label_301c1c:
    // 0x301c1c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x301c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_301c20:
    // 0x301c20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301c24:
    // 0x301c24: 0x8c6205e8  lw          $v0, 0x5E8($v1)
    ctx->pc = 0x301c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1512)));
label_301c28:
    // 0x301c28: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x301c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_301c2c:
    // 0x301c2c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x301c2cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_301c30:
    // 0x301c30: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x301c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
label_301c34:
    // 0x301c34: 0x10000003  b           . + 4 + (0x3 << 2)
label_301c38:
    if (ctx->pc == 0x301C38u) {
        ctx->pc = 0x301C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C34u;
        // 0x301c38: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301C3Cu;
        goto label_301c3c;
    }
    ctx->pc = 0x301C34u;
    {
        const bool branch_taken_0x301c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C34u;
        // 0x301c38: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301c34) {
            ctx->pc = 0x301C44u;
            goto label_301c44;
        }
    }
    ctx->pc = 0x301C3Cu;
label_301c3c:
    // 0x301c3c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x301c3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_301c40:
    // 0x301c40: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x301c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_301c44:
    // 0x301c44: 0xc0a4e54  jal         func_293950
label_301c48:
    if (ctx->pc == 0x301C48u) {
        ctx->pc = 0x301C4Cu;
        goto label_301c4c;
    }
    ctx->pc = 0x301C44u;
    SET_GPR_U32(ctx, 31, 0x301C4Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x301C44u, 0x301C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301C4Cu;
label_301c4c:
    // 0x301c4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x301c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301c50:
    // 0x301c50: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_301c54:
    if (ctx->pc == 0x301C54u) {
        ctx->pc = 0x301C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C50u;
        // 0x301c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301C58u;
        goto label_301c58;
    }
    ctx->pc = 0x301C50u;
    {
        const bool branch_taken_0x301c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x301C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C50u;
        // 0x301c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301c50) {
            ctx->pc = 0x301CB8u;
            goto label_301cb8;
        }
    }
    ctx->pc = 0x301C58u;
label_301c58:
    // 0x301c58: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_301c5c:
    if (ctx->pc == 0x301C5Cu) {
        ctx->pc = 0x301C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C58u;
        // 0x301c5c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301C60u;
        goto label_301c60;
    }
    ctx->pc = 0x301C58u;
    {
        const bool branch_taken_0x301c58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x301C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C58u;
        // 0x301c5c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301c58) {
            ctx->pc = 0x301C7Cu;
            goto label_301c7c;
        }
    }
    ctx->pc = 0x301C60u;
label_301c60:
    // 0x301c60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x301c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_301c64:
    // 0x301c64: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x301c64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_301c68:
    // 0x301c68: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x301c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_301c6c:
    // 0x301c6c: 0x40f809  jalr        $v0
label_301c70:
    if (ctx->pc == 0x301C70u) {
        ctx->pc = 0x301C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C6Cu;
        // 0x301c70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301C74u;
        goto label_301c74;
    }
    ctx->pc = 0x301C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x301C74u);
        ctx->pc = 0x301C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C6Cu;
        // 0x301c70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301C6Cu, 0x301C74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301C74u;
label_301c74:
    // 0x301c74: 0x10000002  b           . + 4 + (0x2 << 2)
label_301c78:
    if (ctx->pc == 0x301C78u) {
        ctx->pc = 0x301C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C74u;
        // 0x301c78: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301C7Cu;
        goto label_301c7c;
    }
    ctx->pc = 0x301C74u;
    {
        const bool branch_taken_0x301c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C74u;
        // 0x301c78: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301c74) {
            ctx->pc = 0x301C80u;
            goto label_301c80;
        }
    }
    ctx->pc = 0x301C7Cu;
label_301c7c:
    // 0x301c7c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x301c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_301c80:
    // 0x301c80: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x301c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_301c84:
    // 0x301c84: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x301c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_301c88:
    // 0x301c88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x301c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_301c8c:
    // 0x301c8c: 0x904b0add  lbu         $t3, 0xADD($v0)
    ctx->pc = 0x301c8cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2781)));
label_301c90:
    // 0x301c90: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x301c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_301c94:
    // 0x301c94: 0x8fa90064  lw          $t1, 0x64($sp)
    ctx->pc = 0x301c94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_301c98:
    // 0x301c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_301c9c:
    // 0x301c9c: 0x8faa0068  lw          $t2, 0x68($sp)
    ctx->pc = 0x301c9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_301ca0:
    // 0x301ca0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x301ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_301ca4:
    // 0x301ca4: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x301ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_301ca8:
    // 0x301ca8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x301ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_301cac:
    // 0x301cac: 0xc0b3e3e  jal         func_2CF8F8
label_301cb0:
    if (ctx->pc == 0x301CB0u) {
        ctx->pc = 0x301CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301CACu;
        // 0x301cb0: 0xafb50008  sw          $s5, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301CB4u;
        goto label_301cb4;
    }
    ctx->pc = 0x301CACu;
    SET_GPR_U32(ctx, 31, 0x301CB4u);
    ctx->pc = 0x301CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301CACu;
    // 0x301cb0: 0xafb50008  sw          $s5, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF8F8u, 0x301CACu, 0x301CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301CB4u;
label_301cb4:
    // 0x301cb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_301cb8:
    // 0x301cb8: 0xc0a35d6  jal         func_28D758
label_301cbc:
    if (ctx->pc == 0x301CBCu) {
        ctx->pc = 0x301CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301CB8u;
        // 0x301cbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301CC0u;
        goto label_301cc0;
    }
    ctx->pc = 0x301CB8u;
    SET_GPR_U32(ctx, 31, 0x301CC0u);
    ctx->pc = 0x301CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301CB8u;
    // 0x301cbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x301CB8u, 0x301CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301CC0u;
label_301cc0:
    // 0x301cc0: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x301cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_301cc4:
    // 0x301cc4: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x301cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_301cc8:
    // 0x301cc8: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x301cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_301ccc:
    // 0x301ccc: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x301cccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_301cd0:
    // 0x301cd0: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x301cd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_301cd4:
    // 0x301cd4: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x301cd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_301cd8:
    // 0x301cd8: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x301cd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_301cdc:
    // 0x301cdc: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x301cdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_301ce0:
    // 0x301ce0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x301ce0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_301ce4:
    // 0x301ce4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x301ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_301ce8:
    // 0x301ce8: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x301ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_301cec:
    // 0x301cec: 0x3e00008  jr          $ra
label_301cf0:
    if (ctx->pc == 0x301CF0u) {
        ctx->pc = 0x301CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301CECu;
        // 0x301cf0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x301CF4u;
        goto label_301cf4;
    }
    ctx->pc = 0x301CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301CECu;
        // 0x301cf0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301CF4u;
label_301cf4:
    // 0x301cf4: 0x0  nop
    ctx->pc = 0x301cf4u;
    // NOP
    ctx->pc = 0x301cf8u;
}
