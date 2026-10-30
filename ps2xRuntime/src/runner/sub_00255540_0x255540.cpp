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

// Function: sub_00255540
// Address: 0x255540 - 0x255cf8
void sub_00255540_0x255540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255540_0x255540");
#endif

    switch (ctx->pc) {
        case 0x255540u: goto label_255540;
        case 0x255544u: goto label_255544;
        case 0x255548u: goto label_255548;
        case 0x25554cu: goto label_25554c;
        case 0x255550u: goto label_255550;
        case 0x255554u: goto label_255554;
        case 0x255558u: goto label_255558;
        case 0x25555cu: goto label_25555c;
        case 0x255560u: goto label_255560;
        case 0x255564u: goto label_255564;
        case 0x255568u: goto label_255568;
        case 0x25556cu: goto label_25556c;
        case 0x255570u: goto label_255570;
        case 0x255574u: goto label_255574;
        case 0x255578u: goto label_255578;
        case 0x25557cu: goto label_25557c;
        case 0x255580u: goto label_255580;
        case 0x255584u: goto label_255584;
        case 0x255588u: goto label_255588;
        case 0x25558cu: goto label_25558c;
        case 0x255590u: goto label_255590;
        case 0x255594u: goto label_255594;
        case 0x255598u: goto label_255598;
        case 0x25559cu: goto label_25559c;
        case 0x2555a0u: goto label_2555a0;
        case 0x2555a4u: goto label_2555a4;
        case 0x2555a8u: goto label_2555a8;
        case 0x2555acu: goto label_2555ac;
        case 0x2555b0u: goto label_2555b0;
        case 0x2555b4u: goto label_2555b4;
        case 0x2555b8u: goto label_2555b8;
        case 0x2555bcu: goto label_2555bc;
        case 0x2555c0u: goto label_2555c0;
        case 0x2555c4u: goto label_2555c4;
        case 0x2555c8u: goto label_2555c8;
        case 0x2555ccu: goto label_2555cc;
        case 0x2555d0u: goto label_2555d0;
        case 0x2555d4u: goto label_2555d4;
        case 0x2555d8u: goto label_2555d8;
        case 0x2555dcu: goto label_2555dc;
        case 0x2555e0u: goto label_2555e0;
        case 0x2555e4u: goto label_2555e4;
        case 0x2555e8u: goto label_2555e8;
        case 0x2555ecu: goto label_2555ec;
        case 0x2555f0u: goto label_2555f0;
        case 0x2555f4u: goto label_2555f4;
        case 0x2555f8u: goto label_2555f8;
        case 0x2555fcu: goto label_2555fc;
        case 0x255600u: goto label_255600;
        case 0x255604u: goto label_255604;
        case 0x255608u: goto label_255608;
        case 0x25560cu: goto label_25560c;
        case 0x255610u: goto label_255610;
        case 0x255614u: goto label_255614;
        case 0x255618u: goto label_255618;
        case 0x25561cu: goto label_25561c;
        case 0x255620u: goto label_255620;
        case 0x255624u: goto label_255624;
        case 0x255628u: goto label_255628;
        case 0x25562cu: goto label_25562c;
        case 0x255630u: goto label_255630;
        case 0x255634u: goto label_255634;
        case 0x255638u: goto label_255638;
        case 0x25563cu: goto label_25563c;
        case 0x255640u: goto label_255640;
        case 0x255644u: goto label_255644;
        case 0x255648u: goto label_255648;
        case 0x25564cu: goto label_25564c;
        case 0x255650u: goto label_255650;
        case 0x255654u: goto label_255654;
        case 0x255658u: goto label_255658;
        case 0x25565cu: goto label_25565c;
        case 0x255660u: goto label_255660;
        case 0x255664u: goto label_255664;
        case 0x255668u: goto label_255668;
        case 0x25566cu: goto label_25566c;
        case 0x255670u: goto label_255670;
        case 0x255674u: goto label_255674;
        case 0x255678u: goto label_255678;
        case 0x25567cu: goto label_25567c;
        case 0x255680u: goto label_255680;
        case 0x255684u: goto label_255684;
        case 0x255688u: goto label_255688;
        case 0x25568cu: goto label_25568c;
        case 0x255690u: goto label_255690;
        case 0x255694u: goto label_255694;
        case 0x255698u: goto label_255698;
        case 0x25569cu: goto label_25569c;
        case 0x2556a0u: goto label_2556a0;
        case 0x2556a4u: goto label_2556a4;
        case 0x2556a8u: goto label_2556a8;
        case 0x2556acu: goto label_2556ac;
        case 0x2556b0u: goto label_2556b0;
        case 0x2556b4u: goto label_2556b4;
        case 0x2556b8u: goto label_2556b8;
        case 0x2556bcu: goto label_2556bc;
        case 0x2556c0u: goto label_2556c0;
        case 0x2556c4u: goto label_2556c4;
        case 0x2556c8u: goto label_2556c8;
        case 0x2556ccu: goto label_2556cc;
        case 0x2556d0u: goto label_2556d0;
        case 0x2556d4u: goto label_2556d4;
        case 0x2556d8u: goto label_2556d8;
        case 0x2556dcu: goto label_2556dc;
        case 0x2556e0u: goto label_2556e0;
        case 0x2556e4u: goto label_2556e4;
        case 0x2556e8u: goto label_2556e8;
        case 0x2556ecu: goto label_2556ec;
        case 0x2556f0u: goto label_2556f0;
        case 0x2556f4u: goto label_2556f4;
        case 0x2556f8u: goto label_2556f8;
        case 0x2556fcu: goto label_2556fc;
        case 0x255700u: goto label_255700;
        case 0x255704u: goto label_255704;
        case 0x255708u: goto label_255708;
        case 0x25570cu: goto label_25570c;
        case 0x255710u: goto label_255710;
        case 0x255714u: goto label_255714;
        case 0x255718u: goto label_255718;
        case 0x25571cu: goto label_25571c;
        case 0x255720u: goto label_255720;
        case 0x255724u: goto label_255724;
        case 0x255728u: goto label_255728;
        case 0x25572cu: goto label_25572c;
        case 0x255730u: goto label_255730;
        case 0x255734u: goto label_255734;
        case 0x255738u: goto label_255738;
        case 0x25573cu: goto label_25573c;
        case 0x255740u: goto label_255740;
        case 0x255744u: goto label_255744;
        case 0x255748u: goto label_255748;
        case 0x25574cu: goto label_25574c;
        case 0x255750u: goto label_255750;
        case 0x255754u: goto label_255754;
        case 0x255758u: goto label_255758;
        case 0x25575cu: goto label_25575c;
        case 0x255760u: goto label_255760;
        case 0x255764u: goto label_255764;
        case 0x255768u: goto label_255768;
        case 0x25576cu: goto label_25576c;
        case 0x255770u: goto label_255770;
        case 0x255774u: goto label_255774;
        case 0x255778u: goto label_255778;
        case 0x25577cu: goto label_25577c;
        case 0x255780u: goto label_255780;
        case 0x255784u: goto label_255784;
        case 0x255788u: goto label_255788;
        case 0x25578cu: goto label_25578c;
        case 0x255790u: goto label_255790;
        case 0x255794u: goto label_255794;
        case 0x255798u: goto label_255798;
        case 0x25579cu: goto label_25579c;
        case 0x2557a0u: goto label_2557a0;
        case 0x2557a4u: goto label_2557a4;
        case 0x2557a8u: goto label_2557a8;
        case 0x2557acu: goto label_2557ac;
        case 0x2557b0u: goto label_2557b0;
        case 0x2557b4u: goto label_2557b4;
        case 0x2557b8u: goto label_2557b8;
        case 0x2557bcu: goto label_2557bc;
        case 0x2557c0u: goto label_2557c0;
        case 0x2557c4u: goto label_2557c4;
        case 0x2557c8u: goto label_2557c8;
        case 0x2557ccu: goto label_2557cc;
        case 0x2557d0u: goto label_2557d0;
        case 0x2557d4u: goto label_2557d4;
        case 0x2557d8u: goto label_2557d8;
        case 0x2557dcu: goto label_2557dc;
        case 0x2557e0u: goto label_2557e0;
        case 0x2557e4u: goto label_2557e4;
        case 0x2557e8u: goto label_2557e8;
        case 0x2557ecu: goto label_2557ec;
        case 0x2557f0u: goto label_2557f0;
        case 0x2557f4u: goto label_2557f4;
        case 0x2557f8u: goto label_2557f8;
        case 0x2557fcu: goto label_2557fc;
        case 0x255800u: goto label_255800;
        case 0x255804u: goto label_255804;
        case 0x255808u: goto label_255808;
        case 0x25580cu: goto label_25580c;
        case 0x255810u: goto label_255810;
        case 0x255814u: goto label_255814;
        case 0x255818u: goto label_255818;
        case 0x25581cu: goto label_25581c;
        case 0x255820u: goto label_255820;
        case 0x255824u: goto label_255824;
        case 0x255828u: goto label_255828;
        case 0x25582cu: goto label_25582c;
        case 0x255830u: goto label_255830;
        case 0x255834u: goto label_255834;
        case 0x255838u: goto label_255838;
        case 0x25583cu: goto label_25583c;
        case 0x255840u: goto label_255840;
        case 0x255844u: goto label_255844;
        case 0x255848u: goto label_255848;
        case 0x25584cu: goto label_25584c;
        case 0x255850u: goto label_255850;
        case 0x255854u: goto label_255854;
        case 0x255858u: goto label_255858;
        case 0x25585cu: goto label_25585c;
        case 0x255860u: goto label_255860;
        case 0x255864u: goto label_255864;
        case 0x255868u: goto label_255868;
        case 0x25586cu: goto label_25586c;
        case 0x255870u: goto label_255870;
        case 0x255874u: goto label_255874;
        case 0x255878u: goto label_255878;
        case 0x25587cu: goto label_25587c;
        case 0x255880u: goto label_255880;
        case 0x255884u: goto label_255884;
        case 0x255888u: goto label_255888;
        case 0x25588cu: goto label_25588c;
        case 0x255890u: goto label_255890;
        case 0x255894u: goto label_255894;
        case 0x255898u: goto label_255898;
        case 0x25589cu: goto label_25589c;
        case 0x2558a0u: goto label_2558a0;
        case 0x2558a4u: goto label_2558a4;
        case 0x2558a8u: goto label_2558a8;
        case 0x2558acu: goto label_2558ac;
        case 0x2558b0u: goto label_2558b0;
        case 0x2558b4u: goto label_2558b4;
        case 0x2558b8u: goto label_2558b8;
        case 0x2558bcu: goto label_2558bc;
        case 0x2558c0u: goto label_2558c0;
        case 0x2558c4u: goto label_2558c4;
        case 0x2558c8u: goto label_2558c8;
        case 0x2558ccu: goto label_2558cc;
        case 0x2558d0u: goto label_2558d0;
        case 0x2558d4u: goto label_2558d4;
        case 0x2558d8u: goto label_2558d8;
        case 0x2558dcu: goto label_2558dc;
        case 0x2558e0u: goto label_2558e0;
        case 0x2558e4u: goto label_2558e4;
        case 0x2558e8u: goto label_2558e8;
        case 0x2558ecu: goto label_2558ec;
        case 0x2558f0u: goto label_2558f0;
        case 0x2558f4u: goto label_2558f4;
        case 0x2558f8u: goto label_2558f8;
        case 0x2558fcu: goto label_2558fc;
        case 0x255900u: goto label_255900;
        case 0x255904u: goto label_255904;
        case 0x255908u: goto label_255908;
        case 0x25590cu: goto label_25590c;
        case 0x255910u: goto label_255910;
        case 0x255914u: goto label_255914;
        case 0x255918u: goto label_255918;
        case 0x25591cu: goto label_25591c;
        case 0x255920u: goto label_255920;
        case 0x255924u: goto label_255924;
        case 0x255928u: goto label_255928;
        case 0x25592cu: goto label_25592c;
        case 0x255930u: goto label_255930;
        case 0x255934u: goto label_255934;
        case 0x255938u: goto label_255938;
        case 0x25593cu: goto label_25593c;
        case 0x255940u: goto label_255940;
        case 0x255944u: goto label_255944;
        case 0x255948u: goto label_255948;
        case 0x25594cu: goto label_25594c;
        case 0x255950u: goto label_255950;
        case 0x255954u: goto label_255954;
        case 0x255958u: goto label_255958;
        case 0x25595cu: goto label_25595c;
        case 0x255960u: goto label_255960;
        case 0x255964u: goto label_255964;
        case 0x255968u: goto label_255968;
        case 0x25596cu: goto label_25596c;
        case 0x255970u: goto label_255970;
        case 0x255974u: goto label_255974;
        case 0x255978u: goto label_255978;
        case 0x25597cu: goto label_25597c;
        case 0x255980u: goto label_255980;
        case 0x255984u: goto label_255984;
        case 0x255988u: goto label_255988;
        case 0x25598cu: goto label_25598c;
        case 0x255990u: goto label_255990;
        case 0x255994u: goto label_255994;
        case 0x255998u: goto label_255998;
        case 0x25599cu: goto label_25599c;
        case 0x2559a0u: goto label_2559a0;
        case 0x2559a4u: goto label_2559a4;
        case 0x2559a8u: goto label_2559a8;
        case 0x2559acu: goto label_2559ac;
        case 0x2559b0u: goto label_2559b0;
        case 0x2559b4u: goto label_2559b4;
        case 0x2559b8u: goto label_2559b8;
        case 0x2559bcu: goto label_2559bc;
        case 0x2559c0u: goto label_2559c0;
        case 0x2559c4u: goto label_2559c4;
        case 0x2559c8u: goto label_2559c8;
        case 0x2559ccu: goto label_2559cc;
        case 0x2559d0u: goto label_2559d0;
        case 0x2559d4u: goto label_2559d4;
        case 0x2559d8u: goto label_2559d8;
        case 0x2559dcu: goto label_2559dc;
        case 0x2559e0u: goto label_2559e0;
        case 0x2559e4u: goto label_2559e4;
        case 0x2559e8u: goto label_2559e8;
        case 0x2559ecu: goto label_2559ec;
        case 0x2559f0u: goto label_2559f0;
        case 0x2559f4u: goto label_2559f4;
        case 0x2559f8u: goto label_2559f8;
        case 0x2559fcu: goto label_2559fc;
        case 0x255a00u: goto label_255a00;
        case 0x255a04u: goto label_255a04;
        case 0x255a08u: goto label_255a08;
        case 0x255a0cu: goto label_255a0c;
        case 0x255a10u: goto label_255a10;
        case 0x255a14u: goto label_255a14;
        case 0x255a18u: goto label_255a18;
        case 0x255a1cu: goto label_255a1c;
        case 0x255a20u: goto label_255a20;
        case 0x255a24u: goto label_255a24;
        case 0x255a28u: goto label_255a28;
        case 0x255a2cu: goto label_255a2c;
        case 0x255a30u: goto label_255a30;
        case 0x255a34u: goto label_255a34;
        case 0x255a38u: goto label_255a38;
        case 0x255a3cu: goto label_255a3c;
        case 0x255a40u: goto label_255a40;
        case 0x255a44u: goto label_255a44;
        case 0x255a48u: goto label_255a48;
        case 0x255a4cu: goto label_255a4c;
        case 0x255a50u: goto label_255a50;
        case 0x255a54u: goto label_255a54;
        case 0x255a58u: goto label_255a58;
        case 0x255a5cu: goto label_255a5c;
        case 0x255a60u: goto label_255a60;
        case 0x255a64u: goto label_255a64;
        case 0x255a68u: goto label_255a68;
        case 0x255a6cu: goto label_255a6c;
        case 0x255a70u: goto label_255a70;
        case 0x255a74u: goto label_255a74;
        case 0x255a78u: goto label_255a78;
        case 0x255a7cu: goto label_255a7c;
        case 0x255a80u: goto label_255a80;
        case 0x255a84u: goto label_255a84;
        case 0x255a88u: goto label_255a88;
        case 0x255a8cu: goto label_255a8c;
        case 0x255a90u: goto label_255a90;
        case 0x255a94u: goto label_255a94;
        case 0x255a98u: goto label_255a98;
        case 0x255a9cu: goto label_255a9c;
        case 0x255aa0u: goto label_255aa0;
        case 0x255aa4u: goto label_255aa4;
        case 0x255aa8u: goto label_255aa8;
        case 0x255aacu: goto label_255aac;
        case 0x255ab0u: goto label_255ab0;
        case 0x255ab4u: goto label_255ab4;
        case 0x255ab8u: goto label_255ab8;
        case 0x255abcu: goto label_255abc;
        case 0x255ac0u: goto label_255ac0;
        case 0x255ac4u: goto label_255ac4;
        case 0x255ac8u: goto label_255ac8;
        case 0x255accu: goto label_255acc;
        case 0x255ad0u: goto label_255ad0;
        case 0x255ad4u: goto label_255ad4;
        case 0x255ad8u: goto label_255ad8;
        case 0x255adcu: goto label_255adc;
        case 0x255ae0u: goto label_255ae0;
        case 0x255ae4u: goto label_255ae4;
        case 0x255ae8u: goto label_255ae8;
        case 0x255aecu: goto label_255aec;
        case 0x255af0u: goto label_255af0;
        case 0x255af4u: goto label_255af4;
        case 0x255af8u: goto label_255af8;
        case 0x255afcu: goto label_255afc;
        case 0x255b00u: goto label_255b00;
        case 0x255b04u: goto label_255b04;
        case 0x255b08u: goto label_255b08;
        case 0x255b0cu: goto label_255b0c;
        case 0x255b10u: goto label_255b10;
        case 0x255b14u: goto label_255b14;
        case 0x255b18u: goto label_255b18;
        case 0x255b1cu: goto label_255b1c;
        case 0x255b20u: goto label_255b20;
        case 0x255b24u: goto label_255b24;
        case 0x255b28u: goto label_255b28;
        case 0x255b2cu: goto label_255b2c;
        case 0x255b30u: goto label_255b30;
        case 0x255b34u: goto label_255b34;
        case 0x255b38u: goto label_255b38;
        case 0x255b3cu: goto label_255b3c;
        case 0x255b40u: goto label_255b40;
        case 0x255b44u: goto label_255b44;
        case 0x255b48u: goto label_255b48;
        case 0x255b4cu: goto label_255b4c;
        case 0x255b50u: goto label_255b50;
        case 0x255b54u: goto label_255b54;
        case 0x255b58u: goto label_255b58;
        case 0x255b5cu: goto label_255b5c;
        case 0x255b60u: goto label_255b60;
        case 0x255b64u: goto label_255b64;
        case 0x255b68u: goto label_255b68;
        case 0x255b6cu: goto label_255b6c;
        case 0x255b70u: goto label_255b70;
        case 0x255b74u: goto label_255b74;
        case 0x255b78u: goto label_255b78;
        case 0x255b7cu: goto label_255b7c;
        case 0x255b80u: goto label_255b80;
        case 0x255b84u: goto label_255b84;
        case 0x255b88u: goto label_255b88;
        case 0x255b8cu: goto label_255b8c;
        case 0x255b90u: goto label_255b90;
        case 0x255b94u: goto label_255b94;
        case 0x255b98u: goto label_255b98;
        case 0x255b9cu: goto label_255b9c;
        case 0x255ba0u: goto label_255ba0;
        case 0x255ba4u: goto label_255ba4;
        case 0x255ba8u: goto label_255ba8;
        case 0x255bacu: goto label_255bac;
        case 0x255bb0u: goto label_255bb0;
        case 0x255bb4u: goto label_255bb4;
        case 0x255bb8u: goto label_255bb8;
        case 0x255bbcu: goto label_255bbc;
        case 0x255bc0u: goto label_255bc0;
        case 0x255bc4u: goto label_255bc4;
        case 0x255bc8u: goto label_255bc8;
        case 0x255bccu: goto label_255bcc;
        case 0x255bd0u: goto label_255bd0;
        case 0x255bd4u: goto label_255bd4;
        case 0x255bd8u: goto label_255bd8;
        case 0x255bdcu: goto label_255bdc;
        case 0x255be0u: goto label_255be0;
        case 0x255be4u: goto label_255be4;
        case 0x255be8u: goto label_255be8;
        case 0x255becu: goto label_255bec;
        case 0x255bf0u: goto label_255bf0;
        case 0x255bf4u: goto label_255bf4;
        case 0x255bf8u: goto label_255bf8;
        case 0x255bfcu: goto label_255bfc;
        case 0x255c00u: goto label_255c00;
        case 0x255c04u: goto label_255c04;
        case 0x255c08u: goto label_255c08;
        case 0x255c0cu: goto label_255c0c;
        case 0x255c10u: goto label_255c10;
        case 0x255c14u: goto label_255c14;
        case 0x255c18u: goto label_255c18;
        case 0x255c1cu: goto label_255c1c;
        case 0x255c20u: goto label_255c20;
        case 0x255c24u: goto label_255c24;
        case 0x255c28u: goto label_255c28;
        case 0x255c2cu: goto label_255c2c;
        case 0x255c30u: goto label_255c30;
        case 0x255c34u: goto label_255c34;
        case 0x255c38u: goto label_255c38;
        case 0x255c3cu: goto label_255c3c;
        case 0x255c40u: goto label_255c40;
        case 0x255c44u: goto label_255c44;
        case 0x255c48u: goto label_255c48;
        case 0x255c4cu: goto label_255c4c;
        case 0x255c50u: goto label_255c50;
        case 0x255c54u: goto label_255c54;
        case 0x255c58u: goto label_255c58;
        case 0x255c5cu: goto label_255c5c;
        case 0x255c60u: goto label_255c60;
        case 0x255c64u: goto label_255c64;
        case 0x255c68u: goto label_255c68;
        case 0x255c6cu: goto label_255c6c;
        case 0x255c70u: goto label_255c70;
        case 0x255c74u: goto label_255c74;
        case 0x255c78u: goto label_255c78;
        case 0x255c7cu: goto label_255c7c;
        case 0x255c80u: goto label_255c80;
        case 0x255c84u: goto label_255c84;
        case 0x255c88u: goto label_255c88;
        case 0x255c8cu: goto label_255c8c;
        case 0x255c90u: goto label_255c90;
        case 0x255c94u: goto label_255c94;
        case 0x255c98u: goto label_255c98;
        case 0x255c9cu: goto label_255c9c;
        case 0x255ca0u: goto label_255ca0;
        case 0x255ca4u: goto label_255ca4;
        case 0x255ca8u: goto label_255ca8;
        case 0x255cacu: goto label_255cac;
        case 0x255cb0u: goto label_255cb0;
        case 0x255cb4u: goto label_255cb4;
        case 0x255cb8u: goto label_255cb8;
        case 0x255cbcu: goto label_255cbc;
        case 0x255cc0u: goto label_255cc0;
        case 0x255cc4u: goto label_255cc4;
        case 0x255cc8u: goto label_255cc8;
        case 0x255cccu: goto label_255ccc;
        case 0x255cd0u: goto label_255cd0;
        case 0x255cd4u: goto label_255cd4;
        case 0x255cd8u: goto label_255cd8;
        case 0x255cdcu: goto label_255cdc;
        case 0x255ce0u: goto label_255ce0;
        case 0x255ce4u: goto label_255ce4;
        case 0x255ce8u: goto label_255ce8;
        case 0x255cecu: goto label_255cec;
        case 0x255cf0u: goto label_255cf0;
        case 0x255cf4u: goto label_255cf4;
        default: break;
    }

    ctx->pc = 0x255540u;

