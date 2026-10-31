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

// Function: sub_00402000
// Address: 0x402000 - 0x402bf8
void sub_00402000_0x402000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00402000_0x402000");
#endif

    switch (ctx->pc) {
        case 0x402000u: goto label_402000;
        case 0x402004u: goto label_402004;
        case 0x402008u: goto label_402008;
        case 0x40200cu: goto label_40200c;
        case 0x402010u: goto label_402010;
        case 0x402014u: goto label_402014;
        case 0x402018u: goto label_402018;
        case 0x40201cu: goto label_40201c;
        case 0x402020u: goto label_402020;
        case 0x402024u: goto label_402024;
        case 0x402028u: goto label_402028;
        case 0x40202cu: goto label_40202c;
        case 0x402030u: goto label_402030;
        case 0x402034u: goto label_402034;
        case 0x402038u: goto label_402038;
        case 0x40203cu: goto label_40203c;
        case 0x402040u: goto label_402040;
        case 0x402044u: goto label_402044;
        case 0x402048u: goto label_402048;
        case 0x40204cu: goto label_40204c;
        case 0x402050u: goto label_402050;
        case 0x402054u: goto label_402054;
        case 0x402058u: goto label_402058;
        case 0x40205cu: goto label_40205c;
        case 0x402060u: goto label_402060;
        case 0x402064u: goto label_402064;
        case 0x402068u: goto label_402068;
        case 0x40206cu: goto label_40206c;
        case 0x402070u: goto label_402070;
        case 0x402074u: goto label_402074;
        case 0x402078u: goto label_402078;
        case 0x40207cu: goto label_40207c;
        case 0x402080u: goto label_402080;
        case 0x402084u: goto label_402084;
        case 0x402088u: goto label_402088;
        case 0x40208cu: goto label_40208c;
        case 0x402090u: goto label_402090;
        case 0x402094u: goto label_402094;
        case 0x402098u: goto label_402098;
        case 0x40209cu: goto label_40209c;
        case 0x4020a0u: goto label_4020a0;
        case 0x4020a4u: goto label_4020a4;
        case 0x4020a8u: goto label_4020a8;
        case 0x4020acu: goto label_4020ac;
        case 0x4020b0u: goto label_4020b0;
        case 0x4020b4u: goto label_4020b4;
        case 0x4020b8u: goto label_4020b8;
        case 0x4020bcu: goto label_4020bc;
        case 0x4020c0u: goto label_4020c0;
        case 0x4020c4u: goto label_4020c4;
        case 0x4020c8u: goto label_4020c8;
        case 0x4020ccu: goto label_4020cc;
        case 0x4020d0u: goto label_4020d0;
        case 0x4020d4u: goto label_4020d4;
        case 0x4020d8u: goto label_4020d8;
        case 0x4020dcu: goto label_4020dc;
        case 0x4020e0u: goto label_4020e0;
        case 0x4020e4u: goto label_4020e4;
        case 0x4020e8u: goto label_4020e8;
        case 0x4020ecu: goto label_4020ec;
        case 0x4020f0u: goto label_4020f0;
        case 0x4020f4u: goto label_4020f4;
        case 0x4020f8u: goto label_4020f8;
        case 0x4020fcu: goto label_4020fc;
        case 0x402100u: goto label_402100;
        case 0x402104u: goto label_402104;
        case 0x402108u: goto label_402108;
        case 0x40210cu: goto label_40210c;
        case 0x402110u: goto label_402110;
        case 0x402114u: goto label_402114;
        case 0x402118u: goto label_402118;
        case 0x40211cu: goto label_40211c;
        case 0x402120u: goto label_402120;
        case 0x402124u: goto label_402124;
        case 0x402128u: goto label_402128;
        case 0x40212cu: goto label_40212c;
        case 0x402130u: goto label_402130;
        case 0x402134u: goto label_402134;
        case 0x402138u: goto label_402138;
        case 0x40213cu: goto label_40213c;
        case 0x402140u: goto label_402140;
        case 0x402144u: goto label_402144;
        case 0x402148u: goto label_402148;
        case 0x40214cu: goto label_40214c;
        case 0x402150u: goto label_402150;
        case 0x402154u: goto label_402154;
        case 0x402158u: goto label_402158;
        case 0x40215cu: goto label_40215c;
        case 0x402160u: goto label_402160;
        case 0x402164u: goto label_402164;
        case 0x402168u: goto label_402168;
        case 0x40216cu: goto label_40216c;
        case 0x402170u: goto label_402170;
        case 0x402174u: goto label_402174;
        case 0x402178u: goto label_402178;
        case 0x40217cu: goto label_40217c;
        case 0x402180u: goto label_402180;
        case 0x402184u: goto label_402184;
        case 0x402188u: goto label_402188;
        case 0x40218cu: goto label_40218c;
        case 0x402190u: goto label_402190;
        case 0x402194u: goto label_402194;
        case 0x402198u: goto label_402198;
        case 0x40219cu: goto label_40219c;
        case 0x4021a0u: goto label_4021a0;
        case 0x4021a4u: goto label_4021a4;
        case 0x4021a8u: goto label_4021a8;
        case 0x4021acu: goto label_4021ac;
        case 0x4021b0u: goto label_4021b0;
        case 0x4021b4u: goto label_4021b4;
        case 0x4021b8u: goto label_4021b8;
        case 0x4021bcu: goto label_4021bc;
        case 0x4021c0u: goto label_4021c0;
        case 0x4021c4u: goto label_4021c4;
        case 0x4021c8u: goto label_4021c8;
        case 0x4021ccu: goto label_4021cc;
        case 0x4021d0u: goto label_4021d0;
        case 0x4021d4u: goto label_4021d4;
        case 0x4021d8u: goto label_4021d8;
        case 0x4021dcu: goto label_4021dc;
        case 0x4021e0u: goto label_4021e0;
        case 0x4021e4u: goto label_4021e4;
        case 0x4021e8u: goto label_4021e8;
        case 0x4021ecu: goto label_4021ec;
        case 0x4021f0u: goto label_4021f0;
        case 0x4021f4u: goto label_4021f4;
        case 0x4021f8u: goto label_4021f8;
        case 0x4021fcu: goto label_4021fc;
        case 0x402200u: goto label_402200;
        case 0x402204u: goto label_402204;
        case 0x402208u: goto label_402208;
        case 0x40220cu: goto label_40220c;
        case 0x402210u: goto label_402210;
        case 0x402214u: goto label_402214;
        case 0x402218u: goto label_402218;
        case 0x40221cu: goto label_40221c;
        case 0x402220u: goto label_402220;
        case 0x402224u: goto label_402224;
        case 0x402228u: goto label_402228;
        case 0x40222cu: goto label_40222c;
        case 0x402230u: goto label_402230;
        case 0x402234u: goto label_402234;
        case 0x402238u: goto label_402238;
        case 0x40223cu: goto label_40223c;
        case 0x402240u: goto label_402240;
        case 0x402244u: goto label_402244;
        case 0x402248u: goto label_402248;
        case 0x40224cu: goto label_40224c;
        case 0x402250u: goto label_402250;
        case 0x402254u: goto label_402254;
        case 0x402258u: goto label_402258;
        case 0x40225cu: goto label_40225c;
        case 0x402260u: goto label_402260;
        case 0x402264u: goto label_402264;
        case 0x402268u: goto label_402268;
        case 0x40226cu: goto label_40226c;
        case 0x402270u: goto label_402270;
        case 0x402274u: goto label_402274;
        case 0x402278u: goto label_402278;
        case 0x40227cu: goto label_40227c;
        case 0x402280u: goto label_402280;
        case 0x402284u: goto label_402284;
        case 0x402288u: goto label_402288;
        case 0x40228cu: goto label_40228c;
        case 0x402290u: goto label_402290;
        case 0x402294u: goto label_402294;
        case 0x402298u: goto label_402298;
        case 0x40229cu: goto label_40229c;
        case 0x4022a0u: goto label_4022a0;
        case 0x4022a4u: goto label_4022a4;
        case 0x4022a8u: goto label_4022a8;
        case 0x4022acu: goto label_4022ac;
        case 0x4022b0u: goto label_4022b0;
        case 0x4022b4u: goto label_4022b4;
        case 0x4022b8u: goto label_4022b8;
        case 0x4022bcu: goto label_4022bc;
        case 0x4022c0u: goto label_4022c0;
        case 0x4022c4u: goto label_4022c4;
        case 0x4022c8u: goto label_4022c8;
        case 0x4022ccu: goto label_4022cc;
        case 0x4022d0u: goto label_4022d0;
        case 0x4022d4u: goto label_4022d4;
        case 0x4022d8u: goto label_4022d8;
        case 0x4022dcu: goto label_4022dc;
        case 0x4022e0u: goto label_4022e0;
        case 0x4022e4u: goto label_4022e4;
        case 0x4022e8u: goto label_4022e8;
        case 0x4022ecu: goto label_4022ec;
        case 0x4022f0u: goto label_4022f0;
        case 0x4022f4u: goto label_4022f4;
        case 0x4022f8u: goto label_4022f8;
        case 0x4022fcu: goto label_4022fc;
        case 0x402300u: goto label_402300;
        case 0x402304u: goto label_402304;
        case 0x402308u: goto label_402308;
        case 0x40230cu: goto label_40230c;
        case 0x402310u: goto label_402310;
        case 0x402314u: goto label_402314;
        case 0x402318u: goto label_402318;
        case 0x40231cu: goto label_40231c;
        case 0x402320u: goto label_402320;
        case 0x402324u: goto label_402324;
        case 0x402328u: goto label_402328;
        case 0x40232cu: goto label_40232c;
        case 0x402330u: goto label_402330;
        case 0x402334u: goto label_402334;
        case 0x402338u: goto label_402338;
        case 0x40233cu: goto label_40233c;
        case 0x402340u: goto label_402340;
        case 0x402344u: goto label_402344;
        case 0x402348u: goto label_402348;
        case 0x40234cu: goto label_40234c;
        case 0x402350u: goto label_402350;
        case 0x402354u: goto label_402354;
        case 0x402358u: goto label_402358;
        case 0x40235cu: goto label_40235c;
        case 0x402360u: goto label_402360;
        case 0x402364u: goto label_402364;
        case 0x402368u: goto label_402368;
        case 0x40236cu: goto label_40236c;
        case 0x402370u: goto label_402370;
        case 0x402374u: goto label_402374;
        case 0x402378u: goto label_402378;
        case 0x40237cu: goto label_40237c;
        case 0x402380u: goto label_402380;
        case 0x402384u: goto label_402384;
        case 0x402388u: goto label_402388;
        case 0x40238cu: goto label_40238c;
        case 0x402390u: goto label_402390;
        case 0x402394u: goto label_402394;
        case 0x402398u: goto label_402398;
        case 0x40239cu: goto label_40239c;
        case 0x4023a0u: goto label_4023a0;
        case 0x4023a4u: goto label_4023a4;
        case 0x4023a8u: goto label_4023a8;
        case 0x4023acu: goto label_4023ac;
        case 0x4023b0u: goto label_4023b0;
        case 0x4023b4u: goto label_4023b4;
        case 0x4023b8u: goto label_4023b8;
        case 0x4023bcu: goto label_4023bc;
        case 0x4023c0u: goto label_4023c0;
        case 0x4023c4u: goto label_4023c4;
        case 0x4023c8u: goto label_4023c8;
        case 0x4023ccu: goto label_4023cc;
        case 0x4023d0u: goto label_4023d0;
        case 0x4023d4u: goto label_4023d4;
        case 0x4023d8u: goto label_4023d8;
        case 0x4023dcu: goto label_4023dc;
        case 0x4023e0u: goto label_4023e0;
        case 0x4023e4u: goto label_4023e4;
        case 0x4023e8u: goto label_4023e8;
        case 0x4023ecu: goto label_4023ec;
        case 0x4023f0u: goto label_4023f0;
        case 0x4023f4u: goto label_4023f4;
        case 0x4023f8u: goto label_4023f8;
        case 0x4023fcu: goto label_4023fc;
        case 0x402400u: goto label_402400;
        case 0x402404u: goto label_402404;
        case 0x402408u: goto label_402408;
        case 0x40240cu: goto label_40240c;
        case 0x402410u: goto label_402410;
        case 0x402414u: goto label_402414;
        case 0x402418u: goto label_402418;
        case 0x40241cu: goto label_40241c;
        case 0x402420u: goto label_402420;
        case 0x402424u: goto label_402424;
        case 0x402428u: goto label_402428;
        case 0x40242cu: goto label_40242c;
        case 0x402430u: goto label_402430;
        case 0x402434u: goto label_402434;
        case 0x402438u: goto label_402438;
        case 0x40243cu: goto label_40243c;
        case 0x402440u: goto label_402440;
        case 0x402444u: goto label_402444;
        case 0x402448u: goto label_402448;
        case 0x40244cu: goto label_40244c;
        case 0x402450u: goto label_402450;
        case 0x402454u: goto label_402454;
        case 0x402458u: goto label_402458;
        case 0x40245cu: goto label_40245c;
        case 0x402460u: goto label_402460;
        case 0x402464u: goto label_402464;
        case 0x402468u: goto label_402468;
        case 0x40246cu: goto label_40246c;
        case 0x402470u: goto label_402470;
        case 0x402474u: goto label_402474;
        case 0x402478u: goto label_402478;
        case 0x40247cu: goto label_40247c;
        case 0x402480u: goto label_402480;
        case 0x402484u: goto label_402484;
        case 0x402488u: goto label_402488;
        case 0x40248cu: goto label_40248c;
        case 0x402490u: goto label_402490;
        case 0x402494u: goto label_402494;
        case 0x402498u: goto label_402498;
        case 0x40249cu: goto label_40249c;
        case 0x4024a0u: goto label_4024a0;
        case 0x4024a4u: goto label_4024a4;
        case 0x4024a8u: goto label_4024a8;
        case 0x4024acu: goto label_4024ac;
        case 0x4024b0u: goto label_4024b0;
        case 0x4024b4u: goto label_4024b4;
        case 0x4024b8u: goto label_4024b8;
        case 0x4024bcu: goto label_4024bc;
        case 0x4024c0u: goto label_4024c0;
        case 0x4024c4u: goto label_4024c4;
        case 0x4024c8u: goto label_4024c8;
        case 0x4024ccu: goto label_4024cc;
        case 0x4024d0u: goto label_4024d0;
        case 0x4024d4u: goto label_4024d4;
        case 0x4024d8u: goto label_4024d8;
        case 0x4024dcu: goto label_4024dc;
        case 0x4024e0u: goto label_4024e0;
        case 0x4024e4u: goto label_4024e4;
        case 0x4024e8u: goto label_4024e8;
        case 0x4024ecu: goto label_4024ec;
        case 0x4024f0u: goto label_4024f0;
        case 0x4024f4u: goto label_4024f4;
        case 0x4024f8u: goto label_4024f8;
        case 0x4024fcu: goto label_4024fc;
        case 0x402500u: goto label_402500;
        case 0x402504u: goto label_402504;
        case 0x402508u: goto label_402508;
        case 0x40250cu: goto label_40250c;
        case 0x402510u: goto label_402510;
        case 0x402514u: goto label_402514;
        case 0x402518u: goto label_402518;
        case 0x40251cu: goto label_40251c;
        case 0x402520u: goto label_402520;
        case 0x402524u: goto label_402524;
        case 0x402528u: goto label_402528;
        case 0x40252cu: goto label_40252c;
        case 0x402530u: goto label_402530;
        case 0x402534u: goto label_402534;
        case 0x402538u: goto label_402538;
        case 0x40253cu: goto label_40253c;
        case 0x402540u: goto label_402540;
        case 0x402544u: goto label_402544;
        case 0x402548u: goto label_402548;
        case 0x40254cu: goto label_40254c;
        case 0x402550u: goto label_402550;
        case 0x402554u: goto label_402554;
        case 0x402558u: goto label_402558;
        case 0x40255cu: goto label_40255c;
        case 0x402560u: goto label_402560;
        case 0x402564u: goto label_402564;
        case 0x402568u: goto label_402568;
        case 0x40256cu: goto label_40256c;
        case 0x402570u: goto label_402570;
        case 0x402574u: goto label_402574;
        case 0x402578u: goto label_402578;
        case 0x40257cu: goto label_40257c;
        case 0x402580u: goto label_402580;
        case 0x402584u: goto label_402584;
        case 0x402588u: goto label_402588;
        case 0x40258cu: goto label_40258c;
        case 0x402590u: goto label_402590;
        case 0x402594u: goto label_402594;
        case 0x402598u: goto label_402598;
        case 0x40259cu: goto label_40259c;
        case 0x4025a0u: goto label_4025a0;
        case 0x4025a4u: goto label_4025a4;
        case 0x4025a8u: goto label_4025a8;
        case 0x4025acu: goto label_4025ac;
        case 0x4025b0u: goto label_4025b0;
        case 0x4025b4u: goto label_4025b4;
        case 0x4025b8u: goto label_4025b8;
        case 0x4025bcu: goto label_4025bc;
        case 0x4025c0u: goto label_4025c0;
        case 0x4025c4u: goto label_4025c4;
        case 0x4025c8u: goto label_4025c8;
        case 0x4025ccu: goto label_4025cc;
        case 0x4025d0u: goto label_4025d0;
        case 0x4025d4u: goto label_4025d4;
        case 0x4025d8u: goto label_4025d8;
        case 0x4025dcu: goto label_4025dc;
        case 0x4025e0u: goto label_4025e0;
        case 0x4025e4u: goto label_4025e4;
        case 0x4025e8u: goto label_4025e8;
        case 0x4025ecu: goto label_4025ec;
        case 0x4025f0u: goto label_4025f0;
        case 0x4025f4u: goto label_4025f4;
        case 0x4025f8u: goto label_4025f8;
        case 0x4025fcu: goto label_4025fc;
        case 0x402600u: goto label_402600;
        case 0x402604u: goto label_402604;
        case 0x402608u: goto label_402608;
        case 0x40260cu: goto label_40260c;
        case 0x402610u: goto label_402610;
        case 0x402614u: goto label_402614;
        case 0x402618u: goto label_402618;
        case 0x40261cu: goto label_40261c;
        case 0x402620u: goto label_402620;
        case 0x402624u: goto label_402624;
        case 0x402628u: goto label_402628;
        case 0x40262cu: goto label_40262c;
        case 0x402630u: goto label_402630;
        case 0x402634u: goto label_402634;
        case 0x402638u: goto label_402638;
        case 0x40263cu: goto label_40263c;
        case 0x402640u: goto label_402640;
        case 0x402644u: goto label_402644;
        case 0x402648u: goto label_402648;
        case 0x40264cu: goto label_40264c;
        case 0x402650u: goto label_402650;
        case 0x402654u: goto label_402654;
        case 0x402658u: goto label_402658;
        case 0x40265cu: goto label_40265c;
        case 0x402660u: goto label_402660;
        case 0x402664u: goto label_402664;
        case 0x402668u: goto label_402668;
        case 0x40266cu: goto label_40266c;
        case 0x402670u: goto label_402670;
        case 0x402674u: goto label_402674;
        case 0x402678u: goto label_402678;
        case 0x40267cu: goto label_40267c;
        case 0x402680u: goto label_402680;
        case 0x402684u: goto label_402684;
        case 0x402688u: goto label_402688;
        case 0x40268cu: goto label_40268c;
        case 0x402690u: goto label_402690;
        case 0x402694u: goto label_402694;
        case 0x402698u: goto label_402698;
        case 0x40269cu: goto label_40269c;
        case 0x4026a0u: goto label_4026a0;
        case 0x4026a4u: goto label_4026a4;
        case 0x4026a8u: goto label_4026a8;
        case 0x4026acu: goto label_4026ac;
        case 0x4026b0u: goto label_4026b0;
        case 0x4026b4u: goto label_4026b4;
        case 0x4026b8u: goto label_4026b8;
        case 0x4026bcu: goto label_4026bc;
        case 0x4026c0u: goto label_4026c0;
        case 0x4026c4u: goto label_4026c4;
        case 0x4026c8u: goto label_4026c8;
        case 0x4026ccu: goto label_4026cc;
        case 0x4026d0u: goto label_4026d0;
        case 0x4026d4u: goto label_4026d4;
        case 0x4026d8u: goto label_4026d8;
        case 0x4026dcu: goto label_4026dc;
        case 0x4026e0u: goto label_4026e0;
        case 0x4026e4u: goto label_4026e4;
        case 0x4026e8u: goto label_4026e8;
        case 0x4026ecu: goto label_4026ec;
        case 0x4026f0u: goto label_4026f0;
        case 0x4026f4u: goto label_4026f4;
        case 0x4026f8u: goto label_4026f8;
        case 0x4026fcu: goto label_4026fc;
        case 0x402700u: goto label_402700;
        case 0x402704u: goto label_402704;
        case 0x402708u: goto label_402708;
        case 0x40270cu: goto label_40270c;
        case 0x402710u: goto label_402710;
        case 0x402714u: goto label_402714;
        case 0x402718u: goto label_402718;
        case 0x40271cu: goto label_40271c;
        case 0x402720u: goto label_402720;
        case 0x402724u: goto label_402724;
        case 0x402728u: goto label_402728;
        case 0x40272cu: goto label_40272c;
        case 0x402730u: goto label_402730;
        case 0x402734u: goto label_402734;
        case 0x402738u: goto label_402738;
        case 0x40273cu: goto label_40273c;
        case 0x402740u: goto label_402740;
        case 0x402744u: goto label_402744;
        case 0x402748u: goto label_402748;
        case 0x40274cu: goto label_40274c;
        case 0x402750u: goto label_402750;
        case 0x402754u: goto label_402754;
        case 0x402758u: goto label_402758;
        case 0x40275cu: goto label_40275c;
        case 0x402760u: goto label_402760;
        case 0x402764u: goto label_402764;
        case 0x402768u: goto label_402768;
        case 0x40276cu: goto label_40276c;
        case 0x402770u: goto label_402770;
        case 0x402774u: goto label_402774;
        case 0x402778u: goto label_402778;
        case 0x40277cu: goto label_40277c;
        case 0x402780u: goto label_402780;
        case 0x402784u: goto label_402784;
        case 0x402788u: goto label_402788;
        case 0x40278cu: goto label_40278c;
        case 0x402790u: goto label_402790;
        case 0x402794u: goto label_402794;
        case 0x402798u: goto label_402798;
        case 0x40279cu: goto label_40279c;
        case 0x4027a0u: goto label_4027a0;
        case 0x4027a4u: goto label_4027a4;
        case 0x4027a8u: goto label_4027a8;
        case 0x4027acu: goto label_4027ac;
        case 0x4027b0u: goto label_4027b0;
        case 0x4027b4u: goto label_4027b4;
        case 0x4027b8u: goto label_4027b8;
        case 0x4027bcu: goto label_4027bc;
        case 0x4027c0u: goto label_4027c0;
        case 0x4027c4u: goto label_4027c4;
        case 0x4027c8u: goto label_4027c8;
        case 0x4027ccu: goto label_4027cc;
        case 0x4027d0u: goto label_4027d0;
        case 0x4027d4u: goto label_4027d4;
        case 0x4027d8u: goto label_4027d8;
        case 0x4027dcu: goto label_4027dc;
        case 0x4027e0u: goto label_4027e0;
        case 0x4027e4u: goto label_4027e4;
        case 0x4027e8u: goto label_4027e8;
        case 0x4027ecu: goto label_4027ec;
        case 0x4027f0u: goto label_4027f0;
        case 0x4027f4u: goto label_4027f4;
        case 0x4027f8u: goto label_4027f8;
        case 0x4027fcu: goto label_4027fc;
        case 0x402800u: goto label_402800;
        case 0x402804u: goto label_402804;
        case 0x402808u: goto label_402808;
        case 0x40280cu: goto label_40280c;
        case 0x402810u: goto label_402810;
        case 0x402814u: goto label_402814;
        case 0x402818u: goto label_402818;
        case 0x40281cu: goto label_40281c;
        case 0x402820u: goto label_402820;
        case 0x402824u: goto label_402824;
        case 0x402828u: goto label_402828;
        case 0x40282cu: goto label_40282c;
        case 0x402830u: goto label_402830;
        case 0x402834u: goto label_402834;
        case 0x402838u: goto label_402838;
        case 0x40283cu: goto label_40283c;
        case 0x402840u: goto label_402840;
        case 0x402844u: goto label_402844;
        case 0x402848u: goto label_402848;
        case 0x40284cu: goto label_40284c;
        case 0x402850u: goto label_402850;
        case 0x402854u: goto label_402854;
        case 0x402858u: goto label_402858;
        case 0x40285cu: goto label_40285c;
        case 0x402860u: goto label_402860;
        case 0x402864u: goto label_402864;
        case 0x402868u: goto label_402868;
        case 0x40286cu: goto label_40286c;
        case 0x402870u: goto label_402870;
        case 0x402874u: goto label_402874;
        case 0x402878u: goto label_402878;
        case 0x40287cu: goto label_40287c;
        case 0x402880u: goto label_402880;
        case 0x402884u: goto label_402884;
        case 0x402888u: goto label_402888;
        case 0x40288cu: goto label_40288c;
        case 0x402890u: goto label_402890;
        case 0x402894u: goto label_402894;
        case 0x402898u: goto label_402898;
        case 0x40289cu: goto label_40289c;
        case 0x4028a0u: goto label_4028a0;
        case 0x4028a4u: goto label_4028a4;
        case 0x4028a8u: goto label_4028a8;
        case 0x4028acu: goto label_4028ac;
        case 0x4028b0u: goto label_4028b0;
        case 0x4028b4u: goto label_4028b4;
        case 0x4028b8u: goto label_4028b8;
        case 0x4028bcu: goto label_4028bc;
        case 0x4028c0u: goto label_4028c0;
        case 0x4028c4u: goto label_4028c4;
        case 0x4028c8u: goto label_4028c8;
        case 0x4028ccu: goto label_4028cc;
        case 0x4028d0u: goto label_4028d0;
        case 0x4028d4u: goto label_4028d4;
        case 0x4028d8u: goto label_4028d8;
        case 0x4028dcu: goto label_4028dc;
        case 0x4028e0u: goto label_4028e0;
        case 0x4028e4u: goto label_4028e4;
        case 0x4028e8u: goto label_4028e8;
        case 0x4028ecu: goto label_4028ec;
        case 0x4028f0u: goto label_4028f0;
        case 0x4028f4u: goto label_4028f4;
        case 0x4028f8u: goto label_4028f8;
        case 0x4028fcu: goto label_4028fc;
        case 0x402900u: goto label_402900;
        case 0x402904u: goto label_402904;
        case 0x402908u: goto label_402908;
        case 0x40290cu: goto label_40290c;
        case 0x402910u: goto label_402910;
        case 0x402914u: goto label_402914;
        case 0x402918u: goto label_402918;
        case 0x40291cu: goto label_40291c;
        case 0x402920u: goto label_402920;
        case 0x402924u: goto label_402924;
        case 0x402928u: goto label_402928;
        case 0x40292cu: goto label_40292c;
        case 0x402930u: goto label_402930;
        case 0x402934u: goto label_402934;
        case 0x402938u: goto label_402938;
        case 0x40293cu: goto label_40293c;
        case 0x402940u: goto label_402940;
        case 0x402944u: goto label_402944;
        case 0x402948u: goto label_402948;
        case 0x40294cu: goto label_40294c;
        case 0x402950u: goto label_402950;
        case 0x402954u: goto label_402954;
        case 0x402958u: goto label_402958;
        case 0x40295cu: goto label_40295c;
        case 0x402960u: goto label_402960;
        case 0x402964u: goto label_402964;
        case 0x402968u: goto label_402968;
        case 0x40296cu: goto label_40296c;
        case 0x402970u: goto label_402970;
        case 0x402974u: goto label_402974;
        case 0x402978u: goto label_402978;
        case 0x40297cu: goto label_40297c;
        case 0x402980u: goto label_402980;
        case 0x402984u: goto label_402984;
        case 0x402988u: goto label_402988;
        case 0x40298cu: goto label_40298c;
        case 0x402990u: goto label_402990;
        case 0x402994u: goto label_402994;
        case 0x402998u: goto label_402998;
        case 0x40299cu: goto label_40299c;
        case 0x4029a0u: goto label_4029a0;
        case 0x4029a4u: goto label_4029a4;
        case 0x4029a8u: goto label_4029a8;
        case 0x4029acu: goto label_4029ac;
        case 0x4029b0u: goto label_4029b0;
        case 0x4029b4u: goto label_4029b4;
        case 0x4029b8u: goto label_4029b8;
        case 0x4029bcu: goto label_4029bc;
        case 0x4029c0u: goto label_4029c0;
        case 0x4029c4u: goto label_4029c4;
        case 0x4029c8u: goto label_4029c8;
        case 0x4029ccu: goto label_4029cc;
        case 0x4029d0u: goto label_4029d0;
        case 0x4029d4u: goto label_4029d4;
        case 0x4029d8u: goto label_4029d8;
        case 0x4029dcu: goto label_4029dc;
        case 0x4029e0u: goto label_4029e0;
        case 0x4029e4u: goto label_4029e4;
        case 0x4029e8u: goto label_4029e8;
        case 0x4029ecu: goto label_4029ec;
        case 0x4029f0u: goto label_4029f0;
        case 0x4029f4u: goto label_4029f4;
        case 0x4029f8u: goto label_4029f8;
        case 0x4029fcu: goto label_4029fc;
        case 0x402a00u: goto label_402a00;
        case 0x402a04u: goto label_402a04;
        case 0x402a08u: goto label_402a08;
        case 0x402a0cu: goto label_402a0c;
        case 0x402a10u: goto label_402a10;
        case 0x402a14u: goto label_402a14;
        case 0x402a18u: goto label_402a18;
        case 0x402a1cu: goto label_402a1c;
        case 0x402a20u: goto label_402a20;
        case 0x402a24u: goto label_402a24;
        case 0x402a28u: goto label_402a28;
        case 0x402a2cu: goto label_402a2c;
        case 0x402a30u: goto label_402a30;
        case 0x402a34u: goto label_402a34;
        case 0x402a38u: goto label_402a38;
        case 0x402a3cu: goto label_402a3c;
        case 0x402a40u: goto label_402a40;
        case 0x402a44u: goto label_402a44;
        case 0x402a48u: goto label_402a48;
        case 0x402a4cu: goto label_402a4c;
        case 0x402a50u: goto label_402a50;
        case 0x402a54u: goto label_402a54;
        case 0x402a58u: goto label_402a58;
        case 0x402a5cu: goto label_402a5c;
        case 0x402a60u: goto label_402a60;
        case 0x402a64u: goto label_402a64;
        case 0x402a68u: goto label_402a68;
        case 0x402a6cu: goto label_402a6c;
        case 0x402a70u: goto label_402a70;
        case 0x402a74u: goto label_402a74;
        case 0x402a78u: goto label_402a78;
        case 0x402a7cu: goto label_402a7c;
        case 0x402a80u: goto label_402a80;
        case 0x402a84u: goto label_402a84;
        case 0x402a88u: goto label_402a88;
        case 0x402a8cu: goto label_402a8c;
        case 0x402a90u: goto label_402a90;
        case 0x402a94u: goto label_402a94;
        case 0x402a98u: goto label_402a98;
        case 0x402a9cu: goto label_402a9c;
        case 0x402aa0u: goto label_402aa0;
        case 0x402aa4u: goto label_402aa4;
        case 0x402aa8u: goto label_402aa8;
        case 0x402aacu: goto label_402aac;
        case 0x402ab0u: goto label_402ab0;
        case 0x402ab4u: goto label_402ab4;
        case 0x402ab8u: goto label_402ab8;
        case 0x402abcu: goto label_402abc;
        case 0x402ac0u: goto label_402ac0;
        case 0x402ac4u: goto label_402ac4;
        case 0x402ac8u: goto label_402ac8;
        case 0x402accu: goto label_402acc;
        case 0x402ad0u: goto label_402ad0;
        case 0x402ad4u: goto label_402ad4;
        case 0x402ad8u: goto label_402ad8;
        case 0x402adcu: goto label_402adc;
        case 0x402ae0u: goto label_402ae0;
        case 0x402ae4u: goto label_402ae4;
        case 0x402ae8u: goto label_402ae8;
        case 0x402aecu: goto label_402aec;
        case 0x402af0u: goto label_402af0;
        case 0x402af4u: goto label_402af4;
        case 0x402af8u: goto label_402af8;
        case 0x402afcu: goto label_402afc;
        case 0x402b00u: goto label_402b00;
        case 0x402b04u: goto label_402b04;
        case 0x402b08u: goto label_402b08;
        case 0x402b0cu: goto label_402b0c;
        case 0x402b10u: goto label_402b10;
        case 0x402b14u: goto label_402b14;
        case 0x402b18u: goto label_402b18;
        case 0x402b1cu: goto label_402b1c;
        case 0x402b20u: goto label_402b20;
        case 0x402b24u: goto label_402b24;
        case 0x402b28u: goto label_402b28;
        case 0x402b2cu: goto label_402b2c;
        case 0x402b30u: goto label_402b30;
        case 0x402b34u: goto label_402b34;
        case 0x402b38u: goto label_402b38;
        case 0x402b3cu: goto label_402b3c;
        case 0x402b40u: goto label_402b40;
        case 0x402b44u: goto label_402b44;
        case 0x402b48u: goto label_402b48;
        case 0x402b4cu: goto label_402b4c;
        case 0x402b50u: goto label_402b50;
        case 0x402b54u: goto label_402b54;
        case 0x402b58u: goto label_402b58;
        case 0x402b5cu: goto label_402b5c;
        case 0x402b60u: goto label_402b60;
        case 0x402b64u: goto label_402b64;
        case 0x402b68u: goto label_402b68;
        case 0x402b6cu: goto label_402b6c;
        case 0x402b70u: goto label_402b70;
        case 0x402b74u: goto label_402b74;
        case 0x402b78u: goto label_402b78;
        case 0x402b7cu: goto label_402b7c;
        case 0x402b80u: goto label_402b80;
        case 0x402b84u: goto label_402b84;
        case 0x402b88u: goto label_402b88;
        case 0x402b8cu: goto label_402b8c;
        case 0x402b90u: goto label_402b90;
        case 0x402b94u: goto label_402b94;
        case 0x402b98u: goto label_402b98;
        case 0x402b9cu: goto label_402b9c;
        case 0x402ba0u: goto label_402ba0;
        case 0x402ba4u: goto label_402ba4;
        case 0x402ba8u: goto label_402ba8;
        case 0x402bacu: goto label_402bac;
        case 0x402bb0u: goto label_402bb0;
        case 0x402bb4u: goto label_402bb4;
        case 0x402bb8u: goto label_402bb8;
        case 0x402bbcu: goto label_402bbc;
        case 0x402bc0u: goto label_402bc0;
        case 0x402bc4u: goto label_402bc4;
        case 0x402bc8u: goto label_402bc8;
        case 0x402bccu: goto label_402bcc;
        case 0x402bd0u: goto label_402bd0;
        case 0x402bd4u: goto label_402bd4;
        case 0x402bd8u: goto label_402bd8;
        case 0x402bdcu: goto label_402bdc;
        case 0x402be0u: goto label_402be0;
        case 0x402be4u: goto label_402be4;
        case 0x402be8u: goto label_402be8;
        case 0x402becu: goto label_402bec;
        case 0x402bf0u: goto label_402bf0;
        case 0x402bf4u: goto label_402bf4;
        default: break;
    }

    ctx->pc = 0x402000u;

