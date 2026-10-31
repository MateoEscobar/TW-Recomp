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

// Function: sub_001821D0
// Address: 0x1821d0 - 0x182820
void sub_001821D0_0x1821d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001821D0_0x1821d0");
#endif

    switch (ctx->pc) {
        case 0x1821d0u: goto label_1821d0;
        case 0x1821d4u: goto label_1821d4;
        case 0x1821d8u: goto label_1821d8;
        case 0x1821dcu: goto label_1821dc;
        case 0x1821e0u: goto label_1821e0;
        case 0x1821e4u: goto label_1821e4;
        case 0x1821e8u: goto label_1821e8;
        case 0x1821ecu: goto label_1821ec;
        case 0x1821f0u: goto label_1821f0;
        case 0x1821f4u: goto label_1821f4;
        case 0x1821f8u: goto label_1821f8;
        case 0x1821fcu: goto label_1821fc;
        case 0x182200u: goto label_182200;
        case 0x182204u: goto label_182204;
        case 0x182208u: goto label_182208;
        case 0x18220cu: goto label_18220c;
        case 0x182210u: goto label_182210;
        case 0x182214u: goto label_182214;
        case 0x182218u: goto label_182218;
        case 0x18221cu: goto label_18221c;
        case 0x182220u: goto label_182220;
        case 0x182224u: goto label_182224;
        case 0x182228u: goto label_182228;
        case 0x18222cu: goto label_18222c;
        case 0x182230u: goto label_182230;
        case 0x182234u: goto label_182234;
        case 0x182238u: goto label_182238;
        case 0x18223cu: goto label_18223c;
        case 0x182240u: goto label_182240;
        case 0x182244u: goto label_182244;
        case 0x182248u: goto label_182248;
        case 0x18224cu: goto label_18224c;
        case 0x182250u: goto label_182250;
        case 0x182254u: goto label_182254;
        case 0x182258u: goto label_182258;
        case 0x18225cu: goto label_18225c;
        case 0x182260u: goto label_182260;
        case 0x182264u: goto label_182264;
        case 0x182268u: goto label_182268;
        case 0x18226cu: goto label_18226c;
        case 0x182270u: goto label_182270;
        case 0x182274u: goto label_182274;
        case 0x182278u: goto label_182278;
        case 0x18227cu: goto label_18227c;
        case 0x182280u: goto label_182280;
        case 0x182284u: goto label_182284;
        case 0x182288u: goto label_182288;
        case 0x18228cu: goto label_18228c;
        case 0x182290u: goto label_182290;
        case 0x182294u: goto label_182294;
        case 0x182298u: goto label_182298;
        case 0x18229cu: goto label_18229c;
        case 0x1822a0u: goto label_1822a0;
        case 0x1822a4u: goto label_1822a4;
        case 0x1822a8u: goto label_1822a8;
        case 0x1822acu: goto label_1822ac;
        case 0x1822b0u: goto label_1822b0;
        case 0x1822b4u: goto label_1822b4;
        case 0x1822b8u: goto label_1822b8;
        case 0x1822bcu: goto label_1822bc;
        case 0x1822c0u: goto label_1822c0;
        case 0x1822c4u: goto label_1822c4;
        case 0x1822c8u: goto label_1822c8;
        case 0x1822ccu: goto label_1822cc;
        case 0x1822d0u: goto label_1822d0;
        case 0x1822d4u: goto label_1822d4;
        case 0x1822d8u: goto label_1822d8;
        case 0x1822dcu: goto label_1822dc;
        case 0x1822e0u: goto label_1822e0;
        case 0x1822e4u: goto label_1822e4;
        case 0x1822e8u: goto label_1822e8;
        case 0x1822ecu: goto label_1822ec;
        case 0x1822f0u: goto label_1822f0;
        case 0x1822f4u: goto label_1822f4;
        case 0x1822f8u: goto label_1822f8;
        case 0x1822fcu: goto label_1822fc;
        case 0x182300u: goto label_182300;
        case 0x182304u: goto label_182304;
        case 0x182308u: goto label_182308;
        case 0x18230cu: goto label_18230c;
        case 0x182310u: goto label_182310;
        case 0x182314u: goto label_182314;
        case 0x182318u: goto label_182318;
        case 0x18231cu: goto label_18231c;
        case 0x182320u: goto label_182320;
        case 0x182324u: goto label_182324;
        case 0x182328u: goto label_182328;
        case 0x18232cu: goto label_18232c;
        case 0x182330u: goto label_182330;
        case 0x182334u: goto label_182334;
        case 0x182338u: goto label_182338;
        case 0x18233cu: goto label_18233c;
        case 0x182340u: goto label_182340;
        case 0x182344u: goto label_182344;
        case 0x182348u: goto label_182348;
        case 0x18234cu: goto label_18234c;
        case 0x182350u: goto label_182350;
        case 0x182354u: goto label_182354;
        case 0x182358u: goto label_182358;
        case 0x18235cu: goto label_18235c;
        case 0x182360u: goto label_182360;
        case 0x182364u: goto label_182364;
        case 0x182368u: goto label_182368;
        case 0x18236cu: goto label_18236c;
        case 0x182370u: goto label_182370;
        case 0x182374u: goto label_182374;
        case 0x182378u: goto label_182378;
        case 0x18237cu: goto label_18237c;
        case 0x182380u: goto label_182380;
        case 0x182384u: goto label_182384;
        case 0x182388u: goto label_182388;
        case 0x18238cu: goto label_18238c;
        case 0x182390u: goto label_182390;
        case 0x182394u: goto label_182394;
        case 0x182398u: goto label_182398;
        case 0x18239cu: goto label_18239c;
        case 0x1823a0u: goto label_1823a0;
        case 0x1823a4u: goto label_1823a4;
        case 0x1823a8u: goto label_1823a8;
        case 0x1823acu: goto label_1823ac;
        case 0x1823b0u: goto label_1823b0;
        case 0x1823b4u: goto label_1823b4;
        case 0x1823b8u: goto label_1823b8;
        case 0x1823bcu: goto label_1823bc;
        case 0x1823c0u: goto label_1823c0;
        case 0x1823c4u: goto label_1823c4;
        case 0x1823c8u: goto label_1823c8;
        case 0x1823ccu: goto label_1823cc;
        case 0x1823d0u: goto label_1823d0;
        case 0x1823d4u: goto label_1823d4;
        case 0x1823d8u: goto label_1823d8;
        case 0x1823dcu: goto label_1823dc;
        case 0x1823e0u: goto label_1823e0;
        case 0x1823e4u: goto label_1823e4;
        case 0x1823e8u: goto label_1823e8;
        case 0x1823ecu: goto label_1823ec;
        case 0x1823f0u: goto label_1823f0;
        case 0x1823f4u: goto label_1823f4;
        case 0x1823f8u: goto label_1823f8;
        case 0x1823fcu: goto label_1823fc;
        case 0x182400u: goto label_182400;
        case 0x182404u: goto label_182404;
        case 0x182408u: goto label_182408;
        case 0x18240cu: goto label_18240c;
        case 0x182410u: goto label_182410;
        case 0x182414u: goto label_182414;
        case 0x182418u: goto label_182418;
        case 0x18241cu: goto label_18241c;
        case 0x182420u: goto label_182420;
        case 0x182424u: goto label_182424;
        case 0x182428u: goto label_182428;
        case 0x18242cu: goto label_18242c;
        case 0x182430u: goto label_182430;
        case 0x182434u: goto label_182434;
        case 0x182438u: goto label_182438;
        case 0x18243cu: goto label_18243c;
        case 0x182440u: goto label_182440;
        case 0x182444u: goto label_182444;
        case 0x182448u: goto label_182448;
        case 0x18244cu: goto label_18244c;
        case 0x182450u: goto label_182450;
        case 0x182454u: goto label_182454;
        case 0x182458u: goto label_182458;
        case 0x18245cu: goto label_18245c;
        case 0x182460u: goto label_182460;
        case 0x182464u: goto label_182464;
        case 0x182468u: goto label_182468;
        case 0x18246cu: goto label_18246c;
        case 0x182470u: goto label_182470;
        case 0x182474u: goto label_182474;
        case 0x182478u: goto label_182478;
        case 0x18247cu: goto label_18247c;
        case 0x182480u: goto label_182480;
        case 0x182484u: goto label_182484;
        case 0x182488u: goto label_182488;
        case 0x18248cu: goto label_18248c;
        case 0x182490u: goto label_182490;
        case 0x182494u: goto label_182494;
        case 0x182498u: goto label_182498;
        case 0x18249cu: goto label_18249c;
        case 0x1824a0u: goto label_1824a0;
        case 0x1824a4u: goto label_1824a4;
        case 0x1824a8u: goto label_1824a8;
        case 0x1824acu: goto label_1824ac;
        case 0x1824b0u: goto label_1824b0;
        case 0x1824b4u: goto label_1824b4;
        case 0x1824b8u: goto label_1824b8;
        case 0x1824bcu: goto label_1824bc;
        case 0x1824c0u: goto label_1824c0;
        case 0x1824c4u: goto label_1824c4;
        case 0x1824c8u: goto label_1824c8;
        case 0x1824ccu: goto label_1824cc;
        case 0x1824d0u: goto label_1824d0;
        case 0x1824d4u: goto label_1824d4;
        case 0x1824d8u: goto label_1824d8;
        case 0x1824dcu: goto label_1824dc;
        case 0x1824e0u: goto label_1824e0;
        case 0x1824e4u: goto label_1824e4;
        case 0x1824e8u: goto label_1824e8;
        case 0x1824ecu: goto label_1824ec;
        case 0x1824f0u: goto label_1824f0;
        case 0x1824f4u: goto label_1824f4;
        case 0x1824f8u: goto label_1824f8;
        case 0x1824fcu: goto label_1824fc;
        case 0x182500u: goto label_182500;
        case 0x182504u: goto label_182504;
        case 0x182508u: goto label_182508;
        case 0x18250cu: goto label_18250c;
        case 0x182510u: goto label_182510;
        case 0x182514u: goto label_182514;
        case 0x182518u: goto label_182518;
        case 0x18251cu: goto label_18251c;
        case 0x182520u: goto label_182520;
        case 0x182524u: goto label_182524;
        case 0x182528u: goto label_182528;
        case 0x18252cu: goto label_18252c;
        case 0x182530u: goto label_182530;
        case 0x182534u: goto label_182534;
        case 0x182538u: goto label_182538;
        case 0x18253cu: goto label_18253c;
        case 0x182540u: goto label_182540;
        case 0x182544u: goto label_182544;
        case 0x182548u: goto label_182548;
        case 0x18254cu: goto label_18254c;
        case 0x182550u: goto label_182550;
        case 0x182554u: goto label_182554;
        case 0x182558u: goto label_182558;
        case 0x18255cu: goto label_18255c;
        case 0x182560u: goto label_182560;
        case 0x182564u: goto label_182564;
        case 0x182568u: goto label_182568;
        case 0x18256cu: goto label_18256c;
        case 0x182570u: goto label_182570;
        case 0x182574u: goto label_182574;
        case 0x182578u: goto label_182578;
        case 0x18257cu: goto label_18257c;
        case 0x182580u: goto label_182580;
        case 0x182584u: goto label_182584;
        case 0x182588u: goto label_182588;
        case 0x18258cu: goto label_18258c;
        case 0x182590u: goto label_182590;
        case 0x182594u: goto label_182594;
        case 0x182598u: goto label_182598;
        case 0x18259cu: goto label_18259c;
        case 0x1825a0u: goto label_1825a0;
        case 0x1825a4u: goto label_1825a4;
        case 0x1825a8u: goto label_1825a8;
        case 0x1825acu: goto label_1825ac;
        case 0x1825b0u: goto label_1825b0;
        case 0x1825b4u: goto label_1825b4;
        case 0x1825b8u: goto label_1825b8;
        case 0x1825bcu: goto label_1825bc;
        case 0x1825c0u: goto label_1825c0;
        case 0x1825c4u: goto label_1825c4;
        case 0x1825c8u: goto label_1825c8;
        case 0x1825ccu: goto label_1825cc;
        case 0x1825d0u: goto label_1825d0;
        case 0x1825d4u: goto label_1825d4;
        case 0x1825d8u: goto label_1825d8;
        case 0x1825dcu: goto label_1825dc;
        case 0x1825e0u: goto label_1825e0;
        case 0x1825e4u: goto label_1825e4;
        case 0x1825e8u: goto label_1825e8;
        case 0x1825ecu: goto label_1825ec;
        case 0x1825f0u: goto label_1825f0;
        case 0x1825f4u: goto label_1825f4;
        case 0x1825f8u: goto label_1825f8;
        case 0x1825fcu: goto label_1825fc;
        case 0x182600u: goto label_182600;
        case 0x182604u: goto label_182604;
        case 0x182608u: goto label_182608;
        case 0x18260cu: goto label_18260c;
        case 0x182610u: goto label_182610;
        case 0x182614u: goto label_182614;
        case 0x182618u: goto label_182618;
        case 0x18261cu: goto label_18261c;
        case 0x182620u: goto label_182620;
        case 0x182624u: goto label_182624;
        case 0x182628u: goto label_182628;
        case 0x18262cu: goto label_18262c;
        case 0x182630u: goto label_182630;
        case 0x182634u: goto label_182634;
        case 0x182638u: goto label_182638;
        case 0x18263cu: goto label_18263c;
        case 0x182640u: goto label_182640;
        case 0x182644u: goto label_182644;
        case 0x182648u: goto label_182648;
        case 0x18264cu: goto label_18264c;
        case 0x182650u: goto label_182650;
        case 0x182654u: goto label_182654;
        case 0x182658u: goto label_182658;
        case 0x18265cu: goto label_18265c;
        case 0x182660u: goto label_182660;
        case 0x182664u: goto label_182664;
        case 0x182668u: goto label_182668;
        case 0x18266cu: goto label_18266c;
        case 0x182670u: goto label_182670;
        case 0x182674u: goto label_182674;
        case 0x182678u: goto label_182678;
        case 0x18267cu: goto label_18267c;
        case 0x182680u: goto label_182680;
        case 0x182684u: goto label_182684;
        case 0x182688u: goto label_182688;
        case 0x18268cu: goto label_18268c;
        case 0x182690u: goto label_182690;
        case 0x182694u: goto label_182694;
        case 0x182698u: goto label_182698;
        case 0x18269cu: goto label_18269c;
        case 0x1826a0u: goto label_1826a0;
        case 0x1826a4u: goto label_1826a4;
        case 0x1826a8u: goto label_1826a8;
        case 0x1826acu: goto label_1826ac;
        case 0x1826b0u: goto label_1826b0;
        case 0x1826b4u: goto label_1826b4;
        case 0x1826b8u: goto label_1826b8;
        case 0x1826bcu: goto label_1826bc;
        case 0x1826c0u: goto label_1826c0;
        case 0x1826c4u: goto label_1826c4;
        case 0x1826c8u: goto label_1826c8;
        case 0x1826ccu: goto label_1826cc;
        case 0x1826d0u: goto label_1826d0;
        case 0x1826d4u: goto label_1826d4;
        case 0x1826d8u: goto label_1826d8;
        case 0x1826dcu: goto label_1826dc;
        case 0x1826e0u: goto label_1826e0;
        case 0x1826e4u: goto label_1826e4;
        case 0x1826e8u: goto label_1826e8;
        case 0x1826ecu: goto label_1826ec;
        case 0x1826f0u: goto label_1826f0;
        case 0x1826f4u: goto label_1826f4;
        case 0x1826f8u: goto label_1826f8;
        case 0x1826fcu: goto label_1826fc;
        case 0x182700u: goto label_182700;
        case 0x182704u: goto label_182704;
        case 0x182708u: goto label_182708;
        case 0x18270cu: goto label_18270c;
        case 0x182710u: goto label_182710;
        case 0x182714u: goto label_182714;
        case 0x182718u: goto label_182718;
        case 0x18271cu: goto label_18271c;
        case 0x182720u: goto label_182720;
        case 0x182724u: goto label_182724;
        case 0x182728u: goto label_182728;
        case 0x18272cu: goto label_18272c;
        case 0x182730u: goto label_182730;
        case 0x182734u: goto label_182734;
        case 0x182738u: goto label_182738;
        case 0x18273cu: goto label_18273c;
        case 0x182740u: goto label_182740;
        case 0x182744u: goto label_182744;
        case 0x182748u: goto label_182748;
        case 0x18274cu: goto label_18274c;
        case 0x182750u: goto label_182750;
        case 0x182754u: goto label_182754;
        case 0x182758u: goto label_182758;
        case 0x18275cu: goto label_18275c;
        case 0x182760u: goto label_182760;
        case 0x182764u: goto label_182764;
        case 0x182768u: goto label_182768;
        case 0x18276cu: goto label_18276c;
        case 0x182770u: goto label_182770;
        case 0x182774u: goto label_182774;
        case 0x182778u: goto label_182778;
        case 0x18277cu: goto label_18277c;
        case 0x182780u: goto label_182780;
        case 0x182784u: goto label_182784;
        case 0x182788u: goto label_182788;
        case 0x18278cu: goto label_18278c;
        case 0x182790u: goto label_182790;
        case 0x182794u: goto label_182794;
        case 0x182798u: goto label_182798;
        case 0x18279cu: goto label_18279c;
        case 0x1827a0u: goto label_1827a0;
        case 0x1827a4u: goto label_1827a4;
        case 0x1827a8u: goto label_1827a8;
        case 0x1827acu: goto label_1827ac;
        case 0x1827b0u: goto label_1827b0;
        case 0x1827b4u: goto label_1827b4;
        case 0x1827b8u: goto label_1827b8;
        case 0x1827bcu: goto label_1827bc;
        case 0x1827c0u: goto label_1827c0;
        case 0x1827c4u: goto label_1827c4;
        case 0x1827c8u: goto label_1827c8;
        case 0x1827ccu: goto label_1827cc;
        case 0x1827d0u: goto label_1827d0;
        case 0x1827d4u: goto label_1827d4;
        case 0x1827d8u: goto label_1827d8;
        case 0x1827dcu: goto label_1827dc;
        case 0x1827e0u: goto label_1827e0;
        case 0x1827e4u: goto label_1827e4;
        case 0x1827e8u: goto label_1827e8;
        case 0x1827ecu: goto label_1827ec;
        case 0x1827f0u: goto label_1827f0;
        case 0x1827f4u: goto label_1827f4;
        case 0x1827f8u: goto label_1827f8;
        case 0x1827fcu: goto label_1827fc;
        case 0x182800u: goto label_182800;
        case 0x182804u: goto label_182804;
        case 0x182808u: goto label_182808;
        case 0x18280cu: goto label_18280c;
        case 0x182810u: goto label_182810;
        case 0x182814u: goto label_182814;
        case 0x182818u: goto label_182818;
        case 0x18281cu: goto label_18281c;
        default: break;
    }

    ctx->pc = 0x1821d0u;

