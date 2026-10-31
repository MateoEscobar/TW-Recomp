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

// Function: sub_001852D8
// Address: 0x1852d8 - 0x185990
void sub_001852D8_0x1852d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001852D8_0x1852d8");
#endif

    switch (ctx->pc) {
        case 0x1852d8u: goto label_1852d8;
        case 0x1852dcu: goto label_1852dc;
        case 0x1852e0u: goto label_1852e0;
        case 0x1852e4u: goto label_1852e4;
        case 0x1852e8u: goto label_1852e8;
        case 0x1852ecu: goto label_1852ec;
        case 0x1852f0u: goto label_1852f0;
        case 0x1852f4u: goto label_1852f4;
        case 0x1852f8u: goto label_1852f8;
        case 0x1852fcu: goto label_1852fc;
        case 0x185300u: goto label_185300;
        case 0x185304u: goto label_185304;
        case 0x185308u: goto label_185308;
        case 0x18530cu: goto label_18530c;
        case 0x185310u: goto label_185310;
        case 0x185314u: goto label_185314;
        case 0x185318u: goto label_185318;
        case 0x18531cu: goto label_18531c;
        case 0x185320u: goto label_185320;
        case 0x185324u: goto label_185324;
        case 0x185328u: goto label_185328;
        case 0x18532cu: goto label_18532c;
        case 0x185330u: goto label_185330;
        case 0x185334u: goto label_185334;
        case 0x185338u: goto label_185338;
        case 0x18533cu: goto label_18533c;
        case 0x185340u: goto label_185340;
        case 0x185344u: goto label_185344;
        case 0x185348u: goto label_185348;
        case 0x18534cu: goto label_18534c;
        case 0x185350u: goto label_185350;
        case 0x185354u: goto label_185354;
        case 0x185358u: goto label_185358;
        case 0x18535cu: goto label_18535c;
        case 0x185360u: goto label_185360;
        case 0x185364u: goto label_185364;
        case 0x185368u: goto label_185368;
        case 0x18536cu: goto label_18536c;
        case 0x185370u: goto label_185370;
        case 0x185374u: goto label_185374;
        case 0x185378u: goto label_185378;
        case 0x18537cu: goto label_18537c;
        case 0x185380u: goto label_185380;
        case 0x185384u: goto label_185384;
        case 0x185388u: goto label_185388;
        case 0x18538cu: goto label_18538c;
        case 0x185390u: goto label_185390;
        case 0x185394u: goto label_185394;
        case 0x185398u: goto label_185398;
        case 0x18539cu: goto label_18539c;
        case 0x1853a0u: goto label_1853a0;
        case 0x1853a4u: goto label_1853a4;
        case 0x1853a8u: goto label_1853a8;
        case 0x1853acu: goto label_1853ac;
        case 0x1853b0u: goto label_1853b0;
        case 0x1853b4u: goto label_1853b4;
        case 0x1853b8u: goto label_1853b8;
        case 0x1853bcu: goto label_1853bc;
        case 0x1853c0u: goto label_1853c0;
        case 0x1853c4u: goto label_1853c4;
        case 0x1853c8u: goto label_1853c8;
        case 0x1853ccu: goto label_1853cc;
        case 0x1853d0u: goto label_1853d0;
        case 0x1853d4u: goto label_1853d4;
        case 0x1853d8u: goto label_1853d8;
        case 0x1853dcu: goto label_1853dc;
        case 0x1853e0u: goto label_1853e0;
        case 0x1853e4u: goto label_1853e4;
        case 0x1853e8u: goto label_1853e8;
        case 0x1853ecu: goto label_1853ec;
        case 0x1853f0u: goto label_1853f0;
        case 0x1853f4u: goto label_1853f4;
        case 0x1853f8u: goto label_1853f8;
        case 0x1853fcu: goto label_1853fc;
        case 0x185400u: goto label_185400;
        case 0x185404u: goto label_185404;
        case 0x185408u: goto label_185408;
        case 0x18540cu: goto label_18540c;
        case 0x185410u: goto label_185410;
        case 0x185414u: goto label_185414;
        case 0x185418u: goto label_185418;
        case 0x18541cu: goto label_18541c;
        case 0x185420u: goto label_185420;
        case 0x185424u: goto label_185424;
        case 0x185428u: goto label_185428;
        case 0x18542cu: goto label_18542c;
        case 0x185430u: goto label_185430;
        case 0x185434u: goto label_185434;
        case 0x185438u: goto label_185438;
        case 0x18543cu: goto label_18543c;
        case 0x185440u: goto label_185440;
        case 0x185444u: goto label_185444;
        case 0x185448u: goto label_185448;
        case 0x18544cu: goto label_18544c;
        case 0x185450u: goto label_185450;
        case 0x185454u: goto label_185454;
        case 0x185458u: goto label_185458;
        case 0x18545cu: goto label_18545c;
        case 0x185460u: goto label_185460;
        case 0x185464u: goto label_185464;
        case 0x185468u: goto label_185468;
        case 0x18546cu: goto label_18546c;
        case 0x185470u: goto label_185470;
        case 0x185474u: goto label_185474;
        case 0x185478u: goto label_185478;
        case 0x18547cu: goto label_18547c;
        case 0x185480u: goto label_185480;
        case 0x185484u: goto label_185484;
        case 0x185488u: goto label_185488;
        case 0x18548cu: goto label_18548c;
        case 0x185490u: goto label_185490;
        case 0x185494u: goto label_185494;
        case 0x185498u: goto label_185498;
        case 0x18549cu: goto label_18549c;
        case 0x1854a0u: goto label_1854a0;
        case 0x1854a4u: goto label_1854a4;
        case 0x1854a8u: goto label_1854a8;
        case 0x1854acu: goto label_1854ac;
        case 0x1854b0u: goto label_1854b0;
        case 0x1854b4u: goto label_1854b4;
        case 0x1854b8u: goto label_1854b8;
        case 0x1854bcu: goto label_1854bc;
        case 0x1854c0u: goto label_1854c0;
        case 0x1854c4u: goto label_1854c4;
        case 0x1854c8u: goto label_1854c8;
        case 0x1854ccu: goto label_1854cc;
        case 0x1854d0u: goto label_1854d0;
        case 0x1854d4u: goto label_1854d4;
        case 0x1854d8u: goto label_1854d8;
        case 0x1854dcu: goto label_1854dc;
        case 0x1854e0u: goto label_1854e0;
        case 0x1854e4u: goto label_1854e4;
        case 0x1854e8u: goto label_1854e8;
        case 0x1854ecu: goto label_1854ec;
        case 0x1854f0u: goto label_1854f0;
        case 0x1854f4u: goto label_1854f4;
        case 0x1854f8u: goto label_1854f8;
        case 0x1854fcu: goto label_1854fc;
        case 0x185500u: goto label_185500;
        case 0x185504u: goto label_185504;
        case 0x185508u: goto label_185508;
        case 0x18550cu: goto label_18550c;
        case 0x185510u: goto label_185510;
        case 0x185514u: goto label_185514;
        case 0x185518u: goto label_185518;
        case 0x18551cu: goto label_18551c;
        case 0x185520u: goto label_185520;
        case 0x185524u: goto label_185524;
        case 0x185528u: goto label_185528;
        case 0x18552cu: goto label_18552c;
        case 0x185530u: goto label_185530;
        case 0x185534u: goto label_185534;
        case 0x185538u: goto label_185538;
        case 0x18553cu: goto label_18553c;
        case 0x185540u: goto label_185540;
        case 0x185544u: goto label_185544;
        case 0x185548u: goto label_185548;
        case 0x18554cu: goto label_18554c;
        case 0x185550u: goto label_185550;
        case 0x185554u: goto label_185554;
        case 0x185558u: goto label_185558;
        case 0x18555cu: goto label_18555c;
        case 0x185560u: goto label_185560;
        case 0x185564u: goto label_185564;
        case 0x185568u: goto label_185568;
        case 0x18556cu: goto label_18556c;
        case 0x185570u: goto label_185570;
        case 0x185574u: goto label_185574;
        case 0x185578u: goto label_185578;
        case 0x18557cu: goto label_18557c;
        case 0x185580u: goto label_185580;
        case 0x185584u: goto label_185584;
        case 0x185588u: goto label_185588;
        case 0x18558cu: goto label_18558c;
        case 0x185590u: goto label_185590;
        case 0x185594u: goto label_185594;
        case 0x185598u: goto label_185598;
        case 0x18559cu: goto label_18559c;
        case 0x1855a0u: goto label_1855a0;
        case 0x1855a4u: goto label_1855a4;
        case 0x1855a8u: goto label_1855a8;
        case 0x1855acu: goto label_1855ac;
        case 0x1855b0u: goto label_1855b0;
        case 0x1855b4u: goto label_1855b4;
        case 0x1855b8u: goto label_1855b8;
        case 0x1855bcu: goto label_1855bc;
        case 0x1855c0u: goto label_1855c0;
        case 0x1855c4u: goto label_1855c4;
        case 0x1855c8u: goto label_1855c8;
        case 0x1855ccu: goto label_1855cc;
        case 0x1855d0u: goto label_1855d0;
        case 0x1855d4u: goto label_1855d4;
        case 0x1855d8u: goto label_1855d8;
        case 0x1855dcu: goto label_1855dc;
        case 0x1855e0u: goto label_1855e0;
        case 0x1855e4u: goto label_1855e4;
        case 0x1855e8u: goto label_1855e8;
        case 0x1855ecu: goto label_1855ec;
        case 0x1855f0u: goto label_1855f0;
        case 0x1855f4u: goto label_1855f4;
        case 0x1855f8u: goto label_1855f8;
        case 0x1855fcu: goto label_1855fc;
        case 0x185600u: goto label_185600;
        case 0x185604u: goto label_185604;
        case 0x185608u: goto label_185608;
        case 0x18560cu: goto label_18560c;
        case 0x185610u: goto label_185610;
        case 0x185614u: goto label_185614;
        case 0x185618u: goto label_185618;
        case 0x18561cu: goto label_18561c;
        case 0x185620u: goto label_185620;
        case 0x185624u: goto label_185624;
        case 0x185628u: goto label_185628;
        case 0x18562cu: goto label_18562c;
        case 0x185630u: goto label_185630;
        case 0x185634u: goto label_185634;
        case 0x185638u: goto label_185638;
        case 0x18563cu: goto label_18563c;
        case 0x185640u: goto label_185640;
        case 0x185644u: goto label_185644;
        case 0x185648u: goto label_185648;
        case 0x18564cu: goto label_18564c;
        case 0x185650u: goto label_185650;
        case 0x185654u: goto label_185654;
        case 0x185658u: goto label_185658;
        case 0x18565cu: goto label_18565c;
        case 0x185660u: goto label_185660;
        case 0x185664u: goto label_185664;
        case 0x185668u: goto label_185668;
        case 0x18566cu: goto label_18566c;
        case 0x185670u: goto label_185670;
        case 0x185674u: goto label_185674;
        case 0x185678u: goto label_185678;
        case 0x18567cu: goto label_18567c;
        case 0x185680u: goto label_185680;
        case 0x185684u: goto label_185684;
        case 0x185688u: goto label_185688;
        case 0x18568cu: goto label_18568c;
        case 0x185690u: goto label_185690;
        case 0x185694u: goto label_185694;
        case 0x185698u: goto label_185698;
        case 0x18569cu: goto label_18569c;
        case 0x1856a0u: goto label_1856a0;
        case 0x1856a4u: goto label_1856a4;
        case 0x1856a8u: goto label_1856a8;
        case 0x1856acu: goto label_1856ac;
        case 0x1856b0u: goto label_1856b0;
        case 0x1856b4u: goto label_1856b4;
        case 0x1856b8u: goto label_1856b8;
        case 0x1856bcu: goto label_1856bc;
        case 0x1856c0u: goto label_1856c0;
        case 0x1856c4u: goto label_1856c4;
        case 0x1856c8u: goto label_1856c8;
        case 0x1856ccu: goto label_1856cc;
        case 0x1856d0u: goto label_1856d0;
        case 0x1856d4u: goto label_1856d4;
        case 0x1856d8u: goto label_1856d8;
        case 0x1856dcu: goto label_1856dc;
        case 0x1856e0u: goto label_1856e0;
        case 0x1856e4u: goto label_1856e4;
        case 0x1856e8u: goto label_1856e8;
        case 0x1856ecu: goto label_1856ec;
        case 0x1856f0u: goto label_1856f0;
        case 0x1856f4u: goto label_1856f4;
        case 0x1856f8u: goto label_1856f8;
        case 0x1856fcu: goto label_1856fc;
        case 0x185700u: goto label_185700;
        case 0x185704u: goto label_185704;
        case 0x185708u: goto label_185708;
        case 0x18570cu: goto label_18570c;
        case 0x185710u: goto label_185710;
        case 0x185714u: goto label_185714;
        case 0x185718u: goto label_185718;
        case 0x18571cu: goto label_18571c;
        case 0x185720u: goto label_185720;
        case 0x185724u: goto label_185724;
        case 0x185728u: goto label_185728;
        case 0x18572cu: goto label_18572c;
        case 0x185730u: goto label_185730;
        case 0x185734u: goto label_185734;
        case 0x185738u: goto label_185738;
        case 0x18573cu: goto label_18573c;
        case 0x185740u: goto label_185740;
        case 0x185744u: goto label_185744;
        case 0x185748u: goto label_185748;
        case 0x18574cu: goto label_18574c;
        case 0x185750u: goto label_185750;
        case 0x185754u: goto label_185754;
        case 0x185758u: goto label_185758;
        case 0x18575cu: goto label_18575c;
        case 0x185760u: goto label_185760;
        case 0x185764u: goto label_185764;
        case 0x185768u: goto label_185768;
        case 0x18576cu: goto label_18576c;
        case 0x185770u: goto label_185770;
        case 0x185774u: goto label_185774;
        case 0x185778u: goto label_185778;
        case 0x18577cu: goto label_18577c;
        case 0x185780u: goto label_185780;
        case 0x185784u: goto label_185784;
        case 0x185788u: goto label_185788;
        case 0x18578cu: goto label_18578c;
        case 0x185790u: goto label_185790;
        case 0x185794u: goto label_185794;
        case 0x185798u: goto label_185798;
        case 0x18579cu: goto label_18579c;
        case 0x1857a0u: goto label_1857a0;
        case 0x1857a4u: goto label_1857a4;
        case 0x1857a8u: goto label_1857a8;
        case 0x1857acu: goto label_1857ac;
        case 0x1857b0u: goto label_1857b0;
        case 0x1857b4u: goto label_1857b4;
        case 0x1857b8u: goto label_1857b8;
        case 0x1857bcu: goto label_1857bc;
        case 0x1857c0u: goto label_1857c0;
        case 0x1857c4u: goto label_1857c4;
        case 0x1857c8u: goto label_1857c8;
        case 0x1857ccu: goto label_1857cc;
        case 0x1857d0u: goto label_1857d0;
        case 0x1857d4u: goto label_1857d4;
        case 0x1857d8u: goto label_1857d8;
        case 0x1857dcu: goto label_1857dc;
        case 0x1857e0u: goto label_1857e0;
        case 0x1857e4u: goto label_1857e4;
        case 0x1857e8u: goto label_1857e8;
        case 0x1857ecu: goto label_1857ec;
        case 0x1857f0u: goto label_1857f0;
        case 0x1857f4u: goto label_1857f4;
        case 0x1857f8u: goto label_1857f8;
        case 0x1857fcu: goto label_1857fc;
        case 0x185800u: goto label_185800;
        case 0x185804u: goto label_185804;
        case 0x185808u: goto label_185808;
        case 0x18580cu: goto label_18580c;
        case 0x185810u: goto label_185810;
        case 0x185814u: goto label_185814;
        case 0x185818u: goto label_185818;
        case 0x18581cu: goto label_18581c;
        case 0x185820u: goto label_185820;
        case 0x185824u: goto label_185824;
        case 0x185828u: goto label_185828;
        case 0x18582cu: goto label_18582c;
        case 0x185830u: goto label_185830;
        case 0x185834u: goto label_185834;
        case 0x185838u: goto label_185838;
        case 0x18583cu: goto label_18583c;
        case 0x185840u: goto label_185840;
        case 0x185844u: goto label_185844;
        case 0x185848u: goto label_185848;
        case 0x18584cu: goto label_18584c;
        case 0x185850u: goto label_185850;
        case 0x185854u: goto label_185854;
        case 0x185858u: goto label_185858;
        case 0x18585cu: goto label_18585c;
        case 0x185860u: goto label_185860;
        case 0x185864u: goto label_185864;
        case 0x185868u: goto label_185868;
        case 0x18586cu: goto label_18586c;
        case 0x185870u: goto label_185870;
        case 0x185874u: goto label_185874;
        case 0x185878u: goto label_185878;
        case 0x18587cu: goto label_18587c;
        case 0x185880u: goto label_185880;
        case 0x185884u: goto label_185884;
        case 0x185888u: goto label_185888;
        case 0x18588cu: goto label_18588c;
        case 0x185890u: goto label_185890;
        case 0x185894u: goto label_185894;
        case 0x185898u: goto label_185898;
        case 0x18589cu: goto label_18589c;
        case 0x1858a0u: goto label_1858a0;
        case 0x1858a4u: goto label_1858a4;
        case 0x1858a8u: goto label_1858a8;
        case 0x1858acu: goto label_1858ac;
        case 0x1858b0u: goto label_1858b0;
        case 0x1858b4u: goto label_1858b4;
        case 0x1858b8u: goto label_1858b8;
        case 0x1858bcu: goto label_1858bc;
        case 0x1858c0u: goto label_1858c0;
        case 0x1858c4u: goto label_1858c4;
        case 0x1858c8u: goto label_1858c8;
        case 0x1858ccu: goto label_1858cc;
        case 0x1858d0u: goto label_1858d0;
        case 0x1858d4u: goto label_1858d4;
        case 0x1858d8u: goto label_1858d8;
        case 0x1858dcu: goto label_1858dc;
        case 0x1858e0u: goto label_1858e0;
        case 0x1858e4u: goto label_1858e4;
        case 0x1858e8u: goto label_1858e8;
        case 0x1858ecu: goto label_1858ec;
        case 0x1858f0u: goto label_1858f0;
        case 0x1858f4u: goto label_1858f4;
        case 0x1858f8u: goto label_1858f8;
        case 0x1858fcu: goto label_1858fc;
        case 0x185900u: goto label_185900;
        case 0x185904u: goto label_185904;
        case 0x185908u: goto label_185908;
        case 0x18590cu: goto label_18590c;
        case 0x185910u: goto label_185910;
        case 0x185914u: goto label_185914;
        case 0x185918u: goto label_185918;
        case 0x18591cu: goto label_18591c;
        case 0x185920u: goto label_185920;
        case 0x185924u: goto label_185924;
        case 0x185928u: goto label_185928;
        case 0x18592cu: goto label_18592c;
        case 0x185930u: goto label_185930;
        case 0x185934u: goto label_185934;
        case 0x185938u: goto label_185938;
        case 0x18593cu: goto label_18593c;
        case 0x185940u: goto label_185940;
        case 0x185944u: goto label_185944;
        case 0x185948u: goto label_185948;
        case 0x18594cu: goto label_18594c;
        case 0x185950u: goto label_185950;
        case 0x185954u: goto label_185954;
        case 0x185958u: goto label_185958;
        case 0x18595cu: goto label_18595c;
        case 0x185960u: goto label_185960;
        case 0x185964u: goto label_185964;
        case 0x185968u: goto label_185968;
        case 0x18596cu: goto label_18596c;
        case 0x185970u: goto label_185970;
        case 0x185974u: goto label_185974;
        case 0x185978u: goto label_185978;
        case 0x18597cu: goto label_18597c;
        case 0x185980u: goto label_185980;
        case 0x185984u: goto label_185984;
        case 0x185988u: goto label_185988;
        case 0x18598cu: goto label_18598c;
        default: break;
    }

    ctx->pc = 0x1852d8u;