label_402000:
    // 0x402000: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x402000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_402004:
    // 0x402004: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x402004u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_402008:
    // 0x402008: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x402008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40200c:
    // 0x40200c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x40200cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_402010:
    // 0x402010: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x402010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_402014:
    // 0x402014: 0x34c642a0  ori         $a2, $a2, 0x42A0
    ctx->pc = 0x402014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17056);
label_402018:
    // 0x402018: 0xc0f1658  jal         func_3C5960
label_40201c:
    if (ctx->pc == 0x40201Cu) {
        ctx->pc = 0x40201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402018u;
        // 0x40201c: 0x24070094  addiu       $a3, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402020u;
        goto label_402020;
    }
    ctx->pc = 0x402018u;
    SET_GPR_U32(ctx, 31, 0x402020u);
    ctx->pc = 0x40201Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402018u;
    // 0x40201c: 0x24070094  addiu       $a3, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x402018u, 0x402020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402020u;
label_402020:
    // 0x402020: 0x3c067559  lui         $a2, 0x7559
    ctx->pc = 0x402020u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30041 << 16));
label_402024:
    // 0x402024: 0x3c07462a  lui         $a3, 0x462A
    ctx->pc = 0x402024u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17962 << 16));
label_402028:
    // 0x402028: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x402028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_40202c:
    // 0x40202c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x40202cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_402030:
    // 0x402030: 0x34c652ff  ori         $a2, $a2, 0x52FF
    ctx->pc = 0x402030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21247);