label_1821d0:
    // 0x1821d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1821d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1821d4:
    // 0x1821d4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1821d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1821d8:
    // 0x1821d8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1821d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1821dc:
    // 0x1821dc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1821dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1821e0:
    // 0x1821e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1821e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1821e4:
    // 0x1821e4: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1821e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_1821e8:
    // 0x1821e8: 0x26700060  addiu       $s0, $s3, 0x60
    ctx->pc = 0x1821e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_1821ec:
    // 0x1821ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1821ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1821f0:
    // 0x1821f0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1821f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1821f4:
    // 0x1821f4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1821f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1821f8:
    // 0x1821f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1821f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1821fc:
    // 0x1821fc: 0xc137cca  jal         func_4DF328
label_182200:
    if (ctx->pc == 0x182200u) {
        ctx->pc = 0x182200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821FCu;
        // 0x182200: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182204u;
        goto label_182204;
    }
    ctx->pc = 0x1821FCu;
    SET_GPR_U32(ctx, 31, 0x182204u);
    ctx->pc = 0x182200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1821FCu;
    // 0x182200: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF328u, 0x1821FCu, 0x182204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182204u;
label_182204:
    // 0x182204: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x182204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_182208:
    // 0x182208: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x182208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18220c:
    // 0x18220c: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_182210:
    if (ctx->pc == 0x182210u) {
        ctx->pc = 0x182210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18220Cu;
        // 0x182210: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182214u;
        goto label_182214;
    }
    ctx->pc = 0x18220Cu;
    {
        const bool branch_taken_0x18220c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x182210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18220Cu;
        // 0x182210: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18220c) {
            ctx->pc = 0x182250u;
            goto label_182250;
        }
    }
    ctx->pc = 0x182214u;