label_1852d8:
    // 0x1852d8: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1852d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_1852dc:
    // 0x1852dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1852dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1852e0:
    // 0x1852e0: 0x7fbe0110  sq          $fp, 0x110($sp)
    ctx->pc = 0x1852e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 30));
label_1852e4:
    // 0x1852e4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1852e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1852e8:
    // 0x1852e8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1852e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1852ec:
    // 0x1852ec: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x1852ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_1852f0:
    // 0x1852f0: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x1852f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_1852f4:
    // 0x1852f4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1852f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1852f8:
    // 0x1852f8: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x1852f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_1852fc:
    // 0x1852fc: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1852fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_185300:
    // 0x185300: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x185300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_185304:
    // 0x185304: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x185304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_185308:
    // 0x185308: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x185308u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_18530c:
    // 0x18530c: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x18530cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_185310:
    // 0x185310: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x185310u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185314:
    // 0x185314: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x185314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
label_185318:
    // 0x185318: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x185318u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
label_18531c:
    // 0x18531c: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x18531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
label_185320:
    // 0x185320: 0x3c150055  lui         $s5, 0x55
    ctx->pc = 0x185320u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)85 << 16));
label_185324:
    // 0x185324: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x185324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
label_185328:
    // 0x185328: 0x26942c38  addiu       $s4, $s4, 0x2C38
    ctx->pc = 0x185328u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 11320));
