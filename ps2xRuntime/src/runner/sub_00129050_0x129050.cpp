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

// Function: sub_00129050
// Address: 0x129050 - 0x1298c0
void sub_00129050_0x129050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129050_0x129050");
#endif

    switch (ctx->pc) {
        case 0x129050u: goto label_129050;
        case 0x129054u: goto label_129054;
        case 0x129058u: goto label_129058;
        case 0x12905cu: goto label_12905c;
        case 0x129060u: goto label_129060;
        case 0x129064u: goto label_129064;
        case 0x129068u: goto label_129068;
        case 0x12906cu: goto label_12906c;
        case 0x129070u: goto label_129070;
        case 0x129074u: goto label_129074;
        case 0x129078u: goto label_129078;
        case 0x12907cu: goto label_12907c;
        case 0x129080u: goto label_129080;
        case 0x129084u: goto label_129084;
        case 0x129088u: goto label_129088;
        case 0x12908cu: goto label_12908c;
        case 0x129090u: goto label_129090;
        case 0x129094u: goto label_129094;
        case 0x129098u: goto label_129098;
        case 0x12909cu: goto label_12909c;
        case 0x1290a0u: goto label_1290a0;
        case 0x1290a4u: goto label_1290a4;
        case 0x1290a8u: goto label_1290a8;
        case 0x1290acu: goto label_1290ac;
        case 0x1290b0u: goto label_1290b0;
        case 0x1290b4u: goto label_1290b4;
        case 0x1290b8u: goto label_1290b8;
        case 0x1290bcu: goto label_1290bc;
        case 0x1290c0u: goto label_1290c0;
        case 0x1290c4u: goto label_1290c4;
        case 0x1290c8u: goto label_1290c8;
        case 0x1290ccu: goto label_1290cc;
        case 0x1290d0u: goto label_1290d0;
        case 0x1290d4u: goto label_1290d4;
        case 0x1290d8u: goto label_1290d8;
        case 0x1290dcu: goto label_1290dc;
        case 0x1290e0u: goto label_1290e0;
        case 0x1290e4u: goto label_1290e4;
        case 0x1290e8u: goto label_1290e8;
        case 0x1290ecu: goto label_1290ec;
        case 0x1290f0u: goto label_1290f0;
        case 0x1290f4u: goto label_1290f4;
        case 0x1290f8u: goto label_1290f8;
        case 0x1290fcu: goto label_1290fc;
        case 0x129100u: goto label_129100;
        case 0x129104u: goto label_129104;
        case 0x129108u: goto label_129108;
        case 0x12910cu: goto label_12910c;
        case 0x129110u: goto label_129110;
        case 0x129114u: goto label_129114;
        case 0x129118u: goto label_129118;
        case 0x12911cu: goto label_12911c;
        case 0x129120u: goto label_129120;
        case 0x129124u: goto label_129124;
        case 0x129128u: goto label_129128;
        case 0x12912cu: goto label_12912c;
        case 0x129130u: goto label_129130;
        case 0x129134u: goto label_129134;
        case 0x129138u: goto label_129138;
        case 0x12913cu: goto label_12913c;
        case 0x129140u: goto label_129140;
        case 0x129144u: goto label_129144;
        case 0x129148u: goto label_129148;
        case 0x12914cu: goto label_12914c;
        case 0x129150u: goto label_129150;
        case 0x129154u: goto label_129154;
        case 0x129158u: goto label_129158;
        case 0x12915cu: goto label_12915c;
        case 0x129160u: goto label_129160;
        case 0x129164u: goto label_129164;
        case 0x129168u: goto label_129168;
        case 0x12916cu: goto label_12916c;
        case 0x129170u: goto label_129170;
        case 0x129174u: goto label_129174;
        case 0x129178u: goto label_129178;
        case 0x12917cu: goto label_12917c;
        case 0x129180u: goto label_129180;
        case 0x129184u: goto label_129184;
        case 0x129188u: goto label_129188;
        case 0x12918cu: goto label_12918c;
        case 0x129190u: goto label_129190;
        case 0x129194u: goto label_129194;
        case 0x129198u: goto label_129198;
        case 0x12919cu: goto label_12919c;
        case 0x1291a0u: goto label_1291a0;
        case 0x1291a4u: goto label_1291a4;
        case 0x1291a8u: goto label_1291a8;
        case 0x1291acu: goto label_1291ac;
        case 0x1291b0u: goto label_1291b0;
        case 0x1291b4u: goto label_1291b4;
        case 0x1291b8u: goto label_1291b8;
        case 0x1291bcu: goto label_1291bc;
        case 0x1291c0u: goto label_1291c0;
        case 0x1291c4u: goto label_1291c4;
        case 0x1291c8u: goto label_1291c8;
        case 0x1291ccu: goto label_1291cc;
        case 0x1291d0u: goto label_1291d0;
        case 0x1291d4u: goto label_1291d4;
        case 0x1291d8u: goto label_1291d8;
        case 0x1291dcu: goto label_1291dc;
        case 0x1291e0u: goto label_1291e0;
        case 0x1291e4u: goto label_1291e4;
        case 0x1291e8u: goto label_1291e8;
        case 0x1291ecu: goto label_1291ec;
        case 0x1291f0u: goto label_1291f0;
        case 0x1291f4u: goto label_1291f4;
        case 0x1291f8u: goto label_1291f8;
        case 0x1291fcu: goto label_1291fc;
        case 0x129200u: goto label_129200;
        case 0x129204u: goto label_129204;
        case 0x129208u: goto label_129208;
        case 0x12920cu: goto label_12920c;
        case 0x129210u: goto label_129210;
        case 0x129214u: goto label_129214;
        case 0x129218u: goto label_129218;
        case 0x12921cu: goto label_12921c;
        case 0x129220u: goto label_129220;
        case 0x129224u: goto label_129224;
        case 0x129228u: goto label_129228;
        case 0x12922cu: goto label_12922c;
        case 0x129230u: goto label_129230;
        case 0x129234u: goto label_129234;
        case 0x129238u: goto label_129238;
        case 0x12923cu: goto label_12923c;
        case 0x129240u: goto label_129240;
        case 0x129244u: goto label_129244;
        case 0x129248u: goto label_129248;
        case 0x12924cu: goto label_12924c;
        case 0x129250u: goto label_129250;
        case 0x129254u: goto label_129254;
        case 0x129258u: goto label_129258;
        case 0x12925cu: goto label_12925c;
        case 0x129260u: goto label_129260;
        case 0x129264u: goto label_129264;
        case 0x129268u: goto label_129268;
        case 0x12926cu: goto label_12926c;
        case 0x129270u: goto label_129270;
        case 0x129274u: goto label_129274;
        case 0x129278u: goto label_129278;
        case 0x12927cu: goto label_12927c;
        case 0x129280u: goto label_129280;
        case 0x129284u: goto label_129284;
        case 0x129288u: goto label_129288;
        case 0x12928cu: goto label_12928c;
        case 0x129290u: goto label_129290;
        case 0x129294u: goto label_129294;
        case 0x129298u: goto label_129298;
        case 0x12929cu: goto label_12929c;
        case 0x1292a0u: goto label_1292a0;
        case 0x1292a4u: goto label_1292a4;
        case 0x1292a8u: goto label_1292a8;
        case 0x1292acu: goto label_1292ac;
        case 0x1292b0u: goto label_1292b0;
        case 0x1292b4u: goto label_1292b4;
        case 0x1292b8u: goto label_1292b8;
        case 0x1292bcu: goto label_1292bc;
        case 0x1292c0u: goto label_1292c0;
        case 0x1292c4u: goto label_1292c4;
        case 0x1292c8u: goto label_1292c8;
        case 0x1292ccu: goto label_1292cc;
        case 0x1292d0u: goto label_1292d0;
        case 0x1292d4u: goto label_1292d4;
        case 0x1292d8u: goto label_1292d8;
        case 0x1292dcu: goto label_1292dc;
        case 0x1292e0u: goto label_1292e0;
        case 0x1292e4u: goto label_1292e4;
        case 0x1292e8u: goto label_1292e8;
        case 0x1292ecu: goto label_1292ec;
        case 0x1292f0u: goto label_1292f0;
        case 0x1292f4u: goto label_1292f4;
        case 0x1292f8u: goto label_1292f8;
        case 0x1292fcu: goto label_1292fc;
        case 0x129300u: goto label_129300;
        case 0x129304u: goto label_129304;
        case 0x129308u: goto label_129308;
        case 0x12930cu: goto label_12930c;
        case 0x129310u: goto label_129310;
        case 0x129314u: goto label_129314;
        case 0x129318u: goto label_129318;
        case 0x12931cu: goto label_12931c;
        case 0x129320u: goto label_129320;
        case 0x129324u: goto label_129324;
        case 0x129328u: goto label_129328;
        case 0x12932cu: goto label_12932c;
        case 0x129330u: goto label_129330;
        case 0x129334u: goto label_129334;
        case 0x129338u: goto label_129338;
        case 0x12933cu: goto label_12933c;
        case 0x129340u: goto label_129340;
        case 0x129344u: goto label_129344;
        case 0x129348u: goto label_129348;
        case 0x12934cu: goto label_12934c;
        case 0x129350u: goto label_129350;
        case 0x129354u: goto label_129354;
        case 0x129358u: goto label_129358;
        case 0x12935cu: goto label_12935c;
        case 0x129360u: goto label_129360;
        case 0x129364u: goto label_129364;
        case 0x129368u: goto label_129368;
        case 0x12936cu: goto label_12936c;
        case 0x129370u: goto label_129370;
        case 0x129374u: goto label_129374;
        case 0x129378u: goto label_129378;
        case 0x12937cu: goto label_12937c;
        case 0x129380u: goto label_129380;
        case 0x129384u: goto label_129384;
        case 0x129388u: goto label_129388;
        case 0x12938cu: goto label_12938c;
        case 0x129390u: goto label_129390;
        case 0x129394u: goto label_129394;
        case 0x129398u: goto label_129398;
        case 0x12939cu: goto label_12939c;
        case 0x1293a0u: goto label_1293a0;
        case 0x1293a4u: goto label_1293a4;
        case 0x1293a8u: goto label_1293a8;
        case 0x1293acu: goto label_1293ac;
        case 0x1293b0u: goto label_1293b0;
        case 0x1293b4u: goto label_1293b4;
        case 0x1293b8u: goto label_1293b8;
        case 0x1293bcu: goto label_1293bc;
        case 0x1293c0u: goto label_1293c0;
        case 0x1293c4u: goto label_1293c4;
        case 0x1293c8u: goto label_1293c8;
        case 0x1293ccu: goto label_1293cc;
        case 0x1293d0u: goto label_1293d0;
        case 0x1293d4u: goto label_1293d4;
        case 0x1293d8u: goto label_1293d8;
        case 0x1293dcu: goto label_1293dc;
        case 0x1293e0u: goto label_1293e0;
        case 0x1293e4u: goto label_1293e4;
        case 0x1293e8u: goto label_1293e8;
        case 0x1293ecu: goto label_1293ec;
        case 0x1293f0u: goto label_1293f0;
        case 0x1293f4u: goto label_1293f4;
        case 0x1293f8u: goto label_1293f8;
        case 0x1293fcu: goto label_1293fc;
        case 0x129400u: goto label_129400;
        case 0x129404u: goto label_129404;
        case 0x129408u: goto label_129408;
        case 0x12940cu: goto label_12940c;
        case 0x129410u: goto label_129410;
        case 0x129414u: goto label_129414;
        case 0x129418u: goto label_129418;
        case 0x12941cu: goto label_12941c;
        case 0x129420u: goto label_129420;
        case 0x129424u: goto label_129424;
        case 0x129428u: goto label_129428;
        case 0x12942cu: goto label_12942c;
        case 0x129430u: goto label_129430;
        case 0x129434u: goto label_129434;
        case 0x129438u: goto label_129438;
        case 0x12943cu: goto label_12943c;
        case 0x129440u: goto label_129440;
        case 0x129444u: goto label_129444;
        case 0x129448u: goto label_129448;
        case 0x12944cu: goto label_12944c;
        case 0x129450u: goto label_129450;
        case 0x129454u: goto label_129454;
        case 0x129458u: goto label_129458;
        case 0x12945cu: goto label_12945c;
        case 0x129460u: goto label_129460;
        case 0x129464u: goto label_129464;
        case 0x129468u: goto label_129468;
        case 0x12946cu: goto label_12946c;
        case 0x129470u: goto label_129470;
        case 0x129474u: goto label_129474;
        case 0x129478u: goto label_129478;
        case 0x12947cu: goto label_12947c;
        case 0x129480u: goto label_129480;
        case 0x129484u: goto label_129484;
        case 0x129488u: goto label_129488;
        case 0x12948cu: goto label_12948c;
        case 0x129490u: goto label_129490;
        case 0x129494u: goto label_129494;
        case 0x129498u: goto label_129498;
        case 0x12949cu: goto label_12949c;
        case 0x1294a0u: goto label_1294a0;
        case 0x1294a4u: goto label_1294a4;
        case 0x1294a8u: goto label_1294a8;
        case 0x1294acu: goto label_1294ac;
        case 0x1294b0u: goto label_1294b0;
        case 0x1294b4u: goto label_1294b4;
        case 0x1294b8u: goto label_1294b8;
        case 0x1294bcu: goto label_1294bc;
        case 0x1294c0u: goto label_1294c0;
        case 0x1294c4u: goto label_1294c4;
        case 0x1294c8u: goto label_1294c8;
        case 0x1294ccu: goto label_1294cc;
        case 0x1294d0u: goto label_1294d0;
        case 0x1294d4u: goto label_1294d4;
        case 0x1294d8u: goto label_1294d8;
        case 0x1294dcu: goto label_1294dc;
        case 0x1294e0u: goto label_1294e0;
        case 0x1294e4u: goto label_1294e4;
        case 0x1294e8u: goto label_1294e8;
        case 0x1294ecu: goto label_1294ec;
        case 0x1294f0u: goto label_1294f0;
        case 0x1294f4u: goto label_1294f4;
        case 0x1294f8u: goto label_1294f8;
        case 0x1294fcu: goto label_1294fc;
        case 0x129500u: goto label_129500;
        case 0x129504u: goto label_129504;
        case 0x129508u: goto label_129508;
        case 0x12950cu: goto label_12950c;
        case 0x129510u: goto label_129510;
        case 0x129514u: goto label_129514;
        case 0x129518u: goto label_129518;
        case 0x12951cu: goto label_12951c;
        case 0x129520u: goto label_129520;
        case 0x129524u: goto label_129524;
        case 0x129528u: goto label_129528;
        case 0x12952cu: goto label_12952c;
        case 0x129530u: goto label_129530;
        case 0x129534u: goto label_129534;
        case 0x129538u: goto label_129538;
        case 0x12953cu: goto label_12953c;
        case 0x129540u: goto label_129540;
        case 0x129544u: goto label_129544;
        case 0x129548u: goto label_129548;
        case 0x12954cu: goto label_12954c;
        case 0x129550u: goto label_129550;
        case 0x129554u: goto label_129554;
        case 0x129558u: goto label_129558;
        case 0x12955cu: goto label_12955c;
        case 0x129560u: goto label_129560;
        case 0x129564u: goto label_129564;
        case 0x129568u: goto label_129568;
        case 0x12956cu: goto label_12956c;
        case 0x129570u: goto label_129570;
        case 0x129574u: goto label_129574;
        case 0x129578u: goto label_129578;
        case 0x12957cu: goto label_12957c;
        case 0x129580u: goto label_129580;
        case 0x129584u: goto label_129584;
        case 0x129588u: goto label_129588;
        case 0x12958cu: goto label_12958c;
        case 0x129590u: goto label_129590;
        case 0x129594u: goto label_129594;
        case 0x129598u: goto label_129598;
        case 0x12959cu: goto label_12959c;
        case 0x1295a0u: goto label_1295a0;
        case 0x1295a4u: goto label_1295a4;
        case 0x1295a8u: goto label_1295a8;
        case 0x1295acu: goto label_1295ac;
        case 0x1295b0u: goto label_1295b0;
        case 0x1295b4u: goto label_1295b4;
        case 0x1295b8u: goto label_1295b8;
        case 0x1295bcu: goto label_1295bc;
        case 0x1295c0u: goto label_1295c0;
        case 0x1295c4u: goto label_1295c4;
        case 0x1295c8u: goto label_1295c8;
        case 0x1295ccu: goto label_1295cc;
        case 0x1295d0u: goto label_1295d0;
        case 0x1295d4u: goto label_1295d4;
        case 0x1295d8u: goto label_1295d8;
        case 0x1295dcu: goto label_1295dc;
        case 0x1295e0u: goto label_1295e0;
        case 0x1295e4u: goto label_1295e4;
        case 0x1295e8u: goto label_1295e8;
        case 0x1295ecu: goto label_1295ec;
        case 0x1295f0u: goto label_1295f0;
        case 0x1295f4u: goto label_1295f4;
        case 0x1295f8u: goto label_1295f8;
        case 0x1295fcu: goto label_1295fc;
        case 0x129600u: goto label_129600;
        case 0x129604u: goto label_129604;
        case 0x129608u: goto label_129608;
        case 0x12960cu: goto label_12960c;
        case 0x129610u: goto label_129610;
        case 0x129614u: goto label_129614;
        case 0x129618u: goto label_129618;
        case 0x12961cu: goto label_12961c;
        case 0x129620u: goto label_129620;
        case 0x129624u: goto label_129624;
        case 0x129628u: goto label_129628;
        case 0x12962cu: goto label_12962c;
        case 0x129630u: goto label_129630;
        case 0x129634u: goto label_129634;
        case 0x129638u: goto label_129638;
        case 0x12963cu: goto label_12963c;
        case 0x129640u: goto label_129640;
        case 0x129644u: goto label_129644;
        case 0x129648u: goto label_129648;
        case 0x12964cu: goto label_12964c;
        case 0x129650u: goto label_129650;
        case 0x129654u: goto label_129654;
        case 0x129658u: goto label_129658;
        case 0x12965cu: goto label_12965c;
        case 0x129660u: goto label_129660;
        case 0x129664u: goto label_129664;
        case 0x129668u: goto label_129668;
        case 0x12966cu: goto label_12966c;
        case 0x129670u: goto label_129670;
        case 0x129674u: goto label_129674;
        case 0x129678u: goto label_129678;
        case 0x12967cu: goto label_12967c;
        case 0x129680u: goto label_129680;
        case 0x129684u: goto label_129684;
        case 0x129688u: goto label_129688;
        case 0x12968cu: goto label_12968c;
        case 0x129690u: goto label_129690;
        case 0x129694u: goto label_129694;
        case 0x129698u: goto label_129698;
        case 0x12969cu: goto label_12969c;
        case 0x1296a0u: goto label_1296a0;
        case 0x1296a4u: goto label_1296a4;
        case 0x1296a8u: goto label_1296a8;
        case 0x1296acu: goto label_1296ac;
        case 0x1296b0u: goto label_1296b0;
        case 0x1296b4u: goto label_1296b4;
        case 0x1296b8u: goto label_1296b8;
        case 0x1296bcu: goto label_1296bc;
        case 0x1296c0u: goto label_1296c0;
        case 0x1296c4u: goto label_1296c4;
        case 0x1296c8u: goto label_1296c8;
        case 0x1296ccu: goto label_1296cc;
        case 0x1296d0u: goto label_1296d0;
        case 0x1296d4u: goto label_1296d4;
        case 0x1296d8u: goto label_1296d8;
        case 0x1296dcu: goto label_1296dc;
        case 0x1296e0u: goto label_1296e0;
        case 0x1296e4u: goto label_1296e4;
        case 0x1296e8u: goto label_1296e8;
        case 0x1296ecu: goto label_1296ec;
        case 0x1296f0u: goto label_1296f0;
        case 0x1296f4u: goto label_1296f4;
        case 0x1296f8u: goto label_1296f8;
        case 0x1296fcu: goto label_1296fc;
        case 0x129700u: goto label_129700;
        case 0x129704u: goto label_129704;
        case 0x129708u: goto label_129708;
        case 0x12970cu: goto label_12970c;
        case 0x129710u: goto label_129710;
        case 0x129714u: goto label_129714;
        case 0x129718u: goto label_129718;
        case 0x12971cu: goto label_12971c;
        case 0x129720u: goto label_129720;
        case 0x129724u: goto label_129724;
        case 0x129728u: goto label_129728;
        case 0x12972cu: goto label_12972c;
        case 0x129730u: goto label_129730;
        case 0x129734u: goto label_129734;
        case 0x129738u: goto label_129738;
        case 0x12973cu: goto label_12973c;
        case 0x129740u: goto label_129740;
        case 0x129744u: goto label_129744;
        case 0x129748u: goto label_129748;
        case 0x12974cu: goto label_12974c;
        case 0x129750u: goto label_129750;
        case 0x129754u: goto label_129754;
        case 0x129758u: goto label_129758;
        case 0x12975cu: goto label_12975c;
        case 0x129760u: goto label_129760;
        case 0x129764u: goto label_129764;
        case 0x129768u: goto label_129768;
        case 0x12976cu: goto label_12976c;
        case 0x129770u: goto label_129770;
        case 0x129774u: goto label_129774;
        case 0x129778u: goto label_129778;
        case 0x12977cu: goto label_12977c;
        case 0x129780u: goto label_129780;
        case 0x129784u: goto label_129784;
        case 0x129788u: goto label_129788;
        case 0x12978cu: goto label_12978c;
        case 0x129790u: goto label_129790;
        case 0x129794u: goto label_129794;
        case 0x129798u: goto label_129798;
        case 0x12979cu: goto label_12979c;
        case 0x1297a0u: goto label_1297a0;
        case 0x1297a4u: goto label_1297a4;
        case 0x1297a8u: goto label_1297a8;
        case 0x1297acu: goto label_1297ac;
        case 0x1297b0u: goto label_1297b0;
        case 0x1297b4u: goto label_1297b4;
        case 0x1297b8u: goto label_1297b8;
        case 0x1297bcu: goto label_1297bc;
        case 0x1297c0u: goto label_1297c0;
        case 0x1297c4u: goto label_1297c4;
        case 0x1297c8u: goto label_1297c8;
        case 0x1297ccu: goto label_1297cc;
        case 0x1297d0u: goto label_1297d0;
        case 0x1297d4u: goto label_1297d4;
        case 0x1297d8u: goto label_1297d8;
        case 0x1297dcu: goto label_1297dc;
        case 0x1297e0u: goto label_1297e0;
        case 0x1297e4u: goto label_1297e4;
        case 0x1297e8u: goto label_1297e8;
        case 0x1297ecu: goto label_1297ec;
        case 0x1297f0u: goto label_1297f0;
        case 0x1297f4u: goto label_1297f4;
        case 0x1297f8u: goto label_1297f8;
        case 0x1297fcu: goto label_1297fc;
        case 0x129800u: goto label_129800;
        case 0x129804u: goto label_129804;
        case 0x129808u: goto label_129808;
        case 0x12980cu: goto label_12980c;
        case 0x129810u: goto label_129810;
        case 0x129814u: goto label_129814;
        case 0x129818u: goto label_129818;
        case 0x12981cu: goto label_12981c;
        case 0x129820u: goto label_129820;
        case 0x129824u: goto label_129824;
        case 0x129828u: goto label_129828;
        case 0x12982cu: goto label_12982c;
        case 0x129830u: goto label_129830;
        case 0x129834u: goto label_129834;
        case 0x129838u: goto label_129838;
        case 0x12983cu: goto label_12983c;
        case 0x129840u: goto label_129840;
        case 0x129844u: goto label_129844;
        case 0x129848u: goto label_129848;
        case 0x12984cu: goto label_12984c;
        case 0x129850u: goto label_129850;
        case 0x129854u: goto label_129854;
        case 0x129858u: goto label_129858;
        case 0x12985cu: goto label_12985c;
        case 0x129860u: goto label_129860;
        case 0x129864u: goto label_129864;
        case 0x129868u: goto label_129868;
        case 0x12986cu: goto label_12986c;
        case 0x129870u: goto label_129870;
        case 0x129874u: goto label_129874;
        case 0x129878u: goto label_129878;
        case 0x12987cu: goto label_12987c;
        case 0x129880u: goto label_129880;
        case 0x129884u: goto label_129884;
        case 0x129888u: goto label_129888;
        case 0x12988cu: goto label_12988c;
        case 0x129890u: goto label_129890;
        case 0x129894u: goto label_129894;
        case 0x129898u: goto label_129898;
        case 0x12989cu: goto label_12989c;
        case 0x1298a0u: goto label_1298a0;
        case 0x1298a4u: goto label_1298a4;
        case 0x1298a8u: goto label_1298a8;
        case 0x1298acu: goto label_1298ac;
        case 0x1298b0u: goto label_1298b0;
        case 0x1298b4u: goto label_1298b4;
        case 0x1298b8u: goto label_1298b8;
        case 0x1298bcu: goto label_1298bc;
        default: break;
    }

    ctx->pc = 0x129050u;