label_255540:
    // 0x255540: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x255540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_255544:
    // 0x255544: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x255544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_255548:
    // 0x255548: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x255548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_25554c:
    // 0x25554c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25554cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_255550:
    // 0x255550: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x255550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_255554:
    // 0x255554: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x255554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_255558:
    // 0x255558: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x255558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_25555c:
    // 0x25555c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x25555cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_255560:
    // 0x255560: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x255560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_255564:
    // 0x255564: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x255564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_255568:
    // 0x255568: 0xe7ba0110  swc1        $f26, 0x110($sp)
    ctx->pc = 0x255568u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_25556c:
    // 0x25556c: 0xe7b90108  swc1        $f25, 0x108($sp)
    ctx->pc = 0x25556cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_255570:
    // 0x255570: 0xe7b80100  swc1        $f24, 0x100($sp)
    ctx->pc = 0x255570u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_255574:
    // 0x255574: 0xe7b700f8  swc1        $f23, 0xF8($sp)
    ctx->pc = 0x255574u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_255578:
    // 0x255578: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x255578u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_25557c:
    // 0x25557c: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x25557cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_255580:
    // 0x255580: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x255580u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_255584:
    // 0x255584: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x255584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_255588:
    // 0x255588: 0x8e3200d8  lw          $s2, 0xD8($s1)
    ctx->pc = 0x255588u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25558c:
    // 0x25558c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_255590:
    if (ctx->pc == 0x255590u) {
        ctx->pc = 0x255590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25558Cu;
        // 0x255590: 0x8e3600d4  lw          $s6, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255594u;
        goto label_255594;
    }
    ctx->pc = 0x25558Cu;
    {
        const bool branch_taken_0x25558c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x255590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25558Cu;
        // 0x255590: 0x8e3600d4  lw          $s6, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25558c) {
            ctx->pc = 0x25559Cu;
            goto label_25559c;
        }
    }
    ctx->pc = 0x255594u;
