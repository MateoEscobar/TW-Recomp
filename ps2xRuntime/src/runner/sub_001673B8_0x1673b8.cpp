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

// Function: sub_001673B8
// Address: 0x1673b8 - 0x1679e8
void sub_001673B8_0x1673b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001673B8_0x1673b8");
#endif

    switch (ctx->pc) {
        case 0x1673b8u: goto label_1673b8;
        case 0x1673bcu: goto label_1673bc;
        case 0x1673c0u: goto label_1673c0;
        case 0x1673c4u: goto label_1673c4;
        case 0x1673c8u: goto label_1673c8;
        case 0x1673ccu: goto label_1673cc;
        case 0x1673d0u: goto label_1673d0;
        case 0x1673d4u: goto label_1673d4;
        case 0x1673d8u: goto label_1673d8;
        case 0x1673dcu: goto label_1673dc;
        case 0x1673e0u: goto label_1673e0;
        case 0x1673e4u: goto label_1673e4;
        case 0x1673e8u: goto label_1673e8;
        case 0x1673ecu: goto label_1673ec;
        case 0x1673f0u: goto label_1673f0;
        case 0x1673f4u: goto label_1673f4;
        case 0x1673f8u: goto label_1673f8;
        case 0x1673fcu: goto label_1673fc;
        case 0x167400u: goto label_167400;
        case 0x167404u: goto label_167404;
        case 0x167408u: goto label_167408;
        case 0x16740cu: goto label_16740c;
        case 0x167410u: goto label_167410;
        case 0x167414u: goto label_167414;
        case 0x167418u: goto label_167418;
        case 0x16741cu: goto label_16741c;
        case 0x167420u: goto label_167420;
        case 0x167424u: goto label_167424;
        case 0x167428u: goto label_167428;
        case 0x16742cu: goto label_16742c;
        case 0x167430u: goto label_167430;
        case 0x167434u: goto label_167434;
        case 0x167438u: goto label_167438;
        case 0x16743cu: goto label_16743c;
        case 0x167440u: goto label_167440;
        case 0x167444u: goto label_167444;
        case 0x167448u: goto label_167448;
        case 0x16744cu: goto label_16744c;
        case 0x167450u: goto label_167450;
        case 0x167454u: goto label_167454;
        case 0x167458u: goto label_167458;
        case 0x16745cu: goto label_16745c;
        case 0x167460u: goto label_167460;
        case 0x167464u: goto label_167464;
        case 0x167468u: goto label_167468;
        case 0x16746cu: goto label_16746c;
        case 0x167470u: goto label_167470;
        case 0x167474u: goto label_167474;
        case 0x167478u: goto label_167478;
        case 0x16747cu: goto label_16747c;
        case 0x167480u: goto label_167480;
        case 0x167484u: goto label_167484;
        case 0x167488u: goto label_167488;
        case 0x16748cu: goto label_16748c;
        case 0x167490u: goto label_167490;
        case 0x167494u: goto label_167494;
        case 0x167498u: goto label_167498;
        case 0x16749cu: goto label_16749c;
        case 0x1674a0u: goto label_1674a0;
        case 0x1674a4u: goto label_1674a4;
        case 0x1674a8u: goto label_1674a8;
        case 0x1674acu: goto label_1674ac;
        case 0x1674b0u: goto label_1674b0;
        case 0x1674b4u: goto label_1674b4;
        case 0x1674b8u: goto label_1674b8;
        case 0x1674bcu: goto label_1674bc;
        case 0x1674c0u: goto label_1674c0;
        case 0x1674c4u: goto label_1674c4;
        case 0x1674c8u: goto label_1674c8;
        case 0x1674ccu: goto label_1674cc;
        case 0x1674d0u: goto label_1674d0;
        case 0x1674d4u: goto label_1674d4;
        case 0x1674d8u: goto label_1674d8;
        case 0x1674dcu: goto label_1674dc;
        case 0x1674e0u: goto label_1674e0;
        case 0x1674e4u: goto label_1674e4;
        case 0x1674e8u: goto label_1674e8;
        case 0x1674ecu: goto label_1674ec;
        case 0x1674f0u: goto label_1674f0;
        case 0x1674f4u: goto label_1674f4;
        case 0x1674f8u: goto label_1674f8;
        case 0x1674fcu: goto label_1674fc;
        case 0x167500u: goto label_167500;
        case 0x167504u: goto label_167504;
        case 0x167508u: goto label_167508;
        case 0x16750cu: goto label_16750c;
        case 0x167510u: goto label_167510;
        case 0x167514u: goto label_167514;
        case 0x167518u: goto label_167518;
        case 0x16751cu: goto label_16751c;
        case 0x167520u: goto label_167520;
        case 0x167524u: goto label_167524;
        case 0x167528u: goto label_167528;
        case 0x16752cu: goto label_16752c;
        case 0x167530u: goto label_167530;
        case 0x167534u: goto label_167534;
        case 0x167538u: goto label_167538;
        case 0x16753cu: goto label_16753c;
        case 0x167540u: goto label_167540;
        case 0x167544u: goto label_167544;
        case 0x167548u: goto label_167548;
        case 0x16754cu: goto label_16754c;
        case 0x167550u: goto label_167550;
        case 0x167554u: goto label_167554;
        case 0x167558u: goto label_167558;
        case 0x16755cu: goto label_16755c;
        case 0x167560u: goto label_167560;
        case 0x167564u: goto label_167564;
        case 0x167568u: goto label_167568;
        case 0x16756cu: goto label_16756c;
        case 0x167570u: goto label_167570;
        case 0x167574u: goto label_167574;
        case 0x167578u: goto label_167578;
        case 0x16757cu: goto label_16757c;
        case 0x167580u: goto label_167580;
        case 0x167584u: goto label_167584;
        case 0x167588u: goto label_167588;
        case 0x16758cu: goto label_16758c;
        case 0x167590u: goto label_167590;
        case 0x167594u: goto label_167594;
        case 0x167598u: goto label_167598;
        case 0x16759cu: goto label_16759c;
        case 0x1675a0u: goto label_1675a0;
        case 0x1675a4u: goto label_1675a4;
        case 0x1675a8u: goto label_1675a8;
        case 0x1675acu: goto label_1675ac;
        case 0x1675b0u: goto label_1675b0;
        case 0x1675b4u: goto label_1675b4;
        case 0x1675b8u: goto label_1675b8;
        case 0x1675bcu: goto label_1675bc;
        case 0x1675c0u: goto label_1675c0;
        case 0x1675c4u: goto label_1675c4;
        case 0x1675c8u: goto label_1675c8;
        case 0x1675ccu: goto label_1675cc;
        case 0x1675d0u: goto label_1675d0;
        case 0x1675d4u: goto label_1675d4;
        case 0x1675d8u: goto label_1675d8;
        case 0x1675dcu: goto label_1675dc;
        case 0x1675e0u: goto label_1675e0;
        case 0x1675e4u: goto label_1675e4;
        case 0x1675e8u: goto label_1675e8;
        case 0x1675ecu: goto label_1675ec;
        case 0x1675f0u: goto label_1675f0;
        case 0x1675f4u: goto label_1675f4;
        case 0x1675f8u: goto label_1675f8;
        case 0x1675fcu: goto label_1675fc;
        case 0x167600u: goto label_167600;
        case 0x167604u: goto label_167604;
        case 0x167608u: goto label_167608;
        case 0x16760cu: goto label_16760c;
        case 0x167610u: goto label_167610;
        case 0x167614u: goto label_167614;
        case 0x167618u: goto label_167618;
        case 0x16761cu: goto label_16761c;
        case 0x167620u: goto label_167620;
        case 0x167624u: goto label_167624;
        case 0x167628u: goto label_167628;
        case 0x16762cu: goto label_16762c;
        case 0x167630u: goto label_167630;
        case 0x167634u: goto label_167634;
        case 0x167638u: goto label_167638;
        case 0x16763cu: goto label_16763c;
        case 0x167640u: goto label_167640;
        case 0x167644u: goto label_167644;
        case 0x167648u: goto label_167648;
        case 0x16764cu: goto label_16764c;
        case 0x167650u: goto label_167650;
        case 0x167654u: goto label_167654;
        case 0x167658u: goto label_167658;
        case 0x16765cu: goto label_16765c;
        case 0x167660u: goto label_167660;
        case 0x167664u: goto label_167664;
        case 0x167668u: goto label_167668;
        case 0x16766cu: goto label_16766c;
        case 0x167670u: goto label_167670;
        case 0x167674u: goto label_167674;
        case 0x167678u: goto label_167678;
        case 0x16767cu: goto label_16767c;
        case 0x167680u: goto label_167680;
        case 0x167684u: goto label_167684;
        case 0x167688u: goto label_167688;
        case 0x16768cu: goto label_16768c;
        case 0x167690u: goto label_167690;
        case 0x167694u: goto label_167694;
        case 0x167698u: goto label_167698;
        case 0x16769cu: goto label_16769c;
        case 0x1676a0u: goto label_1676a0;
        case 0x1676a4u: goto label_1676a4;
        case 0x1676a8u: goto label_1676a8;
        case 0x1676acu: goto label_1676ac;
        case 0x1676b0u: goto label_1676b0;
        case 0x1676b4u: goto label_1676b4;
        case 0x1676b8u: goto label_1676b8;
        case 0x1676bcu: goto label_1676bc;
        case 0x1676c0u: goto label_1676c0;
        case 0x1676c4u: goto label_1676c4;
        case 0x1676c8u: goto label_1676c8;
        case 0x1676ccu: goto label_1676cc;
        case 0x1676d0u: goto label_1676d0;
        case 0x1676d4u: goto label_1676d4;
        case 0x1676d8u: goto label_1676d8;
        case 0x1676dcu: goto label_1676dc;
        case 0x1676e0u: goto label_1676e0;
        case 0x1676e4u: goto label_1676e4;
        case 0x1676e8u: goto label_1676e8;
        case 0x1676ecu: goto label_1676ec;
        case 0x1676f0u: goto label_1676f0;
        case 0x1676f4u: goto label_1676f4;
        case 0x1676f8u: goto label_1676f8;
        case 0x1676fcu: goto label_1676fc;
        case 0x167700u: goto label_167700;
        case 0x167704u: goto label_167704;
        case 0x167708u: goto label_167708;
        case 0x16770cu: goto label_16770c;
        case 0x167710u: goto label_167710;
        case 0x167714u: goto label_167714;
        case 0x167718u: goto label_167718;
        case 0x16771cu: goto label_16771c;
        case 0x167720u: goto label_167720;
        case 0x167724u: goto label_167724;
        case 0x167728u: goto label_167728;
        case 0x16772cu: goto label_16772c;
        case 0x167730u: goto label_167730;
        case 0x167734u: goto label_167734;
        case 0x167738u: goto label_167738;
        case 0x16773cu: goto label_16773c;
        case 0x167740u: goto label_167740;
        case 0x167744u: goto label_167744;
        case 0x167748u: goto label_167748;
        case 0x16774cu: goto label_16774c;
        case 0x167750u: goto label_167750;
        case 0x167754u: goto label_167754;
        case 0x167758u: goto label_167758;
        case 0x16775cu: goto label_16775c;
        case 0x167760u: goto label_167760;
        case 0x167764u: goto label_167764;
        case 0x167768u: goto label_167768;
        case 0x16776cu: goto label_16776c;
        case 0x167770u: goto label_167770;
        case 0x167774u: goto label_167774;
        case 0x167778u: goto label_167778;
        case 0x16777cu: goto label_16777c;
        case 0x167780u: goto label_167780;
        case 0x167784u: goto label_167784;
        case 0x167788u: goto label_167788;
        case 0x16778cu: goto label_16778c;
        case 0x167790u: goto label_167790;
        case 0x167794u: goto label_167794;
        case 0x167798u: goto label_167798;
        case 0x16779cu: goto label_16779c;
        case 0x1677a0u: goto label_1677a0;
        case 0x1677a4u: goto label_1677a4;
        case 0x1677a8u: goto label_1677a8;
        case 0x1677acu: goto label_1677ac;
        case 0x1677b0u: goto label_1677b0;
        case 0x1677b4u: goto label_1677b4;
        case 0x1677b8u: goto label_1677b8;
        case 0x1677bcu: goto label_1677bc;
        case 0x1677c0u: goto label_1677c0;
        case 0x1677c4u: goto label_1677c4;
        case 0x1677c8u: goto label_1677c8;
        case 0x1677ccu: goto label_1677cc;
        case 0x1677d0u: goto label_1677d0;
        case 0x1677d4u: goto label_1677d4;
        case 0x1677d8u: goto label_1677d8;
        case 0x1677dcu: goto label_1677dc;
        case 0x1677e0u: goto label_1677e0;
        case 0x1677e4u: goto label_1677e4;
        case 0x1677e8u: goto label_1677e8;
        case 0x1677ecu: goto label_1677ec;
        case 0x1677f0u: goto label_1677f0;
        case 0x1677f4u: goto label_1677f4;
        case 0x1677f8u: goto label_1677f8;
        case 0x1677fcu: goto label_1677fc;
        case 0x167800u: goto label_167800;
        case 0x167804u: goto label_167804;
        case 0x167808u: goto label_167808;
        case 0x16780cu: goto label_16780c;
        case 0x167810u: goto label_167810;
        case 0x167814u: goto label_167814;
        case 0x167818u: goto label_167818;
        case 0x16781cu: goto label_16781c;
        case 0x167820u: goto label_167820;
        case 0x167824u: goto label_167824;
        case 0x167828u: goto label_167828;
        case 0x16782cu: goto label_16782c;
        case 0x167830u: goto label_167830;
        case 0x167834u: goto label_167834;
        case 0x167838u: goto label_167838;
        case 0x16783cu: goto label_16783c;
        case 0x167840u: goto label_167840;
        case 0x167844u: goto label_167844;
        case 0x167848u: goto label_167848;
        case 0x16784cu: goto label_16784c;
        case 0x167850u: goto label_167850;
        case 0x167854u: goto label_167854;
        case 0x167858u: goto label_167858;
        case 0x16785cu: goto label_16785c;
        case 0x167860u: goto label_167860;
        case 0x167864u: goto label_167864;
        case 0x167868u: goto label_167868;
        case 0x16786cu: goto label_16786c;
        case 0x167870u: goto label_167870;
        case 0x167874u: goto label_167874;
        case 0x167878u: goto label_167878;
        case 0x16787cu: goto label_16787c;
        case 0x167880u: goto label_167880;
        case 0x167884u: goto label_167884;
        case 0x167888u: goto label_167888;
        case 0x16788cu: goto label_16788c;
        case 0x167890u: goto label_167890;
        case 0x167894u: goto label_167894;
        case 0x167898u: goto label_167898;
        case 0x16789cu: goto label_16789c;
        case 0x1678a0u: goto label_1678a0;
        case 0x1678a4u: goto label_1678a4;
        case 0x1678a8u: goto label_1678a8;
        case 0x1678acu: goto label_1678ac;
        case 0x1678b0u: goto label_1678b0;
        case 0x1678b4u: goto label_1678b4;
        case 0x1678b8u: goto label_1678b8;
        case 0x1678bcu: goto label_1678bc;
        case 0x1678c0u: goto label_1678c0;
        case 0x1678c4u: goto label_1678c4;
        case 0x1678c8u: goto label_1678c8;
        case 0x1678ccu: goto label_1678cc;
        case 0x1678d0u: goto label_1678d0;
        case 0x1678d4u: goto label_1678d4;
        case 0x1678d8u: goto label_1678d8;
        case 0x1678dcu: goto label_1678dc;
        case 0x1678e0u: goto label_1678e0;
        case 0x1678e4u: goto label_1678e4;
        case 0x1678e8u: goto label_1678e8;
        case 0x1678ecu: goto label_1678ec;
        case 0x1678f0u: goto label_1678f0;
        case 0x1678f4u: goto label_1678f4;
        case 0x1678f8u: goto label_1678f8;
        case 0x1678fcu: goto label_1678fc;
        case 0x167900u: goto label_167900;
        case 0x167904u: goto label_167904;
        case 0x167908u: goto label_167908;
        case 0x16790cu: goto label_16790c;
        case 0x167910u: goto label_167910;
        case 0x167914u: goto label_167914;
        case 0x167918u: goto label_167918;
        case 0x16791cu: goto label_16791c;
        case 0x167920u: goto label_167920;
        case 0x167924u: goto label_167924;
        case 0x167928u: goto label_167928;
        case 0x16792cu: goto label_16792c;
        case 0x167930u: goto label_167930;
        case 0x167934u: goto label_167934;
        case 0x167938u: goto label_167938;
        case 0x16793cu: goto label_16793c;
        case 0x167940u: goto label_167940;
        case 0x167944u: goto label_167944;
        case 0x167948u: goto label_167948;
        case 0x16794cu: goto label_16794c;
        case 0x167950u: goto label_167950;
        case 0x167954u: goto label_167954;
        case 0x167958u: goto label_167958;
        case 0x16795cu: goto label_16795c;
        case 0x167960u: goto label_167960;
        case 0x167964u: goto label_167964;
        case 0x167968u: goto label_167968;
        case 0x16796cu: goto label_16796c;
        case 0x167970u: goto label_167970;
        case 0x167974u: goto label_167974;
        case 0x167978u: goto label_167978;
        case 0x16797cu: goto label_16797c;
        case 0x167980u: goto label_167980;
        case 0x167984u: goto label_167984;
        case 0x167988u: goto label_167988;
        case 0x16798cu: goto label_16798c;
        case 0x167990u: goto label_167990;
        case 0x167994u: goto label_167994;
        case 0x167998u: goto label_167998;
        case 0x16799cu: goto label_16799c;
        case 0x1679a0u: goto label_1679a0;
        case 0x1679a4u: goto label_1679a4;
        case 0x1679a8u: goto label_1679a8;
        case 0x1679acu: goto label_1679ac;
        case 0x1679b0u: goto label_1679b0;
        case 0x1679b4u: goto label_1679b4;
        case 0x1679b8u: goto label_1679b8;
        case 0x1679bcu: goto label_1679bc;
        case 0x1679c0u: goto label_1679c0;
        case 0x1679c4u: goto label_1679c4;
        case 0x1679c8u: goto label_1679c8;
        case 0x1679ccu: goto label_1679cc;
        case 0x1679d0u: goto label_1679d0;
        case 0x1679d4u: goto label_1679d4;
        case 0x1679d8u: goto label_1679d8;
        case 0x1679dcu: goto label_1679dc;
        case 0x1679e0u: goto label_1679e0;
        case 0x1679e4u: goto label_1679e4;
        default: break;
    }

    ctx->pc = 0x1673b8u;