label_402034:
    // 0x402034: 0x34e728ff  ori         $a3, $a3, 0x28FF
    ctx->pc = 0x402034u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10495);
label_402038:
    // 0x402038: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x402038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40203c:
    // 0x40203c: 0xc0e9978  jal         func_3A65E0
label_402040:
    if (ctx->pc == 0x402040u) {
        ctx->pc = 0x402040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40203Cu;
        // 0x402040: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402044u;
        goto label_402044;
    }
    ctx->pc = 0x40203Cu;
    SET_GPR_U32(ctx, 31, 0x402044u);
    ctx->pc = 0x402040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40203Cu;
    // 0x402040: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x40203Cu, 0x402044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402044u;
label_402044:
    // 0x402044: 0x3c02ef4a  lui         $v0, 0xEF4A
    ctx->pc = 0x402044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61258 << 16));
label_402048:
    // 0x402048: 0x344246b2  ori         $v0, $v0, 0x46B2
    ctx->pc = 0x402048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18098);
label_40204c:
    // 0x40204c: 0x13c20005  beq         $fp, $v0, . + 4 + (0x5 << 2)
label_402050:
    if (ctx->pc == 0x402050u) {
        ctx->pc = 0x402054u;
        goto label_402054;
    }
    ctx->pc = 0x40204Cu;
    {
        const bool branch_taken_0x40204c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x40204c) {
            ctx->pc = 0x402064u;
            goto label_402064;
        }
    }
    ctx->pc = 0x402054u;
label_402054:
    // 0x402054: 0x3c029849  lui         $v0, 0x9849
    ctx->pc = 0x402054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38985 << 16));
label_402058:
    // 0x402058: 0x3442ef17  ori         $v0, $v0, 0xEF17
    ctx->pc = 0x402058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61207);
label_40205c:
    // 0x40205c: 0x17c2002b  bne         $fp, $v0, . + 4 + (0x2B << 2)
label_402060:
    if (ctx->pc == 0x402060u) {
        ctx->pc = 0x402060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40205Cu;
        // 0x402060: 0x3c026894  lui         $v0, 0x6894 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26772 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402064u;
        goto label_402064;
    }
    ctx->pc = 0x40205Cu;
    {
        const bool branch_taken_0x40205c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x402060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40205Cu;
        // 0x402060: 0x3c026894  lui         $v0, 0x6894 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26772 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40205c) {
            ctx->pc = 0x40210Cu;
            goto label_40210c;
        }
    }
    ctx->pc = 0x402064u;
label_402064:
    // 0x402064: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x402064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_402068:
    // 0x402068: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x402068u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_40206c:
    // 0x40206c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x40206cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_402070:
    // 0x402070: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x402070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_402074:
    // 0x402074: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x402074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_402078:
    // 0x402078: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x402078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40207c:
    // 0x40207c: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x40207cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_402080:
    // 0x402080: 0xc0cd518  jal         func_335460
label_402084:
    if (ctx->pc == 0x402084u) {
        ctx->pc = 0x402084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402080u;
        // 0x402084: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x402088u;
        goto label_402088;
    }
    ctx->pc = 0x402080u;
    SET_GPR_U32(ctx, 31, 0x402088u);
    ctx->pc = 0x402084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402080u;
    // 0x402084: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x402080u, 0x402088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402088u;
label_402088:
    // 0x402088: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x402088u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_40208c:
    // 0x40208c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x40208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_402090:
    // 0x402090: 0xc136b24  jal         func_4DAC90
label_402094:
    if (ctx->pc == 0x402094u) {
        ctx->pc = 0x402094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402090u;
        // 0x402094: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402098u;
        goto label_402098;
    }
    ctx->pc = 0x402090u;
    SET_GPR_U32(ctx, 31, 0x402098u);
    ctx->pc = 0x402094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402090u;
    // 0x402094: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x402090u, 0x402098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402098u;
label_402098:
    // 0x402098: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x402098u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_40209c:
    // 0x40209c: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x40209cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4020a0:
    // 0x4020a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4020a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4020a4:
    // 0x4020a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4020a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4020a8:
    // 0x4020a8: 0xc0f1778  jal         func_3C5DE0
label_4020ac:
    if (ctx->pc == 0x4020ACu) {
        ctx->pc = 0x4020ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4020A8u;
        // 0x4020ac: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4020B0u;
        goto label_4020b0;
    }
    ctx->pc = 0x4020A8u;
    SET_GPR_U32(ctx, 31, 0x4020B0u);
    ctx->pc = 0x4020ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4020A8u;
    // 0x4020ac: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5DE0u, 0x4020A8u, 0x4020B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4020B0u;
label_4020b0:
    // 0x4020b0: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x4020b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
label_4020b4:
    // 0x4020b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4020b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4020b8:
    // 0x4020b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4020b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4020bc:
    // 0x4020bc: 0xc0f15f6  jal         func_3C57D8
label_4020c0:
    if (ctx->pc == 0x4020C0u) {
        ctx->pc = 0x4020C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4020BCu;
        // 0x4020c0: 0x2405ff94  addiu       $a1, $zero, -0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4020C4u;
        goto label_4020c4;
    }
    ctx->pc = 0x4020BCu;
    SET_GPR_U32(ctx, 31, 0x4020C4u);
    ctx->pc = 0x4020C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4020BCu;
    // 0x4020c0: 0x2405ff94  addiu       $a1, $zero, -0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x4020BCu, 0x4020C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4020C4u;
label_4020c4:
    // 0x4020c4: 0x3c065439  lui         $a2, 0x5439
    ctx->pc = 0x4020c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21561 << 16));
label_4020c8:
    // 0x4020c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4020c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4020cc:
    // 0x4020cc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4020ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4020d0:
    // 0x4020d0: 0x34c63280  ori         $a2, $a2, 0x3280
    ctx->pc = 0x4020d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12928);
label_4020d4:
    // 0x4020d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4020d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4020d8:
    // 0x4020d8: 0xc0f1658  jal         func_3C5960
label_4020dc:
    if (ctx->pc == 0x4020DCu) {
        ctx->pc = 0x4020DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4020D8u;
        // 0x4020dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4020E0u;
        goto label_4020e0;
    }
    ctx->pc = 0x4020D8u;
    SET_GPR_U32(ctx, 31, 0x4020E0u);
    ctx->pc = 0x4020DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4020D8u;
    // 0x4020dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x4020D8u, 0x4020E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4020E0u;
label_4020e0:
    // 0x4020e0: 0x3c067559  lui         $a2, 0x7559
    ctx->pc = 0x4020e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30041 << 16));
label_4020e4:
    // 0x4020e4: 0x3c07462a  lui         $a3, 0x462A
    ctx->pc = 0x4020e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17962 << 16));
label_4020e8:
    // 0x4020e8: 0x3c084c8c  lui         $t0, 0x4C8C
    ctx->pc = 0x4020e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)19596 << 16));
label_4020ec:
    // 0x4020ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4020ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4020f0:
    // 0x4020f0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4020f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4020f4:
    // 0x4020f4: 0x34c652ff  ori         $a2, $a2, 0x52FF
    ctx->pc = 0x4020f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21247);
label_4020f8:
    // 0x4020f8: 0x34e728ff  ori         $a3, $a3, 0x28FF
    ctx->pc = 0x4020f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10495);
label_4020fc:
    // 0x4020fc: 0x35084c4c  ori         $t0, $t0, 0x4C4C
    ctx->pc = 0x4020fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)19532);
label_402100:
    // 0x402100: 0xc0e9978  jal         func_3A65E0
label_402104:
    if (ctx->pc == 0x402104u) {
        ctx->pc = 0x402104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402100u;
        // 0x402104: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402108u;
        goto label_402108;
    }
    ctx->pc = 0x402100u;
    SET_GPR_U32(ctx, 31, 0x402108u);
    ctx->pc = 0x402104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402100u;
    // 0x402104: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x402100u, 0x402108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402108u;
label_402108:
    // 0x402108: 0x3c026894  lui         $v0, 0x6894
    ctx->pc = 0x402108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26772 << 16));
label_40210c:
    // 0x40210c: 0x3442f361  ori         $v0, $v0, 0xF361
    ctx->pc = 0x40210cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62305);
label_402110:
    // 0x402110: 0x17c2003f  bne         $fp, $v0, . + 4 + (0x3F << 2)
label_402114:
    if (ctx->pc == 0x402114u) {
        ctx->pc = 0x402114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402110u;
        // 0x402114: 0x8fa3053c  lw          $v1, 0x53C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402118u;
        goto label_402118;
    }
    ctx->pc = 0x402110u;
    {
        const bool branch_taken_0x402110 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x402114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402110u;
        // 0x402114: 0x8fa3053c  lw          $v1, 0x53C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402110) {
            ctx->pc = 0x402210u;
            goto label_402210;
        }
    }
    ctx->pc = 0x402118u;
label_402118:
    // 0x402118: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x402118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_40211c:
    // 0x40211c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x40211cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_402120:
    // 0x402120: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x402120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_402124:
    // 0x402124: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x402124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_402128:
    // 0x402128: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x402128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_40212c:
    // 0x40212c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x40212cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_402130:
    // 0x402130: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x402130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_402134:
    // 0x402134: 0xc0cd518  jal         func_335460
label_402138:
    if (ctx->pc == 0x402138u) {
        ctx->pc = 0x402138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402134u;
        // 0x402138: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40213Cu;
        goto label_40213c;
    }
    ctx->pc = 0x402134u;
    SET_GPR_U32(ctx, 31, 0x40213Cu);
    ctx->pc = 0x402138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402134u;
    // 0x402138: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x402134u, 0x40213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40213Cu;
label_40213c:
    // 0x40213c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x40213cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_402140:
    // 0x402140: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x402140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_402144:
    // 0x402144: 0xc136b24  jal         func_4DAC90
label_402148:
    if (ctx->pc == 0x402148u) {
        ctx->pc = 0x402148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402144u;
        // 0x402148: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40214Cu;
        goto label_40214c;
    }
    ctx->pc = 0x402144u;
    SET_GPR_U32(ctx, 31, 0x40214Cu);
    ctx->pc = 0x402148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402144u;
    // 0x402148: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x402144u, 0x40214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40214Cu;
label_40214c:
    // 0x40214c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x40214cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_402150:
    // 0x402150: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x402150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_402154:
    // 0x402154: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x402154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_402158:
    // 0x402158: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x402158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40215c:
    // 0x40215c: 0xc0f1778  jal         func_3C5DE0
label_402160:
    if (ctx->pc == 0x402160u) {
        ctx->pc = 0x402160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40215Cu;
        // 0x402160: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402164u;
        goto label_402164;
    }
    ctx->pc = 0x40215Cu;
    SET_GPR_U32(ctx, 31, 0x402164u);
    ctx->pc = 0x402160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40215Cu;
    // 0x402160: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5DE0u, 0x40215Cu, 0x402164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402164u;
label_402164:
    // 0x402164: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x402164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
label_402168:
    // 0x402168: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x402168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40216c:
    // 0x40216c: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x40216cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_402170:
    // 0x402170: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x402170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_402174:
    // 0x402174: 0xc0f15f6  jal         func_3C57D8
label_402178:
    if (ctx->pc == 0x402178u) {
        ctx->pc = 0x402178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402174u;
        // 0x402178: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40217Cu;
        goto label_40217c;
    }
    ctx->pc = 0x402174u;
    SET_GPR_U32(ctx, 31, 0x40217Cu);
    ctx->pc = 0x402178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402174u;
    // 0x402178: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x402174u, 0x40217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40217Cu;
label_40217c:
    // 0x40217c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x40217cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_402180:
    // 0x402180: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x402180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_402184:
    // 0x402184: 0xc136b18  jal         func_4DAC60
label_402188:
    if (ctx->pc == 0x402188u) {
        ctx->pc = 0x402188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402184u;
        // 0x402188: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40218Cu;
        goto label_40218c;
    }
    ctx->pc = 0x402184u;
    SET_GPR_U32(ctx, 31, 0x40218Cu);
    ctx->pc = 0x402188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402184u;
    // 0x402188: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x402184u, 0x40218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40218Cu;
label_40218c:
    // 0x40218c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x40218cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_402190:
    // 0x402190: 0x3c064a48  lui         $a2, 0x4A48
    ctx->pc = 0x402190u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19016 << 16));
label_402194:
    // 0x402194: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x402194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_402198:
    // 0x402198: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x402198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_40219c:
    // 0x40219c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x40219cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4021a0:
    // 0x4021a0: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x4021a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_4021a4:
    // 0x4021a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4021a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4021a8:
    // 0x4021a8: 0xc0f1658  jal         func_3C5960
label_4021ac:
    if (ctx->pc == 0x4021ACu) {
        ctx->pc = 0x4021ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4021A8u;
        // 0x4021ac: 0x34c64220  ori         $a2, $a2, 0x4220 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16928);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4021B0u;
        goto label_4021b0;
    }
    ctx->pc = 0x4021A8u;
    SET_GPR_U32(ctx, 31, 0x4021B0u);
    ctx->pc = 0x4021ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4021A8u;
    // 0x4021ac: 0x34c64220  ori         $a2, $a2, 0x4220 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16928);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x4021A8u, 0x4021B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4021B0u;
