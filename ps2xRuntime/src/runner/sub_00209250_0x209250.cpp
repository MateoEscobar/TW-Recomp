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

// Function: sub_00209250
// Address: 0x209250 - 0x209788
void sub_00209250_0x209250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209250_0x209250");
#endif

    switch (ctx->pc) {
        case 0x209250u: goto label_209250;
        case 0x209254u: goto label_209254;
        case 0x209258u: goto label_209258;
        case 0x20925cu: goto label_20925c;
        case 0x209260u: goto label_209260;
        case 0x209264u: goto label_209264;
        case 0x209268u: goto label_209268;
        case 0x20926cu: goto label_20926c;
        case 0x209270u: goto label_209270;
        case 0x209274u: goto label_209274;
        case 0x209278u: goto label_209278;
        case 0x20927cu: goto label_20927c;
        case 0x209280u: goto label_209280;
        case 0x209284u: goto label_209284;
        case 0x209288u: goto label_209288;
        case 0x20928cu: goto label_20928c;
        case 0x209290u: goto label_209290;
        case 0x209294u: goto label_209294;
        case 0x209298u: goto label_209298;
        case 0x20929cu: goto label_20929c;
        case 0x2092a0u: goto label_2092a0;
        case 0x2092a4u: goto label_2092a4;
        case 0x2092a8u: goto label_2092a8;
        case 0x2092acu: goto label_2092ac;
        case 0x2092b0u: goto label_2092b0;
        case 0x2092b4u: goto label_2092b4;
        case 0x2092b8u: goto label_2092b8;
        case 0x2092bcu: goto label_2092bc;
        case 0x2092c0u: goto label_2092c0;
        case 0x2092c4u: goto label_2092c4;
        case 0x2092c8u: goto label_2092c8;
        case 0x2092ccu: goto label_2092cc;
        case 0x2092d0u: goto label_2092d0;
        case 0x2092d4u: goto label_2092d4;
        case 0x2092d8u: goto label_2092d8;
        case 0x2092dcu: goto label_2092dc;
        case 0x2092e0u: goto label_2092e0;
        case 0x2092e4u: goto label_2092e4;
        case 0x2092e8u: goto label_2092e8;
        case 0x2092ecu: goto label_2092ec;
        case 0x2092f0u: goto label_2092f0;
        case 0x2092f4u: goto label_2092f4;
        case 0x2092f8u: goto label_2092f8;
        case 0x2092fcu: goto label_2092fc;
        case 0x209300u: goto label_209300;
        case 0x209304u: goto label_209304;
        case 0x209308u: goto label_209308;
        case 0x20930cu: goto label_20930c;
        case 0x209310u: goto label_209310;
        case 0x209314u: goto label_209314;
        case 0x209318u: goto label_209318;
        case 0x20931cu: goto label_20931c;
        case 0x209320u: goto label_209320;
        case 0x209324u: goto label_209324;
        case 0x209328u: goto label_209328;
        case 0x20932cu: goto label_20932c;
        case 0x209330u: goto label_209330;
        case 0x209334u: goto label_209334;
        case 0x209338u: goto label_209338;
        case 0x20933cu: goto label_20933c;
        case 0x209340u: goto label_209340;
        case 0x209344u: goto label_209344;
        case 0x209348u: goto label_209348;
        case 0x20934cu: goto label_20934c;
        case 0x209350u: goto label_209350;
        case 0x209354u: goto label_209354;
        case 0x209358u: goto label_209358;
        case 0x20935cu: goto label_20935c;
        case 0x209360u: goto label_209360;
        case 0x209364u: goto label_209364;
        case 0x209368u: goto label_209368;
        case 0x20936cu: goto label_20936c;
        case 0x209370u: goto label_209370;
        case 0x209374u: goto label_209374;
        case 0x209378u: goto label_209378;
        case 0x20937cu: goto label_20937c;
        case 0x209380u: goto label_209380;
        case 0x209384u: goto label_209384;
        case 0x209388u: goto label_209388;
        case 0x20938cu: goto label_20938c;
        case 0x209390u: goto label_209390;
        case 0x209394u: goto label_209394;
        case 0x209398u: goto label_209398;
        case 0x20939cu: goto label_20939c;
        case 0x2093a0u: goto label_2093a0;
        case 0x2093a4u: goto label_2093a4;
        case 0x2093a8u: goto label_2093a8;
        case 0x2093acu: goto label_2093ac;
        case 0x2093b0u: goto label_2093b0;
        case 0x2093b4u: goto label_2093b4;
        case 0x2093b8u: goto label_2093b8;
        case 0x2093bcu: goto label_2093bc;
        case 0x2093c0u: goto label_2093c0;
        case 0x2093c4u: goto label_2093c4;
        case 0x2093c8u: goto label_2093c8;
        case 0x2093ccu: goto label_2093cc;
        case 0x2093d0u: goto label_2093d0;
        case 0x2093d4u: goto label_2093d4;
        case 0x2093d8u: goto label_2093d8;
        case 0x2093dcu: goto label_2093dc;
        case 0x2093e0u: goto label_2093e0;
        case 0x2093e4u: goto label_2093e4;
        case 0x2093e8u: goto label_2093e8;
        case 0x2093ecu: goto label_2093ec;
        case 0x2093f0u: goto label_2093f0;
        case 0x2093f4u: goto label_2093f4;
        case 0x2093f8u: goto label_2093f8;
        case 0x2093fcu: goto label_2093fc;
        case 0x209400u: goto label_209400;
        case 0x209404u: goto label_209404;
        case 0x209408u: goto label_209408;
        case 0x20940cu: goto label_20940c;
        case 0x209410u: goto label_209410;
        case 0x209414u: goto label_209414;
        case 0x209418u: goto label_209418;
        case 0x20941cu: goto label_20941c;
        case 0x209420u: goto label_209420;
        case 0x209424u: goto label_209424;
        case 0x209428u: goto label_209428;
        case 0x20942cu: goto label_20942c;
        case 0x209430u: goto label_209430;
        case 0x209434u: goto label_209434;
        case 0x209438u: goto label_209438;
        case 0x20943cu: goto label_20943c;
        case 0x209440u: goto label_209440;
        case 0x209444u: goto label_209444;
        case 0x209448u: goto label_209448;
        case 0x20944cu: goto label_20944c;
        case 0x209450u: goto label_209450;
        case 0x209454u: goto label_209454;
        case 0x209458u: goto label_209458;
        case 0x20945cu: goto label_20945c;
        case 0x209460u: goto label_209460;
        case 0x209464u: goto label_209464;
        case 0x209468u: goto label_209468;
        case 0x20946cu: goto label_20946c;
        case 0x209470u: goto label_209470;
        case 0x209474u: goto label_209474;
        case 0x209478u: goto label_209478;
        case 0x20947cu: goto label_20947c;
        case 0x209480u: goto label_209480;
        case 0x209484u: goto label_209484;
        case 0x209488u: goto label_209488;
        case 0x20948cu: goto label_20948c;
        case 0x209490u: goto label_209490;
        case 0x209494u: goto label_209494;
        case 0x209498u: goto label_209498;
        case 0x20949cu: goto label_20949c;
        case 0x2094a0u: goto label_2094a0;
        case 0x2094a4u: goto label_2094a4;
        case 0x2094a8u: goto label_2094a8;
        case 0x2094acu: goto label_2094ac;
        case 0x2094b0u: goto label_2094b0;
        case 0x2094b4u: goto label_2094b4;
        case 0x2094b8u: goto label_2094b8;
        case 0x2094bcu: goto label_2094bc;
        case 0x2094c0u: goto label_2094c0;
        case 0x2094c4u: goto label_2094c4;
        case 0x2094c8u: goto label_2094c8;
        case 0x2094ccu: goto label_2094cc;
        case 0x2094d0u: goto label_2094d0;
        case 0x2094d4u: goto label_2094d4;
        case 0x2094d8u: goto label_2094d8;
        case 0x2094dcu: goto label_2094dc;
        case 0x2094e0u: goto label_2094e0;
        case 0x2094e4u: goto label_2094e4;
        case 0x2094e8u: goto label_2094e8;
        case 0x2094ecu: goto label_2094ec;
        case 0x2094f0u: goto label_2094f0;
        case 0x2094f4u: goto label_2094f4;
        case 0x2094f8u: goto label_2094f8;
        case 0x2094fcu: goto label_2094fc;
        case 0x209500u: goto label_209500;
        case 0x209504u: goto label_209504;
        case 0x209508u: goto label_209508;
        case 0x20950cu: goto label_20950c;
        case 0x209510u: goto label_209510;
        case 0x209514u: goto label_209514;
        case 0x209518u: goto label_209518;
        case 0x20951cu: goto label_20951c;
        case 0x209520u: goto label_209520;
        case 0x209524u: goto label_209524;
        case 0x209528u: goto label_209528;
        case 0x20952cu: goto label_20952c;
        case 0x209530u: goto label_209530;
        case 0x209534u: goto label_209534;
        case 0x209538u: goto label_209538;
        case 0x20953cu: goto label_20953c;
        case 0x209540u: goto label_209540;
        case 0x209544u: goto label_209544;
        case 0x209548u: goto label_209548;
        case 0x20954cu: goto label_20954c;
        case 0x209550u: goto label_209550;
        case 0x209554u: goto label_209554;
        case 0x209558u: goto label_209558;
        case 0x20955cu: goto label_20955c;
        case 0x209560u: goto label_209560;
        case 0x209564u: goto label_209564;
        case 0x209568u: goto label_209568;
        case 0x20956cu: goto label_20956c;
        case 0x209570u: goto label_209570;
        case 0x209574u: goto label_209574;
        case 0x209578u: goto label_209578;
        case 0x20957cu: goto label_20957c;
        case 0x209580u: goto label_209580;
        case 0x209584u: goto label_209584;
        case 0x209588u: goto label_209588;
        case 0x20958cu: goto label_20958c;
        case 0x209590u: goto label_209590;
        case 0x209594u: goto label_209594;
        case 0x209598u: goto label_209598;
        case 0x20959cu: goto label_20959c;
        case 0x2095a0u: goto label_2095a0;
        case 0x2095a4u: goto label_2095a4;
        case 0x2095a8u: goto label_2095a8;
        case 0x2095acu: goto label_2095ac;
        case 0x2095b0u: goto label_2095b0;
        case 0x2095b4u: goto label_2095b4;
        case 0x2095b8u: goto label_2095b8;
        case 0x2095bcu: goto label_2095bc;
        case 0x2095c0u: goto label_2095c0;
        case 0x2095c4u: goto label_2095c4;
        case 0x2095c8u: goto label_2095c8;
        case 0x2095ccu: goto label_2095cc;
        case 0x2095d0u: goto label_2095d0;
        case 0x2095d4u: goto label_2095d4;
        case 0x2095d8u: goto label_2095d8;
        case 0x2095dcu: goto label_2095dc;
        case 0x2095e0u: goto label_2095e0;
        case 0x2095e4u: goto label_2095e4;
        case 0x2095e8u: goto label_2095e8;
        case 0x2095ecu: goto label_2095ec;
        case 0x2095f0u: goto label_2095f0;
        case 0x2095f4u: goto label_2095f4;
        case 0x2095f8u: goto label_2095f8;
        case 0x2095fcu: goto label_2095fc;
        case 0x209600u: goto label_209600;
        case 0x209604u: goto label_209604;
        case 0x209608u: goto label_209608;
        case 0x20960cu: goto label_20960c;
        case 0x209610u: goto label_209610;
        case 0x209614u: goto label_209614;
        case 0x209618u: goto label_209618;
        case 0x20961cu: goto label_20961c;
        case 0x209620u: goto label_209620;
        case 0x209624u: goto label_209624;
        case 0x209628u: goto label_209628;
        case 0x20962cu: goto label_20962c;
        case 0x209630u: goto label_209630;
        case 0x209634u: goto label_209634;
        case 0x209638u: goto label_209638;
        case 0x20963cu: goto label_20963c;
        case 0x209640u: goto label_209640;
        case 0x209644u: goto label_209644;
        case 0x209648u: goto label_209648;
        case 0x20964cu: goto label_20964c;
        case 0x209650u: goto label_209650;
        case 0x209654u: goto label_209654;
        case 0x209658u: goto label_209658;
        case 0x20965cu: goto label_20965c;
        case 0x209660u: goto label_209660;
        case 0x209664u: goto label_209664;
        case 0x209668u: goto label_209668;
        case 0x20966cu: goto label_20966c;
        case 0x209670u: goto label_209670;
        case 0x209674u: goto label_209674;
        case 0x209678u: goto label_209678;
        case 0x20967cu: goto label_20967c;
        case 0x209680u: goto label_209680;
        case 0x209684u: goto label_209684;
        case 0x209688u: goto label_209688;
        case 0x20968cu: goto label_20968c;
        case 0x209690u: goto label_209690;
        case 0x209694u: goto label_209694;
        case 0x209698u: goto label_209698;
        case 0x20969cu: goto label_20969c;
        case 0x2096a0u: goto label_2096a0;
        case 0x2096a4u: goto label_2096a4;
        case 0x2096a8u: goto label_2096a8;
        case 0x2096acu: goto label_2096ac;
        case 0x2096b0u: goto label_2096b0;
        case 0x2096b4u: goto label_2096b4;
        case 0x2096b8u: goto label_2096b8;
        case 0x2096bcu: goto label_2096bc;
        case 0x2096c0u: goto label_2096c0;
        case 0x2096c4u: goto label_2096c4;
        case 0x2096c8u: goto label_2096c8;
        case 0x2096ccu: goto label_2096cc;
        case 0x2096d0u: goto label_2096d0;
        case 0x2096d4u: goto label_2096d4;
        case 0x2096d8u: goto label_2096d8;
        case 0x2096dcu: goto label_2096dc;
        case 0x2096e0u: goto label_2096e0;
        case 0x2096e4u: goto label_2096e4;
        case 0x2096e8u: goto label_2096e8;
        case 0x2096ecu: goto label_2096ec;
        case 0x2096f0u: goto label_2096f0;
        case 0x2096f4u: goto label_2096f4;
        case 0x2096f8u: goto label_2096f8;
        case 0x2096fcu: goto label_2096fc;
        case 0x209700u: goto label_209700;
        case 0x209704u: goto label_209704;
        case 0x209708u: goto label_209708;
        case 0x20970cu: goto label_20970c;
        case 0x209710u: goto label_209710;
        case 0x209714u: goto label_209714;
        case 0x209718u: goto label_209718;
        case 0x20971cu: goto label_20971c;
        case 0x209720u: goto label_209720;
        case 0x209724u: goto label_209724;
        case 0x209728u: goto label_209728;
        case 0x20972cu: goto label_20972c;
        case 0x209730u: goto label_209730;
        case 0x209734u: goto label_209734;
        case 0x209738u: goto label_209738;
        case 0x20973cu: goto label_20973c;
        case 0x209740u: goto label_209740;
        case 0x209744u: goto label_209744;
        case 0x209748u: goto label_209748;
        case 0x20974cu: goto label_20974c;
        case 0x209750u: goto label_209750;
        case 0x209754u: goto label_209754;
        case 0x209758u: goto label_209758;
        case 0x20975cu: goto label_20975c;
        case 0x209760u: goto label_209760;
        case 0x209764u: goto label_209764;
        case 0x209768u: goto label_209768;
        case 0x20976cu: goto label_20976c;
        case 0x209770u: goto label_209770;
        case 0x209774u: goto label_209774;
        case 0x209778u: goto label_209778;
        case 0x20977cu: goto label_20977c;
        case 0x209780u: goto label_209780;
        case 0x209784u: goto label_209784;
        default: break;
    }

    ctx->pc = 0x209250u;