label_1673b8:
    // 0x1673b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1673b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1673bc:
    // 0x1673bc: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1673bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_1673c0:
    // 0x1673c0: 0x8c62b198  lw          $v0, -0x4E68($v1)
    ctx->pc = 0x1673c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947224)));
label_1673c4:
    // 0x1673c4: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1673c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_1673c8:
    // 0x1673c8: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1673c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_1673cc:
    // 0x1673cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1673ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1673d0:
    // 0x1673d0: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x1673d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_1673d4:
    // 0x1673d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1673d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1673d8:
    // 0x1673d8: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1673d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_1673dc:
    // 0x1673dc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1673dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1673e0:
    // 0x1673e0: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1673e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_1673e4:
    // 0x1673e4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1673e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1673e8:
    // 0x1673e8: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1673e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_1673ec:
    // 0x1673ec: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x1673ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_1673f0:
    // 0x1673f0: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x1673f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_1673f4:
    // 0x1673f4: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1673f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_1673f8:
    // 0x1673f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1673f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1673fc:
    // 0x1673fc: 0xe7b90158  swc1        $f25, 0x158($sp)
    ctx->pc = 0x1673fcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_167400:
    // 0x167400: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x167400u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_167404:
    // 0x167404: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x167404u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_167408:
    // 0x167408: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x167408u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_16740c:
    // 0x16740c: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x16740cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_167410:
    // 0x167410: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_167414:
    if (ctx->pc == 0x167414u) {
        ctx->pc = 0x167414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167410u;
        // 0x167414: 0xe7b40130  swc1        $f20, 0x130($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x167418u;
        goto label_167418;
    }
    ctx->pc = 0x167410u;
    {
        const bool branch_taken_0x167410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167410u;
        // 0x167414: 0xe7b40130  swc1        $f20, 0x130($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167410) {
            ctx->pc = 0x167540u;
            goto label_167540;
        }
    }
    ctx->pc = 0x167418u;
