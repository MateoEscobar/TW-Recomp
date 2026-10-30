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

// Function: sub_002240E8
// Address: 0x2240e8 - 0x22475c
void sub_002240E8_0x2240e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002240E8_0x2240e8");
#endif

    switch (ctx->pc) {
        case 0x2240e8u: goto label_2240e8;
        case 0x2240ecu: goto label_2240ec;
        case 0x2240f0u: goto label_2240f0;
        case 0x2240f4u: goto label_2240f4;
        case 0x2240f8u: goto label_2240f8;
        case 0x2240fcu: goto label_2240fc;
        case 0x224100u: goto label_224100;
        case 0x224104u: goto label_224104;
        case 0x224108u: goto label_224108;
        case 0x22410cu: goto label_22410c;
        case 0x224110u: goto label_224110;
        case 0x224114u: goto label_224114;
        case 0x224118u: goto label_224118;
        case 0x22411cu: goto label_22411c;
        case 0x224120u: goto label_224120;
        case 0x224124u: goto label_224124;
        case 0x224128u: goto label_224128;
        case 0x22412cu: goto label_22412c;
        case 0x224130u: goto label_224130;
        case 0x224134u: goto label_224134;
        case 0x224138u: goto label_224138;
        case 0x22413cu: goto label_22413c;
        case 0x224140u: goto label_224140;
        case 0x224144u: goto label_224144;
        case 0x224148u: goto label_224148;
        case 0x22414cu: goto label_22414c;
        case 0x224150u: goto label_224150;
        case 0x224154u: goto label_224154;
        case 0x224158u: goto label_224158;
        case 0x22415cu: goto label_22415c;
        case 0x224160u: goto label_224160;
        case 0x224164u: goto label_224164;
        case 0x224168u: goto label_224168;
        case 0x22416cu: goto label_22416c;
        case 0x224170u: goto label_224170;
        case 0x224174u: goto label_224174;
        case 0x224178u: goto label_224178;
        case 0x22417cu: goto label_22417c;
        case 0x224180u: goto label_224180;
        case 0x224184u: goto label_224184;
        case 0x224188u: goto label_224188;
        case 0x22418cu: goto label_22418c;
        case 0x224190u: goto label_224190;
        case 0x224194u: goto label_224194;
        case 0x224198u: goto label_224198;
        case 0x22419cu: goto label_22419c;
        case 0x2241a0u: goto label_2241a0;
        case 0x2241a4u: goto label_2241a4;
        case 0x2241a8u: goto label_2241a8;
        case 0x2241acu: goto label_2241ac;
        case 0x2241b0u: goto label_2241b0;
        case 0x2241b4u: goto label_2241b4;
        case 0x2241b8u: goto label_2241b8;
        case 0x2241bcu: goto label_2241bc;
        case 0x2241c0u: goto label_2241c0;
        case 0x2241c4u: goto label_2241c4;
        case 0x2241c8u: goto label_2241c8;
        case 0x2241ccu: goto label_2241cc;
        case 0x2241d0u: goto label_2241d0;
        case 0x2241d4u: goto label_2241d4;
        case 0x2241d8u: goto label_2241d8;
        case 0x2241dcu: goto label_2241dc;
        case 0x2241e0u: goto label_2241e0;
        case 0x2241e4u: goto label_2241e4;
        case 0x2241e8u: goto label_2241e8;
        case 0x2241ecu: goto label_2241ec;
        case 0x2241f0u: goto label_2241f0;
        case 0x2241f4u: goto label_2241f4;
        case 0x2241f8u: goto label_2241f8;
        case 0x2241fcu: goto label_2241fc;
        case 0x224200u: goto label_224200;
        case 0x224204u: goto label_224204;
        case 0x224208u: goto label_224208;
        case 0x22420cu: goto label_22420c;
        case 0x224210u: goto label_224210;
        case 0x224214u: goto label_224214;
        case 0x224218u: goto label_224218;
        case 0x22421cu: goto label_22421c;
        case 0x224220u: goto label_224220;
        case 0x224224u: goto label_224224;
        case 0x224228u: goto label_224228;
        case 0x22422cu: goto label_22422c;
        case 0x224230u: goto label_224230;
        case 0x224234u: goto label_224234;
        case 0x224238u: goto label_224238;
        case 0x22423cu: goto label_22423c;
        case 0x224240u: goto label_224240;
        case 0x224244u: goto label_224244;
        case 0x224248u: goto label_224248;
        case 0x22424cu: goto label_22424c;
        case 0x224250u: goto label_224250;
        case 0x224254u: goto label_224254;
        case 0x224258u: goto label_224258;
        case 0x22425cu: goto label_22425c;
        case 0x224260u: goto label_224260;
        case 0x224264u: goto label_224264;
        case 0x224268u: goto label_224268;
        case 0x22426cu: goto label_22426c;
        case 0x224270u: goto label_224270;
        case 0x224274u: goto label_224274;
        case 0x224278u: goto label_224278;
        case 0x22427cu: goto label_22427c;
        case 0x224280u: goto label_224280;
        case 0x224284u: goto label_224284;
        case 0x224288u: goto label_224288;
        case 0x22428cu: goto label_22428c;
        case 0x224290u: goto label_224290;
        case 0x224294u: goto label_224294;
        case 0x224298u: goto label_224298;
        case 0x22429cu: goto label_22429c;
        case 0x2242a0u: goto label_2242a0;
        case 0x2242a4u: goto label_2242a4;
        case 0x2242a8u: goto label_2242a8;
        case 0x2242acu: goto label_2242ac;
        case 0x2242b0u: goto label_2242b0;
        case 0x2242b4u: goto label_2242b4;
        case 0x2242b8u: goto label_2242b8;
        case 0x2242bcu: goto label_2242bc;
        case 0x2242c0u: goto label_2242c0;
        case 0x2242c4u: goto label_2242c4;
        case 0x2242c8u: goto label_2242c8;
        case 0x2242ccu: goto label_2242cc;
        case 0x2242d0u: goto label_2242d0;
        case 0x2242d4u: goto label_2242d4;
        case 0x2242d8u: goto label_2242d8;
        case 0x2242dcu: goto label_2242dc;
        case 0x2242e0u: goto label_2242e0;
        case 0x2242e4u: goto label_2242e4;
        case 0x2242e8u: goto label_2242e8;
        case 0x2242ecu: goto label_2242ec;
        case 0x2242f0u: goto label_2242f0;
        case 0x2242f4u: goto label_2242f4;
        case 0x2242f8u: goto label_2242f8;
        case 0x2242fcu: goto label_2242fc;
        case 0x224300u: goto label_224300;
        case 0x224304u: goto label_224304;
        case 0x224308u: goto label_224308;
        case 0x22430cu: goto label_22430c;
        case 0x224310u: goto label_224310;
        case 0x224314u: goto label_224314;
        case 0x224318u: goto label_224318;
        case 0x22431cu: goto label_22431c;
        case 0x224320u: goto label_224320;
        case 0x224324u: goto label_224324;
        case 0x224328u: goto label_224328;
        case 0x22432cu: goto label_22432c;
        case 0x224330u: goto label_224330;
        case 0x224334u: goto label_224334;
        case 0x224338u: goto label_224338;
        case 0x22433cu: goto label_22433c;
        case 0x224340u: goto label_224340;
        case 0x224344u: goto label_224344;
        case 0x224348u: goto label_224348;
        case 0x22434cu: goto label_22434c;
        case 0x224350u: goto label_224350;
        case 0x224354u: goto label_224354;
        case 0x224358u: goto label_224358;
        case 0x22435cu: goto label_22435c;
        case 0x224360u: goto label_224360;
        case 0x224364u: goto label_224364;
        case 0x224368u: goto label_224368;
        case 0x22436cu: goto label_22436c;
        case 0x224370u: goto label_224370;
        case 0x224374u: goto label_224374;
        case 0x224378u: goto label_224378;
        case 0x22437cu: goto label_22437c;
        case 0x224380u: goto label_224380;
        case 0x224384u: goto label_224384;
        case 0x224388u: goto label_224388;
        case 0x22438cu: goto label_22438c;
        case 0x224390u: goto label_224390;
        case 0x224394u: goto label_224394;
        case 0x224398u: goto label_224398;
        case 0x22439cu: goto label_22439c;
        case 0x2243a0u: goto label_2243a0;
        case 0x2243a4u: goto label_2243a4;
        case 0x2243a8u: goto label_2243a8;
        case 0x2243acu: goto label_2243ac;
        case 0x2243b0u: goto label_2243b0;
        case 0x2243b4u: goto label_2243b4;
        case 0x2243b8u: goto label_2243b8;
        case 0x2243bcu: goto label_2243bc;
        case 0x2243c0u: goto label_2243c0;
        case 0x2243c4u: goto label_2243c4;
        case 0x2243c8u: goto label_2243c8;
        case 0x2243ccu: goto label_2243cc;
        case 0x2243d0u: goto label_2243d0;
        case 0x2243d4u: goto label_2243d4;
        case 0x2243d8u: goto label_2243d8;
        case 0x2243dcu: goto label_2243dc;
        case 0x2243e0u: goto label_2243e0;
        case 0x2243e4u: goto label_2243e4;
        case 0x2243e8u: goto label_2243e8;
        case 0x2243ecu: goto label_2243ec;
        case 0x2243f0u: goto label_2243f0;
        case 0x2243f4u: goto label_2243f4;
        case 0x2243f8u: goto label_2243f8;
        case 0x2243fcu: goto label_2243fc;
        case 0x224400u: goto label_224400;
        case 0x224404u: goto label_224404;
        case 0x224408u: goto label_224408;
        case 0x22440cu: goto label_22440c;
        case 0x224410u: goto label_224410;
        case 0x224414u: goto label_224414;
        case 0x224418u: goto label_224418;
        case 0x22441cu: goto label_22441c;
        case 0x224420u: goto label_224420;
        case 0x224424u: goto label_224424;
        case 0x224428u: goto label_224428;
        case 0x22442cu: goto label_22442c;
        case 0x224430u: goto label_224430;
        case 0x224434u: goto label_224434;
        case 0x224438u: goto label_224438;
        case 0x22443cu: goto label_22443c;
        case 0x224440u: goto label_224440;
        case 0x224444u: goto label_224444;
        case 0x224448u: goto label_224448;
        case 0x22444cu: goto label_22444c;
        case 0x224450u: goto label_224450;
        case 0x224454u: goto label_224454;
        case 0x224458u: goto label_224458;
        case 0x22445cu: goto label_22445c;
        case 0x224460u: goto label_224460;
        case 0x224464u: goto label_224464;
        case 0x224468u: goto label_224468;
        case 0x22446cu: goto label_22446c;
        case 0x224470u: goto label_224470;
        case 0x224474u: goto label_224474;
        case 0x224478u: goto label_224478;
        case 0x22447cu: goto label_22447c;
        case 0x224480u: goto label_224480;
        case 0x224484u: goto label_224484;
        case 0x224488u: goto label_224488;
        case 0x22448cu: goto label_22448c;
        case 0x224490u: goto label_224490;
        case 0x224494u: goto label_224494;
        case 0x224498u: goto label_224498;
        case 0x22449cu: goto label_22449c;
        case 0x2244a0u: goto label_2244a0;
        case 0x2244a4u: goto label_2244a4;
        case 0x2244a8u: goto label_2244a8;
        case 0x2244acu: goto label_2244ac;
        case 0x2244b0u: goto label_2244b0;
        case 0x2244b4u: goto label_2244b4;
        case 0x2244b8u: goto label_2244b8;
        case 0x2244bcu: goto label_2244bc;
        case 0x2244c0u: goto label_2244c0;
        case 0x2244c4u: goto label_2244c4;
        case 0x2244c8u: goto label_2244c8;
        case 0x2244ccu: goto label_2244cc;
        case 0x2244d0u: goto label_2244d0;
        case 0x2244d4u: goto label_2244d4;
        case 0x2244d8u: goto label_2244d8;
        case 0x2244dcu: goto label_2244dc;
        case 0x2244e0u: goto label_2244e0;
        case 0x2244e4u: goto label_2244e4;
        case 0x2244e8u: goto label_2244e8;
        case 0x2244ecu: goto label_2244ec;
        case 0x2244f0u: goto label_2244f0;
        case 0x2244f4u: goto label_2244f4;
        case 0x2244f8u: goto label_2244f8;
        case 0x2244fcu: goto label_2244fc;
        case 0x224500u: goto label_224500;
        case 0x224504u: goto label_224504;
        case 0x224508u: goto label_224508;
        case 0x22450cu: goto label_22450c;
        case 0x224510u: goto label_224510;
        case 0x224514u: goto label_224514;
        case 0x224518u: goto label_224518;
        case 0x22451cu: goto label_22451c;
        case 0x224520u: goto label_224520;
        case 0x224524u: goto label_224524;
        case 0x224528u: goto label_224528;
        case 0x22452cu: goto label_22452c;
        case 0x224530u: goto label_224530;
        case 0x224534u: goto label_224534;
        case 0x224538u: goto label_224538;
        case 0x22453cu: goto label_22453c;
        case 0x224540u: goto label_224540;
        case 0x224544u: goto label_224544;
        case 0x224548u: goto label_224548;
        case 0x22454cu: goto label_22454c;
        case 0x224550u: goto label_224550;
        case 0x224554u: goto label_224554;
        case 0x224558u: goto label_224558;
        case 0x22455cu: goto label_22455c;
        case 0x224560u: goto label_224560;
        case 0x224564u: goto label_224564;
        case 0x224568u: goto label_224568;
        case 0x22456cu: goto label_22456c;
        case 0x224570u: goto label_224570;
        case 0x224574u: goto label_224574;
        case 0x224578u: goto label_224578;
        case 0x22457cu: goto label_22457c;
        case 0x224580u: goto label_224580;
        case 0x224584u: goto label_224584;
        case 0x224588u: goto label_224588;
        case 0x22458cu: goto label_22458c;
        case 0x224590u: goto label_224590;
        case 0x224594u: goto label_224594;
        case 0x224598u: goto label_224598;
        case 0x22459cu: goto label_22459c;
        case 0x2245a0u: goto label_2245a0;
        case 0x2245a4u: goto label_2245a4;
        case 0x2245a8u: goto label_2245a8;
        case 0x2245acu: goto label_2245ac;
        case 0x2245b0u: goto label_2245b0;
        case 0x2245b4u: goto label_2245b4;
        case 0x2245b8u: goto label_2245b8;
        case 0x2245bcu: goto label_2245bc;
        case 0x2245c0u: goto label_2245c0;
        case 0x2245c4u: goto label_2245c4;
        case 0x2245c8u: goto label_2245c8;
        case 0x2245ccu: goto label_2245cc;
        case 0x2245d0u: goto label_2245d0;
        case 0x2245d4u: goto label_2245d4;
        case 0x2245d8u: goto label_2245d8;
        case 0x2245dcu: goto label_2245dc;
        case 0x2245e0u: goto label_2245e0;
        case 0x2245e4u: goto label_2245e4;
        case 0x2245e8u: goto label_2245e8;
        case 0x2245ecu: goto label_2245ec;
        case 0x2245f0u: goto label_2245f0;
        case 0x2245f4u: goto label_2245f4;
        case 0x2245f8u: goto label_2245f8;
        case 0x2245fcu: goto label_2245fc;
        case 0x224600u: goto label_224600;
        case 0x224604u: goto label_224604;
        case 0x224608u: goto label_224608;
        case 0x22460cu: goto label_22460c;
        case 0x224610u: goto label_224610;
        case 0x224614u: goto label_224614;
        case 0x224618u: goto label_224618;
        case 0x22461cu: goto label_22461c;
        case 0x224620u: goto label_224620;
        case 0x224624u: goto label_224624;
        case 0x224628u: goto label_224628;
        case 0x22462cu: goto label_22462c;
        case 0x224630u: goto label_224630;
        case 0x224634u: goto label_224634;
        case 0x224638u: goto label_224638;
        case 0x22463cu: goto label_22463c;
        case 0x224640u: goto label_224640;
        case 0x224644u: goto label_224644;
        case 0x224648u: goto label_224648;
        case 0x22464cu: goto label_22464c;
        case 0x224650u: goto label_224650;
        case 0x224654u: goto label_224654;
        case 0x224658u: goto label_224658;
        case 0x22465cu: goto label_22465c;
        case 0x224660u: goto label_224660;
        case 0x224664u: goto label_224664;
        case 0x224668u: goto label_224668;
        case 0x22466cu: goto label_22466c;
        case 0x224670u: goto label_224670;
        case 0x224674u: goto label_224674;
        case 0x224678u: goto label_224678;
        case 0x22467cu: goto label_22467c;
        case 0x224680u: goto label_224680;
        case 0x224684u: goto label_224684;
        case 0x224688u: goto label_224688;
        case 0x22468cu: goto label_22468c;
        case 0x224690u: goto label_224690;
        case 0x224694u: goto label_224694;
        case 0x224698u: goto label_224698;
        case 0x22469cu: goto label_22469c;
        case 0x2246a0u: goto label_2246a0;
        case 0x2246a4u: goto label_2246a4;
        case 0x2246a8u: goto label_2246a8;
        case 0x2246acu: goto label_2246ac;
        case 0x2246b0u: goto label_2246b0;
        case 0x2246b4u: goto label_2246b4;
        case 0x2246b8u: goto label_2246b8;
        case 0x2246bcu: goto label_2246bc;
        case 0x2246c0u: goto label_2246c0;
        case 0x2246c4u: goto label_2246c4;
        case 0x2246c8u: goto label_2246c8;
        case 0x2246ccu: goto label_2246cc;
        case 0x2246d0u: goto label_2246d0;
        case 0x2246d4u: goto label_2246d4;
        case 0x2246d8u: goto label_2246d8;
        case 0x2246dcu: goto label_2246dc;
        case 0x2246e0u: goto label_2246e0;
        case 0x2246e4u: goto label_2246e4;
        case 0x2246e8u: goto label_2246e8;
        case 0x2246ecu: goto label_2246ec;
        case 0x2246f0u: goto label_2246f0;
        case 0x2246f4u: goto label_2246f4;
        case 0x2246f8u: goto label_2246f8;
        case 0x2246fcu: goto label_2246fc;
        case 0x224700u: goto label_224700;
        case 0x224704u: goto label_224704;
        case 0x224708u: goto label_224708;
        case 0x22470cu: goto label_22470c;
        case 0x224710u: goto label_224710;
        case 0x224714u: goto label_224714;
        case 0x224718u: goto label_224718;
        case 0x22471cu: goto label_22471c;
        case 0x224720u: goto label_224720;
        case 0x224724u: goto label_224724;
        case 0x224728u: goto label_224728;
        case 0x22472cu: goto label_22472c;
        case 0x224730u: goto label_224730;
        case 0x224734u: goto label_224734;
        case 0x224738u: goto label_224738;
        case 0x22473cu: goto label_22473c;
        case 0x224740u: goto label_224740;
        case 0x224744u: goto label_224744;
        case 0x224748u: goto label_224748;
        case 0x22474cu: goto label_22474c;
        case 0x224750u: goto label_224750;
        case 0x224754u: goto label_224754;
        case 0x224758u: goto label_224758;
        default: break;
    }

    ctx->pc = 0x2240e8u;