label_4021b0:
    // 0x4021b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4021b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4021b4:
    // 0x4021b4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4021b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4021b8:
    // 0x4021b8: 0xc10c1fa  jal         func_4307E8
label_4021bc:
    if (ctx->pc == 0x4021BCu) {
        ctx->pc = 0x4021BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4021B8u;
        // 0x4021bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4021C0u;
        goto label_4021c0;
    }
    ctx->pc = 0x4021B8u;
    SET_GPR_U32(ctx, 31, 0x4021C0u);
    ctx->pc = 0x4021BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4021B8u;
    // 0x4021bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4021B8u, 0x4021C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4021C0u;
label_4021c0:
    // 0x4021c0: 0x3c013c52  lui         $at, 0x3C52
    ctx->pc = 0x4021c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15442 << 16));
label_4021c4:
    // 0x4021c4: 0x342145b3  ori         $at, $at, 0x45B3
    ctx->pc = 0x4021c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17843);
label_4021c8:
    // 0x4021c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4021c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4021cc:
    // 0x4021cc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x4021ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_4021d0:
    // 0x4021d0: 0x3c01be5c  lui         $at, 0xBE5C
    ctx->pc = 0x4021d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48732 << 16));
label_4021d4:
    // 0x4021d4: 0x34214d23  ori         $at, $at, 0x4D23
    ctx->pc = 0x4021d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19747);
label_4021d8:
    // 0x4021d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4021d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4021dc:
    // 0x4021dc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x4021dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_4021e0:
    // 0x4021e0: 0x3c013eca  lui         $at, 0x3ECA
    ctx->pc = 0x4021e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16074 << 16));
label_4021e4:
    // 0x4021e4: 0x3421808d  ori         $at, $at, 0x808D
    ctx->pc = 0x4021e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32909);
label_4021e8:
    // 0x4021e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4021e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4021ec:
    // 0x4021ec: 0x24847778  addiu       $a0, $a0, 0x7778
    ctx->pc = 0x4021ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30584));
label_4021f0:
    // 0x4021f0: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x4021f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_4021f4:
    // 0x4021f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4021f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4021f8:
    // 0x4021f8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x4021f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_4021fc:
    // 0x4021fc: 0x24c616c0  addiu       $a2, $a2, 0x16C0
    ctx->pc = 0x4021fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
label_402200:
    // 0x402200: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x402200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_402204:
    // 0x402204: 0xc0e954c  jal         func_3A5530
label_402208:
    if (ctx->pc == 0x402208u) {
        ctx->pc = 0x402208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402204u;
        // 0x402208: 0xe7a20098  swc1        $f2, 0x98($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x40220Cu;
        goto label_40220c;
    }
    ctx->pc = 0x402204u;
    SET_GPR_U32(ctx, 31, 0x40220Cu);
    ctx->pc = 0x402208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402204u;
    // 0x402208: 0xe7a20098  swc1        $f2, 0x98($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x402204u, 0x40220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40220Cu;
label_40220c:
    // 0x40220c: 0x8fa3053c  lw          $v1, 0x53C($sp)
    ctx->pc = 0x40220cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
label_402210:
    // 0x402210: 0x54600041  bnel        $v1, $zero, . + 4 + (0x41 << 2)
label_402214:
    if (ctx->pc == 0x402214u) {
        ctx->pc = 0x402214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402210u;
        // 0x402214: 0x8fa4053c  lw          $a0, 0x53C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402218u;
        goto label_402218;
    }
    ctx->pc = 0x402210u;
    {
        const bool branch_taken_0x402210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x402210) {
            ctx->pc = 0x402214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x402210u;
            // 0x402214: 0x8fa4053c  lw          $a0, 0x53C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x402318u;
            goto label_402318;
        }
    }
    ctx->pc = 0x402218u;
label_402218:
    // 0x402218: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x402218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_40221c:
    // 0x40221c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x40221cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_402220:
    // 0x402220: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x402220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_402224:
    // 0x402224: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x402224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_402228:
    // 0x402228: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x402228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_40222c:
    // 0x40222c: 0xc136b18  jal         func_4DAC60
label_402230:
    if (ctx->pc == 0x402230u) {
        ctx->pc = 0x402230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40222Cu;
        // 0x402230: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402234u;
        goto label_402234;
    }
    ctx->pc = 0x40222Cu;
    SET_GPR_U32(ctx, 31, 0x402234u);
    ctx->pc = 0x402230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40222Cu;
    // 0x402230: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x40222Cu, 0x402234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402234u;
label_402234:
    // 0x402234: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x402234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_402238:
    // 0x402238: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x402238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_40223c:
    // 0x40223c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x40223cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_402240:
    // 0x402240: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x402240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_402244:
    // 0x402244: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x402244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_402248:
    // 0x402248: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x402248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40224c:
    // 0x40224c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x40224cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_402250:
    // 0x402250: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x402250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_402254:
    // 0x402254: 0xc136b24  jal         func_4DAC90
label_402258:
    if (ctx->pc == 0x402258u) {
        ctx->pc = 0x402258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402254u;
        // 0x402258: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40225Cu;
        goto label_40225c;
    }
    ctx->pc = 0x402254u;
    SET_GPR_U32(ctx, 31, 0x40225Cu);
    ctx->pc = 0x402258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402254u;
    // 0x402258: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x402254u, 0x40225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40225Cu;
label_40225c:
    // 0x40225c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x40225cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_402260:
    // 0x402260: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x402260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_402264:
    // 0x402264: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x402264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_402268:
    // 0x402268: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x402268u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_40226c:
    // 0x40226c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x40226cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_402270:
    // 0x402270: 0x3c07bea7  lui         $a3, 0xBEA7
    ctx->pc = 0x402270u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48807 << 16));
label_402274:
    // 0x402274: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x402274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_402278:
    // 0x402278: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x402278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_40227c:
    // 0x40227c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x40227cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_402280:
    // 0x402280: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x402280u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_402284:
    // 0x402284: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x402284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_402288:
    // 0x402288: 0x34e780ff  ori         $a3, $a3, 0x80FF
    ctx->pc = 0x402288u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)33023);
label_40228c:
    // 0x40228c: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x40228cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_402290:
    // 0x402290: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x402290u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_402294:
    // 0x402294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x402294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_402298:
    // 0x402298: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x402298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40229c:
    // 0x40229c: 0xc0f16c0  jal         func_3C5B00
label_4022a0:
    if (ctx->pc == 0x4022A0u) {
        ctx->pc = 0x4022A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40229Cu;
        // 0x4022a0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4022A4u;
        goto label_4022a4;
    }
    ctx->pc = 0x40229Cu;
    SET_GPR_U32(ctx, 31, 0x4022A4u);
    ctx->pc = 0x4022A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40229Cu;
    // 0x4022a0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x40229Cu, 0x4022A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4022A4u;
label_4022a4:
    // 0x4022a4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4022a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4022a8:
    // 0x4022a8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x4022a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4022ac:
    // 0x4022ac: 0xc136b18  jal         func_4DAC60
label_4022b0:
    if (ctx->pc == 0x4022B0u) {
        ctx->pc = 0x4022B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4022ACu;
        // 0x4022b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4022B4u;
        goto label_4022b4;
    }
    ctx->pc = 0x4022ACu;
    SET_GPR_U32(ctx, 31, 0x4022B4u);
    ctx->pc = 0x4022B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4022ACu;
    // 0x4022b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4022ACu, 0x4022B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4022B4u;
label_4022b4:
    // 0x4022b4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x4022b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4022b8:
    // 0x4022b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4022b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4022bc:
    // 0x4022bc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x4022bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_4022c0:
    // 0x4022c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4022c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4022c4:
    // 0x4022c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4022c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4022c8:
    // 0x4022c8: 0xc136b24  jal         func_4DAC90
label_4022cc:
    if (ctx->pc == 0x4022CCu) {
        ctx->pc = 0x4022CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4022C8u;
        // 0x4022cc: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4022D0u;
        goto label_4022d0;
    }
    ctx->pc = 0x4022C8u;
    SET_GPR_U32(ctx, 31, 0x4022D0u);
    ctx->pc = 0x4022CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4022C8u;
    // 0x4022cc: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4022C8u, 0x4022D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4022D0u;
label_4022d0:
    // 0x4022d0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x4022d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4022d4:
    // 0x4022d4: 0x3c075c3f  lui         $a3, 0x5C3F
    ctx->pc = 0x4022d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23615 << 16));
label_4022d8:
    // 0x4022d8: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x4022d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_4022dc:
    // 0x4022dc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x4022dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_4022e0:
    // 0x4022e0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x4022e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4022e4:
    // 0x4022e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4022e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4022e8:
    // 0x4022e8: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x4022e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
label_4022ec:
    // 0x4022ec: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x4022ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_4022f0:
    // 0x4022f0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x4022f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4022f4:
    // 0x4022f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4022f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4022f8:
    // 0x4022f8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x4022f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_4022fc:
    // 0x4022fc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4022fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_402300:
    // 0x402300: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x402300u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_402304:
    // 0x402304: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x402304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_402308:
    // 0x402308: 0x34e727ff  ori         $a3, $a3, 0x27FF
    ctx->pc = 0x402308u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10239);
label_40230c:
    // 0x40230c: 0xc0f16c0  jal         func_3C5B00
label_402310:
    if (ctx->pc == 0x402310u) {
        ctx->pc = 0x402310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40230Cu;
        // 0x402310: 0x24080094  addiu       $t0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402314u;
        goto label_402314;
    }
    ctx->pc = 0x40230Cu;
    SET_GPR_U32(ctx, 31, 0x402314u);
    ctx->pc = 0x402310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40230Cu;
    // 0x402310: 0x24080094  addiu       $t0, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x40230Cu, 0x402314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402314u;
label_402314:
    // 0x402314: 0x8fa4053c  lw          $a0, 0x53C($sp)
    ctx->pc = 0x402314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
label_402318:
    // 0x402318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x402318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40231c:
    // 0x40231c: 0x14820123  bne         $a0, $v0, . + 4 + (0x123 << 2)
label_402320:
    if (ctx->pc == 0x402320u) {
        ctx->pc = 0x402320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40231Cu;
        // 0x402320: 0x8fa3053c  lw          $v1, 0x53C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402324u;
        goto label_402324;
    }
    ctx->pc = 0x40231Cu;
    {
        const bool branch_taken_0x40231c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x402320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40231Cu;
        // 0x402320: 0x8fa3053c  lw          $v1, 0x53C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40231c) {
            ctx->pc = 0x4027ACu;
            goto label_4027ac;
        }
    }
    ctx->pc = 0x402324u;
label_402324:
    // 0x402324: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x402324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_402328:
    // 0x402328: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x402328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_40232c:
    // 0x40232c: 0x8c4471a0  lw          $a0, 0x71A0($v0)
    ctx->pc = 0x40232cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29088)));
label_402330:
    // 0x402330: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x402330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_402334:
    // 0x402334: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x402334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402338:
    // 0x402338: 0xc05c2ca  jal         func_170B28
label_40233c:
    if (ctx->pc == 0x40233Cu) {
        ctx->pc = 0x40233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402338u;
        // 0x40233c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402340u;
        goto label_402340;
    }
    ctx->pc = 0x402338u;
    SET_GPR_U32(ctx, 31, 0x402340u);
    ctx->pc = 0x40233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402338u;
    // 0x40233c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170B28u, 0x402338u, 0x402340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402340u;
label_402340:
    // 0x402340: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x402340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_402344:
    // 0x402344: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x402344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_402348:
    // 0x402348: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x402348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_40234c:
    // 0x40234c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x40234cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_402350:
    // 0x402350: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x402350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_402354:
    // 0x402354: 0xc136b18  jal         func_4DAC60
label_402358:
    if (ctx->pc == 0x402358u) {
        ctx->pc = 0x402358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402354u;
        // 0x402358: 0x3c12006f  lui         $s2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40235Cu;
        goto label_40235c;
    }
    ctx->pc = 0x402354u;
    SET_GPR_U32(ctx, 31, 0x40235Cu);
    ctx->pc = 0x402358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402354u;
    // 0x402358: 0x3c12006f  lui         $s2, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x402354u, 0x40235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40235Cu;
label_40235c:
    // 0x40235c: 0x2654b8b8  addiu       $s4, $s2, -0x4748
    ctx->pc = 0x40235cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949048));
label_402360:
    // 0x402360: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x402360u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_402364:
    // 0x402364: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x402364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_402368:
    // 0x402368: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x402368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_40236c:
    // 0x40236c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x40236cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_402370:
    // 0x402370: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x402370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_402374:
    // 0x402374: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x402374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_402378:
    // 0x402378: 0xc136b24  jal         func_4DAC90
label_40237c:
    if (ctx->pc == 0x40237Cu) {
        ctx->pc = 0x40237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402378u;
        // 0x40237c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402380u;
        goto label_402380;
    }
    ctx->pc = 0x402378u;
    SET_GPR_U32(ctx, 31, 0x402380u);
    ctx->pc = 0x40237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402378u;
    // 0x40237c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x402378u, 0x402380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402380u;
label_402380:
    // 0x402380: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x402380u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_402384:
    // 0x402384: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x402384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_402388:
    // 0x402388: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x402388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_40238c:
    // 0x40238c: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x40238cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
label_402390:
    // 0x402390: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x402390u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_402394:
    // 0x402394: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x402394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_402398:
    // 0x402398: 0x3c071010  lui         $a3, 0x1010
    ctx->pc = 0x402398u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4112 << 16));
label_40239c:
    // 0x40239c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x40239cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_4023a0:
    // 0x4023a0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x4023a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_4023a4:
    // 0x4023a4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x4023a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4023a8:
    // 0x4023a8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4023a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4023ac:
    // 0x4023ac: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x4023acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_4023b0:
    // 0x4023b0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4023b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_4023b4:
    // 0x4023b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4023b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4023b8:
    // 0x4023b8: 0x34e710ff  ori         $a3, $a3, 0x10FF
    ctx->pc = 0x4023b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4351);
label_4023bc:
    // 0x4023bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4023bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4023c0:
    // 0x4023c0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x4023c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_4023c4:
    // 0x4023c4: 0xafa3054c  sw          $v1, 0x54C($sp)
    ctx->pc = 0x4023c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1356), GPR_U32(ctx, 3));
label_4023c8:
    // 0x4023c8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x4023c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4023cc:
    // 0x4023cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4023ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4023d0:
    // 0x4023d0: 0xc0f16c0  jal         func_3C5B00
label_4023d4:
    if (ctx->pc == 0x4023D4u) {
        ctx->pc = 0x4023D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4023D0u;
        // 0x4023d4: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4023D8u;
        goto label_4023d8;
    }
    ctx->pc = 0x4023D0u;
    SET_GPR_U32(ctx, 31, 0x4023D8u);
    ctx->pc = 0x4023D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4023D0u;
    // 0x4023d4: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x4023D0u, 0x4023D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4023D8u;
label_4023d8:
    // 0x4023d8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x4023d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_4023dc:
    // 0x4023dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4023dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4023e0:
    // 0x4023e0: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x4023e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4023e4:
    // 0x4023e4: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x4023e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_4023e8:
    // 0x4023e8: 0xc0cd518  jal         func_335460
label_4023ec:
    if (ctx->pc == 0x4023ECu) {
        ctx->pc = 0x4023ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4023E8u;
        // 0x4023ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4023F0u;
        goto label_4023f0;
    }
    ctx->pc = 0x4023E8u;
    SET_GPR_U32(ctx, 31, 0x4023F0u);
    ctx->pc = 0x4023ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4023E8u;
    // 0x4023ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4023E8u, 0x4023F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4023F0u;
label_4023f0:
    // 0x4023f0: 0x3c065542  lui         $a2, 0x5542
    ctx->pc = 0x4023f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21826 << 16));
label_4023f4:
    // 0x4023f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4023f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4023f8:
    // 0x4023f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x4023f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_4023fc:
    // 0x4023fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4023fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402400:
    // 0x402400: 0xc0f1794  jal         func_3C5E50
label_402404:
    if (ctx->pc == 0x402404u) {
        ctx->pc = 0x402404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402400u;
        // 0x402404: 0x34c63860  ori         $a2, $a2, 0x3860 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14432);
        ctx->in_delay_slot = false;
        ctx->pc = 0x402408u;
        goto label_402408;
    }
    ctx->pc = 0x402400u;
    SET_GPR_U32(ctx, 31, 0x402408u);
    ctx->pc = 0x402404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402400u;
    // 0x402404: 0x34c63860  ori         $a2, $a2, 0x3860 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14432);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5E50u, 0x402400u, 0x402408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402408u;
label_402408:
    // 0x402408: 0x8fa50530  lw          $a1, 0x530($sp)
    ctx->pc = 0x402408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_40240c:
    // 0x40240c: 0xc0e90ca  jal         func_3A4328