label_255594:
    // 0x255594: 0x56c00003  bnel        $s6, $zero, . + 4 + (0x3 << 2)
label_255598:
    if (ctx->pc == 0x255598u) {
        ctx->pc = 0x255598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255594u;
        // 0x255598: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25559Cu;
        goto label_25559c;
    }
    ctx->pc = 0x255594u;
    {
        const bool branch_taken_0x255594 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x255594) {
            ctx->pc = 0x255598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255594u;
            // 0x255598: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2555A4u;
            goto label_2555a4;
        }
    }
    ctx->pc = 0x25559Cu;
label_25559c:
    // 0x25559c: 0x100001c4  b           . + 4 + (0x1C4 << 2)
label_2555a0:
    if (ctx->pc == 0x2555A0u) {
        ctx->pc = 0x2555A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25559Cu;
        // 0x2555a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2555A4u;
        goto label_2555a4;
    }
    ctx->pc = 0x25559Cu;
    {
        const bool branch_taken_0x25559c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2555A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25559Cu;
        // 0x2555a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25559c) {
            ctx->pc = 0x255CB0u;
            goto label_255cb0;
        }
    }
    ctx->pc = 0x2555A4u;
label_2555a4:
    // 0x2555a4: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x2555a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2555a8:
    // 0x2555a8: 0x146200bf  bne         $v1, $v0, . + 4 + (0xBF << 2)
label_2555ac:
    if (ctx->pc == 0x2555ACu) {
        ctx->pc = 0x2555B0u;
        goto label_2555b0;
    }
    ctx->pc = 0x2555A8u;
    {
        const bool branch_taken_0x2555a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2555a8) {
            ctx->pc = 0x2558A8u;
            goto label_2558a8;
        }
    }
    ctx->pc = 0x2555B0u;
label_2555b0:
    // 0x2555b0: 0xc089c18  jal         func_227060
label_2555b4:
    if (ctx->pc == 0x2555B4u) {
        ctx->pc = 0x2555B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2555B0u;
        // 0x2555b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2555B8u;
        goto label_2555b8;
    }
    ctx->pc = 0x2555B0u;
    SET_GPR_U32(ctx, 31, 0x2555B8u);
    ctx->pc = 0x2555B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2555B0u;
    // 0x2555b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x2555B0u, 0x2555B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2555B8u;
label_2555b8:
    // 0x2555b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2555b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2555bc:
    // 0x2555bc: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_2555c0:
    if (ctx->pc == 0x2555C0u) {
        ctx->pc = 0x2555C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2555BCu;
        // 0x2555c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2555C4u;
        goto label_2555c4;
    }
    ctx->pc = 0x2555BCu;
    {
        const bool branch_taken_0x2555bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2555C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2555BCu;
        // 0x2555c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2555bc) {
            ctx->pc = 0x2555ECu;
            goto label_2555ec;
        }
    }
    ctx->pc = 0x2555C4u;
label_2555c4:
    // 0x2555c4: 0xc095142  jal         func_254508
label_2555c8:
    if (ctx->pc == 0x2555C8u) {
        ctx->pc = 0x2555C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2555C4u;
        // 0x2555c8: 0x240502b3  addiu       $a1, $zero, 0x2B3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 691));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2555CCu;
        goto label_2555cc;
    }
    ctx->pc = 0x2555C4u;
    SET_GPR_U32(ctx, 31, 0x2555CCu);
    ctx->pc = 0x2555C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2555C4u;
    // 0x2555c8: 0x240502b3  addiu       $a1, $zero, 0x2B3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 691));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x2555C4u, 0x2555CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2555CCu;
label_2555cc:
    // 0x2555cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2555ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2555d0:
    // 0x2555d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2555d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2555d4:
    // 0x2555d4: 0xc08a658  jal         func_229960
label_2555d8:
    if (ctx->pc == 0x2555D8u) {
        ctx->pc = 0x2555D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2555D4u;
        // 0x2555d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2555DCu;
        goto label_2555dc;
    }
    ctx->pc = 0x2555D4u;
    SET_GPR_U32(ctx, 31, 0x2555DCu);
    ctx->pc = 0x2555D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2555D4u;
    // 0x2555d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x2555D4u, 0x2555DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2555DCu;
label_2555dc:
    // 0x2555dc: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2555dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2555e0:
    // 0x2555e0: 0x0  nop
    ctx->pc = 0x2555e0u;
    // NOP
label_2555e4:
    // 0x2555e4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2555e8:
    if (ctx->pc == 0x2555E8u) {
        ctx->pc = 0x2555E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2555E4u;
        // 0x2555e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2555ECu;
        goto label_2555ec;
    }
    ctx->pc = 0x2555E4u;
    {
        const bool branch_taken_0x2555e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2555E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2555E4u;
        // 0x2555e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2555e4) {
            ctx->pc = 0x255600u;
            goto label_255600;
        }
    }
    ctx->pc = 0x2555ECu;
label_2555ec:
    // 0x2555ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2555ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2555f0:
    // 0x2555f0: 0xc0899aa  jal         func_2266A8
label_2555f4:
    if (ctx->pc == 0x2555F4u) {
        ctx->pc = 0x2555F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2555F0u;
        // 0x2555f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2555F8u;
        goto label_2555f8;
    }
    ctx->pc = 0x2555F0u;
    SET_GPR_U32(ctx, 31, 0x2555F8u);
    ctx->pc = 0x2555F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2555F0u;
    // 0x2555f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x2555F0u, 0x2555F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2555F8u;
label_2555f8:
    // 0x2555f8: 0x100001a2  b           . + 4 + (0x1A2 << 2)
label_2555fc:
    if (ctx->pc == 0x2555FCu) {
        ctx->pc = 0x2555FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2555F8u;
        // 0x2555fc: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255600u;
        goto label_255600;
    }
    ctx->pc = 0x2555F8u;
    {
        const bool branch_taken_0x2555f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2555FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2555F8u;
        // 0x2555fc: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2555f8) {
            ctx->pc = 0x255C84u;
            goto label_255c84;
        }
    }
    ctx->pc = 0x255600u;
label_255600:
    // 0x255600: 0xc08866e  jal         func_2219B8
label_255604:
    if (ctx->pc == 0x255604u) {
        ctx->pc = 0x255604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255600u;
        // 0x255604: 0x240502b3  addiu       $a1, $zero, 0x2B3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 691));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255608u;
        goto label_255608;
    }
    ctx->pc = 0x255600u;
    SET_GPR_U32(ctx, 31, 0x255608u);
    ctx->pc = 0x255604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255600u;
    // 0x255604: 0x240502b3  addiu       $a1, $zero, 0x2B3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 691));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219B8u, 0x255600u, 0x255608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255608u;
label_255608:
    // 0x255608: 0x5040019e  beql        $v0, $zero, . + 4 + (0x19E << 2)
label_25560c:
    if (ctx->pc == 0x25560Cu) {
        ctx->pc = 0x25560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255608u;
        // 0x25560c: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255610u;
        goto label_255610;
    }
    ctx->pc = 0x255608u;
    {
        const bool branch_taken_0x255608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255608) {
            ctx->pc = 0x25560Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255608u;
            // 0x25560c: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255C84u;
            goto label_255c84;
        }
    }
    ctx->pc = 0x255610u;
label_255610:
    // 0x255610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255614:
    // 0x255614: 0xc08866e  jal         func_2219B8
label_255618:
    if (ctx->pc == 0x255618u) {
        ctx->pc = 0x255618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255614u;
        // 0x255618: 0x240502b4  addiu       $a1, $zero, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 692));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25561Cu;
        goto label_25561c;
    }
    ctx->pc = 0x255614u;
    SET_GPR_U32(ctx, 31, 0x25561Cu);
    ctx->pc = 0x255618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255614u;
    // 0x255618: 0x240502b4  addiu       $a1, $zero, 0x2B4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 692));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219B8u, 0x255614u, 0x25561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25561Cu;
label_25561c:
    // 0x25561c: 0x50400199  beql        $v0, $zero, . + 4 + (0x199 << 2)
label_255620:
    if (ctx->pc == 0x255620u) {
        ctx->pc = 0x255620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25561Cu;
        // 0x255620: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255624u;
        goto label_255624;
    }
    ctx->pc = 0x25561Cu;
    {
        const bool branch_taken_0x25561c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25561c) {
            ctx->pc = 0x255620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25561Cu;
            // 0x255620: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255C84u;
            goto label_255c84;
        }
    }
    ctx->pc = 0x255624u;
label_255624:
    // 0x255624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255628:
    // 0x255628: 0xc08866e  jal         func_2219B8
label_25562c:
    if (ctx->pc == 0x25562Cu) {
        ctx->pc = 0x25562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255628u;
        // 0x25562c: 0x240502b5  addiu       $a1, $zero, 0x2B5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 693));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255630u;
        goto label_255630;
    }
    ctx->pc = 0x255628u;
    SET_GPR_U32(ctx, 31, 0x255630u);
    ctx->pc = 0x25562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255628u;
    // 0x25562c: 0x240502b5  addiu       $a1, $zero, 0x2B5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 693));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219B8u, 0x255628u, 0x255630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255630u;
label_255630:
    // 0x255630: 0x50400194  beql        $v0, $zero, . + 4 + (0x194 << 2)
label_255634:
    if (ctx->pc == 0x255634u) {
        ctx->pc = 0x255634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255630u;
        // 0x255634: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255638u;
        goto label_255638;
    }
    ctx->pc = 0x255630u;
    {
        const bool branch_taken_0x255630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255630) {
            ctx->pc = 0x255634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255630u;
            // 0x255634: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255C84u;
            goto label_255c84;
        }
    }
    ctx->pc = 0x255638u;
label_255638:
    // 0x255638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25563c:
    // 0x25563c: 0xc08866e  jal         func_2219B8
label_255640:
    if (ctx->pc == 0x255640u) {
        ctx->pc = 0x255640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25563Cu;
        // 0x255640: 0x240502b6  addiu       $a1, $zero, 0x2B6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 694));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255644u;
        goto label_255644;
    }
    ctx->pc = 0x25563Cu;
    SET_GPR_U32(ctx, 31, 0x255644u);
    ctx->pc = 0x255640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25563Cu;
    // 0x255640: 0x240502b6  addiu       $a1, $zero, 0x2B6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 694));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219B8u, 0x25563Cu, 0x255644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255644u;
label_255644:
    // 0x255644: 0x5040018f  beql        $v0, $zero, . + 4 + (0x18F << 2)
label_255648:
    if (ctx->pc == 0x255648u) {
        ctx->pc = 0x255648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255644u;
        // 0x255648: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25564Cu;
        goto label_25564c;
    }
    ctx->pc = 0x255644u;
    {
        const bool branch_taken_0x255644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255644) {
            ctx->pc = 0x255648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255644u;
            // 0x255648: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255C84u;
            goto label_255c84;
        }
    }
    ctx->pc = 0x25564Cu;