label_182214:
    // 0x182214: 0x8c920014  lw          $s2, 0x14($a0)
    ctx->pc = 0x182214u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_182218:
    // 0x182218: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x182218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_18221c:
    // 0x18221c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_182220:
    if (ctx->pc == 0x182220u) {
        ctx->pc = 0x182220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18221Cu;
        // 0x182220: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182224u;
        goto label_182224;
    }
    ctx->pc = 0x18221Cu;
    {
        const bool branch_taken_0x18221c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18221Cu;
        // 0x182220: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18221c) {
            ctx->pc = 0x182258u;
            goto label_182258;
        }
    }
    ctx->pc = 0x182224u;
label_182224:
    // 0x182224: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x182224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_182228:
    // 0x182228: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x182228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_18222c:
    // 0x18222c: 0x8c85b8b8  lw          $a1, -0x4748($a0)
    ctx->pc = 0x18222cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949048)));
label_182230:
    // 0x182230: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x182230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_182234:
    // 0x182234: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x182234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_182238:
    // 0x182238: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x182238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18223c:
    // 0x18223c: 0x40f809  jalr        $v0
label_182240:
    if (ctx->pc == 0x182240u) {
        ctx->pc = 0x182240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18223Cu;
        // 0x182240: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182244u;
        goto label_182244;
    }
    ctx->pc = 0x18223Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x182244u);
        ctx->pc = 0x182240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18223Cu;
        // 0x182240: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18223Cu, 0x182244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x182244u;
label_182244:
    // 0x182244: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x182244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_182248:
    // 0x182248: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_18224c:
    if (ctx->pc == 0x18224Cu) {
        ctx->pc = 0x18224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182248u;
        // 0x18224c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182250u;
        goto label_182250;
    }
    ctx->pc = 0x182248u;
    {
        const bool branch_taken_0x182248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182248u;
        // 0x18224c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182248) {
            ctx->pc = 0x182258u;
            goto label_182258;
        }
    }
    ctx->pc = 0x182250u;
label_182250:
    // 0x182250: 0x1000016b  b           . + 4 + (0x16B << 2)
label_182254:
    if (ctx->pc == 0x182254u) {
        ctx->pc = 0x182254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182250u;
        // 0x182254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182258u;
        goto label_182258;
    }
    ctx->pc = 0x182250u;
    {
        const bool branch_taken_0x182250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182250u;
        // 0x182254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182250) {
            ctx->pc = 0x182800u;
            goto label_182800;
        }
    }
    ctx->pc = 0x182258u;
label_182258:
    // 0x182258: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x182258u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_18225c:
    // 0x18225c: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x18225cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_182260:
    // 0x182260: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x182260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_182264:
    // 0x182264: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x182264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_182268:
    // 0x182268: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x182268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_18226c:
    // 0x18226c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_182270:
    // 0x182270: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x182270u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_182274:
    // 0x182274: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x182274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_182278:
    // 0x182278: 0x60f809  jalr        $v1
label_18227c:
    if (ctx->pc == 0x18227Cu) {
        ctx->pc = 0x18227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182278u;
        // 0x18227c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182280u;
        goto label_182280;
    }
    ctx->pc = 0x182278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x182280u);
        ctx->pc = 0x18227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182278u;
        // 0x18227c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182278u, 0x182280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x182280u;
label_182280:
    // 0x182280: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x182280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_182284:
    // 0x182284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x182284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_182288:
    // 0x182288: 0x24060143  addiu       $a2, $zero, 0x143
    ctx->pc = 0x182288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 323));
label_18228c:
    // 0x18228c: 0xc137ce4  jal         func_4DF390
label_182290:
    if (ctx->pc == 0x182290u) {
        ctx->pc = 0x182290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18228Cu;
        // 0x182290: 0x24a526e0  addiu       $a1, $a1, 0x26E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182294u;
        goto label_182294;
    }
    ctx->pc = 0x18228Cu;
    SET_GPR_U32(ctx, 31, 0x182294u);
    ctx->pc = 0x182290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18228Cu;
    // 0x182290: 0x24a526e0  addiu       $a1, $a1, 0x26E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF390u, 0x18228Cu, 0x182294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182294u;
label_182294:
    // 0x182294: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x182294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_182298:
    // 0x182298: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x182298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_18229c:
    // 0x18229c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1822a0:
    // 0x1822a0: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1822a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1822a4:
    // 0x1822a4: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1822a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1822a8:
    // 0x1822a8: 0x60f809  jalr        $v1
label_1822ac:
    if (ctx->pc == 0x1822ACu) {
        ctx->pc = 0x1822ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822A8u;
        // 0x1822ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1822B0u;
        goto label_1822b0;
    }
    ctx->pc = 0x1822A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1822B0u);
        ctx->pc = 0x1822ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822A8u;
        // 0x1822ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1822A8u, 0x1822B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1822B0u;
label_1822b0:
    // 0x1822b0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1822b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1822b4:
    // 0x1822b4: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x1822b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_1822b8:
    // 0x1822b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1822b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1822bc:
    // 0x1822bc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1822bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_1822c0:
    // 0x1822c0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1822c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1822c4:
    // 0x1822c4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1822c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1822c8:
    // 0x1822c8: 0x2448000c  addiu       $t0, $v0, 0xC
    ctx->pc = 0x1822c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1822cc:
    // 0x1822cc: 0x244a0004  addiu       $t2, $v0, 0x4
    ctx->pc = 0x1822ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1822d0:
    // 0x1822d0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1822d4:
    if (ctx->pc == 0x1822D4u) {
        ctx->pc = 0x1822D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822D0u;
        // 0x1822d4: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1822D8u;
        goto label_1822d8;
    }
    ctx->pc = 0x1822D0u;
    {
        const bool branch_taken_0x1822d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1822D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822D0u;
        // 0x1822d4: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1822d0) {
            ctx->pc = 0x182318u;
            goto label_182318;
        }
    }
    ctx->pc = 0x1822D8u;
label_1822d8:
    // 0x1822d8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1822d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1822dc:
    // 0x1822dc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1822e0:
    if (ctx->pc == 0x1822E0u) {
        ctx->pc = 0x1822E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822DCu;
        // 0x1822e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1822E4u;
        goto label_1822e4;
    }
    ctx->pc = 0x1822DCu;
    {
        const bool branch_taken_0x1822dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1822dc) {
            ctx->pc = 0x1822E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1822DCu;
            // 0x1822e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1822ECu;
            goto label_1822ec;
        }
    }
    ctx->pc = 0x1822E4u;
label_1822e4:
    // 0x1822e4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1822e8:
    if (ctx->pc == 0x1822E8u) {
        ctx->pc = 0x1822E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822E4u;
        // 0x1822e8: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1822ECu;
        goto label_1822ec;
    }
    ctx->pc = 0x1822E4u;
    {
        const bool branch_taken_0x1822e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1822E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822E4u;
        // 0x1822e8: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1822e4) {
            ctx->pc = 0x18231Cu;
            goto label_18231c;
        }
    }
    ctx->pc = 0x1822ECu;
label_1822ec:
    // 0x1822ec: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1822ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1822f0:
    // 0x1822f0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1822f4:
    if (ctx->pc == 0x1822F4u) {
        ctx->pc = 0x1822F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822F0u;
        // 0x1822f4: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1822F8u;
        goto label_1822f8;
    }
    ctx->pc = 0x1822F0u;
    {
        const bool branch_taken_0x1822f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1822f0) {
            ctx->pc = 0x1822F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1822F0u;
            // 0x1822f4: 0x8ca9000c  lw          $t1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18231Cu;
            goto label_18231c;
        }
    }
    ctx->pc = 0x1822F8u;
label_1822f8:
    // 0x1822f8: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1822f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1822fc:
    // 0x1822fc: 0x0  nop
    ctx->pc = 0x1822fcu;
    // NOP
label_182300:
    // 0x182300: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x182300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_182304:
    // 0x182304: 0x0  nop
    ctx->pc = 0x182304u;
    // NOP
label_182308:
    // 0x182308: 0x0  nop
    ctx->pc = 0x182308u;
    // NOP
label_18230c:
    // 0x18230c: 0x0  nop
    ctx->pc = 0x18230cu;
    // NOP