label_2240e8:
    // 0x2240e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2240e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2240ec:
    // 0x2240ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2240ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2240f0:
    // 0x2240f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2240f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2240f4:
    // 0x2240f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2240f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2240f8:
    // 0x2240f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2240f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2240fc:
    // 0x2240fc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2240fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_224100:
    // 0x224100: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x224100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_224104:
    // 0x224104: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_224108:
    if (ctx->pc == 0x224108u) {
        ctx->pc = 0x224108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224104u;
        // 0x224108: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22410Cu;
        goto label_22410c;
    }
    ctx->pc = 0x224104u;
    {
        const bool branch_taken_0x224104 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x224108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224104u;
        // 0x224108: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224104) {
            ctx->pc = 0x224118u;
            goto label_224118;
        }
    }
    ctx->pc = 0x22410Cu;
label_22410c:
    // 0x22410c: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x22410cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_224110:
    // 0x224110: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_224114:
    if (ctx->pc == 0x224114u) {
        ctx->pc = 0x224114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224110u;
        // 0x224114: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224118u;
        goto label_224118;
    }
    ctx->pc = 0x224110u;
    {
        const bool branch_taken_0x224110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224110) {
            ctx->pc = 0x224114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224110u;
            // 0x224114: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224124u;
            goto label_224124;
        }
    }
    ctx->pc = 0x224118u;
label_224118:
    // 0x224118: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x224118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_22411c:
    // 0x22411c: 0x50c20001  beql        $a2, $v0, . + 4 + (0x1 << 2)
label_224120:
    if (ctx->pc == 0x224120u) {
        ctx->pc = 0x224120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22411Cu;
        // 0x224120: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224124u;
        goto label_224124;
    }
    ctx->pc = 0x22411Cu;
    {
        const bool branch_taken_0x22411c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x22411c) {
            ctx->pc = 0x224120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22411Cu;
            // 0x224120: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224124u;
            goto label_224124;
        }
    }
    ctx->pc = 0x224124u;
label_224124:
    // 0x224124: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_224128:
    if (ctx->pc == 0x224128u) {
        ctx->pc = 0x224128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224124u;
        // 0x224128: 0x2cc20002  sltiu       $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22412Cu;
        goto label_22412c;
    }
    ctx->pc = 0x224124u;
    {
        const bool branch_taken_0x224124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x224128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224124u;
        // 0x224128: 0x2cc20002  sltiu       $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224124) {
            ctx->pc = 0x2241B0u;
            goto label_2241b0;
        }
    }
    ctx->pc = 0x22412Cu;
label_22412c:
    // 0x22412c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_224130:
    if (ctx->pc == 0x224130u) {
        ctx->pc = 0x224130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22412Cu;
        // 0x224130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224134u;
        goto label_224134;
    }
    ctx->pc = 0x22412Cu;
    {
        const bool branch_taken_0x22412c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22412Cu;
        // 0x224130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22412c) {
            ctx->pc = 0x224174u;
            goto label_224174;
        }
    }
    ctx->pc = 0x224134u;