label_129050:
    // 0x129050: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x129050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_129054:
    // 0x129054: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x129054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_129058:
    // 0x129058: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x129058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_12905c:
    // 0x12905c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x12905cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_129060:
    // 0x129060: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x129060u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_129064:
    // 0x129064: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x129064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_129068:
    // 0x129068: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x129068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12906c:
    // 0x12906c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x12906cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_129070:
    // 0x129070: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x129070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_129074:
    // 0x129074: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x129074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_129078:
    // 0x129078: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x129078u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_12907c:
    // 0x12907c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x12907cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_129080:
    // 0x129080: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x129080u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_129084:
    // 0x129084: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x129084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_129088:
    // 0x129088: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x129088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_12908c:
    // 0x12908c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12908cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_129090:
    // 0x129090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x129090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_129094:
    // 0x129094: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x129094u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_129098:
    // 0x129098: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x129098u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_12909c:
    // 0x12909c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x12909cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1290a0:
    // 0x1290a0: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x1290a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_1290a4:
    // 0x1290a4: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x1290a4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_1290a8:
    // 0x1290a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1290a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1290ac:
    // 0x1290ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1290acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1290b0:
    // 0x1290b0: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x1290b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
label_1290b4:
    // 0x1290b4: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x1290b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
label_1290b8:
    // 0x1290b8: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x1290b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_1290bc:
    // 0x1290bc: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x1290bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_1290c0:
    // 0x1290c0: 0x40f809  jalr        $v0
