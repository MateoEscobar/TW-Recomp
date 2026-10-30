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

// Function: sub_001303C8
// Address: 0x1303c8 - 0x130990
void sub_001303C8_0x1303c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001303C8_0x1303c8");
#endif

    switch (ctx->pc) {
        case 0x1303c8u: goto label_1303c8;
        case 0x1303ccu: goto label_1303cc;
        case 0x1303d0u: goto label_1303d0;
        case 0x1303d4u: goto label_1303d4;
        case 0x1303d8u: goto label_1303d8;
        case 0x1303dcu: goto label_1303dc;
        case 0x1303e0u: goto label_1303e0;
        case 0x1303e4u: goto label_1303e4;
        case 0x1303e8u: goto label_1303e8;
        case 0x1303ecu: goto label_1303ec;
        case 0x1303f0u: goto label_1303f0;
        case 0x1303f4u: goto label_1303f4;
        case 0x1303f8u: goto label_1303f8;
        case 0x1303fcu: goto label_1303fc;
        case 0x130400u: goto label_130400;
        case 0x130404u: goto label_130404;
        case 0x130408u: goto label_130408;
        case 0x13040cu: goto label_13040c;
        case 0x130410u: goto label_130410;
        case 0x130414u: goto label_130414;
        case 0x130418u: goto label_130418;
        case 0x13041cu: goto label_13041c;
        case 0x130420u: goto label_130420;
        case 0x130424u: goto label_130424;
        case 0x130428u: goto label_130428;
        case 0x13042cu: goto label_13042c;
        case 0x130430u: goto label_130430;
        case 0x130434u: goto label_130434;
        case 0x130438u: goto label_130438;
        case 0x13043cu: goto label_13043c;
        case 0x130440u: goto label_130440;
        case 0x130444u: goto label_130444;
        case 0x130448u: goto label_130448;
        case 0x13044cu: goto label_13044c;
        case 0x130450u: goto label_130450;
        case 0x130454u: goto label_130454;
        case 0x130458u: goto label_130458;
        case 0x13045cu: goto label_13045c;
        case 0x130460u: goto label_130460;
        case 0x130464u: goto label_130464;
        case 0x130468u: goto label_130468;
        case 0x13046cu: goto label_13046c;
        case 0x130470u: goto label_130470;
        case 0x130474u: goto label_130474;
        case 0x130478u: goto label_130478;
        case 0x13047cu: goto label_13047c;
        case 0x130480u: goto label_130480;
        case 0x130484u: goto label_130484;
        case 0x130488u: goto label_130488;
        case 0x13048cu: goto label_13048c;
        case 0x130490u: goto label_130490;
        case 0x130494u: goto label_130494;
        case 0x130498u: goto label_130498;
        case 0x13049cu: goto label_13049c;
        case 0x1304a0u: goto label_1304a0;
        case 0x1304a4u: goto label_1304a4;
        case 0x1304a8u: goto label_1304a8;
        case 0x1304acu: goto label_1304ac;
        case 0x1304b0u: goto label_1304b0;
        case 0x1304b4u: goto label_1304b4;
        case 0x1304b8u: goto label_1304b8;
        case 0x1304bcu: goto label_1304bc;
        case 0x1304c0u: goto label_1304c0;
        case 0x1304c4u: goto label_1304c4;
        case 0x1304c8u: goto label_1304c8;
        case 0x1304ccu: goto label_1304cc;
        case 0x1304d0u: goto label_1304d0;
        case 0x1304d4u: goto label_1304d4;
        case 0x1304d8u: goto label_1304d8;
        case 0x1304dcu: goto label_1304dc;
        case 0x1304e0u: goto label_1304e0;
        case 0x1304e4u: goto label_1304e4;
        case 0x1304e8u: goto label_1304e8;
        case 0x1304ecu: goto label_1304ec;
        case 0x1304f0u: goto label_1304f0;
        case 0x1304f4u: goto label_1304f4;
        case 0x1304f8u: goto label_1304f8;
        case 0x1304fcu: goto label_1304fc;
        case 0x130500u: goto label_130500;
        case 0x130504u: goto label_130504;
        case 0x130508u: goto label_130508;
        case 0x13050cu: goto label_13050c;
        case 0x130510u: goto label_130510;
        case 0x130514u: goto label_130514;
        case 0x130518u: goto label_130518;
        case 0x13051cu: goto label_13051c;
        case 0x130520u: goto label_130520;
        case 0x130524u: goto label_130524;
        case 0x130528u: goto label_130528;
        case 0x13052cu: goto label_13052c;
        case 0x130530u: goto label_130530;
        case 0x130534u: goto label_130534;
        case 0x130538u: goto label_130538;
        case 0x13053cu: goto label_13053c;
        case 0x130540u: goto label_130540;
        case 0x130544u: goto label_130544;
        case 0x130548u: goto label_130548;
        case 0x13054cu: goto label_13054c;
        case 0x130550u: goto label_130550;
        case 0x130554u: goto label_130554;
        case 0x130558u: goto label_130558;
        case 0x13055cu: goto label_13055c;
        case 0x130560u: goto label_130560;
        case 0x130564u: goto label_130564;
        case 0x130568u: goto label_130568;
        case 0x13056cu: goto label_13056c;
        case 0x130570u: goto label_130570;
        case 0x130574u: goto label_130574;
        case 0x130578u: goto label_130578;
        case 0x13057cu: goto label_13057c;
        case 0x130580u: goto label_130580;
        case 0x130584u: goto label_130584;
        case 0x130588u: goto label_130588;
        case 0x13058cu: goto label_13058c;
        case 0x130590u: goto label_130590;
        case 0x130594u: goto label_130594;
        case 0x130598u: goto label_130598;
        case 0x13059cu: goto label_13059c;
        case 0x1305a0u: goto label_1305a0;
        case 0x1305a4u: goto label_1305a4;
        case 0x1305a8u: goto label_1305a8;
        case 0x1305acu: goto label_1305ac;
        case 0x1305b0u: goto label_1305b0;
        case 0x1305b4u: goto label_1305b4;
        case 0x1305b8u: goto label_1305b8;
        case 0x1305bcu: goto label_1305bc;
        case 0x1305c0u: goto label_1305c0;
        case 0x1305c4u: goto label_1305c4;
        case 0x1305c8u: goto label_1305c8;
        case 0x1305ccu: goto label_1305cc;
        case 0x1305d0u: goto label_1305d0;
        case 0x1305d4u: goto label_1305d4;
        case 0x1305d8u: goto label_1305d8;
        case 0x1305dcu: goto label_1305dc;
        case 0x1305e0u: goto label_1305e0;
        case 0x1305e4u: goto label_1305e4;
        case 0x1305e8u: goto label_1305e8;
        case 0x1305ecu: goto label_1305ec;
        case 0x1305f0u: goto label_1305f0;
        case 0x1305f4u: goto label_1305f4;
        case 0x1305f8u: goto label_1305f8;
        case 0x1305fcu: goto label_1305fc;
        case 0x130600u: goto label_130600;
        case 0x130604u: goto label_130604;
        case 0x130608u: goto label_130608;
        case 0x13060cu: goto label_13060c;
        case 0x130610u: goto label_130610;
        case 0x130614u: goto label_130614;
        case 0x130618u: goto label_130618;
        case 0x13061cu: goto label_13061c;
        case 0x130620u: goto label_130620;
        case 0x130624u: goto label_130624;
        case 0x130628u: goto label_130628;
        case 0x13062cu: goto label_13062c;
        case 0x130630u: goto label_130630;
        case 0x130634u: goto label_130634;
        case 0x130638u: goto label_130638;
        case 0x13063cu: goto label_13063c;
        case 0x130640u: goto label_130640;
        case 0x130644u: goto label_130644;
        case 0x130648u: goto label_130648;
        case 0x13064cu: goto label_13064c;
        case 0x130650u: goto label_130650;
        case 0x130654u: goto label_130654;
        case 0x130658u: goto label_130658;
        case 0x13065cu: goto label_13065c;
        case 0x130660u: goto label_130660;
        case 0x130664u: goto label_130664;
        case 0x130668u: goto label_130668;
        case 0x13066cu: goto label_13066c;
        case 0x130670u: goto label_130670;
        case 0x130674u: goto label_130674;
        case 0x130678u: goto label_130678;
        case 0x13067cu: goto label_13067c;
        case 0x130680u: goto label_130680;
        case 0x130684u: goto label_130684;
        case 0x130688u: goto label_130688;
        case 0x13068cu: goto label_13068c;
        case 0x130690u: goto label_130690;
        case 0x130694u: goto label_130694;
        case 0x130698u: goto label_130698;
        case 0x13069cu: goto label_13069c;
        case 0x1306a0u: goto label_1306a0;
        case 0x1306a4u: goto label_1306a4;
        case 0x1306a8u: goto label_1306a8;
        case 0x1306acu: goto label_1306ac;
        case 0x1306b0u: goto label_1306b0;
        case 0x1306b4u: goto label_1306b4;
        case 0x1306b8u: goto label_1306b8;
        case 0x1306bcu: goto label_1306bc;
        case 0x1306c0u: goto label_1306c0;
        case 0x1306c4u: goto label_1306c4;
        case 0x1306c8u: goto label_1306c8;
        case 0x1306ccu: goto label_1306cc;
        case 0x1306d0u: goto label_1306d0;
        case 0x1306d4u: goto label_1306d4;
        case 0x1306d8u: goto label_1306d8;
        case 0x1306dcu: goto label_1306dc;
        case 0x1306e0u: goto label_1306e0;
        case 0x1306e4u: goto label_1306e4;
        case 0x1306e8u: goto label_1306e8;
        case 0x1306ecu: goto label_1306ec;
        case 0x1306f0u: goto label_1306f0;
        case 0x1306f4u: goto label_1306f4;
        case 0x1306f8u: goto label_1306f8;
        case 0x1306fcu: goto label_1306fc;
        case 0x130700u: goto label_130700;
        case 0x130704u: goto label_130704;
        case 0x130708u: goto label_130708;
        case 0x13070cu: goto label_13070c;
        case 0x130710u: goto label_130710;
        case 0x130714u: goto label_130714;
        case 0x130718u: goto label_130718;
        case 0x13071cu: goto label_13071c;
        case 0x130720u: goto label_130720;
        case 0x130724u: goto label_130724;
        case 0x130728u: goto label_130728;
        case 0x13072cu: goto label_13072c;
        case 0x130730u: goto label_130730;
        case 0x130734u: goto label_130734;
        case 0x130738u: goto label_130738;
        case 0x13073cu: goto label_13073c;
        case 0x130740u: goto label_130740;
        case 0x130744u: goto label_130744;
        case 0x130748u: goto label_130748;
        case 0x13074cu: goto label_13074c;
        case 0x130750u: goto label_130750;
        case 0x130754u: goto label_130754;
        case 0x130758u: goto label_130758;
        case 0x13075cu: goto label_13075c;
        case 0x130760u: goto label_130760;
        case 0x130764u: goto label_130764;
        case 0x130768u: goto label_130768;
        case 0x13076cu: goto label_13076c;
        case 0x130770u: goto label_130770;
        case 0x130774u: goto label_130774;
        case 0x130778u: goto label_130778;
        case 0x13077cu: goto label_13077c;
        case 0x130780u: goto label_130780;
        case 0x130784u: goto label_130784;
        case 0x130788u: goto label_130788;
        case 0x13078cu: goto label_13078c;
        case 0x130790u: goto label_130790;
        case 0x130794u: goto label_130794;
        case 0x130798u: goto label_130798;
        case 0x13079cu: goto label_13079c;
        case 0x1307a0u: goto label_1307a0;
        case 0x1307a4u: goto label_1307a4;
        case 0x1307a8u: goto label_1307a8;
        case 0x1307acu: goto label_1307ac;
        case 0x1307b0u: goto label_1307b0;
        case 0x1307b4u: goto label_1307b4;
        case 0x1307b8u: goto label_1307b8;
        case 0x1307bcu: goto label_1307bc;
        case 0x1307c0u: goto label_1307c0;
        case 0x1307c4u: goto label_1307c4;
        case 0x1307c8u: goto label_1307c8;
        case 0x1307ccu: goto label_1307cc;
        case 0x1307d0u: goto label_1307d0;
        case 0x1307d4u: goto label_1307d4;
        case 0x1307d8u: goto label_1307d8;
        case 0x1307dcu: goto label_1307dc;
        case 0x1307e0u: goto label_1307e0;
        case 0x1307e4u: goto label_1307e4;
        case 0x1307e8u: goto label_1307e8;
        case 0x1307ecu: goto label_1307ec;
        case 0x1307f0u: goto label_1307f0;
        case 0x1307f4u: goto label_1307f4;
        case 0x1307f8u: goto label_1307f8;
        case 0x1307fcu: goto label_1307fc;
        case 0x130800u: goto label_130800;
        case 0x130804u: goto label_130804;
        case 0x130808u: goto label_130808;
        case 0x13080cu: goto label_13080c;
        case 0x130810u: goto label_130810;
        case 0x130814u: goto label_130814;
        case 0x130818u: goto label_130818;
        case 0x13081cu: goto label_13081c;
        case 0x130820u: goto label_130820;
        case 0x130824u: goto label_130824;
        case 0x130828u: goto label_130828;
        case 0x13082cu: goto label_13082c;
        case 0x130830u: goto label_130830;
        case 0x130834u: goto label_130834;
        case 0x130838u: goto label_130838;
        case 0x13083cu: goto label_13083c;
        case 0x130840u: goto label_130840;
        case 0x130844u: goto label_130844;
        case 0x130848u: goto label_130848;
        case 0x13084cu: goto label_13084c;
        case 0x130850u: goto label_130850;
        case 0x130854u: goto label_130854;
        case 0x130858u: goto label_130858;
        case 0x13085cu: goto label_13085c;
        case 0x130860u: goto label_130860;
        case 0x130864u: goto label_130864;
        case 0x130868u: goto label_130868;
        case 0x13086cu: goto label_13086c;
        case 0x130870u: goto label_130870;
        case 0x130874u: goto label_130874;
        case 0x130878u: goto label_130878;
        case 0x13087cu: goto label_13087c;
        case 0x130880u: goto label_130880;
        case 0x130884u: goto label_130884;
        case 0x130888u: goto label_130888;
        case 0x13088cu: goto label_13088c;
        case 0x130890u: goto label_130890;
        case 0x130894u: goto label_130894;
        case 0x130898u: goto label_130898;
        case 0x13089cu: goto label_13089c;
        case 0x1308a0u: goto label_1308a0;
        case 0x1308a4u: goto label_1308a4;
        case 0x1308a8u: goto label_1308a8;
        case 0x1308acu: goto label_1308ac;
        case 0x1308b0u: goto label_1308b0;
        case 0x1308b4u: goto label_1308b4;
        case 0x1308b8u: goto label_1308b8;
        case 0x1308bcu: goto label_1308bc;
        case 0x1308c0u: goto label_1308c0;
        case 0x1308c4u: goto label_1308c4;
        case 0x1308c8u: goto label_1308c8;
        case 0x1308ccu: goto label_1308cc;
        case 0x1308d0u: goto label_1308d0;
        case 0x1308d4u: goto label_1308d4;
        case 0x1308d8u: goto label_1308d8;
        case 0x1308dcu: goto label_1308dc;
        case 0x1308e0u: goto label_1308e0;
        case 0x1308e4u: goto label_1308e4;
        case 0x1308e8u: goto label_1308e8;
        case 0x1308ecu: goto label_1308ec;
        case 0x1308f0u: goto label_1308f0;
        case 0x1308f4u: goto label_1308f4;
        case 0x1308f8u: goto label_1308f8;
        case 0x1308fcu: goto label_1308fc;
        case 0x130900u: goto label_130900;
        case 0x130904u: goto label_130904;
        case 0x130908u: goto label_130908;
        case 0x13090cu: goto label_13090c;
        case 0x130910u: goto label_130910;
        case 0x130914u: goto label_130914;
        case 0x130918u: goto label_130918;
        case 0x13091cu: goto label_13091c;
        case 0x130920u: goto label_130920;
        case 0x130924u: goto label_130924;
        case 0x130928u: goto label_130928;
        case 0x13092cu: goto label_13092c;
        case 0x130930u: goto label_130930;
        case 0x130934u: goto label_130934;
        case 0x130938u: goto label_130938;
        case 0x13093cu: goto label_13093c;
        case 0x130940u: goto label_130940;
        case 0x130944u: goto label_130944;
        case 0x130948u: goto label_130948;
        case 0x13094cu: goto label_13094c;
        case 0x130950u: goto label_130950;
        case 0x130954u: goto label_130954;
        case 0x130958u: goto label_130958;
        case 0x13095cu: goto label_13095c;
        case 0x130960u: goto label_130960;
        case 0x130964u: goto label_130964;
        case 0x130968u: goto label_130968;
        case 0x13096cu: goto label_13096c;
        case 0x130970u: goto label_130970;
        case 0x130974u: goto label_130974;
        case 0x130978u: goto label_130978;
        case 0x13097cu: goto label_13097c;
        case 0x130980u: goto label_130980;
        case 0x130984u: goto label_130984;
        case 0x130988u: goto label_130988;
        case 0x13098cu: goto label_13098c;
        default: break;
    }

    ctx->pc = 0x1303c8u;