label_182310:
    // 0x182310: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_182314:
    if (ctx->pc == 0x182314u) {
        ctx->pc = 0x182314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182310u;
        // 0x182314: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182318u;
        goto label_182318;
    }
    ctx->pc = 0x182310u;
    {
        const bool branch_taken_0x182310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182310) {
            ctx->pc = 0x182314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182310u;
            // 0x182314: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182300;
        }
    }
    ctx->pc = 0x182318u;
label_182318:
    // 0x182318: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x182318u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_18231c:
    // 0x18231c: 0x10a60022  beq         $a1, $a2, . + 4 + (0x22 << 2)
label_182320:
    if (ctx->pc == 0x182320u) {
        ctx->pc = 0x182324u;
        goto label_182324;
    }
    ctx->pc = 0x18231Cu;
    {
        const bool branch_taken_0x18231c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x18231c) {
            ctx->pc = 0x1823A8u;
            goto label_1823a8;
        }
    }
    ctx->pc = 0x182324u;
label_182324:
    // 0x182324: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x182324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_182328:
    // 0x182328: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x182328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_18232c:
    // 0x18232c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x18232cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_182330:
    // 0x182330: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x182330u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_182334:
    // 0x182334: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x182334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_182338:
    // 0x182338: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_18233c:
    if (ctx->pc == 0x18233Cu) {
        ctx->pc = 0x18233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182338u;
        // 0x18233c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182340u;
        goto label_182340;
    }
    ctx->pc = 0x182338u;
    {
        const bool branch_taken_0x182338 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x18233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182338u;
        // 0x18233c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182338) {
            ctx->pc = 0x182364u;
            goto label_182364;
        }
    }
    ctx->pc = 0x182340u;
label_182340:
    // 0x182340: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_182344:
    if (ctx->pc == 0x182344u) {
        ctx->pc = 0x182344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182340u;
        // 0x182344: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182348u;
        goto label_182348;
    }
    ctx->pc = 0x182340u;
    {
        const bool branch_taken_0x182340 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x182344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182340u;
        // 0x182344: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182340) {
            ctx->pc = 0x18234Cu;
            goto label_18234c;
        }
    }
    ctx->pc = 0x182348u;
label_182348:
    // 0x182348: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x182348u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_18234c:
    // 0x18234c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x18234cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_182350:
    // 0x182350: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x182350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
label_182354:
    // 0x182354: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x182354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_182358:
    // 0x182358: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x182358u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_18235c:
    // 0x18235c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x18235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_182360:
    // 0x182360: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x182360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_182364:
    // 0x182364: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x182364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_182368:
    // 0x182368: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
label_18236c:
    if (ctx->pc == 0x18236Cu) {
        ctx->pc = 0x18236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182368u;
        // 0x18236c: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182370u;
        goto label_182370;
    }
    ctx->pc = 0x182368u;
    {
        const bool branch_taken_0x182368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x182368) {
            ctx->pc = 0x18236Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182368u;
            // 0x18236c: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182378u;
            goto label_182378;
        }
    }
    ctx->pc = 0x182370u;
label_182370:
    // 0x182370: 0x10000005  b           . + 4 + (0x5 << 2)
label_182374:
    if (ctx->pc == 0x182374u) {
        ctx->pc = 0x182374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182370u;
        // 0x182374: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182378u;
        goto label_182378;
    }
    ctx->pc = 0x182370u;
    {
        const bool branch_taken_0x182370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182370u;
        // 0x182374: 0xad450000  sw          $a1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182370) {
            ctx->pc = 0x182388u;
            goto label_182388;
        }
    }
    ctx->pc = 0x182378u;
label_182378:
    // 0x182378: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x182378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18237c:
    // 0x18237c: 0x54460002  bnel        $v0, $a2, . + 4 + (0x2 << 2)
label_182380:
    if (ctx->pc == 0x182380u) {
        ctx->pc = 0x182380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18237Cu;
        // 0x182380: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182384u;
        goto label_182384;
    }
    ctx->pc = 0x18237Cu;
    {
        const bool branch_taken_0x18237c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x18237c) {
            ctx->pc = 0x182380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18237Cu;
            // 0x182380: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182388u;
            goto label_182388;
        }
    }
    ctx->pc = 0x182384u;
label_182384:
    // 0x182384: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x182384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_182388:
    // 0x182388: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x182388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_18238c:
    // 0x18238c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x18238cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_182390:
    // 0x182390: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x182390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_182394:
    // 0x182394: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x182394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_182398:
    // 0x182398: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x182398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_18239c:
    // 0x18239c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x18239cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_1823a0:
    // 0x1823a0: 0x10000034  b           . + 4 + (0x34 << 2)
label_1823a4:
    if (ctx->pc == 0x1823A4u) {
        ctx->pc = 0x1823A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823A0u;
        // 0x1823a4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1823A8u;
        goto label_1823a8;
    }
    ctx->pc = 0x1823A0u;
    {
        const bool branch_taken_0x1823a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823A0u;
        // 0x1823a4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823a0) {
            ctx->pc = 0x182474u;
            goto label_182474;
        }
    }
    ctx->pc = 0x1823A8u;
label_1823a8:
    // 0x1823a8: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_1823ac:
    if (ctx->pc == 0x1823ACu) {
        ctx->pc = 0x1823ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823A8u;
        // 0x1823ac: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1823B0u;
        goto label_1823b0;
    }
    ctx->pc = 0x1823A8u;
    {
        const bool branch_taken_0x1823a8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823A8u;
        // 0x1823ac: 0x8ca70004  lw          $a3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823a8) {
            ctx->pc = 0x1823B4u;
            goto label_1823b4;
        }
    }
    ctx->pc = 0x1823B0u;
label_1823b0:
    // 0x1823b0: 0xad270004  sw          $a3, 0x4($t1)
    ctx->pc = 0x1823b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 7));
label_1823b4:
    // 0x1823b4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1823b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1823b8:
    // 0x1823b8: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
label_1823bc:
    if (ctx->pc == 0x1823BCu) {
        ctx->pc = 0x1823BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823B8u;
        // 0x1823bc: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1823C0u;
        goto label_1823c0;
    }
    ctx->pc = 0x1823B8u;
    {
        const bool branch_taken_0x1823b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1823b8) {
            ctx->pc = 0x1823BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1823B8u;
            // 0x1823bc: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1823C8u;
            goto label_1823c8;
        }
    }
    ctx->pc = 0x1823C0u;
label_1823c0:
    // 0x1823c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1823c4:
    if (ctx->pc == 0x1823C4u) {
        ctx->pc = 0x1823C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823C0u;
        // 0x1823c4: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1823C8u;
        goto label_1823c8;
    }
    ctx->pc = 0x1823C0u;
    {
        const bool branch_taken_0x1823c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823C0u;
        // 0x1823c4: 0xad490000  sw          $t1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823c0) {
            ctx->pc = 0x1823D8u;
            goto label_1823d8;
        }
    }
    ctx->pc = 0x1823C8u;
label_1823c8:
    // 0x1823c8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1823c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1823cc:
    // 0x1823cc: 0x54450002  bnel        $v0, $a1, . + 4 + (0x2 << 2)
label_1823d0:
    if (ctx->pc == 0x1823D0u) {
        ctx->pc = 0x1823D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823CCu;
        // 0x1823d0: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1823D4u;
        goto label_1823d4;
    }
    ctx->pc = 0x1823CCu;
    {
        const bool branch_taken_0x1823cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1823cc) {
            ctx->pc = 0x1823D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1823CCu;
            // 0x1823d0: 0xac69000c  sw          $t1, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1823D8u;
            goto label_1823d8;
        }
    }
    ctx->pc = 0x1823D4u;
label_1823d4:
    // 0x1823d4: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x1823d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
label_1823d8:
    // 0x1823d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1823d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1823dc:
    // 0x1823dc: 0x54460012  bnel        $v0, $a2, . + 4 + (0x12 << 2)
label_1823e0:
    if (ctx->pc == 0x1823E0u) {
        ctx->pc = 0x1823E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823DCu;
        // 0x1823e0: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1823E4u;
        goto label_1823e4;
    }
    ctx->pc = 0x1823DCu;
    {
        const bool branch_taken_0x1823dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1823dc) {
            ctx->pc = 0x1823E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1823DCu;
            // 0x1823e0: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182428u;
            goto label_182428;
        }
    }
    ctx->pc = 0x1823E4u;
label_1823e4:
    // 0x1823e4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1823e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1823e8:
    // 0x1823e8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1823ec:
    if (ctx->pc == 0x1823ECu) {
        ctx->pc = 0x1823ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823E8u;
        // 0x1823ec: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1823F0u;
        goto label_1823f0;
    }
    ctx->pc = 0x1823E8u;
    {
        const bool branch_taken_0x1823e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1823e8) {
            ctx->pc = 0x1823ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1823E8u;
            // 0x1823ec: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1823FCu;
            goto label_1823fc;
        }
    }
    ctx->pc = 0x1823F0u;
label_1823f0:
    // 0x1823f0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1823f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1823f4:
    // 0x1823f4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1823f8:
    if (ctx->pc == 0x1823F8u) {
        ctx->pc = 0x1823F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823F4u;
        // 0x1823f8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1823FCu;
        goto label_1823fc;
    }
    ctx->pc = 0x1823F4u;
    {
        const bool branch_taken_0x1823f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823F4u;
        // 0x1823f8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823f4) {
            ctx->pc = 0x182424u;
            goto label_182424;
        }
    }
    ctx->pc = 0x1823FCu;