label_209250:
    // 0x209250: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x209250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_209254:
    // 0x209254: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x209254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_209258:
    // 0x209258: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x209258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_20925c:
    // 0x20925c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20925cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209260:
    // 0x209260: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x209260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_209264:
    // 0x209264: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x209264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_209268:
    // 0x209268: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x209268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_20926c:
    // 0x20926c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x20926cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_209270:
    // 0x209270: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x209270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_209274:
    // 0x209274: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x209274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_209278:
    // 0x209278: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x209278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_20927c:
    // 0x20927c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20927cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_209280:
    // 0x209280: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x209280u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_209284:
    // 0x209284: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x209284u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_209288:
    // 0x209288: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x209288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20928c:
    // 0x20928c: 0x14400131  bnez        $v0, . + 4 + (0x131 << 2)
label_209290:
    if (ctx->pc == 0x209290u) {
        ctx->pc = 0x209290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20928Cu;
        // 0x209290: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209294u;
        goto label_209294;
    }
    ctx->pc = 0x20928Cu;
    {
        const bool branch_taken_0x20928c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20928Cu;
        // 0x209290: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20928c) {
            ctx->pc = 0x209754u;
            goto label_209754;
        }
    }
    ctx->pc = 0x209294u;
label_209294:
    // 0x209294: 0xc080ebe  jal         func_203AF8