label_167418:
    // 0x167418: 0x86e30052  lh          $v1, 0x52($s7)
    ctx->pc = 0x167418u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 82)));
label_16741c:
    // 0x16741c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x16741cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_167420:
    // 0x167420: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_167424:
    if (ctx->pc == 0x167424u) {
        ctx->pc = 0x167424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167420u;
        // 0x167424: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167428u;
        goto label_167428;
    }
    ctx->pc = 0x167420u;
    {
        const bool branch_taken_0x167420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167420u;
        // 0x167424: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167420) {
            ctx->pc = 0x167430u;
            goto label_167430;
        }
    }
    ctx->pc = 0x167428u;
label_167428:
    // 0x167428: 0x54620046  bnel        $v1, $v0, . + 4 + (0x46 << 2)
label_16742c:
    if (ctx->pc == 0x16742Cu) {
        ctx->pc = 0x16742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167428u;
        // 0x16742c: 0x828400e1  lb          $a0, 0xE1($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 225)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167430u;
        goto label_167430;
    }
    ctx->pc = 0x167428u;
    {
        const bool branch_taken_0x167428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167428) {
            ctx->pc = 0x16742Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167428u;
            // 0x16742c: 0x828400e1  lb          $a0, 0xE1($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 225)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167544u;
            goto label_167544;
        }
    }
    ctx->pc = 0x167430u;
label_167430:
    // 0x167430: 0x8ee200ac  lw          $v0, 0xAC($s7)
    ctx->pc = 0x167430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 172)));
label_167434:
    // 0x167434: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x167434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_167438:
    // 0x167438: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x167438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_16743c:
    // 0x16743c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x16743cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_167440:
    // 0x167440: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x167440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167444:
    // 0x167444: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x167444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_167448:
    // 0x167448: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x167448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_16744c:
    // 0x16744c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x16744cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_167450:
    // 0x167450: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x167450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_167454:
    // 0x167454: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x167454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167458:
    // 0x167458: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x167458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16745c:
    // 0x16745c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x16745cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_167460:
    // 0x167460: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x167460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_167464:
    // 0x167464: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x167464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_167468:
    // 0x167468: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x167468u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_16746c:
    // 0x16746c: 0xc047e6c  jal         func_11F9B0
label_167470:
    if (ctx->pc == 0x167470u) {
        ctx->pc = 0x167470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16746Cu;
        // 0x167470: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x167474u;
        goto label_167474;
    }
    ctx->pc = 0x16746Cu;
    SET_GPR_U32(ctx, 31, 0x167474u);
    ctx->pc = 0x167470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16746Cu;
    // 0x167470: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x16746Cu, 0x167474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167474u;
