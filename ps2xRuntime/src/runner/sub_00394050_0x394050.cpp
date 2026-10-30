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

// Function: sub_00394050
// Address: 0x394050 - 0x394810
void sub_00394050_0x394050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394050_0x394050");
#endif

    switch (ctx->pc) {
        case 0x394050u: goto label_394050;
        case 0x394054u: goto label_394054;
        case 0x394058u: goto label_394058;
        case 0x39405cu: goto label_39405c;
        case 0x394060u: goto label_394060;
        case 0x394064u: goto label_394064;
        case 0x394068u: goto label_394068;
        case 0x39406cu: goto label_39406c;
        case 0x394070u: goto label_394070;
        case 0x394074u: goto label_394074;
        case 0x394078u: goto label_394078;
        case 0x39407cu: goto label_39407c;
        case 0x394080u: goto label_394080;
        case 0x394084u: goto label_394084;
        case 0x394088u: goto label_394088;
        case 0x39408cu: goto label_39408c;
        case 0x394090u: goto label_394090;
        case 0x394094u: goto label_394094;
        case 0x394098u: goto label_394098;
        case 0x39409cu: goto label_39409c;
        case 0x3940a0u: goto label_3940a0;
        case 0x3940a4u: goto label_3940a4;
        case 0x3940a8u: goto label_3940a8;
        case 0x3940acu: goto label_3940ac;
        case 0x3940b0u: goto label_3940b0;
        case 0x3940b4u: goto label_3940b4;
        case 0x3940b8u: goto label_3940b8;
        case 0x3940bcu: goto label_3940bc;
        case 0x3940c0u: goto label_3940c0;
        case 0x3940c4u: goto label_3940c4;
        case 0x3940c8u: goto label_3940c8;
        case 0x3940ccu: goto label_3940cc;
        case 0x3940d0u: goto label_3940d0;
        case 0x3940d4u: goto label_3940d4;
        case 0x3940d8u: goto label_3940d8;
        case 0x3940dcu: goto label_3940dc;
        case 0x3940e0u: goto label_3940e0;
        case 0x3940e4u: goto label_3940e4;
        case 0x3940e8u: goto label_3940e8;
        case 0x3940ecu: goto label_3940ec;
        case 0x3940f0u: goto label_3940f0;
        case 0x3940f4u: goto label_3940f4;
        case 0x3940f8u: goto label_3940f8;
        case 0x3940fcu: goto label_3940fc;
        case 0x394100u: goto label_394100;
        case 0x394104u: goto label_394104;
        case 0x394108u: goto label_394108;
        case 0x39410cu: goto label_39410c;
        case 0x394110u: goto label_394110;
        case 0x394114u: goto label_394114;
        case 0x394118u: goto label_394118;
        case 0x39411cu: goto label_39411c;
        case 0x394120u: goto label_394120;
        case 0x394124u: goto label_394124;
        case 0x394128u: goto label_394128;
        case 0x39412cu: goto label_39412c;
        case 0x394130u: goto label_394130;
        case 0x394134u: goto label_394134;
        case 0x394138u: goto label_394138;
        case 0x39413cu: goto label_39413c;
        case 0x394140u: goto label_394140;
        case 0x394144u: goto label_394144;
        case 0x394148u: goto label_394148;
        case 0x39414cu: goto label_39414c;
        case 0x394150u: goto label_394150;
        case 0x394154u: goto label_394154;
        case 0x394158u: goto label_394158;
        case 0x39415cu: goto label_39415c;
        case 0x394160u: goto label_394160;
        case 0x394164u: goto label_394164;
        case 0x394168u: goto label_394168;
        case 0x39416cu: goto label_39416c;
        case 0x394170u: goto label_394170;
        case 0x394174u: goto label_394174;
        case 0x394178u: goto label_394178;
        case 0x39417cu: goto label_39417c;
        case 0x394180u: goto label_394180;
        case 0x394184u: goto label_394184;
        case 0x394188u: goto label_394188;
        case 0x39418cu: goto label_39418c;
        case 0x394190u: goto label_394190;
        case 0x394194u: goto label_394194;
        case 0x394198u: goto label_394198;
        case 0x39419cu: goto label_39419c;
        case 0x3941a0u: goto label_3941a0;
        case 0x3941a4u: goto label_3941a4;
        case 0x3941a8u: goto label_3941a8;
        case 0x3941acu: goto label_3941ac;
        case 0x3941b0u: goto label_3941b0;
        case 0x3941b4u: goto label_3941b4;
        case 0x3941b8u: goto label_3941b8;
        case 0x3941bcu: goto label_3941bc;
        case 0x3941c0u: goto label_3941c0;
        case 0x3941c4u: goto label_3941c4;
        case 0x3941c8u: goto label_3941c8;
        case 0x3941ccu: goto label_3941cc;
        case 0x3941d0u: goto label_3941d0;
        case 0x3941d4u: goto label_3941d4;
        case 0x3941d8u: goto label_3941d8;
        case 0x3941dcu: goto label_3941dc;
        case 0x3941e0u: goto label_3941e0;
        case 0x3941e4u: goto label_3941e4;
        case 0x3941e8u: goto label_3941e8;
        case 0x3941ecu: goto label_3941ec;
        case 0x3941f0u: goto label_3941f0;
        case 0x3941f4u: goto label_3941f4;
        case 0x3941f8u: goto label_3941f8;
        case 0x3941fcu: goto label_3941fc;
        case 0x394200u: goto label_394200;
        case 0x394204u: goto label_394204;
        case 0x394208u: goto label_394208;
        case 0x39420cu: goto label_39420c;
        case 0x394210u: goto label_394210;
        case 0x394214u: goto label_394214;
        case 0x394218u: goto label_394218;
        case 0x39421cu: goto label_39421c;
        case 0x394220u: goto label_394220;
        case 0x394224u: goto label_394224;
        case 0x394228u: goto label_394228;
        case 0x39422cu: goto label_39422c;
        case 0x394230u: goto label_394230;
        case 0x394234u: goto label_394234;
        case 0x394238u: goto label_394238;
        case 0x39423cu: goto label_39423c;
        case 0x394240u: goto label_394240;
        case 0x394244u: goto label_394244;
        case 0x394248u: goto label_394248;
        case 0x39424cu: goto label_39424c;
        case 0x394250u: goto label_394250;
        case 0x394254u: goto label_394254;
        case 0x394258u: goto label_394258;
        case 0x39425cu: goto label_39425c;
        case 0x394260u: goto label_394260;
        case 0x394264u: goto label_394264;
        case 0x394268u: goto label_394268;
        case 0x39426cu: goto label_39426c;
        case 0x394270u: goto label_394270;
        case 0x394274u: goto label_394274;
        case 0x394278u: goto label_394278;
        case 0x39427cu: goto label_39427c;
        case 0x394280u: goto label_394280;
        case 0x394284u: goto label_394284;
        case 0x394288u: goto label_394288;
        case 0x39428cu: goto label_39428c;
        case 0x394290u: goto label_394290;
        case 0x394294u: goto label_394294;
        case 0x394298u: goto label_394298;
        case 0x39429cu: goto label_39429c;
        case 0x3942a0u: goto label_3942a0;
        case 0x3942a4u: goto label_3942a4;
        case 0x3942a8u: goto label_3942a8;
        case 0x3942acu: goto label_3942ac;
        case 0x3942b0u: goto label_3942b0;
        case 0x3942b4u: goto label_3942b4;
        case 0x3942b8u: goto label_3942b8;
        case 0x3942bcu: goto label_3942bc;
        case 0x3942c0u: goto label_3942c0;
        case 0x3942c4u: goto label_3942c4;
        case 0x3942c8u: goto label_3942c8;
        case 0x3942ccu: goto label_3942cc;
        case 0x3942d0u: goto label_3942d0;
        case 0x3942d4u: goto label_3942d4;
        case 0x3942d8u: goto label_3942d8;
        case 0x3942dcu: goto label_3942dc;
        case 0x3942e0u: goto label_3942e0;
        case 0x3942e4u: goto label_3942e4;
        case 0x3942e8u: goto label_3942e8;
        case 0x3942ecu: goto label_3942ec;
        case 0x3942f0u: goto label_3942f0;
        case 0x3942f4u: goto label_3942f4;
        case 0x3942f8u: goto label_3942f8;
        case 0x3942fcu: goto label_3942fc;
        case 0x394300u: goto label_394300;
        case 0x394304u: goto label_394304;
        case 0x394308u: goto label_394308;
        case 0x39430cu: goto label_39430c;
        case 0x394310u: goto label_394310;
        case 0x394314u: goto label_394314;
        case 0x394318u: goto label_394318;
        case 0x39431cu: goto label_39431c;
        case 0x394320u: goto label_394320;
        case 0x394324u: goto label_394324;
        case 0x394328u: goto label_394328;
        case 0x39432cu: goto label_39432c;
        case 0x394330u: goto label_394330;
        case 0x394334u: goto label_394334;
        case 0x394338u: goto label_394338;
        case 0x39433cu: goto label_39433c;
        case 0x394340u: goto label_394340;
        case 0x394344u: goto label_394344;
        case 0x394348u: goto label_394348;
        case 0x39434cu: goto label_39434c;
        case 0x394350u: goto label_394350;
        case 0x394354u: goto label_394354;
        case 0x394358u: goto label_394358;
        case 0x39435cu: goto label_39435c;
        case 0x394360u: goto label_394360;
        case 0x394364u: goto label_394364;
        case 0x394368u: goto label_394368;
        case 0x39436cu: goto label_39436c;
        case 0x394370u: goto label_394370;
        case 0x394374u: goto label_394374;
        case 0x394378u: goto label_394378;
        case 0x39437cu: goto label_39437c;
        case 0x394380u: goto label_394380;
        case 0x394384u: goto label_394384;
        case 0x394388u: goto label_394388;
        case 0x39438cu: goto label_39438c;
        case 0x394390u: goto label_394390;
        case 0x394394u: goto label_394394;
        case 0x394398u: goto label_394398;
        case 0x39439cu: goto label_39439c;
        case 0x3943a0u: goto label_3943a0;
        case 0x3943a4u: goto label_3943a4;
        case 0x3943a8u: goto label_3943a8;
        case 0x3943acu: goto label_3943ac;
        case 0x3943b0u: goto label_3943b0;
        case 0x3943b4u: goto label_3943b4;
        case 0x3943b8u: goto label_3943b8;
        case 0x3943bcu: goto label_3943bc;
        case 0x3943c0u: goto label_3943c0;
        case 0x3943c4u: goto label_3943c4;
        case 0x3943c8u: goto label_3943c8;
        case 0x3943ccu: goto label_3943cc;
        case 0x3943d0u: goto label_3943d0;
        case 0x3943d4u: goto label_3943d4;
        case 0x3943d8u: goto label_3943d8;
        case 0x3943dcu: goto label_3943dc;
        case 0x3943e0u: goto label_3943e0;
        case 0x3943e4u: goto label_3943e4;
        case 0x3943e8u: goto label_3943e8;
        case 0x3943ecu: goto label_3943ec;
        case 0x3943f0u: goto label_3943f0;
        case 0x3943f4u: goto label_3943f4;
        case 0x3943f8u: goto label_3943f8;
        case 0x3943fcu: goto label_3943fc;
        case 0x394400u: goto label_394400;
        case 0x394404u: goto label_394404;
        case 0x394408u: goto label_394408;
        case 0x39440cu: goto label_39440c;
        case 0x394410u: goto label_394410;
        case 0x394414u: goto label_394414;
        case 0x394418u: goto label_394418;
        case 0x39441cu: goto label_39441c;
        case 0x394420u: goto label_394420;
        case 0x394424u: goto label_394424;
        case 0x394428u: goto label_394428;
        case 0x39442cu: goto label_39442c;
        case 0x394430u: goto label_394430;
        case 0x394434u: goto label_394434;
        case 0x394438u: goto label_394438;
        case 0x39443cu: goto label_39443c;
        case 0x394440u: goto label_394440;
        case 0x394444u: goto label_394444;
        case 0x394448u: goto label_394448;
        case 0x39444cu: goto label_39444c;
        case 0x394450u: goto label_394450;
        case 0x394454u: goto label_394454;
        case 0x394458u: goto label_394458;
        case 0x39445cu: goto label_39445c;
        case 0x394460u: goto label_394460;
        case 0x394464u: goto label_394464;
        case 0x394468u: goto label_394468;
        case 0x39446cu: goto label_39446c;
        case 0x394470u: goto label_394470;
        case 0x394474u: goto label_394474;
        case 0x394478u: goto label_394478;
        case 0x39447cu: goto label_39447c;
        case 0x394480u: goto label_394480;
        case 0x394484u: goto label_394484;
        case 0x394488u: goto label_394488;
        case 0x39448cu: goto label_39448c;
        case 0x394490u: goto label_394490;
        case 0x394494u: goto label_394494;
        case 0x394498u: goto label_394498;
        case 0x39449cu: goto label_39449c;
        case 0x3944a0u: goto label_3944a0;
        case 0x3944a4u: goto label_3944a4;
        case 0x3944a8u: goto label_3944a8;
        case 0x3944acu: goto label_3944ac;
        case 0x3944b0u: goto label_3944b0;
        case 0x3944b4u: goto label_3944b4;
        case 0x3944b8u: goto label_3944b8;
        case 0x3944bcu: goto label_3944bc;
        case 0x3944c0u: goto label_3944c0;
        case 0x3944c4u: goto label_3944c4;
        case 0x3944c8u: goto label_3944c8;
        case 0x3944ccu: goto label_3944cc;
        case 0x3944d0u: goto label_3944d0;
        case 0x3944d4u: goto label_3944d4;
        case 0x3944d8u: goto label_3944d8;
        case 0x3944dcu: goto label_3944dc;
        case 0x3944e0u: goto label_3944e0;
        case 0x3944e4u: goto label_3944e4;
        case 0x3944e8u: goto label_3944e8;
        case 0x3944ecu: goto label_3944ec;
        case 0x3944f0u: goto label_3944f0;
        case 0x3944f4u: goto label_3944f4;
        case 0x3944f8u: goto label_3944f8;
        case 0x3944fcu: goto label_3944fc;
        case 0x394500u: goto label_394500;
        case 0x394504u: goto label_394504;
        case 0x394508u: goto label_394508;
        case 0x39450cu: goto label_39450c;
        case 0x394510u: goto label_394510;
        case 0x394514u: goto label_394514;
        case 0x394518u: goto label_394518;
        case 0x39451cu: goto label_39451c;
        case 0x394520u: goto label_394520;
        case 0x394524u: goto label_394524;
        case 0x394528u: goto label_394528;
        case 0x39452cu: goto label_39452c;
        case 0x394530u: goto label_394530;
        case 0x394534u: goto label_394534;
        case 0x394538u: goto label_394538;
        case 0x39453cu: goto label_39453c;
        case 0x394540u: goto label_394540;
        case 0x394544u: goto label_394544;
        case 0x394548u: goto label_394548;
        case 0x39454cu: goto label_39454c;
        case 0x394550u: goto label_394550;
        case 0x394554u: goto label_394554;
        case 0x394558u: goto label_394558;
        case 0x39455cu: goto label_39455c;
        case 0x394560u: goto label_394560;
        case 0x394564u: goto label_394564;
        case 0x394568u: goto label_394568;
        case 0x39456cu: goto label_39456c;
        case 0x394570u: goto label_394570;
        case 0x394574u: goto label_394574;
        case 0x394578u: goto label_394578;
        case 0x39457cu: goto label_39457c;
        case 0x394580u: goto label_394580;
        case 0x394584u: goto label_394584;
        case 0x394588u: goto label_394588;
        case 0x39458cu: goto label_39458c;
        case 0x394590u: goto label_394590;
        case 0x394594u: goto label_394594;
        case 0x394598u: goto label_394598;
        case 0x39459cu: goto label_39459c;
        case 0x3945a0u: goto label_3945a0;
        case 0x3945a4u: goto label_3945a4;
        case 0x3945a8u: goto label_3945a8;
        case 0x3945acu: goto label_3945ac;
        case 0x3945b0u: goto label_3945b0;
        case 0x3945b4u: goto label_3945b4;
        case 0x3945b8u: goto label_3945b8;
        case 0x3945bcu: goto label_3945bc;
        case 0x3945c0u: goto label_3945c0;
        case 0x3945c4u: goto label_3945c4;
        case 0x3945c8u: goto label_3945c8;
        case 0x3945ccu: goto label_3945cc;
        case 0x3945d0u: goto label_3945d0;
        case 0x3945d4u: goto label_3945d4;
        case 0x3945d8u: goto label_3945d8;
        case 0x3945dcu: goto label_3945dc;
        case 0x3945e0u: goto label_3945e0;
        case 0x3945e4u: goto label_3945e4;
        case 0x3945e8u: goto label_3945e8;
        case 0x3945ecu: goto label_3945ec;
        case 0x3945f0u: goto label_3945f0;
        case 0x3945f4u: goto label_3945f4;
        case 0x3945f8u: goto label_3945f8;
        case 0x3945fcu: goto label_3945fc;
        case 0x394600u: goto label_394600;
        case 0x394604u: goto label_394604;
        case 0x394608u: goto label_394608;
        case 0x39460cu: goto label_39460c;
        case 0x394610u: goto label_394610;
        case 0x394614u: goto label_394614;
        case 0x394618u: goto label_394618;
        case 0x39461cu: goto label_39461c;
        case 0x394620u: goto label_394620;
        case 0x394624u: goto label_394624;
        case 0x394628u: goto label_394628;
        case 0x39462cu: goto label_39462c;
        case 0x394630u: goto label_394630;
        case 0x394634u: goto label_394634;
        case 0x394638u: goto label_394638;
        case 0x39463cu: goto label_39463c;
        case 0x394640u: goto label_394640;
        case 0x394644u: goto label_394644;
        case 0x394648u: goto label_394648;
        case 0x39464cu: goto label_39464c;
        case 0x394650u: goto label_394650;
        case 0x394654u: goto label_394654;
        case 0x394658u: goto label_394658;
        case 0x39465cu: goto label_39465c;
        case 0x394660u: goto label_394660;
        case 0x394664u: goto label_394664;
        case 0x394668u: goto label_394668;
        case 0x39466cu: goto label_39466c;
        case 0x394670u: goto label_394670;
        case 0x394674u: goto label_394674;
        case 0x394678u: goto label_394678;
        case 0x39467cu: goto label_39467c;
        case 0x394680u: goto label_394680;
        case 0x394684u: goto label_394684;
        case 0x394688u: goto label_394688;
        case 0x39468cu: goto label_39468c;
        case 0x394690u: goto label_394690;
        case 0x394694u: goto label_394694;
        case 0x394698u: goto label_394698;
        case 0x39469cu: goto label_39469c;
        case 0x3946a0u: goto label_3946a0;
        case 0x3946a4u: goto label_3946a4;
        case 0x3946a8u: goto label_3946a8;
        case 0x3946acu: goto label_3946ac;
        case 0x3946b0u: goto label_3946b0;
        case 0x3946b4u: goto label_3946b4;
        case 0x3946b8u: goto label_3946b8;
        case 0x3946bcu: goto label_3946bc;
        case 0x3946c0u: goto label_3946c0;
        case 0x3946c4u: goto label_3946c4;
        case 0x3946c8u: goto label_3946c8;
        case 0x3946ccu: goto label_3946cc;
        case 0x3946d0u: goto label_3946d0;
        case 0x3946d4u: goto label_3946d4;
        case 0x3946d8u: goto label_3946d8;
        case 0x3946dcu: goto label_3946dc;
        case 0x3946e0u: goto label_3946e0;
        case 0x3946e4u: goto label_3946e4;
        case 0x3946e8u: goto label_3946e8;
        case 0x3946ecu: goto label_3946ec;
        case 0x3946f0u: goto label_3946f0;
        case 0x3946f4u: goto label_3946f4;
        case 0x3946f8u: goto label_3946f8;
        case 0x3946fcu: goto label_3946fc;
        case 0x394700u: goto label_394700;
        case 0x394704u: goto label_394704;
        case 0x394708u: goto label_394708;
        case 0x39470cu: goto label_39470c;
        case 0x394710u: goto label_394710;
        case 0x394714u: goto label_394714;
        case 0x394718u: goto label_394718;
        case 0x39471cu: goto label_39471c;
        case 0x394720u: goto label_394720;
        case 0x394724u: goto label_394724;
        case 0x394728u: goto label_394728;
        case 0x39472cu: goto label_39472c;
        case 0x394730u: goto label_394730;
        case 0x394734u: goto label_394734;
        case 0x394738u: goto label_394738;
        case 0x39473cu: goto label_39473c;
        case 0x394740u: goto label_394740;
        case 0x394744u: goto label_394744;
        case 0x394748u: goto label_394748;
        case 0x39474cu: goto label_39474c;
        case 0x394750u: goto label_394750;
        case 0x394754u: goto label_394754;
        case 0x394758u: goto label_394758;
        case 0x39475cu: goto label_39475c;
        case 0x394760u: goto label_394760;
        case 0x394764u: goto label_394764;
        case 0x394768u: goto label_394768;
        case 0x39476cu: goto label_39476c;
        case 0x394770u: goto label_394770;
        case 0x394774u: goto label_394774;
        case 0x394778u: goto label_394778;
        case 0x39477cu: goto label_39477c;
        case 0x394780u: goto label_394780;
        case 0x394784u: goto label_394784;
        case 0x394788u: goto label_394788;
        case 0x39478cu: goto label_39478c;
        case 0x394790u: goto label_394790;
        case 0x394794u: goto label_394794;
        case 0x394798u: goto label_394798;
        case 0x39479cu: goto label_39479c;
        case 0x3947a0u: goto label_3947a0;
        case 0x3947a4u: goto label_3947a4;
        case 0x3947a8u: goto label_3947a8;
        case 0x3947acu: goto label_3947ac;
        case 0x3947b0u: goto label_3947b0;
        case 0x3947b4u: goto label_3947b4;
        case 0x3947b8u: goto label_3947b8;
        case 0x3947bcu: goto label_3947bc;
        case 0x3947c0u: goto label_3947c0;
        case 0x3947c4u: goto label_3947c4;
        case 0x3947c8u: goto label_3947c8;
        case 0x3947ccu: goto label_3947cc;
        case 0x3947d0u: goto label_3947d0;
        case 0x3947d4u: goto label_3947d4;
        case 0x3947d8u: goto label_3947d8;
        case 0x3947dcu: goto label_3947dc;
        case 0x3947e0u: goto label_3947e0;
        case 0x3947e4u: goto label_3947e4;
        case 0x3947e8u: goto label_3947e8;
        case 0x3947ecu: goto label_3947ec;
        case 0x3947f0u: goto label_3947f0;
        case 0x3947f4u: goto label_3947f4;
        case 0x3947f8u: goto label_3947f8;
        case 0x3947fcu: goto label_3947fc;
        case 0x394800u: goto label_394800;
        case 0x394804u: goto label_394804;
        case 0x394808u: goto label_394808;
        case 0x39480cu: goto label_39480c;
        default: break;
    }

    ctx->pc = 0x394050u;