label_1823fc:
    // 0x1823fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_182400:
    if (ctx->pc == 0x182400u) {
        ctx->pc = 0x182400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823FCu;
        // 0x182400: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182404u;
        goto label_182404;
    }
    ctx->pc = 0x1823FCu;
    {
        const bool branch_taken_0x1823fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823FCu;
        // 0x182400: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823fc) {
            ctx->pc = 0x182420u;
            goto label_182420;
        }
    }
    ctx->pc = 0x182404u;
label_182404:
    // 0x182404: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x182404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_182408:
    // 0x182408: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x182408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_18240c:
    // 0x18240c: 0x0  nop
    ctx->pc = 0x18240cu;
    // NOP
label_182410:
    // 0x182410: 0x0  nop
    ctx->pc = 0x182410u;
    // NOP
label_182414:
    // 0x182414: 0x0  nop
    ctx->pc = 0x182414u;
    // NOP
label_182418:
    // 0x182418: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_18241c:
    if (ctx->pc == 0x18241Cu) {
        ctx->pc = 0x18241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182418u;
        // 0x18241c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182420u;
        goto label_182420;
    }
    ctx->pc = 0x182418u;
    {
        const bool branch_taken_0x182418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182418) {
            ctx->pc = 0x18241Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182418u;
            // 0x18241c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182408;
        }
    }
    ctx->pc = 0x182420u;
label_182420:
    // 0x182420: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x182420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_182424:
    // 0x182424: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x182424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_182428:
    // 0x182428: 0x54460013  bnel        $v0, $a2, . + 4 + (0x13 << 2)
label_18242c:
    if (ctx->pc == 0x18242Cu) {
        ctx->pc = 0x18242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182428u;
        // 0x18242c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182430u;
        goto label_182430;
    }
    ctx->pc = 0x182428u;
    {
        const bool branch_taken_0x182428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x182428) {
            ctx->pc = 0x18242Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182428u;
            // 0x18242c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182478u;
            goto label_182478;
        }
    }
    ctx->pc = 0x182430u;
label_182430:
    // 0x182430: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x182430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_182434:
    // 0x182434: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_182438:
    if (ctx->pc == 0x182438u) {
        ctx->pc = 0x182438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182434u;
        // 0x182438: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18243Cu;
        goto label_18243c;
    }
    ctx->pc = 0x182434u;
    {
        const bool branch_taken_0x182434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182434) {
            ctx->pc = 0x182438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182434u;
            // 0x182438: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182448u;
            goto label_182448;
        }
    }
    ctx->pc = 0x18243Cu;
label_18243c:
    // 0x18243c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x18243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_182440:
    // 0x182440: 0x1000000c  b           . + 4 + (0xC << 2)
label_182444:
    if (ctx->pc == 0x182444u) {
        ctx->pc = 0x182444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182440u;
        // 0x182444: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182448u;
        goto label_182448;
    }
    ctx->pc = 0x182440u;
    {
        const bool branch_taken_0x182440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182440u;
        // 0x182444: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182440) {
            ctx->pc = 0x182474u;
            goto label_182474;
        }
    }
    ctx->pc = 0x182448u;
label_182448:
    // 0x182448: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_18244c:
    if (ctx->pc == 0x18244Cu) {
        ctx->pc = 0x18244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182448u;
        // 0x18244c: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182450u;
        goto label_182450;
    }
    ctx->pc = 0x182448u;
    {
        const bool branch_taken_0x182448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182448u;
        // 0x18244c: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182448) {
            ctx->pc = 0x182470u;
            goto label_182470;
        }
    }
    ctx->pc = 0x182450u;
label_182450:
    // 0x182450: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x182450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_182454:
    // 0x182454: 0x0  nop
    ctx->pc = 0x182454u;
    // NOP
label_182458:
    // 0x182458: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x182458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18245c:
    // 0x18245c: 0x0  nop
    ctx->pc = 0x18245cu;
    // NOP
label_182460:
    // 0x182460: 0x0  nop
    ctx->pc = 0x182460u;
    // NOP
label_182464:
    // 0x182464: 0x0  nop
    ctx->pc = 0x182464u;
    // NOP
label_182468:
    // 0x182468: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_18246c:
    if (ctx->pc == 0x18246Cu) {
        ctx->pc = 0x18246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182468u;
        // 0x18246c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182470u;
        goto label_182470;
    }
    ctx->pc = 0x182468u;
    {
        const bool branch_taken_0x182468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182468) {
            ctx->pc = 0x18246Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182468u;
            // 0x18246c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182458;
        }
    }
    ctx->pc = 0x182470u;
label_182470:
    // 0x182470: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x182470u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_182474:
    // 0x182474: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x182474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_182478:
    // 0x182478: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
label_18247c:
    if (ctx->pc == 0x18247Cu) {
        ctx->pc = 0x182480u;
        goto label_182480;
    }
    ctx->pc = 0x182478u;
    {
        const bool branch_taken_0x182478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182478) {
            ctx->pc = 0x1827C4u;
            goto label_1827c4;
        }
    }
    ctx->pc = 0x182480u;
label_182480:
    // 0x182480: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_182484:
    if (ctx->pc == 0x182484u) {
        ctx->pc = 0x182484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182480u;
        // 0x182484: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182488u;
        goto label_182488;
    }
    ctx->pc = 0x182480u;
    {
        const bool branch_taken_0x182480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182480u;
        // 0x182484: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182480) {
            ctx->pc = 0x182798u;
            goto label_182798;
        }
    }
    ctx->pc = 0x182488u;
label_182488:
    // 0x182488: 0x15220060  bne         $t1, $v0, . + 4 + (0x60 << 2)
label_18248c:
    if (ctx->pc == 0x18248Cu) {
        ctx->pc = 0x18248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182488u;
        // 0x18248c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182490u;
        goto label_182490;
    }
    ctx->pc = 0x182488u;
    {
        const bool branch_taken_0x182488 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x18248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182488u;
        // 0x18248c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182488) {
            ctx->pc = 0x18260Cu;
            goto label_18260c;
        }
    }
    ctx->pc = 0x182490u;
label_182490:
    // 0x182490: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x182490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_182494:
    // 0x182494: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x182494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_182498:
    // 0x182498: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_18249c:
    if (ctx->pc == 0x18249Cu) {
        ctx->pc = 0x18249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182498u;
        // 0x18249c: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1824A0u;
        goto label_1824a0;
    }
    ctx->pc = 0x182498u;
    {
        const bool branch_taken_0x182498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182498) {
            ctx->pc = 0x18249Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182498u;
            // 0x18249c: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182500u;
            goto label_182500;
        }
    }
    ctx->pc = 0x1824A0u;
label_1824a0:
    // 0x1824a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1824a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1824a4:
    // 0x1824a4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1824a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1824a8:
    // 0x1824a8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1824a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_1824ac:
    // 0x1824ac: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x1824acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1824b0:
    // 0x1824b0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1824b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1824b4:
    // 0x1824b4: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x1824b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_1824b8:
    // 0x1824b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1824b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1824bc:
    // 0x1824bc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1824c0:
    if (ctx->pc == 0x1824C0u) {
        ctx->pc = 0x1824C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824BCu;
        // 0x1824c0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1824C4u;
        goto label_1824c4;
    }
    ctx->pc = 0x1824BCu;
    {
        const bool branch_taken_0x1824bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1824bc) {
            ctx->pc = 0x1824C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1824BCu;
            // 0x1824c0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1824C4u;
            goto label_1824c4;
        }
    }
    ctx->pc = 0x1824C4u;
label_1824c4:
    // 0x1824c4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1824c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1824c8:
    // 0x1824c8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1824c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1824cc:
    // 0x1824cc: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1824ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1824d0:
    // 0x1824d0: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_1824d4:
    if (ctx->pc == 0x1824D4u) {
        ctx->pc = 0x1824D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824D0u;
        // 0x1824d4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1824D8u;
        goto label_1824d8;
    }
    ctx->pc = 0x1824D0u;
    {
        const bool branch_taken_0x1824d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1824d0) {
            ctx->pc = 0x1824D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1824D0u;
            // 0x1824d4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1824E0u;
            goto label_1824e0;
        }
    }
    ctx->pc = 0x1824D8u;
label_1824d8:
    // 0x1824d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1824dc:
    if (ctx->pc == 0x1824DCu) {
        ctx->pc = 0x1824DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824D8u;
        // 0x1824dc: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1824E0u;
        goto label_1824e0;
    }
    ctx->pc = 0x1824D8u;
    {
        const bool branch_taken_0x1824d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1824DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824D8u;
        // 0x1824dc: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1824d8) {
            ctx->pc = 0x1824F0u;
            goto label_1824f0;
        }
    }
    ctx->pc = 0x1824E0u;
label_1824e0:
    // 0x1824e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1824e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1824e4:
    // 0x1824e4: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_1824e8:
    if (ctx->pc == 0x1824E8u) {
        ctx->pc = 0x1824E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824E4u;
        // 0x1824e8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1824ECu;
        goto label_1824ec;
    }
    ctx->pc = 0x1824E4u;
    {
        const bool branch_taken_0x1824e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1824e4) {
            ctx->pc = 0x1824E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1824E4u;
            // 0x1824e8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1824F0u;
            goto label_1824f0;
        }
    }
    ctx->pc = 0x1824ECu;
label_1824ec:
    // 0x1824ec: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1824ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_1824f0:
    // 0x1824f0: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1824f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_1824f4:
    // 0x1824f4: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x1824f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_1824f8:
    // 0x1824f8: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x1824f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1824fc:
    // 0x1824fc: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1824fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_182500:
    // 0x182500: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_182504:
    if (ctx->pc == 0x182504u) {
        ctx->pc = 0x182504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182500u;
        // 0x182504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182508u;
        goto label_182508;
    }
    ctx->pc = 0x182500u;
    {
        const bool branch_taken_0x182500 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x182504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182500u;
        // 0x182504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182500) {
            ctx->pc = 0x182514u;
            goto label_182514;
        }
    }
    ctx->pc = 0x182508u;