label_209298:
    if (ctx->pc == 0x209298u) {
        ctx->pc = 0x209298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209294u;
        // 0x209298: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20929Cu;
        goto label_20929c;
    }
    ctx->pc = 0x209294u;
    SET_GPR_U32(ctx, 31, 0x20929Cu);
    ctx->pc = 0x209298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209294u;
    // 0x209298: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x209294u, 0x20929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20929Cu;
label_20929c:
    // 0x20929c: 0xc080ed6  jal         func_203B58
label_2092a0:
    if (ctx->pc == 0x2092A0u) {
        ctx->pc = 0x2092A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20929Cu;
        // 0x2092a0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2092A4u;
        goto label_2092a4;
    }
    ctx->pc = 0x20929Cu;
    SET_GPR_U32(ctx, 31, 0x2092A4u);
    ctx->pc = 0x2092A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20929Cu;
    // 0x2092a0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B58u, 0x20929Cu, 0x2092A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092A4u;
label_2092a4:
    // 0x2092a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2092a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2092a8:
    // 0x2092a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2092a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2092ac:
    // 0x2092ac: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2092acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2092b0:
    // 0x2092b0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2092b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2092b4:
    // 0x2092b4: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x2092b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_2092b8:
    // 0x2092b8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2092b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2092bc:
    // 0x2092bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2092bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2092c0:
    // 0x2092c0: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2092c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_2092c4:
    // 0x2092c4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x2092c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2092c8:
    // 0x2092c8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2092c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2092cc:
    // 0x2092cc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2092ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2092d0:
    // 0x2092d0: 0x8e0c27e4  lw          $t4, 0x27E4($s0)
    ctx->pc = 0x2092d0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_2092d4:
    // 0x2092d4: 0x24a58e38  addiu       $a1, $a1, -0x71C8
    ctx->pc = 0x2092d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938168));
label_2092d8:
    // 0x2092d8: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2092d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_2092dc:
    // 0x2092dc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2092dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2092e0:
    // 0x2092e0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2092e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2092e4:
    // 0x2092e4: 0x25088e48  addiu       $t0, $t0, -0x71B8
    ctx->pc = 0x2092e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938184));
label_2092e8:
    // 0x2092e8: 0x24090024  addiu       $t1, $zero, 0x24
    ctx->pc = 0x2092e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_2092ec:
    // 0x2092ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2092ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2092f0:
    // 0x2092f0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2092f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2092f4:
    // 0x2092f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2092f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2092f8:
    // 0x2092f8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2092f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2092fc:
    // 0x2092fc: 0x40f809  jalr        $v0
label_209300:
    if (ctx->pc == 0x209300u) {
        ctx->pc = 0x209300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092FCu;
        // 0x209300: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209304u;
        goto label_209304;
    }
    ctx->pc = 0x2092FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209304u);
        ctx->pc = 0x209300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092FCu;
        // 0x209300: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2092FCu, 0x209304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209304u;
label_209304:
    // 0x209304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_209308:
    if (ctx->pc == 0x209308u) {
        ctx->pc = 0x209308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209304u;
        // 0x209308: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20930Cu;
        goto label_20930c;
    }
    ctx->pc = 0x209304u;
    {
        const bool branch_taken_0x209304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209304u;
        // 0x209308: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209304) {
            ctx->pc = 0x209318u;
            goto label_209318;
        }
    }
    ctx->pc = 0x20930Cu;
label_20930c:
    // 0x20930c: 0xc0733e2  jal         func_1CCF88
label_209310:
    if (ctx->pc == 0x209310u) {
        ctx->pc = 0x209310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20930Cu;
        // 0x209310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209314u;
        goto label_209314;
    }
    ctx->pc = 0x20930Cu;
    SET_GPR_U32(ctx, 31, 0x209314u);
    ctx->pc = 0x209310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20930Cu;
    // 0x209310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x20930Cu, 0x209314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209314u;
label_209314:
    // 0x209314: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x209314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_209318:
    // 0x209318: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x209318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_20931c:
    // 0x20931c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x20931cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_209320:
    // 0x209320: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x209320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_209324:
    // 0x209324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209328:
    // 0x209328: 0xc05e602  jal         func_179808