label_394050:
    // 0x394050: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x394050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_394054:
    // 0x394054: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x394054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_394058:
    // 0x394058: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x394058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_39405c:
    // 0x39405c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x39405cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_394060:
    // 0x394060: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x394060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_394064:
    // 0x394064: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x394064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_394068:
    // 0x394068: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x394068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_39406c:
    // 0x39406c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x39406cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_394070:
    // 0x394070: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x394070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_394074:
    // 0x394074: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x394074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_394078:
    // 0x394078: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x394078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_39407c:
    // 0x39407c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39407cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_394080:
    // 0x394080: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x394080u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_394084:
    // 0x394084: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x394084u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_394088:
    // 0x394088: 0x8e620118  lw          $v0, 0x118($s3)
    ctx->pc = 0x394088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_39408c:
    // 0x39408c: 0x1040017d  beqz        $v0, . + 4 + (0x17D << 2)
label_394090:
    if (ctx->pc == 0x394090u) {
        ctx->pc = 0x394090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39408Cu;
        // 0x394090: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394094u;
        goto label_394094;
    }
    ctx->pc = 0x39408Cu;
    {
        const bool branch_taken_0x39408c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39408Cu;
        // 0x394090: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39408c) {
            ctx->pc = 0x394684u;
            goto label_394684;
        }
    }
    ctx->pc = 0x394094u;
label_394094:
    // 0x394094: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x394094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_394098:
    // 0x394098: 0xc0e5476  jal         func_3951D8