label_1303c8:
    // 0x1303c8: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x1303c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
label_1303cc:
    // 0x1303cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1303ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1303d0:
    // 0x1303d0: 0x7fb00290  sq          $s0, 0x290($sp)
    ctx->pc = 0x1303d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 16));
label_1303d4:
    // 0x1303d4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1303d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1303d8:
    // 0x1303d8: 0x7fb30260  sq          $s3, 0x260($sp)
    ctx->pc = 0x1303d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 19));
label_1303dc:
    // 0x1303dc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1303dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1303e0:
    // 0x1303e0: 0x7fb40250  sq          $s4, 0x250($sp)
    ctx->pc = 0x1303e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 20));
label_1303e4:
    // 0x1303e4: 0x25088b40  addiu       $t0, $t0, -0x74C0
    ctx->pc = 0x1303e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937408));
label_1303e8:
    // 0x1303e8: 0x7fb50240  sq          $s5, 0x240($sp)
    ctx->pc = 0x1303e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 21));
label_1303ec:
    // 0x1303ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1303ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1303f0:
    // 0x1303f0: 0x7fb60230  sq          $s6, 0x230($sp)
    ctx->pc = 0x1303f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 22));
label_1303f4:
    // 0x1303f4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1303f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1303f8:
    // 0x1303f8: 0xe7b702b8  swc1        $f23, 0x2B8($sp)
    ctx->pc = 0x1303f8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_1303fc:
    // 0x1303fc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1303fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_130400:
    // 0x130400: 0x8c4927e4  lw          $t1, 0x27E4($v0)
    ctx->pc = 0x130400u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_130404:
    // 0x130404: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x130404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_130408:
    // 0x130408: 0x7fb10280  sq          $s1, 0x280($sp)
    ctx->pc = 0x130408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 17));