label_182508:
    // 0x182508: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x182508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_18250c:
    // 0x18250c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_182510:
    if (ctx->pc == 0x182510u) {
        ctx->pc = 0x182510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18250Cu;
        // 0x182510: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182514u;
        goto label_182514;
    }
    ctx->pc = 0x18250Cu;
    {
        const bool branch_taken_0x18250c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x182510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18250Cu;
        // 0x182510: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18250c) {
            ctx->pc = 0x18252Cu;
            goto label_18252c;
        }
    }
    ctx->pc = 0x182514u;
label_182514:
    // 0x182514: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x182514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_182518:
    // 0x182518: 0x10c00062  beqz        $a2, . + 4 + (0x62 << 2)
label_18251c:
    if (ctx->pc == 0x18251Cu) {
        ctx->pc = 0x18251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182518u;
        // 0x18251c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182520u;
        goto label_182520;
    }
    ctx->pc = 0x182518u;
    {
        const bool branch_taken_0x182518 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x18251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182518u;
        // 0x18251c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182518) {
            ctx->pc = 0x1826A4u;
            goto label_1826a4;
        }
    }
    ctx->pc = 0x182520u;
label_182520:
    // 0x182520: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x182520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_182524:
    // 0x182524: 0x50620060  beql        $v1, $v0, . + 4 + (0x60 << 2)
label_182528:
    if (ctx->pc == 0x182528u) {
        ctx->pc = 0x182528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182524u;
        // 0x182528: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18252Cu;
        goto label_18252c;
    }
    ctx->pc = 0x182524u;
    {
        const bool branch_taken_0x182524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x182524) {
            ctx->pc = 0x182528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182524u;
            // 0x182528: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1826A8u;
            goto label_1826a8;
        }
    }
    ctx->pc = 0x18252Cu;
label_18252c:
    // 0x18252c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_182530:
    if (ctx->pc == 0x182530u) {
        ctx->pc = 0x182530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18252Cu;
        // 0x182530: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182534u;
        goto label_182534;
    }
    ctx->pc = 0x18252Cu;
    {
        const bool branch_taken_0x18252c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x182530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18252Cu;
        // 0x182530: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18252c) {
            ctx->pc = 0x182540u;
            goto label_182540;
        }
    }
    ctx->pc = 0x182534u;
label_182534:
    // 0x182534: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x182534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_182538:
    // 0x182538: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_18253c:
    if (ctx->pc == 0x18253Cu) {
        ctx->pc = 0x18253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182538u;
        // 0x18253c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182540u;
        goto label_182540;
    }
    ctx->pc = 0x182538u;
    {
        const bool branch_taken_0x182538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x182538) {
            ctx->pc = 0x18253Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182538u;
            // 0x18253c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1825A4u;
            goto label_1825a4;
        }
    }
    ctx->pc = 0x182540u;
label_182540:
    // 0x182540: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_182544:
    if (ctx->pc == 0x182544u) {
        ctx->pc = 0x182544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182540u;
        // 0x182544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182548u;
        goto label_182548;
    }
    ctx->pc = 0x182540u;
    {
        const bool branch_taken_0x182540 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x182544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182540u;
        // 0x182544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182540) {
            ctx->pc = 0x18254Cu;
            goto label_18254c;
        }
    }
    ctx->pc = 0x182548u;
label_182548:
    // 0x182548: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x182548u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_18254c:
    // 0x18254c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x18254cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_182550:
    // 0x182550: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x182550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_182554:
    // 0x182554: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x182554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_182558:
    // 0x182558: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x182558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_18255c:
    // 0x18255c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x18255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_182560:
    // 0x182560: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_182564:
    if (ctx->pc == 0x182564u) {
        ctx->pc = 0x182564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182560u;
        // 0x182564: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182568u;
        goto label_182568;
    }
    ctx->pc = 0x182560u;
    {
        const bool branch_taken_0x182560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182560) {
            ctx->pc = 0x182564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182560u;
            // 0x182564: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182568u;
            goto label_182568;
        }
    }
    ctx->pc = 0x182568u;
label_182568:
    // 0x182568: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x182568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18256c:
    // 0x18256c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x18256cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_182570:
    // 0x182570: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x182570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_182574:
    // 0x182574: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_182578:
    if (ctx->pc == 0x182578u) {
        ctx->pc = 0x182578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182574u;
        // 0x182578: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18257Cu;
        goto label_18257c;
    }
    ctx->pc = 0x182574u;
    {
        const bool branch_taken_0x182574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x182574) {
            ctx->pc = 0x182578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182574u;
            // 0x182578: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182584u;
            goto label_182584;
        }
    }
    ctx->pc = 0x18257Cu;
label_18257c:
    // 0x18257c: 0x10000005  b           . + 4 + (0x5 << 2)
label_182580:
    if (ctx->pc == 0x182580u) {
        ctx->pc = 0x182580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18257Cu;
        // 0x182580: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182584u;
        goto label_182584;
    }
    ctx->pc = 0x18257Cu;
    {
        const bool branch_taken_0x18257c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18257Cu;
        // 0x182580: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18257c) {
            ctx->pc = 0x182594u;
            goto label_182594;
        }
    }
    ctx->pc = 0x182584u;
label_182584:
    // 0x182584: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x182584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_182588:
    // 0x182588: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_18258c:
    if (ctx->pc == 0x18258Cu) {
        ctx->pc = 0x18258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182588u;
        // 0x18258c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182590u;
        goto label_182590;
    }
    ctx->pc = 0x182588u;
    {
        const bool branch_taken_0x182588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x182588) {
            ctx->pc = 0x18258Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182588u;
            // 0x18258c: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182594u;
            goto label_182594;
        }
    }
    ctx->pc = 0x182590u;
label_182590:
    // 0x182590: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x182590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_182594:
    // 0x182594: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x182594u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
label_182598:
    // 0x182598: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x182598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_18259c:
    // 0x18259c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x18259cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1825a0:
    // 0x1825a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1825a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1825a4:
    // 0x1825a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1825a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1825a8:
    // 0x1825a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1825a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1825ac:
    // 0x1825ac: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1825acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_1825b0:
    // 0x1825b0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1825b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1825b4:
    // 0x1825b4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1825b8:
    if (ctx->pc == 0x1825B8u) {
        ctx->pc = 0x1825B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825B4u;
        // 0x1825b8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1825BCu;
        goto label_1825bc;
    }
    ctx->pc = 0x1825B4u;
    {
        const bool branch_taken_0x1825b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1825b4) {
            ctx->pc = 0x1825B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1825B4u;
            // 0x1825b8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1825BCu;
            goto label_1825bc;
        }
    }
    ctx->pc = 0x1825BCu;
label_1825bc:
    // 0x1825bc: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x1825bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1825c0:
    // 0x1825c0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1825c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1825c4:
    // 0x1825c4: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x1825c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_1825c8:
    // 0x1825c8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1825c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1825cc:
    // 0x1825cc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1825d0:
    if (ctx->pc == 0x1825D0u) {
        ctx->pc = 0x1825D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825CCu;
        // 0x1825d0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1825D4u;
        goto label_1825d4;
    }
    ctx->pc = 0x1825CCu;
    {
        const bool branch_taken_0x1825cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1825cc) {
            ctx->pc = 0x1825D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1825CCu;
            // 0x1825d0: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1825D4u;
            goto label_1825d4;
        }
    }
    ctx->pc = 0x1825D4u;
label_1825d4:
    // 0x1825d4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1825d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1825d8:
    // 0x1825d8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1825d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1825dc:
    // 0x1825dc: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1825dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1825e0:
    // 0x1825e0: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_1825e4:
    if (ctx->pc == 0x1825E4u) {
        ctx->pc = 0x1825E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825E0u;
        // 0x1825e4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1825E8u;
        goto label_1825e8;
    }
    ctx->pc = 0x1825E0u;
    {
        const bool branch_taken_0x1825e0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1825e0) {
            ctx->pc = 0x1825E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1825E0u;
            // 0x1825e4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1825F0u;
            goto label_1825f0;
        }
    }
    ctx->pc = 0x1825E8u;
label_1825e8:
    // 0x1825e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1825ec:
    if (ctx->pc == 0x1825ECu) {
        ctx->pc = 0x1825ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825E8u;
        // 0x1825ec: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1825F0u;
        goto label_1825f0;
    }
    ctx->pc = 0x1825E8u;
    {
        const bool branch_taken_0x1825e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1825ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825E8u;
        // 0x1825ec: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825e8) {
            ctx->pc = 0x182600u;
            goto label_182600;
        }
    }
    ctx->pc = 0x1825F0u;
label_1825f0:
    // 0x1825f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1825f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1825f4:
    // 0x1825f4: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_1825f8:
    if (ctx->pc == 0x1825F8u) {
        ctx->pc = 0x1825F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825F4u;
        // 0x1825f8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1825FCu;
        goto label_1825fc;
    }
    ctx->pc = 0x1825F4u;
    {
        const bool branch_taken_0x1825f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1825f4) {
            ctx->pc = 0x1825F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1825F4u;
            // 0x1825f8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182600u;
            goto label_182600;
        }
    }
    ctx->pc = 0x1825FCu;
label_1825fc:
    // 0x1825fc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1825fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_182600:
    // 0x182600: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x182600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_182604:
    // 0x182604: 0x1000006c  b           . + 4 + (0x6C << 2)