label_1290c4:
    if (ctx->pc == 0x1290C4u) {
        ctx->pc = 0x1290C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290C0u;
        // 0x1290c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1290C8u;
        goto label_1290c8;
    }
    ctx->pc = 0x1290C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1290C8u);
        ctx->pc = 0x1290C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290C0u;
        // 0x1290c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1290C0u, 0x1290C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1290C8u;
label_1290c8:
    // 0x1290c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1290c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1290cc:
    // 0x1290cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1290ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1290d0:
    // 0x1290d0: 0x2463b1b0  addiu       $v1, $v1, -0x4E50
    ctx->pc = 0x1290d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947248));
label_1290d4:
    // 0x1290d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1290d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1290d8:
    // 0x1290d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1290d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1290dc:
    // 0x1290dc: 0x508001ea  beql        $a0, $zero, . + 4 + (0x1EA << 2)
label_1290e0:
    if (ctx->pc == 0x1290E0u) {
        ctx->pc = 0x1290E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290DCu;
        // 0x1290e0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1290E4u;
        goto label_1290e4;
    }
    ctx->pc = 0x1290DCu;
    {
        const bool branch_taken_0x1290dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1290dc) {
            ctx->pc = 0x1290E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1290DCu;
            // 0x1290e0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129888u;
            goto label_129888;
        }
    }
    ctx->pc = 0x1290E4u;
label_1290e4:
    // 0x1290e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1290e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1290e8:
    // 0x1290e8: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x1290e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_1290ec:
    // 0x1290ec: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x1290ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_1290f0:
    // 0x1290f0: 0x40f809  jalr        $v0
label_1290f4:
    if (ctx->pc == 0x1290F4u) {
        ctx->pc = 0x1290F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290F0u;
        // 0x1290f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1290F8u;
        goto label_1290f8;
    }
    ctx->pc = 0x1290F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1290F8u);
        ctx->pc = 0x1290F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290F0u;
        // 0x1290f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1290F0u, 0x1290F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1290F8u;
label_1290f8:
    // 0x1290f8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1290f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1290fc:
    // 0x1290fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1290fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_129100:
    // 0x129100: 0x2463b1b8  addiu       $v1, $v1, -0x4E48
    ctx->pc = 0x129100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947256));
label_129104:
    // 0x129104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x129104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_129108:
    // 0x129108: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x129108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12910c:
    // 0x12910c: 0x508001de  beql        $a0, $zero, . + 4 + (0x1DE << 2)
label_129110:
    if (ctx->pc == 0x129110u) {
        ctx->pc = 0x129110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12910Cu;
        // 0x129110: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129114u;
        goto label_129114;
    }
    ctx->pc = 0x12910Cu;
    {
        const bool branch_taken_0x12910c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12910c) {
            ctx->pc = 0x129110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12910Cu;
            // 0x129110: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129888u;
            goto label_129888;
        }
    }
    ctx->pc = 0x129114u;
label_129114:
    // 0x129114: 0x64001db  bltz        $s2, . + 4 + (0x1DB << 2)
label_129118:
    if (ctx->pc == 0x129118u) {
        ctx->pc = 0x129118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129114u;
        // 0x129118: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12911Cu;
        goto label_12911c;
    }
    ctx->pc = 0x129114u;
    {
        const bool branch_taken_0x129114 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x129118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129114u;
        // 0x129118: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129114) {
            ctx->pc = 0x129884u;
            goto label_129884;
        }
    }
    ctx->pc = 0x12911Cu;
label_12911c:
    // 0x12911c: 0xc047e6c  jal         func_11F9B0
label_129120:
    if (ctx->pc == 0x129120u) {
        ctx->pc = 0x129120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12911Cu;
        // 0x129120: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129124u;
        goto label_129124;
    }
    ctx->pc = 0x12911Cu;
    SET_GPR_U32(ctx, 31, 0x129124u);
    ctx->pc = 0x129120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12911Cu;
    // 0x129120: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x12911Cu, 0x129124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129124u;
label_129124:
    // 0x129124: 0x50500005  beql        $v0, $s0, . + 4 + (0x5 << 2)
label_129128:
    if (ctx->pc == 0x129128u) {
        ctx->pc = 0x129128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129124u;
        // 0x129128: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12912Cu;
        goto label_12912c;
    }
    ctx->pc = 0x129124u;
    {
        const bool branch_taken_0x129124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x129124) {
            ctx->pc = 0x129128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129124u;
            // 0x129128: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12913Cu;
            goto label_12913c;
        }
    }
    ctx->pc = 0x12912Cu;
label_12912c:
    // 0x12912c: 0xc047e6c  jal         func_11F9B0
label_129130:
    if (ctx->pc == 0x129130u) {
        ctx->pc = 0x129130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12912Cu;
        // 0x129130: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129134u;
        goto label_129134;
    }
    ctx->pc = 0x12912Cu;
    SET_GPR_U32(ctx, 31, 0x129134u);
    ctx->pc = 0x129130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12912Cu;
    // 0x129130: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x12912Cu, 0x129134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129134u;
label_129134:
    // 0x129134: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
label_129138:
    if (ctx->pc == 0x129138u) {
        ctx->pc = 0x129138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129134u;
        // 0x129138: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12913Cu;
        goto label_12913c;
    }
    ctx->pc = 0x129134u;
    {
        const bool branch_taken_0x129134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x129134) {
            ctx->pc = 0x129138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129134u;
            // 0x129138: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12913Cu;
            goto label_12913c;
        }
    }
    ctx->pc = 0x12913Cu;
label_12913c:
    // 0x12913c: 0x122001d1  beqz        $s1, . + 4 + (0x1D1 << 2)
label_129140:
    if (ctx->pc == 0x129140u) {
        ctx->pc = 0x129140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12913Cu;
        // 0x129140: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129144u;
        goto label_129144;
    }
    ctx->pc = 0x12913Cu;
    {
        const bool branch_taken_0x12913c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x129140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12913Cu;
        // 0x129140: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12913c) {
            ctx->pc = 0x129884u;
            goto label_129884;
        }
    }
    ctx->pc = 0x129144u;
label_129144:
    // 0x129144: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x129144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_129148:
    // 0x129148: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x129148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_12914c:
    // 0x12914c: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x12914cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_129150:
    // 0x129150: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x129150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_129154:
    // 0x129154: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x129154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_129158:
    // 0x129158: 0x108001ca  beqz        $a0, . + 4 + (0x1CA << 2)
label_12915c:
    if (ctx->pc == 0x12915Cu) {
        ctx->pc = 0x12915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129158u;
        // 0x12915c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129160u;
        goto label_129160;
    }
    ctx->pc = 0x129158u;
    {
        const bool branch_taken_0x129158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129158u;
        // 0x12915c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129158) {
            ctx->pc = 0x129884u;
            goto label_129884;
        }
    }
    ctx->pc = 0x129160u;
label_129160:
    // 0x129160: 0x9223001a  lbu         $v1, 0x1A($s1)
    ctx->pc = 0x129160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
label_129164:
    // 0x129164: 0x9224001b  lbu         $a0, 0x1B($s1)
    ctx->pc = 0x129164u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27)));
label_129168:
    // 0x129168: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x129168u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12916c:
    // 0x12916c: 0x8c45b230  lw          $a1, -0x4DD0($v0)
    ctx->pc = 0x12916cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947376)));
label_129170:
    // 0x129170: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x129170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_129174:
    // 0x129174: 0x0  nop
    ctx->pc = 0x129174u;
    // NOP
label_129178:
    // 0x129178: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x129178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_12917c:
    // 0x12917c: 0x4484b000  mtc1        $a0, $f22
    ctx->pc = 0x12917cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_129180:
    // 0x129180: 0x0  nop
    ctx->pc = 0x129180u;
    // NOP
label_129184:
    // 0x129184: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x129184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_129188:
    // 0x129188: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x129188u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12918c:
    // 0x12918c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x12918cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_129190:
    // 0x129190: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_129194:
    if (ctx->pc == 0x129194u) {
        ctx->pc = 0x129194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129190u;
        // 0x129194: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129198u;
        goto label_129198;
    }
    ctx->pc = 0x129190u;
    {
        const bool branch_taken_0x129190 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x129194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129190u;
        // 0x129194: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129190) {
            ctx->pc = 0x1291F0u;
            goto label_1291f0;
        }
    }
    ctx->pc = 0x129198u;
label_129198:
    // 0x129198: 0xc0512e2  jal         func_144B88
label_12919c:
    if (ctx->pc == 0x12919Cu) {
        ctx->pc = 0x12919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129198u;
        // 0x12919c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1291A0u;
        goto label_1291a0;
    }
    ctx->pc = 0x129198u;
    SET_GPR_U32(ctx, 31, 0x1291A0u);
    ctx->pc = 0x12919Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129198u;
    // 0x12919c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B88u, 0x129198u, 0x1291A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1291A0u;
label_1291a0:
    // 0x1291a0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1291a4:
    if (ctx->pc == 0x1291A4u) {
        ctx->pc = 0x1291A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291A0u;
        // 0x1291a4: 0x8e63b234  lw          $v1, -0x4DCC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1291A8u;
        goto label_1291a8;
    }
    ctx->pc = 0x1291A0u;
    {
        const bool branch_taken_0x1291a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1291A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291A0u;
        // 0x1291a4: 0x8e63b234  lw          $v1, -0x4DCC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291a0) {
            ctx->pc = 0x1291F0u;
            goto label_1291f0;
        }
    }
    ctx->pc = 0x1291A8u;
label_1291a8:
    // 0x1291a8: 0x8ea2b230  lw          $v0, -0x4DD0($s5)
    ctx->pc = 0x1291a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294947376)));
label_1291ac:
    // 0x1291ac: 0x54430011  bnel        $v0, $v1, . + 4 + (0x11 << 2)
label_1291b0:
    if (ctx->pc == 0x1291B0u) {
        ctx->pc = 0x1291B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291ACu;
        // 0x1291b0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1291B4u;
        goto label_1291b4;
    }
    ctx->pc = 0x1291ACu;
    {
        const bool branch_taken_0x1291ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1291ac) {
            ctx->pc = 0x1291B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1291ACu;
            // 0x1291b0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1291F4u;
            goto label_1291f4;
        }
    }
    ctx->pc = 0x1291B4u;
label_1291b4:
    // 0x1291b4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1291b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1291b8:
    // 0x1291b8: 0xc60201a0  lwc1        $f2, 0x1A0($s0)
    ctx->pc = 0x1291b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1291bc:
    // 0x1291bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1291bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1291c0:
    // 0x1291c0: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x1291c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
label_1291c4:
    // 0x1291c4: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1291c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1291c8:
    // 0x1291c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1291c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1291cc:
    // 0x1291cc: 0x26020370  addiu       $v0, $s0, 0x370
    ctx->pc = 0x1291ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
label_1291d0:
    // 0x1291d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1291d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1291d4:
    // 0x1291d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1291d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1291d8:
    // 0x1291d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1291d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1291dc:
    // 0x1291dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1291dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1291e0:
    // 0x1291e0: 0x0  nop
    ctx->pc = 0x1291e0u;
    // NOP