label_39409c:
    if (ctx->pc == 0x39409Cu) {
        ctx->pc = 0x39409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394098u;
        // 0x39409c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3940A0u;
        goto label_3940a0;
    }
    ctx->pc = 0x394098u;
    SET_GPR_U32(ctx, 31, 0x3940A0u);
    ctx->pc = 0x39409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394098u;
    // 0x39409c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3951D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951D8u, 0x394098u, 0x3940A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3940A0u;
label_3940a0:
    // 0x3940a0: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x3940a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_3940a4:
    // 0x3940a4: 0xc08a61a  jal         func_229868
label_3940a8:
    if (ctx->pc == 0x3940A8u) {
        ctx->pc = 0x3940A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940A4u;
        // 0x3940a8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3940ACu;
        goto label_3940ac;
    }
    ctx->pc = 0x3940A4u;
    SET_GPR_U32(ctx, 31, 0x3940ACu);
    ctx->pc = 0x3940A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3940A4u;
    // 0x3940a8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3940A4u, 0x3940ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3940ACu;
label_3940ac:
    // 0x3940ac: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x3940acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_3940b0:
    // 0x3940b0: 0xc0e3d62  jal         func_38F588
label_3940b4:
    if (ctx->pc == 0x3940B4u) {
        ctx->pc = 0x3940B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940B0u;
        // 0x3940b4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3940B8u;
        goto label_3940b8;
    }
    ctx->pc = 0x3940B0u;
    SET_GPR_U32(ctx, 31, 0x3940B8u);
    ctx->pc = 0x3940B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3940B0u;
    // 0x3940b4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F588u, 0x3940B0u, 0x3940B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3940B8u;
label_3940b8:
    // 0x3940b8: 0x8e042c04  lw          $a0, 0x2C04($s0)
    ctx->pc = 0x3940b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11268)));
label_3940bc:
    // 0x3940bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3940bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3940c0:
    // 0x3940c0: 0xc0e44cc  jal         func_391330
label_3940c4:
    if (ctx->pc == 0x3940C4u) {
        ctx->pc = 0x3940C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940C0u;
        // 0x3940c4: 0x96650112  lhu         $a1, 0x112($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3940C8u;
        goto label_3940c8;
    }
    ctx->pc = 0x3940C0u;
    SET_GPR_U32(ctx, 31, 0x3940C8u);
    ctx->pc = 0x3940C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3940C0u;
    // 0x3940c4: 0x96650112  lhu         $a1, 0x112($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3940C0u, 0x3940C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3940C8u;
label_3940c8:
    // 0x3940c8: 0x94420058  lhu         $v0, 0x58($v0)
    ctx->pc = 0x3940c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_3940cc:
    // 0x3940cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_3940d0:
    if (ctx->pc == 0x3940D0u) {
        ctx->pc = 0x3940D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940CCu;
        // 0x3940d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3940D4u;
        goto label_3940d4;
    }
    ctx->pc = 0x3940CCu;
    {
        const bool branch_taken_0x3940cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3940D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940CCu;
        // 0x3940d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3940cc) {
            ctx->pc = 0x3940E8u;
            goto label_3940e8;
        }
    }
    ctx->pc = 0x3940D4u;
label_3940d4:
    // 0x3940d4: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x3940d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3940d8:
    // 0x3940d8: 0x0  nop
    ctx->pc = 0x3940d8u;
    // NOP
label_3940dc:
    // 0x3940dc: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x3940dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_3940e0:
    // 0x3940e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3940e4:
    if (ctx->pc == 0x3940E4u) {
        ctx->pc = 0x3940E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940E0u;
        // 0x3940e4: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3940E8u;
        goto label_3940e8;
    }
    ctx->pc = 0x3940E0u;
    {
        const bool branch_taken_0x3940e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3940E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940E0u;
        // 0x3940e4: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3940e0) {
            ctx->pc = 0x394104u;
            goto label_394104;
        }
    }
    ctx->pc = 0x3940E8u;
label_3940e8:
    // 0x3940e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3940e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3940ec:
    // 0x3940ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3940ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3940f0:
    // 0x3940f0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x3940f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3940f4:
    // 0x3940f4: 0x0  nop
    ctx->pc = 0x3940f4u;
    // NOP
label_3940f8:
    // 0x3940f8: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x3940f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_3940fc:
    // 0x3940fc: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x3940fcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_394100:
    // 0x394100: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x394100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_394104:
    // 0x394104: 0xc0e2612  jal         func_389848
label_394108:
    if (ctx->pc == 0x394108u) {
        ctx->pc = 0x394108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394104u;
        // 0x394108: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39410Cu;
        goto label_39410c;
    }
    ctx->pc = 0x394104u;
    SET_GPR_U32(ctx, 31, 0x39410Cu);
    ctx->pc = 0x394108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394104u;
    // 0x394108: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x394104u, 0x39410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39410Cu;
label_39410c:
    // 0x39410c: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x39410cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_394110:
    // 0x394110: 0xc0e57ce  jal         func_395F38
label_394114:
    if (ctx->pc == 0x394114u) {
        ctx->pc = 0x394114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394110u;
        // 0x394114: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394118u;
        goto label_394118;
    }
    ctx->pc = 0x394110u;
    SET_GPR_U32(ctx, 31, 0x394118u);
    ctx->pc = 0x394114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394110u;
    // 0x394114: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x394110u, 0x394118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394118u;
label_394118:
    // 0x394118: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x394118u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39411c:
    // 0x39411c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_394120:
    if (ctx->pc == 0x394120u) {
        ctx->pc = 0x394124u;
        goto label_394124;
    }
    ctx->pc = 0x39411Cu;
    {
        const bool branch_taken_0x39411c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39411c) {
            ctx->pc = 0x394144u;
            goto label_394144;
        }
    }
    ctx->pc = 0x394124u;
label_394124:
    // 0x394124: 0x9062010d  lbu         $v0, 0x10D($v1)
    ctx->pc = 0x394124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 269)));
label_394128:
    // 0x394128: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39412c:
    if (ctx->pc == 0x39412Cu) {
        ctx->pc = 0x39412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394128u;
        // 0x39412c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394130u;
        goto label_394130;
    }
    ctx->pc = 0x394128u;
    {
        const bool branch_taken_0x394128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394128u;
        // 0x39412c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394128) {
            ctx->pc = 0x39413Cu;
            goto label_39413c;
        }
    }
    ctx->pc = 0x394130u;
label_394130:
    // 0x394130: 0x9062010e  lbu         $v0, 0x10E($v1)
    ctx->pc = 0x394130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 270)));
label_394134:
    // 0x394134: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_394138:
    if (ctx->pc == 0x394138u) {
        ctx->pc = 0x394138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394134u;
        // 0x394138: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39413Cu;
        goto label_39413c;
    }
    ctx->pc = 0x394134u;
    {
        const bool branch_taken_0x394134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394134u;
        // 0x394138: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394134) {
            ctx->pc = 0x394144u;
            goto label_394144;
        }
    }
    ctx->pc = 0x39413Cu;
label_39413c:
    // 0x39413c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x39413cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_394140:
    // 0x394140: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x394140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_394144:
    // 0x394144: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_394148:
    if (ctx->pc == 0x394148u) {
        ctx->pc = 0x394148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394144u;
        // 0x394148: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39414Cu;
        goto label_39414c;
    }
    ctx->pc = 0x394144u;
    {
        const bool branch_taken_0x394144 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x394148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394144u;
        // 0x394148: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394144) {
            ctx->pc = 0x394160u;
            goto label_394160;
        }
    }
    ctx->pc = 0x39414Cu;
label_39414c:
    // 0x39414c: 0xc088ade  jal         func_222B78
label_394150:
    if (ctx->pc == 0x394150u) {
        ctx->pc = 0x394150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39414Cu;
        // 0x394150: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394154u;
        goto label_394154;
    }
    ctx->pc = 0x39414Cu;
    SET_GPR_U32(ctx, 31, 0x394154u);
    ctx->pc = 0x394150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39414Cu;
    // 0x394150: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x39414Cu, 0x394154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394154u;
label_394154:
    // 0x394154: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x394154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_394158:
    // 0x394158: 0x10000002  b           . + 4 + (0x2 << 2)
label_39415c:
    if (ctx->pc == 0x39415Cu) {
        ctx->pc = 0x39415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394158u;
        // 0x39415c: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x394160u;
        goto label_394160;
    }
    ctx->pc = 0x394158u;
    {
        const bool branch_taken_0x394158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394158u;
        // 0x39415c: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394158) {
            ctx->pc = 0x394164u;
            goto label_394164;
        }
    }
    ctx->pc = 0x394160u;
label_394160:
    // 0x394160: 0x8e76011c  lw          $s6, 0x11C($s3)
    ctx->pc = 0x394160u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_394164:
    // 0x394164: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_394168:
    if (ctx->pc == 0x394168u) {
        ctx->pc = 0x394168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394164u;
        // 0x394168: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39416Cu;
        goto label_39416c;
    }
    ctx->pc = 0x394164u;
    {
        const bool branch_taken_0x394164 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x394168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394164u;
        // 0x394168: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394164) {
            ctx->pc = 0x394184u;
            goto label_394184;
        }
    }
    ctx->pc = 0x39416Cu;
label_39416c:
    // 0x39416c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_394170:
    if (ctx->pc == 0x394170u) {
        ctx->pc = 0x394170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39416Cu;
        // 0x394170: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394174u;
        goto label_394174;
    }
    ctx->pc = 0x39416Cu;
    {
        const bool branch_taken_0x39416c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x394170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39416Cu;
        // 0x394170: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39416c) {
            ctx->pc = 0x394188u;
            goto label_394188;
        }
    }
    ctx->pc = 0x394174u;
label_394174:
    // 0x394174: 0x8ea20568  lw          $v0, 0x568($s5)
    ctx->pc = 0x394174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1384)));
label_394178:
    // 0x394178: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_39417c:
    if (ctx->pc == 0x39417Cu) {
        ctx->pc = 0x39417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394178u;
        // 0x39417c: 0x7a820050  lq          $v0, 0x50($s4) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394180u;
        goto label_394180;
    }
    ctx->pc = 0x394178u;
    {
        const bool branch_taken_0x394178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394178) {
            ctx->pc = 0x39417Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394178u;
            // 0x39417c: 0x7a820050  lq          $v0, 0x50($s4) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39419Cu;
            goto label_39419c;
        }
    }
    ctx->pc = 0x394180u;
label_394180:
    // 0x394180: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x394180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_394184:
    // 0x394184: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x394184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_394188:
    // 0x394188: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x394188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39418c:
    // 0x39418c: 0xc0e4cb2  jal         func_3932C8
label_394190:
    if (ctx->pc == 0x394190u) {
        ctx->pc = 0x394190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39418Cu;
        // 0x394190: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394194u;
        goto label_394194;
    }
    ctx->pc = 0x39418Cu;
    SET_GPR_U32(ctx, 31, 0x394194u);
    ctx->pc = 0x394190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39418Cu;
    // 0x394190: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3932C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3932C8u, 0x39418Cu, 0x394194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394194u;
label_394194:
    // 0x394194: 0x7a820050  lq          $v0, 0x50($s4)
    ctx->pc = 0x394194u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 80)));
label_394198:
    // 0x394198: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x394198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39419c:
    // 0x39419c: 0xc0e87c0  jal         func_3A1F00
label_3941a0:
    if (ctx->pc == 0x3941A0u) {
        ctx->pc = 0x3941A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39419Cu;
        // 0x3941a0: 0x7e6200b0  sq          $v0, 0xB0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3941A4u;
        goto label_3941a4;
    }
    ctx->pc = 0x39419Cu;
    SET_GPR_U32(ctx, 31, 0x3941A4u);
    ctx->pc = 0x3941A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39419Cu;
    // 0x3941a0: 0x7e6200b0  sq          $v0, 0xB0($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x39419Cu, 0x3941A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3941A4u;
label_3941a4:
    // 0x3941a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3941a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3941a8:
    // 0x3941a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3941a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3941ac:
    // 0x3941ac: 0x7a820050  lq          $v0, 0x50($s4)
    ctx->pc = 0x3941acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 80)));
label_3941b0:
    // 0x3941b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3941b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3941b4:
    // 0x3941b4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3941b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3941b8:
    // 0x3941b8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3941b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3941bc:
    // 0x3941bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3941bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3941c0:
    // 0x3941c0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3941c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3941c4:
    // 0x3941c4: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x3941c4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_3941c8:
    // 0x3941c8: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x3941c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3941cc:
    // 0x3941cc: 0xc0e85a2  jal         func_3A1688