label_20932c:
    if (ctx->pc == 0x20932Cu) {
        ctx->pc = 0x20932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209328u;
        // 0x20932c: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209330u;
        goto label_209330;
    }
    ctx->pc = 0x209328u;
    SET_GPR_U32(ctx, 31, 0x209330u);
    ctx->pc = 0x20932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209328u;
    // 0x20932c: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x209328u, 0x209330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209330u;
label_209330:
    // 0x209330: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x209330u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
label_209334:
    // 0x209334: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x209334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_209338:
    // 0x209338: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x209338u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20933c:
    // 0x20933c: 0x8e27d328  lw          $a3, -0x2CD8($s1)
    ctx->pc = 0x20933cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955816)));
label_209340:
    // 0x209340: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x209340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_209344:
    // 0x209344: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x209344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_209348:
    // 0x209348: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x209348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20934c:
    // 0x20934c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20934cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209350:
    // 0x209350: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x209350u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209354:
    // 0x209354: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x209354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_209358:
    // 0x209358: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x209358u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20935c:
    // 0x20935c: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x20935cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
label_209360:
    // 0x209360: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x209360u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209364:
    // 0x209364: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x209364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_209368:
    // 0x209368: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x209368u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20936c:
    // 0x20936c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x20936cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_209370:
    // 0x209370: 0x40f809  jalr        $v0
label_209374:
    if (ctx->pc == 0x209374u) {
        ctx->pc = 0x209374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209370u;
        // 0x209374: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209378u;
        goto label_209378;
    }
    ctx->pc = 0x209370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209378u);
        ctx->pc = 0x209374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209370u;
        // 0x209374: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209370u, 0x209378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209378u;
label_209378:
    // 0x209378: 0xc08101a  jal         func_204068
label_20937c:
    if (ctx->pc == 0x20937Cu) {
        ctx->pc = 0x209380u;
        goto label_209380;
    }
    ctx->pc = 0x209378u;
    SET_GPR_U32(ctx, 31, 0x209380u);
    ctx->pc = 0x204068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204068u, 0x209378u, 0x209380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209380u;
label_209380:
    // 0x209380: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_209384:
    if (ctx->pc == 0x209384u) {
        ctx->pc = 0x209388u;
        goto label_209388;
    }
    ctx->pc = 0x209380u;
    {
        const bool branch_taken_0x209380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209380) {
            ctx->pc = 0x2093A4u;
            goto label_2093a4;
        }
    }
    ctx->pc = 0x209388u;
label_209388:
    // 0x209388: 0xc067b9c  jal         func_19EE70
label_20938c:
    if (ctx->pc == 0x20938Cu) {
        ctx->pc = 0x20938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209388u;
        // 0x20938c: 0x2404007e  addiu       $a0, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209390u;
        goto label_209390;
    }
    ctx->pc = 0x209388u;
    SET_GPR_U32(ctx, 31, 0x209390u);
    ctx->pc = 0x20938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209388u;
    // 0x20938c: 0x2404007e  addiu       $a0, $zero, 0x7E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x209388u, 0x209390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209390u;
label_209390:
    // 0x209390: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x209390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_209394:
    // 0x209394: 0xc073478  jal         func_1CD1E0
label_209398:
    if (ctx->pc == 0x209398u) {
        ctx->pc = 0x209398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209394u;
        // 0x209398: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20939Cu;
        goto label_20939c;
    }
    ctx->pc = 0x209394u;
    SET_GPR_U32(ctx, 31, 0x20939Cu);
    ctx->pc = 0x209398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209394u;
    // 0x209398: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x209394u, 0x20939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20939Cu;
label_20939c:
    // 0x20939c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2093a0:
    if (ctx->pc == 0x2093A0u) {
        ctx->pc = 0x2093A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20939Cu;
        // 0x2093a0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2093A4u;
        goto label_2093a4;
    }
    ctx->pc = 0x20939Cu;
    {
        const bool branch_taken_0x20939c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20939Cu;
        // 0x2093a0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20939c) {
            ctx->pc = 0x2093BCu;
            goto label_2093bc;
        }
    }
    ctx->pc = 0x2093A4u;
label_2093a4:
    // 0x2093a4: 0xc067b9c  jal         func_19EE70
label_2093a8:
    if (ctx->pc == 0x2093A8u) {
        ctx->pc = 0x2093A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093A4u;
        // 0x2093a8: 0x24040088  addiu       $a0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2093ACu;
        goto label_2093ac;
    }
    ctx->pc = 0x2093A4u;
    SET_GPR_U32(ctx, 31, 0x2093ACu);
    ctx->pc = 0x2093A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2093A4u;
    // 0x2093a8: 0x24040088  addiu       $a0, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2093A4u, 0x2093ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2093ACu;
label_2093ac:
    // 0x2093ac: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x2093acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_2093b0:
    // 0x2093b0: 0xc073478  jal         func_1CD1E0
label_2093b4:
    if (ctx->pc == 0x2093B4u) {
        ctx->pc = 0x2093B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093B0u;
        // 0x2093b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2093B8u;
        goto label_2093b8;
    }
    ctx->pc = 0x2093B0u;
    SET_GPR_U32(ctx, 31, 0x2093B8u);
    ctx->pc = 0x2093B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2093B0u;
    // 0x2093b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x2093B0u, 0x2093B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2093B8u;
label_2093b8:
    // 0x2093b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2093b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2093bc:
    // 0x2093bc: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x2093bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_2093c0:
    // 0x2093c0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2093c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2093c4:
    // 0x2093c4: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x2093c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_2093c8:
    // 0x2093c8: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x2093c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_2093cc:
    // 0x2093cc: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x2093ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_2093d0:
    // 0x2093d0: 0x40f809  jalr        $v0
label_2093d4:
    if (ctx->pc == 0x2093D4u) {
        ctx->pc = 0x2093D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093D0u;
        // 0x2093d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2093D8u;
        goto label_2093d8;
    }
    ctx->pc = 0x2093D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2093D8u);
        ctx->pc = 0x2093D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093D0u;
        // 0x2093d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2093D0u, 0x2093D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2093D8u;
label_2093d8:
    // 0x2093d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2093d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2093dc:
    // 0x2093dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2093dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2093e0:
    // 0x2093e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2093e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2093e4:
    // 0x2093e4: 0xc10c1fa  jal         func_4307E8
label_2093e8:
    if (ctx->pc == 0x2093E8u) {
        ctx->pc = 0x2093E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093E4u;
        // 0x2093e8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2093ECu;
        goto label_2093ec;
    }
    ctx->pc = 0x2093E4u;
    SET_GPR_U32(ctx, 31, 0x2093ECu);
    ctx->pc = 0x2093E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2093E4u;
    // 0x2093e8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x2093E4u, 0x2093ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2093ECu;