label_13040c:
    // 0x13040c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x13040cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_130410:
    // 0x130410: 0x7fb20270  sq          $s2, 0x270($sp)
    ctx->pc = 0x130410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 18));
label_130414:
    // 0x130414: 0x24a58b28  addiu       $a1, $a1, -0x74D8
    ctx->pc = 0x130414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937384));
label_130418:
    // 0x130418: 0x7fb70220  sq          $s7, 0x220($sp)
    ctx->pc = 0x130418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 23));
label_13041c:
    // 0x13041c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x13041cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_130420:
    // 0x130420: 0x7fbe0210  sq          $fp, 0x210($sp)
    ctx->pc = 0x130420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 30));
label_130424:
    // 0x130424: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x130424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_130428:
    // 0x130428: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x130428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
label_13042c:
    // 0x13042c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13042cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130430:
    // 0x130430: 0xe7b602b0  swc1        $f22, 0x2B0($sp)
    ctx->pc = 0x130430u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_130434:
    // 0x130434: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x130434u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130438:
    // 0x130438: 0xe7b502a8  swc1        $f21, 0x2A8($sp)
    ctx->pc = 0x130438u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_13043c:
    // 0x13043c: 0xe7b402a0  swc1        $f20, 0x2A0($sp)
    ctx->pc = 0x13043cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_130440:
    // 0x130440: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x130440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_130444:
    // 0x130444: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x130444u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_130448:
    // 0x130448: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x130448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_13044c:
    // 0x13044c: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x13044cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_130450:
    // 0x130450: 0x40f809  jalr        $v0
label_130454:
    if (ctx->pc == 0x130454u) {
        ctx->pc = 0x130454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130450u;
        // 0x130454: 0x24091bd4  addiu       $t1, $zero, 0x1BD4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7124));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130458u;
        goto label_130458;
    }
    ctx->pc = 0x130450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x130458u);
        ctx->pc = 0x130454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130450u;
        // 0x130454: 0x24091bd4  addiu       $t1, $zero, 0x1BD4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7124));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130450u, 0x130458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x130458u;
label_130458:
    // 0x130458: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x130458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13045c:
    // 0x13045c: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
label_130460:
    if (ctx->pc == 0x130460u) {
        ctx->pc = 0x130460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13045Cu;
        // 0x130460: 0x7a020000  lq          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130464u;
        goto label_130464;
    }
    ctx->pc = 0x13045Cu;
    {
        const bool branch_taken_0x13045c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x13045c) {
            ctx->pc = 0x130460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13045Cu;
            // 0x130460: 0x7a020000  lq          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130474u;
            goto label_130474;
        }
    }
    ctx->pc = 0x130464u;
label_130464:
    // 0x130464: 0xc0d0aa8  jal         func_342AA0
label_130468:
    if (ctx->pc == 0x130468u) {
        ctx->pc = 0x130468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130464u;
        // 0x130468: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13046Cu;
        goto label_13046c;
    }
    ctx->pc = 0x130464u;
    SET_GPR_U32(ctx, 31, 0x13046Cu);
    ctx->pc = 0x130468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130464u;
    // 0x130468: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AA0u, 0x130464u, 0x13046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13046Cu;
label_13046c:
    // 0x13046c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13046cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_130470:
    // 0x130470: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x130470u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_130474:
    // 0x130474: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x130474u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
label_130478:
    // 0x130478: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x130478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_13047c:
    // 0x13047c: 0x26920180  addiu       $s2, $s4, 0x180
    ctx->pc = 0x13047cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
label_130480:
    // 0x130480: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x130480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_130484:
    // 0x130484: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x130484u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_130488:
    // 0x130488: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x130488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_13048c:
    // 0x13048c: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x13048cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_130490:
    // 0x130490: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x130490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_130494:
    // 0x130494: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x130494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
label_130498:
    // 0x130498: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x130498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_13049c:
    // 0x13049c: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x13049cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_1304a0:
    // 0x1304a0: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x1304a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_1304a4:
    // 0x1304a4: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x1304a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_1304a8:
    // 0x1304a8: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x1304a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