label_3941d0:
    if (ctx->pc == 0x3941D0u) {
        ctx->pc = 0x3941D4u;
        goto label_3941d4;
    }
    ctx->pc = 0x3941CCu;
    SET_GPR_U32(ctx, 31, 0x3941D4u);
    ctx->pc = 0x3A1688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1688u, 0x3941CCu, 0x3941D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3941D4u;
label_3941d4:
    // 0x3941d4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3941d4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3941d8:
    // 0x3941d8: 0x7a6200b0  lq          $v0, 0xB0($s3)
    ctx->pc = 0x3941d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 176)));
label_3941dc:
    // 0x3941dc: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x3941dcu;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_3941e0:
    // 0x3941e0: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x3941e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3941e4:
    // 0x3941e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3941e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3941e8:
    // 0x3941e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3941e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3941ec:
    // 0x3941ec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3941ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3941f0:
    // 0x3941f0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3941f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3941f4:
    // 0x3941f4: 0x7e6200b0  sq          $v0, 0xB0($s3)
    ctx->pc = 0x3941f4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 176), GPR_VEC(ctx, 2));
label_3941f8:
    // 0x3941f8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3941f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3941fc:
    // 0x3941fc: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x3941fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_394200:
    // 0x394200: 0x50a000d3  beql        $a1, $zero, . + 4 + (0xD3 << 2)
label_394204:
    if (ctx->pc == 0x394204u) {
        ctx->pc = 0x394204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394200u;
        // 0x394204: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394208u;
        goto label_394208;
    }
    ctx->pc = 0x394200u;
    {
        const bool branch_taken_0x394200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x394200) {
            ctx->pc = 0x394204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394200u;
            // 0x394204: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394550u;
            goto label_394550;
        }
    }
    ctx->pc = 0x394208u;
label_394208:
    // 0x394208: 0x8e660118  lw          $a2, 0x118($s3)
    ctx->pc = 0x394208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_39420c:
    // 0x39420c: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x39420cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_394210:
    // 0x394210: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x394210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_394214:
    // 0x394214: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x394214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_394218:
    // 0x394218: 0x40f809  jalr        $v0
label_39421c:
    if (ctx->pc == 0x39421Cu) {
        ctx->pc = 0x39421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394218u;
        // 0x39421c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394220u;
        goto label_394220;
    }
    ctx->pc = 0x394218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x394220u);
        ctx->pc = 0x39421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394218u;
        // 0x39421c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394218u, 0x394220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394220u;
label_394220:
    // 0x394220: 0x544000cb  bnel        $v0, $zero, . + 4 + (0xCB << 2)
label_394224:
    if (ctx->pc == 0x394224u) {
        ctx->pc = 0x394224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394220u;
        // 0x394224: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394228u;
        goto label_394228;
    }
    ctx->pc = 0x394220u;
    {
        const bool branch_taken_0x394220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394220) {
            ctx->pc = 0x394224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394220u;
            // 0x394224: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394550u;
            goto label_394550;
        }
    }
    ctx->pc = 0x394228u;
label_394228:
    // 0x394228: 0x13c0001c  beqz        $fp, . + 4 + (0x1C << 2)
label_39422c:
    if (ctx->pc == 0x39422Cu) {
        ctx->pc = 0x394230u;
        goto label_394230;
    }
    ctx->pc = 0x394228u;
    {
        const bool branch_taken_0x394228 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x394228) {
            ctx->pc = 0x39429Cu;
            goto label_39429c;
        }
    }
    ctx->pc = 0x394230u;
label_394230:
    // 0x394230: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x394230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_394234:
    // 0x394234: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x394234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_394238:
    // 0x394238: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x394238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_39423c:
    // 0x39423c: 0x40f809  jalr        $v0
label_394240:
    if (ctx->pc == 0x394240u) {
        ctx->pc = 0x394240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39423Cu;
        // 0x394240: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394244u;
        goto label_394244;
    }
    ctx->pc = 0x39423Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x394244u);
        ctx->pc = 0x394240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39423Cu;
        // 0x394240: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39423Cu, 0x394244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394244u;
label_394244:
    // 0x394244: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_394248:
    if (ctx->pc == 0x394248u) {
        ctx->pc = 0x39424Cu;
        goto label_39424c;
    }
    ctx->pc = 0x394244u;
    {
        const bool branch_taken_0x394244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x394244) {
            ctx->pc = 0x39429Cu;
            goto label_39429c;
        }
    }
    ctx->pc = 0x39424Cu;
label_39424c:
    // 0x39424c: 0x8fc200d4  lw          $v0, 0xD4($fp)
    ctx->pc = 0x39424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 212)));
label_394250:
    // 0x394250: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_394254:
    if (ctx->pc == 0x394254u) {
        ctx->pc = 0x394254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394250u;
        // 0x394254: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394258u;
        goto label_394258;
    }
    ctx->pc = 0x394250u;
    {
        const bool branch_taken_0x394250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394250u;
        // 0x394254: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394250) {
            ctx->pc = 0x39429Cu;
            goto label_39429c;
        }
    }
    ctx->pc = 0x394258u;
label_394258:
    // 0x394258: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x394258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39425c:
    // 0x39425c: 0xc0e4a34  jal         func_3928D0
label_394260:
    if (ctx->pc == 0x394260u) {
        ctx->pc = 0x394260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39425Cu;
        // 0x394260: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394264u;
        goto label_394264;
    }
    ctx->pc = 0x39425Cu;
    SET_GPR_U32(ctx, 31, 0x394264u);
    ctx->pc = 0x394260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39425Cu;
    // 0x394260: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3928D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3928D0u, 0x39425Cu, 0x394264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394264u;
label_394264:
    // 0x394264: 0x1440015b  bnez        $v0, . + 4 + (0x15B << 2)
label_394268:
    if (ctx->pc == 0x394268u) {
        ctx->pc = 0x394268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394264u;
        // 0x394268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39426Cu;
        goto label_39426c;
    }
    ctx->pc = 0x394264u;
    {
        const bool branch_taken_0x394264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394264u;
        // 0x394268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394264) {
            ctx->pc = 0x3947D4u;
            goto label_3947d4;
        }
    }
    ctx->pc = 0x39426Cu;
label_39426c:
    // 0x39426c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39426cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_394270:
    // 0x394270: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x394270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_394274:
    // 0x394274: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x394274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_394278:
    // 0x394278: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x394278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39427c:
    // 0x39427c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x39427cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_394280:
    // 0x394280: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x394280u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394284:
    // 0x394284: 0xc0e4ae2  jal         func_392B88
label_394288:
    if (ctx->pc == 0x394288u) {
        ctx->pc = 0x394288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394284u;
        // 0x394288: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39428Cu;
        goto label_39428c;
    }
    ctx->pc = 0x394284u;
    SET_GPR_U32(ctx, 31, 0x39428Cu);
    ctx->pc = 0x394288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394284u;
    // 0x394288: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x392B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392B88u, 0x394284u, 0x39428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39428Cu;
label_39428c:
    // 0x39428c: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
label_394290:
    if (ctx->pc == 0x394290u) {
        ctx->pc = 0x394290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39428Cu;
        // 0x394290: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394294u;
        goto label_394294;
    }
    ctx->pc = 0x39428Cu;
    {
        const bool branch_taken_0x39428c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39428Cu;
        // 0x394290: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39428c) {
            ctx->pc = 0x394504u;
            goto label_394504;
        }
    }
    ctx->pc = 0x394294u;
label_394294:
    // 0x394294: 0x10000150  b           . + 4 + (0x150 << 2)
label_394298:
    if (ctx->pc == 0x394298u) {
        ctx->pc = 0x394298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394294u;
        // 0x394298: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39429Cu;
        goto label_39429c;
    }
    ctx->pc = 0x394294u;
    {
        const bool branch_taken_0x394294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394294u;
        // 0x394298: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394294) {
            ctx->pc = 0x3947D8u;
            goto label_3947d8;
        }
    }
    ctx->pc = 0x39429Cu;
label_39429c:
    // 0x39429c: 0x12e0008b  beqz        $s7, . + 4 + (0x8B << 2)
label_3942a0:
    if (ctx->pc == 0x3942A0u) {
        ctx->pc = 0x3942A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39429Cu;
        // 0x3942a0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3942A4u;
        goto label_3942a4;
    }
    ctx->pc = 0x39429Cu;
    {
        const bool branch_taken_0x39429c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3942A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39429Cu;
        // 0x3942a0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39429c) {
            ctx->pc = 0x3944CCu;
            goto label_3944cc;
        }
    }
    ctx->pc = 0x3942A4u;
label_3942a4:
    // 0x3942a4: 0x52a00005  beql        $s5, $zero, . + 4 + (0x5 << 2)
label_3942a8:
    if (ctx->pc == 0x3942A8u) {
        ctx->pc = 0x3942A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942A4u;
        // 0x3942a8: 0x9262010d  lbu         $v0, 0x10D($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3942ACu;
        goto label_3942ac;
    }
    ctx->pc = 0x3942A4u;
    {
        const bool branch_taken_0x3942a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x3942a4) {
            ctx->pc = 0x3942A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3942A4u;
            // 0x3942a8: 0x9262010d  lbu         $v0, 0x10D($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3942BCu;
            goto label_3942bc;
        }
    }
    ctx->pc = 0x3942ACu;
label_3942ac:
    // 0x3942ac: 0x8ea20568  lw          $v0, 0x568($s5)
    ctx->pc = 0x3942acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1384)));
label_3942b0:
    // 0x3942b0: 0x54400059  bnel        $v0, $zero, . + 4 + (0x59 << 2)
label_3942b4:
    if (ctx->pc == 0x3942B4u) {
        ctx->pc = 0x3942B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942B0u;
        // 0x3942b4: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3942B8u;
        goto label_3942b8;
    }
    ctx->pc = 0x3942B0u;
    {
        const bool branch_taken_0x3942b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3942b0) {
            ctx->pc = 0x3942B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3942B0u;
            // 0x3942b4: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394418u;
            goto label_394418;
        }
    }
    ctx->pc = 0x3942B8u;
label_3942b8:
    // 0x3942b8: 0x9262010d  lbu         $v0, 0x10D($s3)
    ctx->pc = 0x3942b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_3942bc:
    // 0x3942bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3942c0:
    if (ctx->pc == 0x3942C0u) {
        ctx->pc = 0x3942C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942BCu;
        // 0x3942c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3942C4u;
        goto label_3942c4;
    }
    ctx->pc = 0x3942BCu;
    {
        const bool branch_taken_0x3942bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3942C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942BCu;
        // 0x3942c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3942bc) {
            ctx->pc = 0x3942D0u;
            goto label_3942d0;
        }
    }
    ctx->pc = 0x3942C4u;
label_3942c4:
    // 0x3942c4: 0x9262010e  lbu         $v0, 0x10E($s3)
    ctx->pc = 0x3942c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 270)));
label_3942c8:
    // 0x3942c8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3942cc:
    if (ctx->pc == 0x3942CCu) {
        ctx->pc = 0x3942D0u;
        goto label_3942d0;
    }
    ctx->pc = 0x3942C8u;
    {
        const bool branch_taken_0x3942c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3942c8) {
            ctx->pc = 0x3942D4u;
            goto label_3942d4;
        }
    }
    ctx->pc = 0x3942D0u;
label_3942d0:
    // 0x3942d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3942d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3942d4:
    // 0x3942d4: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
label_3942d8:
    if (ctx->pc == 0x3942D8u) {
        ctx->pc = 0x3942D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942D4u;
        // 0x3942d8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3942DCu;
        goto label_3942dc;
    }
    ctx->pc = 0x3942D4u;
    {
        const bool branch_taken_0x3942d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3942D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942D4u;
        // 0x3942d8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3942d4) {
            ctx->pc = 0x3943ACu;
            goto label_3943ac;
        }
    }
    ctx->pc = 0x3942DCu;
label_3942dc:
    // 0x3942dc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3942dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3942e0:
    // 0x3942e0: 0x8ca42c04  lw          $a0, 0x2C04($a1)
    ctx->pc = 0x3942e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11268)));