label_167474:
    // 0x167474: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x167474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_167478:
    // 0x167478: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x167478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_16747c:
    // 0x16747c: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x16747cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_167480:
    // 0x167480: 0xa0f809  jalr        $a1
label_167484:
    if (ctx->pc == 0x167484u) {
        ctx->pc = 0x167484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167480u;
        // 0x167484: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167488u;
        goto label_167488;
    }
    ctx->pc = 0x167480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x167488u);
        ctx->pc = 0x167484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167480u;
        // 0x167484: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167480u, 0x167488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167488u;
label_167488:
    // 0x167488: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167488u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_16748c:
    // 0x16748c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16748cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167490:
    // 0x167490: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x167490u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_167494:
    // 0x167494: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x167494u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_167498:
    // 0x167498: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x167498u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_16749c:
    // 0x16749c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x16749cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1674a0:
    // 0x1674a0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1674a0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1674a4:
    // 0x1674a4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1674a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1674a8:
    // 0x1674a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1674a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1674ac:
    // 0x1674ac: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x1674acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1674b0:
    // 0x1674b0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1674b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1674b4:
    // 0x1674b4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1674b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1674b8:
    // 0x1674b8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1674b8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_1674bc:
    // 0x1674bc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1674bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1674c0:
    // 0x1674c0: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x1674c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1674c4:
    // 0x1674c4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1674c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1674c8:
    // 0x1674c8: 0xc047e6c  jal         func_11F9B0
label_1674cc:
    if (ctx->pc == 0x1674CCu) {
        ctx->pc = 0x1674CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674C8u;
        // 0x1674cc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1674D0u;
        goto label_1674d0;
    }
    ctx->pc = 0x1674C8u;
    SET_GPR_U32(ctx, 31, 0x1674D0u);
    ctx->pc = 0x1674CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1674C8u;
    // 0x1674cc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1674C8u, 0x1674D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674D0u;
label_1674d0:
    // 0x1674d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1674d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1674d4:
    // 0x1674d4: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x1674d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_1674d8:
    // 0x1674d8: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x1674d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_1674dc:
    // 0x1674dc: 0xa0f809  jalr        $a1
label_1674e0:
    if (ctx->pc == 0x1674E0u) {
        ctx->pc = 0x1674E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674DCu;
        // 0x1674e0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1674E4u;
        goto label_1674e4;
    }
    ctx->pc = 0x1674DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1674E4u);
        ctx->pc = 0x1674E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674DCu;
        // 0x1674e0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1674DCu, 0x1674E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1674E4u;
label_1674e4:
    // 0x1674e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1674e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1674e8:
    // 0x1674e8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1674e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1674ec:
    // 0x1674ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1674ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1674f0:
    // 0x1674f0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1674f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1674f4:
    // 0x1674f4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1674f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1674f8:
    // 0x1674f8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1674f8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1674fc:
    // 0x1674fc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1674fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_167500:
    // 0x167500: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x167500u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_167504:
    // 0x167504: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x167504u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_167508:
    // 0x167508: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x167508u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_16750c:
    // 0x16750c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x16750cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_167510:
    // 0x167510: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x167510u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_167514:
    // 0x167514: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x167514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_167518:
    // 0x167518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x167518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16751c:
    // 0x16751c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x16751cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_167520:
    // 0x167520: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x167520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_167524:
    // 0x167524: 0x0  nop
    ctx->pc = 0x167524u;
    // NOP
label_167528:
    // 0x167528: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_16752c:
    if (ctx->pc == 0x16752Cu) {
        ctx->pc = 0x16752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167528u;
        // 0x16752c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167530u;
        goto label_167530;
    }
    ctx->pc = 0x167528u;
    {
        const bool branch_taken_0x167528 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167528u;
        // 0x16752c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167528) {
            ctx->pc = 0x167538u;
            goto label_167538;
        }
    }
    ctx->pc = 0x167530u;
label_167530:
    // 0x167530: 0x10000003  b           . + 4 + (0x3 << 2)
label_167534:
    if (ctx->pc == 0x167534u) {
        ctx->pc = 0x167534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167530u;
        // 0x167534: 0xa28000e1  sb          $zero, 0xE1($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 225), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167538u;
        goto label_167538;
    }
    ctx->pc = 0x167530u;
    {
        const bool branch_taken_0x167530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167530u;
        // 0x167534: 0xa28000e1  sb          $zero, 0xE1($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 225), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167530) {
            ctx->pc = 0x167540u;
            goto label_167540;
        }
    }
    ctx->pc = 0x167538u;
label_167538:
    // 0x167538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16753c:
    // 0x16753c: 0xa28200e1  sb          $v0, 0xE1($s4)
    ctx->pc = 0x16753cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 225), (uint8_t)GPR_U32(ctx, 2));
label_167540:
    // 0x167540: 0x828400e1  lb          $a0, 0xE1($s4)
    ctx->pc = 0x167540u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 225)));
label_167544:
    // 0x167544: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x167544u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_167548:
    // 0x167548: 0x8e62489c  lw          $v0, 0x489C($s3)
    ctx->pc = 0x167548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_16754c:
    // 0x16754c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16754cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_167550:
    // 0x167550: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x167550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_167554:
    // 0x167554: 0xc0e409a  jal         func_390268
label_167558:
    if (ctx->pc == 0x167558u) {
        ctx->pc = 0x167558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167554u;
        // 0x167558: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16755Cu;
        goto label_16755c;
    }
    ctx->pc = 0x167554u;
    SET_GPR_U32(ctx, 31, 0x16755Cu);
    ctx->pc = 0x167558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167554u;
    // 0x167558: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x167554u, 0x16755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16755Cu;
label_16755c:
    // 0x16755c: 0x828400e1  lb          $a0, 0xE1($s4)
    ctx->pc = 0x16755cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 225)));
label_167560:
    // 0x167560: 0xc047e6c  jal         func_11F9B0
label_167564:
    if (ctx->pc == 0x167564u) {
        ctx->pc = 0x167564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167560u;
        // 0x167564: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167568u;
        goto label_167568;
    }
    ctx->pc = 0x167560u;
    SET_GPR_U32(ctx, 31, 0x167568u);
    ctx->pc = 0x167564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167560u;
    // 0x167564: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x167560u, 0x167568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167568u;
label_167568:
    // 0x167568: 0x828300e1  lb          $v1, 0xE1($s4)
    ctx->pc = 0x167568u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 225)));
label_16756c:
    // 0x16756c: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_167570:
    if (ctx->pc == 0x167570u) {
        ctx->pc = 0x167570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16756Cu;
        // 0x167570: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167574u;
        goto label_167574;
    }
    ctx->pc = 0x16756Cu;
    {
        const bool branch_taken_0x16756c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x167570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16756Cu;
        // 0x167570: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16756c) {
            ctx->pc = 0x1675A0u;
            goto label_1675a0;
        }
    }
    ctx->pc = 0x167574u;
label_167574:
    // 0x167574: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_167578:
    if (ctx->pc == 0x167578u) {
        ctx->pc = 0x16757Cu;
        goto label_16757c;
    }
    ctx->pc = 0x167574u;
    {
        const bool branch_taken_0x167574 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x167574) {
            ctx->pc = 0x167588u;
            goto label_167588;
        }
    }
    ctx->pc = 0x16757Cu;
label_16757c:
    // 0x16757c: 0xc047e6c  jal         func_11F9B0
label_167580:
    if (ctx->pc == 0x167580u) {
        ctx->pc = 0x167580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16757Cu;
        // 0x167580: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167584u;
        goto label_167584;
    }
    ctx->pc = 0x16757Cu;
    SET_GPR_U32(ctx, 31, 0x167584u);
    ctx->pc = 0x167580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16757Cu;
    // 0x167580: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x16757Cu, 0x167584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167584u;