label_25564c:
    // 0x25564c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25564cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255650:
    // 0x255650: 0xc08866e  jal         func_2219B8
label_255654:
    if (ctx->pc == 0x255654u) {
        ctx->pc = 0x255654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255650u;
        // 0x255654: 0x240502b7  addiu       $a1, $zero, 0x2B7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 695));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255658u;
        goto label_255658;
    }
    ctx->pc = 0x255650u;
    SET_GPR_U32(ctx, 31, 0x255658u);
    ctx->pc = 0x255654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255650u;
    // 0x255654: 0x240502b7  addiu       $a1, $zero, 0x2B7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 695));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219B8u, 0x255650u, 0x255658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255658u;
label_255658:
    // 0x255658: 0x5040018a  beql        $v0, $zero, . + 4 + (0x18A << 2)
label_25565c:
    if (ctx->pc == 0x25565Cu) {
        ctx->pc = 0x25565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255658u;
        // 0x25565c: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255660u;
        goto label_255660;
    }
    ctx->pc = 0x255658u;
    {
        const bool branch_taken_0x255658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255658) {
            ctx->pc = 0x25565Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255658u;
            // 0x25565c: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255C84u;
            goto label_255c84;
        }
    }
    ctx->pc = 0x255660u;
label_255660:
    // 0x255660: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x255660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_255664:
    // 0x255664: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x255664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_255668:
    // 0x255668: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x255668u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_25566c:
    // 0x25566c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x25566cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_255670:
    // 0x255670: 0x60f809  jalr        $v1
label_255674:
    if (ctx->pc == 0x255674u) {
        ctx->pc = 0x255674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255670u;
        // 0x255674: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255678u;
        goto label_255678;
    }
    ctx->pc = 0x255670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x255678u);
        ctx->pc = 0x255674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255670u;
        // 0x255674: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255670u, 0x255678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255678u;
label_255678:
    // 0x255678: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x255678u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25567c:
    // 0x25567c: 0x26270090  addiu       $a3, $s1, 0x90
    ctx->pc = 0x25567cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_255680:
    // 0x255680: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x255680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_255684:
    // 0x255684: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x255684u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_255688:
    // 0x255688: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x255688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_25568c:
    // 0x25568c: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x25568cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_255690:
    // 0x255690: 0x2610d8d0  addiu       $s0, $s0, -0x2730
    ctx->pc = 0x255690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957264));
label_255694:
    // 0x255694: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x255694u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_255698:
    // 0x255698: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x255698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_25569c:
    // 0x25569c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25569cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2556a0:
    // 0x2556a0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2556a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2556a4:
    // 0x2556a4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2556a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2556a8:
    // 0x2556a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2556a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2556ac:
    // 0x2556ac: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2556acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2556b0:
    // 0x2556b0: 0x84e30002  lh          $v1, 0x2($a3)
    ctx->pc = 0x2556b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_2556b4:
    // 0x2556b4: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x2556b4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2556b8:
    // 0x2556b8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2556b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2556bc:
    // 0x2556bc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2556bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2556c0:
    // 0x2556c0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2556c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2556c4:
    // 0x2556c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2556c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2556c8:
    // 0x2556c8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2556c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2556cc:
    // 0x2556cc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2556ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2556d0:
    // 0x2556d0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2556d0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2556d4:
    // 0x2556d4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2556d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2556d8:
    // 0x2556d8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2556d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2556dc:
    // 0x2556dc: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2556dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2556e0:
    // 0x2556e0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2556e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2556e4:
    // 0x2556e4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2556e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2556e8:
    // 0x2556e8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2556e8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2556ec:
    // 0x2556ec: 0x4a0003bf  vwaitq
    ctx->pc = 0x2556ecu;
    // VWAITQ (Q already resolved in this runtime)
label_2556f0:
    // 0x2556f0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2556f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2556f4:
    // 0x2556f4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2556f4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2556f8:
    // 0x2556f8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2556f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2556fc:
    // 0x2556fc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2556fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_255700:
    // 0x255700: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x255700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_255704:
    // 0x255704: 0xc041532  jal         func_1054C8
label_255708:
    if (ctx->pc == 0x255708u) {
        ctx->pc = 0x255708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255704u;
        // 0x255708: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25570Cu;
        goto label_25570c;
    }
    ctx->pc = 0x255704u;
    SET_GPR_U32(ctx, 31, 0x25570Cu);
    ctx->pc = 0x255708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255704u;
    // 0x255708: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x255704u, 0x25570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25570Cu;
label_25570c:
    // 0x25570c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25570cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_255710:
    // 0x255710: 0xc041532  jal         func_1054C8
label_255714:
    if (ctx->pc == 0x255714u) {
        ctx->pc = 0x255714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255710u;
        // 0x255714: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255718u;
        goto label_255718;
    }
    ctx->pc = 0x255710u;
    SET_GPR_U32(ctx, 31, 0x255718u);
    ctx->pc = 0x255714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255710u;
    // 0x255714: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x255710u, 0x255718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255718u;
label_255718:
    // 0x255718: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x255718u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25571c:
    // 0x25571c: 0xc041532  jal         func_1054C8
label_255720:
    if (ctx->pc == 0x255720u) {
        ctx->pc = 0x255720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25571Cu;
        // 0x255720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255724u;
        goto label_255724;
    }
    ctx->pc = 0x25571Cu;
    SET_GPR_U32(ctx, 31, 0x255724u);
    ctx->pc = 0x255720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25571Cu;
    // 0x255720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25571Cu, 0x255724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255724u;
label_255724:
    // 0x255724: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x255724u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_255728:
    // 0x255728: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_25572c:
    if (ctx->pc == 0x25572Cu) {
        ctx->pc = 0x25572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255728u;
        // 0x25572c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255730u;
        goto label_255730;
    }
    ctx->pc = 0x255728u;
    {
        const bool branch_taken_0x255728 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255728u;
        // 0x25572c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255728) {
            ctx->pc = 0x255750u;
            goto label_255750;
        }
    }
    ctx->pc = 0x255730u;
label_255730:
    // 0x255730: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x255730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_255734:
    // 0x255734: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x255734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_255738:
    // 0x255738: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x255738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25573c:
    // 0x25573c: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x25573cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_255740:
    // 0x255740: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x255740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_255744:
    // 0x255744: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x255744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_255748:
    // 0x255748: 0xc041b20  jal         func_106C80
label_25574c:
    if (ctx->pc == 0x25574Cu) {
        ctx->pc = 0x25574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255748u;
        // 0x25574c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255750u;
        goto label_255750;
    }
    ctx->pc = 0x255748u;
    SET_GPR_U32(ctx, 31, 0x255750u);
    ctx->pc = 0x25574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255748u;
    // 0x25574c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x255748u, 0x255750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255750u;
label_255750:
    // 0x255750: 0xc05d484  jal         func_175210
label_255754:
    if (ctx->pc == 0x255754u) {
        ctx->pc = 0x255754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255750u;
        // 0x255754: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255758u;
        goto label_255758;
    }
    ctx->pc = 0x255750u;
    SET_GPR_U32(ctx, 31, 0x255758u);
    ctx->pc = 0x255754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255750u;
    // 0x255754: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x255750u, 0x255758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255758u;
label_255758:
    // 0x255758: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x255758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25575c:
    // 0x25575c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25575cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_255760:
    // 0x255760: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x255760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_255764:
    // 0x255764: 0xa0f809  jalr        $a1
label_255768:
    if (ctx->pc == 0x255768u) {
        ctx->pc = 0x255768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255764u;
        // 0x255768: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25576Cu;
        goto label_25576c;
    }
    ctx->pc = 0x255764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25576Cu);
        ctx->pc = 0x255768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255764u;
        // 0x255768: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255764u, 0x25576Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25576Cu;
label_25576c:
    // 0x25576c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25576cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255770:
    // 0x255770: 0xc087016  jal         func_21C058
label_255774:
    if (ctx->pc == 0x255774u) {
        ctx->pc = 0x255774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255770u;
        // 0x255774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255778u;
        goto label_255778;
    }
    ctx->pc = 0x255770u;
    SET_GPR_U32(ctx, 31, 0x255778u);
    ctx->pc = 0x255774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255770u;
    // 0x255774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x255770u, 0x255778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255778u;
label_255778:
    // 0x255778: 0x52600018  beql        $s3, $zero, . + 4 + (0x18 << 2)
label_25577c:
    if (ctx->pc == 0x25577Cu) {
        ctx->pc = 0x25577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255778u;
        // 0x25577c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255780u;
        goto label_255780;
    }
    ctx->pc = 0x255778u;
    {
        const bool branch_taken_0x255778 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x255778) {
            ctx->pc = 0x25577Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255778u;
            // 0x25577c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2557DCu;
            goto label_2557dc;
        }
    }
    ctx->pc = 0x255780u;
label_255780:
    // 0x255780: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x255780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_255784:
    // 0x255784: 0x8e3000d8  lw          $s0, 0xD8($s1)
    ctx->pc = 0x255784u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_255788:
    // 0x255788: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x255788u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25578c:
    // 0x25578c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_255790:
    // 0x255790: 0x40f809  jalr        $v0
label_255794:
    if (ctx->pc == 0x255794u) {
        ctx->pc = 0x255794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255790u;
        // 0x255794: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255798u;
        goto label_255798;
    }
    ctx->pc = 0x255790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x255798u);
        ctx->pc = 0x255794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255790u;
        // 0x255794: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255790u, 0x255798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255798u;
label_255798:
    // 0x255798: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x255798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_25579c:
    // 0x25579c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25579cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2557a0:
    // 0x2557a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2557a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2557a4:
    // 0x2557a4: 0x24634768  addiu       $v1, $v1, 0x4768
    ctx->pc = 0x2557a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18280));
label_2557a8:
    // 0x2557a8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2557a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_2557ac:
    // 0x2557ac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2557acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2557b0:
    // 0x2557b0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2557b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_2557b4:
    // 0x2557b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2557b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2557b8:
    // 0x2557b8: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2557b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2557bc:
    // 0x2557bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2557bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2557c0:
    // 0x2557c0: 0x240602b5  addiu       $a2, $zero, 0x2B5
    ctx->pc = 0x2557c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 693));
label_2557c4:
    // 0x2557c4: 0x240702b6  addiu       $a3, $zero, 0x2B6
    ctx->pc = 0x2557c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 694));
label_2557c8:
    // 0x2557c8: 0x240802b7  addiu       $t0, $zero, 0x2B7
    ctx->pc = 0x2557c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 695));
label_2557cc:
    // 0x2557cc: 0x240902b8  addiu       $t1, $zero, 0x2B8
    ctx->pc = 0x2557ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 696));
label_2557d0:
    // 0x2557d0: 0xc0428c4  jal         func_10A310
label_2557d4:
    if (ctx->pc == 0x2557D4u) {
        ctx->pc = 0x2557D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557D0u;
        // 0x2557d4: 0x240a02b9  addiu       $t2, $zero, 0x2B9 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 697));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2557D8u;
        goto label_2557d8;
    }
    ctx->pc = 0x2557D0u;
    SET_GPR_U32(ctx, 31, 0x2557D8u);
    ctx->pc = 0x2557D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2557D0u;
    // 0x2557d4: 0x240a02b9  addiu       $t2, $zero, 0x2B9 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 697));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A310u, 0x2557D0u, 0x2557D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2557D8u;
label_2557d8:
    // 0x2557d8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2557d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2557dc:
    // 0x2557dc: 0x24050201  addiu       $a1, $zero, 0x201
    ctx->pc = 0x2557dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
label_2557e0:
    // 0x2557e0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x2557e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_2557e4:
    // 0x2557e4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x2557e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_2557e8:
    // 0x2557e8: 0x60f809  jalr        $v1
label_2557ec:
    if (ctx->pc == 0x2557ECu) {
        ctx->pc = 0x2557ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557E8u;
        // 0x2557ec: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2557F0u;
        goto label_2557f0;
    }
    ctx->pc = 0x2557E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2557F0u);
        ctx->pc = 0x2557ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557E8u;
        // 0x2557ec: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2557E8u, 0x2557F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2557F0u;
label_2557f0:
    // 0x2557f0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x2557f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2557f4:
    // 0x2557f4: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