label_3942e4:
    // 0x3942e4: 0x26910090  addiu       $s1, $s4, 0x90
    ctx->pc = 0x3942e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_3942e8:
    // 0x3942e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3942e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3942ec:
    // 0x3942ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3942ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3942f0:
    // 0x3942f0: 0xc0e44cc  jal         func_391330
label_3942f4:
    if (ctx->pc == 0x3942F4u) {
        ctx->pc = 0x3942F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942F0u;
        // 0x3942f4: 0x96650112  lhu         $a1, 0x112($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3942F8u;
        goto label_3942f8;
    }
    ctx->pc = 0x3942F0u;
    SET_GPR_U32(ctx, 31, 0x3942F8u);
    ctx->pc = 0x3942F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3942F0u;
    // 0x3942f4: 0x96650112  lhu         $a1, 0x112($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3942F0u, 0x3942F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3942F8u;
label_3942f8:
    // 0x3942f8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3942f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3942fc:
    // 0x3942fc: 0x96650112  lhu         $a1, 0x112($s3)
    ctx->pc = 0x3942fcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
label_394300:
    // 0x394300: 0x8c642c04  lw          $a0, 0x2C04($v1)
    ctx->pc = 0x394300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
label_394304:
    // 0x394304: 0xc0e44cc  jal         func_391330
label_394308:
    if (ctx->pc == 0x394308u) {
        ctx->pc = 0x394308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394304u;
        // 0x394308: 0x90500064  lbu         $s0, 0x64($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39430Cu;
        goto label_39430c;
    }
    ctx->pc = 0x394304u;
    SET_GPR_U32(ctx, 31, 0x39430Cu);
    ctx->pc = 0x394308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394304u;
    // 0x394308: 0x90500064  lbu         $s0, 0x64($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x394304u, 0x39430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39430Cu;
label_39430c:
    // 0x39430c: 0x90460064  lbu         $a2, 0x64($v0)
    ctx->pc = 0x39430cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_394310:
    // 0x394310: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x394310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394314:
    // 0x394314: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x394314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_394318:
    // 0x394318: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x394318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39431c:
    // 0x39431c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x39431cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_394320:
    // 0x394320: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x394320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_394324:
    // 0x394324: 0xc04420c  jal         func_110830
label_394328:
    if (ctx->pc == 0x394328u) {
        ctx->pc = 0x394328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394324u;
        // 0x394328: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39432Cu;
        goto label_39432c;
    }
    ctx->pc = 0x394324u;
    SET_GPR_U32(ctx, 31, 0x39432Cu);
    ctx->pc = 0x394328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394324u;
    // 0x394328: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x394324u, 0x39432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39432Cu;
label_39432c:
    // 0x39432c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x39432cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_394330:
    // 0x394330: 0x8ca42c04  lw          $a0, 0x2C04($a1)
    ctx->pc = 0x394330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11268)));
label_394334:
    // 0x394334: 0xc0e44cc  jal         func_391330
label_394338:
    if (ctx->pc == 0x394338u) {
        ctx->pc = 0x394338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394334u;
        // 0x394338: 0x96650112  lhu         $a1, 0x112($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39433Cu;
        goto label_39433c;
    }
    ctx->pc = 0x394334u;
    SET_GPR_U32(ctx, 31, 0x39433Cu);
    ctx->pc = 0x394338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394334u;
    // 0x394338: 0x96650112  lhu         $a1, 0x112($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x394334u, 0x39433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39433Cu;
label_39433c:
    // 0x39433c: 0x90450064  lbu         $a1, 0x64($v0)
    ctx->pc = 0x39433cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_394340:
    // 0x394340: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x394340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_394344:
    // 0x394344: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x394344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_394348:
    // 0x394348: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x394348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39434c:
    // 0x39434c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x39434cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_394350:
    // 0x394350: 0xc04420c  jal         func_110830
label_394354:
    if (ctx->pc == 0x394354u) {
        ctx->pc = 0x394354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394350u;
        // 0x394354: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394358u;
        goto label_394358;
    }
    ctx->pc = 0x394350u;
    SET_GPR_U32(ctx, 31, 0x394358u);
    ctx->pc = 0x394354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394350u;
    // 0x394354: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x394350u, 0x394358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394358u;
label_394358:
    // 0x394358: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x394358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_39435c:
    // 0x39435c: 0x96650112  lhu         $a1, 0x112($s3)
    ctx->pc = 0x39435cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
label_394360:
    // 0x394360: 0xc0e44cc  jal         func_391330
label_394364:
    if (ctx->pc == 0x394364u) {
        ctx->pc = 0x394364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394360u;
        // 0x394364: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394368u;
        goto label_394368;
    }
    ctx->pc = 0x394360u;
    SET_GPR_U32(ctx, 31, 0x394368u);
    ctx->pc = 0x394364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394360u;
    // 0x394364: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x394360u, 0x394368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394368u;
label_394368:
    // 0x394368: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x394368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
label_39436c:
    // 0x39436c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x39436cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_394370:
    // 0x394370: 0x90450064  lbu         $a1, 0x64($v0)
    ctx->pc = 0x394370u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_394374:
    // 0x394374: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x394374u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_394378:
    // 0x394378: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x394378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_39437c:
    // 0x39437c: 0xc04420c  jal         func_110830
label_394380:
    if (ctx->pc == 0x394380u) {
        ctx->pc = 0x394380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39437Cu;
        // 0x394380: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394384u;
        goto label_394384;
    }
    ctx->pc = 0x39437Cu;
    SET_GPR_U32(ctx, 31, 0x394384u);
    ctx->pc = 0x394380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39437Cu;
    // 0x394380: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x39437Cu, 0x394384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394384u;
label_394384:
    // 0x394384: 0x52c00024  beql        $s6, $zero, . + 4 + (0x24 << 2)
label_394388:
    if (ctx->pc == 0x394388u) {
        ctx->pc = 0x394388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394384u;
        // 0x394388: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39438Cu;
        goto label_39438c;
    }
    ctx->pc = 0x394384u;
    {
        const bool branch_taken_0x394384 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x394384) {
            ctx->pc = 0x394388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394384u;
            // 0x394388: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394418u;
            goto label_394418;
        }
    }
    ctx->pc = 0x39438Cu;
label_39438c:
    // 0x39438c: 0x8e860040  lw          $a2, 0x40($s4)
    ctx->pc = 0x39438cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_394390:
    // 0x394390: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x394390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_394394:
    // 0x394394: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x394394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_394398:
    // 0x394398: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x394398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39439c:
    // 0x39439c: 0xc0a4daa  jal         func_2936A8
label_3943a0:
    if (ctx->pc == 0x3943A0u) {
        ctx->pc = 0x3943A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39439Cu;
        // 0x3943a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3943A4u;
        goto label_3943a4;
    }
    ctx->pc = 0x39439Cu;
    SET_GPR_U32(ctx, 31, 0x3943A4u);
    ctx->pc = 0x3943A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39439Cu;
    // 0x3943a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2936A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2936A8u, 0x39439Cu, 0x3943A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3943A4u;
label_3943a4:
    // 0x3943a4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3943a8:
    if (ctx->pc == 0x3943A8u) {
        ctx->pc = 0x3943A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3943A4u;
        // 0x3943a8: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3943ACu;
        goto label_3943ac;
    }
    ctx->pc = 0x3943A4u;
    {
        const bool branch_taken_0x3943a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3943A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3943A4u;
        // 0x3943a8: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3943a4) {
            ctx->pc = 0x394418u;
            goto label_394418;
        }
    }
    ctx->pc = 0x3943ACu;
label_3943ac:
    // 0x3943ac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3943acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3943b0:
    // 0x3943b0: 0x96650112  lhu         $a1, 0x112($s3)
    ctx->pc = 0x3943b0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
label_3943b4:
    // 0x3943b4: 0x8c642c04  lw          $a0, 0x2C04($v1)
    ctx->pc = 0x3943b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
label_3943b8:
    // 0x3943b8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3943b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3943bc:
    // 0x3943bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3943bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3943c0:
    // 0x3943c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3943c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3943c4:
    // 0x3943c4: 0xc0e44cc  jal         func_391330
label_3943c8:
    if (ctx->pc == 0x3943C8u) {
        ctx->pc = 0x3943C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3943C4u;
        // 0x3943c8: 0x26910090  addiu       $s1, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3943CCu;
        goto label_3943cc;
    }
    ctx->pc = 0x3943C4u;
    SET_GPR_U32(ctx, 31, 0x3943CCu);
    ctx->pc = 0x3943C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3943C4u;
    // 0x3943c8: 0x26910090  addiu       $s1, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3943C4u, 0x3943CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3943CCu;
label_3943cc:
    // 0x3943cc: 0x90450064  lbu         $a1, 0x64($v0)
    ctx->pc = 0x3943ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_3943d0:
    // 0x3943d0: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x3943d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3943d4:
    // 0x3943d4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x3943d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_3943d8:
    // 0x3943d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3943d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3943dc:
    // 0x3943dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3943dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3943e0:
    // 0x3943e0: 0xc04420c  jal         func_110830
label_3943e4:
    if (ctx->pc == 0x3943E4u) {
        ctx->pc = 0x3943E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3943E0u;
        // 0x3943e4: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3943E8u;
        goto label_3943e8;
    }
    ctx->pc = 0x3943E0u;
    SET_GPR_U32(ctx, 31, 0x3943E8u);
    ctx->pc = 0x3943E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3943E0u;
    // 0x3943e4: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x3943E0u, 0x3943E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3943E8u;
label_3943e8:
    // 0x3943e8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3943e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3943ec:
    // 0x3943ec: 0x8ca42c04  lw          $a0, 0x2C04($a1)
    ctx->pc = 0x3943ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11268)));
label_3943f0:
    // 0x3943f0: 0xc0e44cc  jal         func_391330
label_3943f4:
    if (ctx->pc == 0x3943F4u) {
        ctx->pc = 0x3943F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3943F0u;
        // 0x3943f4: 0x96650112  lhu         $a1, 0x112($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3943F8u;
        goto label_3943f8;
    }
    ctx->pc = 0x3943F0u;
    SET_GPR_U32(ctx, 31, 0x3943F8u);
    ctx->pc = 0x3943F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3943F0u;
    // 0x3943f4: 0x96650112  lhu         $a1, 0x112($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3943F0u, 0x3943F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3943F8u;
label_3943f8:
    // 0x3943f8: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x3943f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_3943fc:
    // 0x3943fc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3943fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_394400:
    // 0x394400: 0x90450064  lbu         $a1, 0x64($v0)
    ctx->pc = 0x394400u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_394404:
    // 0x394404: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x394404u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_394408:
    // 0x394408: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x394408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_39440c:
    // 0x39440c: 0xc04420c  jal         func_110830
label_394410:
    if (ctx->pc == 0x394410u) {
        ctx->pc = 0x394410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39440Cu;
        // 0x394410: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394414u;
        goto label_394414;
    }
    ctx->pc = 0x39440Cu;
    SET_GPR_U32(ctx, 31, 0x394414u);
    ctx->pc = 0x394410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39440Cu;
    // 0x394410: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x39440Cu, 0x394414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394414u;
label_394414:
    // 0x394414: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x394414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_394418:
    // 0x394418: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x394418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39441c:
    // 0x39441c: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x39441cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_394420:
    // 0x394420: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x394420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_394424:
    // 0x394424: 0x40f809  jalr        $v0
label_394428:
    if (ctx->pc == 0x394428u) {
        ctx->pc = 0x394428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394424u;
        // 0x394428: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39442Cu;
        goto label_39442c;
    }
    ctx->pc = 0x394424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39442Cu);
        ctx->pc = 0x394428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394424u;
        // 0x394428: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394424u, 0x39442Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39442Cu;
label_39442c:
    // 0x39442c: 0x8ee411f0  lw          $a0, 0x11F0($s7)
    ctx->pc = 0x39442cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4592)));
label_394430:
    // 0x394430: 0x8ee511f4  lw          $a1, 0x11F4($s7)
    ctx->pc = 0x394430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4596)));
label_394434:
    // 0x394434: 0x8ee311f8  lw          $v1, 0x11F8($s7)
    ctx->pc = 0x394434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4600)));
label_394438:
    // 0x394438: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x394438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_39443c:
    // 0x39443c: 0x641827  nor         $v1, $v1, $a0
    ctx->pc = 0x39443cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 4)));