label_1304ac:
    // 0x1304ac: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x1304acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_1304b0:
    // 0x1304b0: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1304b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_1304b4:
    // 0x1304b4: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x1304b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_1304b8:
    // 0x1304b8: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x1304b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
label_1304bc:
    // 0x1304bc: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1304bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_1304c0:
    // 0x1304c0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1304c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1304c4:
    // 0x1304c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1304c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1304c8:
    // 0x1304c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1304c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1304cc:
    // 0x1304cc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1304ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1304d0:
    // 0x1304d0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1304d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1304d4:
    // 0x1304d4: 0x60f809  jalr        $v1
label_1304d8:
    if (ctx->pc == 0x1304D8u) {
        ctx->pc = 0x1304D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1304D4u;
        // 0x1304d8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1304DCu;
        goto label_1304dc;
    }
    ctx->pc = 0x1304D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1304DCu);
        ctx->pc = 0x1304D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1304D4u;
        // 0x1304d8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1304D4u, 0x1304DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1304DCu;
label_1304dc:
    // 0x1304dc: 0x27b00120  addiu       $s0, $sp, 0x120
    ctx->pc = 0x1304dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1304e0:
    // 0x1304e0: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x1304e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
label_1304e4:
    // 0x1304e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1304e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1304e8:
    // 0x1304e8: 0xc0d065c  jal         func_341970
label_1304ec:
    if (ctx->pc == 0x1304ECu) {
        ctx->pc = 0x1304ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1304E8u;
        // 0x1304ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1304F0u;
        goto label_1304f0;
    }
    ctx->pc = 0x1304E8u;
    SET_GPR_U32(ctx, 31, 0x1304F0u);
    ctx->pc = 0x1304ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304E8u;
    // 0x1304ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341970u, 0x1304E8u, 0x1304F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304F0u;
label_1304f0:
    // 0x1304f0: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x1304f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1304f4:
    // 0x1304f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1304f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1304f8:
    // 0x1304f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1304f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1304fc:
    // 0x1304fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1304fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_130500:
    // 0x130500: 0xc0d06aa  jal         func_341AA8
label_130504:
    if (ctx->pc == 0x130504u) {
        ctx->pc = 0x130504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130500u;
        // 0x130504: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130508u;
        goto label_130508;
    }
    ctx->pc = 0x130500u;
    SET_GPR_U32(ctx, 31, 0x130508u);
    ctx->pc = 0x130504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130500u;
    // 0x130504: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341AA8u, 0x130500u, 0x130508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130508u;
label_130508:
    // 0x130508: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x130508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_13050c:
    // 0x13050c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13050cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_130510:
    // 0x130510: 0x8e247198  lw          $a0, 0x7198($s1)
    ctx->pc = 0x130510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29080)));
label_130514:
    // 0x130514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_130518:
    // 0x130518: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x130518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13051c:
    // 0x13051c: 0xc0d019a  jal         func_340668
label_130520:
    if (ctx->pc == 0x130520u) {
        ctx->pc = 0x130520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13051Cu;
        // 0x130520: 0xafa20160  sw          $v0, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130524u;
        goto label_130524;
    }
    ctx->pc = 0x13051Cu;
    SET_GPR_U32(ctx, 31, 0x130524u);
    ctx->pc = 0x130520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13051Cu;
    // 0x130520: 0xafa20160  sw          $v0, 0x160($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340668u, 0x13051Cu, 0x130524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130524u;
label_130524:
    // 0x130524: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x130524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_130528:
    // 0x130528: 0xc0d0704  jal         func_341C10
label_13052c:
    if (ctx->pc == 0x13052Cu) {
        ctx->pc = 0x13052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130528u;
        // 0x13052c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130530u;
        goto label_130530;
    }
    ctx->pc = 0x130528u;
    SET_GPR_U32(ctx, 31, 0x130530u);
    ctx->pc = 0x13052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130528u;
    // 0x13052c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x130528u, 0x130530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130530u;
label_130530:
    // 0x130530: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x130530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_130534:
    // 0x130534: 0x7a880180  lq          $t0, 0x180($s4)
    ctx->pc = 0x130534u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 20), 384)));
label_130538:
    // 0x130538: 0x34422812  ori         $v0, $v0, 0x2812
    ctx->pc = 0x130538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10258);
label_13053c:
    // 0x13053c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13053cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_130540:
    // 0x130540: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x130540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_130544:
    // 0x130544: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x130544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_130548:
    // 0x130548: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x130548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
label_13054c:
    // 0x13054c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x13054cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_130550:
    // 0x130550: 0xafa500d4  sw          $a1, 0xD4($sp)
    ctx->pc = 0x130550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 5));
label_130554:
    // 0x130554: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x130554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_130558:
    // 0x130558: 0xafa600e4  sw          $a2, 0xE4($sp)
    ctx->pc = 0x130558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 6));
label_13055c:
    // 0x13055c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x13055cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_130560:
    // 0x130560: 0xafa700d8  sw          $a3, 0xD8($sp)
    ctx->pc = 0x130560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 7));
label_130564:
    // 0x130564: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x130564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_130568:
    // 0x130568: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x130568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_13056c:
    // 0x13056c: 0xafb000c0  sw          $s0, 0xC0($sp)
    ctx->pc = 0x13056cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 16));
label_130570:
    // 0x130570: 0xafb300c4  sw          $s3, 0xC4($sp)
    ctx->pc = 0x130570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 19));
label_130574:
    // 0x130574: 0xafb400cc  sw          $s4, 0xCC($sp)
    ctx->pc = 0x130574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 20));
label_130578:
    // 0x130578: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x130578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_13057c:
    // 0x13057c: 0xe7b400f4  swc1        $f20, 0xF4($sp)
    ctx->pc = 0x13057cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_130580:
    // 0x130580: 0xc136afa  jal         func_4DABE8
label_130584:
    if (ctx->pc == 0x130584u) {
        ctx->pc = 0x130584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130580u;
        // 0x130584: 0x7e680050  sq          $t0, 0x50($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 80), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130588u;
        goto label_130588;
    }
    ctx->pc = 0x130580u;
    SET_GPR_U32(ctx, 31, 0x130588u);
    ctx->pc = 0x130584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130580u;
    // 0x130584: 0x7e680050  sq          $t0, 0x50($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 80), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x130580u, 0x130588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130588u;
label_130588:
    // 0x130588: 0x7ba201b0  lq          $v0, 0x1B0($sp)
    ctx->pc = 0x130588u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_13058c:
    // 0x13058c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13058cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_130590:
    // 0x130590: 0x8e247198  lw          $a0, 0x7198($s1)
    ctx->pc = 0x130590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29080)));
label_130594:
    // 0x130594: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x130594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_130598:
    // 0x130598: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x130598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_13059c:
    // 0x13059c: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x13059cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1305a0:
    // 0x1305a0: 0xc0cf9fc  jal         func_33E7F0
label_1305a4:
    if (ctx->pc == 0x1305A4u) {
        ctx->pc = 0x1305A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305A0u;
        // 0x1305a4: 0x7fa201a0  sq          $v0, 0x1A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1305A8u;
        goto label_1305a8;
    }
    ctx->pc = 0x1305A0u;
    SET_GPR_U32(ctx, 31, 0x1305A8u);
    ctx->pc = 0x1305A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305A0u;
    // 0x1305a4: 0x7fa201a0  sq          $v0, 0x1A0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E7F0u, 0x1305A0u, 0x1305A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305A8u;
label_1305a8:
    // 0x1305a8: 0x104000e1  beqz        $v0, . + 4 + (0xE1 << 2)