label_167584:
    // 0x167584: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x167584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167588:
    // 0x167588: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_16758c:
    if (ctx->pc == 0x16758Cu) {
        ctx->pc = 0x167590u;
        goto label_167590;
    }
    ctx->pc = 0x167588u;
    {
        const bool branch_taken_0x167588 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x167588) {
            ctx->pc = 0x1675A0u;
            goto label_1675a0;
        }
    }
    ctx->pc = 0x167590u;
label_167590:
    // 0x167590: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x167590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_167594:
    // 0x167594: 0xc0e409a  jal         func_390268
label_167598:
    if (ctx->pc == 0x167598u) {
        ctx->pc = 0x167598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167594u;
        // 0x167598: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16759Cu;
        goto label_16759c;
    }
    ctx->pc = 0x167594u;
    SET_GPR_U32(ctx, 31, 0x16759Cu);
    ctx->pc = 0x167598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167594u;
    // 0x167598: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x167594u, 0x16759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16759Cu;
label_16759c:
    // 0x16759c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16759cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1675a0:
    // 0x1675a0: 0x124000db  beqz        $s2, . + 4 + (0xDB << 2)
label_1675a4:
    if (ctx->pc == 0x1675A4u) {
        ctx->pc = 0x1675A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675A0u;
        // 0x1675a4: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1675A8u;
        goto label_1675a8;
    }
    ctx->pc = 0x1675A0u;
    {
        const bool branch_taken_0x1675a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675A0u;
        // 0x1675a4: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675a0) {
            ctx->pc = 0x167910u;
            goto label_167910;
        }
    }
    ctx->pc = 0x1675A8u;
label_1675a8:
    // 0x1675a8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1675a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1675ac:
    // 0x1675ac: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x1675acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_1675b0:
    // 0x1675b0: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x1675b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_1675b4:
    // 0x1675b4: 0x84c40218  lh          $a0, 0x218($a2)
    ctx->pc = 0x1675b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 536)));
label_1675b8:
    // 0x1675b8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x1675b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1675bc:
    // 0x1675bc: 0x8cc2021c  lw          $v0, 0x21C($a2)
    ctx->pc = 0x1675bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 540)));
label_1675c0:
    // 0x1675c0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1675c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1675c4:
    // 0x1675c4: 0x65a821  addu        $s5, $v1, $a1
    ctx->pc = 0x1675c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1675c8:
    // 0x1675c8: 0x40f809  jalr        $v0
label_1675cc:
    if (ctx->pc == 0x1675CCu) {
        ctx->pc = 0x1675CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675C8u;
        // 0x1675cc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1675D0u;
        goto label_1675d0;
    }
    ctx->pc = 0x1675C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1675D0u);
        ctx->pc = 0x1675CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675C8u;
        // 0x1675cc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1675C8u, 0x1675D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1675D0u;
label_1675d0:
    // 0x1675d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1675d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1675d4:
    // 0x1675d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1675d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1675d8:
    // 0x1675d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1675d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1675dc:
    // 0x1675dc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1675dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1675e0:
    // 0x1675e0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1675e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1675e4:
    // 0x1675e4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1675e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1675e8:
    // 0x1675e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1675e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1675ec:
    // 0x1675ec: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x1675ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1675f0:
    // 0x1675f0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1675f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1675f4:
    // 0x1675f4: 0x60f809  jalr        $v1
label_1675f8:
    if (ctx->pc == 0x1675F8u) {
        ctx->pc = 0x1675F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675F4u;
        // 0x1675f8: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1675FCu;
        goto label_1675fc;
    }
    ctx->pc = 0x1675F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1675FCu);
        ctx->pc = 0x1675F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675F4u;
        // 0x1675f8: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1675F4u, 0x1675FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1675FCu;
label_1675fc:
    // 0x1675fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1675fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167600:
    // 0x167600: 0xc0cd8ec  jal         func_3363B0
label_167604:
    if (ctx->pc == 0x167604u) {
        ctx->pc = 0x167604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167600u;
        // 0x167604: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167608u;
        goto label_167608;
    }
    ctx->pc = 0x167600u;
    SET_GPR_U32(ctx, 31, 0x167608u);
    ctx->pc = 0x167604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167600u;
    // 0x167604: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x167600u, 0x167608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167608u;
label_167608:
    // 0x167608: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x167608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16760c:
    // 0x16760c: 0x844402a8  lh          $a0, 0x2A8($v0)
    ctx->pc = 0x16760cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 680)));
label_167610:
    // 0x167610: 0x8c4302ac  lw          $v1, 0x2AC($v0)
    ctx->pc = 0x167610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
label_167614:
    // 0x167614: 0x60f809  jalr        $v1
label_167618:
    if (ctx->pc == 0x167618u) {
        ctx->pc = 0x167618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167614u;
        // 0x167618: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16761Cu;
        goto label_16761c;
    }
    ctx->pc = 0x167614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16761Cu);
        ctx->pc = 0x167618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167614u;
        // 0x167618: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167614u, 0x16761Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16761Cu;
label_16761c:
    // 0x16761c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x16761cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_167620:
    // 0x167620: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x167620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_167624:
    // 0x167624: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x167624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_167628:
    // 0x167628: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x167628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16762c:
    // 0x16762c: 0xc6f70068  lwc1        $f23, 0x68($s7)
    ctx->pc = 0x16762cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_167630:
    // 0x167630: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x167630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_167634:
    // 0x167634: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x167634u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_167638:
    // 0x167638: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x167638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16763c:
    // 0x16763c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16763cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_167640:
    // 0x167640: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x167640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_167644:
    // 0x167644: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x167644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_167648:
    // 0x167648: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x167648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16764c:
    // 0x16764c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x16764cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_167650:
    // 0x167650: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x167650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_167654:
    // 0x167654: 0x86f60052  lh          $s6, 0x52($s7)
    ctx->pc = 0x167654u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 82)));
label_167658:
    // 0x167658: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x167658u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16765c:
    // 0x16765c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x16765cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_167660:
    // 0x167660: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x167660u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_167664:
    // 0x167664: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x167664u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_167668:
    // 0x167668: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x167668u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_16766c:
    // 0x16766c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x16766cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_167670:
    // 0x167670: 0x46020582  mul.s       $f22, $f0, $f2
    ctx->pc = 0x167670u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_167674:
    // 0x167674: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x167674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_167678:
    // 0x167678: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x167678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_16767c:
    // 0x16767c: 0xc0941c2  jal         func_250708
label_167680:
    if (ctx->pc == 0x167680u) {
        ctx->pc = 0x167680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16767Cu;
        // 0x167680: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167684u;
        goto label_167684;
    }
    ctx->pc = 0x16767Cu;
    SET_GPR_U32(ctx, 31, 0x167684u);
    ctx->pc = 0x167680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16767Cu;
    // 0x167680: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x16767Cu, 0x167684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167684u;
label_167684:
    // 0x167684: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
label_167688:
    if (ctx->pc == 0x167688u) {
        ctx->pc = 0x167688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167684u;
        // 0x167688: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16768Cu;
        goto label_16768c;
    }
    ctx->pc = 0x167684u;
    {
        const bool branch_taken_0x167684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167684u;
        // 0x167688: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167684) {
            ctx->pc = 0x167910u;
            goto label_167910;
        }
    }
    ctx->pc = 0x16768Cu;
label_16768c:
    // 0x16768c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x16768cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_167690:
    // 0x167690: 0xc094454  jal         func_251150
label_167694:
    if (ctx->pc == 0x167694u) {
        ctx->pc = 0x167694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167690u;
        // 0x167694: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167698u;
        goto label_167698;
    }
    ctx->pc = 0x167690u;
    SET_GPR_U32(ctx, 31, 0x167698u);
    ctx->pc = 0x167694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167690u;
    // 0x167694: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251150u, 0x167690u, 0x167698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167698u;