label_394440:
    // 0x394440: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x394440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_394444:
    // 0x394444: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_394448:
    if (ctx->pc == 0x394448u) {
        ctx->pc = 0x39444Cu;
        goto label_39444c;
    }
    ctx->pc = 0x394444u;
    {
        const bool branch_taken_0x394444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x394444) {
            ctx->pc = 0x394504u;
            goto label_394504;
        }
    }
    ctx->pc = 0x39444Cu;
label_39444c:
    // 0x39444c: 0x12c0002d  beqz        $s6, . + 4 + (0x2D << 2)
label_394450:
    if (ctx->pc == 0x394450u) {
        ctx->pc = 0x394454u;
        goto label_394454;
    }
    ctx->pc = 0x39444Cu;
    {
        const bool branch_taken_0x39444c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x39444c) {
            ctx->pc = 0x394504u;
            goto label_394504;
        }
    }
    ctx->pc = 0x394454u;
label_394454:
    // 0x394454: 0x82c201b0  lb          $v0, 0x1B0($s6)
    ctx->pc = 0x394454u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 432)));
label_394458:
    // 0x394458: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x394458u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_39445c:
    // 0x39445c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_394460:
    if (ctx->pc == 0x394460u) {
        ctx->pc = 0x394460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39445Cu;
        // 0x394460: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394464u;
        goto label_394464;
    }
    ctx->pc = 0x39445Cu;
    {
        const bool branch_taken_0x39445c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39445Cu;
        // 0x394460: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39445c) {
            ctx->pc = 0x394478u;
            goto label_394478;
        }
    }
    ctx->pc = 0x394464u;
label_394464:
    // 0x394464: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x394464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_394468:
    // 0x394468: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x394468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_39446c:
    // 0x39446c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x39446cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_394470:
    // 0x394470: 0xc13b652  jal         func_4ED948
label_394474:
    if (ctx->pc == 0x394474u) {
        ctx->pc = 0x394474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394470u;
        // 0x394474: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394478u;
        goto label_394478;
    }
    ctx->pc = 0x394470u;
    SET_GPR_U32(ctx, 31, 0x394478u);
    ctx->pc = 0x394474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394470u;
    // 0x394474: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x394470u, 0x394478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394478u;
label_394478:
    // 0x394478: 0xc087502  jal         func_21D408
label_39447c:
    if (ctx->pc == 0x39447Cu) {
        ctx->pc = 0x39447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394478u;
        // 0x39447c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394480u;
        goto label_394480;
    }
    ctx->pc = 0x394478u;
    SET_GPR_U32(ctx, 31, 0x394480u);
    ctx->pc = 0x39447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394478u;
    // 0x39447c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x394478u, 0x394480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394480u;
label_394480:
    // 0x394480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x394480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_394484:
    // 0x394484: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x394484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_394488:
    // 0x394488: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x394488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_39448c:
    // 0x39448c: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_394490:
    if (ctx->pc == 0x394490u) {
        ctx->pc = 0x394494u;
        goto label_394494;
    }
    ctx->pc = 0x39448Cu;
    {
        const bool branch_taken_0x39448c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39448c) {
            ctx->pc = 0x394504u;
            goto label_394504;
        }
    }
    ctx->pc = 0x394494u;
label_394494:
    // 0x394494: 0xc05959e  jal         func_165678
label_394498:
    if (ctx->pc == 0x394498u) {
        ctx->pc = 0x394498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394494u;
        // 0x394498: 0x8c84020c  lw          $a0, 0x20C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39449Cu;
        goto label_39449c;
    }
    ctx->pc = 0x394494u;
    SET_GPR_U32(ctx, 31, 0x39449Cu);
    ctx->pc = 0x394498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394494u;
    // 0x394498: 0x8c84020c  lw          $a0, 0x20C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x394494u, 0x39449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39449Cu;
label_39449c:
    // 0x39449c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_3944a0:
    if (ctx->pc == 0x3944A0u) {
        ctx->pc = 0x3944A4u;
        goto label_3944a4;
    }
    ctx->pc = 0x39449Cu;
    {
        const bool branch_taken_0x39449c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39449c) {
            ctx->pc = 0x394504u;
            goto label_394504;
        }
    }
    ctx->pc = 0x3944A4u;
label_3944a4:
    // 0x3944a4: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x3944a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_3944a8:
    // 0x3944a8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3944a8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3944ac:
    // 0x3944ac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3944b0:
    if (ctx->pc == 0x3944B0u) {
        ctx->pc = 0x3944B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944ACu;
        // 0x3944b0: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3944B4u;
        goto label_3944b4;
    }
    ctx->pc = 0x3944ACu;
    {
        const bool branch_taken_0x3944ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3944B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944ACu;
        // 0x3944b0: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3944ac) {
            ctx->pc = 0x394504u;
            goto label_394504;
        }
    }
    ctx->pc = 0x3944B4u;
label_3944b4:
    // 0x3944b4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3944b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3944b8:
    // 0x3944b8: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x3944b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_3944bc:
    // 0x3944bc: 0xc13ce7a  jal         func_4F39E8
label_3944c0:
    if (ctx->pc == 0x3944C0u) {
        ctx->pc = 0x3944C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944BCu;
        // 0x3944c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3944C4u;
        goto label_3944c4;
    }
    ctx->pc = 0x3944BCu;
    SET_GPR_U32(ctx, 31, 0x3944C4u);
    ctx->pc = 0x3944C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3944BCu;
    // 0x3944c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F39E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F39E8u, 0x3944BCu, 0x3944C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3944C4u;
label_3944c4:
    // 0x3944c4: 0x1000000f  b           . + 4 + (0xF << 2)
label_3944c8:
    if (ctx->pc == 0x3944C8u) {
        ctx->pc = 0x3944CCu;
        goto label_3944cc;
    }
    ctx->pc = 0x3944C4u;
    {
        const bool branch_taken_0x3944c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3944c4) {
            ctx->pc = 0x394504u;
            goto label_394504;
        }
    }
    ctx->pc = 0x3944CCu;
label_3944cc:
    // 0x3944cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3944ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3944d0:
    // 0x3944d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3944d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3944d4:
    // 0x3944d4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3944d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3944d8:
    // 0x3944d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3944d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3944dc:
    // 0x3944dc: 0xc0e4d4e  jal         func_393538
label_3944e0:
    if (ctx->pc == 0x3944E0u) {
        ctx->pc = 0x3944E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944DCu;
        // 0x3944e0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3944E4u;
        goto label_3944e4;
    }
    ctx->pc = 0x3944DCu;
    SET_GPR_U32(ctx, 31, 0x3944E4u);
    ctx->pc = 0x3944E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3944DCu;
    // 0x3944e0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393538u, 0x3944DCu, 0x3944E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3944E4u;
label_3944e4:
    // 0x3944e4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_3944e8:
    if (ctx->pc == 0x3944E8u) {
        ctx->pc = 0x3944ECu;
        goto label_3944ec;
    }
    ctx->pc = 0x3944E4u;
    {
        const bool branch_taken_0x3944e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3944e4) {
            ctx->pc = 0x394504u;
            goto label_394504;
        }
    }
    ctx->pc = 0x3944ECu;
label_3944ec:
    // 0x3944ec: 0x12a00065  beqz        $s5, . + 4 + (0x65 << 2)
label_3944f0:
    if (ctx->pc == 0x3944F0u) {
        ctx->pc = 0x3944F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944ECu;
        // 0x3944f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3944F4u;
        goto label_3944f4;
    }
    ctx->pc = 0x3944ECu;
    {
        const bool branch_taken_0x3944ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3944F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944ECu;
        // 0x3944f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3944ec) {
            ctx->pc = 0x394684u;
            goto label_394684;
        }
    }
    ctx->pc = 0x3944F4u;
label_3944f4:
    // 0x3944f4: 0xc0864c8  jal         func_219320
label_3944f8:
    if (ctx->pc == 0x3944F8u) {
        ctx->pc = 0x3944F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944F4u;
        // 0x3944f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3944FCu;
        goto label_3944fc;
    }
    ctx->pc = 0x3944F4u;
    SET_GPR_U32(ctx, 31, 0x3944FCu);
    ctx->pc = 0x3944F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3944F4u;
    // 0x3944f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219320u, 0x3944F4u, 0x3944FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3944FCu;
label_3944fc:
    // 0x3944fc: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_394500:
    if (ctx->pc == 0x394500u) {
        ctx->pc = 0x394500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944FCu;
        // 0x394500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394504u;
        goto label_394504;
    }
    ctx->pc = 0x3944FCu;
    {
        const bool branch_taken_0x3944fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3944FCu;
        // 0x394500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3944fc) {
            ctx->pc = 0x3947D4u;
            goto label_3947d4;
        }
    }
    ctx->pc = 0x394504u;
label_394504:
    // 0x394504: 0x56a0003c  bnel        $s5, $zero, . + 4 + (0x3C << 2)
label_394508:
    if (ctx->pc == 0x394508u) {
        ctx->pc = 0x394508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394504u;
        // 0x394508: 0x9262010d  lbu         $v0, 0x10D($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39450Cu;
        goto label_39450c;
    }
    ctx->pc = 0x394504u;
    {
        const bool branch_taken_0x394504 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x394504) {
            ctx->pc = 0x394508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394504u;
            // 0x394508: 0x9262010d  lbu         $v0, 0x10D($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3945F8u;
            goto label_3945f8;
        }
    }
    ctx->pc = 0x39450Cu;
label_39450c:
    // 0x39450c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39450cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_394510:
    // 0x394510: 0x96650112  lhu         $a1, 0x112($s3)
    ctx->pc = 0x394510u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
label_394514:
    // 0x394514: 0xc0e44cc  jal         func_391330
label_394518:
    if (ctx->pc == 0x394518u) {
        ctx->pc = 0x394518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394514u;
        // 0x394518: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39451Cu;
        goto label_39451c;
    }
    ctx->pc = 0x394514u;
    SET_GPR_U32(ctx, 31, 0x39451Cu);
    ctx->pc = 0x394518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394514u;
    // 0x394518: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x394514u, 0x39451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39451Cu;
label_39451c:
    // 0x39451c: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x39451cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_394520:
    // 0x394520: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x394520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_394524:
    // 0x394524: 0x50620034  beql        $v1, $v0, . + 4 + (0x34 << 2)
label_394528:
    if (ctx->pc == 0x394528u) {
        ctx->pc = 0x394528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394524u;
        // 0x394528: 0x9262010d  lbu         $v0, 0x10D($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39452Cu;
        goto label_39452c;
    }
    ctx->pc = 0x394524u;
    {
        const bool branch_taken_0x394524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x394524) {
            ctx->pc = 0x394528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394524u;
            // 0x394528: 0x9262010d  lbu         $v0, 0x10D($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3945F8u;
            goto label_3945f8;
        }
    }
    ctx->pc = 0x39452Cu;
label_39452c:
    // 0x39452c: 0x8e660118  lw          $a2, 0x118($s3)
    ctx->pc = 0x39452cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_394530:
    // 0x394530: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x394530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_394534:
    // 0x394534: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x394534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_394538:
    // 0x394538: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x394538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_39453c:
    // 0x39453c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x39453cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_394540:
    // 0x394540: 0x60f809  jalr        $v1
label_394544:
    if (ctx->pc == 0x394544u) {
        ctx->pc = 0x394544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394540u;
        // 0x394544: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394548u;
        goto label_394548;
    }
    ctx->pc = 0x394540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x394548u);
        ctx->pc = 0x394544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394540u;
        // 0x394544: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394540u, 0x394548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394548u;
label_394548:
    // 0x394548: 0x1000002b  b           . + 4 + (0x2B << 2)
label_39454c:
    if (ctx->pc == 0x39454Cu) {
        ctx->pc = 0x39454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394548u;
        // 0x39454c: 0x9262010d  lbu         $v0, 0x10D($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394550u;
        goto label_394550;
    }
    ctx->pc = 0x394548u;
    {
        const bool branch_taken_0x394548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394548u;
        // 0x39454c: 0x9262010d  lbu         $v0, 0x10D($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394548) {
            ctx->pc = 0x3945F8u;
            goto label_3945f8;
        }
    }
    ctx->pc = 0x394550u;
label_394550:
    // 0x394550: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x394550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_394554:
    // 0x394554: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x394554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_394558:
    // 0x394558: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_39455c:
    if (ctx->pc == 0x39455Cu) {
        ctx->pc = 0x39455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394558u;
        // 0x39455c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394560u;
        goto label_394560;
    }
    ctx->pc = 0x394558u;
    {
        const bool branch_taken_0x394558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394558u;
        // 0x39455c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394558) {
            ctx->pc = 0x3945E4u;
            goto label_3945e4;
        }
    }
    ctx->pc = 0x394560u;