label_18532c:
    // 0x18532c: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x18532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_185330:
    // 0x185330: 0x26b52c08  addiu       $s5, $s5, 0x2C08
    ctx->pc = 0x185330u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 11272));
label_185334:
    // 0x185334: 0x8c45b9c0  lw          $a1, -0x4640($v0)
    ctx->pc = 0x185334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_185338:
    // 0x185338: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x185338u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18533c:
    // 0x18533c: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x18533cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_185340:
    // 0x185340: 0x27d00010  addiu       $s0, $fp, 0x10
    ctx->pc = 0x185340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_185344:
    // 0x185344: 0x27d10020  addiu       $s1, $fp, 0x20
    ctx->pc = 0x185344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_185348:
    // 0x185348: 0x27d20030  addiu       $s2, $fp, 0x30
    ctx->pc = 0x185348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
label_18534c:
    // 0x18534c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_185350:
    // 0x185350: 0x27d30040  addiu       $s3, $fp, 0x40
    ctx->pc = 0x185350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
label_185354:
    // 0x185354: 0x27d70050  addiu       $s7, $fp, 0x50
    ctx->pc = 0x185354u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
label_185358:
    // 0x185358: 0x27d60060  addiu       $s6, $fp, 0x60
    ctx->pc = 0x185358u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