label_167698:
    // 0x167698: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x167698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16769c:
    // 0x16769c: 0x1200009c  beqz        $s0, . + 4 + (0x9C << 2)
label_1676a0:
    if (ctx->pc == 0x1676A0u) {
        ctx->pc = 0x1676A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16769Cu;
        // 0x1676a0: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1676A4u;
        goto label_1676a4;
    }
    ctx->pc = 0x16769Cu;
    {
        const bool branch_taken_0x16769c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1676A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16769Cu;
        // 0x1676a0: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16769c) {
            ctx->pc = 0x167910u;
            goto label_167910;
        }
    }
    ctx->pc = 0x1676A4u;
label_1676a4:
    // 0x1676a4: 0x4600a606  mov.s       $f24, $f20
    ctx->pc = 0x1676a4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[20]);
label_1676a8:
    // 0x1676a8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x1676a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1676ac:
    // 0x1676ac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1676acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1676b0:
    // 0x1676b0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1676b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1676b4:
    // 0x1676b4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x1676b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1676b8:
    // 0x1676b8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1676b8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1676bc:
    // 0x1676bc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x1676bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_1676c0:
    // 0x1676c0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1676c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_1676c4:
    // 0x1676c4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1676c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1676c8:
    // 0x1676c8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1676c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_1676cc:
    // 0x1676cc: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x1676ccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_1676d0:
    // 0x1676d0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1676d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_1676d4:
    // 0x1676d4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1676d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_1676d8:
    // 0x1676d8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1676d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1676dc:
    // 0x1676dc: 0x3c1e4000  lui         $fp, 0x4000
    ctx->pc = 0x1676dcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)16384 << 16));
label_1676e0:
    // 0x1676e0: 0x4616cb41  sub.s       $f13, $f25, $f22
    ctx->pc = 0x1676e0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[25], ctx->f[22]);
label_1676e4:
    // 0x1676e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1676e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1676e8:
    // 0x1676e8: 0x2444b8a0  addiu       $a0, $v0, -0x4760
    ctx->pc = 0x1676e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949024));
label_1676ec:
    // 0x1676ec: 0xc0cd508  jal         func_335420
label_1676f0:
    if (ctx->pc == 0x1676F0u) {
        ctx->pc = 0x1676F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676ECu;
        // 0x1676f0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1676F4u;
        goto label_1676f4;
    }
    ctx->pc = 0x1676ECu;
    SET_GPR_U32(ctx, 31, 0x1676F4u);
    ctx->pc = 0x1676F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1676ECu;
    // 0x1676f0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x1676ECu, 0x1676F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1676F4u;
label_1676f4:
    // 0x1676f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1676f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1676f8:
    // 0x1676f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1676f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1676fc:
    // 0x1676fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1676fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_167700:
    // 0x167700: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x167700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_167704:
    // 0x167704: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x167704u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_167708:
    // 0x167708: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x167708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_16770c:
    // 0x16770c: 0xc09474a  jal         func_251D28
label_167710:
    if (ctx->pc == 0x167710u) {
        ctx->pc = 0x167710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16770Cu;
        // 0x167710: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167714u;
        goto label_167714;
    }
    ctx->pc = 0x16770Cu;
    SET_GPR_U32(ctx, 31, 0x167714u);
    ctx->pc = 0x167710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16770Cu;
    // 0x167710: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x251D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251D28u, 0x16770Cu, 0x167714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167714u;
label_167714:
    // 0x167714: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_167718:
    if (ctx->pc == 0x167718u) {
        ctx->pc = 0x167718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167714u;
        // 0x167718: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16771Cu;
        goto label_16771c;
    }
    ctx->pc = 0x167714u;
    {
        const bool branch_taken_0x167714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167714u;
        // 0x167718: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167714) {
            ctx->pc = 0x16783Cu;
            goto label_16783c;
        }
    }
    ctx->pc = 0x16771Cu;
label_16771c:
    // 0x16771c: 0x4618a502  mul.s       $f20, $f20, $f24
    ctx->pc = 0x16771cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
label_167720:
    // 0x167720: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x167720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_167724:
    // 0x167724: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x167724u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_167728:
    // 0x167728: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x167728u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16772c:
    // 0x16772c: 0xc12e310  jal         func_4B8C40
label_167730:
    if (ctx->pc == 0x167730u) {
        ctx->pc = 0x167730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16772Cu;
        // 0x167730: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167734u;
        goto label_167734;
    }
    ctx->pc = 0x16772Cu;
    SET_GPR_U32(ctx, 31, 0x167734u);
    ctx->pc = 0x167730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16772Cu;
    // 0x167730: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x16772Cu, 0x167734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167734u;
label_167734:
    // 0x167734: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x167734u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_167738:
    // 0x167738: 0xc12e29c  jal         func_4B8A70
label_16773c:
    if (ctx->pc == 0x16773Cu) {
        ctx->pc = 0x16773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167738u;
        // 0x16773c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167740u;
        goto label_167740;
    }
    ctx->pc = 0x167738u;
    SET_GPR_U32(ctx, 31, 0x167740u);
    ctx->pc = 0x16773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167738u;
    // 0x16773c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x167738u, 0x167740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167740u;
label_167740:
    // 0x167740: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x167740u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_167744:
    // 0x167744: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x167744u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_167748:
    // 0x167748: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x167748u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_16774c:
    // 0x16774c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x16774cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_167750:
    // 0x167750: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x167750u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_167754:
    // 0x167754: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x167754u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_167758:
    // 0x167758: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x167758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_16775c:
    // 0x16775c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x16775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_167760:
    // 0x167760: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x167760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_167764:
    // 0x167764: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x167764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167768:
    // 0x167768: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x167768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16776c:
    // 0x16776c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x16776cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_167770:
    // 0x167770: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x167770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_167774:
    // 0x167774: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x167774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_167778:
    // 0x167778: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x167778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_16777c:
    // 0x16777c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x16777cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_167780:
    // 0x167780: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x167780u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_167784:
    // 0x167784: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x167784u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_167788:
    // 0x167788: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x167788u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_16778c:
    // 0x16778c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x16778cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_167790:
    // 0x167790: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x167790u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_167794:
    // 0x167794: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x167794u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_167798:
    // 0x167798: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x167798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_16779c:
    // 0x16779c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x16779cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1677a0:
    // 0x1677a0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x1677a0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_1677a4:
    // 0x1677a4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1677a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1677a8:
    // 0x1677a8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1677a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1677ac:
    // 0x1677ac: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x1677acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1677b0:
    // 0x1677b0: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x1677b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1677b4:
    // 0x1677b4: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x1677b4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_1677b8:
    // 0x1677b8: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x1677b8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1677bc:
    // 0x1677bc: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x1677bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1677c0:
    // 0x1677c0: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x1677c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1677c4:
    // 0x1677c4: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x1677c4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_1677c8:
    // 0x1677c8: 0x4402b800  mfc1        $v0, $f23
    ctx->pc = 0x1677c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1677cc:
    // 0x1677cc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1677ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1677d0:
    // 0x1677d0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1677d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1677d4:
    // 0x1677d4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1677d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1677d8:
    // 0x1677d8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1677d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1677dc:
    // 0x1677dc: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1677dcu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_1677e0:
    // 0x1677e0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1677e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_1677e4:
    // 0x1677e4: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x1677e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
label_1677e8:
    // 0x1677e8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1677e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_1677ec:
    // 0x1677ec: 0x48be1000  qmtc2.ni    $fp, $vf2
    ctx->pc = 0x1677ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 30));
label_1677f0:
    // 0x1677f0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1677f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1677f4:
    // 0x1677f4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1677f4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_1677f8:
    // 0x1677f8: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x1677f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