label_2093ec:
    // 0x2093ec: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x2093ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2093f0:
    // 0x2093f0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_2093f4:
    if (ctx->pc == 0x2093F4u) {
        ctx->pc = 0x2093F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093F0u;
        // 0x2093f4: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2093F8u;
        goto label_2093f8;
    }
    ctx->pc = 0x2093F0u;
    {
        const bool branch_taken_0x2093f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093F0u;
        // 0x2093f4: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093f0) {
            ctx->pc = 0x209458u;
            goto label_209458;
        }
    }
    ctx->pc = 0x2093F8u;
label_2093f8:
    // 0x2093f8: 0xc080ebe  jal         func_203AF8
label_2093fc:
    if (ctx->pc == 0x2093FCu) {
        ctx->pc = 0x209400u;
        goto label_209400;
    }
    ctx->pc = 0x2093F8u;
    SET_GPR_U32(ctx, 31, 0x209400u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x2093F8u, 0x209400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209400u;
label_209400:
    // 0x209400: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_209404:
    // 0x209404: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x209404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_209408:
    // 0x209408: 0xc080ed6  jal         func_203B58
label_20940c:
    if (ctx->pc == 0x20940Cu) {
        ctx->pc = 0x20940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209408u;
        // 0x20940c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209410u;
        goto label_209410;
    }
    ctx->pc = 0x209408u;
    SET_GPR_U32(ctx, 31, 0x209410u);
    ctx->pc = 0x20940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209408u;
    // 0x20940c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B58u, 0x209408u, 0x209410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209410u;
label_209410:
    // 0x209410: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x209410u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_209414:
    // 0x209414: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x209414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_209418:
    // 0x209418: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x209418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_20941c:
    // 0x20941c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20941cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209420:
    // 0x209420: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x209420u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_209424:
    // 0x209424: 0xe675000c  swc1        $f21, 0xC($s3)
    ctx->pc = 0x209424u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_209428:
    // 0x209428: 0x8e47008c  lw          $a3, 0x8C($s2)
    ctx->pc = 0x209428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_20942c:
    // 0x20942c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x20942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_209430:
    // 0x209430: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x209430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_209434:
    // 0x209434: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x209434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_209438:
    // 0x209438: 0x60f809  jalr        $v1
label_20943c:
    if (ctx->pc == 0x20943Cu) {
        ctx->pc = 0x20943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209438u;
        // 0x20943c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209440u;
        goto label_209440;
    }
    ctx->pc = 0x209438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209440u);
        ctx->pc = 0x20943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209438u;
        // 0x20943c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209438u, 0x209440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209440u;
label_209440:
    // 0x209440: 0xc080ebe  jal         func_203AF8
label_209444:
    if (ctx->pc == 0x209444u) {
        ctx->pc = 0x209444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209440u;
        // 0x209444: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209448u;
        goto label_209448;
    }
    ctx->pc = 0x209440u;
    SET_GPR_U32(ctx, 31, 0x209448u);
    ctx->pc = 0x209444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209440u;
    // 0x209444: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x209440u, 0x209448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209448u;
label_209448:
    // 0x209448: 0xc080ec6  jal         func_203B18
label_20944c:
    if (ctx->pc == 0x20944Cu) {
        ctx->pc = 0x20944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209448u;
        // 0x20944c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209450u;
        goto label_209450;
    }
    ctx->pc = 0x209448u;
    SET_GPR_U32(ctx, 31, 0x209450u);
    ctx->pc = 0x20944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209448u;
    // 0x20944c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B18u, 0x209448u, 0x209450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209450u;
label_209450:
    // 0x209450: 0x10000039  b           . + 4 + (0x39 << 2)
label_209454:
    if (ctx->pc == 0x209454u) {
        ctx->pc = 0x209454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209450u;
        // 0x209454: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209458u;
        goto label_209458;
    }
    ctx->pc = 0x209450u;
    {
        const bool branch_taken_0x209450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209450u;
        // 0x209454: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209450) {
            ctx->pc = 0x209538u;
            goto label_209538;
        }
    }
    ctx->pc = 0x209458u;
label_209458:
    // 0x209458: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_20945c:
    if (ctx->pc == 0x20945Cu) {
        ctx->pc = 0x209460u;
        goto label_209460;
    }
    ctx->pc = 0x209458u;
    {
        const bool branch_taken_0x209458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209458) {
            ctx->pc = 0x2094CCu;
            goto label_2094cc;
        }
    }
    ctx->pc = 0x209460u;
label_209460:
    // 0x209460: 0xc080ebe  jal         func_203AF8
label_209464:
    if (ctx->pc == 0x209464u) {
        ctx->pc = 0x209468u;
        goto label_209468;
    }
    ctx->pc = 0x209460u;
    SET_GPR_U32(ctx, 31, 0x209468u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x209460u, 0x209468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209468u;
label_209468:
    // 0x209468: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20946c:
    // 0x20946c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x20946cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_209470:
    // 0x209470: 0xc080eda  jal         func_203B68
label_209474:
    if (ctx->pc == 0x209474u) {
        ctx->pc = 0x209474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209470u;
        // 0x209474: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209478u;
        goto label_209478;
    }
    ctx->pc = 0x209470u;
    SET_GPR_U32(ctx, 31, 0x209478u);
    ctx->pc = 0x209474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209470u;
    // 0x209474: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B68u, 0x209470u, 0x209478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209478u;
label_209478:
    // 0x209478: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x209478u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20947c:
    // 0x20947c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20947cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_209480:
    // 0x209480: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x209480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_209484:
    // 0x209484: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x209484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209488:
    // 0x209488: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x209488u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_20948c:
    // 0x20948c: 0xe675000c  swc1        $f21, 0xC($s3)
    ctx->pc = 0x20948cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_209490:
    // 0x209490: 0x8e47008c  lw          $a3, 0x8C($s2)
    ctx->pc = 0x209490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_209494:
    // 0x209494: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x209494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_209498:
    // 0x209498: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x209498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_20949c:
    // 0x20949c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x20949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2094a0:
    // 0x2094a0: 0x60f809  jalr        $v1
label_2094a4:
    if (ctx->pc == 0x2094A4u) {
        ctx->pc = 0x2094A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094A0u;
        // 0x2094a4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2094A8u;
        goto label_2094a8;
    }
    ctx->pc = 0x2094A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2094A8u);
        ctx->pc = 0x2094A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094A0u;
        // 0x2094a4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2094A0u, 0x2094A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2094A8u;
label_2094a8:
    // 0x2094a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2094a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2094ac:
    // 0x2094ac: 0x2603fffe  addiu       $v1, $s0, -0x2
    ctx->pc = 0x2094acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
label_2094b0:
    // 0x2094b0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2094b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2094b4:
    // 0x2094b4: 0xc080ebe  jal         func_203AF8
label_2094b8:
    if (ctx->pc == 0x2094B8u) {
        ctx->pc = 0x2094B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094B4u;
        // 0x2094b8: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2094BCu;
        goto label_2094bc;
    }
    ctx->pc = 0x2094B4u;
    SET_GPR_U32(ctx, 31, 0x2094BCu);
    ctx->pc = 0x2094B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2094B4u;
    // 0x2094b8: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x2094B4u, 0x2094BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094BCu;
label_2094bc:
    // 0x2094bc: 0xc080eca  jal         func_203B28