label_18535c:
    // 0x18535c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x18535cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_185360:
    // 0x185360: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x185360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_185364:
    // 0x185364: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x185364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_185368:
    // 0x185368: 0x40f809  jalr        $v0
label_18536c:
    if (ctx->pc == 0x18536Cu) {
        ctx->pc = 0x18536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185368u;
        // 0x18536c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185370u;
        goto label_185370;
    }
    ctx->pc = 0x185368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185370u);
        ctx->pc = 0x18536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185368u;
        // 0x18536c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185368u, 0x185370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185370u;
label_185370:
    // 0x185370: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x185370u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_185374:
    // 0x185374: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x185374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_185378:
    // 0x185378: 0xa3c0000c  sb          $zero, 0xC($fp)
    ctx->pc = 0x185378u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 12), (uint8_t)GPR_U32(ctx, 0));
label_18537c:
    // 0x18537c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x18537cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_185380:
    // 0x185380: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x185380u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_185384:
    // 0x185384: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x185384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_185388:
    // 0x185388: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x185388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_18538c:
    // 0x18538c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x18538cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_185390:
    // 0x185390: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x185390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_185394:
    // 0x185394: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x185394u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_185398:
    // 0x185398: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x185398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_18539c:
    // 0x18539c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x18539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1853a0:
    // 0x1853a0: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1853a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1853a4:
    // 0x1853a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1853a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1853a8:
    // 0x1853a8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1853a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1853ac:
    // 0x1853ac: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x1853acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1853b0:
    // 0x1853b0: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x1853b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_1853b4:
    // 0x1853b4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x1853b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1853b8:
    // 0x1853b8: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1853b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_1853bc:
    // 0x1853bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1853bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1853c0:
    // 0x1853c0: 0x8c8cb9c0  lw          $t4, -0x4640($a0)
    ctx->pc = 0x1853c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949312)));
label_1853c4:
    // 0x1853c4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1853c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1853c8:
    // 0x1853c8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1853c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1853cc:
    // 0x1853cc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1853ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1853d0:
    // 0x1853d0: 0x40f809  jalr        $v0
label_1853d4:
    if (ctx->pc == 0x1853D4u) {
        ctx->pc = 0x1853D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1853D0u;
        // 0x1853d4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1853D8u;
        goto label_1853d8;
    }
    ctx->pc = 0x1853D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1853D8u);
        ctx->pc = 0x1853D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1853D0u;
        // 0x1853d4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1853D0u, 0x1853D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1853D8u;
label_1853d8:
    // 0x1853d8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1853d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1853dc:
    // 0x1853dc: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1853dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1853e0:
    // 0x1853e0: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x1853e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
label_1853e4:
    // 0x1853e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1853e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1853e8:
    // 0x1853e8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1853e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1853ec:
    // 0x1853ec: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1853ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1853f0:
    // 0x1853f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1853f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1853f4:
    // 0x1853f4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1853f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1853f8:
    // 0x1853f8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1853f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1853fc:
    // 0x1853fc: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x1853fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_185400:
    // 0x185400: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x185400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_185404:
    // 0x185404: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x185404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_185408:
    // 0x185408: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x185408u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18540c:
    // 0x18540c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x18540cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_185410:
    // 0x185410: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x185410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_185414:
    // 0x185414: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x185414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_185418:
    // 0x185418: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x185418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_18541c:
    // 0x18541c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x18541cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_185420:
    // 0x185420: 0xac63000c  sw          $v1, 0xC($v1)
    ctx->pc = 0x185420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 3));
label_185424:
    // 0x185424: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x185424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_185428:
    // 0x185428: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x185428u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_18542c:
    // 0x18542c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x18542cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_185430:
    // 0x185430: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x185430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_185434:
    // 0x185434: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x185434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_185438:
    // 0x185438: 0x40f809  jalr        $v0
label_18543c:
    if (ctx->pc == 0x18543Cu) {
        ctx->pc = 0x18543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185438u;
        // 0x18543c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185440u;
        goto label_185440;
    }
    ctx->pc = 0x185438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185440u);
        ctx->pc = 0x18543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185438u;
        // 0x18543c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185438u, 0x185440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185440u;
label_185440:
    // 0x185440: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x185440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_185444:
    // 0x185444: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x185444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_185448:
    // 0x185448: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x185448u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_18544c:
    // 0x18544c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x18544cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_185450:
    // 0x185450: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x185450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_185454:
    // 0x185454: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x185454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_185458:
    // 0x185458: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x185458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_18545c:
    // 0x18545c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x18545cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_185460:
    // 0x185460: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x185460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_185464:
    // 0x185464: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x185464u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_185468:
    // 0x185468: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x185468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_18546c:
    // 0x18546c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x18546cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_185470:
    // 0x185470: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x185470u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_185474:
    // 0x185474: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x185474u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185478:
    // 0x185478: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x185478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_18547c:
    // 0x18547c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x18547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_185480:
    // 0x185480: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x185480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_185484:
    // 0x185484: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x185484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_185488:
    // 0x185488: 0xac63000c  sw          $v1, 0xC($v1)
    ctx->pc = 0x185488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 3));
label_18548c:
    // 0x18548c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x18548cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_185490:
    // 0x185490: 0x8c8cb9c0  lw          $t4, -0x4640($a0)
    ctx->pc = 0x185490u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949312)));
label_185494:
    // 0x185494: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x185494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_185498:
    // 0x185498: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x185498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_18549c:
    // 0x18549c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x18549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1854a0:
    // 0x1854a0: 0x40f809  jalr        $v0
label_1854a4:
    if (ctx->pc == 0x1854A4u) {
        ctx->pc = 0x1854A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1854A0u;
        // 0x1854a4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1854A8u;
        goto label_1854a8;
    }
    ctx->pc = 0x1854A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1854A8u);
        ctx->pc = 0x1854A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1854A0u;
        // 0x1854a4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1854A0u, 0x1854A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1854A8u;
label_1854a8:
    // 0x1854a8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1854a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1854ac:
    // 0x1854ac: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1854acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1854b0:
    // 0x1854b0: 0xa240000c  sb          $zero, 0xC($s2)
    ctx->pc = 0x1854b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 0));
label_1854b4:
    // 0x1854b4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1854b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1854b8:
    // 0x1854b8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1854b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_1854bc:
    // 0x1854bc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1854bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1854c0:
    // 0x1854c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1854c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1854c4:
    // 0x1854c4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1854c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1854c8:
    // 0x1854c8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1854c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1854cc:
    // 0x1854cc: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x1854ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_1854d0:
    // 0x1854d0: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1854d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1854d4:
    // 0x1854d4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1854d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1854d8:
    // 0x1854d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1854d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1854dc:
    // 0x1854dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1854dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1854e0:
    // 0x1854e0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1854e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1854e4:
    // 0x1854e4: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1854e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1854e8:
    // 0x1854e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1854e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1854ec:
    // 0x1854ec: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1854ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1854f0:
    // 0x1854f0: 0xac63000c  sw          $v1, 0xC($v1)
    ctx->pc = 0x1854f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 3));