label_2557f8:
    if (ctx->pc == 0x2557F8u) {
        ctx->pc = 0x2557F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557F4u;
        // 0x2557f8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2557FCu;
        goto label_2557fc;
    }
    ctx->pc = 0x2557F4u;
    {
        const bool branch_taken_0x2557f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2557F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557F4u;
        // 0x2557f8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2557f4) {
            ctx->pc = 0x255838u;
            goto label_255838;
        }
    }
    ctx->pc = 0x2557FCu;
label_2557fc:
    // 0x2557fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2557fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_255800:
    // 0x255800: 0x8e3000d8  lw          $s0, 0xD8($s1)
    ctx->pc = 0x255800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_255804:
    // 0x255804: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x255804u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_255808:
    // 0x255808: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x255808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25580c:
    // 0x25580c: 0x40f809  jalr        $v0
label_255810:
    if (ctx->pc == 0x255810u) {
        ctx->pc = 0x255810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25580Cu;
        // 0x255810: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255814u;
        goto label_255814;
    }
    ctx->pc = 0x25580Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x255814u);
        ctx->pc = 0x255810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25580Cu;
        // 0x255810: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25580Cu, 0x255814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255814u;
label_255814:
    // 0x255814: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x255814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_255818:
    // 0x255818: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x255818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25581c:
    // 0x25581c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25581cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_255820:
    // 0x255820: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x255820u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_255824:
    // 0x255824: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x255824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_255828:
    // 0x255828: 0x240602b3  addiu       $a2, $zero, 0x2B3
    ctx->pc = 0x255828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 691));
label_25582c:
    // 0x25582c: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x25582cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_255830:
    // 0x255830: 0xc041664  jal         func_105990
label_255834:
    if (ctx->pc == 0x255834u) {
        ctx->pc = 0x255834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255830u;
        // 0x255834: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255838u;
        goto label_255838;
    }
    ctx->pc = 0x255830u;
    SET_GPR_U32(ctx, 31, 0x255838u);
    ctx->pc = 0x255834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255830u;
    // 0x255834: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x255830u, 0x255838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255838u;
label_255838:
    // 0x255838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25583c:
    // 0x25583c: 0xc089990  jal         func_226640
label_255840:
    if (ctx->pc == 0x255840u) {
        ctx->pc = 0x255840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25583Cu;
        // 0x255840: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255844u;
        goto label_255844;
    }
    ctx->pc = 0x25583Cu;
    SET_GPR_U32(ctx, 31, 0x255844u);
    ctx->pc = 0x255840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25583Cu;
    // 0x255840: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25583Cu, 0x255844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255844u;
label_255844:
    // 0x255844: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x255844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_255848:
    // 0x255848: 0xc05d53a  jal         func_1754E8
label_25584c:
    if (ctx->pc == 0x25584Cu) {
        ctx->pc = 0x25584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255848u;
        // 0x25584c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255850u;
        goto label_255850;
    }
    ctx->pc = 0x255848u;
    SET_GPR_U32(ctx, 31, 0x255850u);
    ctx->pc = 0x25584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255848u;
    // 0x25584c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x255848u, 0x255850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255850u;
label_255850:
    // 0x255850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_255854:
    // 0x255854: 0xc05d4f6  jal         func_1753D8
label_255858:
    if (ctx->pc == 0x255858u) {
        ctx->pc = 0x255858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255854u;
        // 0x255858: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25585Cu;
        goto label_25585c;
    }
    ctx->pc = 0x255854u;
    SET_GPR_U32(ctx, 31, 0x25585Cu);
    ctx->pc = 0x255858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255854u;
    // 0x255858: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x255854u, 0x25585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25585Cu;
label_25585c:
    // 0x25585c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25585cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255860:
    // 0x255860: 0xc0899aa  jal         func_2266A8
label_255864:
    if (ctx->pc == 0x255864u) {
        ctx->pc = 0x255864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255860u;
        // 0x255864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255868u;
        goto label_255868;
    }
    ctx->pc = 0x255860u;
    SET_GPR_U32(ctx, 31, 0x255868u);
    ctx->pc = 0x255864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255860u;
    // 0x255864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x255860u, 0x255868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255868u;
label_255868:
    // 0x255868: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25586c:
    // 0x25586c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25586cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_255870:
    // 0x255870: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x255870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_255874:
    // 0x255874: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x255874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_255878:
    // 0x255878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25587c:
    // 0x25587c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x25587cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_255880:
    // 0x255880: 0xae220674  sw          $v0, 0x674($s1)
    ctx->pc = 0x255880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
label_255884:
    // 0x255884: 0xe6200670  swc1        $f0, 0x670($s1)
    ctx->pc = 0x255884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1648), bits); }
label_255888:
    // 0x255888: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x255888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_25588c:
    // 0x25588c: 0x240702b3  addiu       $a3, $zero, 0x2B3
    ctx->pc = 0x25588cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 691));
label_255890:
    // 0x255890: 0xc09d670  jal         func_2759C0
label_255894:
    if (ctx->pc == 0x255894u) {
        ctx->pc = 0x255894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255890u;
        // 0x255894: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255898u;
        goto label_255898;
    }
    ctx->pc = 0x255890u;
    SET_GPR_U32(ctx, 31, 0x255898u);
    ctx->pc = 0x255894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255890u;
    // 0x255894: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2759C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2759C0u, 0x255890u, 0x255898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255898u;
label_255898:
    // 0x255898: 0xc08b4d2  jal         func_22D348
label_25589c:
    if (ctx->pc == 0x25589Cu) {
        ctx->pc = 0x25589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255898u;
        // 0x25589c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2558A0u;
        goto label_2558a0;
    }
    ctx->pc = 0x255898u;
    SET_GPR_U32(ctx, 31, 0x2558A0u);
    ctx->pc = 0x25589Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255898u;
    // 0x25589c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D348u, 0x255898u, 0x2558A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2558A0u;
label_2558a0:
    // 0x2558a0: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_2558a4:
    if (ctx->pc == 0x2558A4u) {
        ctx->pc = 0x2558A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558A0u;
        // 0x2558a4: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2558A8u;
        goto label_2558a8;
    }
    ctx->pc = 0x2558A0u;
    {
        const bool branch_taken_0x2558a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2558A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558A0u;
        // 0x2558a4: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558a0) {
            ctx->pc = 0x255C84u;
            goto label_255c84;
        }
    }
    ctx->pc = 0x2558A8u;
label_2558a8:
    // 0x2558a8: 0xc0874fa  jal         func_21D3E8
label_2558ac:
    if (ctx->pc == 0x2558ACu) {
        ctx->pc = 0x2558ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558A8u;
        // 0x2558ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2558B0u;
        goto label_2558b0;
    }
    ctx->pc = 0x2558A8u;
    SET_GPR_U32(ctx, 31, 0x2558B0u);
    ctx->pc = 0x2558ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2558A8u;
    // 0x2558ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2558A8u, 0x2558B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2558B0u;
label_2558b0:
    // 0x2558b0: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2558b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_2558b4:
    // 0x2558b4: 0x506000ba  beql        $v1, $zero, . + 4 + (0xBA << 2)
label_2558b8:
    if (ctx->pc == 0x2558B8u) {
        ctx->pc = 0x2558B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558B4u;
        // 0x2558b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2558BCu;
        goto label_2558bc;
    }
    ctx->pc = 0x2558B4u;
    {
        const bool branch_taken_0x2558b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2558b4) {
            ctx->pc = 0x2558B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2558B4u;
            // 0x2558b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255BA0u;
            goto label_255ba0;
        }
    }
    ctx->pc = 0x2558BCu;
label_2558bc:
    // 0x2558bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2558bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2558c0:
    // 0x2558c0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2558c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_2558c4:
    // 0x2558c4: 0xc05d484  jal         func_175210
label_2558c8:
    if (ctx->pc == 0x2558C8u) {
        ctx->pc = 0x2558C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558C4u;
        // 0x2558c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2558CCu;
        goto label_2558cc;
    }
    ctx->pc = 0x2558C4u;
    SET_GPR_U32(ctx, 31, 0x2558CCu);
    ctx->pc = 0x2558C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2558C4u;
    // 0x2558c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2558C4u, 0x2558CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2558CCu;
label_2558cc:
    // 0x2558cc: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x2558ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_2558d0:
    // 0x2558d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2558d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2558d4:
    // 0x2558d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2558d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2558d8:
    // 0x2558d8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2558d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2558dc:
    // 0x2558dc: 0x84a400b0  lh          $a0, 0xB0($a1)
    ctx->pc = 0x2558dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 176)));
label_2558e0:
    // 0x2558e0: 0x8ca300b4  lw          $v1, 0xB4($a1)
    ctx->pc = 0x2558e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
label_2558e4:
    // 0x2558e4: 0x4600ae46  mov.s       $f25, $f21
    ctx->pc = 0x2558e4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[21]);
label_2558e8:
    // 0x2558e8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2558e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2558ec:
    // 0x2558ec: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2558ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_2558f0:
    // 0x2558f0: 0x60f809  jalr        $v1
label_2558f4:
    if (ctx->pc == 0x2558F4u) {
        ctx->pc = 0x2558F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558F0u;
        // 0x2558f4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2558F8u;
        goto label_2558f8;
    }
    ctx->pc = 0x2558F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2558F8u);
        ctx->pc = 0x2558F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558F0u;
        // 0x2558f4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2558F0u, 0x2558F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2558F8u;
label_2558f8:
    // 0x2558f8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2558f8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2558fc:
    // 0x2558fc: 0xc05d484  jal         func_175210
label_255900:
    if (ctx->pc == 0x255900u) {
        ctx->pc = 0x255900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558FCu;
        // 0x255900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255904u;
        goto label_255904;
    }
    ctx->pc = 0x2558FCu;
    SET_GPR_U32(ctx, 31, 0x255904u);
    ctx->pc = 0x255900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2558FCu;
    // 0x255900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2558FCu, 0x255904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255904u;
label_255904:
    // 0x255904: 0xc0420dc  jal         func_108370
label_255908:
    if (ctx->pc == 0x255908u) {
        ctx->pc = 0x255908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255904u;
        // 0x255908: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25590Cu;
        goto label_25590c;
    }
    ctx->pc = 0x255904u;
    SET_GPR_U32(ctx, 31, 0x25590Cu);
    ctx->pc = 0x255908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255904u;
    // 0x255908: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x255904u, 0x25590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25590Cu;
label_25590c:
    // 0x25590c: 0x4618b300  add.s       $f12, $f22, $f24
    ctx->pc = 0x25590cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[24]);
label_255910:
    // 0x255910: 0xc10b1c6  jal         func_42C718
label_255914:
    if (ctx->pc == 0x255914u) {
        ctx->pc = 0x255914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255910u;
        // 0x255914: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x255918u;
        goto label_255918;
    }
    ctx->pc = 0x255910u;
    SET_GPR_U32(ctx, 31, 0x255918u);
    ctx->pc = 0x255914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255910u;
    // 0x255914: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x255910u, 0x255918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255918u;
label_255918:
    // 0x255918: 0xc66006ac  lwc1        $f0, 0x6AC($s3)
    ctx->pc = 0x255918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25591c:
    // 0x25591c: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x25591cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255920:
    // 0x255920: 0x0  nop
    ctx->pc = 0x255920u;
    // NOP
label_255924:
    // 0x255924: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_255928:
    if (ctx->pc == 0x255928u) {
        ctx->pc = 0x255928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255924u;
        // 0x255928: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25592Cu;
        goto label_25592c;
    }
    ctx->pc = 0x255924u;
    {
        const bool branch_taken_0x255924 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x255928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255924u;
        // 0x255928: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255924) {
            ctx->pc = 0x255990u;
            goto label_255990;
        }
    }
    ctx->pc = 0x25592Cu;
label_25592c:
    // 0x25592c: 0xc05d484  jal         func_175210
label_255930:
    if (ctx->pc == 0x255930u) {
        ctx->pc = 0x255930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25592Cu;
        // 0x255930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255934u;
        goto label_255934;
    }
    ctx->pc = 0x25592Cu;
    SET_GPR_U32(ctx, 31, 0x255934u);
    ctx->pc = 0x255930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25592Cu;
    // 0x255930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25592Cu, 0x255934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255934u;