label_402410:
    if (ctx->pc == 0x402410u) {
        ctx->pc = 0x402410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40240Cu;
        // 0x402410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402414u;
        goto label_402414;
    }
    ctx->pc = 0x40240Cu;
    SET_GPR_U32(ctx, 31, 0x402414u);
    ctx->pc = 0x402410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40240Cu;
    // 0x402410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x40240Cu, 0x402414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402414u;
label_402414:
    // 0x402414: 0xc0e96b6  jal         func_3A5AD8
label_402418:
    if (ctx->pc == 0x402418u) {
        ctx->pc = 0x402418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402414u;
        // 0x402418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40241Cu;
        goto label_40241c;
    }
    ctx->pc = 0x402414u;
    SET_GPR_U32(ctx, 31, 0x40241Cu);
    ctx->pc = 0x402418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402414u;
    // 0x402418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5AD8u, 0x402414u, 0x40241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40241Cu;
label_40241c:
    // 0x40241c: 0x16a00040  bnez        $s5, . + 4 + (0x40 << 2)
label_402420:
    if (ctx->pc == 0x402420u) {
        ctx->pc = 0x402420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40241Cu;
        // 0x402420: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402424u;
        goto label_402424;
    }
    ctx->pc = 0x40241Cu;
    {
        const bool branch_taken_0x40241c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x402420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40241Cu;
        // 0x402420: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40241c) {
            ctx->pc = 0x402520u;
            goto label_402520;
        }
    }
    ctx->pc = 0x402424u;
label_402424:
    // 0x402424: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x402424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_402428:
    // 0x402428: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x402428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_40242c:
    // 0x40242c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x40242cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_402430:
    // 0x402430: 0x245016c0  addiu       $s0, $v0, 0x16C0
    ctx->pc = 0x402430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_402434:
    // 0x402434: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x402434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_402438:
    // 0x402438: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x402438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40243c:
    // 0x40243c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x40243cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_402440:
    // 0x402440: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x402440u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_402444:
    // 0x402444: 0xc094904  jal         func_252410
label_402448:
    if (ctx->pc == 0x402448u) {
        ctx->pc = 0x402448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402444u;
        // 0x402448: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40244Cu;
        goto label_40244c;
    }
    ctx->pc = 0x402444u;
    SET_GPR_U32(ctx, 31, 0x40244Cu);
    ctx->pc = 0x402448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402444u;
    // 0x402448: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x402444u, 0x40244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40244Cu;
label_40244c:
    // 0x40244c: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
label_402450:
    if (ctx->pc == 0x402450u) {
        ctx->pc = 0x402450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40244Cu;
        // 0x402450: 0xc7a00058  lwc1        $f0, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x402454u;
        goto label_402454;
    }
    ctx->pc = 0x40244Cu;
    {
        const bool branch_taken_0x40244c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x402450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40244Cu;
        // 0x402450: 0xc7a00058  lwc1        $f0, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40244c) {
            ctx->pc = 0x402620u;
            goto label_402620;
        }
    }
    ctx->pc = 0x402454u;
label_402454:
    // 0x402454: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x402454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_402458:
    // 0x402458: 0x8fa50530  lw          $a1, 0x530($sp)
    ctx->pc = 0x402458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_40245c:
    // 0x40245c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x40245cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_402460:
    // 0x402460: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x402460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_402464:
    // 0x402464: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x402464u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_402468:
    // 0x402468: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x402468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_40246c:
    // 0x40246c: 0x24847788  addiu       $a0, $a0, 0x7788
    ctx->pc = 0x40246cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30600));
label_402470:
    // 0x402470: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x402470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_402474:
    // 0x402474: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x402474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_402478:
    // 0x402478: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x402478u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_40247c:
    // 0x40247c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x40247cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_402480:
    // 0x402480: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x402480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_402484:
    // 0x402484: 0xc0e94ee  jal         func_3A53B8
label_402488:
    if (ctx->pc == 0x402488u) {
        ctx->pc = 0x402488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402484u;
        // 0x402488: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x40248Cu;
        goto label_40248c;
    }
    ctx->pc = 0x402484u;
    SET_GPR_U32(ctx, 31, 0x40248Cu);
    ctx->pc = 0x402488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402484u;
    // 0x402488: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53B8u, 0x402484u, 0x40248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40248Cu;
label_40248c:
    // 0x40248c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x40248cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_402490:
    // 0x402490: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x402490u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_402494:
    // 0x402494: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x402494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_402498:
    // 0x402498: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x402498u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_40249c:
    // 0x40249c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40249cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4024a0:
    // 0x4024a0: 0x8fa40534  lw          $a0, 0x534($sp)
    ctx->pc = 0x4024a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
label_4024a4:
    // 0x4024a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4024a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4024a8:
    // 0x4024a8: 0xc0ea158  jal         func_3A8560
label_4024ac:
    if (ctx->pc == 0x4024ACu) {
        ctx->pc = 0x4024ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4024A8u;
        // 0x4024ac: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4024B0u;
        goto label_4024b0;
    }
    ctx->pc = 0x4024A8u;
    SET_GPR_U32(ctx, 31, 0x4024B0u);
    ctx->pc = 0x4024ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4024A8u;
    // 0x4024ac: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x4024A8u, 0x4024B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4024B0u;
label_4024b0:
    // 0x4024b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4024b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4024b4:
    // 0x4024b4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4024b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4024b8:
    // 0x4024b8: 0xc0cd518  jal         func_335460
label_4024bc:
    if (ctx->pc == 0x4024BCu) {
        ctx->pc = 0x4024BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4024B8u;
        // 0x4024bc: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4024C0u;
        goto label_4024c0;
    }
    ctx->pc = 0x4024B8u;
    SET_GPR_U32(ctx, 31, 0x4024C0u);
    ctx->pc = 0x4024BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4024B8u;
    // 0x4024bc: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4024B8u, 0x4024C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4024C0u;
label_4024c0:
    // 0x4024c0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4024c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4024c4:
    // 0x4024c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4024c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4024c8:
    // 0x4024c8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4024c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4024cc:
    // 0x4024cc: 0xc0cd518  jal         func_335460
label_4024d0:
    if (ctx->pc == 0x4024D0u) {
        ctx->pc = 0x4024D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4024CCu;
        // 0x4024d0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4024D4u;
        goto label_4024d4;
    }
    ctx->pc = 0x4024CCu;
    SET_GPR_U32(ctx, 31, 0x4024D4u);
    ctx->pc = 0x4024D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4024CCu;
    // 0x4024d0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4024CCu, 0x4024D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4024D4u;
label_4024d4:
    // 0x4024d4: 0x8fa2054c  lw          $v0, 0x54C($sp)
    ctx->pc = 0x4024d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1356)));
label_4024d8:
    // 0x4024d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4024d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4024dc:
    // 0x4024dc: 0x8fa40534  lw          $a0, 0x534($sp)
    ctx->pc = 0x4024dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
label_4024e0:
    // 0x4024e0: 0xe7b400a4  swc1        $f20, 0xA4($sp)
    ctx->pc = 0x4024e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_4024e4:
    // 0x4024e4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x4024e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_4024e8:
    // 0x4024e8: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x4024e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_4024ec:
    // 0x4024ec: 0xe457000c  swc1        $f23, 0xC($v0)
    ctx->pc = 0x4024ecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_4024f0:
    // 0x4024f0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x4024f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4024f4:
    // 0x4024f4: 0xc0ea158  jal         func_3A8560
label_4024f8:
    if (ctx->pc == 0x4024F8u) {
        ctx->pc = 0x4024F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4024F4u;
        // 0x4024f8: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4024FCu;
        goto label_4024fc;
    }
    ctx->pc = 0x4024F4u;
    SET_GPR_U32(ctx, 31, 0x4024FCu);
    ctx->pc = 0x4024F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4024F4u;
    // 0x4024f8: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x4024F4u, 0x4024FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4024FCu;
label_4024fc:
    // 0x4024fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4024fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_402500:
    // 0x402500: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x402500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_402504:
    // 0x402504: 0x8fa60534  lw          $a2, 0x534($sp)
    ctx->pc = 0x402504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
label_402508:
    // 0x402508: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x402508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_40250c:
    // 0x40250c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x40250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_402510:
    // 0x402510: 0x40f809  jalr        $v0
label_402514:
    if (ctx->pc == 0x402514u) {
        ctx->pc = 0x402514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402510u;
        // 0x402514: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402518u;
        goto label_402518;
    }
    ctx->pc = 0x402510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x402518u);
        ctx->pc = 0x402514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402510u;
        // 0x402514: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402510u, 0x402518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x402518u;
label_402518:
    // 0x402518: 0x10000041  b           . + 4 + (0x41 << 2)
label_40251c:
    if (ctx->pc == 0x40251Cu) {
        ctx->pc = 0x402520u;
        goto label_402520;
    }
    ctx->pc = 0x402518u;
    {
        const bool branch_taken_0x402518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x402518) {
            ctx->pc = 0x402620u;
            goto label_402620;
        }
    }
    ctx->pc = 0x402520u;
label_402520:
    // 0x402520: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x402520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_402524:
    // 0x402524: 0x24547798  addiu       $s4, $v0, 0x7798
    ctx->pc = 0x402524u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30616));
label_402528:
    // 0x402528: 0xc0cd4ee  jal         func_3353B8
label_40252c:
    if (ctx->pc == 0x40252Cu) {
        ctx->pc = 0x40252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402528u;
        // 0x40252c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402530u;
        goto label_402530;
    }
    ctx->pc = 0x402528u;
    SET_GPR_U32(ctx, 31, 0x402530u);
    ctx->pc = 0x40252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402528u;
    // 0x40252c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x402528u, 0x402530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402530u;
label_402530:
    // 0x402530: 0xafa20540  sw          $v0, 0x540($sp)
    ctx->pc = 0x402530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
label_402534:
    // 0x402534: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x402534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_402538:
    // 0x402538: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_40253c:
    if (ctx->pc == 0x40253Cu) {
        ctx->pc = 0x40253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402538u;
        // 0x40253c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402540u;
        goto label_402540;
    }
    ctx->pc = 0x402538u;
    {
        const bool branch_taken_0x402538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402538u;
        // 0x40253c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402538) {
            ctx->pc = 0x4025A0u;
            goto label_4025a0;
        }
    }
    ctx->pc = 0x402540u;
label_402540:
    // 0x402540: 0x8fa40540  lw          $a0, 0x540($sp)
    ctx->pc = 0x402540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_402544:
    // 0x402544: 0x24427850  addiu       $v0, $v0, 0x7850
    ctx->pc = 0x402544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30800));
label_402548:
    // 0x402548: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x402548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_40254c:
    // 0x40254c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x40254cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_402550:
    // 0x402550: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x402550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_402554:
    // 0x402554: 0x800008  jr          $a0
label_402558:
    if (ctx->pc == 0x402558u) {
        ctx->pc = 0x40255Cu;
        goto label_40255c;
    }
    ctx->pc = 0x402554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402554u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x40255Cu;
label_40255c:
    // 0x40255c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x40255cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_402560:
    // 0x402560: 0x1000000f  b           . + 4 + (0xF << 2)
label_402564:
    if (ctx->pc == 0x402564u) {
        ctx->pc = 0x402564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402560u;
        // 0x402564: 0x245477b0  addiu       $s4, $v0, 0x77B0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402568u;
        goto label_402568;
    }
    ctx->pc = 0x402560u;
    {
        const bool branch_taken_0x402560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402560u;
        // 0x402564: 0x245477b0  addiu       $s4, $v0, 0x77B0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402560) {
            ctx->pc = 0x4025A0u;
            goto label_4025a0;
        }
    }
    ctx->pc = 0x402568u;
label_402568:
    // 0x402568: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x402568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_40256c:
    // 0x40256c: 0x1000000c  b           . + 4 + (0xC << 2)
label_402570:
    if (ctx->pc == 0x402570u) {
        ctx->pc = 0x402570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40256Cu;
        // 0x402570: 0x245477c8  addiu       $s4, $v0, 0x77C8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402574u;
        goto label_402574;
    }
    ctx->pc = 0x40256Cu;
    {
        const bool branch_taken_0x40256c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40256Cu;
        // 0x402570: 0x245477c8  addiu       $s4, $v0, 0x77C8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40256c) {
            ctx->pc = 0x4025A0u;
            goto label_4025a0;
        }
    }
    ctx->pc = 0x402574u;
label_402574:
    // 0x402574: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x402574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_402578:
    // 0x402578: 0x10000009  b           . + 4 + (0x9 << 2)
label_40257c:
    if (ctx->pc == 0x40257Cu) {
        ctx->pc = 0x40257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402578u;
        // 0x40257c: 0x245477e0  addiu       $s4, $v0, 0x77E0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402580u;
        goto label_402580;
    }
    ctx->pc = 0x402578u;
    {
        const bool branch_taken_0x402578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402578u;
        // 0x40257c: 0x245477e0  addiu       $s4, $v0, 0x77E0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402578) {
            ctx->pc = 0x4025A0u;
            goto label_4025a0;
        }
    }
    ctx->pc = 0x402580u;
label_402580:
    // 0x402580: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x402580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_402584:
    // 0x402584: 0x10000006  b           . + 4 + (0x6 << 2)
label_402588:
    if (ctx->pc == 0x402588u) {
        ctx->pc = 0x402588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402584u;
        // 0x402588: 0x245477f0  addiu       $s4, $v0, 0x77F0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40258Cu;
        goto label_40258c;
    }
    ctx->pc = 0x402584u;
    {
        const bool branch_taken_0x402584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402584u;
        // 0x402588: 0x245477f0  addiu       $s4, $v0, 0x77F0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402584) {
            ctx->pc = 0x4025A0u;
            goto label_4025a0;
        }
    }
    ctx->pc = 0x40258Cu;
label_40258c:
    // 0x40258c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x40258cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_402590:
    // 0x402590: 0x10000003  b           . + 4 + (0x3 << 2)
label_402594:
    if (ctx->pc == 0x402594u) {
        ctx->pc = 0x402594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402590u;
        // 0x402594: 0x24547800  addiu       $s4, $v0, 0x7800 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402598u;
        goto label_402598;
    }
    ctx->pc = 0x402590u;
    {
        const bool branch_taken_0x402590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402590u;
        // 0x402594: 0x24547800  addiu       $s4, $v0, 0x7800 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402590) {
            ctx->pc = 0x4025A0u;
            goto label_4025a0;
        }
    }
    ctx->pc = 0x402598u;
label_402598:
    // 0x402598: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x402598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_40259c:
    // 0x40259c: 0x24547810  addiu       $s4, $v0, 0x7810
    ctx->pc = 0x40259cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 30736));
label_4025a0:
    // 0x4025a0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4025a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4025a4:
    // 0x4025a4: 0x3c01bedc  lui         $at, 0xBEDC
    ctx->pc = 0x4025a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48860 << 16));
label_4025a8:
    // 0x4025a8: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x4025a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_4025ac:
    // 0x4025ac: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x4025acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_4025b0:
    // 0x4025b0: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x4025b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_4025b4:
    // 0x4025b4: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x4025b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_4025b8:
    // 0x4025b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4025b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4025bc:
    // 0x4025bc: 0x24b0b8b8  addiu       $s0, $a1, -0x4748
    ctx->pc = 0x4025bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949048));
label_4025c0:
    // 0x4025c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4025c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4025c4:
    // 0x4025c4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4025c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4025c8:
    // 0x4025c8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4025c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4025cc:
    // 0x4025cc: 0xc0cd518  jal         func_335460
label_4025d0:
    if (ctx->pc == 0x4025D0u) {
        ctx->pc = 0x4025D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4025CCu;
        // 0x4025d0: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4025D4u;
        goto label_4025d4;
    }
    ctx->pc = 0x4025CCu;
    SET_GPR_U32(ctx, 31, 0x4025D4u);
    ctx->pc = 0x4025D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4025CCu;
    // 0x4025d0: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4025CCu, 0x4025D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4025D4u;
label_4025d4:
    // 0x4025d4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4025d4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_4025d8:
    // 0x4025d8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4025d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4025dc:
    // 0x4025dc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4025dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4025e0:
    // 0x4025e0: 0xc0cd518  jal         func_335460
label_4025e4:
    if (ctx->pc == 0x4025E4u) {
        ctx->pc = 0x4025E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4025E0u;
        // 0x4025e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4025E8u;
        goto label_4025e8;
    }
    ctx->pc = 0x4025E0u;
    SET_GPR_U32(ctx, 31, 0x4025E8u);
    ctx->pc = 0x4025E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4025E0u;
    // 0x4025e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4025E0u, 0x4025E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4025E8u;
label_4025e8:
    // 0x4025e8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x4025e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4025ec:
    // 0x4025ec: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x4025ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
label_4025f0:
    // 0x4025f0: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x4025f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_4025f4:
    // 0x4025f4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x4025f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4025f8:
    // 0x4025f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4025f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4025fc:
    // 0x4025fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4025fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_402600:
    // 0x402600: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x402600u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_402604:
    // 0x402604: 0xc0cd55c  jal         func_335570