label_2094c0:
    if (ctx->pc == 0x2094C0u) {
        ctx->pc = 0x2094C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094BCu;
        // 0x2094c0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2094C4u;
        goto label_2094c4;
    }
    ctx->pc = 0x2094BCu;
    SET_GPR_U32(ctx, 31, 0x2094C4u);
    ctx->pc = 0x2094C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2094BCu;
    // 0x2094c0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B28u, 0x2094BCu, 0x2094C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094C4u;
label_2094c4:
    // 0x2094c4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2094c8:
    if (ctx->pc == 0x2094C8u) {
        ctx->pc = 0x2094C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094C4u;
        // 0x2094c8: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2094CCu;
        goto label_2094cc;
    }
    ctx->pc = 0x2094C4u;
    {
        const bool branch_taken_0x2094c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2094C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094C4u;
        // 0x2094c8: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2094c4) {
            ctx->pc = 0x209538u;
            goto label_209538;
        }
    }
    ctx->pc = 0x2094CCu;
label_2094cc:
    // 0x2094cc: 0xc080ebe  jal         func_203AF8
label_2094d0:
    if (ctx->pc == 0x2094D0u) {
        ctx->pc = 0x2094D4u;
        goto label_2094d4;
    }
    ctx->pc = 0x2094CCu;
    SET_GPR_U32(ctx, 31, 0x2094D4u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x2094CCu, 0x2094D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094D4u;
label_2094d4:
    // 0x2094d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2094d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2094d8:
    // 0x2094d8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2094d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2094dc:
    // 0x2094dc: 0xc080ede  jal         func_203B78
label_2094e0:
    if (ctx->pc == 0x2094E0u) {
        ctx->pc = 0x2094E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094DCu;
        // 0x2094e0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2094E4u;
        goto label_2094e4;
    }
    ctx->pc = 0x2094DCu;
    SET_GPR_U32(ctx, 31, 0x2094E4u);
    ctx->pc = 0x2094E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2094DCu;
    // 0x2094e0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B78u, 0x2094DCu, 0x2094E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094E4u;
label_2094e4:
    // 0x2094e4: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2094e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2094e8:
    // 0x2094e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2094e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2094ec:
    // 0x2094ec: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x2094ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_2094f0:
    // 0x2094f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2094f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2094f4:
    // 0x2094f4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2094f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2094f8:
    // 0x2094f8: 0xe675000c  swc1        $f21, 0xC($s3)
    ctx->pc = 0x2094f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_2094fc:
    // 0x2094fc: 0x8e47008c  lw          $a3, 0x8C($s2)
    ctx->pc = 0x2094fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_209500:
    // 0x209500: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x209500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_209504:
    // 0x209504: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x209504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_209508:
    // 0x209508: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x209508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_20950c:
    // 0x20950c: 0x60f809  jalr        $v1
label_209510:
    if (ctx->pc == 0x209510u) {
        ctx->pc = 0x209510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20950Cu;
        // 0x209510: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209514u;
        goto label_209514;
    }
    ctx->pc = 0x20950Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209514u);
        ctx->pc = 0x209510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20950Cu;
        // 0x209510: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20950Cu, 0x209514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209514u;
label_209514:
    // 0x209514: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x209514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_209518:
    // 0x209518: 0x2602fffc  addiu       $v0, $s0, -0x4
    ctx->pc = 0x209518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_20951c:
    // 0x20951c: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x20951cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
label_209520:
    // 0x209520: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x209520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_209524:
    // 0x209524: 0xc080ebe  jal         func_203AF8
label_209528:
    if (ctx->pc == 0x209528u) {
        ctx->pc = 0x209528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209524u;
        // 0x209528: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20952Cu;
        goto label_20952c;
    }
    ctx->pc = 0x209524u;
    SET_GPR_U32(ctx, 31, 0x20952Cu);
    ctx->pc = 0x209528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209524u;
    // 0x209528: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x209524u, 0x20952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20952Cu;
label_20952c:
    // 0x20952c: 0xc080ece  jal         func_203B38
label_209530:
    if (ctx->pc == 0x209530u) {
        ctx->pc = 0x209530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20952Cu;
        // 0x209530: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209534u;
        goto label_209534;
    }
    ctx->pc = 0x20952Cu;
    SET_GPR_U32(ctx, 31, 0x209534u);
    ctx->pc = 0x209530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20952Cu;
    // 0x209530: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B38u, 0x20952Cu, 0x209534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209534u;
label_209534:
    // 0x209534: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x209534u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_209538:
    // 0x209538: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x209538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_20953c:
    // 0x20953c: 0xe675000c  swc1        $f21, 0xC($s3)
    ctx->pc = 0x20953cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_209540:
    // 0x209540: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x209540u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_209544:
    // 0x209544: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x209544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_209548:
    // 0x209548: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x209548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20954c:
    // 0x20954c: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x20954cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_209550:
    // 0x209550: 0x24a58e80  addiu       $a1, $a1, -0x7180
    ctx->pc = 0x209550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938240));
label_209554:
    // 0x209554: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x209554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_209558:
    // 0x209558: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x209558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20955c:
    // 0x20955c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20955cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_209560:
    // 0x209560: 0x27c88e48  addiu       $t0, $fp, -0x71B8
    ctx->pc = 0x209560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 4294938184));
label_209564:
    // 0x209564: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x209564u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_209568:
    // 0x209568: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x209568u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20956c:
    // 0x20956c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20956cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_209570:
    // 0x209570: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x209570u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209574:
    // 0x209574: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x209574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_209578:
    // 0x209578: 0x40f809  jalr        $v0
label_20957c:
    if (ctx->pc == 0x20957Cu) {
        ctx->pc = 0x20957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209578u;
        // 0x20957c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209580u;
        goto label_209580;
    }
    ctx->pc = 0x209578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209580u);
        ctx->pc = 0x20957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209578u;
        // 0x20957c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209578u, 0x209580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209580u;
label_209580:
    // 0x209580: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_209584:
    if (ctx->pc == 0x209584u) {
        ctx->pc = 0x209584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209580u;
        // 0x209584: 0xc7ac0018  lwc1        $f12, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x209588u;
        goto label_209588;
    }
    ctx->pc = 0x209580u;
    {
        const bool branch_taken_0x209580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209580u;
        // 0x209584: 0xc7ac0018  lwc1        $f12, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209580) {
            ctx->pc = 0x209594u;
            goto label_209594;
        }
    }
    ctx->pc = 0x209588u;
label_209588:
    // 0x209588: 0xc074fbc  jal         func_1D3EF0
label_20958c:
    if (ctx->pc == 0x20958Cu) {
        ctx->pc = 0x20958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209588u;
        // 0x20958c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209590u;
        goto label_209590;
    }
    ctx->pc = 0x209588u;
    SET_GPR_U32(ctx, 31, 0x209590u);
    ctx->pc = 0x20958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209588u;
    // 0x20958c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x209588u, 0x209590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209590u;
label_209590:
    // 0x209590: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x209590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_209594:
    // 0x209594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209598:
    // 0x209598: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x209598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20959c:
    // 0x20959c: 0xae420090  sw          $v0, 0x90($s2)
    ctx->pc = 0x20959cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