label_255934:
    // 0x255934: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x255934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_255938:
    // 0x255938: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x255938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_25593c:
    // 0x25593c: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x25593cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_255940:
    // 0x255940: 0xa0f809  jalr        $a1
label_255944:
    if (ctx->pc == 0x255944u) {
        ctx->pc = 0x255944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255940u;
        // 0x255944: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255948u;
        goto label_255948;
    }
    ctx->pc = 0x255940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x255948u);
        ctx->pc = 0x255944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255940u;
        // 0x255944: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255940u, 0x255948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255948u;
label_255948:
    // 0x255948: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x255948u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_25594c:
    // 0x25594c: 0xc05d484  jal         func_175210
label_255950:
    if (ctx->pc == 0x255950u) {
        ctx->pc = 0x255950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25594Cu;
        // 0x255950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255954u;
        goto label_255954;
    }
    ctx->pc = 0x25594Cu;
    SET_GPR_U32(ctx, 31, 0x255954u);
    ctx->pc = 0x255950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25594Cu;
    // 0x255950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25594Cu, 0x255954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255954u;
label_255954:
    // 0x255954: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x255954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_255958:
    // 0x255958: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x255958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_25595c:
    // 0x25595c: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x25595cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_255960:
    // 0x255960: 0xa0f809  jalr        $a1
label_255964:
    if (ctx->pc == 0x255964u) {
        ctx->pc = 0x255964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255960u;
        // 0x255964: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255968u;
        goto label_255968;
    }
    ctx->pc = 0x255960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x255968u);
        ctx->pc = 0x255964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255960u;
        // 0x255964: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255960u, 0x255968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255968u;
label_255968:
    // 0x255968: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x255968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_25596c:
    // 0x25596c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x25596cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255970:
    // 0x255970: 0x0  nop
    ctx->pc = 0x255970u;
    // NOP
label_255974:
    // 0x255974: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_255978:
    if (ctx->pc == 0x255978u) {
        ctx->pc = 0x255978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255974u;
        // 0x255978: 0xc66106ac  lwc1        $f1, 0x6AC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25597Cu;
        goto label_25597c;
    }
    ctx->pc = 0x255974u;
    {
        const bool branch_taken_0x255974 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x255978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255974u;
        // 0x255978: 0xc66106ac  lwc1        $f1, 0x6AC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255974) {
            ctx->pc = 0x255990u;
            goto label_255990;
        }
    }
    ctx->pc = 0x25597Cu;
label_25597c:
    // 0x25597c: 0x0  nop
    ctx->pc = 0x25597cu;
    // NOP
label_255980:
    // 0x255980: 0x0  nop
    ctx->pc = 0x255980u;
    // NOP
label_255984:
    // 0x255984: 0x4600a543  div.s       $f21, $f20, $f0
    ctx->pc = 0x255984u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_255988:
    // 0x255988: 0x4615c801  sub.s       $f0, $f25, $f21
    ctx->pc = 0x255988u;
    ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[21]);
label_25598c:
    // 0x25598c: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x25598cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_255990:
    // 0x255990: 0xc0874fa  jal         func_21D3E8
label_255994:
    if (ctx->pc == 0x255994u) {
        ctx->pc = 0x255994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255990u;
        // 0x255994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255998u;
        goto label_255998;
    }
    ctx->pc = 0x255990u;
    SET_GPR_U32(ctx, 31, 0x255998u);
    ctx->pc = 0x255994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255990u;
    // 0x255994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x255990u, 0x255998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255998u;
label_255998:
    // 0x255998: 0xc051fbe  jal         func_147EF8
label_25599c:
    if (ctx->pc == 0x25599Cu) {
        ctx->pc = 0x25599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255998u;
        // 0x25599c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2559A0u;
        goto label_2559a0;
    }
    ctx->pc = 0x255998u;
    SET_GPR_U32(ctx, 31, 0x2559A0u);
    ctx->pc = 0x25599Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255998u;
    // 0x25599c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x255998u, 0x2559A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559A0u;
label_2559a0:
    // 0x2559a0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2559a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2559a4:
    // 0x2559a4: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
label_2559a8:
    if (ctx->pc == 0x2559A8u) {
        ctx->pc = 0x2559A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559A4u;
        // 0x2559a8: 0x8e220674  lw          $v0, 0x674($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2559ACu;
        goto label_2559ac;
    }
    ctx->pc = 0x2559A4u;
    {
        const bool branch_taken_0x2559a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2559a4) {
            ctx->pc = 0x2559A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2559A4u;
            // 0x2559a8: 0x8e220674  lw          $v0, 0x674($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2559CCu;
            goto label_2559cc;
        }
    }
    ctx->pc = 0x2559ACu;
label_2559ac:
    // 0x2559ac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2559acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2559b0:
    // 0x2559b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2559b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2559b4:
    // 0x2559b4: 0x244206b0  addiu       $v0, $v0, 0x6B0
    ctx->pc = 0x2559b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1712));
label_2559b8:
    // 0x2559b8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2559b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2559bc:
    // 0x2559bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2559bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2559c0:
    // 0x2559c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2559c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2559c4:
    // 0x2559c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2559c8:
    if (ctx->pc == 0x2559C8u) {
        ctx->pc = 0x2559C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559C4u;
        // 0x2559c8: 0xae240674  sw          $a0, 0x674($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2559CCu;
        goto label_2559cc;
    }
    ctx->pc = 0x2559C4u;
    {
        const bool branch_taken_0x2559c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2559C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559C4u;
        // 0x2559c8: 0xae240674  sw          $a0, 0x674($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2559c4) {
            ctx->pc = 0x2559DCu;
            goto label_2559dc;
        }
    }
    ctx->pc = 0x2559CCu;
label_2559cc:
    // 0x2559cc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2559d0:
    if (ctx->pc == 0x2559D0u) {
        ctx->pc = 0x2559D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559CCu;
        // 0x2559d0: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2559D4u;
        goto label_2559d4;
    }
    ctx->pc = 0x2559CCu;
    {
        const bool branch_taken_0x2559cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2559D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559CCu;
        // 0x2559d0: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2559cc) {
            ctx->pc = 0x255A14u;
            goto label_255a14;
        }
    }
    ctx->pc = 0x2559D4u;
label_2559d4:
    // 0x2559d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2559d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2559d8:
    // 0x2559d8: 0xae220674  sw          $v0, 0x674($s1)
    ctx->pc = 0x2559d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
label_2559dc:
    // 0x2559dc: 0x8e220674  lw          $v0, 0x674($s1)
    ctx->pc = 0x2559dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_2559e0:
    // 0x2559e0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2559e4:
    if (ctx->pc == 0x2559E4u) {
        ctx->pc = 0x2559E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559E0u;
        // 0x2559e4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2559E8u;
        goto label_2559e8;
    }
    ctx->pc = 0x2559E0u;
    {
        const bool branch_taken_0x2559e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2559E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559E0u;
        // 0x2559e4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2559e0) {
            ctx->pc = 0x255A14u;
            goto label_255a14;
        }
    }
    ctx->pc = 0x2559E8u;
label_2559e8:
    // 0x2559e8: 0xc6210670  lwc1        $f1, 0x670($s1)
    ctx->pc = 0x2559e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2559ec:
    // 0x2559ec: 0x24420690  addiu       $v0, $v0, 0x690
    ctx->pc = 0x2559ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
label_2559f0:
    // 0x2559f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2559f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2559f4:
    // 0x2559f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2559f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2559f8:
    // 0x2559f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2559f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2559fc:
    // 0x2559fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2559fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255a00:
    // 0x255a00: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x255a00u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
label_255a04:
    // 0x255a04: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x255a04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_255a08:
    // 0x255a08: 0x460208a9  min.s       $f2, $f1, $f2
    ctx->pc = 0x255a08u;
    ctx->f[2] = std::min(ctx->f[1], ctx->f[2]);
label_255a0c:
    // 0x255a0c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_255a10:
    if (ctx->pc == 0x255A10u) {
        ctx->pc = 0x255A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A0Cu;
        // 0x255a10: 0xe6220670  swc1        $f2, 0x670($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1648), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x255A14u;
        goto label_255a14;
    }
    ctx->pc = 0x255A0Cu;
    {
        const bool branch_taken_0x255a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A0Cu;
        // 0x255a10: 0xe6220670  swc1        $f2, 0x670($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1648), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a0c) {
            ctx->pc = 0x255A78u;
            goto label_255a78;
        }
    }
    ctx->pc = 0x255A14u;
label_255a14:
    // 0x255a14: 0xc6230670  lwc1        $f3, 0x670($s1)
    ctx->pc = 0x255a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_255a18:
    // 0x255a18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_255a1c:
    // 0x255a1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x255a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_255a20:
    // 0x255a20: 0x4603b802  mul.s       $f0, $f23, $f3
    ctx->pc = 0x255a20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[3]);
label_255a24:
    // 0x255a24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x255a24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255a28:
    // 0x255a28: 0x0  nop
    ctx->pc = 0x255a28u;
    // NOP
label_255a2c:
    // 0x255a2c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_255a30:
    if (ctx->pc == 0x255A30u) {
        ctx->pc = 0x255A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A2Cu;
        // 0x255a30: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255A34u;
        goto label_255a34;
    }
    ctx->pc = 0x255A2Cu;
    {
        const bool branch_taken_0x255a2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A2Cu;
        // 0x255a30: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a2c) {
            ctx->pc = 0x255A58u;
            goto label_255a58;
        }
    }
    ctx->pc = 0x255A34u;
label_255a34:
    // 0x255a34: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x255a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_255a38:
    // 0x255a38: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x255a38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_255a3c:
    // 0x255a3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x255a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_255a40:
    // 0x255a40: 0x244206a0  addiu       $v0, $v0, 0x6A0
    ctx->pc = 0x255a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1696));
label_255a44:
    // 0x255a44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x255a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_255a48:
    // 0x255a48: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x255a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_255a4c:
    // 0x255a4c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x255a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255a50:
    // 0x255a50: 0x10000006  b           . + 4 + (0x6 << 2)
label_255a54:
    if (ctx->pc == 0x255A54u) {
        ctx->pc = 0x255A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A50u;
        // 0x255a54: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x255A58u;
        goto label_255a58;
    }
    ctx->pc = 0x255A50u;
    {
        const bool branch_taken_0x255a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A50u;
        // 0x255a54: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a50) {
            ctx->pc = 0x255A6Cu;
            goto label_255a6c;
        }
    }
    ctx->pc = 0x255A58u;
label_255a58:
    // 0x255a58: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x255a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_255a5c:
    // 0x255a5c: 0x244206a0  addiu       $v0, $v0, 0x6A0
    ctx->pc = 0x255a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1696));
label_255a60:
    // 0x255a60: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x255a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_255a64:
    // 0x255a64: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x255a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255a68:
    // 0x255a68: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x255a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_255a6c:
    // 0x255a6c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x255a6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_255a70:
    // 0x255a70: 0x46010068  max.s       $f1, $f0, $f1
    ctx->pc = 0x255a70u;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[1]);
label_255a74:
    // 0x255a74: 0xe6210670  swc1        $f1, 0x670($s1)
    ctx->pc = 0x255a74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1648), bits); }
label_255a78:
    // 0x255a78: 0xc6200670  lwc1        $f0, 0x670($s1)
    ctx->pc = 0x255a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255a7c:
    // 0x255a7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_255a80:
    // 0x255a80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_255a84:
    // 0x255a84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x255a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_255a88:
    // 0x255a88: 0xc05d484  jal         func_175210
label_255a8c:
    if (ctx->pc == 0x255A8Cu) {
        ctx->pc = 0x255A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A88u;
        // 0x255a8c: 0x4600bdc2  mul.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x255A90u;
        goto label_255a90;
    }
    ctx->pc = 0x255A88u;
    SET_GPR_U32(ctx, 31, 0x255A90u);
    ctx->pc = 0x255A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A88u;
    // 0x255a8c: 0x4600bdc2  mul.s       $f23, $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x255A88u, 0x255A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A90u;
label_255a90:
    // 0x255a90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x255a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_255a94:
    // 0x255a94: 0xc0420f4  jal         func_1083D0