label_1677fc:
    // 0x1677fc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1677fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_167800:
    // 0x167800: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x167800u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_167804:
    // 0x167804: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x167804u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_167808:
    // 0x167808: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x167808u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_16780c:
    // 0x16780c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x16780cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_167810:
    // 0x167810: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x167810u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_167814:
    // 0x167814: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x167814u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_167818:
    // 0x167818: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x167818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
label_16781c:
    // 0x16781c: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x16781cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
label_167820:
    // 0x167820: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x167820u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_167824:
    // 0x167824: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x167824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_167828:
    // 0x167828: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x167828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
label_16782c:
    // 0x16782c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x16782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_167830:
    // 0x167830: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x167830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_167834:
    // 0x167834: 0x661ffaa  bgez        $s3, . + 4 + (-0x56 << 2)
label_167838:
    if (ctx->pc == 0x167838u) {
        ctx->pc = 0x167838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167834u;
        // 0x167838: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16783Cu;
        goto label_16783c;
    }
    ctx->pc = 0x167834u;
    {
        const bool branch_taken_0x167834 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x167838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167834u;
        // 0x167838: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167834) {
            ctx->pc = 0x1676E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1676e0;
        }
    }
    ctx->pc = 0x16783Cu;
label_16783c:
    // 0x16783c: 0x6600034  bltz        $s3, . + 4 + (0x34 << 2)
label_167840:
    if (ctx->pc == 0x167840u) {
        ctx->pc = 0x167840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16783Cu;
        // 0x167840: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167844u;
        goto label_167844;
    }
    ctx->pc = 0x16783Cu;
    {
        const bool branch_taken_0x16783c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x167840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16783Cu;
        // 0x167840: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16783c) {
            ctx->pc = 0x167910u;
            goto label_167910;
        }
    }
    ctx->pc = 0x167844u;
label_167844:
    // 0x167844: 0x8c62b198  lw          $v0, -0x4E68($v1)
    ctx->pc = 0x167844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947224)));
label_167848:
    // 0x167848: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x167848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_16784c:
    // 0x16784c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_167850:
    if (ctx->pc == 0x167850u) {
        ctx->pc = 0x167850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16784Cu;
        // 0x167850: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167854u;
        goto label_167854;
    }
    ctx->pc = 0x16784Cu;
    {
        const bool branch_taken_0x16784c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16784Cu;
        // 0x167850: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16784c) {
            ctx->pc = 0x1678E4u;
            goto label_1678e4;
        }
    }
    ctx->pc = 0x167854u;
label_167854:
    // 0x167854: 0xc059cdc  jal         func_167370
label_167858:
    if (ctx->pc == 0x167858u) {
        ctx->pc = 0x167858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167854u;
        // 0x167858: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16785Cu;
        goto label_16785c;
    }
    ctx->pc = 0x167854u;
    SET_GPR_U32(ctx, 31, 0x16785Cu);
    ctx->pc = 0x167858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167854u;
    // 0x167858: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167370u, 0x167854u, 0x16785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16785Cu;
label_16785c:
    // 0x16785c: 0xc047e6c  jal         func_11F9B0
label_167860:
    if (ctx->pc == 0x167860u) {
        ctx->pc = 0x167860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16785Cu;
        // 0x167860: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167864u;
        goto label_167864;
    }
    ctx->pc = 0x16785Cu;
    SET_GPR_U32(ctx, 31, 0x167864u);
    ctx->pc = 0x167860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16785Cu;
    // 0x167860: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x16785Cu, 0x167864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167864u;
label_167864:
    // 0x167864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x167864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167868:
    // 0x167868: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_16786c:
    if (ctx->pc == 0x16786Cu) {
        ctx->pc = 0x16786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167868u;
        // 0x16786c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167870u;
        goto label_167870;
    }
    ctx->pc = 0x167868u;
    {
        const bool branch_taken_0x167868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167868u;
        // 0x16786c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167868) {
            ctx->pc = 0x1678E4u;
            goto label_1678e4;
        }
    }
    ctx->pc = 0x167870u;
label_167870:
    // 0x167870: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x167870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167874:
    // 0x167874: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x167874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_167878:
    // 0x167878: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x167878u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
label_16787c:
    // 0x16787c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x16787cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_167880:
    // 0x167880: 0x0  nop
    ctx->pc = 0x167880u;
    // NOP
label_167884:
    // 0x167884: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x167884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_167888:
    // 0x167888: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x167888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_16788c:
    // 0x16788c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_167890:
    // 0x167890: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x167890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_167894:
    // 0x167894: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x167894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_167898:
    // 0x167898: 0x60f809  jalr        $v1
label_16789c:
    if (ctx->pc == 0x16789Cu) {
        ctx->pc = 0x16789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167898u;
        // 0x16789c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1678A0u;
        goto label_1678a0;
    }
    ctx->pc = 0x167898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1678A0u);
        ctx->pc = 0x16789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167898u;
        // 0x16789c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167898u, 0x1678A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1678A0u;
label_1678a0:
    // 0x1678a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1678a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1678a4:
    // 0x1678a4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1678a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1678a8:
    // 0x1678a8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1678a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1678ac:
    // 0x1678ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1678acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1678b0:
    // 0x1678b0: 0xc441cc60  lwc1        $f1, -0x33A0($v0)
    ctx->pc = 0x1678b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1678b4:
    // 0x1678b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1678b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1678b8:
    // 0x1678b8: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1678b8u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_1678bc:
    // 0x1678bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1678bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1678c0:
    // 0x1678c0: 0x46170368  max.s       $f13, $f0, $f23
    ctx->pc = 0x1678c0u;
    ctx->f[13] = std::max(ctx->f[0], ctx->f[23]);
label_1678c4:
    // 0x1678c4: 0xc048952  jal         func_122548
label_1678c8:
    if (ctx->pc == 0x1678C8u) {
        ctx->pc = 0x1678CCu;
        goto label_1678cc;
    }
    ctx->pc = 0x1678C4u;
    SET_GPR_U32(ctx, 31, 0x1678CCu);
    ctx->pc = 0x122548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122548u, 0x1678C4u, 0x1678CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1678CCu;
label_1678cc:
    // 0x1678cc: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_1678d0:
    if (ctx->pc == 0x1678D0u) {
        ctx->pc = 0x1678D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678CCu;
        // 0x1678d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1678D4u;
        goto label_1678d4;
    }
    ctx->pc = 0x1678CCu;
    {
        const bool branch_taken_0x1678cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1678D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678CCu;
        // 0x1678d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1678cc) {
            ctx->pc = 0x16799Cu;
            goto label_16799c;
        }
    }
    ctx->pc = 0x1678D4u;
label_1678d4:
    // 0x1678d4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1678d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1678d8:
    // 0x1678d8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1678d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1678dc:
    // 0x1678dc: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1678dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1678e0:
    // 0x1678e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1678e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1678e4:
    // 0x1678e4: 0x12c20005  beq         $s6, $v0, . + 4 + (0x5 << 2)
label_1678e8:
    if (ctx->pc == 0x1678E8u) {
        ctx->pc = 0x1678E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678E4u;
        // 0x1678e8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1678ECu;
        goto label_1678ec;
    }
    ctx->pc = 0x1678E4u;
    {
        const bool branch_taken_0x1678e4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1678E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678E4u;
        // 0x1678e8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1678e4) {
            ctx->pc = 0x1678FCu;
            goto label_1678fc;
        }
    }
    ctx->pc = 0x1678ECu;
label_1678ec:
    // 0x1678ec: 0x12c20003  beq         $s6, $v0, . + 4 + (0x3 << 2)