label_1854f4:
    // 0x1854f4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1854f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1854f8:
    // 0x1854f8: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x1854f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1854fc:
    // 0x1854fc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1854fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_185500:
    // 0x185500: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x185500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_185504:
    // 0x185504: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x185504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_185508:
    // 0x185508: 0x40f809  jalr        $v0
label_18550c:
    if (ctx->pc == 0x18550Cu) {
        ctx->pc = 0x18550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185508u;
        // 0x18550c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185510u;
        goto label_185510;
    }
    ctx->pc = 0x185508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185510u);
        ctx->pc = 0x18550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185508u;
        // 0x18550c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185508u, 0x185510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185510u;
label_185510:
    // 0x185510: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x185510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_185514:
    // 0x185514: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x185514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_185518:
    // 0x185518: 0xa260000c  sb          $zero, 0xC($s3)
    ctx->pc = 0x185518u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 0));
label_18551c:
    // 0x18551c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x18551cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_185520:
    // 0x185520: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x185520u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_185524:
    // 0x185524: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x185524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_185528:
    // 0x185528: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x185528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_18552c:
    // 0x18552c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x18552cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_185530:
    // 0x185530: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x185530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_185534:
    // 0x185534: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x185534u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_185538:
    // 0x185538: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x185538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_18553c:
    // 0x18553c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x18553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_185540:
    // 0x185540: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x185540u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_185544:
    // 0x185544: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x185544u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185548:
    // 0x185548: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x185548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_18554c:
    // 0x18554c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x18554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_185550:
    // 0x185550: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x185550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_185554:
    // 0x185554: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x185554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_185558:
    // 0x185558: 0xac63000c  sw          $v1, 0xC($v1)
    ctx->pc = 0x185558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 3));
label_18555c:
    // 0x18555c: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x18555cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_185560:
    // 0x185560: 0x8c8cb9c0  lw          $t4, -0x4640($a0)
    ctx->pc = 0x185560u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949312)));
label_185564:
    // 0x185564: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x185564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_185568:
    // 0x185568: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x185568u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_18556c:
    // 0x18556c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x18556cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_185570:
    // 0x185570: 0x40f809  jalr        $v0
label_185574:
    if (ctx->pc == 0x185574u) {
        ctx->pc = 0x185574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185570u;
        // 0x185574: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185578u;
        goto label_185578;
    }
    ctx->pc = 0x185570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185578u);
        ctx->pc = 0x185574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185570u;
        // 0x185574: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185570u, 0x185578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185578u;
label_185578:
    // 0x185578: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x185578u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
label_18557c:
    // 0x18557c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18557cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_185580:
    // 0x185580: 0xa2e0000c  sb          $zero, 0xC($s7)
    ctx->pc = 0x185580u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 12), (uint8_t)GPR_U32(ctx, 0));
label_185584:
    // 0x185584: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x185584u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_185588:
    // 0x185588: 0xaee00008  sw          $zero, 0x8($s7)
    ctx->pc = 0x185588u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 0));
label_18558c:
    // 0x18558c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x18558cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_185590:
    // 0x185590: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x185590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_185594:
    // 0x185594: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x185594u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_185598:
    // 0x185598: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x185598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_18559c:
    // 0x18559c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x18559cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1855a0:
    // 0x1855a0: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1855a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1855a4:
    // 0x1855a4: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x1855a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1855a8:
    // 0x1855a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1855a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1855ac:
    // 0x1855ac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1855acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1855b0:
    // 0x1855b0: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x1855b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1855b4:
    // 0x1855b4: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1855b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1855b8:
    // 0x1855b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1855b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1855bc:
    // 0x1855bc: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x1855bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1855c0:
    // 0x1855c0: 0xac63000c  sw          $v1, 0xC($v1)
    ctx->pc = 0x1855c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 3));
label_1855c4:
    // 0x1855c4: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x1855c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
label_1855c8:
    // 0x1855c8: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x1855c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1855cc:
    // 0x1855cc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1855ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1855d0:
    // 0x1855d0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1855d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1855d4:
    // 0x1855d4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1855d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1855d8:
    // 0x1855d8: 0x40f809  jalr        $v0
label_1855dc:
    if (ctx->pc == 0x1855DCu) {
        ctx->pc = 0x1855DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855D8u;
        // 0x1855dc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1855E0u;
        goto label_1855e0;
    }
    ctx->pc = 0x1855D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1855E0u);
        ctx->pc = 0x1855DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855D8u;
        // 0x1855dc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1855D8u, 0x1855E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1855E0u;
label_1855e0:
    // 0x1855e0: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x1855e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_1855e4:
    // 0x1855e4: 0x27b400e0  addiu       $s4, $sp, 0xE0
    ctx->pc = 0x1855e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1855e8:
    // 0x1855e8: 0xaec00008  sw          $zero, 0x8($s6)
    ctx->pc = 0x1855e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
label_1855ec:
    // 0x1855ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1855ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1855f0:
    // 0x1855f0: 0xa2c0000c  sb          $zero, 0xC($s6)
    ctx->pc = 0x1855f0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 12), (uint8_t)GPR_U32(ctx, 0));
label_1855f4:
    // 0x1855f4: 0x27c401b8  addiu       $a0, $fp, 0x1B8
    ctx->pc = 0x1855f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 440));
label_1855f8:
    // 0x1855f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1855f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1855fc:
    // 0x1855fc: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1855fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_185600:
    // 0x185600: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x185600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_185604:
    // 0x185604: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x185604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_185608:
    // 0x185608: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x185608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_18560c:
    // 0x18560c: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x18560cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_185610:
    // 0x185610: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x185610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_185614:
    // 0x185614: 0xac63000c  sw          $v1, 0xC($v1)
    ctx->pc = 0x185614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 3));
label_185618:
    // 0x185618: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x185618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_18561c:
    // 0x18561c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x18561cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_185620:
    // 0x185620: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x185620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_185624:
    // 0x185624: 0x0  nop
    ctx->pc = 0x185624u;
    // NOP
label_185628:
    // 0x185628: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
label_18562c:
    if (ctx->pc == 0x18562Cu) {
        ctx->pc = 0x18562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185628u;
        // 0x18562c: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185630u;
        goto label_185630;
    }
    ctx->pc = 0x185628u;
    {
        const bool branch_taken_0x185628 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x18562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185628u;
        // 0x18562c: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185628) {
            ctx->pc = 0x185618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185618;
        }
    }
    ctx->pc = 0x185630u;
label_185630:
    // 0x185630: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x185630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_185634:
    // 0x185634: 0x27c30c18  addiu       $v1, $fp, 0xC18
    ctx->pc = 0x185634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3096));
label_185638:
    // 0x185638: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x185638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_18563c:
    // 0x18563c: 0x27c60c24  addiu       $a2, $fp, 0xC24
    ctx->pc = 0x18563cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 3108));
label_185640:
    // 0x185640: 0xafc20c10  sw          $v0, 0xC10($fp)
    ctx->pc = 0x185640u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3088), GPR_U32(ctx, 2));
label_185644:
    // 0x185644: 0x27c70c34  addiu       $a3, $fp, 0xC34
    ctx->pc = 0x185644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 3124));
label_185648:
    // 0x185648: 0xafc20bc0  sw          $v0, 0xBC0($fp)
    ctx->pc = 0x185648u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3008), GPR_U32(ctx, 2));