label_255a98:
    if (ctx->pc == 0x255A98u) {
        ctx->pc = 0x255A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A94u;
        // 0x255a98: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x255A9Cu;
        goto label_255a9c;
    }
    ctx->pc = 0x255A94u;
    SET_GPR_U32(ctx, 31, 0x255A9Cu);
    ctx->pc = 0x255A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A94u;
    // 0x255a98: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083D0u, 0x255A94u, 0x255A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A9Cu;
label_255a9c:
    // 0x255a9c: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x255a9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255aa0:
    // 0x255aa0: 0x0  nop
    ctx->pc = 0x255aa0u;
    // NOP
label_255aa4:
    // 0x255aa4: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_255aa8:
    if (ctx->pc == 0x255AA8u) {
        ctx->pc = 0x255AACu;
        goto label_255aac;
    }
    ctx->pc = 0x255AA4u;
    {
        const bool branch_taken_0x255aa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255aa4) {
            ctx->pc = 0x255B10u;
            goto label_255b10;
        }
    }
    ctx->pc = 0x255AACu;
label_255aac:
    // 0x255aac: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x255aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_255ab0:
    // 0x255ab0: 0xc05d484  jal         func_175210
label_255ab4:
    if (ctx->pc == 0x255AB4u) {
        ctx->pc = 0x255AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255AB0u;
        // 0x255ab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255AB8u;
        goto label_255ab8;
    }
    ctx->pc = 0x255AB0u;
    SET_GPR_U32(ctx, 31, 0x255AB8u);
    ctx->pc = 0x255AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255AB0u;
    // 0x255ab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x255AB0u, 0x255AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255AB8u;
label_255ab8:
    // 0x255ab8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x255ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_255abc:
    // 0x255abc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x255abcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_255ac0:
    // 0x255ac0: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x255ac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_255ac4:
    // 0x255ac4: 0x8c6500ac  lw          $a1, 0xAC($v1)
    ctx->pc = 0x255ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_255ac8:
    // 0x255ac8: 0xa0f809  jalr        $a1
label_255acc:
    if (ctx->pc == 0x255ACCu) {
        ctx->pc = 0x255ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255AC8u;
        // 0x255acc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255AD0u;
        goto label_255ad0;
    }
    ctx->pc = 0x255AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x255AD0u);
        ctx->pc = 0x255ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255AC8u;
        // 0x255acc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255AC8u, 0x255AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255AD0u;
label_255ad0:
    // 0x255ad0: 0x4614b032  c.eq.s      $f22, $f20
    ctx->pc = 0x255ad0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255ad4:
    // 0x255ad4: 0x0  nop
    ctx->pc = 0x255ad4u;
    // NOP
label_255ad8:
    // 0x255ad8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_255adc:
    if (ctx->pc == 0x255ADCu) {
        ctx->pc = 0x255AE0u;
        goto label_255ae0;
    }
    ctx->pc = 0x255AD8u;
    {
        const bool branch_taken_0x255ad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255ad8) {
            ctx->pc = 0x255B30u;
            goto label_255b30;
        }
    }
    ctx->pc = 0x255AE0u;
label_255ae0:
    // 0x255ae0: 0xc05d484  jal         func_175210
label_255ae4:
    if (ctx->pc == 0x255AE4u) {
        ctx->pc = 0x255AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255AE0u;
        // 0x255ae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255AE8u;
        goto label_255ae8;
    }
    ctx->pc = 0x255AE0u;
    SET_GPR_U32(ctx, 31, 0x255AE8u);
    ctx->pc = 0x255AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255AE0u;
    // 0x255ae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x255AE0u, 0x255AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255AE8u;
label_255ae8:
    // 0x255ae8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x255ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_255aec:
    // 0x255aec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x255aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_255af0:
    // 0x255af0: 0x246306a0  addiu       $v1, $v1, 0x6A0
    ctx->pc = 0x255af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1696));
label_255af4:
    // 0x255af4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x255af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_255af8:
    // 0x255af8: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x255af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_255afc:
    // 0x255afc: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x255afcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_255b00:
    // 0x255b00: 0xc0420f4  jal         func_1083D0
label_255b04:
    if (ctx->pc == 0x255B04u) {
        ctx->pc = 0x255B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B00u;
        // 0x255b04: 0x460cbb00  add.s       $f12, $f23, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x255B08u;
        goto label_255b08;
    }
    ctx->pc = 0x255B00u;
    SET_GPR_U32(ctx, 31, 0x255B08u);
    ctx->pc = 0x255B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B00u;
    // 0x255b04: 0x460cbb00  add.s       $f12, $f23, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083D0u, 0x255B00u, 0x255B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B08u;
label_255b08:
    // 0x255b08: 0x10000009  b           . + 4 + (0x9 << 2)
label_255b0c:
    if (ctx->pc == 0x255B0Cu) {
        ctx->pc = 0x255B10u;
        goto label_255b10;
    }
    ctx->pc = 0x255B08u;
    {
        const bool branch_taken_0x255b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x255b08) {
            ctx->pc = 0x255B30u;
            goto label_255b30;
        }
    }
    ctx->pc = 0x255B10u;
label_255b10:
    // 0x255b10: 0xc05d484  jal         func_175210
label_255b14:
    if (ctx->pc == 0x255B14u) {
        ctx->pc = 0x255B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B10u;
        // 0x255b14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255B18u;
        goto label_255b18;
    }
    ctx->pc = 0x255B10u;
    SET_GPR_U32(ctx, 31, 0x255B18u);
    ctx->pc = 0x255B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B10u;
    // 0x255b14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x255B10u, 0x255B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B18u;
label_255b18:
    // 0x255b18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x255b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_255b1c:
    // 0x255b1c: 0x4614bb01  sub.s       $f12, $f23, $f20
    ctx->pc = 0x255b1cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
label_255b20:
    // 0x255b20: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x255b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_255b24:
    // 0x255b24: 0x8c6500ac  lw          $a1, 0xAC($v1)
    ctx->pc = 0x255b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_255b28:
    // 0x255b28: 0xa0f809  jalr        $a1
label_255b2c:
    if (ctx->pc == 0x255B2Cu) {
        ctx->pc = 0x255B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B28u;
        // 0x255b2c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255B30u;
        goto label_255b30;
    }
    ctx->pc = 0x255B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x255B30u);
        ctx->pc = 0x255B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B28u;
        // 0x255b2c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255B28u, 0x255B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255B30u;
label_255b30:
    // 0x255b30: 0xc0874fa  jal         func_21D3E8
label_255b34:
    if (ctx->pc == 0x255B34u) {
        ctx->pc = 0x255B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B30u;
        // 0x255b34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255B38u;
        goto label_255b38;
    }
    ctx->pc = 0x255B30u;
    SET_GPR_U32(ctx, 31, 0x255B38u);
    ctx->pc = 0x255B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B30u;
    // 0x255b34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x255B30u, 0x255B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B38u;
label_255b38:
    // 0x255b38: 0xc051fbe  jal         func_147EF8
label_255b3c:
    if (ctx->pc == 0x255B3Cu) {
        ctx->pc = 0x255B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B38u;
        // 0x255b3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255B40u;
        goto label_255b40;
    }
    ctx->pc = 0x255B38u;
    SET_GPR_U32(ctx, 31, 0x255B40u);
    ctx->pc = 0x255B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B38u;
    // 0x255b3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x255B38u, 0x255B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B40u;
label_255b40:
    // 0x255b40: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x255b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_255b44:
    // 0x255b44: 0x50430012  beql        $v0, $v1, . + 4 + (0x12 << 2)
label_255b48:
    if (ctx->pc == 0x255B48u) {
        ctx->pc = 0x255B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B44u;
        // 0x255b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255B4Cu;
        goto label_255b4c;
    }
    ctx->pc = 0x255B44u;
    {
        const bool branch_taken_0x255b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x255b44) {
            ctx->pc = 0x255B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255B44u;
            // 0x255b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255B90u;
            goto label_255b90;
        }
    }
    ctx->pc = 0x255B4Cu;
label_255b4c:
    // 0x255b4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x255b4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_255b50:
    // 0x255b50: 0x0  nop
    ctx->pc = 0x255b50u;
    // NOP
label_255b54:
    // 0x255b54: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x255b54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255b58:
    // 0x255b58: 0x0  nop
    ctx->pc = 0x255b58u;
    // NOP
label_255b5c:
    // 0x255b5c: 0x45000048  bc1f        . + 4 + (0x48 << 2)
label_255b60:
    if (ctx->pc == 0x255B60u) {
        ctx->pc = 0x255B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B5Cu;
        // 0x255b60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255B64u;
        goto label_255b64;
    }
    ctx->pc = 0x255B5Cu;
    {
        const bool branch_taken_0x255b5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B5Cu;
        // 0x255b60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b5c) {
            ctx->pc = 0x255C80u;
            goto label_255c80;
        }
    }
    ctx->pc = 0x255B64u;
label_255b64:
    // 0x255b64: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x255b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_255b68:
    // 0x255b68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x255b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_255b6c:
    // 0x255b6c: 0x244206a0  addiu       $v0, $v0, 0x6A0
    ctx->pc = 0x255b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1696));
label_255b70:
    // 0x255b70: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x255b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_255b74:
    // 0x255b74: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x255b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_255b78:
    // 0x255b78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x255b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_255b7c:
    // 0x255b7c: 0x4600d036  c.le.s      $f26, $f0
    ctx->pc = 0x255b7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255b80:
    // 0x255b80: 0x0  nop
    ctx->pc = 0x255b80u;
    // NOP
label_255b84:
    // 0x255b84: 0x4502003f  bc1fl       . + 4 + (0x3F << 2)
label_255b88:
    if (ctx->pc == 0x255B88u) {
        ctx->pc = 0x255B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B84u;
        // 0x255b88: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255B8Cu;
        goto label_255b8c;
    }
    ctx->pc = 0x255B84u;
    {
        const bool branch_taken_0x255b84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255b84) {
            ctx->pc = 0x255B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255B84u;
            // 0x255b88: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255C84u;
            goto label_255c84;
        }
    }
    ctx->pc = 0x255B8Cu;
label_255b8c:
    // 0x255b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255b90:
    // 0x255b90: 0xc0899aa  jal         func_2266A8
label_255b94:
    if (ctx->pc == 0x255B94u) {
        ctx->pc = 0x255B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B90u;
        // 0x255b94: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255B98u;
        goto label_255b98;
    }
    ctx->pc = 0x255B90u;
    SET_GPR_U32(ctx, 31, 0x255B98u);
    ctx->pc = 0x255B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B90u;
    // 0x255b94: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x255B90u, 0x255B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B98u;
label_255b98:
    // 0x255b98: 0x1000003a  b           . + 4 + (0x3A << 2)
label_255b9c:
    if (ctx->pc == 0x255B9Cu) {
        ctx->pc = 0x255B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B98u;
        // 0x255b9c: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255BA0u;
        goto label_255ba0;
    }
    ctx->pc = 0x255B98u;
    {
        const bool branch_taken_0x255b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255B98u;
        // 0x255b9c: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b98) {
            ctx->pc = 0x255C84u;
            goto label_255c84;
        }
    }
    ctx->pc = 0x255BA0u;
label_255ba0:
    // 0x255ba0: 0xc05d484  jal         func_175210
label_255ba4:
    if (ctx->pc == 0x255BA4u) {
        ctx->pc = 0x255BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BA0u;
        // 0x255ba4: 0xc6350670  lwc1        $f21, 0x670($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x255BA8u;
        goto label_255ba8;
    }
    ctx->pc = 0x255BA0u;
    SET_GPR_U32(ctx, 31, 0x255BA8u);
    ctx->pc = 0x255BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255BA0u;
    // 0x255ba4: 0xc6350670  lwc1        $f21, 0x670($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x255BA0u, 0x255BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255BA8u;
label_255ba8:
    // 0x255ba8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_255bac:
    // 0x255bac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x255bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_255bb0:
    // 0x255bb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x255bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_255bb4:
    // 0x255bb4: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x255bb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_255bb8:
    // 0x255bb8: 0x8c6500b4  lw          $a1, 0xB4($v1)
    ctx->pc = 0x255bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_255bbc:
    // 0x255bbc: 0xa0f809  jalr        $a1