label_1305ac:
    if (ctx->pc == 0x1305ACu) {
        ctx->pc = 0x1305ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305A8u;
        // 0x1305ac: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1305B0u;
        goto label_1305b0;
    }
    ctx->pc = 0x1305A8u;
    {
        const bool branch_taken_0x1305a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1305ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305A8u;
        // 0x1305ac: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305a8) {
            ctx->pc = 0x130930u;
            goto label_130930;
        }
    }
    ctx->pc = 0x1305B0u;
label_1305b0:
    // 0x1305b0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1305b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1305b4:
    // 0x1305b4: 0x0  nop
    ctx->pc = 0x1305b4u;
    // NOP
label_1305b8:
    // 0x1305b8: 0x450000dd  bc1f        . + 4 + (0xDD << 2)
label_1305bc:
    if (ctx->pc == 0x1305BCu) {
        ctx->pc = 0x1305BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305B8u;
        // 0x1305bc: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1305C0u;
        goto label_1305c0;
    }
    ctx->pc = 0x1305B8u;
    {
        const bool branch_taken_0x1305b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1305BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305B8u;
        // 0x1305bc: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305b8) {
            ctx->pc = 0x130930u;
            goto label_130930;
        }
    }
    ctx->pc = 0x1305C0u;
label_1305c0:
    // 0x1305c0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1305c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1305c4:
    // 0x1305c4: 0x8c642c04  lw          $a0, 0x2C04($v1)
    ctx->pc = 0x1305c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
label_1305c8:
    // 0x1305c8: 0xc0e44cc  jal         func_391330
label_1305cc:
    if (ctx->pc == 0x1305CCu) {
        ctx->pc = 0x1305CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305C8u;
        // 0x1305cc: 0x94450112  lhu         $a1, 0x112($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1305D0u;
        goto label_1305d0;
    }
    ctx->pc = 0x1305C8u;
    SET_GPR_U32(ctx, 31, 0x1305D0u);
    ctx->pc = 0x1305CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305C8u;
    // 0x1305cc: 0x94450112  lhu         $a1, 0x112($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x1305C8u, 0x1305D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305D0u;
label_1305d0:
    // 0x1305d0: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x1305d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_1305d4:
    // 0x1305d4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1305d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1305d8:
    // 0x1305d8: 0x106200d5  beq         $v1, $v0, . + 4 + (0xD5 << 2)
label_1305dc:
    if (ctx->pc == 0x1305DCu) {
        ctx->pc = 0x1305DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305D8u;
        // 0x1305dc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1305E0u;
        goto label_1305e0;
    }
    ctx->pc = 0x1305D8u;
    {
        const bool branch_taken_0x1305d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1305DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305D8u;
        // 0x1305dc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305d8) {
            ctx->pc = 0x130930u;
            goto label_130930;
        }
    }
    ctx->pc = 0x1305E0u;
label_1305e0:
    // 0x1305e0: 0x106200d3  beq         $v1, $v0, . + 4 + (0xD3 << 2)
label_1305e4:
    if (ctx->pc == 0x1305E4u) {
        ctx->pc = 0x1305E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305E0u;
        // 0x1305e4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1305E8u;
        goto label_1305e8;
    }
    ctx->pc = 0x1305E0u;
    {
        const bool branch_taken_0x1305e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1305E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305E0u;
        // 0x1305e4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305e0) {
            ctx->pc = 0x130930u;
            goto label_130930;
        }
    }
    ctx->pc = 0x1305E8u;
label_1305e8:
    // 0x1305e8: 0x106200d1  beq         $v1, $v0, . + 4 + (0xD1 << 2)
label_1305ec:
    if (ctx->pc == 0x1305ECu) {
        ctx->pc = 0x1305ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305E8u;
        // 0x1305ec: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1305F0u;
        goto label_1305f0;
    }
    ctx->pc = 0x1305E8u;
    {
        const bool branch_taken_0x1305e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1305ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305E8u;
        // 0x1305ec: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305e8) {
            ctx->pc = 0x130930u;
            goto label_130930;
        }
    }
    ctx->pc = 0x1305F0u;
label_1305f0:
    // 0x1305f0: 0x106200cf  beq         $v1, $v0, . + 4 + (0xCF << 2)
label_1305f4:
    if (ctx->pc == 0x1305F4u) {
        ctx->pc = 0x1305F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305F0u;
        // 0x1305f4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1305F8u;
        goto label_1305f8;
    }
    ctx->pc = 0x1305F0u;
    {
        const bool branch_taken_0x1305f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1305F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305F0u;
        // 0x1305f4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305f0) {
            ctx->pc = 0x130930u;
            goto label_130930;
        }
    }
    ctx->pc = 0x1305F8u;
label_1305f8:
    // 0x1305f8: 0x106200cd  beq         $v1, $v0, . + 4 + (0xCD << 2)
label_1305fc:
    if (ctx->pc == 0x1305FCu) {
        ctx->pc = 0x1305FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305F8u;
        // 0x1305fc: 0x7ba20050  lq          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130600u;
        goto label_130600;
    }
    ctx->pc = 0x1305F8u;
    {
        const bool branch_taken_0x1305f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1305FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305F8u;
        // 0x1305fc: 0x7ba20050  lq          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305f8) {
            ctx->pc = 0x130930u;
            goto label_130930;
        }
    }
    ctx->pc = 0x130600u;
label_130600:
    // 0x130600: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x130600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130604:
    // 0x130604: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x130604u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_130608:
    // 0x130608: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x130608u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13060c:
    // 0x13060c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x13060cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_130610:
    // 0x130610: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x130610u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_130614:
    // 0x130614: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x130614u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_130618:
    // 0x130618: 0x4a0003bf  vwaitq
    ctx->pc = 0x130618u;
    // VWAITQ (Q already resolved in this runtime)
label_13061c:
    // 0x13061c: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x13061cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_130620:
    // 0x130620: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x130620u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_130624:
    // 0x130624: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x130624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_130628:
    // 0x130628: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x130628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_13062c:
    // 0x13062c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x13062cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_130630:
    // 0x130630: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x130630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
label_130634:
    // 0x130634: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x130634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_130638:
    // 0x130638: 0x90620030  lbu         $v0, 0x30($v1)
    ctx->pc = 0x130638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
label_13063c:
    // 0x13063c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13063cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_130640:
    // 0x130640: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x130640u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_130644:
    // 0x130644: 0x10e000a5  beqz        $a3, . + 4 + (0xA5 << 2)
label_130648:
    if (ctx->pc == 0x130648u) {
        ctx->pc = 0x130648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130644u;
        // 0x130648: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13064Cu;
        goto label_13064c;
    }
    ctx->pc = 0x130644u;
    {
        const bool branch_taken_0x130644 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x130648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130644u;
        // 0x130648: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130644) {
            ctx->pc = 0x1308DCu;
            goto label_1308dc;
        }
    }
    ctx->pc = 0x13064Cu;
label_13064c:
    // 0x13064c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x13064cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_130650:
    // 0x130650: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x130650u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_130654:
    // 0x130654: 0x24a51750  addiu       $a1, $a1, 0x1750
    ctx->pc = 0x130654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5968));
label_130658:
    // 0x130658: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x130658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_13065c:
    // 0x13065c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13065cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_130660:
    // 0x130660: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x130660u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_130664:
    // 0x130664: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x130664u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_130668:
    // 0x130668: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x130668u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_13066c:
    // 0x13066c: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x13066cu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_130670:
    // 0x130670: 0x4a0003bf  vwaitq
    ctx->pc = 0x130670u;
    // VWAITQ (Q already resolved in this runtime)
label_130674:
    // 0x130674: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x130674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_130678:
    // 0x130678: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x130678u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_13067c:
    // 0x13067c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x13067cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_130680:
    // 0x130680: 0x24c61730  addiu       $a2, $a2, 0x1730
    ctx->pc = 0x130680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5936));