label_1291e4:
    // 0x1291e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1291e8:
    if (ctx->pc == 0x1291E8u) {
        ctx->pc = 0x1291E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291E4u;
        // 0x1291e8: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1291ECu;
        goto label_1291ec;
    }
    ctx->pc = 0x1291E4u;
    {
        const bool branch_taken_0x1291e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1291E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1291E4u;
        // 0x1291e8: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291e4) {
            ctx->pc = 0x1291F0u;
            goto label_1291f0;
        }
    }
    ctx->pc = 0x1291ECu;
label_1291ec:
    // 0x1291ec: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1291ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1291f0:
    // 0x1291f0: 0x8ea2b230  lw          $v0, -0x4DD0($s5)
    ctx->pc = 0x1291f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294947376)));
label_1291f4:
    // 0x1291f4: 0x8e65b234  lw          $a1, -0x4DCC($s3)
    ctx->pc = 0x1291f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947380)));
label_1291f8:
    // 0x1291f8: 0x14450021  bne         $v0, $a1, . + 4 + (0x21 << 2)
label_1291fc:
    if (ctx->pc == 0x1291FCu) {
        ctx->pc = 0x129200u;
        goto label_129200;
    }
    ctx->pc = 0x1291F8u;
    {
        const bool branch_taken_0x1291f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1291f8) {
            ctx->pc = 0x129280u;
            goto label_129280;
        }
    }
    ctx->pc = 0x129200u;
label_129200:
    // 0x129200: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
label_129204:
    if (ctx->pc == 0x129204u) {
        ctx->pc = 0x129208u;
        goto label_129208;
    }
    ctx->pc = 0x129200u;
    {
        const bool branch_taken_0x129200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x129200) {
            ctx->pc = 0x129290u;
            goto label_129290;
        }
    }
    ctx->pc = 0x129208u;
label_129208:
    // 0x129208: 0xc0512fc  jal         func_144BF0
label_12920c:
    if (ctx->pc == 0x12920Cu) {
        ctx->pc = 0x12920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129208u;
        // 0x12920c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129210u;
        goto label_129210;
    }
    ctx->pc = 0x129208u;
    SET_GPR_U32(ctx, 31, 0x129210u);
    ctx->pc = 0x12920Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129208u;
    // 0x12920c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BF0u, 0x129208u, 0x129210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129210u;
label_129210:
    // 0x129210: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_129214:
    if (ctx->pc == 0x129214u) {
        ctx->pc = 0x129214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129210u;
        // 0x129214: 0x8fa300d8  lw          $v1, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129218u;
        goto label_129218;
    }
    ctx->pc = 0x129210u;
    {
        const bool branch_taken_0x129210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129210u;
        // 0x129214: 0x8fa300d8  lw          $v1, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129210) {
            ctx->pc = 0x129290u;
            goto label_129290;
        }
    }
    ctx->pc = 0x129218u;
label_129218:
    // 0x129218: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x129218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12921c:
    // 0x12921c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x12921cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_129220:
    // 0x129220: 0x26030370  addiu       $v1, $s0, 0x370
    ctx->pc = 0x129220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
label_129224:
    // 0x129224: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x129224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_129228:
    // 0x129228: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x129228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12922c:
    // 0x12922c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x12922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129230:
    // 0x129230: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x129230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129234:
    // 0x129234: 0x0  nop
    ctx->pc = 0x129234u;
    // NOP
label_129238:
    // 0x129238: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_12923c:
    if (ctx->pc == 0x12923Cu) {
        ctx->pc = 0x12923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129238u;
        // 0x12923c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129240u;
        goto label_129240;
    }
    ctx->pc = 0x129238u;
    {
        const bool branch_taken_0x129238 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129238u;
        // 0x12923c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129238) {
            ctx->pc = 0x129290u;
            goto label_129290;
        }
    }
    ctx->pc = 0x129240u;
label_129240:
    // 0x129240: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x129240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
label_129244:
    // 0x129244: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x129244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_129248:
    // 0x129248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12924c:
    // 0x12924c: 0x0  nop
    ctx->pc = 0x12924cu;
    // NOP
label_129250:
    // 0x129250: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x129250u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129254:
    // 0x129254: 0x0  nop
    ctx->pc = 0x129254u;
    // NOP
label_129258:
    // 0x129258: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_12925c:
    if (ctx->pc == 0x12925Cu) {
        ctx->pc = 0x12925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129258u;
        // 0x12925c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129260u;
        goto label_129260;
    }
    ctx->pc = 0x129258u;
    {
        const bool branch_taken_0x129258 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129258u;
        // 0x12925c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129258) {
            ctx->pc = 0x129270u;
            goto label_129270;
        }
    }
    ctx->pc = 0x129260u;
label_129260:
    // 0x129260: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x129260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_129264:
    // 0x129264: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_129268:
    if (ctx->pc == 0x129268u) {
        ctx->pc = 0x129268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129264u;
        // 0x129268: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12926Cu;
        goto label_12926c;
    }
    ctx->pc = 0x129264u;
    {
        const bool branch_taken_0x129264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129264u;
        // 0x129268: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129264) {
            ctx->pc = 0x129278u;
            goto label_129278;
        }
    }
    ctx->pc = 0x12926Cu;
label_12926c:
    // 0x12926c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12926cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129270:
    // 0x129270: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x129270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_129274:
    // 0x129274: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x129274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_129278:
    // 0x129278: 0x10000005  b           . + 4 + (0x5 << 2)
label_12927c:
    if (ctx->pc == 0x12927Cu) {
        ctx->pc = 0x12927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129278u;
        // 0x12927c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129280u;
        goto label_129280;
    }
    ctx->pc = 0x129278u;
    {
        const bool branch_taken_0x129278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129278u;
        // 0x12927c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129278) {
            ctx->pc = 0x129290u;
            goto label_129290;
        }
    }
    ctx->pc = 0x129280u;
label_129280:
    // 0x129280: 0xc0512fc  jal         func_144BF0
label_129284:
    if (ctx->pc == 0x129284u) {
        ctx->pc = 0x129284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129280u;
        // 0x129284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129288u;
        goto label_129288;
    }
    ctx->pc = 0x129280u;
    SET_GPR_U32(ctx, 31, 0x129288u);
    ctx->pc = 0x129284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129280u;
    // 0x129284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BF0u, 0x129280u, 0x129288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129288u;
label_129288:
    // 0x129288: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x129288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12928c:
    // 0x12928c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x12928cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_129290:
    // 0x129290: 0xc0579d2  jal         func_15E748
label_129294:
    if (ctx->pc == 0x129294u) {
        ctx->pc = 0x129298u;
        goto label_129298;
    }
    ctx->pc = 0x129290u;
    SET_GPR_U32(ctx, 31, 0x129298u);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x129290u, 0x129298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129298u;
label_129298:
    // 0x129298: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x129298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12929c:
    // 0x12929c: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
label_1292a0:
    if (ctx->pc == 0x1292A0u) {
        ctx->pc = 0x1292A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12929Cu;
        // 0x1292a0: 0x92020452  lbu         $v0, 0x452($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1106)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1292A4u;
        goto label_1292a4;
    }
    ctx->pc = 0x12929Cu;
    {
        const bool branch_taken_0x12929c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12929c) {
            ctx->pc = 0x1292A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12929Cu;
            // 0x1292a0: 0x92020452  lbu         $v0, 0x452($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1106)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1292F0u;
            goto label_1292f0;
        }
    }
    ctx->pc = 0x1292A4u;
label_1292a4:
    // 0x1292a4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1292a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1292a8:
    // 0x1292a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1292ac:
    if (ctx->pc == 0x1292ACu) {
        ctx->pc = 0x1292ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292A8u;
        // 0x1292ac: 0x82020458  lb          $v0, 0x458($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1292B0u;
        goto label_1292b0;
    }
    ctx->pc = 0x1292A8u;
    {
        const bool branch_taken_0x1292a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1292a8) {
            ctx->pc = 0x1292ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1292A8u;
            // 0x1292ac: 0x82020458  lb          $v0, 0x458($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1292C0u;
            goto label_1292c0;
        }
    }
    ctx->pc = 0x1292B0u;
label_1292b0:
    // 0x1292b0: 0x52800003  beql        $s4, $zero, . + 4 + (0x3 << 2)
label_1292b4:
    if (ctx->pc == 0x1292B4u) {
        ctx->pc = 0x1292B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292B0u;
        // 0x1292b4: 0x82020458  lb          $v0, 0x458($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1292B8u;
        goto label_1292b8;
    }
    ctx->pc = 0x1292B0u;
    {
        const bool branch_taken_0x1292b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1292b0) {
            ctx->pc = 0x1292B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1292B0u;
            // 0x1292b4: 0x82020458  lb          $v0, 0x458($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1292C0u;
            goto label_1292c0;
        }
    }
    ctx->pc = 0x1292B8u;
label_1292b8:
    // 0x1292b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1292bc:
    if (ctx->pc == 0x1292BCu) {
        ctx->pc = 0x1292BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292B8u;
        // 0x1292bc: 0xa2120458  sb          $s2, 0x458($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1112), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1292C0u;
        goto label_1292c0;
    }
    ctx->pc = 0x1292B8u;
    {
        const bool branch_taken_0x1292b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1292BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292B8u;
        // 0x1292bc: 0xa2120458  sb          $s2, 0x458($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1112), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292b8) {
            ctx->pc = 0x1292DCu;
            goto label_1292dc;
        }
    }
    ctx->pc = 0x1292C0u;
label_1292c0:
    // 0x1292c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1292c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1292c4:
    // 0x1292c4: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
label_1292c8:
    if (ctx->pc == 0x1292C8u) {
        ctx->pc = 0x1292C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292C4u;
        // 0x1292c8: 0xa2030458  sb          $v1, 0x458($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1112), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1292CCu;
        goto label_1292cc;
    }
    ctx->pc = 0x1292C4u;
    {
        const bool branch_taken_0x1292c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1292c4) {
            ctx->pc = 0x1292C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1292C4u;
            // 0x1292c8: 0xa2030458  sb          $v1, 0x458($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1112), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1292D8u;
            goto label_1292d8;
        }
    }
    ctx->pc = 0x1292CCu;
label_1292cc:
    // 0x1292cc: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
label_1292d0:
    if (ctx->pc == 0x1292D0u) {
        ctx->pc = 0x1292D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292CCu;
        // 0x1292d0: 0x92020459  lbu         $v0, 0x459($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1113)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1292D4u;
        goto label_1292d4;
    }
    ctx->pc = 0x1292CCu;
    {
        const bool branch_taken_0x1292cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1292cc) {
            ctx->pc = 0x1292D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1292CCu;
            // 0x1292d0: 0x92020459  lbu         $v0, 0x459($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1113)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1292E0u;
            goto label_1292e0;
        }
    }
    ctx->pc = 0x1292D4u;
label_1292d4:
    // 0x1292d4: 0xa2030458  sb          $v1, 0x458($s0)
    ctx->pc = 0x1292d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1112), (uint8_t)GPR_U32(ctx, 3));
label_1292d8:
    // 0x1292d8: 0xa2000459  sb          $zero, 0x459($s0)
    ctx->pc = 0x1292d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1113), (uint8_t)GPR_U32(ctx, 0));
label_1292dc:
    // 0x1292dc: 0x92020459  lbu         $v0, 0x459($s0)
    ctx->pc = 0x1292dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1113)));
label_1292e0:
    // 0x1292e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1292e4:
    if (ctx->pc == 0x1292E4u) {
        ctx->pc = 0x1292E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292E0u;
        // 0x1292e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1292E8u;
        goto label_1292e8;
    }
    ctx->pc = 0x1292E0u;
    {
        const bool branch_taken_0x1292e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1292E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292E0u;
        // 0x1292e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292e0) {
            ctx->pc = 0x1292ECu;
            goto label_1292ec;
        }
    }
    ctx->pc = 0x1292E8u;
label_1292e8:
    // 0x1292e8: 0xa2020458  sb          $v0, 0x458($s0)
    ctx->pc = 0x1292e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1112), (uint8_t)GPR_U32(ctx, 2));
label_1292ec:
    // 0x1292ec: 0x92020452  lbu         $v0, 0x452($s0)
    ctx->pc = 0x1292ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1106)));
label_1292f0:
    // 0x1292f0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1292f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1292f4:
    // 0x1292f4: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
label_1292f8:
    if (ctx->pc == 0x1292F8u) {
        ctx->pc = 0x1292F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292F4u;
        // 0x1292f8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1292FCu;
        goto label_1292fc;
    }
    ctx->pc = 0x1292F4u;
    {
        const bool branch_taken_0x1292f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1292F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292F4u;
        // 0x1292f8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292f4) {
            ctx->pc = 0x129610u;
            goto label_129610;
        }
    }
    ctx->pc = 0x1292FCu;
label_1292fc:
    // 0x1292fc: 0x14600132  bnez        $v1, . + 4 + (0x132 << 2)