label_182608:
    if (ctx->pc == 0x182608u) {
        ctx->pc = 0x182608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182604u;
        // 0x182608: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18260Cu;
        goto label_18260c;
    }
    ctx->pc = 0x182604u;
    {
        const bool branch_taken_0x182604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182604u;
        // 0x182608: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182604) {
            ctx->pc = 0x1827B8u;
            goto label_1827b8;
        }
    }
    ctx->pc = 0x18260Cu;
label_18260c:
    // 0x18260c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18260cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_182610:
    // 0x182610: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_182614:
    if (ctx->pc == 0x182614u) {
        ctx->pc = 0x182614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182610u;
        // 0x182614: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182618u;
        goto label_182618;
    }
    ctx->pc = 0x182610u;
    {
        const bool branch_taken_0x182610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182610) {
            ctx->pc = 0x182614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182610u;
            // 0x182614: 0x8c88000c  lw          $t0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182678u;
            goto label_182678;
        }
    }
    ctx->pc = 0x182618u;
label_182618:
    // 0x182618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18261c:
    // 0x18261c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x18261cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_182620:
    // 0x182620: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x182620u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_182624:
    // 0x182624: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x182624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_182628:
    // 0x182628: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x182628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18262c:
    // 0x18262c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x18262cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_182630:
    // 0x182630: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x182630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_182634:
    // 0x182634: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_182638:
    if (ctx->pc == 0x182638u) {
        ctx->pc = 0x182638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182634u;
        // 0x182638: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18263Cu;
        goto label_18263c;
    }
    ctx->pc = 0x182634u;
    {
        const bool branch_taken_0x182634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182634) {
            ctx->pc = 0x182638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182634u;
            // 0x182638: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18263Cu;
            goto label_18263c;
        }
    }
    ctx->pc = 0x18263Cu;
label_18263c:
    // 0x18263c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x18263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_182640:
    // 0x182640: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x182640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_182644:
    // 0x182644: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x182644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_182648:
    // 0x182648: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_18264c:
    if (ctx->pc == 0x18264Cu) {
        ctx->pc = 0x18264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182648u;
        // 0x18264c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182650u;
        goto label_182650;
    }
    ctx->pc = 0x182648u;
    {
        const bool branch_taken_0x182648 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x182648) {
            ctx->pc = 0x18264Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182648u;
            // 0x18264c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182658u;
            goto label_182658;
        }
    }
    ctx->pc = 0x182650u;
label_182650:
    // 0x182650: 0x10000005  b           . + 4 + (0x5 << 2)
label_182654:
    if (ctx->pc == 0x182654u) {
        ctx->pc = 0x182654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182650u;
        // 0x182654: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182658u;
        goto label_182658;
    }
    ctx->pc = 0x182650u;
    {
        const bool branch_taken_0x182650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182650u;
        // 0x182654: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182650) {
            ctx->pc = 0x182668u;
            goto label_182668;
        }
    }
    ctx->pc = 0x182658u;
label_182658:
    // 0x182658: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x182658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18265c:
    // 0x18265c: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_182660:
    if (ctx->pc == 0x182660u) {
        ctx->pc = 0x182660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18265Cu;
        // 0x182660: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182664u;
        goto label_182664;
    }
    ctx->pc = 0x18265Cu;
    {
        const bool branch_taken_0x18265c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x18265c) {
            ctx->pc = 0x182660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18265Cu;
            // 0x182660: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182668u;
            goto label_182668;
        }
    }
    ctx->pc = 0x182664u;
label_182664:
    // 0x182664: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x182664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_182668:
    // 0x182668: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x182668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_18266c:
    // 0x18266c: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x18266cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_182670:
    // 0x182670: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x182670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_182674:
    // 0x182674: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x182674u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_182678:
    // 0x182678: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_18267c:
    if (ctx->pc == 0x18267Cu) {
        ctx->pc = 0x18267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182678u;
        // 0x18267c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182680u;
        goto label_182680;
    }
    ctx->pc = 0x182678u;
    {
        const bool branch_taken_0x182678 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x18267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182678u;
        // 0x18267c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182678) {
            ctx->pc = 0x18268Cu;
            goto label_18268c;
        }
    }
    ctx->pc = 0x182680u;
label_182680:
    // 0x182680: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x182680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_182684:
    // 0x182684: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_182688:
    if (ctx->pc == 0x182688u) {
        ctx->pc = 0x182688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182684u;
        // 0x182688: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18268Cu;
        goto label_18268c;
    }
    ctx->pc = 0x182684u;
    {
        const bool branch_taken_0x182684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x182688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182684u;
        // 0x182688: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182684) {
            ctx->pc = 0x1826B4u;
            goto label_1826b4;
        }
    }
    ctx->pc = 0x18268Cu;
label_18268c:
    // 0x18268c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x18268cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_182690:
    // 0x182690: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_182694:
    if (ctx->pc == 0x182694u) {
        ctx->pc = 0x182694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182690u;
        // 0x182694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182698u;
        goto label_182698;
    }
    ctx->pc = 0x182690u;
    {
        const bool branch_taken_0x182690 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x182694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182690u;
        // 0x182694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182690) {
            ctx->pc = 0x1826A4u;
            goto label_1826a4;
        }
    }
    ctx->pc = 0x182698u;
label_182698:
    // 0x182698: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x182698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_18269c:
    // 0x18269c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1826a0:
    if (ctx->pc == 0x1826A0u) {
        ctx->pc = 0x1826A4u;
        goto label_1826a4;
    }
    ctx->pc = 0x18269Cu;
    {
        const bool branch_taken_0x18269c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18269c) {
            ctx->pc = 0x1826B4u;
            goto label_1826b4;
        }
    }
    ctx->pc = 0x1826A4u;
label_1826a4:
    // 0x1826a4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1826a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1826a8:
    // 0x1826a8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1826a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1826ac:
    // 0x1826ac: 0x10000039  b           . + 4 + (0x39 << 2)
label_1826b0:
    if (ctx->pc == 0x1826B0u) {
        ctx->pc = 0x1826B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826ACu;
        // 0x1826b0: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1826B4u;
        goto label_1826b4;
    }
    ctx->pc = 0x1826ACu;
    {
        const bool branch_taken_0x1826ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1826B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826ACu;
        // 0x1826b0: 0x8d270004  lw          $a3, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826ac) {
            ctx->pc = 0x182794u;
            goto label_182794;
        }
    }
    ctx->pc = 0x1826B4u;
label_1826b4:
    // 0x1826b4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1826b8:
    if (ctx->pc == 0x1826B8u) {
        ctx->pc = 0x1826B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826B4u;
        // 0x1826b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1826BCu;
        goto label_1826bc;
    }
    ctx->pc = 0x1826B4u;
    {
        const bool branch_taken_0x1826b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1826B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826B4u;
        // 0x1826b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826b4) {
            ctx->pc = 0x1826C8u;
            goto label_1826c8;
        }
    }
    ctx->pc = 0x1826BCu;
label_1826bc:
    // 0x1826bc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1826bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1826c0:
    // 0x1826c0: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_1826c4:
    if (ctx->pc == 0x1826C4u) {
        ctx->pc = 0x1826C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826C0u;
        // 0x1826c4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1826C8u;
        goto label_1826c8;
    }
    ctx->pc = 0x1826C0u;
    {
        const bool branch_taken_0x1826c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1826c0) {
            ctx->pc = 0x1826C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1826C0u;
            // 0x1826c4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18272Cu;
            goto label_18272c;
        }
    }
    ctx->pc = 0x1826C8u;
label_1826c8:
    // 0x1826c8: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_1826cc:
    if (ctx->pc == 0x1826CCu) {
        ctx->pc = 0x1826CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826C8u;
        // 0x1826cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1826D0u;
        goto label_1826d0;
    }
    ctx->pc = 0x1826C8u;
    {
        const bool branch_taken_0x1826c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1826CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826C8u;
        // 0x1826cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826c8) {
            ctx->pc = 0x1826D4u;
            goto label_1826d4;
        }
    }
    ctx->pc = 0x1826D0u;
label_1826d0:
    // 0x1826d0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1826d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_1826d4:
    // 0x1826d4: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1826d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1826d8:
    // 0x1826d8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1826d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1826dc:
    // 0x1826dc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1826dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1826e0:
    // 0x1826e0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1826e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1826e4:
    // 0x1826e4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1826e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1826e8:
    // 0x1826e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1826ec:
    if (ctx->pc == 0x1826ECu) {
        ctx->pc = 0x1826ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826E8u;
        // 0x1826ec: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1826F0u;
        goto label_1826f0;
    }
    ctx->pc = 0x1826E8u;
    {
        const bool branch_taken_0x1826e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1826e8) {
            ctx->pc = 0x1826ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1826E8u;
            // 0x1826ec: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1826F0u;
            goto label_1826f0;
        }
    }
    ctx->pc = 0x1826F0u;
label_1826f0:
    // 0x1826f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1826f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1826f4:
    // 0x1826f4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1826f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1826f8:
    // 0x1826f8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1826f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1826fc:
    // 0x1826fc: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_182700:
    if (ctx->pc == 0x182700u) {
        ctx->pc = 0x182700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826FCu;
        // 0x182700: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182704u;
        goto label_182704;
    }
    ctx->pc = 0x1826FCu;
    {
        const bool branch_taken_0x1826fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1826fc) {
            ctx->pc = 0x182700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1826FCu;
            // 0x182700: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18270Cu;
            goto label_18270c;
        }
    }
    ctx->pc = 0x182704u;
label_182704:
    // 0x182704: 0x10000005  b           . + 4 + (0x5 << 2)