label_224134:
    // 0x224134: 0xc089bfc  jal         func_226FF0
label_224138:
    if (ctx->pc == 0x224138u) {
        ctx->pc = 0x224138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224134u;
        // 0x224138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22413Cu;
        goto label_22413c;
    }
    ctx->pc = 0x224134u;
    SET_GPR_U32(ctx, 31, 0x22413Cu);
    ctx->pc = 0x224138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224134u;
    // 0x224138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x224134u, 0x22413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22413Cu;
label_22413c:
    // 0x22413c: 0xc0e57ce  jal         func_395F38
label_224140:
    if (ctx->pc == 0x224140u) {
        ctx->pc = 0x224140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22413Cu;
        // 0x224140: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224144u;
        goto label_224144;
    }
    ctx->pc = 0x22413Cu;
    SET_GPR_U32(ctx, 31, 0x224144u);
    ctx->pc = 0x224140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22413Cu;
    // 0x224140: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x22413Cu, 0x224144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224144u;
label_224144:
    // 0x224144: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x224144u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224148:
    // 0x224148: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_22414c:
    if (ctx->pc == 0x22414Cu) {
        ctx->pc = 0x22414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224148u;
        // 0x22414c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224150u;
        goto label_224150;
    }
    ctx->pc = 0x224148u;
    {
        const bool branch_taken_0x224148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224148u;
        // 0x22414c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224148) {
            ctx->pc = 0x224170u;
            goto label_224170;
        }
    }
    ctx->pc = 0x224150u;
label_224150:
    // 0x224150: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x224150u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
label_224154:
    // 0x224154: 0xc0e44cc  jal         func_391330
label_224158:
    if (ctx->pc == 0x224158u) {
        ctx->pc = 0x224158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224154u;
        // 0x224158: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22415Cu;
        goto label_22415c;
    }
    ctx->pc = 0x224154u;
    SET_GPR_U32(ctx, 31, 0x22415Cu);
    ctx->pc = 0x224158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224154u;
    // 0x224158: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x224154u, 0x22415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22415Cu;
label_22415c:
    // 0x22415c: 0x80430087  lb          $v1, 0x87($v0)
    ctx->pc = 0x22415cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
label_224160:
    // 0x224160: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x224160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_224164:
    // 0x224164: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x224164u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_224168:
    // 0x224168: 0x14600078  bnez        $v1, . + 4 + (0x78 << 2)
label_22416c:
    if (ctx->pc == 0x22416Cu) {
        ctx->pc = 0x224170u;
        goto label_224170;
    }
    ctx->pc = 0x224168u;
    {
        const bool branch_taken_0x224168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224168) {
            ctx->pc = 0x22434Cu;
            goto label_22434c;
        }
    }
    ctx->pc = 0x224170u;
label_224170:
    // 0x224170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224174:
    // 0x224174: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224174u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224178:
    // 0x224178: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_22417c:
    // 0x22417c: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x22417cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_224180:
    // 0x224180: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224184:
    // 0x224184: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x224184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_224188:
    // 0x224188: 0xc08997c  jal         func_2265F0
label_22418c:
    if (ctx->pc == 0x22418Cu) {
        ctx->pc = 0x22418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224188u;
        // 0x22418c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224190u;
        goto label_224190;
    }
    ctx->pc = 0x224188u;
    SET_GPR_U32(ctx, 31, 0x224190u);
    ctx->pc = 0x22418Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224188u;
    // 0x22418c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224188u, 0x224190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224190u;
label_224190:
    // 0x224190: 0x14400173  bnez        $v0, . + 4 + (0x173 << 2)
label_224194:
    if (ctx->pc == 0x224194u) {
        ctx->pc = 0x224194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224190u;
        // 0x224194: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224198u;
        goto label_224198;
    }
    ctx->pc = 0x224190u;
    {
        const bool branch_taken_0x224190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224190u;
        // 0x224194: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224190) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224198u;
label_224198:
    // 0x224198: 0x3c05000e  lui         $a1, 0xE
    ctx->pc = 0x224198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14 << 16));
label_22419c:
    // 0x22419c: 0x34a53000  ori         $a1, $a1, 0x3000
    ctx->pc = 0x22419cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12288);
label_2241a0:
    // 0x2241a0: 0xc08997c  jal         func_2265F0
label_2241a4:
    if (ctx->pc == 0x2241A4u) {
        ctx->pc = 0x2241A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241A0u;
        // 0x2241a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2241A8u;
        goto label_2241a8;
    }
    ctx->pc = 0x2241A0u;
    SET_GPR_U32(ctx, 31, 0x2241A8u);
    ctx->pc = 0x2241A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2241A0u;
    // 0x2241a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2241A0u, 0x2241A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2241A8u;
label_2241a8:
    // 0x2241a8: 0x1000013b  b           . + 4 + (0x13B << 2)
label_2241ac:
    if (ctx->pc == 0x2241ACu) {
        ctx->pc = 0x2241ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241A8u;
        // 0x2241ac: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2241B0u;
        goto label_2241b0;
    }
    ctx->pc = 0x2241A8u;
    {
        const bool branch_taken_0x2241a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2241ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241A8u;
        // 0x2241ac: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241a8) {
            ctx->pc = 0x224698u;
            goto label_224698;
        }
    }
    ctx->pc = 0x2241B0u;
label_2241b0:
    // 0x2241b0: 0x24c3fff6  addiu       $v1, $a2, -0xA
    ctx->pc = 0x2241b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967286));
label_2241b4:
    // 0x2241b4: 0x2c620024  sltiu       $v0, $v1, 0x24
    ctx->pc = 0x2241b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
label_2241b8:
    // 0x2241b8: 0x10400168  beqz        $v0, . + 4 + (0x168 << 2)
label_2241bc:
    if (ctx->pc == 0x2241BCu) {
        ctx->pc = 0x2241BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241B8u;
        // 0x2241bc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2241C0u;
        goto label_2241c0;
    }
    ctx->pc = 0x2241B8u;
    {
        const bool branch_taken_0x2241b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2241BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241B8u;
        // 0x2241bc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241b8) {
            ctx->pc = 0x22475Cu;
            return;
        }
    }
    ctx->pc = 0x2241C0u;
label_2241c0:
    // 0x2241c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2241c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2241c4:
    // 0x2241c4: 0x2442b390  addiu       $v0, $v0, -0x4C70
    ctx->pc = 0x2241c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947728));
label_2241c8:
    // 0x2241c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2241c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2241cc:
    // 0x2241cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2241ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2241d0:
    // 0x2241d0: 0x800008  jr          $a0
label_2241d4:
    if (ctx->pc == 0x2241D4u) {
        ctx->pc = 0x2241D8u;
        goto label_2241d8;
    }
    ctx->pc = 0x2241D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2241D8u: goto label_2241d8;
            case 0x2242DCu: goto label_2242dc;
            case 0x2242F0u: goto label_2242f0;
            case 0x224334u: goto label_224334;
            case 0x224370u: goto label_224370;
            case 0x224400u: goto label_224400;
            case 0x224440u: goto label_224440;
            case 0x224480u: goto label_224480;
            case 0x2244CCu: goto label_2244cc;
            case 0x2244FCu: goto label_2244fc;
            case 0x224554u: goto label_224554;
            case 0x2245E4u: goto label_2245e4;
            case 0x224630u: goto label_224630;
            case 0x2246A0u: goto label_2246a0;
            case 0x2246ECu: goto label_2246ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2241D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2241D8u;
label_2241d8:
    // 0x2241d8: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2241d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_2241dc:
    // 0x2241dc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2241dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2241e0:
    // 0x2241e0: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x2241e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_2241e4:
    // 0x2241e4: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2241e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_2241e8:
    // 0x2241e8: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2241e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_2241ec:
    // 0x2241ec: 0xc08997c  jal         func_2265F0
label_2241f0:
    if (ctx->pc == 0x2241F0u) {
        ctx->pc = 0x2241F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241ECu;
        // 0x2241f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2241F4u;
        goto label_2241f4;
    }
    ctx->pc = 0x2241ECu;
    SET_GPR_U32(ctx, 31, 0x2241F4u);
    ctx->pc = 0x2241F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2241ECu;
    // 0x2241f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2241ECu, 0x2241F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2241F4u;
label_2241f4:
    // 0x2241f4: 0x1440015a  bnez        $v0, . + 4 + (0x15A << 2)
label_2241f8:
    if (ctx->pc == 0x2241F8u) {
        ctx->pc = 0x2241F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241F4u;
        // 0x2241f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2241FCu;
        goto label_2241fc;
    }
    ctx->pc = 0x2241F4u;
    {
        const bool branch_taken_0x2241f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2241F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241F4u;
        // 0x2241f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241f4) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x2241FCu;
label_2241fc:
    // 0x2241fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2241fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224200:
    // 0x224200: 0xc087502  jal         func_21D408
label_224204:
    if (ctx->pc == 0x224204u) {
        ctx->pc = 0x224204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224200u;
        // 0x224204: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224208u;
        goto label_224208;
    }
    ctx->pc = 0x224200u;
    SET_GPR_U32(ctx, 31, 0x224208u);
    ctx->pc = 0x224204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224200u;
    // 0x224204: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x224200u, 0x224208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224208u;
label_224208:
    // 0x224208: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22420c:
    // 0x22420c: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x22420cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_224210:
    // 0x224210: 0xc0a3fa4  jal         func_28FE90
label_224214:
    if (ctx->pc == 0x224214u) {
        ctx->pc = 0x224214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224210u;
        // 0x224214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224218u;
        goto label_224218;
    }
    ctx->pc = 0x224210u;
    SET_GPR_U32(ctx, 31, 0x224218u);
    ctx->pc = 0x224214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224210u;
    // 0x224214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x224210u, 0x224218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224218u;
label_224218:
    // 0x224218: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22421c:
    // 0x22421c: 0x96020024  lhu         $v0, 0x24($s0)
    ctx->pc = 0x22421cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_224220:
    // 0x224220: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x224220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_224224:
    // 0x224224: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_224228:
    if (ctx->pc == 0x224228u) {
        ctx->pc = 0x224228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224224u;
        // 0x224228: 0x9602002c  lhu         $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22422Cu;
        goto label_22422c;
    }
    ctx->pc = 0x224224u;
    {
        const bool branch_taken_0x224224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224224) {
            ctx->pc = 0x224228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224224u;
            // 0x224228: 0x9602002c  lhu         $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224244u;
            goto label_224244;
        }
    }
    ctx->pc = 0x22422Cu;
label_22422c:
    // 0x22422c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x22422cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_224230:
    // 0x224230: 0xc0a3782  jal         func_28DE08
label_224234:
    if (ctx->pc == 0x224234u) {
        ctx->pc = 0x224234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224230u;
        // 0x224234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224238u;
        goto label_224238;
    }
    ctx->pc = 0x224230u;
    SET_GPR_U32(ctx, 31, 0x224238u);
    ctx->pc = 0x224234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224230u;
    // 0x224234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE08u, 0x224230u, 0x224238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224238u;