label_394560:
    // 0x394560: 0x12a00021  beqz        $s5, . + 4 + (0x21 << 2)
label_394564:
    if (ctx->pc == 0x394564u) {
        ctx->pc = 0x394564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394560u;
        // 0x394564: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394568u;
        goto label_394568;
    }
    ctx->pc = 0x394560u;
    {
        const bool branch_taken_0x394560 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x394564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394560u;
        // 0x394564: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394560) {
            ctx->pc = 0x3945E8u;
            goto label_3945e8;
        }
    }
    ctx->pc = 0x394568u;
label_394568:
    // 0x394568: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x394568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_39456c:
    // 0x39456c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x39456cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_394570:
    // 0x394570: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x394570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_394574:
    // 0x394574: 0x40f809  jalr        $v0
label_394578:
    if (ctx->pc == 0x394578u) {
        ctx->pc = 0x394578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394574u;
        // 0x394578: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39457Cu;
        goto label_39457c;
    }
    ctx->pc = 0x394574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39457Cu);
        ctx->pc = 0x394578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394574u;
        // 0x394578: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394574u, 0x39457Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39457Cu;
label_39457c:
    // 0x39457c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x39457cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_394580:
    // 0x394580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394584:
    // 0x394584: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x394584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_394588:
    // 0x394588: 0x8c660034  lw          $a2, 0x34($v1)
    ctx->pc = 0x394588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_39458c:
    // 0x39458c: 0xc0f809  jalr        $a2
label_394590:
    if (ctx->pc == 0x394590u) {
        ctx->pc = 0x394590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39458Cu;
        // 0x394590: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394594u;
        goto label_394594;
    }
    ctx->pc = 0x39458Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x394594u);
        ctx->pc = 0x394590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39458Cu;
        // 0x394590: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39458Cu, 0x394594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394594u;
label_394594:
    // 0x394594: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_394598:
    if (ctx->pc == 0x394598u) {
        ctx->pc = 0x394598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394594u;
        // 0x394598: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39459Cu;
        goto label_39459c;
    }
    ctx->pc = 0x394594u;
    {
        const bool branch_taken_0x394594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394594) {
            ctx->pc = 0x394598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394594u;
            // 0x394598: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3945B4u;
            goto label_3945b4;
        }
    }
    ctx->pc = 0x39459Cu;
label_39459c:
    // 0x39459c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39459cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3945a0:
    // 0x3945a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3945a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3945a4:
    // 0x3945a4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3945a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3945a8:
    // 0x3945a8: 0xc0e4e6a  jal         func_3939A8
label_3945ac:
    if (ctx->pc == 0x3945ACu) {
        ctx->pc = 0x3945ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3945A8u;
        // 0x3945ac: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3945B0u;
        goto label_3945b0;
    }
    ctx->pc = 0x3945A8u;
    SET_GPR_U32(ctx, 31, 0x3945B0u);
    ctx->pc = 0x3945ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3945A8u;
    // 0x3945ac: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3939A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3939A8u, 0x3945A8u, 0x3945B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3945B0u;
label_3945b0:
    // 0x3945b0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3945b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3945b4:
    // 0x3945b4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3945b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3945b8:
    // 0x3945b8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3945b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3945bc:
    // 0x3945bc: 0x40f809  jalr        $v0
label_3945c0:
    if (ctx->pc == 0x3945C0u) {
        ctx->pc = 0x3945C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3945BCu;
        // 0x3945c0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3945C4u;
        goto label_3945c4;
    }
    ctx->pc = 0x3945BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3945C4u);
        ctx->pc = 0x3945C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3945BCu;
        // 0x3945c0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3945BCu, 0x3945C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3945C4u;
label_3945c4:
    // 0x3945c4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3945c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3945c8:
    // 0x3945c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3945c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3945cc:
    // 0x3945cc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x3945ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_3945d0:
    // 0x3945d0: 0x8c660044  lw          $a2, 0x44($v1)
    ctx->pc = 0x3945d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_3945d4:
    // 0x3945d4: 0xc0f809  jalr        $a2
label_3945d8:
    if (ctx->pc == 0x3945D8u) {
        ctx->pc = 0x3945D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3945D4u;
        // 0x3945d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3945DCu;
        goto label_3945dc;
    }
    ctx->pc = 0x3945D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3945DCu);
        ctx->pc = 0x3945D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3945D4u;
        // 0x3945d8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3945D4u, 0x3945DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3945DCu;
label_3945dc:
    // 0x3945dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_3945e0:
    if (ctx->pc == 0x3945E0u) {
        ctx->pc = 0x3945E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3945DCu;
        // 0x3945e0: 0x9262010d  lbu         $v0, 0x10D($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3945E4u;
        goto label_3945e4;
    }
    ctx->pc = 0x3945DCu;
    {
        const bool branch_taken_0x3945dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3945E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3945DCu;
        // 0x3945e0: 0x9262010d  lbu         $v0, 0x10D($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3945dc) {
            ctx->pc = 0x3945F8u;
            goto label_3945f8;
        }
    }
    ctx->pc = 0x3945E4u;
label_3945e4:
    // 0x3945e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3945e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3945e8:
    // 0x3945e8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3945e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3945ec:
    // 0x3945ec: 0xc0e4e6a  jal         func_3939A8
label_3945f0:
    if (ctx->pc == 0x3945F0u) {
        ctx->pc = 0x3945F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3945ECu;
        // 0x3945f0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3945F4u;
        goto label_3945f4;
    }
    ctx->pc = 0x3945ECu;
    SET_GPR_U32(ctx, 31, 0x3945F4u);
    ctx->pc = 0x3945F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3945ECu;
    // 0x3945f0: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3939A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3939A8u, 0x3945ECu, 0x3945F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3945F4u;
label_3945f4:
    // 0x3945f4: 0x9262010d  lbu         $v0, 0x10D($s3)
    ctx->pc = 0x3945f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_3945f8:
    // 0x3945f8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3945f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3945fc:
    // 0x3945fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_394600:
    if (ctx->pc == 0x394600u) {
        ctx->pc = 0x394600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3945FCu;
        // 0x394600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394604u;
        goto label_394604;
    }
    ctx->pc = 0x3945FCu;
    {
        const bool branch_taken_0x3945fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3945FCu;
        // 0x394600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3945fc) {
            ctx->pc = 0x394610u;
            goto label_394610;
        }
    }
    ctx->pc = 0x394604u;
label_394604:
    // 0x394604: 0x9262010e  lbu         $v0, 0x10E($s3)
    ctx->pc = 0x394604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 270)));
label_394608:
    // 0x394608: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_39460c:
    if (ctx->pc == 0x39460Cu) {
        ctx->pc = 0x394610u;
        goto label_394610;
    }
    ctx->pc = 0x394608u;
    {
        const bool branch_taken_0x394608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394608) {
            ctx->pc = 0x394614u;
            goto label_394614;
        }
    }
    ctx->pc = 0x394610u;
label_394610:
    // 0x394610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x394610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_394614:
    // 0x394614: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_394618:
    if (ctx->pc == 0x394618u) {
        ctx->pc = 0x394618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394614u;
        // 0x394618: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39461Cu;
        goto label_39461c;
    }
    ctx->pc = 0x394614u;
    {
        const bool branch_taken_0x394614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x394618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394614u;
        // 0x394618: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394614) {
            ctx->pc = 0x394640u;
            goto label_394640;
        }
    }
    ctx->pc = 0x39461Cu;
label_39461c:
    // 0x39461c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39461cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_394620:
    // 0x394620: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x394620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_394624:
    // 0x394624: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x394624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_394628:
    // 0x394628: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x394628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_39462c:
    // 0x39462c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x39462cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_394630:
    // 0x394630: 0xc0e4f88  jal         func_393E20
label_394634:
    if (ctx->pc == 0x394634u) {
        ctx->pc = 0x394634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394630u;
        // 0x394634: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394638u;
        goto label_394638;
    }
    ctx->pc = 0x394630u;
    SET_GPR_U32(ctx, 31, 0x394638u);
    ctx->pc = 0x394634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394630u;
    // 0x394634: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393E20u, 0x394630u, 0x394638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394638u;
label_394638:
    // 0x394638: 0x10000066  b           . + 4 + (0x66 << 2)
label_39463c:
    if (ctx->pc == 0x39463Cu) {
        ctx->pc = 0x39463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394638u;
        // 0x39463c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394640u;
        goto label_394640;
    }
    ctx->pc = 0x394638u;
    {
        const bool branch_taken_0x394638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394638u;
        // 0x39463c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394638) {
            ctx->pc = 0x3947D4u;
            goto label_3947d4;
        }
    }
    ctx->pc = 0x394640u;
label_394640:
    // 0x394640: 0x12a0001b  beqz        $s5, . + 4 + (0x1B << 2)
label_394644:
    if (ctx->pc == 0x394644u) {
        ctx->pc = 0x394644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394640u;
        // 0x394644: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394648u;
        goto label_394648;
    }
    ctx->pc = 0x394640u;
    {
        const bool branch_taken_0x394640 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x394644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394640u;
        // 0x394644: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394640) {
            ctx->pc = 0x3946B0u;
            goto label_3946b0;
        }
    }
    ctx->pc = 0x394648u;
label_394648:
    // 0x394648: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x394648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_39464c:
    // 0x39464c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39464cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_394650:
    // 0x394650: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x394650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_394654:
    // 0x394654: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_394658:
    if (ctx->pc == 0x394658u) {
        ctx->pc = 0x394658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394654u;
        // 0x394658: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39465Cu;
        goto label_39465c;
    }
    ctx->pc = 0x394654u;
    {
        const bool branch_taken_0x394654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394654u;
        // 0x394658: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394654) {
            ctx->pc = 0x39468Cu;
            goto label_39468c;
        }
    }
    ctx->pc = 0x39465Cu;
label_39465c:
    // 0x39465c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_394660:
    if (ctx->pc == 0x394660u) {
        ctx->pc = 0x394660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39465Cu;
        // 0x394660: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394664u;
        goto label_394664;
    }
    ctx->pc = 0x39465Cu;
    {
        const bool branch_taken_0x39465c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39465Cu;
        // 0x394660: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39465c) {
            ctx->pc = 0x394670u;
            goto label_394670;
        }
    }
    ctx->pc = 0x394664u;
label_394664:
    // 0x394664: 0x9262010e  lbu         $v0, 0x10E($s3)
    ctx->pc = 0x394664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 270)));
label_394668:
    // 0x394668: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_39466c:
    if (ctx->pc == 0x39466Cu) {
        ctx->pc = 0x394670u;
        goto label_394670;
    }
    ctx->pc = 0x394668u;
    {
        const bool branch_taken_0x394668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394668) {
            ctx->pc = 0x394674u;
            goto label_394674;
        }
    }
    ctx->pc = 0x394670u;
label_394670:
    // 0x394670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x394670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_394674:
    // 0x394674: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_394678:
    if (ctx->pc == 0x394678u) {
        ctx->pc = 0x39467Cu;
        goto label_39467c;
    }
    ctx->pc = 0x394674u;
    {
        const bool branch_taken_0x394674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x394674) {
            ctx->pc = 0x39468Cu;
            goto label_39468c;
        }
    }
    ctx->pc = 0x39467Cu;
label_39467c:
    // 0x39467c: 0xc095fce  jal         func_257F38
label_394680:
    if (ctx->pc == 0x394680u) {
        ctx->pc = 0x394680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39467Cu;
        // 0x394680: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394684u;
        goto label_394684;
    }
    ctx->pc = 0x39467Cu;
    SET_GPR_U32(ctx, 31, 0x394684u);
    ctx->pc = 0x394680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39467Cu;
    // 0x394680: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x39467Cu, 0x394684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394684u;
label_394684:
    // 0x394684: 0x10000053  b           . + 4 + (0x53 << 2)
label_394688:
    if (ctx->pc == 0x394688u) {
        ctx->pc = 0x394688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394684u;
        // 0x394688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39468Cu;
        goto label_39468c;
    }
    ctx->pc = 0x394684u;
    {
        const bool branch_taken_0x394684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394684u;
        // 0x394688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394684) {
            ctx->pc = 0x3947D4u;
            goto label_3947d4;
        }
    }
    ctx->pc = 0x39468Cu;