label_402608:
    if (ctx->pc == 0x402608u) {
        ctx->pc = 0x402608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402604u;
        // 0x402608: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40260Cu;
        goto label_40260c;
    }
    ctx->pc = 0x402604u;
    SET_GPR_U32(ctx, 31, 0x40260Cu);
    ctx->pc = 0x402608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402604u;
    // 0x402608: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x402604u, 0x40260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40260Cu;
label_40260c:
    // 0x40260c: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x40260cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_402610:
    // 0x402610: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x402610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_402614:
    // 0x402614: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x402614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_402618:
    // 0x402618: 0xc0e954c  jal         func_3A5530
label_40261c:
    if (ctx->pc == 0x40261Cu) {
        ctx->pc = 0x40261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402618u;
        // 0x40261c: 0x262616c0  addiu       $a2, $s1, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402620u;
        goto label_402620;
    }
    ctx->pc = 0x402618u;
    SET_GPR_U32(ctx, 31, 0x402620u);
    ctx->pc = 0x40261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402618u;
    // 0x40261c: 0x262616c0  addiu       $a2, $s1, 0x16C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x402618u, 0x402620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402620u;
label_402620:
    // 0x402620: 0x3c01bedc  lui         $at, 0xBEDC
    ctx->pc = 0x402620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48860 << 16));
label_402624:
    // 0x402624: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x402624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_402628:
    // 0x402628: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x402628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_40262c:
    // 0x40262c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40262cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_402630:
    // 0x402630: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x402630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_402634:
    // 0x402634: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x402634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_402638:
    // 0x402638: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x402638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_40263c:
    // 0x40263c: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x40263cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_402640:
    // 0x402640: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x402640u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_402644:
    // 0x402644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402648:
    // 0x402648: 0x26317820  addiu       $s1, $s1, 0x7820
    ctx->pc = 0x402648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30752));
label_40264c:
    // 0x40264c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x40264cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_402650:
    // 0x402650: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x402650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
label_402654:
    // 0x402654: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x402654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_402658:
    // 0x402658: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x402658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_40265c:
    // 0x40265c: 0xc0cd518  jal         func_335460
label_402660:
    if (ctx->pc == 0x402660u) {
        ctx->pc = 0x402660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40265Cu;
        // 0x402660: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x402664u;
        goto label_402664;
    }
    ctx->pc = 0x40265Cu;
    SET_GPR_U32(ctx, 31, 0x402664u);
    ctx->pc = 0x402660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40265Cu;
    // 0x402660: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40265Cu, 0x402664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402664u;
label_402664:
    // 0x402664: 0x265216c0  addiu       $s2, $s2, 0x16C0
    ctx->pc = 0x402664u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
label_402668:
    // 0x402668: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x402668u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_40266c:
    // 0x40266c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40266cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402670:
    // 0x402670: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x402670u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_402674:
    // 0x402674: 0xc0cd518  jal         func_335460
label_402678:
    if (ctx->pc == 0x402678u) {
        ctx->pc = 0x402678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402674u;
        // 0x402678: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40267Cu;
        goto label_40267c;
    }
    ctx->pc = 0x402674u;
    SET_GPR_U32(ctx, 31, 0x40267Cu);
    ctx->pc = 0x402678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402674u;
    // 0x402678: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x402674u, 0x40267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40267Cu;
label_40267c:
    // 0x40267c: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x40267cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_402680:
    // 0x402680: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x402680u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_402684:
    // 0x402684: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x402684u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_402688:
    // 0x402688: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x402688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40268c:
    // 0x40268c: 0xc0cd55c  jal         func_335570
label_402690:
    if (ctx->pc == 0x402690u) {
        ctx->pc = 0x402690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40268Cu;
        // 0x402690: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402694u;
        goto label_402694;
    }
    ctx->pc = 0x40268Cu;
    SET_GPR_U32(ctx, 31, 0x402694u);
    ctx->pc = 0x402690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40268Cu;
    // 0x402690: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x40268Cu, 0x402694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402694u;
label_402694:
    // 0x402694: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x402694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_402698:
    // 0x402698: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x402698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40269c:
    // 0x40269c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40269cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4026a0:
    // 0x4026a0: 0xc0e954c  jal         func_3A5530
label_4026a4:
    if (ctx->pc == 0x4026A4u) {
        ctx->pc = 0x4026A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4026A0u;
        // 0x4026a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4026A8u;
        goto label_4026a8;
    }
    ctx->pc = 0x4026A0u;
    SET_GPR_U32(ctx, 31, 0x4026A8u);
    ctx->pc = 0x4026A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4026A0u;
    // 0x4026a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x4026A0u, 0x4026A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4026A8u;
label_4026a8:
    // 0x4026a8: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x4026a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_4026ac:
    // 0x4026ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4026acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4026b0:
    // 0x4026b0: 0x26317830  addiu       $s1, $s1, 0x7830
    ctx->pc = 0x4026b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30768));
label_4026b4:
    // 0x4026b4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4026b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4026b8:
    // 0x4026b8: 0xc0cd518  jal         func_335460
label_4026bc:
    if (ctx->pc == 0x4026BCu) {
        ctx->pc = 0x4026BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4026B8u;
        // 0x4026bc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4026C0u;
        goto label_4026c0;
    }
    ctx->pc = 0x4026B8u;
    SET_GPR_U32(ctx, 31, 0x4026C0u);
    ctx->pc = 0x4026BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4026B8u;
    // 0x4026bc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4026B8u, 0x4026C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4026C0u;
label_4026c0:
    // 0x4026c0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x4026c0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_4026c4:
    // 0x4026c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4026c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4026c8:
    // 0x4026c8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4026c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4026cc:
    // 0x4026cc: 0xc0cd518  jal         func_335460
label_4026d0:
    if (ctx->pc == 0x4026D0u) {
        ctx->pc = 0x4026D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4026CCu;
        // 0x4026d0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4026D4u;
        goto label_4026d4;
    }
    ctx->pc = 0x4026CCu;
    SET_GPR_U32(ctx, 31, 0x4026D4u);
    ctx->pc = 0x4026D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4026CCu;
    // 0x4026d0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4026CCu, 0x4026D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4026D4u;
label_4026d4:
    // 0x4026d4: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x4026d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_4026d8:
    // 0x4026d8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x4026d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_4026dc:
    // 0x4026dc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4026dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4026e0:
    // 0x4026e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4026e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4026e4:
    // 0x4026e4: 0xc0cd55c  jal         func_335570
label_4026e8:
    if (ctx->pc == 0x4026E8u) {
        ctx->pc = 0x4026E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4026E4u;
        // 0x4026e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4026ECu;
        goto label_4026ec;
    }
    ctx->pc = 0x4026E4u;
    SET_GPR_U32(ctx, 31, 0x4026ECu);
    ctx->pc = 0x4026E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4026E4u;
    // 0x4026e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x4026E4u, 0x4026ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4026ECu;
label_4026ec:
    // 0x4026ec: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x4026ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_4026f0:
    // 0x4026f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4026f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4026f4:
    // 0x4026f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4026f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4026f8:
    // 0x4026f8: 0xc0e954c  jal         func_3A5530
label_4026fc:
    if (ctx->pc == 0x4026FCu) {
        ctx->pc = 0x4026FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4026F8u;
        // 0x4026fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402700u;
        goto label_402700;
    }
    ctx->pc = 0x4026F8u;
    SET_GPR_U32(ctx, 31, 0x402700u);
    ctx->pc = 0x4026FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4026F8u;
    // 0x4026fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x4026F8u, 0x402700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402700u;
label_402700:
    // 0x402700: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x402700u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_402704:
    // 0x402704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402708:
    // 0x402708: 0x26317840  addiu       $s1, $s1, 0x7840
    ctx->pc = 0x402708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30784));
label_40270c:
    // 0x40270c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x40270cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_402710:
    // 0x402710: 0xc0cd518  jal         func_335460
label_402714:
    if (ctx->pc == 0x402714u) {
        ctx->pc = 0x402714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402710u;
        // 0x402714: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x402718u;
        goto label_402718;
    }
    ctx->pc = 0x402710u;
    SET_GPR_U32(ctx, 31, 0x402718u);
    ctx->pc = 0x402714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402710u;
    // 0x402714: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x402710u, 0x402718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402718u;
label_402718:
    // 0x402718: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x402718u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_40271c:
    // 0x40271c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40271cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402720:
    // 0x402720: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x402720u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_402724:
    // 0x402724: 0xc0cd518  jal         func_335460
label_402728:
    if (ctx->pc == 0x402728u) {
        ctx->pc = 0x402728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402724u;
        // 0x402728: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40272Cu;
        goto label_40272c;
    }
    ctx->pc = 0x402724u;
    SET_GPR_U32(ctx, 31, 0x40272Cu);
    ctx->pc = 0x402728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402724u;
    // 0x402728: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x402724u, 0x40272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40272Cu;
label_40272c:
    // 0x40272c: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x40272cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_402730:
    // 0x402730: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x402730u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_402734:
    // 0x402734: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x402734u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_402738:
    // 0x402738: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x402738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40273c:
    // 0x40273c: 0xc0cd55c  jal         func_335570
label_402740:
    if (ctx->pc == 0x402740u) {
        ctx->pc = 0x402740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40273Cu;
        // 0x402740: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402744u;
        goto label_402744;
    }
    ctx->pc = 0x40273Cu;
    SET_GPR_U32(ctx, 31, 0x402744u);
    ctx->pc = 0x402740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40273Cu;
    // 0x402740: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x40273Cu, 0x402744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402744u;
label_402744:
    // 0x402744: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x402744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_402748:
    // 0x402748: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x402748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40274c:
    // 0x40274c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40274cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_402750:
    // 0x402750: 0xc0e954c  jal         func_3A5530
label_402754:
    if (ctx->pc == 0x402754u) {
        ctx->pc = 0x402754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402750u;
        // 0x402754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402758u;
        goto label_402758;
    }
    ctx->pc = 0x402750u;
    SET_GPR_U32(ctx, 31, 0x402758u);
    ctx->pc = 0x402754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402750u;
    // 0x402754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x402750u, 0x402758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402758u;
label_402758:
    // 0x402758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40275c:
    // 0x40275c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x40275cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_402760:
    // 0x402760: 0xc0cd518  jal         func_335460
label_402764:
    if (ctx->pc == 0x402764u) {
        ctx->pc = 0x402764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402760u;
        // 0x402764: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x402768u;
        goto label_402768;
    }
    ctx->pc = 0x402760u;
    SET_GPR_U32(ctx, 31, 0x402768u);
    ctx->pc = 0x402764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402760u;
    // 0x402764: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x402760u, 0x402768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402768u;
label_402768:
    // 0x402768: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x402768u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_40276c:
    // 0x40276c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x40276cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_402770:
    // 0x402770: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x402770u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_402774:
    // 0x402774: 0xc0cd518  jal         func_335460
label_402778:
    if (ctx->pc == 0x402778u) {
        ctx->pc = 0x402778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402774u;
        // 0x402778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40277Cu;
        goto label_40277c;
    }
    ctx->pc = 0x402774u;
    SET_GPR_U32(ctx, 31, 0x40277Cu);
    ctx->pc = 0x402778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402774u;
    // 0x402778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x402774u, 0x40277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40277Cu;
label_40277c:
    // 0x40277c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40277cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402780:
    // 0x402780: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x402780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_402784:
    // 0x402784: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x402784u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_402788:
    // 0x402788: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x402788u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_40278c:
    // 0x40278c: 0xc0cd55c  jal         func_335570
label_402790:
    if (ctx->pc == 0x402790u) {
        ctx->pc = 0x402790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40278Cu;
        // 0x402790: 0x4600bb86  mov.s       $f14, $f23 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x402794u;
        goto label_402794;
    }
    ctx->pc = 0x40278Cu;
    SET_GPR_U32(ctx, 31, 0x402794u);
    ctx->pc = 0x402790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40278Cu;
    // 0x402790: 0x4600bb86  mov.s       $f14, $f23 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x40278Cu, 0x402794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402794u;
label_402794:
    // 0x402794: 0x8fa70530  lw          $a3, 0x530($sp)
    ctx->pc = 0x402794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_402798:
    // 0x402798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x402798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40279c:
    // 0x40279c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40279cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4027a0:
    // 0x4027a0: 0xc0e954c  jal         func_3A5530
label_4027a4:
    if (ctx->pc == 0x4027A4u) {
        ctx->pc = 0x4027A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4027A0u;
        // 0x4027a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4027A8u;
        goto label_4027a8;
    }
    ctx->pc = 0x4027A0u;
    SET_GPR_U32(ctx, 31, 0x4027A8u);
    ctx->pc = 0x4027A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4027A0u;
    // 0x4027a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x4027A0u, 0x4027A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4027A8u;
label_4027a8:
    // 0x4027a8: 0x8fa3053c  lw          $v1, 0x53C($sp)
    ctx->pc = 0x4027a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
label_4027ac:
    // 0x4027ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4027acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4027b0:
    // 0x4027b0: 0x5462005f  bnel        $v1, $v0, . + 4 + (0x5F << 2)
label_4027b4:
    if (ctx->pc == 0x4027B4u) {
        ctx->pc = 0x4027B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4027B0u;
        // 0x4027b4: 0x8fa4053c  lw          $a0, 0x53C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4027B8u;
        goto label_4027b8;
    }
    ctx->pc = 0x4027B0u;
    {
        const bool branch_taken_0x4027b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4027b0) {
            ctx->pc = 0x4027B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4027B0u;
            // 0x4027b4: 0x8fa4053c  lw          $a0, 0x53C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x402930u;
            goto label_402930;
        }
    }
    ctx->pc = 0x4027B8u;
label_4027b8:
    // 0x4027b8: 0x3c01bedc  lui         $at, 0xBEDC
    ctx->pc = 0x4027b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48860 << 16));
label_4027bc:
    // 0x4027bc: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x4027bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_4027c0:
    // 0x4027c0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x4027c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_4027c4:
    // 0x4027c4: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x4027c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_4027c8:
    // 0x4027c8: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x4027c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
label_4027cc:
    // 0x4027cc: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x4027ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_4027d0:
    // 0x4027d0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x4027d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4027d4:
    // 0x4027d4: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x4027d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_4027d8:
    // 0x4027d8: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x4027d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4027dc:
    // 0x4027dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4027dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4027e0:
    // 0x4027e0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4027e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4027e4:
    // 0x4027e4: 0xc0cd518  jal         func_335460
label_4027e8:
    if (ctx->pc == 0x4027E8u) {
        ctx->pc = 0x4027E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4027E4u;
        // 0x4027e8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4027ECu;
        goto label_4027ec;
    }
    ctx->pc = 0x4027E4u;
    SET_GPR_U32(ctx, 31, 0x4027ECu);
    ctx->pc = 0x4027E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4027E4u;
    // 0x4027e8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4027E4u, 0x4027ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4027ECu;
label_4027ec:
    // 0x4027ec: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x4027ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_4027f0:
    // 0x4027f0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x4027f0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_4027f4:
    // 0x4027f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4027f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4027f8:
    // 0x4027f8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4027f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_4027fc:
    // 0x4027fc: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x4027fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_402800:
    // 0x402800: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x402800u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_402804:
    // 0x402804: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x402804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_402808:
    // 0x402808: 0xc0cd518  jal         func_335460
label_40280c:
    if (ctx->pc == 0x40280Cu) {
        ctx->pc = 0x40280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402808u;
        // 0x40280c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x402810u;
        goto label_402810;
    }
    ctx->pc = 0x402808u;
    SET_GPR_U32(ctx, 31, 0x402810u);
    ctx->pc = 0x40280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402808u;
    // 0x40280c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x402808u, 0x402810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402810u;
label_402810:
    // 0x402810: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x402810u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_402814:
    // 0x402814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402818:
    // 0x402818: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x402818u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_40281c:
    // 0x40281c: 0xc0cd518  jal         func_335460
label_402820:
    if (ctx->pc == 0x402820u) {
        ctx->pc = 0x402820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40281Cu;
        // 0x402820: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x402824u;
        goto label_402824;
    }
    ctx->pc = 0x40281Cu;
    SET_GPR_U32(ctx, 31, 0x402824u);
    ctx->pc = 0x402820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40281Cu;
    // 0x402820: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40281Cu, 0x402824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402824u;
label_402824:
    // 0x402824: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x402824u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_402828:
    // 0x402828: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x402828u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_40282c:
    // 0x40282c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x40282cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_402830:
    // 0x402830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x402830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_402834:
    // 0x402834: 0xc0cd55c  jal         func_335570