label_2095a0:
    // 0x2095a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2095a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2095a4:
    // 0x2095a4: 0xc075044  jal         func_1D4110
label_2095a8:
    if (ctx->pc == 0x2095A8u) {
        ctx->pc = 0x2095A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095A4u;
        // 0x2095a8: 0x26470050  addiu       $a3, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095ACu;
        goto label_2095ac;
    }
    ctx->pc = 0x2095A4u;
    SET_GPR_U32(ctx, 31, 0x2095ACu);
    ctx->pc = 0x2095A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2095A4u;
    // 0x2095a8: 0x26470050  addiu       $a3, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x2095A4u, 0x2095ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2095ACu;
label_2095ac:
    // 0x2095ac: 0xc080ebe  jal         func_203AF8
label_2095b0:
    if (ctx->pc == 0x2095B0u) {
        ctx->pc = 0x2095B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095ACu;
        // 0x2095b0: 0x2615ffff  addiu       $s5, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095B4u;
        goto label_2095b4;
    }
    ctx->pc = 0x2095ACu;
    SET_GPR_U32(ctx, 31, 0x2095B4u);
    ctx->pc = 0x2095B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2095ACu;
    // 0x2095b0: 0x2615ffff  addiu       $s5, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x2095ACu, 0x2095B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2095B4u;
label_2095b4:
    // 0x2095b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2095b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2095b8:
    // 0x2095b8: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x2095b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_2095bc:
    // 0x2095bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2095bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2095c0:
    // 0x2095c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2095c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2095c4:
    // 0x2095c4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2095c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2095c8:
    // 0x2095c8: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x2095c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
label_2095cc:
    // 0x2095cc: 0xac640088  sw          $a0, 0x88($v1)
    ctx->pc = 0x2095ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 4));
label_2095d0:
    // 0x2095d0: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x2095d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_2095d4:
    // 0x2095d4: 0xac450094  sw          $a1, 0x94($v0)
    ctx->pc = 0x2095d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 5));
label_2095d8:
    // 0x2095d8: 0x8ec65024  lw          $a2, 0x5024($s6)
    ctx->pc = 0x2095d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20516)));
label_2095dc:
    // 0x2095dc: 0x0  nop
    ctx->pc = 0x2095dcu;
    // NOP
label_2095e0:
    // 0x2095e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2095e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2095e4:
    // 0x2095e4: 0x8cc30128  lw          $v1, 0x128($a2)
    ctx->pc = 0x2095e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 296)));
label_2095e8:
    // 0x2095e8: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x2095e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_2095ec:
    // 0x2095ec: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x2095ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_2095f0:
    // 0x2095f0: 0x40f809  jalr        $v0
label_2095f4:
    if (ctx->pc == 0x2095F4u) {
        ctx->pc = 0x2095F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095F0u;
        // 0x2095f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2095F8u;
        goto label_2095f8;
    }
    ctx->pc = 0x2095F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2095F8u);
        ctx->pc = 0x2095F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095F0u;
        // 0x2095f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2095F0u, 0x2095F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2095F8u;
label_2095f8:
    // 0x2095f8: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_2095fc:
    if (ctx->pc == 0x2095FCu) {
        ctx->pc = 0x2095FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095F8u;
        // 0x2095fc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209600u;
        goto label_209600;
    }
    ctx->pc = 0x2095F8u;
    {
        const bool branch_taken_0x2095f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2095f8) {
            ctx->pc = 0x2095FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2095F8u;
            // 0x2095fc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209684u;
            goto label_209684;
        }
    }
    ctx->pc = 0x209600u;
label_209600:
    // 0x209600: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x209600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_209604:
    // 0x209604: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x209604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_209608:
    // 0x209608: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x209608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_20960c:
    // 0x20960c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_209610:
    // 0x209610: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x209610u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_209614:
    // 0x209614: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x209614u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_209618:
    // 0x209618: 0x55182b  sltu        $v1, $v0, $s5
    ctx->pc = 0x209618u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_20961c:
    // 0x20961c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_209620:
    if (ctx->pc == 0x209620u) {
        ctx->pc = 0x209620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20961Cu;
        // 0x209620: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209624u;
        goto label_209624;
    }
    ctx->pc = 0x20961Cu;
    {
        const bool branch_taken_0x20961c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20961Cu;
        // 0x209620: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20961c) {
            ctx->pc = 0x209630u;
            goto label_209630;
        }
    }
    ctx->pc = 0x209624u;
label_209624:
    // 0x209624: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x209624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_209628:
    // 0x209628: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x209628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20962c:
    // 0x20962c: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x20962cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_209630:
    // 0x209630: 0x8ec65024  lw          $a2, 0x5024($s6)
    ctx->pc = 0x209630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20516)));
label_209634:
    // 0x209634: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x209634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209638:
    // 0x209638: 0x8cc30128  lw          $v1, 0x128($a2)
    ctx->pc = 0x209638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 296)));
label_20963c:
    // 0x20963c: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x20963cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_209640:
    // 0x209640: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x209640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_209644:
    // 0x209644: 0x40f809  jalr        $v0
label_209648:
    if (ctx->pc == 0x209648u) {
        ctx->pc = 0x209648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209644u;
        // 0x209648: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20964Cu;
        goto label_20964c;
    }
    ctx->pc = 0x209644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20964Cu);
        ctx->pc = 0x209648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209644u;
        // 0x209648: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209644u, 0x20964Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20964Cu;
label_20964c:
    // 0x20964c: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x20964cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_209650:
    // 0x209650: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209654:
    // 0x209654: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x209654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_209658:
    // 0x209658: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x209658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_20965c:
    // 0x20965c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20965cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_209660:
    // 0x209660: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x209660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209664:
    // 0x209664: 0x8eead328  lw          $t2, -0x2CD8($s7)
    ctx->pc = 0x209664u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294955816)));
label_209668:
    // 0x209668: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x209668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20966c:
    // 0x20966c: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x20966cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_209670:
    // 0x209670: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x209670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_209674:
    // 0x209674: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x209674u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209678:
    // 0x209678: 0xc07508c  jal         func_1D4230
label_20967c:
    if (ctx->pc == 0x20967Cu) {
        ctx->pc = 0x20967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209678u;
        // 0x20967c: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209680u;
        goto label_209680;
    }
    ctx->pc = 0x209678u;
    SET_GPR_U32(ctx, 31, 0x209680u);
    ctx->pc = 0x20967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209678u;
    // 0x20967c: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x209678u, 0x209680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209680u;
label_209680:
    // 0x209680: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x209680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_209684:
    // 0x209684: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x209684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_209688:
    // 0x209688: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_20968c:
    if (ctx->pc == 0x20968Cu) {
        ctx->pc = 0x20968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209688u;
        // 0x20968c: 0x8ec65024  lw          $a2, 0x5024($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209690u;
        goto label_209690;
    }
    ctx->pc = 0x209688u;
    {
        const bool branch_taken_0x209688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209688u;
        // 0x20968c: 0x8ec65024  lw          $a2, 0x5024($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209688) {
            ctx->pc = 0x2095E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2095e0;
        }
    }
    ctx->pc = 0x209690u;