label_18564c:
    // 0x18564c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x18564cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_185650:
    // 0x185650: 0xafc20bc4  sw          $v0, 0xBC4($fp)
    ctx->pc = 0x185650u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3012), GPR_U32(ctx, 2));
label_185654:
    // 0x185654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185658:
    // 0x185658: 0xafc20bd0  sw          $v0, 0xBD0($fp)
    ctx->pc = 0x185658u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3024), GPR_U32(ctx, 2));
label_18565c:
    // 0x18565c: 0x27d00c64  addiu       $s0, $fp, 0xC64
    ctx->pc = 0x18565cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 3172));
label_185660:
    // 0x185660: 0xafc20bd4  sw          $v0, 0xBD4($fp)
    ctx->pc = 0x185660u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3028), GPR_U32(ctx, 2));
label_185664:
    // 0x185664: 0x27d1189c  addiu       $s1, $fp, 0x189C
    ctx->pc = 0x185664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 6300));
label_185668:
    // 0x185668: 0xafc20bf0  sw          $v0, 0xBF0($fp)
    ctx->pc = 0x185668u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3056), GPR_U32(ctx, 2));
label_18566c:
    // 0x18566c: 0x241200fe  addiu       $s2, $zero, 0xFE
    ctx->pc = 0x18566cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_185670:
    // 0x185670: 0xafc20bf4  sw          $v0, 0xBF4($fp)
    ctx->pc = 0x185670u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3060), GPR_U32(ctx, 2));
label_185674:
    // 0x185674: 0x27d5149c  addiu       $s5, $fp, 0x149C
    ctx->pc = 0x185674u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 5276));
label_185678:
    // 0x185678: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x185678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_18567c:
    // 0x18567c: 0x27d700b4  addiu       $s7, $fp, 0xB4
    ctx->pc = 0x18567cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 180));
label_185680:
    // 0x185680: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x185680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_185684:
    // 0x185684: 0x27d600b8  addiu       $s6, $fp, 0xB8
    ctx->pc = 0x185684u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 184));
label_185688:
    // 0x185688: 0xafc00c24  sw          $zero, 0xC24($fp)
    ctx->pc = 0x185688u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3108), GPR_U32(ctx, 0));
label_18568c:
    // 0x18568c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x18568cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_185690:
    // 0x185690: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x185690u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_185694:
    // 0x185694: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x185694u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_185698:
    // 0x185698: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x185698u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_18569c:
    // 0x18569c: 0xafc00c34  sw          $zero, 0xC34($fp)
    ctx->pc = 0x18569cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3124), GPR_U32(ctx, 0));
label_1856a0:
    // 0x1856a0: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1856a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_1856a4:
    // 0x1856a4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1856a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_1856a8:
    // 0x1856a8: 0xc137f04  jal         func_4DFC10
label_1856ac:
    if (ctx->pc == 0x1856ACu) {
        ctx->pc = 0x1856ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856A8u;
        // 0x1856ac: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1856B0u;
        goto label_1856b0;
    }
    ctx->pc = 0x1856A8u;
    SET_GPR_U32(ctx, 31, 0x1856B0u);
    ctx->pc = 0x1856ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1856A8u;
    // 0x1856ac: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DFC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DFC10u, 0x1856A8u, 0x1856B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1856B0u;
label_1856b0:
    // 0x1856b0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1856b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1856b4:
    // 0x1856b4: 0x27c20c44  addiu       $v0, $fp, 0xC44
    ctx->pc = 0x1856b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 3140));
label_1856b8:
    // 0x1856b8: 0x24852c08  addiu       $a1, $a0, 0x2C08
    ctx->pc = 0x1856b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 11272));
label_1856bc:
    // 0x1856bc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1856bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1856c0:
    // 0x1856c0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1856c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1856c4:
    // 0x1856c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1856c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1856c8:
    // 0x1856c8: 0x24882c10  addiu       $t0, $a0, 0x2C10
    ctx->pc = 0x1856c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 11280));
label_1856cc:
    // 0x1856cc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1856ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1856d0:
    // 0x1856d0: 0x27c30c54  addiu       $v1, $fp, 0xC54
    ctx->pc = 0x1856d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3156));
label_1856d4:
    // 0x1856d4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1856d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1856d8:
    // 0x1856d8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1856d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1856dc:
    // 0x1856dc: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1856dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1856e0:
    // 0x1856e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1856e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1856e4:
    // 0x1856e4: 0x244a2c38  addiu       $t2, $v0, 0x2C38
    ctx->pc = 0x1856e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 11320));
label_1856e8:
    // 0x1856e8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1856e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1856ec:
    // 0x1856ec: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1856ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1856f0:
    // 0x1856f0: 0x8c8cb9c0  lw          $t4, -0x4640($a0)
    ctx->pc = 0x1856f0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949312)));
label_1856f4:
    // 0x1856f4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1856f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1856f8:
    // 0x1856f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1856f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1856fc:
    // 0x1856fc: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1856fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_185700:
    // 0x185700: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x185700u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185704:
    // 0x185704: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x185704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_185708:
    // 0x185708: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x185708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_18570c:
    // 0x18570c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x18570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_185710:
    // 0x185710: 0x40f809  jalr        $v0
label_185714:
    if (ctx->pc == 0x185714u) {
        ctx->pc = 0x185714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185710u;
        // 0x185714: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185718u;
        goto label_185718;
    }
    ctx->pc = 0x185710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185718u);
        ctx->pc = 0x185714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185710u;
        // 0x185714: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185710u, 0x185718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185718u;
label_185718:
    // 0x185718: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x185718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_18571c:
    // 0x18571c: 0x27c40c74  addiu       $a0, $fp, 0xC74
    ctx->pc = 0x18571cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 3188));
label_185720:
    // 0x185720: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x185720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_185724:
    // 0x185724: 0x27c50c84  addiu       $a1, $fp, 0xC84
    ctx->pc = 0x185724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 3204));
label_185728:
    // 0x185728: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x185728u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
label_18572c:
    // 0x18572c: 0x27c60c94  addiu       $a2, $fp, 0xC94
    ctx->pc = 0x18572cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 3220));
label_185730:
    // 0x185730: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x185730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_185734:
    // 0x185734: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x185734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_185738:
    // 0x185738: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x185738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_18573c:
    // 0x18573c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_185740:
    // 0x185740: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x185740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_185744:
    // 0x185744: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x185744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_185748:
    // 0x185748: 0xac63000c  sw          $v1, 0xC($v1)
    ctx->pc = 0x185748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 3));
label_18574c:
    // 0x18574c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x18574cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_185750:
    // 0x185750: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x185750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_185754:
    // 0x185754: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x185754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_185758:
    // 0x185758: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x185758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_18575c:
    // 0x18575c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x18575cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_185760:
    // 0x185760: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x185760u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_185764:
    // 0x185764: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x185764u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_185768:
    // 0x185768: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x185768u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_18576c:
    // 0x18576c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x18576cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_185770:
    // 0x185770: 0xafc01898  sw          $zero, 0x1898($fp)
    ctx->pc = 0x185770u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6296), GPR_U32(ctx, 0));
label_185774:
    // 0x185774: 0x0  nop
    ctx->pc = 0x185774u;
    // NOP
label_185778:
    // 0x185778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18577c:
    // 0x18577c: 0xc065b46  jal         func_196D18
label_185780:
    if (ctx->pc == 0x185780u) {
        ctx->pc = 0x185780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18577Cu;
        // 0x185780: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185784u;
        goto label_185784;
    }
    ctx->pc = 0x18577Cu;
    SET_GPR_U32(ctx, 31, 0x185784u);
    ctx->pc = 0x185780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18577Cu;
    // 0x185780: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196D18u, 0x18577Cu, 0x185784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185784u;