label_402838:
    if (ctx->pc == 0x402838u) {
        ctx->pc = 0x402838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402834u;
        // 0x402838: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40283Cu;
        goto label_40283c;
    }
    ctx->pc = 0x402834u;
    SET_GPR_U32(ctx, 31, 0x40283Cu);
    ctx->pc = 0x402838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402834u;
    // 0x402838: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x402834u, 0x40283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40283Cu;
label_40283c:
    // 0x40283c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x40283cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_402840:
    // 0x402840: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x402840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_402844:
    // 0x402844: 0xc136b18  jal         func_4DAC60
label_402848:
    if (ctx->pc == 0x402848u) {
        ctx->pc = 0x402848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402844u;
        // 0x402848: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40284Cu;
        goto label_40284c;
    }
    ctx->pc = 0x402844u;
    SET_GPR_U32(ctx, 31, 0x40284Cu);
    ctx->pc = 0x402848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402844u;
    // 0x402848: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x402844u, 0x40284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40284Cu;
label_40284c:
    // 0x40284c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x40284cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_402850:
    // 0x402850: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x402850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_402854:
    // 0x402854: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x402854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_402858:
    // 0x402858: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x402858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_40285c:
    // 0x40285c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40285cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402860:
    // 0x402860: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x402860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_402864:
    // 0x402864: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x402864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_402868:
    // 0x402868: 0xc0cd518  jal         func_335460
label_40286c:
    if (ctx->pc == 0x40286Cu) {
        ctx->pc = 0x40286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402868u;
        // 0x40286c: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402870u;
        goto label_402870;
    }
    ctx->pc = 0x402868u;
    SET_GPR_U32(ctx, 31, 0x402870u);
    ctx->pc = 0x40286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402868u;
    // 0x40286c: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x402868u, 0x402870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402870u;
label_402870:
    // 0x402870: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x402870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_402874:
    // 0x402874: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x402874u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_402878:
    // 0x402878: 0x34a56994  ori         $a1, $a1, 0x6994
    ctx->pc = 0x402878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
label_40287c:
    // 0x40287c: 0xc0f15f6  jal         func_3C57D8
label_402880:
    if (ctx->pc == 0x402880u) {
        ctx->pc = 0x402880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40287Cu;
        // 0x402880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402884u;
        goto label_402884;
    }
    ctx->pc = 0x40287Cu;
    SET_GPR_U32(ctx, 31, 0x402884u);
    ctx->pc = 0x402880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40287Cu;
    // 0x402880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x40287Cu, 0x402884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402884u;
label_402884:
    // 0x402884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402888:
    // 0x402888: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x402888u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_40288c:
    // 0x40288c: 0xc0cd518  jal         func_335460
label_402890:
    if (ctx->pc == 0x402890u) {
        ctx->pc = 0x402890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40288Cu;
        // 0x402890: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x402894u;
        goto label_402894;
    }
    ctx->pc = 0x40288Cu;
    SET_GPR_U32(ctx, 31, 0x402894u);
    ctx->pc = 0x402890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40288Cu;
    // 0x402890: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40288Cu, 0x402894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402894u;
label_402894:
    // 0x402894: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x402894u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_402898:
    // 0x402898: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x402898u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_40289c:
    // 0x40289c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x40289cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_4028a0:
    // 0x4028a0: 0xc0cd518  jal         func_335460
label_4028a4:
    if (ctx->pc == 0x4028A4u) {
        ctx->pc = 0x4028A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4028A0u;
        // 0x4028a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4028A8u;
        goto label_4028a8;
    }
    ctx->pc = 0x4028A0u;
    SET_GPR_U32(ctx, 31, 0x4028A8u);
    ctx->pc = 0x4028A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4028A0u;
    // 0x4028a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4028A0u, 0x4028A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4028A8u;
label_4028a8:
    // 0x4028a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4028a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4028ac:
    // 0x4028ac: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x4028acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_4028b0:
    // 0x4028b0: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x4028b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_4028b4:
    // 0x4028b4: 0xc0cd518  jal         func_335460
label_4028b8:
    if (ctx->pc == 0x4028B8u) {
        ctx->pc = 0x4028B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4028B4u;
        // 0x4028b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4028BCu;
        goto label_4028bc;
    }
    ctx->pc = 0x4028B4u;
    SET_GPR_U32(ctx, 31, 0x4028BCu);
    ctx->pc = 0x4028B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4028B4u;
    // 0x4028b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4028B4u, 0x4028BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4028BCu;
label_4028bc:
    // 0x4028bc: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x4028bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_4028c0:
    // 0x4028c0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4028c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_4028c4:
    // 0x4028c4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4028c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4028c8:
    // 0x4028c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4028c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4028cc:
    // 0x4028cc: 0xc0cd55c  jal         func_335570
label_4028d0:
    if (ctx->pc == 0x4028D0u) {
        ctx->pc = 0x4028D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4028CCu;
        // 0x4028d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4028D4u;
        goto label_4028d4;
    }
    ctx->pc = 0x4028CCu;
    SET_GPR_U32(ctx, 31, 0x4028D4u);
    ctx->pc = 0x4028D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4028CCu;
    // 0x4028d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x4028CCu, 0x4028D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4028D4u;
label_4028d4:
    // 0x4028d4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4028d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4028d8:
    // 0x4028d8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4028d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4028dc:
    // 0x4028dc: 0xc136b18  jal         func_4DAC60
label_4028e0:
    if (ctx->pc == 0x4028E0u) {
        ctx->pc = 0x4028E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4028DCu;
        // 0x4028e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4028E4u;
        goto label_4028e4;
    }
    ctx->pc = 0x4028DCu;
    SET_GPR_U32(ctx, 31, 0x4028E4u);
    ctx->pc = 0x4028E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4028DCu;
    // 0x4028e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4028DCu, 0x4028E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4028E4u;
label_4028e4:
    // 0x4028e4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x4028e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4028e8:
    // 0x4028e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4028e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4028ec:
    // 0x4028ec: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x4028ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_4028f0:
    // 0x4028f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x4028f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_4028f4:
    // 0x4028f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4028f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4028f8:
    // 0x4028f8: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x4028f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_4028fc:
    // 0x4028fc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x4028fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_402900:
    // 0x402900: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x402900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_402904:
    // 0x402904: 0xc0cd518  jal         func_335460
label_402908:
    if (ctx->pc == 0x402908u) {
        ctx->pc = 0x402908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402904u;
        // 0x402908: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40290Cu;
        goto label_40290c;
    }
    ctx->pc = 0x402904u;
    SET_GPR_U32(ctx, 31, 0x40290Cu);
    ctx->pc = 0x402908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402904u;
    // 0x402908: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x402904u, 0x40290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40290Cu;
label_40290c:
    // 0x40290c: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x40290cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_402910:
    // 0x402910: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x402910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_402914:
    // 0x402914: 0x34a56994  ori         $a1, $a1, 0x6994
    ctx->pc = 0x402914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
label_402918:
    // 0x402918: 0xc0f15f6  jal         func_3C57D8
label_40291c:
    if (ctx->pc == 0x40291Cu) {
        ctx->pc = 0x40291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402918u;
        // 0x40291c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x402920u;
        goto label_402920;
    }
    ctx->pc = 0x402918u;
    SET_GPR_U32(ctx, 31, 0x402920u);
    ctx->pc = 0x40291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402918u;
    // 0x40291c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x402918u, 0x402920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402920u;
label_402920:
    // 0x402920: 0x8fa50540  lw          $a1, 0x540($sp)
    ctx->pc = 0x402920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_402924:
    // 0x402924: 0xc0e9ba2  jal         func_3A6E88
label_402928:
    if (ctx->pc == 0x402928u) {
        ctx->pc = 0x402928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402924u;
        // 0x402928: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40292Cu;
        goto label_40292c;
    }
    ctx->pc = 0x402924u;
    SET_GPR_U32(ctx, 31, 0x40292Cu);
    ctx->pc = 0x402928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402924u;
    // 0x402928: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E88u, 0x402924u, 0x40292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40292Cu;
label_40292c:
    // 0x40292c: 0x8fa4053c  lw          $a0, 0x53C($sp)
    ctx->pc = 0x40292cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
label_402930:
    // 0x402930: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x402930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_402934:
    // 0x402934: 0x54820068  bnel        $a0, $v0, . + 4 + (0x68 << 2)
label_402938:
    if (ctx->pc == 0x402938u) {
        ctx->pc = 0x402938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402934u;
        // 0x402938: 0x8fa40530  lw          $a0, 0x530($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40293Cu;
        goto label_40293c;
    }
    ctx->pc = 0x402934u;
    {
        const bool branch_taken_0x402934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x402934) {
            ctx->pc = 0x402938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x402934u;
            // 0x402938: 0x8fa40530  lw          $a0, 0x530($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x402AD8u;
            goto label_402ad8;
        }
    }
    ctx->pc = 0x40293Cu;
label_40293c:
    // 0x40293c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x40293cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_402940:
    // 0x402940: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x402940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_402944:
    // 0x402944: 0x8c4471a0  lw          $a0, 0x71A0($v0)
    ctx->pc = 0x402944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29088)));
label_402948:
    // 0x402948: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x402948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_40294c:
    // 0x40294c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x40294cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_402950:
    // 0x402950: 0xc05c2ca  jal         func_170B28
label_402954:
    if (ctx->pc == 0x402954u) {
        ctx->pc = 0x402954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402950u;
        // 0x402954: 0x3c134e43  lui         $s3, 0x4E43 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)20035 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402958u;
        goto label_402958;
    }
    ctx->pc = 0x402950u;
    SET_GPR_U32(ctx, 31, 0x402958u);
    ctx->pc = 0x402954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402950u;
    // 0x402954: 0x3c134e43  lui         $s3, 0x4E43 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)20035 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170B28u, 0x402950u, 0x402958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402958u;
label_402958:
    // 0x402958: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x402958u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
label_40295c:
    // 0x40295c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x40295cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_402960:
    // 0x402960: 0x27a204b0  addiu       $v0, $sp, 0x4B0
    ctx->pc = 0x402960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_402964:
    // 0x402964: 0x24b0b8b8  addiu       $s0, $a1, -0x4748
    ctx->pc = 0x402964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949048));
label_402968:
    // 0x402968: 0xafa20550  sw          $v0, 0x550($sp)
    ctx->pc = 0x402968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1360), GPR_U32(ctx, 2));
label_40296c:
    // 0x40296c: 0x27a304c0  addiu       $v1, $sp, 0x4C0
    ctx->pc = 0x40296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_402970:
    // 0x402970: 0x27a404d0  addiu       $a0, $sp, 0x4D0
    ctx->pc = 0x402970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_402974:
    // 0x402974: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x402974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_402978:
    // 0x402978: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x402978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_40297c:
    // 0x40297c: 0xafa30554  sw          $v1, 0x554($sp)
    ctx->pc = 0x40297cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1364), GPR_U32(ctx, 3));
label_402980:
    // 0x402980: 0x27be04e0  addiu       $fp, $sp, 0x4E0
    ctx->pc = 0x402980u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_402984:
    // 0x402984: 0xafa40558  sw          $a0, 0x558($sp)
    ctx->pc = 0x402984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1368), GPR_U32(ctx, 4));
label_402988:
    // 0x402988: 0x27b704f0  addiu       $s7, $sp, 0x4F0
    ctx->pc = 0x402988u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_40298c:
    // 0x40298c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x40298cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_402990:
    // 0x402990: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x402990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_402994:
    // 0x402994: 0x27b60500  addiu       $s6, $sp, 0x500
    ctx->pc = 0x402994u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_402998:
    // 0x402998: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x402998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_40299c:
    // 0x40299c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x40299cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_4029a0:
    // 0x4029a0: 0x27b50510  addiu       $s5, $sp, 0x510
    ctx->pc = 0x4029a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_4029a4:
    // 0x4029a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4029a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4029a8:
    // 0x4029a8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x4029a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_4029ac:
    // 0x4029ac: 0x27b404a0  addiu       $s4, $sp, 0x4A0
    ctx->pc = 0x4029acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_4029b0:
    // 0x4029b0: 0xafa5054c  sw          $a1, 0x54C($sp)
    ctx->pc = 0x4029b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1356), GPR_U32(ctx, 5));
label_4029b4:
    // 0x4029b4: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x4029b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4029b8:
    // 0x4029b8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x4029b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_4029bc:
    // 0x4029bc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4029bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_4029c0:
    // 0x4029c0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x4029c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_4029c4:
    // 0x4029c4: 0x367338ff  ori         $s3, $s3, 0x38FF
    ctx->pc = 0x4029c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)14591);
label_4029c8:
    // 0x4029c8: 0xafa20540  sw          $v0, 0x540($sp)
    ctx->pc = 0x4029c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
label_4029cc:
    // 0x4029cc: 0x36520036  ori         $s2, $s2, 0x36
    ctx->pc = 0x4029ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)54);
label_4029d0:
    // 0x4029d0: 0x8fa30540  lw          $v1, 0x540($sp)
    ctx->pc = 0x4029d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_4029d4:
    // 0x4029d4: 0x0  nop
    ctx->pc = 0x4029d4u;
    // NOP
label_4029d8:
    // 0x4029d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4029d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4029dc:
    // 0x4029dc: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4029dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_4029e0:
    // 0x4029e0: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x4029e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_4029e4:
    // 0x4029e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4029e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4029e8:
    // 0x4029e8: 0xc0cd518  jal         func_335460
label_4029ec:
    if (ctx->pc == 0x4029ECu) {
        ctx->pc = 0x4029ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4029E8u;
        // 0x4029ec: 0xafa30540  sw          $v1, 0x540($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4029F0u;
        goto label_4029f0;
    }
    ctx->pc = 0x4029E8u;
    SET_GPR_U32(ctx, 31, 0x4029F0u);
    ctx->pc = 0x4029ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4029E8u;
    // 0x4029ec: 0xafa30540  sw          $v1, 0x540($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4029E8u, 0x4029F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4029F0u;
label_4029f0:
    // 0x4029f0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4029f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_4029f4:
    // 0x4029f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4029f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4029f8:
    // 0x4029f8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4029f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_4029fc:
    // 0x4029fc: 0xc0cd518  jal         func_335460
label_402a00:
    if (ctx->pc == 0x402A00u) {
        ctx->pc = 0x402A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4029FCu;
        // 0x402a00: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x402A04u;
        goto label_402a04;
    }
    ctx->pc = 0x4029FCu;
    SET_GPR_U32(ctx, 31, 0x402A04u);
    ctx->pc = 0x402A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4029FCu;
    // 0x402a00: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4029FCu, 0x402A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402A04u;
label_402a04:
    // 0x402a04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x402a04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_402a08:
    // 0x402a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402a0c:
    // 0x402a0c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x402a0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_402a10:
    // 0x402a10: 0xc0cd518  jal         func_335460
label_402a14:
    if (ctx->pc == 0x402A14u) {
        ctx->pc = 0x402A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402A10u;
        // 0x402a14: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x402A18u;
        goto label_402a18;
    }
    ctx->pc = 0x402A10u;
    SET_GPR_U32(ctx, 31, 0x402A18u);
    ctx->pc = 0x402A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402A10u;
    // 0x402a14: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x402A10u, 0x402A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402A18u;
label_402a18:
    // 0x402a18: 0x8fa5054c  lw          $a1, 0x54C($sp)
    ctx->pc = 0x402a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1356)));
label_402a1c:
    // 0x402a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402a20:
    // 0x402a20: 0xe7b500a0  swc1        $f21, 0xA0($sp)
    ctx->pc = 0x402a20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_402a24:
    // 0x402a24: 0xe7b400a4  swc1        $f20, 0xA4($sp)
    ctx->pc = 0x402a24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_402a28:
    // 0x402a28: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x402a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_402a2c:
    // 0x402a2c: 0xe4b9000c  swc1        $f25, 0xC($a1)
    ctx->pc = 0x402a2cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_402a30:
    // 0x402a30: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x402a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_402a34:
    // 0x402a34: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x402a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_402a38:
    // 0x402a38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x402a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_402a3c:
    // 0x402a3c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x402a3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_402a40:
    // 0x402a40: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x402a40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_402a44:
    // 0x402a44: 0x7fa204b0  sq          $v0, 0x4B0($sp)
    ctx->pc = 0x402a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
label_402a48:
    // 0x402a48: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x402a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_402a4c:
    // 0x402a4c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x402a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_402a50:
    // 0x402a50: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x402a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_402a54:
    // 0x402a54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x402a54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_402a58:
    // 0x402a58: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x402a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_402a5c:
    // 0x402a5c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x402a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_402a60:
    // 0x402a60: 0x7fa304a0  sq          $v1, 0x4A0($sp)
    ctx->pc = 0x402a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 3));
label_402a64:
    // 0x402a64: 0xe7b804c0  swc1        $f24, 0x4C0($sp)
    ctx->pc = 0x402a64u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1216), bits); }
label_402a68:
    // 0x402a68: 0xc0cd518  jal         func_335460