label_39468c:
    // 0x39468c: 0x0  nop
    ctx->pc = 0x39468cu;
    // NOP
label_394690:
    // 0x394690: 0x0  nop
    ctx->pc = 0x394690u;
    // NOP
label_394694:
    // 0x394694: 0x12e0fffb  beqz        $s7, . + 4 + (-0x5 << 2)
label_394698:
    if (ctx->pc == 0x394698u) {
        ctx->pc = 0x394698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394694u;
        // 0x394698: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39469Cu;
        goto label_39469c;
    }
    ctx->pc = 0x394694u;
    {
        const bool branch_taken_0x394694 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x394698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394694u;
        // 0x394698: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394694) {
            ctx->pc = 0x394684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394684;
        }
    }
    ctx->pc = 0x39469Cu;
label_39469c:
    // 0x39469c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x39469cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3946a0:
    // 0x3946a0: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
label_3946a4:
    if (ctx->pc == 0x3946A4u) {
        ctx->pc = 0x3946A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946A0u;
        // 0x3946a4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3946A8u;
        goto label_3946a8;
    }
    ctx->pc = 0x3946A0u;
    {
        const bool branch_taken_0x3946a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3946A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946A0u;
        // 0x3946a4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3946a0) {
            ctx->pc = 0x3947D4u;
            goto label_3947d4;
        }
    }
    ctx->pc = 0x3946A8u;
label_3946a8:
    // 0x3946a8: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3946ac:
    if (ctx->pc == 0x3946ACu) {
        ctx->pc = 0x3946ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946A8u;
        // 0x3946ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3946B0u;
        goto label_3946b0;
    }
    ctx->pc = 0x3946A8u;
    {
        const bool branch_taken_0x3946a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3946ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946A8u;
        // 0x3946ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3946a8) {
            ctx->pc = 0x3947D4u;
            goto label_3947d4;
        }
    }
    ctx->pc = 0x3946B0u;
label_3946b0:
    // 0x3946b0: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x3946b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_3946b4:
    // 0x3946b4: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_3946b8:
    if (ctx->pc == 0x3946B8u) {
        ctx->pc = 0x3946B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946B4u;
        // 0x3946b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3946BCu;
        goto label_3946bc;
    }
    ctx->pc = 0x3946B4u;
    {
        const bool branch_taken_0x3946b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3946B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946B4u;
        // 0x3946b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3946b4) {
            ctx->pc = 0x3947D4u;
            goto label_3947d4;
        }
    }
    ctx->pc = 0x3946BCu;
label_3946bc:
    // 0x3946bc: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x3946bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3946c0:
    // 0x3946c0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x3946c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_3946c4:
    // 0x3946c4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3946c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3946c8:
    // 0x3946c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3946c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3946cc:
    // 0x3946cc: 0x0  nop
    ctx->pc = 0x3946ccu;
    // NOP
label_3946d0:
    // 0x3946d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3946d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3946d4:
    // 0x3946d4: 0x0  nop
    ctx->pc = 0x3946d4u;
    // NOP
label_3946d8:
    // 0x3946d8: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
label_3946dc:
    if (ctx->pc == 0x3946DCu) {
        ctx->pc = 0x3946DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946D8u;
        // 0x3946dc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3946E0u;
        goto label_3946e0;
    }
    ctx->pc = 0x3946D8u;
    {
        const bool branch_taken_0x3946d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3946DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946D8u;
        // 0x3946dc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3946d8) {
            ctx->pc = 0x3947D4u;
            goto label_3947d4;
        }
    }
    ctx->pc = 0x3946E0u;
label_3946e0:
    // 0x3946e0: 0x96650112  lhu         $a1, 0x112($s3)
    ctx->pc = 0x3946e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
label_3946e4:
    // 0x3946e4: 0xc0e44cc  jal         func_391330
label_3946e8:
    if (ctx->pc == 0x3946E8u) {
        ctx->pc = 0x3946E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946E4u;
        // 0x3946e8: 0x8c642c04  lw          $a0, 0x2C04($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3946ECu;
        goto label_3946ec;
    }
    ctx->pc = 0x3946E4u;
    SET_GPR_U32(ctx, 31, 0x3946ECu);
    ctx->pc = 0x3946E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3946E4u;
    // 0x3946e8: 0x8c642c04  lw          $a0, 0x2C04($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3946E4u, 0x3946ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3946ECu;
label_3946ec:
    // 0x3946ec: 0x90470085  lbu         $a3, 0x85($v0)
    ctx->pc = 0x3946ecu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 133)));
label_3946f0:
    // 0x3946f0: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
label_3946f4:
    if (ctx->pc == 0x3946F4u) {
        ctx->pc = 0x3946F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946F0u;
        // 0x3946f4: 0x3c030804  lui         $v1, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2052 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3946F8u;
        goto label_3946f8;
    }
    ctx->pc = 0x3946F0u;
    {
        const bool branch_taken_0x3946f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3946F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946F0u;
        // 0x3946f4: 0x3c030804  lui         $v1, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2052 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3946f0) {
            ctx->pc = 0x39471Cu;
            goto label_39471c;
        }
    }
    ctx->pc = 0x3946F8u;
label_3946f8:
    // 0x3946f8: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3946f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3946fc:
    // 0x3946fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3946fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_394700:
    // 0x394700: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_394704:
    if (ctx->pc == 0x394704u) {
        ctx->pc = 0x394704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394700u;
        // 0x394704: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394708u;
        goto label_394708;
    }
    ctx->pc = 0x394700u;
    {
        const bool branch_taken_0x394700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394700) {
            ctx->pc = 0x394704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394700u;
            // 0x394704: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394720u;
            goto label_394720;
        }
    }
    ctx->pc = 0x394708u;
label_394708:
    // 0x394708: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x394708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_39470c:
    // 0x39470c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39470cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_394710:
    // 0x394710: 0x8c447198  lw          $a0, 0x7198($v0)
    ctx->pc = 0x394710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
label_394714:
    // 0x394714: 0xc0d03f8  jal         func_340FE0
label_394718:
    if (ctx->pc == 0x394718u) {
        ctx->pc = 0x394718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394714u;
        // 0x394718: 0x26860050  addiu       $a2, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39471Cu;
        goto label_39471c;
    }
    ctx->pc = 0x394714u;
    SET_GPR_U32(ctx, 31, 0x39471Cu);
    ctx->pc = 0x394718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394714u;
    // 0x394718: 0x26860050  addiu       $a2, $s4, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340FE0u, 0x394714u, 0x39471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39471Cu;
label_39471c:
    // 0x39471c: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x39471cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_394720:
    // 0x394720: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x394720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_394724:
    // 0x394724: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x394724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_394728:
    // 0x394728: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_39472c:
    if (ctx->pc == 0x39472Cu) {
        ctx->pc = 0x39472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394728u;
        // 0x39472c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394730u;
        goto label_394730;
    }
    ctx->pc = 0x394728u;
    {
        const bool branch_taken_0x394728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394728u;
        // 0x39472c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394728) {
            ctx->pc = 0x3947A8u;
            goto label_3947a8;
        }
    }
    ctx->pc = 0x394730u;
label_394730:
    // 0x394730: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x394730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_394734:
    // 0x394734: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x394734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_394738:
    // 0x394738: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x394738u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_39473c:
    // 0x39473c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39473cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394740:
    // 0x394740: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x394740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_394744:
    // 0x394744: 0x40f809  jalr        $v0
label_394748:
    if (ctx->pc == 0x394748u) {
        ctx->pc = 0x394748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394744u;
        // 0x394748: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39474Cu;
        goto label_39474c;
    }
    ctx->pc = 0x394744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39474Cu);
        ctx->pc = 0x394748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394744u;
        // 0x394748: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394744u, 0x39474Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39474Cu;
label_39474c:
    // 0x39474c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x39474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_394750:
    // 0x394750: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x394750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394754:
    // 0x394754: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x394754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_394758:
    // 0x394758: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x394758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_39475c:
    // 0x39475c: 0x40f809  jalr        $v0
label_394760:
    if (ctx->pc == 0x394760u) {
        ctx->pc = 0x394760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39475Cu;
        // 0x394760: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394764u;
        goto label_394764;
    }
    ctx->pc = 0x39475Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x394764u);
        ctx->pc = 0x394760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39475Cu;
        // 0x394760: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39475Cu, 0x394764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394764u;
label_394764:
    // 0x394764: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x394764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_394768:
    // 0x394768: 0x3c02f3ff  lui         $v0, 0xF3FF
    ctx->pc = 0x394768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62463 << 16));
label_39476c:
    // 0x39476c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x39476cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_394770:
    // 0x394770: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x394770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_394774:
    // 0x394774: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x394774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_394778:
    // 0x394778: 0x8e660118  lw          $a2, 0x118($s3)
    ctx->pc = 0x394778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_39477c:
    // 0x39477c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x39477cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_394780:
    // 0x394780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394784:
    // 0x394784: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x394784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_394788:
    // 0x394788: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x394788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_39478c:
    // 0x39478c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x39478cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_394790:
    // 0x394790: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x394790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_394794:
    // 0x394794: 0x60f809  jalr        $v1
label_394798:
    if (ctx->pc == 0x394798u) {
        ctx->pc = 0x394798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394794u;
        // 0x394798: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39479Cu;
        goto label_39479c;
    }
    ctx->pc = 0x394794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39479Cu);
        ctx->pc = 0x394798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394794u;
        // 0x394798: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394794u, 0x39479Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39479Cu;
label_39479c:
    // 0x39479c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x39479cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3947a0:
    // 0x3947a0: 0x1000000c  b           . + 4 + (0xC << 2)
label_3947a4:
    if (ctx->pc == 0x3947A4u) {
        ctx->pc = 0x3947A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3947A0u;
        // 0x3947a4: 0x34420003  ori         $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3947A8u;
        goto label_3947a8;
    }
    ctx->pc = 0x3947A0u;
    {
        const bool branch_taken_0x3947a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3947A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3947A0u;
        // 0x3947a4: 0x34420003  ori         $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3947a0) {
            ctx->pc = 0x3947D4u;
            goto label_3947d4;
        }
    }
    ctx->pc = 0x3947A8u;
label_3947a8:
    // 0x3947a8: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x3947a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3947ac:
    // 0x3947ac: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3947acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_3947b0:
    // 0x3947b0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x3947b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_3947b4:
    // 0x3947b4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3947b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3947b8:
    // 0x3947b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3947b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3947bc:
    // 0x3947bc: 0x0  nop
    ctx->pc = 0x3947bcu;
    // NOP
label_3947c0:
    // 0x3947c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3947c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3947c4:
    // 0x3947c4: 0x0  nop
    ctx->pc = 0x3947c4u;
    // NOP
label_3947c8:
    // 0x3947c8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3947cc:
    if (ctx->pc == 0x3947CCu) {
        ctx->pc = 0x3947CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3947C8u;
        // 0x3947cc: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3947D0u;
        goto label_3947d0;
    }
    ctx->pc = 0x3947C8u;
    {
        const bool branch_taken_0x3947c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3947CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3947C8u;
        // 0x3947cc: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3947c8) {
            ctx->pc = 0x3947D4u;
            goto label_3947d4;
        }
    }
    ctx->pc = 0x3947D0u;
label_3947d0:
    // 0x3947d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3947d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3947d4:
    // 0x3947d4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3947d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3947d8:
    // 0x3947d8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3947d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3947dc:
    // 0x3947dc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3947dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3947e0:
    // 0x3947e0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3947e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3947e4:
    // 0x3947e4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3947e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3947e8:
    // 0x3947e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3947e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3947ec:
    // 0x3947ec: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3947ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3947f0:
    // 0x3947f0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3947f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3947f4:
    // 0x3947f4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3947f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3947f8:
    // 0x3947f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3947f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3947fc:
    // 0x3947fc: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x3947fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_394800:
    // 0x394800: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x394800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_394804:
    // 0x394804: 0x3e00008  jr          $ra
label_394808:
    if (ctx->pc == 0x394808u) {
        ctx->pc = 0x394808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394804u;
        // 0x394808: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39480Cu;
        goto label_39480c;
    }
    ctx->pc = 0x394804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394804u;
        // 0x394808: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39480Cu;
label_39480c:
    // 0x39480c: 0x0  nop
    ctx->pc = 0x39480cu;
    // NOP
    ctx->pc = 0x394810u;
}