label_185784:
    // 0x185784: 0x0  nop
    ctx->pc = 0x185784u;
    // NOP
label_185788:
    // 0x185788: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
label_18578c:
    if (ctx->pc == 0x18578Cu) {
        ctx->pc = 0x18578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185788u;
        // 0x18578c: 0x26310078  addiu       $s1, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185790u;
        goto label_185790;
    }
    ctx->pc = 0x185788u;
    {
        const bool branch_taken_0x185788 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x18578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185788u;
        // 0x18578c: 0x26310078  addiu       $s1, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185788) {
            ctx->pc = 0x185778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185778;
        }
    }
    ctx->pc = 0x185790u;
label_185790:
    // 0x185790: 0x34029024  ori         $v0, $zero, 0x9024
    ctx->pc = 0x185790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36900);
label_185794:
    // 0x185794: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x185794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_185798:
    // 0x185798: 0x3c29021  addu        $s2, $fp, $v0
    ctx->pc = 0x185798u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_18579c:
    // 0x18579c: 0x3c110055  lui         $s1, 0x55
    ctx->pc = 0x18579cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
label_1857a0:
    // 0x1857a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1857a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1857a4:
    // 0x1857a4: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1857a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_1857a8:
    // 0x1857a8: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1857a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1857ac:
    // 0x1857ac: 0x26312c48  addiu       $s1, $s1, 0x2C48
    ctx->pc = 0x1857acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11336));
label_1857b0:
    // 0x1857b0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1857b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_1857b4:
    // 0x1857b4: 0x26102c50  addiu       $s0, $s0, 0x2C50
    ctx->pc = 0x1857b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11344));
label_1857b8:
    // 0x1857b8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1857b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1857bc:
    // 0x1857bc: 0x24060208  addiu       $a2, $zero, 0x208
    ctx->pc = 0x1857bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
label_1857c0:
    // 0x1857c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1857c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1857c4:
    // 0x1857c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1857c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1857c8:
    // 0x1857c8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1857c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1857cc:
    // 0x1857cc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1857ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1857d0:
    // 0x1857d0: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x1857d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1857d4:
    // 0x1857d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1857d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1857d8:
    // 0x1857d8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1857d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1857dc:
    // 0x1857dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1857dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1857e0:
    // 0x1857e0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1857e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1857e4:
    // 0x1857e4: 0x40f809  jalr        $v0
label_1857e8:
    if (ctx->pc == 0x1857E8u) {
        ctx->pc = 0x1857E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857E4u;
        // 0x1857e8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1857ECu;
        goto label_1857ec;
    }
    ctx->pc = 0x1857E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1857ECu);
        ctx->pc = 0x1857E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857E4u;
        // 0x1857e8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1857E4u, 0x1857ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1857ECu;
label_1857ec:
    // 0x1857ec: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1857ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1857f0:
    // 0x1857f0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1857f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1857f4:
    // 0x1857f4: 0x8c8c27e4  lw          $t4, 0x27E4($a0)
    ctx->pc = 0x1857f4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_1857f8:
    // 0x1857f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1857f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1857fc:
    // 0x1857fc: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1857fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_185800:
    // 0x185800: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x185800u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_185804:
    // 0x185804: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x185804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_185808:
    // 0x185808: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x185808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18580c:
    // 0x18580c: 0x24090021  addiu       $t1, $zero, 0x21
    ctx->pc = 0x18580cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_185810:
    // 0x185810: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x185810u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_185814:
    // 0x185814: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x185814u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_185818:
    // 0x185818: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185818u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18581c:
    // 0x18581c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x18581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_185820:
    // 0x185820: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x185820u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185824:
    // 0x185824: 0x40f809  jalr        $v0
label_185828:
    if (ctx->pc == 0x185828u) {
        ctx->pc = 0x185828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185824u;
        // 0x185828: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18582Cu;
        goto label_18582c;
    }
    ctx->pc = 0x185824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18582Cu);
        ctx->pc = 0x185828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185824u;
        // 0x185828: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185824u, 0x18582Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18582Cu;
label_18582c:
    // 0x18582c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x18582cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_185830:
    // 0x185830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185834:
    // 0x185834: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_185838:
    if (ctx->pc == 0x185838u) {
        ctx->pc = 0x185838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185834u;
        // 0x185838: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18583Cu;
        goto label_18583c;
    }
    ctx->pc = 0x185834u;
    {
        const bool branch_taken_0x185834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185834u;
        // 0x185838: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185834) {
            ctx->pc = 0x185870u;
            goto label_185870;
        }
    }
    ctx->pc = 0x18583Cu;
label_18583c:
    // 0x18583c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18583cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185840:
    // 0x185840: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x185840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_185844:
    // 0x185844: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x185844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_185848:
    // 0x185848: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x185848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_18584c:
    // 0x18584c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18584cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_185850:
    // 0x185850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x185850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_185854:
    // 0x185854: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x185854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_185858:
    // 0x185858: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x185858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_18585c:
    // 0x18585c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x18585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_185860:
    // 0x185860: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x185860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_185864:
    // 0x185864: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_185868:
    if (ctx->pc == 0x185868u) {
        ctx->pc = 0x185868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185864u;
        // 0x185868: 0x24c60034  addiu       $a2, $a2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18586Cu;
        goto label_18586c;
    }
    ctx->pc = 0x185864u;
    {
        const bool branch_taken_0x185864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185864u;
        // 0x185868: 0x24c60034  addiu       $a2, $a2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185864) {
            ctx->pc = 0x185840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185840;
        }
    }
    ctx->pc = 0x18586Cu;
label_18586c:
    // 0x18586c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18586cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185870:
    // 0x185870: 0x240603fc  addiu       $a2, $zero, 0x3FC
    ctx->pc = 0x185870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
label_185874:
    // 0x185874: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x185874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_185878:
    // 0x185878: 0xc10c1fa  jal         func_4307E8
label_18587c:
    if (ctx->pc == 0x18587Cu) {
        ctx->pc = 0x18587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185878u;
        // 0x18587c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185880u;
        goto label_185880;
    }
    ctx->pc = 0x185878u;
    SET_GPR_U32(ctx, 31, 0x185880u);
    ctx->pc = 0x18587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185878u;
    // 0x18587c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x185878u, 0x185880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185880u;
label_185880:
    // 0x185880: 0x3c01c61c  lui         $at, 0xC61C
    ctx->pc = 0x185880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50716 << 16));
label_185884:
    // 0x185884: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x185884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_185888:
    // 0x185888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x185888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18588c:
    // 0x18588c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18588cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_185890:
    // 0x185890: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x185890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_185894:
    // 0x185894: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x185894u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_185898:
    // 0x185898: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x185898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18589c:
    // 0x18589c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x18589cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1858a0:
    // 0x1858a0: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x1858a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1858a4:
    // 0x1858a4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1858a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1858a8:
    // 0x1858a8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1858a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1858ac:
    // 0x1858ac: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x1858acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1858b0:
    // 0x1858b0: 0xc11c41e  jal         func_471078
label_1858b4:
    if (ctx->pc == 0x1858B4u) {
        ctx->pc = 0x1858B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858B0u;
        // 0x1858b4: 0xe7a100e4  swc1        $f1, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858B8u;
        goto label_1858b8;
    }
    ctx->pc = 0x1858B0u;
    SET_GPR_U32(ctx, 31, 0x1858B8u);
    ctx->pc = 0x1858B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858B0u;
    // 0x1858b4: 0xe7a100e4  swc1        $f1, 0xE4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x471078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471078u, 0x1858B0u, 0x1858B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858B8u;