label_224238:
    // 0x224238: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_22423c:
    if (ctx->pc == 0x22423Cu) {
        ctx->pc = 0x22423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224238u;
        // 0x22423c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224240u;
        goto label_224240;
    }
    ctx->pc = 0x224238u;
    {
        const bool branch_taken_0x224238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224238) {
            ctx->pc = 0x22423Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224238u;
            // 0x22423c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2242D4u;
            goto label_2242d4;
        }
    }
    ctx->pc = 0x224240u;
label_224240:
    // 0x224240: 0x9602002c  lhu         $v0, 0x2C($s0)
    ctx->pc = 0x224240u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
label_224244:
    // 0x224244: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x224244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_224248:
    // 0x224248: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_22424c:
    if (ctx->pc == 0x22424Cu) {
        ctx->pc = 0x22424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224248u;
        // 0x22424c: 0x9602001c  lhu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224250u;
        goto label_224250;
    }
    ctx->pc = 0x224248u;
    {
        const bool branch_taken_0x224248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224248) {
            ctx->pc = 0x22424Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224248u;
            // 0x22424c: 0x9602001c  lhu         $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224268u;
            goto label_224268;
        }
    }
    ctx->pc = 0x224250u;
label_224250:
    // 0x224250: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x224250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_224254:
    // 0x224254: 0xc0a3782  jal         func_28DE08
label_224258:
    if (ctx->pc == 0x224258u) {
        ctx->pc = 0x224258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224254u;
        // 0x224258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22425Cu;
        goto label_22425c;
    }
    ctx->pc = 0x224254u;
    SET_GPR_U32(ctx, 31, 0x22425Cu);
    ctx->pc = 0x224258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224254u;
    // 0x224258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE08u, 0x224254u, 0x22425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22425Cu;
label_22425c:
    // 0x22425c: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_224260:
    if (ctx->pc == 0x224260u) {
        ctx->pc = 0x224260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22425Cu;
        // 0x224260: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224264u;
        goto label_224264;
    }
    ctx->pc = 0x22425Cu;
    {
        const bool branch_taken_0x22425c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22425c) {
            ctx->pc = 0x224260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22425Cu;
            // 0x224260: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2242D4u;
            goto label_2242d4;
        }
    }
    ctx->pc = 0x224264u;
label_224264:
    // 0x224264: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x224264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_224268:
    // 0x224268: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x224268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22426c:
    // 0x22426c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_224270:
    if (ctx->pc == 0x224270u) {
        ctx->pc = 0x224270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22426Cu;
        // 0x224270: 0x96020034  lhu         $v0, 0x34($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224274u;
        goto label_224274;
    }
    ctx->pc = 0x22426Cu;
    {
        const bool branch_taken_0x22426c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22426c) {
            ctx->pc = 0x224270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22426Cu;
            // 0x224270: 0x96020034  lhu         $v0, 0x34($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22428Cu;
            goto label_22428c;
        }
    }
    ctx->pc = 0x224274u;
label_224274:
    // 0x224274: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x224274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_224278:
    // 0x224278: 0xc0a3782  jal         func_28DE08
label_22427c:
    if (ctx->pc == 0x22427Cu) {
        ctx->pc = 0x22427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224278u;
        // 0x22427c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224280u;
        goto label_224280;
    }
    ctx->pc = 0x224278u;
    SET_GPR_U32(ctx, 31, 0x224280u);
    ctx->pc = 0x22427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224278u;
    // 0x22427c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE08u, 0x224278u, 0x224280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224280u;
label_224280:
    // 0x224280: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_224284:
    if (ctx->pc == 0x224284u) {
        ctx->pc = 0x224284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224280u;
        // 0x224284: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224288u;
        goto label_224288;
    }
    ctx->pc = 0x224280u;
    {
        const bool branch_taken_0x224280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224280) {
            ctx->pc = 0x224284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224280u;
            // 0x224284: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2242D4u;
            goto label_2242d4;
        }
    }
    ctx->pc = 0x224288u;
label_224288:
    // 0x224288: 0x96020034  lhu         $v0, 0x34($s0)
    ctx->pc = 0x224288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
label_22428c:
    // 0x22428c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22428cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_224290:
    // 0x224290: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_224294:
    if (ctx->pc == 0x224294u) {
        ctx->pc = 0x224294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224290u;
        // 0x224294: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224298u;
        goto label_224298;
    }
    ctx->pc = 0x224290u;
    {
        const bool branch_taken_0x224290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224290) {
            ctx->pc = 0x224294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224290u;
            // 0x224294: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2242B0u;
            goto label_2242b0;
        }
    }
    ctx->pc = 0x224298u;
label_224298:
    // 0x224298: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x224298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_22429c:
    // 0x22429c: 0xc0a3782  jal         func_28DE08
label_2242a0:
    if (ctx->pc == 0x2242A0u) {
        ctx->pc = 0x2242A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22429Cu;
        // 0x2242a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2242A4u;
        goto label_2242a4;
    }
    ctx->pc = 0x22429Cu;
    SET_GPR_U32(ctx, 31, 0x2242A4u);
    ctx->pc = 0x2242A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22429Cu;
    // 0x2242a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE08u, 0x22429Cu, 0x2242A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242A4u;
label_2242a4:
    // 0x2242a4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2242a8:
    if (ctx->pc == 0x2242A8u) {
        ctx->pc = 0x2242A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242A4u;
        // 0x2242a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2242ACu;
        goto label_2242ac;
    }
    ctx->pc = 0x2242A4u;
    {
        const bool branch_taken_0x2242a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2242a4) {
            ctx->pc = 0x2242A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2242A4u;
            // 0x2242a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2242D4u;
            goto label_2242d4;
        }
    }
    ctx->pc = 0x2242ACu;
label_2242ac:
    // 0x2242ac: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x2242acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_2242b0:
    // 0x2242b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2242b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2242b4:
    // 0x2242b4: 0x1040012a  beqz        $v0, . + 4 + (0x12A << 2)
label_2242b8:
    if (ctx->pc == 0x2242B8u) {
        ctx->pc = 0x2242B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242B4u;
        // 0x2242b8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2242BCu;
        goto label_2242bc;
    }
    ctx->pc = 0x2242B4u;
    {
        const bool branch_taken_0x2242b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2242B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242B4u;
        // 0x2242b8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242b4) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x2242BCu;
label_2242bc:
    // 0x2242bc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2242bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2242c0:
    // 0x2242c0: 0xc0a3782  jal         func_28DE08
label_2242c4:
    if (ctx->pc == 0x2242C4u) {
        ctx->pc = 0x2242C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242C0u;
        // 0x2242c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2242C8u;
        goto label_2242c8;
    }
    ctx->pc = 0x2242C0u;
    SET_GPR_U32(ctx, 31, 0x2242C8u);
    ctx->pc = 0x2242C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2242C0u;
    // 0x2242c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE08u, 0x2242C0u, 0x2242C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242C8u;
label_2242c8:
    // 0x2242c8: 0x10400125  beqz        $v0, . + 4 + (0x125 << 2)
label_2242cc:
    if (ctx->pc == 0x2242CCu) {
        ctx->pc = 0x2242CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242C8u;
        // 0x2242cc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2242D0u;
        goto label_2242d0;
    }
    ctx->pc = 0x2242C8u;
    {
        const bool branch_taken_0x2242c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2242CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242C8u;
        // 0x2242cc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242c8) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x2242D0u;
label_2242d0:
    // 0x2242d0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2242d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2242d4:
    // 0x2242d4: 0x10000122  b           . + 4 + (0x122 << 2)
label_2242d8:
    if (ctx->pc == 0x2242D8u) {
        ctx->pc = 0x2242D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242D4u;
        // 0x2242d8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2242DCu;
        goto label_2242dc;
    }
    ctx->pc = 0x2242D4u;
    {
        const bool branch_taken_0x2242d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2242D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242D4u;
        // 0x2242d8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242d4) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x2242DCu;
label_2242dc:
    // 0x2242dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2242dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2242e0:
    // 0x2242e0: 0xc088fa8  jal         func_223EA0
label_2242e4:
    if (ctx->pc == 0x2242E4u) {
        ctx->pc = 0x2242E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242E0u;
        // 0x2242e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2242E8u;
        goto label_2242e8;
    }
    ctx->pc = 0x2242E0u;
    SET_GPR_U32(ctx, 31, 0x2242E8u);
    ctx->pc = 0x2242E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2242E0u;
    // 0x2242e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2242E0u, 0x2242E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242E8u;
label_2242e8:
    // 0x2242e8: 0x1000011e  b           . + 4 + (0x11E << 2)
label_2242ec:
    if (ctx->pc == 0x2242ECu) {
        ctx->pc = 0x2242ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242E8u;
        // 0x2242ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2242F0u;
        goto label_2242f0;
    }
    ctx->pc = 0x2242E8u;
    {
        const bool branch_taken_0x2242e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2242ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242E8u;
        // 0x2242ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242e8) {
            ctx->pc = 0x224764u;
            return;
        }
    }
    ctx->pc = 0x2242F0u;
label_2242f0:
    // 0x2242f0: 0x12300118  beq         $s1, $s0, . + 4 + (0x118 << 2)
label_2242f4:
    if (ctx->pc == 0x2242F4u) {
        ctx->pc = 0x2242F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242F0u;
        // 0x2242f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2242F8u;
        goto label_2242f8;
    }
    ctx->pc = 0x2242F0u;
    {
        const bool branch_taken_0x2242f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x2242F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242F0u;
        // 0x2242f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2242f0) {
            ctx->pc = 0x224754u;
            goto label_224754;
        }
    }
    ctx->pc = 0x2242F8u;
label_2242f8:
    // 0x2242f8: 0xc089480  jal         func_225200
label_2242fc:
    if (ctx->pc == 0x2242FCu) {
        ctx->pc = 0x2242FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242F8u;
        // 0x2242fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224300u;
        goto label_224300;
    }
    ctx->pc = 0x2242F8u;
    SET_GPR_U32(ctx, 31, 0x224300u);
    ctx->pc = 0x2242FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2242F8u;
    // 0x2242fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225200u, 0x2242F8u, 0x224300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224300u;
label_224300:
    // 0x224300: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_224304:
    if (ctx->pc == 0x224304u) {
        ctx->pc = 0x224308u;
        goto label_224308;
    }
    ctx->pc = 0x224300u;
    {
        const bool branch_taken_0x224300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224300) {
            ctx->pc = 0x22434Cu;
            goto label_22434c;
        }
    }
    ctx->pc = 0x224308u;
label_224308:
    // 0x224308: 0xc088e80  jal         func_223A00
label_22430c:
    if (ctx->pc == 0x22430Cu) {
        ctx->pc = 0x22430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224308u;
        // 0x22430c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224310u;
        goto label_224310;
    }
    ctx->pc = 0x224308u;
    SET_GPR_U32(ctx, 31, 0x224310u);
    ctx->pc = 0x22430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224308u;
    // 0x22430c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x224308u, 0x224310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224310u;
label_224310:
    // 0x224310: 0x14400113  bnez        $v0, . + 4 + (0x113 << 2)