label_129300:
    if (ctx->pc == 0x129300u) {
        ctx->pc = 0x129300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292FCu;
        // 0x129300: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129304u;
        goto label_129304;
    }
    ctx->pc = 0x1292FCu;
    {
        const bool branch_taken_0x1292fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x129300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1292FCu;
        // 0x129300: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292fc) {
            ctx->pc = 0x1297C8u;
            goto label_1297c8;
        }
    }
    ctx->pc = 0x129304u;
label_129304:
    // 0x129304: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x129304u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_129308:
    // 0x129308: 0x8e42b22c  lw          $v0, -0x4DD4($s2)
    ctx->pc = 0x129308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947372)));
label_12930c:
    // 0x12930c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_129310:
    if (ctx->pc == 0x129310u) {
        ctx->pc = 0x129310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12930Cu;
        // 0x129310: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129314u;
        goto label_129314;
    }
    ctx->pc = 0x12930Cu;
    {
        const bool branch_taken_0x12930c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12930Cu;
        // 0x129310: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12930c) {
            ctx->pc = 0x1293CCu;
            goto label_1293cc;
        }
    }
    ctx->pc = 0x129314u;
label_129314:
    // 0x129314: 0x96030444  lhu         $v1, 0x444($s0)
    ctx->pc = 0x129314u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1092)));
label_129318:
    // 0x129318: 0x5462002d  bnel        $v1, $v0, . + 4 + (0x2D << 2)
label_12931c:
    if (ctx->pc == 0x12931Cu) {
        ctx->pc = 0x12931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129318u;
        // 0x12931c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129320u;
        goto label_129320;
    }
    ctx->pc = 0x129318u;
    {
        const bool branch_taken_0x129318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x129318) {
            ctx->pc = 0x12931Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129318u;
            // 0x12931c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1293D0u;
            goto label_1293d0;
        }
    }
    ctx->pc = 0x129320u;
label_129320:
    // 0x129320: 0x92020463  lbu         $v0, 0x463($s0)
    ctx->pc = 0x129320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1123)));
label_129324:
    // 0x129324: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
label_129328:
    if (ctx->pc == 0x129328u) {
        ctx->pc = 0x129328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129324u;
        // 0x129328: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12932Cu;
        goto label_12932c;
    }
    ctx->pc = 0x129324u;
    {
        const bool branch_taken_0x129324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129324) {
            ctx->pc = 0x129328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129324u;
            // 0x129328: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1293D0u;
            goto label_1293d0;
        }
    }
    ctx->pc = 0x12932Cu;
label_12932c:
    // 0x12932c: 0x8e040314  lw          $a0, 0x314($s0)
    ctx->pc = 0x12932cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
label_129330:
    // 0x129330: 0x50800027  beql        $a0, $zero, . + 4 + (0x27 << 2)
label_129334:
    if (ctx->pc == 0x129334u) {
        ctx->pc = 0x129334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129330u;
        // 0x129334: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129338u;
        goto label_129338;
    }
    ctx->pc = 0x129330u;
    {
        const bool branch_taken_0x129330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x129330) {
            ctx->pc = 0x129334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129330u;
            // 0x129334: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1293D0u;
            goto label_1293d0;
        }
    }
    ctx->pc = 0x129338u;
label_129338:
    // 0x129338: 0xc08a014  jal         func_228050
label_12933c:
    if (ctx->pc == 0x12933Cu) {
        ctx->pc = 0x129340u;
        goto label_129340;
    }
    ctx->pc = 0x129338u;
    SET_GPR_U32(ctx, 31, 0x129340u);
    ctx->pc = 0x228050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228050u, 0x129338u, 0x129340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129340u;
label_129340:
    // 0x129340: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_129344:
    if (ctx->pc == 0x129344u) {
        ctx->pc = 0x129344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129340u;
        // 0x129344: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129348u;
        goto label_129348;
    }
    ctx->pc = 0x129340u;
    {
        const bool branch_taken_0x129340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129340) {
            ctx->pc = 0x129344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129340u;
            // 0x129344: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1293D0u;
            goto label_1293d0;
        }
    }
    ctx->pc = 0x129348u;
label_129348:
    // 0x129348: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x129348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_12934c:
    // 0x12934c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x12934cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_129350:
    // 0x129350: 0xc0e409a  jal         func_390268
label_129354:
    if (ctx->pc == 0x129354u) {
        ctx->pc = 0x129354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129350u;
        // 0x129354: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129358u;
        goto label_129358;
    }
    ctx->pc = 0x129350u;
    SET_GPR_U32(ctx, 31, 0x129358u);
    ctx->pc = 0x129354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129350u;
    // 0x129354: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x129350u, 0x129358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129358u;
label_129358:
    // 0x129358: 0x8e030314  lw          $v1, 0x314($s0)
    ctx->pc = 0x129358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
label_12935c:
    // 0x12935c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_129360:
    if (ctx->pc == 0x129360u) {
        ctx->pc = 0x129360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12935Cu;
        // 0x129360: 0x8e45b22c  lw          $a1, -0x4DD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129364u;
        goto label_129364;
    }
    ctx->pc = 0x12935Cu;
    {
        const bool branch_taken_0x12935c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x129360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12935Cu;
        // 0x129360: 0x8e45b22c  lw          $a1, -0x4DD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12935c) {
            ctx->pc = 0x129378u;
            goto label_129378;
        }
    }
    ctx->pc = 0x129364u;
label_129364:
    // 0x129364: 0xc08cf14  jal         func_233C50
label_129368:
    if (ctx->pc == 0x129368u) {
        ctx->pc = 0x12936Cu;
        goto label_12936c;
    }
    ctx->pc = 0x129364u;
    SET_GPR_U32(ctx, 31, 0x12936Cu);
    ctx->pc = 0x233C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C50u, 0x129364u, 0x12936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12936Cu;
label_12936c:
    // 0x12936c: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_129370:
    if (ctx->pc == 0x129370u) {
        ctx->pc = 0x129370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12936Cu;
        // 0x129370: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129374u;
        goto label_129374;
    }
    ctx->pc = 0x12936Cu;
    {
        const bool branch_taken_0x12936c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12936c) {
            ctx->pc = 0x129370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12936Cu;
            // 0x129370: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1293D0u;
            goto label_1293d0;
        }
    }
    ctx->pc = 0x129374u;
label_129374:
    // 0x129374: 0x8e45b22c  lw          $a1, -0x4DD4($s2)
    ctx->pc = 0x129374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947372)));
label_129378:
    // 0x129378: 0xc0512fc  jal         func_144BF0
label_12937c:
    if (ctx->pc == 0x12937Cu) {
        ctx->pc = 0x12937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129378u;
        // 0x12937c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129380u;
        goto label_129380;
    }
    ctx->pc = 0x129378u;
    SET_GPR_U32(ctx, 31, 0x129380u);
    ctx->pc = 0x12937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129378u;
    // 0x12937c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BF0u, 0x129378u, 0x129380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129380u;
label_129380:
    // 0x129380: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_129384:
    if (ctx->pc == 0x129384u) {
        ctx->pc = 0x129384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129380u;
        // 0x129384: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129388u;
        goto label_129388;
    }
    ctx->pc = 0x129380u;
    {
        const bool branch_taken_0x129380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129380u;
        // 0x129384: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129380) {
            ctx->pc = 0x1293CCu;
            goto label_1293cc;
        }
    }
    ctx->pc = 0x129388u;
label_129388:
    // 0x129388: 0x8e030314  lw          $v1, 0x314($s0)
    ctx->pc = 0x129388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
label_12938c:
    // 0x12938c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x12938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_129390:
    // 0x129390: 0x84640092  lh          $a0, 0x92($v1)
    ctx->pc = 0x129390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_129394:
    // 0x129394: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x129394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_129398:
    // 0x129398: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x129398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_12939c:
    // 0x12939c: 0xc0cd7d2  jal         func_335F48
label_1293a0:
    if (ctx->pc == 0x1293A0u) {
        ctx->pc = 0x1293A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12939Cu;
        // 0x1293a0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1293A4u;
        goto label_1293a4;
    }
    ctx->pc = 0x12939Cu;
    SET_GPR_U32(ctx, 31, 0x1293A4u);
    ctx->pc = 0x1293A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12939Cu;
    // 0x1293a0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x12939Cu, 0x1293A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1293A4u;
label_1293a4:
    // 0x1293a4: 0xc601040c  lwc1        $f1, 0x40C($s0)
    ctx->pc = 0x1293a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1293a8:
    // 0x1293a8: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x1293a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1293ac:
    // 0x1293ac: 0x0  nop
    ctx->pc = 0x1293acu;
    // NOP
label_1293b0:
    // 0x1293b0: 0x45000097  bc1f        . + 4 + (0x97 << 2)
label_1293b4:
    if (ctx->pc == 0x1293B4u) {
        ctx->pc = 0x1293B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293B0u;
        // 0x1293b4: 0xe6000350  swc1        $f0, 0x350($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 848), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1293B8u;
        goto label_1293b8;
    }
    ctx->pc = 0x1293B0u;
    {
        const bool branch_taken_0x1293b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1293B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293B0u;
        // 0x1293b4: 0xe6000350  swc1        $f0, 0x350($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 848), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293b0) {
            ctx->pc = 0x129610u;
            goto label_129610;
        }
    }
    ctx->pc = 0x1293B8u;
label_1293b8:
    // 0x1293b8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1293b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1293bc:
    // 0x1293bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1293bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1293c0:
    // 0x1293c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1293c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1293c4:
    // 0x1293c4: 0x10000092  b           . + 4 + (0x92 << 2)
label_1293c8:
    if (ctx->pc == 0x1293C8u) {
        ctx->pc = 0x1293C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293C4u;
        // 0x1293c8: 0xe600040c  swc1        $f0, 0x40C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1036), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1293CCu;
        goto label_1293cc;
    }
    ctx->pc = 0x1293C4u;
    {
        const bool branch_taken_0x1293c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1293C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293C4u;
        // 0x1293c8: 0xe600040c  swc1        $f0, 0x40C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293c4) {
            ctx->pc = 0x129610u;
            goto label_129610;
        }
    }
    ctx->pc = 0x1293CCu;
label_1293cc:
    // 0x1293cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1293ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1293d0:
    // 0x1293d0: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x1293d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_1293d4:
    // 0x1293d4: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x1293d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_1293d8:
    // 0x1293d8: 0x40f809  jalr        $v0
label_1293dc:
    if (ctx->pc == 0x1293DCu) {
        ctx->pc = 0x1293DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293D8u;
        // 0x1293dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1293E0u;
        goto label_1293e0;
    }
    ctx->pc = 0x1293D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1293E0u);
        ctx->pc = 0x1293DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1293D8u;
        // 0x1293dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1293D8u, 0x1293E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1293E0u;
label_1293e0:
    // 0x1293e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1293e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1293e4:
    // 0x1293e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1293e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1293e8:
    // 0x1293e8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1293e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1293ec:
    // 0x1293ec: 0x2463b1f0  addiu       $v1, $v1, -0x4E10
    ctx->pc = 0x1293ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947312));
label_1293f0:
    // 0x1293f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1293f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1293f4:
    // 0x1293f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1293f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1293f8:
    // 0x1293f8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1293fc:
    if (ctx->pc == 0x1293FCu) {
        ctx->pc = 0x129400u;
        goto label_129400;
    }
    ctx->pc = 0x1293F8u;
    {
        const bool branch_taken_0x1293f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1293f8) {
            ctx->pc = 0x129410u;
            goto label_129410;
        }
    }
    ctx->pc = 0x129400u;
label_129400:
    // 0x129400: 0xc6000438  lwc1        $f0, 0x438($s0)
    ctx->pc = 0x129400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129404:
    // 0x129404: 0xc6010434  lwc1        $f1, 0x434($s0)
    ctx->pc = 0x129404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129408:
    // 0x129408: 0xe6000434  swc1        $f0, 0x434($s0)
    ctx->pc = 0x129408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1076), bits); }
label_12940c:
    // 0x12940c: 0xe6010438  swc1        $f1, 0x438($s0)
    ctx->pc = 0x12940cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1080), bits); }
label_129410:
    // 0x129410: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x129410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_129414:
    // 0x129414: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129418:
    // 0x129418: 0x0  nop
    ctx->pc = 0x129418u;
    // NOP
label_12941c:
    // 0x12941c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x12941cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129420:
    // 0x129420: 0x0  nop
    ctx->pc = 0x129420u;
    // NOP