label_1858b8:
    // 0x1858b8: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x1858b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1858bc:
    // 0x1858bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1858bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1858c0:
    // 0x1858c0: 0x3d08021  addu        $s0, $fp, $s0
    ctx->pc = 0x1858c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
label_1858c4:
    // 0x1858c4: 0xae021038  sw          $v0, 0x1038($s0)
    ctx->pc = 0x1858c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4152), GPR_U32(ctx, 2));
label_1858c8:
    // 0x1858c8: 0xc11c41e  jal         func_471078
label_1858cc:
    if (ctx->pc == 0x1858CCu) {
        ctx->pc = 0x1858CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858C8u;
        // 0x1858cc: 0xac51000c  sw          $s1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858D0u;
        goto label_1858d0;
    }
    ctx->pc = 0x1858C8u;
    SET_GPR_U32(ctx, 31, 0x1858D0u);
    ctx->pc = 0x1858CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858C8u;
    // 0x1858cc: 0xac51000c  sw          $s1, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471078u, 0x1858C8u, 0x1858D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858D0u;
label_1858d0:
    // 0x1858d0: 0xae021034  sw          $v0, 0x1034($s0)
    ctx->pc = 0x1858d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4148), GPR_U32(ctx, 2));
label_1858d4:
    // 0x1858d4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1858d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1858d8:
    // 0x1858d8: 0xc06258a  jal         func_189628
label_1858dc:
    if (ctx->pc == 0x1858DCu) {
        ctx->pc = 0x1858DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858D8u;
        // 0x1858dc: 0xac51000c  sw          $s1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858E0u;
        goto label_1858e0;
    }
    ctx->pc = 0x1858D8u;
    SET_GPR_U32(ctx, 31, 0x1858E0u);
    ctx->pc = 0x1858DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858D8u;
    // 0x1858dc: 0xac51000c  sw          $s1, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189628u, 0x1858D8u, 0x1858E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858E0u;
label_1858e0:
    // 0x1858e0: 0xc0625b0  jal         func_1896C0
label_1858e4:
    if (ctx->pc == 0x1858E4u) {
        ctx->pc = 0x1858E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858E0u;
        // 0x1858e4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858E8u;
        goto label_1858e8;
    }
    ctx->pc = 0x1858E0u;
    SET_GPR_U32(ctx, 31, 0x1858E8u);
    ctx->pc = 0x1858E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858E0u;
    // 0x1858e4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1896C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1896C0u, 0x1858E0u, 0x1858E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858E8u;
label_1858e8:
    // 0x1858e8: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x1858e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_1858ec:
    // 0x1858ec: 0xae001048  sw          $zero, 0x1048($s0)
    ctx->pc = 0x1858ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4168), GPR_U32(ctx, 0));
label_1858f0:
    // 0x1858f0: 0xae02103c  sw          $v0, 0x103C($s0)
    ctx->pc = 0x1858f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4156), GPR_U32(ctx, 2));
label_1858f4:
    // 0x1858f4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1858f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1858f8:
    // 0x1858f8: 0xafc00080  sw          $zero, 0x80($fp)
    ctx->pc = 0x1858f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 128), GPR_U32(ctx, 0));
label_1858fc:
    // 0x1858fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1858fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_185900:
    // 0x185900: 0xafc00084  sw          $zero, 0x84($fp)
    ctx->pc = 0x185900u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 0));
label_185904:
    // 0x185904: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x185904u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_185908:
    // 0x185908: 0xafc00088  sw          $zero, 0x88($fp)
    ctx->pc = 0x185908u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 136), GPR_U32(ctx, 0));
label_18590c:
    // 0x18590c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18590cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185910:
    // 0x185910: 0xafc0008c  sw          $zero, 0x8C($fp)
    ctx->pc = 0x185910u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 140), GPR_U32(ctx, 0));
label_185914:
    // 0x185914: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x185914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_185918:
    // 0x185918: 0xafc00090  sw          $zero, 0x90($fp)
    ctx->pc = 0x185918u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 144), GPR_U32(ctx, 0));
label_18591c:
    // 0x18591c: 0xafc00094  sw          $zero, 0x94($fp)
    ctx->pc = 0x18591cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 148), GPR_U32(ctx, 0));
label_185920:
    // 0x185920: 0xafc00098  sw          $zero, 0x98($fp)
    ctx->pc = 0x185920u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 152), GPR_U32(ctx, 0));
label_185924:
    // 0x185924: 0xafc000a0  sw          $zero, 0xA0($fp)
    ctx->pc = 0x185924u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 160), GPR_U32(ctx, 0));
label_185928:
    // 0x185928: 0xafc0009c  sw          $zero, 0x9C($fp)
    ctx->pc = 0x185928u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 156), GPR_U32(ctx, 0));
label_18592c:
    // 0x18592c: 0xafc000a4  sw          $zero, 0xA4($fp)
    ctx->pc = 0x18592cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 0));
label_185930:
    // 0x185930: 0xafc000a8  sw          $zero, 0xA8($fp)
    ctx->pc = 0x185930u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 168), GPR_U32(ctx, 0));
label_185934:
    // 0x185934: 0xafc000ac  sw          $zero, 0xAC($fp)
    ctx->pc = 0x185934u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 172), GPR_U32(ctx, 0));
label_185938:
    // 0x185938: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x185938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_18593c:
    // 0x18593c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18593cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_185940:
    // 0x185940: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x185940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_185944:
    // 0x185944: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x185944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_185948:
    // 0x185948: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x185948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_18594c:
    // 0x18594c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_185950:
    if (ctx->pc == 0x185950u) {
        ctx->pc = 0x185950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18594Cu;
        // 0x185950: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185954u;
        goto label_185954;
    }
    ctx->pc = 0x18594Cu;
    {
        const bool branch_taken_0x18594c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18594Cu;
        // 0x185950: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18594c) {
            ctx->pc = 0x185938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185938;
        }
    }
    ctx->pc = 0x185954u;
label_185954:
    // 0x185954: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x185954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_185958:
    // 0x185958: 0xafc00070  sw          $zero, 0x70($fp)
    ctx->pc = 0x185958u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 112), GPR_U32(ctx, 0));
label_18595c:
    // 0x18595c: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x18595cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_185960:
    // 0x185960: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x185960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_185964:
    // 0x185964: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x185964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_185968:
    // 0x185968: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x185968u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_18596c:
    // 0x18596c: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x18596cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_185970:
    // 0x185970: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x185970u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_185974:
    // 0x185974: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x185974u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_185978:
    // 0x185978: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x185978u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_18597c:
    // 0x18597c: 0x7bbe0110  lq          $fp, 0x110($sp)
    ctx->pc = 0x18597cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_185980:
    // 0x185980: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x185980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_185984:
    // 0x185984: 0x3e00008  jr          $ra
label_185988:
    if (ctx->pc == 0x185988u) {
        ctx->pc = 0x185988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185984u;
        // 0x185988: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18598Cu;
        goto label_18598c;
    }
    ctx->pc = 0x185984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185984u;
        // 0x185988: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18598Cu;
label_18598c:
    // 0x18598c: 0x0  nop
    ctx->pc = 0x18598cu;
    // NOP
    ctx->pc = 0x185990u;
}