label_224314:
    if (ctx->pc == 0x224314u) {
        ctx->pc = 0x224314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224310u;
        // 0x224314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224318u;
        goto label_224318;
    }
    ctx->pc = 0x224310u;
    {
        const bool branch_taken_0x224310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224310u;
        // 0x224314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224310) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224318u;
label_224318:
    // 0x224318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22431c:
    // 0x22431c: 0xc089998  jal         func_226660
label_224320:
    if (ctx->pc == 0x224320u) {
        ctx->pc = 0x224320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22431Cu;
        // 0x224320: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224324u;
        goto label_224324;
    }
    ctx->pc = 0x22431Cu;
    SET_GPR_U32(ctx, 31, 0x224324u);
    ctx->pc = 0x224320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22431Cu;
    // 0x224320: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x22431Cu, 0x224324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224324u;
label_224324:
    // 0x224324: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_224328:
    if (ctx->pc == 0x224328u) {
        ctx->pc = 0x22432Cu;
        goto label_22432c;
    }
    ctx->pc = 0x224324u;
    {
        const bool branch_taken_0x224324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224324) {
            ctx->pc = 0x22434Cu;
            goto label_22434c;
        }
    }
    ctx->pc = 0x22432Cu;
label_22432c:
    // 0x22432c: 0x1000010c  b           . + 4 + (0x10C << 2)
label_224330:
    if (ctx->pc == 0x224330u) {
        ctx->pc = 0x224330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22432Cu;
        // 0x224330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224334u;
        goto label_224334;
    }
    ctx->pc = 0x22432Cu;
    {
        const bool branch_taken_0x22432c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22432Cu;
        // 0x224330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22432c) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224334u;
label_224334:
    // 0x224334: 0x1230010a  beq         $s1, $s0, . + 4 + (0x10A << 2)
label_224338:
    if (ctx->pc == 0x224338u) {
        ctx->pc = 0x224338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224334u;
        // 0x224338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22433Cu;
        goto label_22433c;
    }
    ctx->pc = 0x224334u;
    {
        const bool branch_taken_0x224334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x224338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224334u;
        // 0x224338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224334) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x22433Cu;
label_22433c:
    // 0x22433c: 0xc088ee6  jal         func_223B98
label_224340:
    if (ctx->pc == 0x224340u) {
        ctx->pc = 0x224340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22433Cu;
        // 0x224340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224344u;
        goto label_224344;
    }
    ctx->pc = 0x22433Cu;
    SET_GPR_U32(ctx, 31, 0x224344u);
    ctx->pc = 0x224340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22433Cu;
    // 0x224340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x22433Cu, 0x224344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224344u;
label_224344:
    // 0x224344: 0x50400106  beql        $v0, $zero, . + 4 + (0x106 << 2)
label_224348:
    if (ctx->pc == 0x224348u) {
        ctx->pc = 0x224348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224344u;
        // 0x224348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22434Cu;
        goto label_22434c;
    }
    ctx->pc = 0x224344u;
    {
        const bool branch_taken_0x224344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224344) {
            ctx->pc = 0x224348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224344u;
            // 0x224348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x22434Cu;
label_22434c:
    // 0x22434c: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x22434cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224350:
    // 0x224350: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224354:
    // 0x224354: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x224354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_224358:
    // 0x224358: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_22435c:
    // 0x22435c: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x22435cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_224360:
    // 0x224360: 0xc08997c  jal         func_2265F0
label_224364:
    if (ctx->pc == 0x224364u) {
        ctx->pc = 0x224364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224360u;
        // 0x224364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224368u;
        goto label_224368;
    }
    ctx->pc = 0x224360u;
    SET_GPR_U32(ctx, 31, 0x224368u);
    ctx->pc = 0x224364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224360u;
    // 0x224364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224360u, 0x224368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224368u;
label_224368:
    // 0x224368: 0x100000fd  b           . + 4 + (0xFD << 2)
label_22436c:
    if (ctx->pc == 0x22436Cu) {
        ctx->pc = 0x22436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224368u;
        // 0x22436c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x224370u;
        goto label_224370;
    }
    ctx->pc = 0x224368u;
    {
        const bool branch_taken_0x224368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224368u;
        // 0x22436c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224368) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224370u;
label_224370:
    // 0x224370: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224374:
    // 0x224374: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224378:
    // 0x224378: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x224378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_22437c:
    // 0x22437c: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x22437cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224380:
    // 0x224380: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x224380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_224384:
    // 0x224384: 0xc08997c  jal         func_2265F0
label_224388:
    if (ctx->pc == 0x224388u) {
        ctx->pc = 0x224388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224384u;
        // 0x224388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22438Cu;
        goto label_22438c;
    }
    ctx->pc = 0x224384u;
    SET_GPR_U32(ctx, 31, 0x22438Cu);
    ctx->pc = 0x224388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224384u;
    // 0x224388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224384u, 0x22438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22438Cu;
label_22438c:
    // 0x22438c: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
label_224390:
    if (ctx->pc == 0x224390u) {
        ctx->pc = 0x224390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22438Cu;
        // 0x224390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224394u;
        goto label_224394;
    }
    ctx->pc = 0x22438Cu;
    {
        const bool branch_taken_0x22438c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22438Cu;
        // 0x224390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22438c) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224394u;
label_224394:
    // 0x224394: 0xc088c1a  jal         func_223068
label_224398:
    if (ctx->pc == 0x224398u) {
        ctx->pc = 0x224398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224394u;
        // 0x224398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22439Cu;
        goto label_22439c;
    }
    ctx->pc = 0x224394u;
    SET_GPR_U32(ctx, 31, 0x22439Cu);
    ctx->pc = 0x224398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224394u;
    // 0x224398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x224394u, 0x22439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22439Cu;
label_22439c:
    // 0x22439c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x22439cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2243a0:
    // 0x2243a0: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x2243a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2243a4:
    // 0x2243a4: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2243a4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2243a8:
    // 0x2243a8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_2243ac:
    if (ctx->pc == 0x2243ACu) {
        ctx->pc = 0x2243ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243A8u;
        // 0x2243ac: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2243B0u;
        goto label_2243b0;
    }
    ctx->pc = 0x2243A8u;
    {
        const bool branch_taken_0x2243a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2243a8) {
            ctx->pc = 0x2243ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2243A8u;
            // 0x2243ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2243B0u;
            goto label_2243b0;
        }
    }
    ctx->pc = 0x2243B0u;
label_2243b0:
    // 0x2243b0: 0x84a30148  lh          $v1, 0x148($a1)
    ctx->pc = 0x2243b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 328)));
label_2243b4:
    // 0x2243b4: 0x1012  mflo        $v0
    ctx->pc = 0x2243b4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2243b8:
    // 0x2243b8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2243b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2243bc:
    // 0x2243bc: 0x146000e8  bnez        $v1, . + 4 + (0xE8 << 2)
label_2243c0:
    if (ctx->pc == 0x2243C0u) {
        ctx->pc = 0x2243C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243BCu;
        // 0x2243c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2243C4u;
        goto label_2243c4;
    }
    ctx->pc = 0x2243BCu;
    {
        const bool branch_taken_0x2243bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2243C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243BCu;
        // 0x2243c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243bc) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x2243C4u;
label_2243c4:
    // 0x2243c4: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2243c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2243c8:
    // 0x2243c8: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x2243c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
label_2243cc:
    // 0x2243cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2243ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2243d0:
    // 0x2243d0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2243d4:
    if (ctx->pc == 0x2243D4u) {
        ctx->pc = 0x2243D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243D0u;
        // 0x2243d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2243D8u;
        goto label_2243d8;
    }
    ctx->pc = 0x2243D0u;
    {
        const bool branch_taken_0x2243d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2243D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243D0u;
        // 0x2243d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243d0) {
            ctx->pc = 0x2243F8u;
            goto label_2243f8;
        }
    }
    ctx->pc = 0x2243D8u;
label_2243d8:
    // 0x2243d8: 0x3405f7fb  ori         $a1, $zero, 0xF7FB
    ctx->pc = 0x2243d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63483);
label_2243dc:
    // 0x2243dc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2243dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2243e0:
    // 0x2243e0: 0x34a591ef  ori         $a1, $a1, 0x91EF
    ctx->pc = 0x2243e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37359);
label_2243e4:
    // 0x2243e4: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2243e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_2243e8:
    // 0x2243e8: 0x34a507d0  ori         $a1, $a1, 0x7D0
    ctx->pc = 0x2243e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2000);
label_2243ec:
    // 0x2243ec: 0xc08997c  jal         func_2265F0
label_2243f0:
    if (ctx->pc == 0x2243F0u) {
        ctx->pc = 0x2243F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243ECu;
        // 0x2243f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2243F4u;
        goto label_2243f4;
    }
    ctx->pc = 0x2243ECu;
    SET_GPR_U32(ctx, 31, 0x2243F4u);
    ctx->pc = 0x2243F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2243ECu;
    // 0x2243f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2243ECu, 0x2243F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2243F4u;
label_2243f4:
    // 0x2243f4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2243f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2243f8:
    // 0x2243f8: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_2243fc:
    if (ctx->pc == 0x2243FCu) {
        ctx->pc = 0x2243FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243F8u;
        // 0x2243fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224400u;
        goto label_224400;
    }
    ctx->pc = 0x2243F8u;
    {
        const bool branch_taken_0x2243f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2243FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243F8u;
        // 0x2243fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243f8) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224400u;
label_224400:
    // 0x224400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224404:
    // 0x224404: 0xc08997c  jal         func_2265F0
label_224408:
    if (ctx->pc == 0x224408u) {
        ctx->pc = 0x224408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224404u;
        // 0x224408: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22440Cu;
        goto label_22440c;
    }
    ctx->pc = 0x224404u;
    SET_GPR_U32(ctx, 31, 0x22440Cu);
    ctx->pc = 0x224408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224404u;
    // 0x224408: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224404u, 0x22440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22440Cu;
label_22440c:
    // 0x22440c: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
label_224410:
    if (ctx->pc == 0x224410u) {
        ctx->pc = 0x224410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22440Cu;
        // 0x224410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224414u;
        goto label_224414;
    }
    ctx->pc = 0x22440Cu;
    {
        const bool branch_taken_0x22440c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22440Cu;
        // 0x224410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22440c) {
            ctx->pc = 0x22475Cu;
            return;
        }
    }
    ctx->pc = 0x224414u;
label_224414:
    // 0x224414: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224418:
    // 0x224418: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_22441c:
    // 0x22441c: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x22441cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_224420:
    // 0x224420: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224424:
    // 0x224424: 0x34a50700  ori         $a1, $a1, 0x700
    ctx->pc = 0x224424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1792);
label_224428:
    // 0x224428: 0xc08997c  jal         func_2265F0
label_22442c:
    if (ctx->pc == 0x22442Cu) {
        ctx->pc = 0x224430u;
        goto label_224430;
    }
    ctx->pc = 0x224428u;
    SET_GPR_U32(ctx, 31, 0x224430u);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224428u, 0x224430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224430u;