label_129424:
    // 0x129424: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_129428:
    if (ctx->pc == 0x129428u) {
        ctx->pc = 0x12942Cu;
        goto label_12942c;
    }
    ctx->pc = 0x129424u;
    {
        const bool branch_taken_0x129424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129424) {
            ctx->pc = 0x1294E0u;
            goto label_1294e0;
        }
    }
    ctx->pc = 0x12942Cu;
label_12942c:
    // 0x12942c: 0x3c013c80  lui         $at, 0x3C80
    ctx->pc = 0x12942cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15488 << 16));
label_129430:
    // 0x129430: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129434:
    // 0x129434: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x129434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_129438:
    // 0x129438: 0x34210fdc  ori         $at, $at, 0xFDC
    ctx->pc = 0x129438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4060);
label_12943c:
    // 0x12943c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12943cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_129440:
    // 0x129440: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x129440u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_129444:
    // 0x129444: 0x3c014027  lui         $at, 0x4027
    ctx->pc = 0x129444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16423 << 16));
label_129448:
    // 0x129448: 0x34218d37  ori         $at, $at, 0x8D37
    ctx->pc = 0x129448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36151);
label_12944c:
    // 0x12944c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12944cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_129450:
    // 0x129450: 0xc6000438  lwc1        $f0, 0x438($s0)
    ctx->pc = 0x129450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129454:
    // 0x129454: 0xc6020358  lwc1        $f2, 0x358($s0)
    ctx->pc = 0x129454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_129458:
    // 0x129458: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x129458u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_12945c:
    // 0x12945c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12945cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_129460:
    // 0x129460: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x129460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_129464:
    // 0x129464: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x129464u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_129468:
    // 0x129468: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x129468u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_12946c:
    // 0x12946c: 0x46001029  min.s       $f0, $f2, $f0
    ctx->pc = 0x12946cu;
    ctx->f[0] = std::min(ctx->f[2], ctx->f[0]);
label_129470:
    // 0x129470: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x129470u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129474:
    // 0x129474: 0x0  nop
    ctx->pc = 0x129474u;
    // NOP
label_129478:
    // 0x129478: 0x45010054  bc1t        . + 4 + (0x54 << 2)
label_12947c:
    if (ctx->pc == 0x12947Cu) {
        ctx->pc = 0x12947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129478u;
        // 0x12947c: 0xe6000358  swc1        $f0, 0x358($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 856), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x129480u;
        goto label_129480;
    }
    ctx->pc = 0x129478u;
    {
        const bool branch_taken_0x129478 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129478u;
        // 0x12947c: 0xe6000358  swc1        $f0, 0x358($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 856), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129478) {
            ctx->pc = 0x1295CCu;
            goto label_1295cc;
        }
    }
    ctx->pc = 0x129480u;
label_129480:
    // 0x129480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129484:
    // 0x129484: 0x3c013eab  lui         $at, 0x3EAB
    ctx->pc = 0x129484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16043 << 16));
label_129488:
    // 0x129488: 0x3421020c  ori         $at, $at, 0x20C
    ctx->pc = 0x129488u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)524);
label_12948c:
    // 0x12948c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12948cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129490:
    // 0x129490: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x129490u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_129494:
    // 0x129494: 0xe6000368  swc1        $f0, 0x368($s0)
    ctx->pc = 0x129494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 872), bits); }
label_129498:
    // 0x129498: 0xc6010438  lwc1        $f1, 0x438($s0)
    ctx->pc = 0x129498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12949c:
    // 0x12949c: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x12949cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1294a0:
    // 0x1294a0: 0x0  nop
    ctx->pc = 0x1294a0u;
    // NOP
label_1294a4:
    // 0x1294a4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_1294a8:
    if (ctx->pc == 0x1294A8u) {
        ctx->pc = 0x1294A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294A4u;
        // 0x1294a8: 0xa2000474  sb          $zero, 0x474($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1140), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1294ACu;
        goto label_1294ac;
    }
    ctx->pc = 0x1294A4u;
    {
        const bool branch_taken_0x1294a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1294A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294A4u;
        // 0x1294a8: 0xa2000474  sb          $zero, 0x474($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1140), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1294a4) {
            ctx->pc = 0x1294D8u;
            goto label_1294d8;
        }
    }
    ctx->pc = 0x1294ACu;
label_1294ac:
    // 0x1294ac: 0x3c013f82  lui         $at, 0x3F82
    ctx->pc = 0x1294acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16258 << 16));
label_1294b0:
    // 0x1294b0: 0x34210522  ori         $at, $at, 0x522
    ctx->pc = 0x1294b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1314);
label_1294b4:
    // 0x1294b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1294b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1294b8:
    // 0x1294b8: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x1294b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_1294bc:
    // 0x1294bc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1294bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_1294c0:
    // 0x1294c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1294c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1294c4:
    // 0x1294c4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1294c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1294c8:
    // 0x1294c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1294c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1294cc:
    // 0x1294cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1294ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1294d0:
    // 0x1294d0: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1294d4:
    if (ctx->pc == 0x1294D4u) {
        ctx->pc = 0x1294D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294D0u;
        // 0x1294d4: 0xe6010434  swc1        $f1, 0x434($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1076), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1294D8u;
        goto label_1294d8;
    }
    ctx->pc = 0x1294D0u;
    {
        const bool branch_taken_0x1294d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1294D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294D0u;
        // 0x1294d4: 0xe6010434  swc1        $f1, 0x434($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1076), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1294d0) {
            ctx->pc = 0x1295BCu;
            goto label_1295bc;
        }
    }
    ctx->pc = 0x1294D8u;
label_1294d8:
    // 0x1294d8: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1294dc:
    if (ctx->pc == 0x1294DCu) {
        ctx->pc = 0x1294DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294D8u;
        // 0x1294dc: 0xe6040358  swc1        $f4, 0x358($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 856), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1294E0u;
        goto label_1294e0;
    }
    ctx->pc = 0x1294D8u;
    {
        const bool branch_taken_0x1294d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1294DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294D8u;
        // 0x1294dc: 0xe6040358  swc1        $f4, 0x358($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 856), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1294d8) {
            ctx->pc = 0x1295CCu;
            goto label_1295cc;
        }
    }
    ctx->pc = 0x1294E0u;
label_1294e0:
    // 0x1294e0: 0x3c014330  lui         $at, 0x4330
    ctx->pc = 0x1294e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17200 << 16));
label_1294e4:
    // 0x1294e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1294e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1294e8:
    // 0x1294e8: 0x0  nop
    ctx->pc = 0x1294e8u;
    // NOP
label_1294ec:
    // 0x1294ec: 0x46151036  c.le.s      $f2, $f21
    ctx->pc = 0x1294ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1294f0:
    // 0x1294f0: 0x0  nop
    ctx->pc = 0x1294f0u;
    // NOP
label_1294f4:
    // 0x1294f4: 0x45020036  bc1fl       . + 4 + (0x36 << 2)
label_1294f8:
    if (ctx->pc == 0x1294F8u) {
        ctx->pc = 0x1294F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294F4u;
        // 0x1294f8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1294FCu;
        goto label_1294fc;
    }
    ctx->pc = 0x1294F4u;
    {
        const bool branch_taken_0x1294f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1294f4) {
            ctx->pc = 0x1294F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1294F4u;
            // 0x1294f8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1295D0u;
            goto label_1295d0;
        }
    }
    ctx->pc = 0x1294FCu;
label_1294fc:
    // 0x1294fc: 0x4602a881  sub.s       $f2, $f21, $f2
    ctx->pc = 0x1294fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_129500:
    // 0x129500: 0x3c013c4f  lui         $at, 0x3C4F
    ctx->pc = 0x129500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15439 << 16));
label_129504:
    // 0x129504: 0x34216475  ori         $at, $at, 0x6475
    ctx->pc = 0x129504u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25717);
label_129508:
    // 0x129508: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12950c:
    // 0x12950c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12950cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_129510:
    // 0x129510: 0x34210fdc  ori         $at, $at, 0xFDC
    ctx->pc = 0x129510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4060);
label_129514:
    // 0x129514: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x129514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_129518:
    // 0x129518: 0x3c01bf86  lui         $at, 0xBF86
    ctx->pc = 0x129518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49030 << 16));
label_12951c:
    // 0x12951c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x12951cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_129520:
    // 0x129520: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x129520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_129524:
    // 0x129524: 0x46001502  mul.s       $f20, $f2, $f0
    ctx->pc = 0x129524u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_129528:
    // 0x129528: 0xc6010358  lwc1        $f1, 0x358($s0)
    ctx->pc = 0x129528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12952c:
    // 0x12952c: 0x3c01c027  lui         $at, 0xC027
    ctx->pc = 0x12952cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49191 << 16));
label_129530:
    // 0x129530: 0x34218d37  ori         $at, $at, 0x8D37
    ctx->pc = 0x129530u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36151);
label_129534:
    // 0x129534: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x129534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_129538:
    // 0x129538: 0xc6000434  lwc1        $f0, 0x434($s0)
    ctx->pc = 0x129538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12953c:
    // 0x12953c: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x12953cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_129540:
    // 0x129540: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x129540u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_129544:
    // 0x129544: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x129544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_129548:
    // 0x129548: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x129548u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_12954c:
    // 0x12954c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x12954cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_129550:
    // 0x129550: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x129550u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
label_129554:
    // 0x129554: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x129554u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129558:
    // 0x129558: 0x0  nop
    ctx->pc = 0x129558u;
    // NOP
label_12955c:
    // 0x12955c: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_129560:
    if (ctx->pc == 0x129560u) {
        ctx->pc = 0x129560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12955Cu;
        // 0x129560: 0xe6000358  swc1        $f0, 0x358($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 856), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x129564u;
        goto label_129564;
    }
    ctx->pc = 0x12955Cu;
    {
        const bool branch_taken_0x12955c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x129560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12955Cu;
        // 0x129560: 0xe6000358  swc1        $f0, 0x358($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 856), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12955c) {
            ctx->pc = 0x1295CCu;
            goto label_1295cc;
        }
    }
    ctx->pc = 0x129564u;
label_129564:
    // 0x129564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129568:
    // 0x129568: 0x3c013eab  lui         $at, 0x3EAB
    ctx->pc = 0x129568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16043 << 16));
label_12956c:
    // 0x12956c: 0x3421020c  ori         $at, $at, 0x20C
    ctx->pc = 0x12956cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)524);
label_129570:
    // 0x129570: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129574:
    // 0x129574: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x129574u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_129578:
    // 0x129578: 0xe6000368  swc1        $f0, 0x368($s0)
    ctx->pc = 0x129578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 872), bits); }
label_12957c:
    // 0x12957c: 0xc6010434  lwc1        $f1, 0x434($s0)
    ctx->pc = 0x12957cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129580:
    // 0x129580: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x129580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129584:
    // 0x129584: 0x0  nop
    ctx->pc = 0x129584u;
    // NOP
label_129588:
    // 0x129588: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_12958c:
    if (ctx->pc == 0x12958Cu) {
        ctx->pc = 0x12958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129588u;
        // 0x12958c: 0xa2000474  sb          $zero, 0x474($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1140), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129590u;
        goto label_129590;
    }
    ctx->pc = 0x129588u;
    {
        const bool branch_taken_0x129588 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129588u;
        // 0x12958c: 0xa2000474  sb          $zero, 0x474($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1140), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129588) {
            ctx->pc = 0x1295C8u;
            goto label_1295c8;
        }
    }
    ctx->pc = 0x129590u;
label_129590:
    // 0x129590: 0x3c013f82  lui         $at, 0x3F82
    ctx->pc = 0x129590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16258 << 16));
label_129594:
    // 0x129594: 0x34210522  ori         $at, $at, 0x522
    ctx->pc = 0x129594u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1314);
label_129598:
    // 0x129598: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12959c:
    // 0x12959c: 0x3c01bd00  lui         $at, 0xBD00
    ctx->pc = 0x12959cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48384 << 16));
label_1295a0:
    // 0x1295a0: 0x3421adfd  ori         $at, $at, 0xADFD
    ctx->pc = 0x1295a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44541);
label_1295a4:
    // 0x1295a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1295a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1295a8:
    // 0x1295a8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1295a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1295ac:
    // 0x1295ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1295acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1295b0:
    // 0x1295b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1295b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1295b4:
    // 0x1295b4: 0x0  nop
    ctx->pc = 0x1295b4u;
    // NOP
label_1295b8:
    // 0x1295b8: 0xe6010438  swc1        $f1, 0x438($s0)
    ctx->pc = 0x1295b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1080), bits); }