label_130684:
    // 0x130684: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x130684u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_130688:
    // 0x130688: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x130688u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13068c:
    // 0x13068c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x13068cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_130690:
    // 0x130690: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x130690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_130694:
    // 0x130694: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x130694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_130698:
    // 0x130698: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x130698u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_13069c:
    // 0x13069c: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x13069cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1306a0:
    // 0x1306a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1306a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1306a4:
    // 0x1306a4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1306a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_1306a8:
    // 0x1306a8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x1306a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1306ac:
    // 0x1306ac: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1306acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1306b0:
    // 0x1306b0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1306b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1306b4:
    // 0x1306b4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1306b4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_1306b8:
    // 0x1306b8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1306b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1306bc:
    // 0x1306bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1306bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1306c0:
    // 0x1306c0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1306c0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_1306c4:
    // 0x1306c4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1306c4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1306c8:
    // 0x1306c8: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x1306c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
label_1306cc:
    // 0x1306cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1306ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1306d0:
    // 0x1306d0: 0x0  nop
    ctx->pc = 0x1306d0u;
    // NOP
label_1306d4:
    // 0x1306d4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1306d8:
    if (ctx->pc == 0x1306D8u) {
        ctx->pc = 0x1306D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306D4u;
        // 0x1306d8: 0x7fa201a0  sq          $v0, 0x1A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1306DCu;
        goto label_1306dc;
    }
    ctx->pc = 0x1306D4u;
    {
        const bool branch_taken_0x1306d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1306D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306D4u;
        // 0x1306d8: 0x7fa201a0  sq          $v0, 0x1A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306d4) {
            ctx->pc = 0x13071Cu;
            goto label_13071c;
        }
    }
    ctx->pc = 0x1306DCu;
label_1306dc:
    // 0x1306dc: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x1306dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1306e0:
    // 0x1306e0: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1306e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1306e4:
    // 0x1306e4: 0x0  nop
    ctx->pc = 0x1306e4u;
    // NOP
label_1306e8:
    // 0x1306e8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1306ec:
    if (ctx->pc == 0x1306ECu) {
        ctx->pc = 0x1306ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306E8u;
        // 0x1306ec: 0xe7b601a8  swc1        $f22, 0x1A8($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1306F0u;
        goto label_1306f0;
    }
    ctx->pc = 0x1306E8u;
    {
        const bool branch_taken_0x1306e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1306ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306E8u;
        // 0x1306ec: 0xe7b601a8  swc1        $f22, 0x1A8($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306e8) {
            ctx->pc = 0x130708u;
            goto label_130708;
        }
    }
    ctx->pc = 0x1306F0u;
label_1306f0:
    // 0x1306f0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1306f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1306f4:
    // 0x1306f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1306f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1306f8:
    // 0x1306f8: 0x0  nop
    ctx->pc = 0x1306f8u;
    // NOP
label_1306fc:
    // 0x1306fc: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x1306fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_130700:
    // 0x130700: 0x10000003  b           . + 4 + (0x3 << 2)
label_130704:
    if (ctx->pc == 0x130704u) {
        ctx->pc = 0x130704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130700u;
        // 0x130704: 0xe7b401ac  swc1        $f20, 0x1AC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x130708u;
        goto label_130708;
    }
    ctx->pc = 0x130700u;
    {
        const bool branch_taken_0x130700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130700u;
        // 0x130704: 0xe7b401ac  swc1        $f20, 0x1AC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130700) {
            ctx->pc = 0x130710u;
            goto label_130710;
        }
    }
    ctx->pc = 0x130708u;
label_130708:
    // 0x130708: 0xe7b401ac  swc1        $f20, 0x1AC($sp)
    ctx->pc = 0x130708u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_13070c:
    // 0x13070c: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x13070cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_130710:
    // 0x130710: 0xe7b601a4  swc1        $f22, 0x1A4($sp)
    ctx->pc = 0x130710u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_130714:
    // 0x130714: 0x10000010  b           . + 4 + (0x10 << 2)
label_130718:
    if (ctx->pc == 0x130718u) {
        ctx->pc = 0x130718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130714u;
        // 0x130718: 0xc4ec0040  lwc1        $f12, 0x40($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13071Cu;
        goto label_13071c;
    }
    ctx->pc = 0x130714u;
    {
        const bool branch_taken_0x130714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130714u;
        // 0x130718: 0xc4ec0040  lwc1        $f12, 0x40($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130714) {
            ctx->pc = 0x130758u;
            goto label_130758;
        }
    }
    ctx->pc = 0x13071Cu;
label_13071c:
    // 0x13071c: 0xc7a001a4  lwc1        $f0, 0x1A4($sp)
    ctx->pc = 0x13071cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_130720:
    // 0x130720: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x130720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_130724:
    // 0x130724: 0x0  nop
    ctx->pc = 0x130724u;
    // NOP
label_130728:
    // 0x130728: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_13072c:
    if (ctx->pc == 0x13072Cu) {
        ctx->pc = 0x13072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130728u;
        // 0x13072c: 0x27a201a0  addiu       $v0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130730u;
        goto label_130730;
    }
    ctx->pc = 0x130728u;
    {
        const bool branch_taken_0x130728 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130728u;
        // 0x13072c: 0x27a201a0  addiu       $v0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130728) {
            ctx->pc = 0x130744u;
            goto label_130744;
        }
    }
    ctx->pc = 0x130730u;
label_130730:
    // 0x130730: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x130730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_130734:
    // 0x130734: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x130734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_130738:
    // 0x130738: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x130738u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_13073c:
    // 0x13073c: 0x10000003  b           . + 4 + (0x3 << 2)
label_130740:
    if (ctx->pc == 0x130740u) {
        ctx->pc = 0x130740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13073Cu;
        // 0x130740: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x130744u;
        goto label_130744;
    }
    ctx->pc = 0x13073Cu;
    {
        const bool branch_taken_0x13073c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13073Cu;
        // 0x130740: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13073c) {
            ctx->pc = 0x13074Cu;
            goto label_13074c;
        }
    }
    ctx->pc = 0x130744u;
label_130744:
    // 0x130744: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x130744u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_130748:
    // 0x130748: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x130748u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_13074c:
    // 0x13074c: 0xe7b601a8  swc1        $f22, 0x1A8($sp)
    ctx->pc = 0x13074cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_130750:
    // 0x130750: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x130750u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_130754:
    // 0x130754: 0xc4ec0044  lwc1        $f12, 0x44($a3)
    ctx->pc = 0x130754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_130758:
    // 0x130758: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x130758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_13075c:
    // 0x13075c: 0xc136b24  jal         func_4DAC90
label_130760:
    if (ctx->pc == 0x130760u) {
        ctx->pc = 0x130760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13075Cu;
        // 0x130760: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130764u;
        goto label_130764;
    }
    ctx->pc = 0x13075Cu;
    SET_GPR_U32(ctx, 31, 0x130764u);
    ctx->pc = 0x130760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13075Cu;
    // 0x130760: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13075Cu, 0x130764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130764u;
label_130764:
    // 0x130764: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x130764u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_130768:
    // 0x130768: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x130768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_13076c:
    // 0x13076c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x13076cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_130770:
    // 0x130770: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x130770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_130774:
    // 0x130774: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x130774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_130778:
    // 0x130778: 0xc136b24  jal         func_4DAC90
label_13077c:
    if (ctx->pc == 0x13077Cu) {
        ctx->pc = 0x13077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130778u;
        // 0x13077c: 0x7fa201e0  sq          $v0, 0x1E0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130780u;
        goto label_130780;
    }
    ctx->pc = 0x130778u;
    SET_GPR_U32(ctx, 31, 0x130780u);
    ctx->pc = 0x13077Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130778u;
    // 0x13077c: 0x7fa201e0  sq          $v0, 0x1E0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x130778u, 0x130780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130780u;