label_224430:
    // 0x224430: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_224434:
    if (ctx->pc == 0x224434u) {
        ctx->pc = 0x224438u;
        goto label_224438;
    }
    ctx->pc = 0x224430u;
    {
        const bool branch_taken_0x224430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224430) {
            ctx->pc = 0x224540u;
            goto label_224540;
        }
    }
    ctx->pc = 0x224438u;
label_224438:
    // 0x224438: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_22443c:
    if (ctx->pc == 0x22443Cu) {
        ctx->pc = 0x22443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224438u;
        // 0x22443c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224440u;
        goto label_224440;
    }
    ctx->pc = 0x224438u;
    {
        const bool branch_taken_0x224438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224438u;
        // 0x22443c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224438) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224440u;
label_224440:
    // 0x224440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224444:
    // 0x224444: 0xc08997c  jal         func_2265F0
label_224448:
    if (ctx->pc == 0x224448u) {
        ctx->pc = 0x224448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224444u;
        // 0x224448: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22444Cu;
        goto label_22444c;
    }
    ctx->pc = 0x224444u;
    SET_GPR_U32(ctx, 31, 0x22444Cu);
    ctx->pc = 0x224448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224444u;
    // 0x224448: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224444u, 0x22444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22444Cu;
label_22444c:
    // 0x22444c: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
label_224450:
    if (ctx->pc == 0x224450u) {
        ctx->pc = 0x224450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22444Cu;
        // 0x224450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224454u;
        goto label_224454;
    }
    ctx->pc = 0x22444Cu;
    {
        const bool branch_taken_0x22444c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22444Cu;
        // 0x224450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22444c) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224454u;
label_224454:
    // 0x224454: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224458:
    // 0x224458: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_22445c:
    // 0x22445c: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x22445cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_224460:
    // 0x224460: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224464:
    // 0x224464: 0x34a50700  ori         $a1, $a1, 0x700
    ctx->pc = 0x224464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1792);
label_224468:
    // 0x224468: 0xc08997c  jal         func_2265F0
label_22446c:
    if (ctx->pc == 0x22446Cu) {
        ctx->pc = 0x22446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224468u;
        // 0x22446c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224470u;
        goto label_224470;
    }
    ctx->pc = 0x224468u;
    SET_GPR_U32(ctx, 31, 0x224470u);
    ctx->pc = 0x22446Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224468u;
    // 0x22446c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224468u, 0x224470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224470u;
label_224470:
    // 0x224470: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_224474:
    if (ctx->pc == 0x224474u) {
        ctx->pc = 0x224478u;
        goto label_224478;
    }
    ctx->pc = 0x224470u;
    {
        const bool branch_taken_0x224470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224470) {
            ctx->pc = 0x2245D0u;
            goto label_2245d0;
        }
    }
    ctx->pc = 0x224478u;
label_224478:
    // 0x224478: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_22447c:
    if (ctx->pc == 0x22447Cu) {
        ctx->pc = 0x22447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224478u;
        // 0x22447c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224480u;
        goto label_224480;
    }
    ctx->pc = 0x224478u;
    {
        const bool branch_taken_0x224478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224478u;
        // 0x22447c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224478) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224480u;
label_224480:
    // 0x224480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224484:
    // 0x224484: 0xc08997c  jal         func_2265F0
label_224488:
    if (ctx->pc == 0x224488u) {
        ctx->pc = 0x224488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224484u;
        // 0x224488: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22448Cu;
        goto label_22448c;
    }
    ctx->pc = 0x224484u;
    SET_GPR_U32(ctx, 31, 0x22448Cu);
    ctx->pc = 0x224488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224484u;
    // 0x224488: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224484u, 0x22448Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22448Cu;
label_22448c:
    // 0x22448c: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
label_224490:
    if (ctx->pc == 0x224490u) {
        ctx->pc = 0x224490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22448Cu;
        // 0x224490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224494u;
        goto label_224494;
    }
    ctx->pc = 0x22448Cu;
    {
        const bool branch_taken_0x22448c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22448Cu;
        // 0x224490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22448c) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224494u;
label_224494:
    // 0x224494: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224498:
    // 0x224498: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_22449c:
    // 0x22449c: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x22449cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_2244a0:
    // 0x2244a0: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2244a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_2244a4:
    // 0x2244a4: 0x34a50700  ori         $a1, $a1, 0x700
    ctx->pc = 0x2244a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1792);
label_2244a8:
    // 0x2244a8: 0xc08997c  jal         func_2265F0
label_2244ac:
    if (ctx->pc == 0x2244ACu) {
        ctx->pc = 0x2244ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244A8u;
        // 0x2244ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2244B0u;
        goto label_2244b0;
    }
    ctx->pc = 0x2244A8u;
    SET_GPR_U32(ctx, 31, 0x2244B0u);
    ctx->pc = 0x2244ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2244A8u;
    // 0x2244ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2244A8u, 0x2244B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244B0u;
label_2244b0:
    // 0x2244b0: 0x544000ab  bnel        $v0, $zero, . + 4 + (0xAB << 2)
label_2244b4:
    if (ctx->pc == 0x2244B4u) {
        ctx->pc = 0x2244B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244B0u;
        // 0x2244b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2244B8u;
        goto label_2244b8;
    }
    ctx->pc = 0x2244B0u;
    {
        const bool branch_taken_0x2244b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2244b0) {
            ctx->pc = 0x2244B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2244B0u;
            // 0x2244b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x2244B8u;
label_2244b8:
    // 0x2244b8: 0xc0e409a  jal         func_390268
label_2244bc:
    if (ctx->pc == 0x2244BCu) {
        ctx->pc = 0x2244BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244B8u;
        // 0x2244bc: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2244C0u;
        goto label_2244c0;
    }
    ctx->pc = 0x2244B8u;
    SET_GPR_U32(ctx, 31, 0x2244C0u);
    ctx->pc = 0x2244BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2244B8u;
    // 0x2244bc: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2244B8u, 0x2244C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244C0u;
label_2244c0:
    // 0x2244c0: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x2244c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
label_2244c4:
    // 0x2244c4: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_2244c8:
    if (ctx->pc == 0x2244C8u) {
        ctx->pc = 0x2244C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244C4u;
        // 0x2244c8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2244CCu;
        goto label_2244cc;
    }
    ctx->pc = 0x2244C4u;
    {
        const bool branch_taken_0x2244c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2244C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244C4u;
        // 0x2244c8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2244c4) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x2244CCu;
label_2244cc:
    // 0x2244cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2244ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2244d0:
    // 0x2244d0: 0xc08997c  jal         func_2265F0
label_2244d4:
    if (ctx->pc == 0x2244D4u) {
        ctx->pc = 0x2244D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244D0u;
        // 0x2244d4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2244D8u;
        goto label_2244d8;
    }
    ctx->pc = 0x2244D0u;
    SET_GPR_U32(ctx, 31, 0x2244D8u);
    ctx->pc = 0x2244D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2244D0u;
    // 0x2244d4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2244D0u, 0x2244D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2244D8u;
label_2244d8:
    // 0x2244d8: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
label_2244dc:
    if (ctx->pc == 0x2244DCu) {
        ctx->pc = 0x2244DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244D8u;
        // 0x2244dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2244E0u;
        goto label_2244e0;
    }
    ctx->pc = 0x2244D8u;
    {
        const bool branch_taken_0x2244d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2244DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244D8u;
        // 0x2244dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2244d8) {
            ctx->pc = 0x22475Cu;
            return;
        }
    }
    ctx->pc = 0x2244E0u;
label_2244e0:
    // 0x2244e0: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2244e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_2244e4:
    // 0x2244e4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2244e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2244e8:
    // 0x2244e8: 0x34a5d3ee  ori         $a1, $a1, 0xD3EE
    ctx->pc = 0x2244e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54254);
label_2244ec:
    // 0x2244ec: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2244ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_2244f0:
    // 0x2244f0: 0x34a503f0  ori         $a1, $a1, 0x3F0
    ctx->pc = 0x2244f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1008);
label_2244f4:
    // 0x2244f4: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
label_2244f8:
    if (ctx->pc == 0x2244F8u) {
        ctx->pc = 0x2244FCu;
        goto label_2244fc;
    }
    ctx->pc = 0x2244F4u;
    {
        const bool branch_taken_0x2244f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2244f4) {
            ctx->pc = 0x224428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224428;
        }
    }
    ctx->pc = 0x2244FCu;
label_2244fc:
    // 0x2244fc: 0xc088a42  jal         func_222908
label_224500:
    if (ctx->pc == 0x224500u) {
        ctx->pc = 0x224500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244FCu;
        // 0x224500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224504u;
        goto label_224504;
    }
    ctx->pc = 0x2244FCu;
    SET_GPR_U32(ctx, 31, 0x224504u);
    ctx->pc = 0x224500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2244FCu;
    // 0x224500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222908u, 0x2244FCu, 0x224504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224504u;
label_224504:
    // 0x224504: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
label_224508:
    if (ctx->pc == 0x224508u) {
        ctx->pc = 0x224508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224504u;
        // 0x224508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22450Cu;
        goto label_22450c;
    }
    ctx->pc = 0x224504u;
    {
        const bool branch_taken_0x224504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224504u;
        // 0x224508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224504) {
            ctx->pc = 0x22475Cu;
            return;
        }
    }
    ctx->pc = 0x22450Cu;
label_22450c:
    // 0x22450c: 0xc08997c  jal         func_2265F0
label_224510:
    if (ctx->pc == 0x224510u) {
        ctx->pc = 0x224510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22450Cu;
        // 0x224510: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224514u;
        goto label_224514;
    }
    ctx->pc = 0x22450Cu;
    SET_GPR_U32(ctx, 31, 0x224514u);
    ctx->pc = 0x224510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22450Cu;
    // 0x224510: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22450Cu, 0x224514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224514u;
label_224514:
    // 0x224514: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
label_224518:
    if (ctx->pc == 0x224518u) {
        ctx->pc = 0x224518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224514u;
        // 0x224518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22451Cu;
        goto label_22451c;
    }
    ctx->pc = 0x224514u;
    {
        const bool branch_taken_0x224514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224514u;
        // 0x224518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224514) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x22451Cu;
label_22451c:
    // 0x22451c: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x22451cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224520:
    // 0x224520: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224524:
    // 0x224524: 0x34a5d3ee  ori         $a1, $a1, 0xD3EE
    ctx->pc = 0x224524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54254);
label_224528:
    // 0x224528: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_22452c:
    // 0x22452c: 0x34a503f0  ori         $a1, $a1, 0x3F0
    ctx->pc = 0x22452cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1008);
label_224530:
    // 0x224530: 0xc08997c  jal         func_2265F0
label_224534:
    if (ctx->pc == 0x224534u) {
        ctx->pc = 0x224534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224530u;
        // 0x224534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224538u;
        goto label_224538;
    }
    ctx->pc = 0x224530u;
    SET_GPR_U32(ctx, 31, 0x224538u);
    ctx->pc = 0x224534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224530u;
    // 0x224534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224530u, 0x224538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224538u;
label_224538:
    // 0x224538: 0x54400089  bnel        $v0, $zero, . + 4 + (0x89 << 2)