label_1295bc:
    // 0x1295bc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1295bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1295c0:
    // 0x1295c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1295c4:
    if (ctx->pc == 0x1295C4u) {
        ctx->pc = 0x1295C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295C0u;
        // 0x1295c4: 0xe6c20000  swc1        $f2, 0x0($s6) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1295C8u;
        goto label_1295c8;
    }
    ctx->pc = 0x1295C0u;
    {
        const bool branch_taken_0x1295c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1295C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295C0u;
        // 0x1295c4: 0xe6c20000  swc1        $f2, 0x0($s6) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295c0) {
            ctx->pc = 0x1295CCu;
            goto label_1295cc;
        }
    }
    ctx->pc = 0x1295C8u;
label_1295c8:
    // 0x1295c8: 0xe6020358  swc1        $f2, 0x358($s0)
    ctx->pc = 0x1295c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 856), bits); }
label_1295cc:
    // 0x1295cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1295ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1295d0:
    // 0x1295d0: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x1295d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_1295d4:
    // 0x1295d4: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x1295d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_1295d8:
    // 0x1295d8: 0x40f809  jalr        $v0
label_1295dc:
    if (ctx->pc == 0x1295DCu) {
        ctx->pc = 0x1295DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295D8u;
        // 0x1295dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1295E0u;
        goto label_1295e0;
    }
    ctx->pc = 0x1295D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1295E0u);
        ctx->pc = 0x1295DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295D8u;
        // 0x1295dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1295D8u, 0x1295E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1295E0u;
label_1295e0:
    // 0x1295e0: 0x2624b1f0  addiu       $a0, $s1, -0x4E10
    ctx->pc = 0x1295e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947312));
label_1295e4:
    // 0x1295e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1295e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1295e8:
    // 0x1295e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1295e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1295ec:
    // 0x1295ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1295ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1295f0:
    // 0x1295f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1295f4:
    if (ctx->pc == 0x1295F4u) {
        ctx->pc = 0x1295F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295F0u;
        // 0x1295f4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1295F8u;
        goto label_1295f8;
    }
    ctx->pc = 0x1295F0u;
    {
        const bool branch_taken_0x1295f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1295F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295F0u;
        // 0x1295f4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295f0) {
            ctx->pc = 0x129614u;
            goto label_129614;
        }
    }
    ctx->pc = 0x1295F8u;
label_1295f8:
    // 0x1295f8: 0xc6000358  lwc1        $f0, 0x358($s0)
    ctx->pc = 0x1295f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1295fc:
    // 0x1295fc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1295fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_129600:
    // 0x129600: 0xe6000358  swc1        $f0, 0x358($s0)
    ctx->pc = 0x129600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 856), bits); }
label_129604:
    // 0x129604: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x129604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129608:
    // 0x129608: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x129608u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_12960c:
    // 0x12960c: 0xe6c10000  swc1        $f1, 0x0($s6)
    ctx->pc = 0x12960cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_129610:
    // 0x129610: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x129610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_129614:
    // 0x129614: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
label_129618:
    if (ctx->pc == 0x129618u) {
        ctx->pc = 0x129618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129614u;
        // 0x129618: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12961Cu;
        goto label_12961c;
    }
    ctx->pc = 0x129614u;
    {
        const bool branch_taken_0x129614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129614u;
        // 0x129618: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129614) {
            ctx->pc = 0x1297C8u;
            goto label_1297c8;
        }
    }
    ctx->pc = 0x12961Cu;
label_12961c:
    // 0x12961c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x12961cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_129620:
    // 0x129620: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
label_129624:
    if (ctx->pc == 0x129624u) {
        ctx->pc = 0x129628u;
        goto label_129628;
    }
    ctx->pc = 0x129620u;
    {
        const bool branch_taken_0x129620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129620) {
            ctx->pc = 0x1297C8u;
            goto label_1297c8;
        }
    }
    ctx->pc = 0x129628u;
label_129628:
    // 0x129628: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x129628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_12962c:
    // 0x12962c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12962cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129630:
    // 0x129630: 0x3c014368  lui         $at, 0x4368
    ctx->pc = 0x129630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17256 << 16));
label_129634:
    // 0x129634: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x129634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_129638:
    // 0x129638: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x129638u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12963c:
    // 0x12963c: 0x0  nop
    ctx->pc = 0x12963cu;
    // NOP
label_129640:
    // 0x129640: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_129644:
    if (ctx->pc == 0x129644u) {
        ctx->pc = 0x129644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129640u;
        // 0x129644: 0xae0003b8  sw          $zero, 0x3B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129648u;
        goto label_129648;
    }
    ctx->pc = 0x129640u;
    {
        const bool branch_taken_0x129640 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129640u;
        // 0x129644: 0xae0003b8  sw          $zero, 0x3B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129640) {
            ctx->pc = 0x1296B4u;
            goto label_1296b4;
        }
    }
    ctx->pc = 0x129648u;
label_129648:
    // 0x129648: 0x0  nop
    ctx->pc = 0x129648u;
    // NOP
label_12964c:
    // 0x12964c: 0x0  nop
    ctx->pc = 0x12964cu;
    // NOP
label_129650:
    // 0x129650: 0x4600b503  div.s       $f20, $f22, $f0
    ctx->pc = 0x129650u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[22], ctx->f[0]); }
label_129654:
    // 0x129654: 0x3c013fbd  lui         $at, 0x3FBD
    ctx->pc = 0x129654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16317 << 16));
label_129658:
    // 0x129658: 0x3421e44f  ori         $at, $at, 0xE44F
    ctx->pc = 0x129658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58447);
label_12965c:
    // 0x12965c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x12965cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_129660:
    // 0x129660: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x129660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
label_129664:
    // 0x129664: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x129664u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_129668:
    // 0x129668: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12966c:
    // 0x12966c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x12966cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_129670:
    // 0x129670: 0xc60203b4  lwc1        $f2, 0x3B4($s0)
    ctx->pc = 0x129670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_129674:
    // 0x129674: 0xc60103ac  lwc1        $f1, 0x3AC($s0)
    ctx->pc = 0x129674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129678:
    // 0x129678: 0xc4438acc  lwc1        $f3, -0x7534($v0)
    ctx->pc = 0x129678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12967c:
    // 0x12967c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x12967cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129680:
    // 0x129680: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x129680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_129684:
    // 0x129684: 0xe60303d4  swc1        $f3, 0x3D4($s0)
    ctx->pc = 0x129684u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 980), bits); }
label_129688:
    // 0x129688: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x129688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_12968c:
    // 0x12968c: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
label_129690:
    if (ctx->pc == 0x129690u) {
        ctx->pc = 0x129690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12968Cu;
        // 0x129690: 0xe60003b8  swc1        $f0, 0x3B8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 952), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x129694u;
        goto label_129694;
    }
    ctx->pc = 0x12968Cu;
    {
        const bool branch_taken_0x12968c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12968Cu;
        // 0x129690: 0xe60003b8  swc1        $f0, 0x3B8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 952), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12968c) {
            ctx->pc = 0x12973Cu;
            goto label_12973c;
        }
    }
    ctx->pc = 0x129694u;
label_129694:
    // 0x129694: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x129694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
label_129698:
    // 0x129698: 0x3421fa1b  ori         $at, $at, 0xFA1B
    ctx->pc = 0x129698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64027);
label_12969c:
    // 0x12969c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12969cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1296a0:
    // 0x1296a0: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x1296a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
label_1296a4:
    // 0x1296a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1296a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1296a8:
    // 0x1296a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1296a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1296ac:
    // 0x1296ac: 0x10000021  b           . + 4 + (0x21 << 2)
label_1296b0:
    if (ctx->pc == 0x1296B0u) {
        ctx->pc = 0x1296B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296ACu;
        // 0x1296b0: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1296B4u;
        goto label_1296b4;
    }
    ctx->pc = 0x1296ACu;
    {
        const bool branch_taken_0x1296ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1296B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296ACu;
        // 0x1296b0: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1296ac) {
            ctx->pc = 0x129734u;
            goto label_129734;
        }
    }
    ctx->pc = 0x1296B4u;
label_1296b4:
    // 0x1296b4: 0x46161036  c.le.s      $f2, $f22
    ctx->pc = 0x1296b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1296b8:
    // 0x1296b8: 0x0  nop
    ctx->pc = 0x1296b8u;
    // NOP
label_1296bc:
    // 0x1296bc: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_1296c0:
    if (ctx->pc == 0x1296C0u) {
        ctx->pc = 0x1296C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296BCu;
        // 0x1296c0: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1296C4u;
        goto label_1296c4;
    }
    ctx->pc = 0x1296BCu;
    {
        const bool branch_taken_0x1296bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1296C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296BCu;
        // 0x1296c0: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1296bc) {
            ctx->pc = 0x12973Cu;
            goto label_12973c;
        }
    }
    ctx->pc = 0x1296C4u;
label_1296c4:
    // 0x1296c4: 0x4602b081  sub.s       $f2, $f22, $f2
    ctx->pc = 0x1296c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
label_1296c8:
    // 0x1296c8: 0x3c0141b8  lui         $at, 0x41B8
    ctx->pc = 0x1296c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16824 << 16));
label_1296cc:
    // 0x1296cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1296ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1296d0:
    // 0x1296d0: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x1296d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
label_1296d4:
    // 0x1296d4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1296d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_1296d8:
    // 0x1296d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1296d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1296dc:
    // 0x1296dc: 0x3c01bf75  lui         $at, 0xBF75
    ctx->pc = 0x1296dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49013 << 16));
label_1296e0:
    // 0x1296e0: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x1296e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
label_1296e4:
    // 0x1296e4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1296e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1296e8:
    // 0x1296e8: 0x0  nop
    ctx->pc = 0x1296e8u;
    // NOP
label_1296ec:
    // 0x1296ec: 0x0  nop
    ctx->pc = 0x1296ecu;
    // NOP
label_1296f0:
    // 0x1296f0: 0x46011503  div.s       $f20, $f2, $f1
    ctx->pc = 0x1296f0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_1296f4:
    // 0x1296f4: 0xc60303b4  lwc1        $f3, 0x3B4($s0)
    ctx->pc = 0x1296f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1296f8:
    // 0x1296f8: 0xc60103b0  lwc1        $f1, 0x3B0($s0)
    ctx->pc = 0x1296f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1296fc:
    // 0x1296fc: 0xc4428acc  lwc1        $f2, -0x7534($v0)
    ctx->pc = 0x1296fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_129700:
    // 0x129700: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x129700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129704:
    // 0x129704: 0xe60203d4  swc1        $f2, 0x3D4($s0)
    ctx->pc = 0x129704u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 980), bits); }
label_129708:
    // 0x129708: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x129708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_12970c:
    // 0x12970c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x12970cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_129710:
    // 0x129710: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_129714:
    if (ctx->pc == 0x129714u) {
        ctx->pc = 0x129714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129710u;
        // 0x129714: 0xe60003b8  swc1        $f0, 0x3B8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 952), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x129718u;
        goto label_129718;
    }
    ctx->pc = 0x129710u;
    {
        const bool branch_taken_0x129710 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129710u;
        // 0x129714: 0xe60003b8  swc1        $f0, 0x3B8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 952), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129710) {
            ctx->pc = 0x12973Cu;
            goto label_12973c;
        }
    }
    ctx->pc = 0x129718u;
label_129718:
    // 0x129718: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x129718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
label_12971c:
    // 0x12971c: 0x3421fa1b  ori         $at, $at, 0xFA1B
    ctx->pc = 0x12971cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64027);
label_129720:
    // 0x129720: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129724:
    // 0x129724: 0x3c01bd00  lui         $at, 0xBD00
    ctx->pc = 0x129724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48384 << 16));
label_129728:
    // 0x129728: 0x3421adfd  ori         $at, $at, 0xADFD
    ctx->pc = 0x129728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44541);
label_12972c:
    // 0x12972c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12972cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_129730:
    // 0x129730: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x129730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_129734:
    // 0x129734: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x129734u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_129738:
    // 0x129738: 0xe7c10000  swc1        $f1, 0x0($fp)
    ctx->pc = 0x129738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_12973c:
    // 0x12973c: 0xc60103b8  lwc1        $f1, 0x3B8($s0)
    ctx->pc = 0x12973cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129740:
    // 0x129740: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x129740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129744:
    // 0x129744: 0x0  nop
    ctx->pc = 0x129744u;
    // NOP
label_129748:
    // 0x129748: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x129748u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12974c:
    // 0x12974c: 0x0  nop
    ctx->pc = 0x12974cu;
    // NOP
label_129750:
    // 0x129750: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_129754:
    if (ctx->pc == 0x129754u) {
        ctx->pc = 0x129754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129750u;
        // 0x129754: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129758u;
        goto label_129758;
    }
    ctx->pc = 0x129750u;
    {
        const bool branch_taken_0x129750 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x129754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129750u;
        // 0x129754: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129750) {
            ctx->pc = 0x1297C8u;
            goto label_1297c8;
        }
    }
    ctx->pc = 0x129758u;