label_130780:
    // 0x130780: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x130780u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_130784:
    // 0x130784: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x130784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_130788:
    // 0x130788: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x130788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_13078c:
    // 0x13078c: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x13078cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_130790:
    // 0x130790: 0xc136b18  jal         func_4DAC60
label_130794:
    if (ctx->pc == 0x130794u) {
        ctx->pc = 0x130794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130790u;
        // 0x130794: 0x7fa201d0  sq          $v0, 0x1D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130798u;
        goto label_130798;
    }
    ctx->pc = 0x130790u;
    SET_GPR_U32(ctx, 31, 0x130798u);
    ctx->pc = 0x130794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130790u;
    // 0x130794: 0x7fa201d0  sq          $v0, 0x1D0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x130790u, 0x130798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130798u;
label_130798:
    // 0x130798: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x130798u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_13079c:
    // 0x13079c: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x13079cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
label_1307a0:
    // 0x1307a0: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x1307a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
label_1307a4:
    // 0x1307a4: 0xc6810410  lwc1        $f1, 0x410($s4)
    ctx->pc = 0x1307a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1307a8:
    // 0x1307a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1307a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1307ac:
    // 0x1307ac: 0x7ba401a0  lq          $a0, 0x1A0($sp)
    ctx->pc = 0x1307acu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_1307b0:
    // 0x1307b0: 0x7ba201b0  lq          $v0, 0x1B0($sp)
    ctx->pc = 0x1307b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_1307b4:
    // 0x1307b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1307b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1307b8:
    // 0x1307b8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1307b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_1307bc:
    // 0x1307bc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1307bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1307c0:
    // 0x1307c0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x1307c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1307c4:
    // 0x1307c4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1307c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1307c8:
    // 0x1307c8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1307c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1307cc:
    // 0x1307cc: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1307ccu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_1307d0:
    // 0x1307d0: 0x7a8301e0  lq          $v1, 0x1E0($s4)
    ctx->pc = 0x1307d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 480)));
label_1307d4:
    // 0x1307d4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1307d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1307d8:
    // 0x1307d8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1307d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_1307dc:
    // 0x1307dc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x1307dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1307e0:
    // 0x1307e0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1307e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1307e4:
    // 0x1307e4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1307e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1307e8:
    // 0x1307e8: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x1307e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_1307ec:
    // 0x1307ec: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1307ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1307f0:
    // 0x1307f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1307f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1307f4:
    // 0x1307f4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1307f8:
    if (ctx->pc == 0x1307F8u) {
        ctx->pc = 0x1307F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1307F4u;
        // 0x1307f8: 0x46010581  sub.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1307FCu;
        goto label_1307fc;
    }
    ctx->pc = 0x1307F4u;
    {
        const bool branch_taken_0x1307f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1307F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1307F4u;
        // 0x1307f8: 0x46010581  sub.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1307f4) {
            ctx->pc = 0x130810u;
            goto label_130810;
        }
    }
    ctx->pc = 0x1307FCu;
label_1307fc:
    // 0x1307fc: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1307fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_130800:
    // 0x130800: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x130800u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_130804:
    // 0x130804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x130804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_130808:
    // 0x130808: 0x0  nop
    ctx->pc = 0x130808u;
    // NOP
label_13080c:
    // 0x13080c: 0xe6800410  swc1        $f0, 0x410($s4)
    ctx->pc = 0x13080cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1040), bits); }
label_130810:
    // 0x130810: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x130810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_130814:
    // 0x130814: 0x7ba501a0  lq          $a1, 0x1A0($sp)
    ctx->pc = 0x130814u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_130818:
    // 0x130818: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x130818u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_13081c:
    // 0x13081c: 0x8c66005c  lw          $a2, 0x5C($v1)
    ctx->pc = 0x13081cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_130820:
    // 0x130820: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x130820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_130824:
    // 0x130824: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x130824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_130828:
    // 0x130828: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x130828u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_13082c:
    // 0x13082c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x13082cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_130830:
    // 0x130830: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x130830u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_130834:
    // 0x130834: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x130834u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_130838:
    // 0x130838: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x130838u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_13083c:
    // 0x13083c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x13083cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_130840:
    // 0x130840: 0xc0f809  jalr        $a2
label_130844:
    if (ctx->pc == 0x130844u) {
        ctx->pc = 0x130848u;
        goto label_130848;
    }
    ctx->pc = 0x130840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x130848u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130840u, 0x130848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x130848u;
label_130848:
    // 0x130848: 0x0  nop
    ctx->pc = 0x130848u;
    // NOP
label_13084c:
    // 0x13084c: 0x0  nop
    ctx->pc = 0x13084cu;
    // NOP
label_130850:
    // 0x130850: 0x4614b043  div.s       $f1, $f22, $f20
    ctx->pc = 0x130850u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[22], ctx->f[20]); }
label_130854:
    // 0x130854: 0xc6830410  lwc1        $f3, 0x410($s4)
    ctx->pc = 0x130854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_130858:
    // 0x130858: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x130858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13085c:
    // 0x13085c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13085cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_130860:
    // 0x130860: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x130860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_130864:
    // 0x130864: 0xc68401a0  lwc1        $f4, 0x1A0($s4)
    ctx->pc = 0x130864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_130868:
    // 0x130868: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x130868u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
label_13086c:
    // 0x13086c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x13086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_130870:
    // 0x130870: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x130870u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_130874:
    // 0x130874: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x130874u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_130878:
    // 0x130878: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x130878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_13087c:
    // 0x13087c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x13087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_130880:
    // 0x130880: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x130880u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_130884:
    // 0x130884: 0x46040d42  mul.s       $f21, $f1, $f4
    ctx->pc = 0x130884u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_130888:
    // 0x130888: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x130888u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_13088c:
    // 0x13088c: 0x60f809  jalr        $v1
label_130890:
    if (ctx->pc == 0x130890u) {
        ctx->pc = 0x130890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13088Cu;
        // 0x130890: 0x4614b501  sub.s       $f20, $f22, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x130894u;
        goto label_130894;
    }
    ctx->pc = 0x13088Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x130894u);
        ctx->pc = 0x130890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13088Cu;
        // 0x130890: 0x4614b501  sub.s       $f20, $f22, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13088Cu, 0x130894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x130894u;
label_130894:
    // 0x130894: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x130894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_130898:
    // 0x130898: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x130898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13089c:
    // 0x13089c: 0x0  nop
    ctx->pc = 0x13089cu;
    // NOP
label_1308a0:
    // 0x1308a0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_1308a4:
    if (ctx->pc == 0x1308A4u) {
        ctx->pc = 0x1308A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308A0u;
        // 0x1308a4: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1308A8u;
        goto label_1308a8;
    }
    ctx->pc = 0x1308A0u;
    {
        const bool branch_taken_0x1308a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1308A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308A0u;
        // 0x1308a4: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308a0) {
            ctx->pc = 0x1308DCu;
            goto label_1308dc;
        }
    }
    ctx->pc = 0x1308A8u;
label_1308a8:
    // 0x1308a8: 0x4615bb01  sub.s       $f12, $f23, $f21
    ctx->pc = 0x1308a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
label_1308ac:
    // 0x1308ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1308acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1308b0:
    // 0x1308b0: 0xc136b24  jal         func_4DAC90
label_1308b4:
    if (ctx->pc == 0x1308B4u) {
        ctx->pc = 0x1308B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308B0u;
        // 0x1308b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1308B8u;
        goto label_1308b8;
    }
    ctx->pc = 0x1308B0u;
    SET_GPR_U32(ctx, 31, 0x1308B8u);
    ctx->pc = 0x1308B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1308B0u;
    // 0x1308b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1308B0u, 0x1308B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308B8u;