label_255bc0:
    if (ctx->pc == 0x255BC0u) {
        ctx->pc = 0x255BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BBCu;
        // 0x255bc0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255BC4u;
        goto label_255bc4;
    }
    ctx->pc = 0x255BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x255BC4u);
        ctx->pc = 0x255BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BBCu;
        // 0x255bc0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255BBCu, 0x255BC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255BC4u;
label_255bc4:
    // 0x255bc4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x255bc4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_255bc8:
    // 0x255bc8: 0xc05d484  jal         func_175210
label_255bcc:
    if (ctx->pc == 0x255BCCu) {
        ctx->pc = 0x255BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BC8u;
        // 0x255bcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255BD0u;
        goto label_255bd0;
    }
    ctx->pc = 0x255BC8u;
    SET_GPR_U32(ctx, 31, 0x255BD0u);
    ctx->pc = 0x255BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255BC8u;
    // 0x255bcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x255BC8u, 0x255BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255BD0u;
label_255bd0:
    // 0x255bd0: 0xc0420dc  jal         func_108370
label_255bd4:
    if (ctx->pc == 0x255BD4u) {
        ctx->pc = 0x255BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BD0u;
        // 0x255bd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255BD8u;
        goto label_255bd8;
    }
    ctx->pc = 0x255BD0u;
    SET_GPR_U32(ctx, 31, 0x255BD8u);
    ctx->pc = 0x255BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255BD0u;
    // 0x255bd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x255BD0u, 0x255BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255BD8u;
label_255bd8:
    // 0x255bd8: 0xc05d484  jal         func_175210
label_255bdc:
    if (ctx->pc == 0x255BDCu) {
        ctx->pc = 0x255BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BD8u;
        // 0x255bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255BE0u;
        goto label_255be0;
    }
    ctx->pc = 0x255BD8u;
    SET_GPR_U32(ctx, 31, 0x255BE0u);
    ctx->pc = 0x255BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255BD8u;
    // 0x255bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x255BD8u, 0x255BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255BE0u;
label_255be0:
    // 0x255be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x255be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_255be4:
    // 0x255be4: 0xc0420f4  jal         func_1083D0
label_255be8:
    if (ctx->pc == 0x255BE8u) {
        ctx->pc = 0x255BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255BE4u;
        // 0x255be8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x255BECu;
        goto label_255bec;
    }
    ctx->pc = 0x255BE4u;
    SET_GPR_U32(ctx, 31, 0x255BECu);
    ctx->pc = 0x255BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255BE4u;
    // 0x255be8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083D0u, 0x255BE4u, 0x255BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255BECu;
label_255bec:
    // 0x255bec: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x255becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255bf0:
    // 0x255bf0: 0x0  nop
    ctx->pc = 0x255bf0u;
    // NOP
label_255bf4:
    // 0x255bf4: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_255bf8:
    if (ctx->pc == 0x255BF8u) {
        ctx->pc = 0x255BFCu;
        goto label_255bfc;
    }
    ctx->pc = 0x255BF4u;
    {
        const bool branch_taken_0x255bf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255bf4) {
            ctx->pc = 0x255C60u;
            goto label_255c60;
        }
    }
    ctx->pc = 0x255BFCu;
label_255bfc:
    // 0x255bfc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x255bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_255c00:
    // 0x255c00: 0xc05d484  jal         func_175210
label_255c04:
    if (ctx->pc == 0x255C04u) {
        ctx->pc = 0x255C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C00u;
        // 0x255c04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255C08u;
        goto label_255c08;
    }
    ctx->pc = 0x255C00u;
    SET_GPR_U32(ctx, 31, 0x255C08u);
    ctx->pc = 0x255C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C00u;
    // 0x255c04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x255C00u, 0x255C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C08u;
label_255c08:
    // 0x255c08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x255c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_255c0c:
    // 0x255c0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x255c0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_255c10:
    // 0x255c10: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x255c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_255c14:
    // 0x255c14: 0x8c6500ac  lw          $a1, 0xAC($v1)
    ctx->pc = 0x255c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_255c18:
    // 0x255c18: 0xa0f809  jalr        $a1
label_255c1c:
    if (ctx->pc == 0x255C1Cu) {
        ctx->pc = 0x255C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C18u;
        // 0x255c1c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255C20u;
        goto label_255c20;
    }
    ctx->pc = 0x255C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x255C20u);
        ctx->pc = 0x255C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C18u;
        // 0x255c1c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255C18u, 0x255C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255C20u;
label_255c20:
    // 0x255c20: 0x4614b032  c.eq.s      $f22, $f20
    ctx->pc = 0x255c20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_255c24:
    // 0x255c24: 0x0  nop
    ctx->pc = 0x255c24u;
    // NOP
label_255c28:
    // 0x255c28: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
label_255c2c:
    if (ctx->pc == 0x255C2Cu) {
        ctx->pc = 0x255C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C28u;
        // 0x255c2c: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255C30u;
        goto label_255c30;
    }
    ctx->pc = 0x255C28u;
    {
        const bool branch_taken_0x255c28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255c28) {
            ctx->pc = 0x255C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255C28u;
            // 0x255c2c: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255C84u;
            goto label_255c84;
        }
    }
    ctx->pc = 0x255C30u;
label_255c30:
    // 0x255c30: 0xc05d484  jal         func_175210
label_255c34:
    if (ctx->pc == 0x255C34u) {
        ctx->pc = 0x255C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C30u;
        // 0x255c34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255C38u;
        goto label_255c38;
    }
    ctx->pc = 0x255C30u;
    SET_GPR_U32(ctx, 31, 0x255C38u);
    ctx->pc = 0x255C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C30u;
    // 0x255c34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x255C30u, 0x255C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C38u;
label_255c38:
    // 0x255c38: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x255c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_255c3c:
    // 0x255c3c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x255c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_255c40:
    // 0x255c40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_255c44:
    // 0x255c44: 0xc46c06a0  lwc1        $f12, 0x6A0($v1)
    ctx->pc = 0x255c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_255c48:
    // 0x255c48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x255c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_255c4c:
    // 0x255c4c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x255c4cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_255c50:
    // 0x255c50: 0xc0420f4  jal         func_1083D0
label_255c54:
    if (ctx->pc == 0x255C54u) {
        ctx->pc = 0x255C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C50u;
        // 0x255c54: 0x460cab00  add.s       $f12, $f21, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x255C58u;
        goto label_255c58;
    }
    ctx->pc = 0x255C50u;
    SET_GPR_U32(ctx, 31, 0x255C58u);
    ctx->pc = 0x255C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C50u;
    // 0x255c54: 0x460cab00  add.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083D0u, 0x255C50u, 0x255C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C58u;
label_255c58:
    // 0x255c58: 0x1000000a  b           . + 4 + (0xA << 2)
label_255c5c:
    if (ctx->pc == 0x255C5Cu) {
        ctx->pc = 0x255C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C58u;
        // 0x255c5c: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255C60u;
        goto label_255c60;
    }
    ctx->pc = 0x255C58u;
    {
        const bool branch_taken_0x255c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C58u;
        // 0x255c5c: 0x8ec30014  lw          $v1, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c58) {
            ctx->pc = 0x255C84u;
            goto label_255c84;
        }
    }
    ctx->pc = 0x255C60u;
label_255c60:
    // 0x255c60: 0xc05d484  jal         func_175210
label_255c64:
    if (ctx->pc == 0x255C64u) {
        ctx->pc = 0x255C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C60u;
        // 0x255c64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255C68u;
        goto label_255c68;
    }
    ctx->pc = 0x255C60u;
    SET_GPR_U32(ctx, 31, 0x255C68u);
    ctx->pc = 0x255C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C60u;
    // 0x255c64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x255C60u, 0x255C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C68u;
label_255c68:
    // 0x255c68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x255c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_255c6c:
    // 0x255c6c: 0x4614ab01  sub.s       $f12, $f21, $f20
    ctx->pc = 0x255c6cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_255c70:
    // 0x255c70: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x255c70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_255c74:
    // 0x255c74: 0x8c6500ac  lw          $a1, 0xAC($v1)
    ctx->pc = 0x255c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_255c78:
    // 0x255c78: 0xa0f809  jalr        $a1
label_255c7c:
    if (ctx->pc == 0x255C7Cu) {
        ctx->pc = 0x255C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C78u;
        // 0x255c7c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255C80u;
        goto label_255c80;
    }
    ctx->pc = 0x255C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x255C80u);
        ctx->pc = 0x255C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C78u;
        // 0x255c7c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255C78u, 0x255C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255C80u;
label_255c80:
    // 0x255c80: 0x8ec30014  lw          $v1, 0x14($s6)
    ctx->pc = 0x255c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_255c84:
    // 0x255c84: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x255c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_255c88:
    // 0x255c88: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_255c8c:
    if (ctx->pc == 0x255C8Cu) {
        ctx->pc = 0x255C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C88u;
        // 0x255c8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255C90u;
        goto label_255c90;
    }
    ctx->pc = 0x255C88u;
    {
        const bool branch_taken_0x255c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x255C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C88u;
        // 0x255c8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c88) {
            ctx->pc = 0x255CB0u;
            goto label_255cb0;
        }
    }
    ctx->pc = 0x255C90u;
label_255c90:
    // 0x255c90: 0xc08b4e0  jal         func_22D380
label_255c94:
    if (ctx->pc == 0x255C94u) {
        ctx->pc = 0x255C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C90u;
        // 0x255c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255C98u;
        goto label_255c98;
    }
    ctx->pc = 0x255C90u;
    SET_GPR_U32(ctx, 31, 0x255C98u);
    ctx->pc = 0x255C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C90u;
    // 0x255c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D380u, 0x255C90u, 0x255C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C98u;
label_255c98:
    // 0x255c98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_255c9c:
    // 0x255c9c: 0x240502b4  addiu       $a1, $zero, 0x2B4
    ctx->pc = 0x255c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 692));
label_255ca0:
    // 0x255ca0: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x255ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_255ca4:
    // 0x255ca4: 0xc096a30  jal         func_25A8C0
label_255ca8:
    if (ctx->pc == 0x255CA8u) {
        ctx->pc = 0x255CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255CA4u;
        // 0x255ca8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255CACu;
        goto label_255cac;
    }
    ctx->pc = 0x255CA4u;
    SET_GPR_U32(ctx, 31, 0x255CACu);
    ctx->pc = 0x255CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255CA4u;
    // 0x255ca8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8C0u, 0x255CA4u, 0x255CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255CACu;
label_255cac:
    // 0x255cac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_255cb0:
    // 0x255cb0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x255cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_255cb4:
    // 0x255cb4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x255cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_255cb8:
    // 0x255cb8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x255cb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_255cbc:
    // 0x255cbc: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x255cbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_255cc0:
    // 0x255cc0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x255cc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_255cc4:
    // 0x255cc4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x255cc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_255cc8:
    // 0x255cc8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x255cc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_255ccc:
    // 0x255ccc: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x255cccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_255cd0:
    // 0x255cd0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x255cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_255cd4:
    // 0x255cd4: 0xc7ba0110  lwc1        $f26, 0x110($sp)
    ctx->pc = 0x255cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_255cd8:
    // 0x255cd8: 0xc7b90108  lwc1        $f25, 0x108($sp)
    ctx->pc = 0x255cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_255cdc:
    // 0x255cdc: 0xc7b80100  lwc1        $f24, 0x100($sp)
    ctx->pc = 0x255cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_255ce0:
    // 0x255ce0: 0xc7b700f8  lwc1        $f23, 0xF8($sp)
    ctx->pc = 0x255ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_255ce4:
    // 0x255ce4: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x255ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_255ce8:
    // 0x255ce8: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x255ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_255cec:
    // 0x255cec: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x255cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_255cf0:
    // 0x255cf0: 0x3e00008  jr          $ra
label_255cf4:
    if (ctx->pc == 0x255CF4u) {
        ctx->pc = 0x255CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255CF0u;
        // 0x255cf4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255CF8u;
        goto label_fallthrough_0x255cf0;
    }
    ctx->pc = 0x255CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255CF0u;
        // 0x255cf4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x255cf0:
    ctx->pc = 0x255CF8u;
}