label_129758:
    // 0x129758: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x129758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12975c:
    // 0x12975c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12975cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_129760:
    // 0x129760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129764:
    // 0x129764: 0x3c013eab  lui         $at, 0x3EAB
    ctx->pc = 0x129764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16043 << 16));
label_129768:
    // 0x129768: 0x3421020c  ori         $at, $at, 0x20C
    ctx->pc = 0x129768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)524);
label_12976c:
    // 0x12976c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12976cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129770:
    // 0x129770: 0xe6010398  swc1        $f1, 0x398($s0)
    ctx->pc = 0x129770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 920), bits); }
label_129774:
    // 0x129774: 0xe6000368  swc1        $f0, 0x368($s0)
    ctx->pc = 0x129774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 872), bits); }
label_129778:
    // 0x129778: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x129778u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_12977c:
    // 0x12977c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x12977cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_129780:
    // 0x129780: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x129780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_129784:
    // 0x129784: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x129784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_129788:
    // 0x129788: 0x40f809  jalr        $v0
label_12978c:
    if (ctx->pc == 0x12978Cu) {
        ctx->pc = 0x12978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129788u;
        // 0x12978c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129790u;
        goto label_129790;
    }
    ctx->pc = 0x129788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x129790u);
        ctx->pc = 0x12978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129788u;
        // 0x12978c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129788u, 0x129790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x129790u;
label_129790:
    // 0x129790: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x129790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_129794:
    // 0x129794: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x129794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_129798:
    // 0x129798: 0x2463b1f8  addiu       $v1, $v1, -0x4E08
    ctx->pc = 0x129798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947320));
label_12979c:
    // 0x12979c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1297a0:
    // 0x1297a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1297a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1297a4:
    // 0x1297a4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1297a8:
    if (ctx->pc == 0x1297A8u) {
        ctx->pc = 0x1297A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297A4u;
        // 0x1297a8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1297ACu;
        goto label_1297ac;
    }
    ctx->pc = 0x1297A4u;
    {
        const bool branch_taken_0x1297a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297A4u;
        // 0x1297a8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297a4) {
            ctx->pc = 0x1297C8u;
            goto label_1297c8;
        }
    }
    ctx->pc = 0x1297ACu;
label_1297ac:
    // 0x1297ac: 0xc60003b8  lwc1        $f0, 0x3B8($s0)
    ctx->pc = 0x1297acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1297b0:
    // 0x1297b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1297b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1297b4:
    // 0x1297b4: 0xe60003b8  swc1        $f0, 0x3B8($s0)
    ctx->pc = 0x1297b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 952), bits); }
label_1297b8:
    // 0x1297b8: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x1297b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1297bc:
    // 0x1297bc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1297bcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1297c0:
    // 0x1297c0: 0xe7c10000  swc1        $f1, 0x0($fp)
    ctx->pc = 0x1297c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_1297c4:
    // 0x1297c4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1297c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1297c8:
    // 0x1297c8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_1297cc:
    if (ctx->pc == 0x1297CCu) {
        ctx->pc = 0x1297CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297C8u;
        // 0x1297cc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1297D0u;
        goto label_1297d0;
    }
    ctx->pc = 0x1297C8u;
    {
        const bool branch_taken_0x1297c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297C8u;
        // 0x1297cc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297c8) {
            ctx->pc = 0x129884u;
            goto label_129884;
        }
    }
    ctx->pc = 0x1297D0u;
label_1297d0:
    // 0x1297d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1297d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1297d4:
    // 0x1297d4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1297d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1297d8:
    // 0x1297d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1297d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1297dc:
    // 0x1297dc: 0x8c83b1a4  lw          $v1, -0x4E5C($a0)
    ctx->pc = 0x1297dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947236)));
label_1297e0:
    // 0x1297e0: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
label_1297e4:
    if (ctx->pc == 0x1297E4u) {
        ctx->pc = 0x1297E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297E0u;
        // 0x1297e4: 0xc600032c  lwc1        $f0, 0x32C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1297E8u;
        goto label_1297e8;
    }
    ctx->pc = 0x1297E0u;
    {
        const bool branch_taken_0x1297e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1297e0) {
            ctx->pc = 0x1297E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1297E0u;
            // 0x1297e4: 0xc600032c  lwc1        $f0, 0x32C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12980Cu;
            goto label_12980c;
        }
    }
    ctx->pc = 0x1297E8u;
label_1297e8:
    // 0x1297e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1297e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1297ec:
    // 0x1297ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1297ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1297f0:
    // 0x1297f0: 0x8c43b19c  lw          $v1, -0x4E64($v0)
    ctx->pc = 0x1297f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947228)));
label_1297f4:
    // 0x1297f4: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
label_1297f8:
    if (ctx->pc == 0x1297F8u) {
        ctx->pc = 0x1297F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297F4u;
        // 0x1297f8: 0xc600032c  lwc1        $f0, 0x32C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1297FCu;
        goto label_1297fc;
    }
    ctx->pc = 0x1297F4u;
    {
        const bool branch_taken_0x1297f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1297f4) {
            ctx->pc = 0x1297F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1297F4u;
            // 0x1297f8: 0xc600032c  lwc1        $f0, 0x32C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12980Cu;
            goto label_12980c;
        }
    }
    ctx->pc = 0x1297FCu;
label_1297fc:
    // 0x1297fc: 0xc60c0304  lwc1        $f12, 0x304($s0)
    ctx->pc = 0x1297fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_129800:
    // 0x129800: 0xc04953c  jal         func_1254F0
label_129804:
    if (ctx->pc == 0x129804u) {
        ctx->pc = 0x129804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129800u;
        // 0x129804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129808u;
        goto label_129808;
    }
    ctx->pc = 0x129800u;
    SET_GPR_U32(ctx, 31, 0x129808u);
    ctx->pc = 0x129804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129800u;
    // 0x129804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x129800u, 0x129808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129808u;
label_129808:
    // 0x129808: 0xc600032c  lwc1        $f0, 0x32C($s0)
    ctx->pc = 0x129808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12980c:
    // 0x12980c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12980cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129810:
    // 0x129810: 0xc60c0400  lwc1        $f12, 0x400($s0)
    ctx->pc = 0x129810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_129814:
    // 0x129814: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x129814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129818:
    // 0x129818: 0xc04b5ea  jal         func_12D7A8
label_12981c:
    if (ctx->pc == 0x12981Cu) {
        ctx->pc = 0x12981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129818u;
        // 0x12981c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x129820u;
        goto label_129820;
    }
    ctx->pc = 0x129818u;
    SET_GPR_U32(ctx, 31, 0x129820u);
    ctx->pc = 0x12981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129818u;
    // 0x12981c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7A8u, 0x129818u, 0x129820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129820u;
label_129820:
    // 0x129820: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x129820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129824:
    // 0x129824: 0xc6000400  lwc1        $f0, 0x400($s0)
    ctx->pc = 0x129824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129828:
    // 0x129828: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x129828u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12982c:
    // 0x12982c: 0x0  nop
    ctx->pc = 0x12982cu;
    // NOP
label_129830:
    // 0x129830: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_129834:
    if (ctx->pc == 0x129834u) {
        ctx->pc = 0x129834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129830u;
        // 0x129834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129838u;
        goto label_129838;
    }
    ctx->pc = 0x129830u;
    {
        const bool branch_taken_0x129830 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x129834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129830u;
        // 0x129834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129830) {
            ctx->pc = 0x12986Cu;
            goto label_12986c;
        }
    }
    ctx->pc = 0x129838u;
label_129838:
    // 0x129838: 0xc60c0304  lwc1        $f12, 0x304($s0)
    ctx->pc = 0x129838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12983c:
    // 0x12983c: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x12983cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129840:
    // 0x129840: 0x0  nop
    ctx->pc = 0x129840u;
    // NOP
label_129844:
    // 0x129844: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_129848:
    if (ctx->pc == 0x129848u) {
        ctx->pc = 0x129848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129844u;
        // 0x129848: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12984Cu;
        goto label_12984c;
    }
    ctx->pc = 0x129844u;
    {
        const bool branch_taken_0x129844 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129844u;
        // 0x129848: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129844) {
            ctx->pc = 0x12987Cu;
            goto label_12987c;
        }
    }
    ctx->pc = 0x12984Cu;
label_12984c:
    // 0x12984c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12984cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129850:
    // 0x129850: 0x8c43b19c  lw          $v1, -0x4E64($v0)
    ctx->pc = 0x129850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947228)));
label_129854:
    // 0x129854: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_129858:
    if (ctx->pc == 0x129858u) {
        ctx->pc = 0x129858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129854u;
        // 0x129858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12985Cu;
        goto label_12985c;
    }
    ctx->pc = 0x129854u;
    {
        const bool branch_taken_0x129854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x129858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129854u;
        // 0x129858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129854) {
            ctx->pc = 0x12986Cu;
            goto label_12986c;
        }
    }
    ctx->pc = 0x12985Cu;
label_12985c:
    // 0x12985c: 0xc04953c  jal         func_1254F0
label_129860:
    if (ctx->pc == 0x129860u) {
        ctx->pc = 0x129860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12985Cu;
        // 0x129860: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x129864u;
        goto label_129864;
    }
    ctx->pc = 0x12985Cu;
    SET_GPR_U32(ctx, 31, 0x129864u);
    ctx->pc = 0x129860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12985Cu;
    // 0x129860: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x12985Cu, 0x129864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129864u;
label_129864:
    // 0x129864: 0x10000008  b           . + 4 + (0x8 << 2)
label_129868:
    if (ctx->pc == 0x129868u) {
        ctx->pc = 0x129868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129864u;
        // 0x129868: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12986Cu;
        goto label_12986c;
    }
    ctx->pc = 0x129864u;
    {
        const bool branch_taken_0x129864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129864u;
        // 0x129868: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129864) {
            ctx->pc = 0x129888u;
            goto label_129888;
        }
    }
    ctx->pc = 0x12986Cu;
label_12986c:
    // 0x12986c: 0xc04953c  jal         func_1254F0
label_129870:
    if (ctx->pc == 0x129870u) {
        ctx->pc = 0x129870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12986Cu;
        // 0x129870: 0xc48c0308  lwc1        $f12, 0x308($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x129874u;
        goto label_129874;
    }
    ctx->pc = 0x12986Cu;
    SET_GPR_U32(ctx, 31, 0x129874u);
    ctx->pc = 0x129870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12986Cu;
    // 0x129870: 0xc48c0308  lwc1        $f12, 0x308($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x12986Cu, 0x129874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129874u;
label_129874:
    // 0x129874: 0x10000004  b           . + 4 + (0x4 << 2)
label_129878:
    if (ctx->pc == 0x129878u) {
        ctx->pc = 0x129878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129874u;
        // 0x129878: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12987Cu;
        goto label_12987c;
    }
    ctx->pc = 0x129874u;
    {
        const bool branch_taken_0x129874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129874u;
        // 0x129878: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129874) {
            ctx->pc = 0x129888u;
            goto label_129888;
        }
    }
    ctx->pc = 0x12987Cu;
label_12987c:
    // 0x12987c: 0xc04953c  jal         func_1254F0
label_129880:
    if (ctx->pc == 0x129880u) {
        ctx->pc = 0x129880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12987Cu;
        // 0x129880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129884u;
        goto label_129884;
    }
    ctx->pc = 0x12987Cu;
    SET_GPR_U32(ctx, 31, 0x129884u);
    ctx->pc = 0x129880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12987Cu;
    // 0x129880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x12987Cu, 0x129884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129884u;
label_129884:
    // 0x129884: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x129884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_129888:
    // 0x129888: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x129888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_12988c:
    // 0x12988c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x12988cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_129890:
    // 0x129890: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x129890u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_129894:
    // 0x129894: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x129894u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_129898:
    // 0x129898: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x129898u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12989c:
    // 0x12989c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x12989cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1298a0:
    // 0x1298a0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1298a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1298a4:
    // 0x1298a4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1298a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1298a8:
    // 0x1298a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1298a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1298ac:
    // 0x1298ac: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x1298acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1298b0:
    // 0x1298b0: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1298b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1298b4:
    // 0x1298b4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1298b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1298b8:
    // 0x1298b8: 0x3e00008  jr          $ra
label_1298bc:
    if (ctx->pc == 0x1298BCu) {
        ctx->pc = 0x1298BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298B8u;
        // 0x1298bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1298C0u;
        goto label_fallthrough_0x1298b8;
    }
    ctx->pc = 0x1298B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1298BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298B8u;
        // 0x1298bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1298B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1298b8:
    ctx->pc = 0x1298C0u;
}