label_1678f0:
    if (ctx->pc == 0x1678F0u) {
        ctx->pc = 0x1678F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678ECu;
        // 0x1678f0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1678F4u;
        goto label_1678f4;
    }
    ctx->pc = 0x1678ECu;
    {
        const bool branch_taken_0x1678ec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1678F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678ECu;
        // 0x1678f0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1678ec) {
            ctx->pc = 0x1678FCu;
            goto label_1678fc;
        }
    }
    ctx->pc = 0x1678F4u;
label_1678f4:
    // 0x1678f4: 0x16c20008  bne         $s6, $v0, . + 4 + (0x8 << 2)
label_1678f8:
    if (ctx->pc == 0x1678F8u) {
        ctx->pc = 0x1678FCu;
        goto label_1678fc;
    }
    ctx->pc = 0x1678F4u;
    {
        const bool branch_taken_0x1678f4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1678f4) {
            ctx->pc = 0x167918u;
            goto label_167918;
        }
    }
    ctx->pc = 0x1678FCu;
label_1678fc:
    // 0x1678fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1678fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_167900:
    // 0x167900: 0xc0594ba  jal         func_1652E8
label_167904:
    if (ctx->pc == 0x167904u) {
        ctx->pc = 0x167904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167900u;
        // 0x167904: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167908u;
        goto label_167908;
    }
    ctx->pc = 0x167900u;
    SET_GPR_U32(ctx, 31, 0x167908u);
    ctx->pc = 0x167904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167900u;
    // 0x167904: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1652E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1652E8u, 0x167900u, 0x167908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167908u;
label_167908:
    // 0x167908: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_16790c:
    if (ctx->pc == 0x16790Cu) {
        ctx->pc = 0x16790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167908u;
        // 0x16790c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167910u;
        goto label_167910;
    }
    ctx->pc = 0x167908u;
    {
        const bool branch_taken_0x167908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167908u;
        // 0x16790c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167908) {
            ctx->pc = 0x16799Cu;
            goto label_16799c;
        }
    }
    ctx->pc = 0x167910u;
label_167910:
    // 0x167910: 0x10000022  b           . + 4 + (0x22 << 2)
label_167914:
    if (ctx->pc == 0x167914u) {
        ctx->pc = 0x167914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167910u;
        // 0x167914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167918u;
        goto label_167918;
    }
    ctx->pc = 0x167910u;
    {
        const bool branch_taken_0x167910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167910u;
        // 0x167914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167910) {
            ctx->pc = 0x16799Cu;
            goto label_16799c;
        }
    }
    ctx->pc = 0x167918u;
label_167918:
    // 0x167918: 0xc05b602  jal         func_16D808
label_16791c:
    if (ctx->pc == 0x16791Cu) {
        ctx->pc = 0x16791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167918u;
        // 0x16791c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167920u;
        goto label_167920;
    }
    ctx->pc = 0x167918u;
    SET_GPR_U32(ctx, 31, 0x167920u);
    ctx->pc = 0x16791Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167918u;
    // 0x16791c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D808u, 0x167918u, 0x167920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167920u;
label_167920:
    // 0x167920: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x167920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_167924:
    // 0x167924: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x167924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167928:
    // 0x167928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16792c:
    // 0x16792c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x16792cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_167930:
    // 0x167930: 0xc0ab6b0  jal         func_2ADAC0
label_167934:
    if (ctx->pc == 0x167934u) {
        ctx->pc = 0x167934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167930u;
        // 0x167934: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167938u;
        goto label_167938;
    }
    ctx->pc = 0x167930u;
    SET_GPR_U32(ctx, 31, 0x167938u);
    ctx->pc = 0x167934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167930u;
    // 0x167934: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADAC0u, 0x167930u, 0x167938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167938u;
label_167938:
    // 0x167938: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_16793c:
    if (ctx->pc == 0x16793Cu) {
        ctx->pc = 0x16793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167938u;
        // 0x16793c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167940u;
        goto label_167940;
    }
    ctx->pc = 0x167938u;
    {
        const bool branch_taken_0x167938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167938) {
            ctx->pc = 0x16793Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167938u;
            // 0x16793c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16799Cu;
            goto label_16799c;
        }
    }
    ctx->pc = 0x167940u;
label_167940:
    // 0x167940: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x167940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_167944:
    // 0x167944: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x167944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
label_167948:
    // 0x167948: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x167948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_16794c:
    // 0x16794c: 0xc10587a  jal         func_4161E8
label_167950:
    if (ctx->pc == 0x167950u) {
        ctx->pc = 0x167950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16794Cu;
        // 0x167950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167954u;
        goto label_167954;
    }
    ctx->pc = 0x16794Cu;
    SET_GPR_U32(ctx, 31, 0x167954u);
    ctx->pc = 0x167950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16794Cu;
    // 0x167950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x16794Cu, 0x167954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167954u;
label_167954:
    // 0x167954: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167954u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_167958:
    // 0x167958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16795c:
    // 0x16795c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x16795cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_167960:
    // 0x167960: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x167960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_167964:
    // 0x167964: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x167964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_167968:
    // 0x167968: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x167968u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_16796c:
    // 0x16796c: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x16796cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_167970:
    // 0x167970: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x167970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_167974:
    // 0x167974: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x167974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167978:
    // 0x167978: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x167978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_16797c:
    // 0x16797c: 0xc048952  jal         func_122548
label_167980:
    if (ctx->pc == 0x167980u) {
        ctx->pc = 0x167980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16797Cu;
        // 0x167980: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x167984u;
        goto label_167984;
    }
    ctx->pc = 0x16797Cu;
    SET_GPR_U32(ctx, 31, 0x167984u);
    ctx->pc = 0x167980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16797Cu;
    // 0x167980: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122548u, 0x16797Cu, 0x167984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167984u;
label_167984:
    // 0x167984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x167984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167988:
    // 0x167988: 0x1043ffe1  beq         $v0, $v1, . + 4 + (-0x1F << 2)
label_16798c:
    if (ctx->pc == 0x16798Cu) {
        ctx->pc = 0x16798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167988u;
        // 0x16798c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167990u;
        goto label_167990;
    }
    ctx->pc = 0x167988u;
    {
        const bool branch_taken_0x167988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167988u;
        // 0x16798c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167988) {
            ctx->pc = 0x167910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167910;
        }
    }
    ctx->pc = 0x167990u;
label_167990:
    // 0x167990: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x167990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167994:
    // 0x167994: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x167994u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_167998:
    // 0x167998: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x167998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_16799c:
    // 0x16799c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x16799cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1679a0:
    // 0x1679a0: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1679a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1679a4:
    // 0x1679a4: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1679a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1679a8:
    // 0x1679a8: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1679a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1679ac:
    // 0x1679ac: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1679acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1679b0:
    // 0x1679b0: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x1679b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1679b4:
    // 0x1679b4: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x1679b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1679b8:
    // 0x1679b8: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x1679b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1679bc:
    // 0x1679bc: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1679bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1679c0:
    // 0x1679c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1679c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1679c4:
    // 0x1679c4: 0xc7b90158  lwc1        $f25, 0x158($sp)
    ctx->pc = 0x1679c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1679c8:
    // 0x1679c8: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x1679c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1679cc:
    // 0x1679cc: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x1679ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1679d0:
    // 0x1679d0: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x1679d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1679d4:
    // 0x1679d4: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x1679d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1679d8:
    // 0x1679d8: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1679d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1679dc:
    // 0x1679dc: 0x3e00008  jr          $ra
label_1679e0:
    if (ctx->pc == 0x1679E0u) {
        ctx->pc = 0x1679E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679DCu;
        // 0x1679e0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1679E4u;
        goto label_1679e4;
    }
    ctx->pc = 0x1679DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1679E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679DCu;
        // 0x1679e0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1679DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1679E4u;
label_1679e4:
    // 0x1679e4: 0x0  nop
    ctx->pc = 0x1679e4u;
    // NOP
    ctx->pc = 0x1679e8u;
}