label_402a6c:
    if (ctx->pc == 0x402A6Cu) {
        ctx->pc = 0x402A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402A68u;
        // 0x402a6c: 0xafa204d0  sw          $v0, 0x4D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402A70u;
        goto label_402a70;
    }
    ctx->pc = 0x402A68u;
    SET_GPR_U32(ctx, 31, 0x402A70u);
    ctx->pc = 0x402A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402A68u;
    // 0x402a6c: 0xafa204d0  sw          $v0, 0x4D0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x402A68u, 0x402A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402A70u;
label_402a70:
    // 0x402a70: 0xe7a004e0  swc1        $f0, 0x4E0($sp)
    ctx->pc = 0x402a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1248), bits); }
label_402a74:
    // 0x402a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402a78:
    // 0x402a78: 0xafb304f0  sw          $s3, 0x4F0($sp)
    ctx->pc = 0x402a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1264), GPR_U32(ctx, 19));
label_402a7c:
    // 0x402a7c: 0xc0cd4ee  jal         func_3353B8
label_402a80:
    if (ctx->pc == 0x402A80u) {
        ctx->pc = 0x402A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402A7Cu;
        // 0x402a80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402A84u;
        goto label_402a84;
    }
    ctx->pc = 0x402A7Cu;
    SET_GPR_U32(ctx, 31, 0x402A84u);
    ctx->pc = 0x402A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402A7Cu;
    // 0x402a80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x402A7Cu, 0x402A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402A84u;
label_402a84:
    // 0x402a84: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x402a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_402a88:
    // 0x402a88: 0x8fa60550  lw          $a2, 0x550($sp)
    ctx->pc = 0x402a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1360)));
label_402a8c:
    // 0x402a8c: 0x8fa70554  lw          $a3, 0x554($sp)
    ctx->pc = 0x402a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1364)));
label_402a90:
    // 0x402a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x402a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_402a94:
    // 0x402a94: 0x8fa80558  lw          $t0, 0x558($sp)
    ctx->pc = 0x402a94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1368)));
label_402a98:
    // 0x402a98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x402a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_402a9c:
    // 0x402a9c: 0xafa00510  sw          $zero, 0x510($sp)
    ctx->pc = 0x402a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1296), GPR_U32(ctx, 0));
label_402aa0:
    // 0x402aa0: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x402aa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_402aa4:
    // 0x402aa4: 0xafa20500  sw          $v0, 0x500($sp)
    ctx->pc = 0x402aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 2));
label_402aa8:
    // 0x402aa8: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x402aa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_402aac:
    // 0x402aac: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x402aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
label_402ab0:
    // 0x402ab0: 0xc0ea0d0  jal         func_3A8340
label_402ab4:
    if (ctx->pc == 0x402AB4u) {
        ctx->pc = 0x402AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402AB0u;
        // 0x402ab4: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402AB8u;
        goto label_402ab8;
    }
    ctx->pc = 0x402AB0u;
    SET_GPR_U32(ctx, 31, 0x402AB8u);
    ctx->pc = 0x402AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402AB0u;
    // 0x402ab4: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8340u, 0x402AB0u, 0x402AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402AB8u;
label_402ab8:
    // 0x402ab8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x402ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_402abc:
    // 0x402abc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x402abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_402ac0:
    // 0x402ac0: 0xc0f15bc  jal         func_3C56F0
label_402ac4:
    if (ctx->pc == 0x402AC4u) {
        ctx->pc = 0x402AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402AC0u;
        // 0x402ac4: 0x24647620  addiu       $a0, $v1, 0x7620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402AC8u;
        goto label_402ac8;
    }
    ctx->pc = 0x402AC0u;
    SET_GPR_U32(ctx, 31, 0x402AC8u);
    ctx->pc = 0x402AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402AC0u;
    // 0x402ac4: 0x24647620  addiu       $a0, $v1, 0x7620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x402AC0u, 0x402AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402AC8u;
label_402ac8:
    // 0x402ac8: 0x8fa40540  lw          $a0, 0x540($sp)
    ctx->pc = 0x402ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_402acc:
    // 0x402acc: 0x481ffc2  bgez        $a0, . + 4 + (-0x3E << 2)
label_402ad0:
    if (ctx->pc == 0x402AD0u) {
        ctx->pc = 0x402AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402ACCu;
        // 0x402ad0: 0x8fa30540  lw          $v1, 0x540($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402AD4u;
        goto label_402ad4;
    }
    ctx->pc = 0x402ACCu;
    {
        const bool branch_taken_0x402acc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x402AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402ACCu;
        // 0x402ad0: 0x8fa30540  lw          $v1, 0x540($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402acc) {
            ctx->pc = 0x4029D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4029d8;
        }
    }
    ctx->pc = 0x402AD4u;
label_402ad4:
    // 0x402ad4: 0x8fa40530  lw          $a0, 0x530($sp)
    ctx->pc = 0x402ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_402ad8:
    // 0x402ad8: 0xc0e8dee  jal         func_3A37B8
label_402adc:
    if (ctx->pc == 0x402ADCu) {
        ctx->pc = 0x402ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402AD8u;
        // 0x402adc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402AE0u;
        goto label_402ae0;
    }
    ctx->pc = 0x402AD8u;
    SET_GPR_U32(ctx, 31, 0x402AE0u);
    ctx->pc = 0x402ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402AD8u;
    // 0x402adc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x402AD8u, 0x402AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402AE0u;
label_402ae0:
    // 0x402ae0: 0x8fa50530  lw          $a1, 0x530($sp)
    ctx->pc = 0x402ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_402ae4:
    // 0x402ae4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x402ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_402ae8:
    // 0x402ae8: 0xafa20540  sw          $v0, 0x540($sp)
    ctx->pc = 0x402ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
label_402aec:
    // 0x402aec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x402aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_402af0:
    // 0x402af0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x402af0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_402af4:
    // 0x402af4: 0x40f809  jalr        $v0
label_402af8:
    if (ctx->pc == 0x402AF8u) {
        ctx->pc = 0x402AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402AF4u;
        // 0x402af8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402AFCu;
        goto label_402afc;
    }
    ctx->pc = 0x402AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x402AFCu);
        ctx->pc = 0x402AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402AF4u;
        // 0x402af8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402AF4u, 0x402AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x402AFCu;
label_402afc:
    // 0x402afc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x402afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_402b00:
    // 0x402b00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x402b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_402b04:
    // 0x402b04: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_402b08:
    if (ctx->pc == 0x402B08u) {
        ctx->pc = 0x402B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402B04u;
        // 0x402b08: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402B0Cu;
        goto label_402b0c;
    }
    ctx->pc = 0x402B04u;
    {
        const bool branch_taken_0x402b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x402B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402B04u;
        // 0x402b08: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402b04) {
            ctx->pc = 0x402B88u;
            goto label_402b88;
        }
    }
    ctx->pc = 0x402B0Cu;
label_402b0c:
    // 0x402b0c: 0xc0e92e2  jal         func_3A4B88
label_402b10:
    if (ctx->pc == 0x402B10u) {
        ctx->pc = 0x402B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402B0Cu;
        // 0x402b10: 0x8fa40530  lw          $a0, 0x530($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402B14u;
        goto label_402b14;
    }
    ctx->pc = 0x402B0Cu;
    SET_GPR_U32(ctx, 31, 0x402B14u);
    ctx->pc = 0x402B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402B0Cu;
    // 0x402b10: 0x8fa40530  lw          $a0, 0x530($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B88u, 0x402B0Cu, 0x402B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402B14u;
label_402b14:
    // 0x402b14: 0x8fa30540  lw          $v1, 0x540($sp)
    ctx->pc = 0x402b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_402b18:
    // 0x402b18: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
label_402b1c:
    if (ctx->pc == 0x402B1Cu) {
        ctx->pc = 0x402B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402B18u;
        // 0x402b1c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402B20u;
        goto label_402b20;
    }
    ctx->pc = 0x402B18u;
    {
        const bool branch_taken_0x402b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x402B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402B18u;
        // 0x402b1c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402b18) {
            ctx->pc = 0x402B84u;
            goto label_402b84;
        }
    }
    ctx->pc = 0x402B20u;
label_402b20:
    // 0x402b20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x402b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_402b24:
    // 0x402b24: 0xc1073cc  jal         func_41CF30
label_402b28:
    if (ctx->pc == 0x402B28u) {
        ctx->pc = 0x402B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402B24u;
        // 0x402b28: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402B2Cu;
        goto label_402b2c;
    }
    ctx->pc = 0x402B24u;
    SET_GPR_U32(ctx, 31, 0x402B2Cu);
    ctx->pc = 0x402B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402B24u;
    // 0x402b28: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x402B24u, 0x402B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402B2Cu;
label_402b2c:
    // 0x402b2c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x402b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_402b30:
    // 0x402b30: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_402b34:
    if (ctx->pc == 0x402B34u) {
        ctx->pc = 0x402B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402B30u;
        // 0x402b34: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402B38u;
        goto label_402b38;
    }
    ctx->pc = 0x402B30u;
    {
        const bool branch_taken_0x402b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x402B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402B30u;
        // 0x402b34: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402b30) {
            ctx->pc = 0x402B88u;
            goto label_402b88;
        }
    }
    ctx->pc = 0x402B38u;
label_402b38:
    // 0x402b38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x402b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_402b3c:
    // 0x402b3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x402b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_402b40:
    // 0x402b40: 0xc08a61a  jal         func_229868
label_402b44:
    if (ctx->pc == 0x402B44u) {
        ctx->pc = 0x402B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402B40u;
        // 0x402b44: 0x8fa40538  lw          $a0, 0x538($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402B48u;
        goto label_402b48;
    }
    ctx->pc = 0x402B40u;
    SET_GPR_U32(ctx, 31, 0x402B48u);
    ctx->pc = 0x402B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402B40u;
    // 0x402b44: 0x8fa40538  lw          $a0, 0x538($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x402B40u, 0x402B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402B48u;
label_402b48:
    // 0x402b48: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_402b4c:
    if (ctx->pc == 0x402B4Cu) {
        ctx->pc = 0x402B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402B48u;
        // 0x402b4c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402B50u;
        goto label_402b50;
    }
    ctx->pc = 0x402B48u;
    {
        const bool branch_taken_0x402b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x402b48) {
            ctx->pc = 0x402B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x402B48u;
            // 0x402b4c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x402B68u;
            goto label_402b68;
        }
    }
    ctx->pc = 0x402B50u;
label_402b50:
    // 0x402b50: 0x8c420368  lw          $v0, 0x368($v0)
    ctx->pc = 0x402b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_402b54:
    // 0x402b54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_402b58:
    if (ctx->pc == 0x402B58u) {
        ctx->pc = 0x402B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402B54u;
        // 0x402b58: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402B5Cu;
        goto label_402b5c;
    }
    ctx->pc = 0x402B54u;
    {
        const bool branch_taken_0x402b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x402B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402B54u;
        // 0x402b58: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402b54) {
            ctx->pc = 0x402B68u;
            goto label_402b68;
        }
    }
    ctx->pc = 0x402B5Cu;
label_402b5c:
    // 0x402b5c: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x402b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_402b60:
    // 0x402b60: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x402b60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_402b64:
    // 0x402b64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x402b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_402b68:
    // 0x402b68: 0x8fa50540  lw          $a1, 0x540($sp)
    ctx->pc = 0x402b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_402b6c:
    // 0x402b6c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x402b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_402b70:
    // 0x402b70: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x402b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_402b74:
    // 0x402b74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x402b74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_402b78:
    // 0x402b78: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x402b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_402b7c:
    // 0x402b7c: 0xc04420c  jal         func_110830
label_402b80:
    if (ctx->pc == 0x402B80u) {
        ctx->pc = 0x402B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402B7Cu;
        // 0x402b80: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402B84u;
        goto label_402b84;
    }
    ctx->pc = 0x402B7Cu;
    SET_GPR_U32(ctx, 31, 0x402B84u);
    ctx->pc = 0x402B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402B7Cu;
    // 0x402b80: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x402B7Cu, 0x402B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402B84u;
label_402b84:
    // 0x402b84: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x402b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_402b88:
    // 0x402b88: 0x8ca42c7c  lw          $a0, 0x2C7C($a1)
    ctx->pc = 0x402b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11388)));
label_402b8c:
    // 0x402b8c: 0xc0e8cda  jal         func_3A3368
label_402b90:
    if (ctx->pc == 0x402B90u) {
        ctx->pc = 0x402B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402B8Cu;
        // 0x402b90: 0x8fa50530  lw          $a1, 0x530($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402B94u;
        goto label_402b94;
    }
    ctx->pc = 0x402B8Cu;
    SET_GPR_U32(ctx, 31, 0x402B94u);
    ctx->pc = 0x402B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402B8Cu;
    // 0x402b90: 0x8fa50530  lw          $a1, 0x530($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x402B8Cu, 0x402B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402B94u;
label_402b94:
    // 0x402b94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x402b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_402b98:
    // 0x402b98: 0x8fa50530  lw          $a1, 0x530($sp)
    ctx->pc = 0x402b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_402b9c:
    // 0x402b9c: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x402b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_402ba0:
    // 0x402ba0: 0xc0e8cbc  jal         func_3A32F0
label_402ba4:
    if (ctx->pc == 0x402BA4u) {
        ctx->pc = 0x402BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402BA0u;
        // 0x402ba4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402BA8u;
        goto label_402ba8;
    }
    ctx->pc = 0x402BA0u;
    SET_GPR_U32(ctx, 31, 0x402BA8u);
    ctx->pc = 0x402BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402BA0u;
    // 0x402ba4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x402BA0u, 0x402BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402BA8u;
label_402ba8:
    // 0x402ba8: 0x7bb005f0  lq          $s0, 0x5F0($sp)
    ctx->pc = 0x402ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1520)));
label_402bac:
    // 0x402bac: 0x7bb105e0  lq          $s1, 0x5E0($sp)
    ctx->pc = 0x402bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1504)));
label_402bb0:
    // 0x402bb0: 0x7bb205d0  lq          $s2, 0x5D0($sp)
    ctx->pc = 0x402bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
label_402bb4:
    // 0x402bb4: 0x7bb305c0  lq          $s3, 0x5C0($sp)
    ctx->pc = 0x402bb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1472)));
label_402bb8:
    // 0x402bb8: 0x7bb405b0  lq          $s4, 0x5B0($sp)
    ctx->pc = 0x402bb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
label_402bbc:
    // 0x402bbc: 0x7bb505a0  lq          $s5, 0x5A0($sp)
    ctx->pc = 0x402bbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1440)));
label_402bc0:
    // 0x402bc0: 0x7bb60590  lq          $s6, 0x590($sp)
    ctx->pc = 0x402bc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
label_402bc4:
    // 0x402bc4: 0x7bb70580  lq          $s7, 0x580($sp)
    ctx->pc = 0x402bc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
label_402bc8:
    // 0x402bc8: 0x7bbe0570  lq          $fp, 0x570($sp)
    ctx->pc = 0x402bc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
label_402bcc:
    // 0x402bcc: 0xdfbf0560  ld          $ra, 0x560($sp)
    ctx->pc = 0x402bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1376)));
label_402bd0:
    // 0x402bd0: 0xc7bb0638  lwc1        $f27, 0x638($sp)
    ctx->pc = 0x402bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_402bd4:
    // 0x402bd4: 0xc7ba0630  lwc1        $f26, 0x630($sp)
    ctx->pc = 0x402bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_402bd8:
    // 0x402bd8: 0xc7b90628  lwc1        $f25, 0x628($sp)
    ctx->pc = 0x402bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_402bdc:
    // 0x402bdc: 0xc7b80620  lwc1        $f24, 0x620($sp)
    ctx->pc = 0x402bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_402be0:
    // 0x402be0: 0xc7b70618  lwc1        $f23, 0x618($sp)
    ctx->pc = 0x402be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_402be4:
    // 0x402be4: 0xc7b60610  lwc1        $f22, 0x610($sp)
    ctx->pc = 0x402be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_402be8:
    // 0x402be8: 0xc7b50608  lwc1        $f21, 0x608($sp)
    ctx->pc = 0x402be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_402bec:
    // 0x402bec: 0xc7b40600  lwc1        $f20, 0x600($sp)
    ctx->pc = 0x402becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_402bf0:
    // 0x402bf0: 0x3e00008  jr          $ra
label_402bf4:
    if (ctx->pc == 0x402BF4u) {
        ctx->pc = 0x402BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402BF0u;
        // 0x402bf4: 0x27bd0640  addiu       $sp, $sp, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402BF8u;
        goto label_fallthrough_0x402bf0;
    }
    ctx->pc = 0x402BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x402BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402BF0u;
        // 0x402bf4: 0x27bd0640  addiu       $sp, $sp, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x402bf0:
    ctx->pc = 0x402BF8u;
}