label_182708:
    if (ctx->pc == 0x182708u) {
        ctx->pc = 0x182708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182704u;
        // 0x182708: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18270Cu;
        goto label_18270c;
    }
    ctx->pc = 0x182704u;
    {
        const bool branch_taken_0x182704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182704u;
        // 0x182708: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182704) {
            ctx->pc = 0x18271Cu;
            goto label_18271c;
        }
    }
    ctx->pc = 0x18270Cu;
label_18270c:
    // 0x18270c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_182710:
    // 0x182710: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_182714:
    if (ctx->pc == 0x182714u) {
        ctx->pc = 0x182714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182710u;
        // 0x182714: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182718u;
        goto label_182718;
    }
    ctx->pc = 0x182710u;
    {
        const bool branch_taken_0x182710 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x182710) {
            ctx->pc = 0x182714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182710u;
            // 0x182714: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18271Cu;
            goto label_18271c;
        }
    }
    ctx->pc = 0x182718u;
label_182718:
    // 0x182718: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x182718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_18271c:
    // 0x18271c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x18271cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_182720:
    // 0x182720: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x182720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_182724:
    // 0x182724: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x182724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_182728:
    // 0x182728: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x182728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_18272c:
    // 0x18272c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18272cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182730:
    // 0x182730: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x182730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_182734:
    // 0x182734: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x182734u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_182738:
    // 0x182738: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x182738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_18273c:
    // 0x18273c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_182740:
    if (ctx->pc == 0x182740u) {
        ctx->pc = 0x182740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18273Cu;
        // 0x182740: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182744u;
        goto label_182744;
    }
    ctx->pc = 0x18273Cu;
    {
        const bool branch_taken_0x18273c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18273c) {
            ctx->pc = 0x182740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18273Cu;
            // 0x182740: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182744u;
            goto label_182744;
        }
    }
    ctx->pc = 0x182744u;
label_182744:
    // 0x182744: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x182744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_182748:
    // 0x182748: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x182748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18274c:
    // 0x18274c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x18274cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_182750:
    // 0x182750: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x182750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_182754:
    // 0x182754: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_182758:
    if (ctx->pc == 0x182758u) {
        ctx->pc = 0x182758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182754u;
        // 0x182758: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18275Cu;
        goto label_18275c;
    }
    ctx->pc = 0x182754u;
    {
        const bool branch_taken_0x182754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182754) {
            ctx->pc = 0x182758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182754u;
            // 0x182758: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18275Cu;
            goto label_18275c;
        }
    }
    ctx->pc = 0x18275Cu;
label_18275c:
    // 0x18275c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x18275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_182760:
    // 0x182760: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x182760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_182764:
    // 0x182764: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x182764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_182768:
    // 0x182768: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_18276c:
    if (ctx->pc == 0x18276Cu) {
        ctx->pc = 0x18276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182768u;
        // 0x18276c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182770u;
        goto label_182770;
    }
    ctx->pc = 0x182768u;
    {
        const bool branch_taken_0x182768 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x182768) {
            ctx->pc = 0x18276Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182768u;
            // 0x18276c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182778u;
            goto label_182778;
        }
    }
    ctx->pc = 0x182770u;
label_182770:
    // 0x182770: 0x10000005  b           . + 4 + (0x5 << 2)
label_182774:
    if (ctx->pc == 0x182774u) {
        ctx->pc = 0x182774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182770u;
        // 0x182774: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182778u;
        goto label_182778;
    }
    ctx->pc = 0x182770u;
    {
        const bool branch_taken_0x182770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182770u;
        // 0x182774: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182770) {
            ctx->pc = 0x182788u;
            goto label_182788;
        }
    }
    ctx->pc = 0x182778u;
label_182778:
    // 0x182778: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x182778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18277c:
    // 0x18277c: 0x54e20002  bnel        $a3, $v0, . + 4 + (0x2 << 2)
label_182780:
    if (ctx->pc == 0x182780u) {
        ctx->pc = 0x182780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18277Cu;
        // 0x182780: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182784u;
        goto label_182784;
    }
    ctx->pc = 0x18277Cu;
    {
        const bool branch_taken_0x18277c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x18277c) {
            ctx->pc = 0x182780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18277Cu;
            // 0x182780: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182788u;
            goto label_182788;
        }
    }
    ctx->pc = 0x182784u;
label_182784:
    // 0x182784: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x182784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_182788:
    // 0x182788: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x182788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_18278c:
    // 0x18278c: 0x1000000a  b           . + 4 + (0xA << 2)
label_182790:
    if (ctx->pc == 0x182790u) {
        ctx->pc = 0x182790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18278Cu;
        // 0x182790: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182794u;
        goto label_182794;
    }
    ctx->pc = 0x18278Cu;
    {
        const bool branch_taken_0x18278c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18278Cu;
        // 0x182790: 0xace40004  sw          $a0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18278c) {
            ctx->pc = 0x1827B8u;
            goto label_1827b8;
        }
    }
    ctx->pc = 0x182794u;
label_182794:
    // 0x182794: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x182794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_182798:
    // 0x182798: 0x11220007  beq         $t1, $v0, . + 4 + (0x7 << 2)
label_18279c:
    if (ctx->pc == 0x18279Cu) {
        ctx->pc = 0x1827A0u;
        goto label_1827a0;
    }
    ctx->pc = 0x182798u;
    {
        const bool branch_taken_0x182798 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x182798) {
            ctx->pc = 0x1827B8u;
            goto label_1827b8;
        }
    }
    ctx->pc = 0x1827A0u;
label_1827a0:
    // 0x1827a0: 0x5120ff39  beql        $t1, $zero, . + 4 + (-0xC7 << 2)
label_1827a4:
    if (ctx->pc == 0x1827A4u) {
        ctx->pc = 0x1827A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827A0u;
        // 0x1827a4: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1827A8u;
        goto label_1827a8;
    }
    ctx->pc = 0x1827A0u;
    {
        const bool branch_taken_0x1827a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1827a0) {
            ctx->pc = 0x1827A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1827A0u;
            // 0x1827a4: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182488;
        }
    }
    ctx->pc = 0x1827A8u;
label_1827a8:
    // 0x1827a8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1827a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1827ac:
    // 0x1827ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1827acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1827b0:
    // 0x1827b0: 0x5062ff35  beql        $v1, $v0, . + 4 + (-0xCB << 2)
label_1827b4:
    if (ctx->pc == 0x1827B4u) {
        ctx->pc = 0x1827B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827B0u;
        // 0x1827b4: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1827B8u;
        goto label_1827b8;
    }
    ctx->pc = 0x1827B0u;
    {
        const bool branch_taken_0x1827b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1827b0) {
            ctx->pc = 0x1827B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1827B0u;
            // 0x1827b4: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182488;
        }
    }
    ctx->pc = 0x1827B8u;
label_1827b8:
    // 0x1827b8: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
label_1827bc:
    if (ctx->pc == 0x1827BCu) {
        ctx->pc = 0x1827BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827B8u;
        // 0x1827bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1827C0u;
        goto label_1827c0;
    }
    ctx->pc = 0x1827B8u;
    {
        const bool branch_taken_0x1827b8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1827BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827B8u;
        // 0x1827bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1827b8) {
            ctx->pc = 0x1827C4u;
            goto label_1827c4;
        }
    }
    ctx->pc = 0x1827C0u;
label_1827c0:
    // 0x1827c0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x1827c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_1827c4:
    // 0x1827c4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1827c8:
    if (ctx->pc == 0x1827C8u) {
        ctx->pc = 0x1827C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827C4u;
        // 0x1827c8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1827CCu;
        goto label_1827cc;
    }
    ctx->pc = 0x1827C4u;
    {
        const bool branch_taken_0x1827c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1827C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827C4u;
        // 0x1827c8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1827c4) {
            ctx->pc = 0x1827F0u;
            goto label_1827f0;
        }
    }
    ctx->pc = 0x1827CCu;
label_1827cc:
    // 0x1827cc: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1827ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1827d0:
    // 0x1827d0: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1827d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1827d4:
    // 0x1827d4: 0x24c62730  addiu       $a2, $a2, 0x2730
    ctx->pc = 0x1827d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10032));
label_1827d8:
    // 0x1827d8: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1827d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1827dc:
    // 0x1827dc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1827dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1827e0:
    // 0x1827e0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1827e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1827e4:
    // 0x1827e4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1827e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1827e8:
    // 0x1827e8: 0x60f809  jalr        $v1
label_1827ec:
    if (ctx->pc == 0x1827ECu) {
        ctx->pc = 0x1827ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827E8u;
        // 0x1827ec: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1827F0u;
        goto label_1827f0;
    }
    ctx->pc = 0x1827E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1827F0u);
        ctx->pc = 0x1827ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827E8u;
        // 0x1827ec: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1827E8u, 0x1827F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1827F0u;
label_1827f0:
    // 0x1827f0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1827f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1827f4:
    // 0x1827f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1827f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1827f8:
    // 0x1827f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1827f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1827fc:
    // 0x1827fc: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x1827fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_182800:
    // 0x182800: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x182800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_182804:
    // 0x182804: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x182804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_182808:
    // 0x182808: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x182808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18280c:
    // 0x18280c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18280cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_182810:
    // 0x182810: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x182810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_182814:
    // 0x182814: 0x3e00008  jr          $ra
label_182818:
    if (ctx->pc == 0x182818u) {
        ctx->pc = 0x182818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182814u;
        // 0x182818: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18281Cu;
        goto label_18281c;
    }
    ctx->pc = 0x182814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182814u;
        // 0x182818: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18281Cu;
label_18281c:
    // 0x18281c: 0x0  nop
    ctx->pc = 0x18281cu;
    // NOP
    ctx->pc = 0x182820u;
}