label_22453c:
    if (ctx->pc == 0x22453Cu) {
        ctx->pc = 0x22453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224538u;
        // 0x22453c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224540u;
        goto label_224540;
    }
    ctx->pc = 0x224538u;
    {
        const bool branch_taken_0x224538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224538) {
            ctx->pc = 0x22453Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224538u;
            // 0x22453c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224540u;
label_224540:
    // 0x224540: 0xc0e409a  jal         func_390268
label_224544:
    if (ctx->pc == 0x224544u) {
        ctx->pc = 0x224544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224540u;
        // 0x224544: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224548u;
        goto label_224548;
    }
    ctx->pc = 0x224540u;
    SET_GPR_U32(ctx, 31, 0x224548u);
    ctx->pc = 0x224544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224540u;
    // 0x224544: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x224540u, 0x224548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224548u;
label_224548:
    // 0x224548: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x224548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
label_22454c:
    // 0x22454c: 0x10000084  b           . + 4 + (0x84 << 2)
label_224550:
    if (ctx->pc == 0x224550u) {
        ctx->pc = 0x224550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22454Cu;
        // 0x224550: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x224554u;
        goto label_224554;
    }
    ctx->pc = 0x22454Cu;
    {
        const bool branch_taken_0x22454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22454Cu;
        // 0x224550: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22454c) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224554u;
label_224554:
    // 0x224554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224558:
    // 0x224558: 0xc08997c  jal         func_2265F0
label_22455c:
    if (ctx->pc == 0x22455Cu) {
        ctx->pc = 0x22455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224558u;
        // 0x22455c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224560u;
        goto label_224560;
    }
    ctx->pc = 0x224558u;
    SET_GPR_U32(ctx, 31, 0x224560u);
    ctx->pc = 0x22455Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224558u;
    // 0x22455c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224558u, 0x224560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224560u;
label_224560:
    // 0x224560: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_224564:
    if (ctx->pc == 0x224564u) {
        ctx->pc = 0x224564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224560u;
        // 0x224564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224568u;
        goto label_224568;
    }
    ctx->pc = 0x224560u;
    {
        const bool branch_taken_0x224560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224560u;
        // 0x224564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224560) {
            ctx->pc = 0x22459Cu;
            goto label_22459c;
        }
    }
    ctx->pc = 0x224568u;
label_224568:
    // 0x224568: 0xc087502  jal         func_21D408
label_22456c:
    if (ctx->pc == 0x22456Cu) {
        ctx->pc = 0x22456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224568u;
        // 0x22456c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224570u;
        goto label_224570;
    }
    ctx->pc = 0x224568u;
    SET_GPR_U32(ctx, 31, 0x224570u);
    ctx->pc = 0x22456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224568u;
    // 0x22456c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x224568u, 0x224570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224570u;
label_224570:
    // 0x224570: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x224570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_224574:
    // 0x224574: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_224578:
    if (ctx->pc == 0x224578u) {
        ctx->pc = 0x224578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224574u;
        // 0x224578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22457Cu;
        goto label_22457c;
    }
    ctx->pc = 0x224574u;
    {
        const bool branch_taken_0x224574 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x224574) {
            ctx->pc = 0x224578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224574u;
            // 0x224578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22459Cu;
            goto label_22459c;
        }
    }
    ctx->pc = 0x22457Cu;
label_22457c:
    // 0x22457c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x22457cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_224580:
    // 0x224580: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x224580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_224584:
    // 0x224584: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x224584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_224588:
    // 0x224588: 0x40f809  jalr        $v0
label_22458c:
    if (ctx->pc == 0x22458Cu) {
        ctx->pc = 0x22458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224588u;
        // 0x22458c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224590u;
        goto label_224590;
    }
    ctx->pc = 0x224588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224590u);
        ctx->pc = 0x22458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224588u;
        // 0x22458c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224588u, 0x224590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x224590u;
label_224590:
    // 0x224590: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x224590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_224594:
    // 0x224594: 0x1043006f  beq         $v0, $v1, . + 4 + (0x6F << 2)
label_224598:
    if (ctx->pc == 0x224598u) {
        ctx->pc = 0x224598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224594u;
        // 0x224598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22459Cu;
        goto label_22459c;
    }
    ctx->pc = 0x224594u;
    {
        const bool branch_taken_0x224594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x224598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224594u;
        // 0x224598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224594) {
            ctx->pc = 0x224754u;
            goto label_224754;
        }
    }
    ctx->pc = 0x22459Cu;
label_22459c:
    // 0x22459c: 0xc08997c  jal         func_2265F0
label_2245a0:
    if (ctx->pc == 0x2245A0u) {
        ctx->pc = 0x2245A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22459Cu;
        // 0x2245a0: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2245A4u;
        goto label_2245a4;
    }
    ctx->pc = 0x22459Cu;
    SET_GPR_U32(ctx, 31, 0x2245A4u);
    ctx->pc = 0x2245A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22459Cu;
    // 0x2245a0: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22459Cu, 0x2245A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2245A4u;
label_2245a4:
    // 0x2245a4: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
label_2245a8:
    if (ctx->pc == 0x2245A8u) {
        ctx->pc = 0x2245A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245A4u;
        // 0x2245a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2245ACu;
        goto label_2245ac;
    }
    ctx->pc = 0x2245A4u;
    {
        const bool branch_taken_0x2245a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2245A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245A4u;
        // 0x2245a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245a4) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x2245ACu;
label_2245ac:
    // 0x2245ac: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2245acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_2245b0:
    // 0x2245b0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2245b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2245b4:
    // 0x2245b4: 0x34a5d3ee  ori         $a1, $a1, 0xD3EE
    ctx->pc = 0x2245b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54254);
label_2245b8:
    // 0x2245b8: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2245b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_2245bc:
    // 0x2245bc: 0x34a503f0  ori         $a1, $a1, 0x3F0
    ctx->pc = 0x2245bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1008);
label_2245c0:
    // 0x2245c0: 0xc08997c  jal         func_2265F0
label_2245c4:
    if (ctx->pc == 0x2245C4u) {
        ctx->pc = 0x2245C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245C0u;
        // 0x2245c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2245C8u;
        goto label_2245c8;
    }
    ctx->pc = 0x2245C0u;
    SET_GPR_U32(ctx, 31, 0x2245C8u);
    ctx->pc = 0x2245C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2245C0u;
    // 0x2245c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2245C0u, 0x2245C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2245C8u;
label_2245c8:
    // 0x2245c8: 0x54400065  bnel        $v0, $zero, . + 4 + (0x65 << 2)