label_209690:
    // 0x209690: 0x8e450090  lw          $a1, 0x90($s2)
    ctx->pc = 0x209690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_209694:
    // 0x209694: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x209694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_209698:
    // 0x209698: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x209698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_20969c:
    // 0x20969c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x20969cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2096a0:
    // 0x2096a0: 0x60f809  jalr        $v1
label_2096a4:
    if (ctx->pc == 0x2096A4u) {
        ctx->pc = 0x2096A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096A0u;
        // 0x2096a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096A8u;
        goto label_2096a8;
    }
    ctx->pc = 0x2096A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2096A8u);
        ctx->pc = 0x2096A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096A0u;
        // 0x2096a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2096A0u, 0x2096A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2096A8u;
label_2096a8:
    // 0x2096a8: 0xc080ebe  jal         func_203AF8
label_2096ac:
    if (ctx->pc == 0x2096ACu) {
        ctx->pc = 0x2096B0u;
        goto label_2096b0;
    }
    ctx->pc = 0x2096A8u;
    SET_GPR_U32(ctx, 31, 0x2096B0u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x2096A8u, 0x2096B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096B0u;
label_2096b0:
    // 0x2096b0: 0xc080ec2  jal         func_203B08
label_2096b4:
    if (ctx->pc == 0x2096B4u) {
        ctx->pc = 0x2096B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2096B0u;
        // 0x2096b4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2096B8u;
        goto label_2096b8;
    }
    ctx->pc = 0x2096B0u;
    SET_GPR_U32(ctx, 31, 0x2096B8u);
    ctx->pc = 0x2096B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2096B0u;
    // 0x2096b4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B08u, 0x2096B0u, 0x2096B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2096B8u;
label_2096b8:
    // 0x2096b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2096b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2096bc:
    // 0x2096bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2096bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2096c0:
    // 0x2096c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2096c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2096c4:
    // 0x2096c4: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2096c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2096c8:
    // 0x2096c8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2096c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2096cc:
    // 0x2096cc: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x2096ccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_2096d0:
    // 0x2096d0: 0x24a58e90  addiu       $a1, $a1, -0x7170
    ctx->pc = 0x2096d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938256));
label_2096d4:
    // 0x2096d4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x2096d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_2096d8:
    // 0x2096d8: 0x27c88e48  addiu       $t0, $fp, -0x71B8
    ctx->pc = 0x2096d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 4294938184));
label_2096dc:
    // 0x2096dc: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x2096dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_2096e0:
    // 0x2096e0: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x2096e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_2096e4:
    // 0x2096e4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2096e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2096e8:
    // 0x2096e8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2096e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2096ec:
    // 0x2096ec: 0x24090056  addiu       $t1, $zero, 0x56
    ctx->pc = 0x2096ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_2096f0:
    // 0x2096f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2096f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2096f4:
    // 0x2096f4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2096f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2096f8:
    // 0x2096f8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2096f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2096fc:
    // 0x2096fc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2096fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_209700:
    // 0x209700: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x209700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_209704:
    // 0x209704: 0x40f809  jalr        $v0
label_209708:
    if (ctx->pc == 0x209708u) {
        ctx->pc = 0x209708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209704u;
        // 0x209708: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20970Cu;
        goto label_20970c;
    }
    ctx->pc = 0x209704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20970Cu);
        ctx->pc = 0x209708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209704u;
        // 0x209708: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209704u, 0x20970Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20970Cu;
label_20970c:
    // 0x20970c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_209710:
    if (ctx->pc == 0x209710u) {
        ctx->pc = 0x209710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20970Cu;
        // 0x209710: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209714u;
        goto label_209714;
    }
    ctx->pc = 0x20970Cu;
    {
        const bool branch_taken_0x20970c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20970c) {
            ctx->pc = 0x209710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20970Cu;
            // 0x209710: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209720u;
            goto label_209720;
        }
    }
    ctx->pc = 0x209714u;
label_209714:
    // 0x209714: 0xc073a9c  jal         func_1CEA70
label_209718:
    if (ctx->pc == 0x209718u) {
        ctx->pc = 0x209718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209714u;
        // 0x209718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20971Cu;
        goto label_20971c;
    }
    ctx->pc = 0x209714u;
    SET_GPR_U32(ctx, 31, 0x20971Cu);
    ctx->pc = 0x209718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209714u;
    // 0x209718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x209714u, 0x20971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20971Cu;
label_20971c:
    // 0x20971c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20971cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_209720:
    // 0x209720: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209724:
    // 0x209724: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x209724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209728:
    // 0x209728: 0xc073ad0  jal         func_1CEB40
label_20972c:
    if (ctx->pc == 0x20972Cu) {
        ctx->pc = 0x20972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209728u;
        // 0x20972c: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209730u;
        goto label_209730;
    }
    ctx->pc = 0x209728u;
    SET_GPR_U32(ctx, 31, 0x209730u);
    ctx->pc = 0x20972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209728u;
    // 0x20972c: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x209728u, 0x209730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209730u;
label_209730:
    // 0x209730: 0xc067b9c  jal         func_19EE70
label_209734:
    if (ctx->pc == 0x209734u) {
        ctx->pc = 0x209734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209730u;
        // 0x209734: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209738u;
        goto label_209738;
    }
    ctx->pc = 0x209730u;
    SET_GPR_U32(ctx, 31, 0x209738u);
    ctx->pc = 0x209734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209730u;
    // 0x209734: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x209730u, 0x209738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209738u;
label_209738:
    // 0x209738: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x209738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_20973c:
    // 0x20973c: 0xc073b0a  jal         func_1CEC28
label_209740:
    if (ctx->pc == 0x209740u) {
        ctx->pc = 0x209740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20973Cu;
        // 0x209740: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209744u;
        goto label_209744;
    }
    ctx->pc = 0x20973Cu;
    SET_GPR_U32(ctx, 31, 0x209744u);
    ctx->pc = 0x209740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20973Cu;
    // 0x209740: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x20973Cu, 0x209744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209744u;
label_209744:
    // 0x209744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209748:
    // 0x209748: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x209748u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_20974c:
    // 0x20974c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x20974cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_209750:
    // 0x209750: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x209750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_209754:
    // 0x209754: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x209754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_209758:
    // 0x209758: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x209758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20975c:
    // 0x20975c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x20975cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_209760:
    // 0x209760: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x209760u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_209764:
    // 0x209764: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x209764u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_209768:
    // 0x209768: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x209768u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20976c:
    // 0x20976c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x20976cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_209770:
    // 0x209770: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x209770u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_209774:
    // 0x209774: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x209774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_209778:
    // 0x209778: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x209778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20977c:
    // 0x20977c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x20977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_209780:
    // 0x209780: 0x3e00008  jr          $ra
label_209784:
    if (ctx->pc == 0x209784u) {
        ctx->pc = 0x209784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209780u;
        // 0x209784: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209788u;
        goto label_fallthrough_0x209780;
    }
    ctx->pc = 0x209780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209780u;
        // 0x209784: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x209780:
    ctx->pc = 0x209788u;
}