label_1308b8:
    // 0x1308b8: 0x7ba201e0  lq          $v0, 0x1E0($sp)
    ctx->pc = 0x1308b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_1308bc:
    // 0x1308bc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1308bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1308c0:
    // 0x1308c0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1308c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1308c4:
    // 0x1308c4: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x1308c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1308c8:
    // 0x1308c8: 0xc136b18  jal         func_4DAC60
label_1308cc:
    if (ctx->pc == 0x1308CCu) {
        ctx->pc = 0x1308CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308C8u;
        // 0x1308cc: 0x7fa201d0  sq          $v0, 0x1D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1308D0u;
        goto label_1308d0;
    }
    ctx->pc = 0x1308C8u;
    SET_GPR_U32(ctx, 31, 0x1308D0u);
    ctx->pc = 0x1308CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1308C8u;
    // 0x1308cc: 0x7fa201d0  sq          $v0, 0x1D0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1308C8u, 0x1308D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308D0u;
label_1308d0:
    // 0x1308d0: 0x7ba201e0  lq          $v0, 0x1E0($sp)
    ctx->pc = 0x1308d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_1308d4:
    // 0x1308d4: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x1308d4u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
label_1308d8:
    // 0x1308d8: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x1308d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
label_1308dc:
    // 0x1308dc: 0x52200015  beql        $s1, $zero, . + 4 + (0x15 << 2)
label_1308e0:
    if (ctx->pc == 0x1308E0u) {
        ctx->pc = 0x1308E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308DCu;
        // 0x1308e0: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1308E4u;
        goto label_1308e4;
    }
    ctx->pc = 0x1308DCu;
    {
        const bool branch_taken_0x1308dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1308dc) {
            ctx->pc = 0x1308E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1308DCu;
            // 0x1308e0: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130934u;
            goto label_130934;
        }
    }
    ctx->pc = 0x1308E4u;
label_1308e4:
    // 0x1308e4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1308e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1308e8:
    // 0x1308e8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1308e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1308ec:
    // 0x1308ec: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1308ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1308f0:
    // 0x1308f0: 0x60f809  jalr        $v1
label_1308f4:
    if (ctx->pc == 0x1308F4u) {
        ctx->pc = 0x1308F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308F0u;
        // 0x1308f4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1308F8u;
        goto label_1308f8;
    }
    ctx->pc = 0x1308F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1308F8u);
        ctx->pc = 0x1308F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308F0u;
        // 0x1308f4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1308F0u, 0x1308F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1308F8u;
label_1308f8:
    // 0x1308f8: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1308f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1308fc:
    // 0x1308fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1308fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_130900:
    // 0x130900: 0xc136b24  jal         func_4DAC90
label_130904:
    if (ctx->pc == 0x130904u) {
        ctx->pc = 0x130904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130900u;
        // 0x130904: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x130908u;
        goto label_130908;
    }
    ctx->pc = 0x130900u;
    SET_GPR_U32(ctx, 31, 0x130908u);
    ctx->pc = 0x130904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130900u;
    // 0x130904: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x130900u, 0x130908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130908u;
label_130908:
    // 0x130908: 0x7ba201e0  lq          $v0, 0x1E0($sp)
    ctx->pc = 0x130908u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_13090c:
    // 0x13090c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x13090cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_130910:
    // 0x130910: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x130910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_130914:
    // 0x130914: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x130914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_130918:
    // 0x130918: 0xc136b18  jal         func_4DAC60
label_13091c:
    if (ctx->pc == 0x13091Cu) {
        ctx->pc = 0x13091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130918u;
        // 0x13091c: 0x7fa201d0  sq          $v0, 0x1D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130920u;
        goto label_130920;
    }
    ctx->pc = 0x130918u;
    SET_GPR_U32(ctx, 31, 0x130920u);
    ctx->pc = 0x13091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130918u;
    // 0x13091c: 0x7fa201d0  sq          $v0, 0x1D0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x130918u, 0x130920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130920u;
label_130920:
    // 0x130920: 0x7ba201e0  lq          $v0, 0x1E0($sp)
    ctx->pc = 0x130920u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_130924:
    // 0x130924: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x130924u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
label_130928:
    // 0x130928: 0xae800410  sw          $zero, 0x410($s4)
    ctx->pc = 0x130928u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1040), GPR_U32(ctx, 0));
label_13092c:
    // 0x13092c: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x13092cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
label_130930:
    // 0x130930: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x130930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_130934:
    // 0x130934: 0x8ca47198  lw          $a0, 0x7198($a1)
    ctx->pc = 0x130934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 29080)));
label_130938:
    // 0x130938: 0xc0d01c0  jal         func_340700
label_13093c:
    if (ctx->pc == 0x13093Cu) {
        ctx->pc = 0x13093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130938u;
        // 0x13093c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130940u;
        goto label_130940;
    }
    ctx->pc = 0x130938u;
    SET_GPR_U32(ctx, 31, 0x130940u);
    ctx->pc = 0x13093Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130938u;
    // 0x13093c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340700u, 0x130938u, 0x130940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130940u;
label_130940:
    // 0x130940: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x130940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_130944:
    // 0x130944: 0xc0d0680  jal         func_341A00
label_130948:
    if (ctx->pc == 0x130948u) {
        ctx->pc = 0x130948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130944u;
        // 0x130948: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13094Cu;
        goto label_13094c;
    }
    ctx->pc = 0x130944u;
    SET_GPR_U32(ctx, 31, 0x13094Cu);
    ctx->pc = 0x130948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130944u;
    // 0x130948: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A00u, 0x130944u, 0x13094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13094Cu;
label_13094c:
    // 0x13094c: 0x7bb00290  lq          $s0, 0x290($sp)
    ctx->pc = 0x13094cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_130950:
    // 0x130950: 0x7bb10280  lq          $s1, 0x280($sp)
    ctx->pc = 0x130950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_130954:
    // 0x130954: 0x7bb20270  lq          $s2, 0x270($sp)
    ctx->pc = 0x130954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_130958:
    // 0x130958: 0x7bb30260  lq          $s3, 0x260($sp)
    ctx->pc = 0x130958u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_13095c:
    // 0x13095c: 0x7bb40250  lq          $s4, 0x250($sp)
    ctx->pc = 0x13095cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_130960:
    // 0x130960: 0x7bb50240  lq          $s5, 0x240($sp)
    ctx->pc = 0x130960u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_130964:
    // 0x130964: 0x7bb60230  lq          $s6, 0x230($sp)
    ctx->pc = 0x130964u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_130968:
    // 0x130968: 0x7bb70220  lq          $s7, 0x220($sp)
    ctx->pc = 0x130968u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_13096c:
    // 0x13096c: 0x7bbe0210  lq          $fp, 0x210($sp)
    ctx->pc = 0x13096cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_130970:
    // 0x130970: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x130970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_130974:
    // 0x130974: 0xc7b702b8  lwc1        $f23, 0x2B8($sp)
    ctx->pc = 0x130974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_130978:
    // 0x130978: 0xc7b602b0  lwc1        $f22, 0x2B0($sp)
    ctx->pc = 0x130978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_13097c:
    // 0x13097c: 0xc7b502a8  lwc1        $f21, 0x2A8($sp)
    ctx->pc = 0x13097cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_130980:
    // 0x130980: 0xc7b402a0  lwc1        $f20, 0x2A0($sp)
    ctx->pc = 0x130980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_130984:
    // 0x130984: 0x3e00008  jr          $ra
label_130988:
    if (ctx->pc == 0x130988u) {
        ctx->pc = 0x130988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130984u;
        // 0x130988: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13098Cu;
        goto label_13098c;
    }
    ctx->pc = 0x130984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130984u;
        // 0x130988: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13098Cu;
label_13098c:
    // 0x13098c: 0x0  nop
    ctx->pc = 0x13098cu;
    // NOP
    ctx->pc = 0x130990u;
}