label_2245cc:
    if (ctx->pc == 0x2245CCu) {
        ctx->pc = 0x2245CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245C8u;
        // 0x2245cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2245D0u;
        goto label_2245d0;
    }
    ctx->pc = 0x2245C8u;
    {
        const bool branch_taken_0x2245c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2245c8) {
            ctx->pc = 0x2245CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2245C8u;
            // 0x2245cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x2245D0u;
label_2245d0:
    // 0x2245d0: 0xc0e409a  jal         func_390268
label_2245d4:
    if (ctx->pc == 0x2245D4u) {
        ctx->pc = 0x2245D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245D0u;
        // 0x2245d4: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2245D8u;
        goto label_2245d8;
    }
    ctx->pc = 0x2245D0u;
    SET_GPR_U32(ctx, 31, 0x2245D8u);
    ctx->pc = 0x2245D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2245D0u;
    // 0x2245d4: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2245D0u, 0x2245D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2245D8u;
label_2245d8:
    // 0x2245d8: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x2245d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
label_2245dc:
    // 0x2245dc: 0x10000060  b           . + 4 + (0x60 << 2)
label_2245e0:
    if (ctx->pc == 0x2245E0u) {
        ctx->pc = 0x2245E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245DCu;
        // 0x2245e0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2245E4u;
        goto label_2245e4;
    }
    ctx->pc = 0x2245DCu;
    {
        const bool branch_taken_0x2245dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2245E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245DCu;
        // 0x2245e0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245dc) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x2245E4u;
label_2245e4:
    // 0x2245e4: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2245e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_2245e8:
    // 0x2245e8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2245e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2245ec:
    // 0x2245ec: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x2245ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_2245f0:
    // 0x2245f0: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2245f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_2245f4:
    // 0x2245f4: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2245f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_2245f8:
    // 0x2245f8: 0xc08997c  jal         func_2265F0
label_2245fc:
    if (ctx->pc == 0x2245FCu) {
        ctx->pc = 0x2245FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245F8u;
        // 0x2245fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224600u;
        goto label_224600;
    }
    ctx->pc = 0x2245F8u;
    SET_GPR_U32(ctx, 31, 0x224600u);
    ctx->pc = 0x2245FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2245F8u;
    // 0x2245fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2245F8u, 0x224600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224600u;
label_224600:
    // 0x224600: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_224604:
    if (ctx->pc == 0x224604u) {
        ctx->pc = 0x224604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224600u;
        // 0x224604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224608u;
        goto label_224608;
    }
    ctx->pc = 0x224600u;
    {
        const bool branch_taken_0x224600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224600u;
        // 0x224604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224600) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224608u;
label_224608:
    // 0x224608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22460c:
    // 0x22460c: 0xc089540  jal         func_225500
label_224610:
    if (ctx->pc == 0x224610u) {
        ctx->pc = 0x224610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22460Cu;
        // 0x224610: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224614u;
        goto label_224614;
    }
    ctx->pc = 0x22460Cu;
    SET_GPR_U32(ctx, 31, 0x224614u);
    ctx->pc = 0x224610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22460Cu;
    // 0x224610: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225500u, 0x22460Cu, 0x224614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224614u;
label_224614:
    // 0x224614: 0x50400052  beql        $v0, $zero, . + 4 + (0x52 << 2)
label_224618:
    if (ctx->pc == 0x224618u) {
        ctx->pc = 0x224618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224614u;
        // 0x224618: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22461Cu;
        goto label_22461c;
    }
    ctx->pc = 0x224614u;
    {
        const bool branch_taken_0x224614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224614) {
            ctx->pc = 0x224618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224614u;
            // 0x224618: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x22461Cu;
label_22461c:
    // 0x22461c: 0xc089666  jal         func_225998
label_224620:
    if (ctx->pc == 0x224620u) {
        ctx->pc = 0x224620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22461Cu;
        // 0x224620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224624u;
        goto label_224624;
    }
    ctx->pc = 0x22461Cu;
    SET_GPR_U32(ctx, 31, 0x224624u);
    ctx->pc = 0x224620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22461Cu;
    // 0x224620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225998u, 0x22461Cu, 0x224624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224624u;
label_224624:
    // 0x224624: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x224624u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_224628:
    // 0x224628: 0x1000004d  b           . + 4 + (0x4D << 2)
label_22462c:
    if (ctx->pc == 0x22462Cu) {
        ctx->pc = 0x22462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224628u;
        // 0x22462c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224630u;
        goto label_224630;
    }
    ctx->pc = 0x224628u;
    {
        const bool branch_taken_0x224628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224628u;
        // 0x22462c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224628) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224630u;
label_224630:
    // 0x224630: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_224634:
    // 0x224634: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x224634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224638:
    // 0x224638: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x224638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_22463c:
    // 0x22463c: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x22463cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224640:
    // 0x224640: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x224640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_224644:
    // 0x224644: 0xc08997c  jal         func_2265F0
label_224648:
    if (ctx->pc == 0x224648u) {
        ctx->pc = 0x224648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224644u;
        // 0x224648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22464Cu;
        goto label_22464c;
    }
    ctx->pc = 0x224644u;
    SET_GPR_U32(ctx, 31, 0x22464Cu);
    ctx->pc = 0x224648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224644u;
    // 0x224648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224644u, 0x22464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22464Cu;
label_22464c:
    // 0x22464c: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
label_224650:
    if (ctx->pc == 0x224650u) {
        ctx->pc = 0x224650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22464Cu;
        // 0x224650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224654u;
        goto label_224654;
    }
    ctx->pc = 0x22464Cu;
    {
        const bool branch_taken_0x22464c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22464Cu;
        // 0x224650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22464c) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224654u;
label_224654:
    // 0x224654: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x224654u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_224658:
    // 0x224658: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x224658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
label_22465c:
    // 0x22465c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22465cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_224660:
    // 0x224660: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_224664:
    if (ctx->pc == 0x224664u) {
        ctx->pc = 0x224664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224660u;
        // 0x224664: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224668u;
        goto label_224668;
    }
    ctx->pc = 0x224660u;
    {
        const bool branch_taken_0x224660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224660u;
        // 0x224664: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224660) {
            ctx->pc = 0x224698u;
            goto label_224698;
        }
    }
    ctx->pc = 0x224668u;
label_224668:
    // 0x224668: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x224668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_22466c:
    // 0x22466c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x22466cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_224670:
    // 0x224670: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x224670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_224674:
    // 0x224674: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x224674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_224678:
    // 0x224678: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x224678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_22467c:
    // 0x22467c: 0xc08997c  jal         func_2265F0
label_224680:
    if (ctx->pc == 0x224680u) {
        ctx->pc = 0x224680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22467Cu;
        // 0x224680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224684u;
        goto label_224684;
    }
    ctx->pc = 0x22467Cu;
    SET_GPR_U32(ctx, 31, 0x224684u);
    ctx->pc = 0x224680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22467Cu;
    // 0x224680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22467Cu, 0x224684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224684u;
label_224684:
    // 0x224684: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
label_224688:
    if (ctx->pc == 0x224688u) {
        ctx->pc = 0x224688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224684u;
        // 0x224688: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22468Cu;
        goto label_22468c;
    }
    ctx->pc = 0x224684u;
    {
        const bool branch_taken_0x224684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224684) {
            ctx->pc = 0x224688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224684u;
            // 0x224688: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x22468Cu;
label_22468c:
    // 0x22468c: 0xc088f04  jal         func_223C10
label_224690:
    if (ctx->pc == 0x224690u) {
        ctx->pc = 0x224690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22468Cu;
        // 0x224690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224694u;
        goto label_224694;
    }
    ctx->pc = 0x22468Cu;
    SET_GPR_U32(ctx, 31, 0x224694u);
    ctx->pc = 0x224690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22468Cu;
    // 0x224690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x22468Cu, 0x224694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224694u;
label_224694:
    // 0x224694: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x224694u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_224698:
    // 0x224698: 0x10000031  b           . + 4 + (0x31 << 2)
label_22469c:
    if (ctx->pc == 0x22469Cu) {
        ctx->pc = 0x22469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224698u;
        // 0x22469c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2246A0u;
        goto label_2246a0;
    }
    ctx->pc = 0x224698u;
    {
        const bool branch_taken_0x224698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224698u;
        // 0x22469c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224698) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x2246A0u;
label_2246a0:
    // 0x2246a0: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2246a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_2246a4:
    // 0x2246a4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2246a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2246a8:
    // 0x2246a8: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x2246a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_2246ac:
    // 0x2246ac: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2246acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_2246b0:
    // 0x2246b0: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2246b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_2246b4:
    // 0x2246b4: 0xc08997c  jal         func_2265F0
label_2246b8:
    if (ctx->pc == 0x2246B8u) {
        ctx->pc = 0x2246B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246B4u;
        // 0x2246b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2246BCu;
        goto label_2246bc;
    }
    ctx->pc = 0x2246B4u;
    SET_GPR_U32(ctx, 31, 0x2246BCu);
    ctx->pc = 0x2246B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2246B4u;
    // 0x2246b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2246B4u, 0x2246BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2246BCu;
label_2246bc:
    // 0x2246bc: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_2246c0:
    if (ctx->pc == 0x2246C0u) {
        ctx->pc = 0x2246C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246BCu;
        // 0x2246c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2246C4u;
        goto label_2246c4;
    }
    ctx->pc = 0x2246BCu;
    {
        const bool branch_taken_0x2246bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2246C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246BCu;
        // 0x2246c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246bc) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x2246C4u;
label_2246c4:
    // 0x2246c4: 0xc088a06  jal         func_222818
label_2246c8:
    if (ctx->pc == 0x2246C8u) {
        ctx->pc = 0x2246C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246C4u;
        // 0x2246c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2246CCu;
        goto label_2246cc;
    }
    ctx->pc = 0x2246C4u;
    SET_GPR_U32(ctx, 31, 0x2246CCu);
    ctx->pc = 0x2246C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2246C4u;
    // 0x2246c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222818u, 0x2246C4u, 0x2246CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2246CCu;
label_2246cc:
    // 0x2246cc: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_2246d0:
    if (ctx->pc == 0x2246D0u) {
        ctx->pc = 0x2246D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246CCu;
        // 0x2246d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2246D4u;
        goto label_2246d4;
    }
    ctx->pc = 0x2246CCu;
    {
        const bool branch_taken_0x2246cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2246D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246CCu;
        // 0x2246d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246cc) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x2246D4u;
label_2246d4:
    // 0x2246d4: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x2246d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_2246d8:
    // 0x2246d8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2246d8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2246dc:
    // 0x2246dc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2246e0:
    if (ctx->pc == 0x2246E0u) {
        ctx->pc = 0x2246E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246DCu;
        // 0x2246e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2246E4u;
        goto label_2246e4;
    }
    ctx->pc = 0x2246DCu;
    {
        const bool branch_taken_0x2246dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2246E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246DCu;
        // 0x2246e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246dc) {
            ctx->pc = 0x224754u;
            goto label_224754;
        }
    }
    ctx->pc = 0x2246E4u;
label_2246e4:
    // 0x2246e4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2246e8:
    if (ctx->pc == 0x2246E8u) {
        ctx->pc = 0x2246E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246E4u;
        // 0x2246e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2246ECu;
        goto label_2246ec;
    }
    ctx->pc = 0x2246E4u;
    {
        const bool branch_taken_0x2246e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2246E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246E4u;
        // 0x2246e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246e4) {
            ctx->pc = 0x224764u;
            return;
        }
    }
    ctx->pc = 0x2246ECu;
label_2246ec:
    // 0x2246ec: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x2246ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_2246f0:
    // 0x2246f0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2246f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2246f4:
    // 0x2246f4: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x2246f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_2246f8:
    // 0x2246f8: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x2246f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_2246fc:
    // 0x2246fc: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x2246fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_224700:
    // 0x224700: 0xc08997c  jal         func_2265F0
label_224704:
    if (ctx->pc == 0x224704u) {
        ctx->pc = 0x224704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224700u;
        // 0x224704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224708u;
        goto label_224708;
    }
    ctx->pc = 0x224700u;
    SET_GPR_U32(ctx, 31, 0x224708u);
    ctx->pc = 0x224704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224700u;
    // 0x224704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224700u, 0x224708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224708u;
label_224708:
    // 0x224708: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_22470c:
    if (ctx->pc == 0x22470Cu) {
        ctx->pc = 0x22470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224708u;
        // 0x22470c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224710u;
        goto label_224710;
    }
    ctx->pc = 0x224708u;
    {
        const bool branch_taken_0x224708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224708u;
        // 0x22470c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224708) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224710u;
label_224710:
    // 0x224710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_224714:
    // 0x224714: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x224714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_224718:
    // 0x224718: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x224718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
label_22471c:
    // 0x22471c: 0x34a5f080  ori         $a1, $a1, 0xF080
    ctx->pc = 0x22471cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61568);
label_224720:
    // 0x224720: 0x52938  dsll        $a1, $a1, 4
    ctx->pc = 0x224720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
label_224724:
    // 0x224724: 0xc08997c  jal         func_2265F0
label_224728:
    if (ctx->pc == 0x224728u) {
        ctx->pc = 0x224728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224724u;
        // 0x224728: 0x8e1100cc  lw          $s1, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22472Cu;
        goto label_22472c;
    }
    ctx->pc = 0x224724u;
    SET_GPR_U32(ctx, 31, 0x22472Cu);
    ctx->pc = 0x224728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224724u;
    // 0x224728: 0x8e1100cc  lw          $s1, 0xCC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x224724u, 0x22472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22472Cu;
label_22472c:
    // 0x22472c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_224730:
    if (ctx->pc == 0x224730u) {
        ctx->pc = 0x224730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22472Cu;
        // 0x224730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224734u;
        goto label_224734;
    }
    ctx->pc = 0x22472Cu;
    {
        const bool branch_taken_0x22472c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22472Cu;
        // 0x224730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22472c) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224734u;
label_224734:
    // 0x224734: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x224734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_224738:
    // 0x224738: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
label_22473c:
    if (ctx->pc == 0x22473Cu) {
        ctx->pc = 0x22473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224738u;
        // 0x22473c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224740u;
        goto label_224740;
    }
    ctx->pc = 0x224738u;
    {
        const bool branch_taken_0x224738 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x224738) {
            ctx->pc = 0x22473Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224738u;
            // 0x22473c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224740u;
label_224740:
    // 0x224740: 0xc089000  jal         func_224000
label_224744:
    if (ctx->pc == 0x224744u) {
        ctx->pc = 0x224744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224740u;
        // 0x224744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224748u;
        goto label_224748;
    }
    ctx->pc = 0x224740u;
    SET_GPR_U32(ctx, 31, 0x224748u);
    ctx->pc = 0x224744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224740u;
    // 0x224744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x224740u, 0x224748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224748u;
label_224748:
    // 0x224748: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x224748u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22474c:
    // 0x22474c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_224750:
    if (ctx->pc == 0x224750u) {
        ctx->pc = 0x224750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22474Cu;
        // 0x224750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224754u;
        goto label_224754;
    }
    ctx->pc = 0x22474Cu;
    {
        const bool branch_taken_0x22474c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x224750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22474Cu;
        // 0x224750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22474c) {
            ctx->pc = 0x224760u;
            return;
        }
    }
    ctx->pc = 0x224754u;
label_224754:
    // 0x224754: 0x10000002  b           . + 4 + (0x2 << 2)
label_224758:
    if (ctx->pc == 0x224758u) {
        ctx->pc = 0x224758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224754u;
        // 0x224758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22475Cu;
        goto label_fallthrough_0x224754;
    }
    ctx->pc = 0x224754u;
    {
        const bool branch_taken_0x224754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224754u;
        // 0x224758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224754) {
            ctx->pc = 0x224760u;
            return;
        }
    }
label_fallthrough_0x224754:
    ctx->pc = 0x22475Cu;
}
