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

// Function: sub_00195400
// Address: 0x195400 - 0x1958b0
void sub_00195400_0x195400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195400_0x195400");
#endif

    switch (ctx->pc) {
        case 0x195400u: goto label_195400;
        case 0x195404u: goto label_195404;
        case 0x195408u: goto label_195408;
        case 0x19540cu: goto label_19540c;
        case 0x195410u: goto label_195410;
        case 0x195414u: goto label_195414;
        case 0x195418u: goto label_195418;
        case 0x19541cu: goto label_19541c;
        case 0x195420u: goto label_195420;
        case 0x195424u: goto label_195424;
        case 0x195428u: goto label_195428;
        case 0x19542cu: goto label_19542c;
        case 0x195430u: goto label_195430;
        case 0x195434u: goto label_195434;
        case 0x195438u: goto label_195438;
        case 0x19543cu: goto label_19543c;
        case 0x195440u: goto label_195440;
        case 0x195444u: goto label_195444;
        case 0x195448u: goto label_195448;
        case 0x19544cu: goto label_19544c;
        case 0x195450u: goto label_195450;
        case 0x195454u: goto label_195454;
        case 0x195458u: goto label_195458;
        case 0x19545cu: goto label_19545c;
        case 0x195460u: goto label_195460;
        case 0x195464u: goto label_195464;
        case 0x195468u: goto label_195468;
        case 0x19546cu: goto label_19546c;
        case 0x195470u: goto label_195470;
        case 0x195474u: goto label_195474;
        case 0x195478u: goto label_195478;
        case 0x19547cu: goto label_19547c;
        case 0x195480u: goto label_195480;
        case 0x195484u: goto label_195484;
        case 0x195488u: goto label_195488;
        case 0x19548cu: goto label_19548c;
        case 0x195490u: goto label_195490;
        case 0x195494u: goto label_195494;
        case 0x195498u: goto label_195498;
        case 0x19549cu: goto label_19549c;
        case 0x1954a0u: goto label_1954a0;
        case 0x1954a4u: goto label_1954a4;
        case 0x1954a8u: goto label_1954a8;
        case 0x1954acu: goto label_1954ac;
        case 0x1954b0u: goto label_1954b0;
        case 0x1954b4u: goto label_1954b4;
        case 0x1954b8u: goto label_1954b8;
        case 0x1954bcu: goto label_1954bc;
        case 0x1954c0u: goto label_1954c0;
        case 0x1954c4u: goto label_1954c4;
        case 0x1954c8u: goto label_1954c8;
        case 0x1954ccu: goto label_1954cc;
        case 0x1954d0u: goto label_1954d0;
        case 0x1954d4u: goto label_1954d4;
        case 0x1954d8u: goto label_1954d8;
        case 0x1954dcu: goto label_1954dc;
        case 0x1954e0u: goto label_1954e0;
        case 0x1954e4u: goto label_1954e4;
        case 0x1954e8u: goto label_1954e8;
        case 0x1954ecu: goto label_1954ec;
        case 0x1954f0u: goto label_1954f0;
        case 0x1954f4u: goto label_1954f4;
        case 0x1954f8u: goto label_1954f8;
        case 0x1954fcu: goto label_1954fc;
        case 0x195500u: goto label_195500;
        case 0x195504u: goto label_195504;
        case 0x195508u: goto label_195508;
        case 0x19550cu: goto label_19550c;
        case 0x195510u: goto label_195510;
        case 0x195514u: goto label_195514;
        case 0x195518u: goto label_195518;
        case 0x19551cu: goto label_19551c;
        case 0x195520u: goto label_195520;
        case 0x195524u: goto label_195524;
        case 0x195528u: goto label_195528;
        case 0x19552cu: goto label_19552c;
        case 0x195530u: goto label_195530;
        case 0x195534u: goto label_195534;
        case 0x195538u: goto label_195538;
        case 0x19553cu: goto label_19553c;
        case 0x195540u: goto label_195540;
        case 0x195544u: goto label_195544;
        case 0x195548u: goto label_195548;
        case 0x19554cu: goto label_19554c;
        case 0x195550u: goto label_195550;
        case 0x195554u: goto label_195554;
        case 0x195558u: goto label_195558;
        case 0x19555cu: goto label_19555c;
        case 0x195560u: goto label_195560;
        case 0x195564u: goto label_195564;
        case 0x195568u: goto label_195568;
        case 0x19556cu: goto label_19556c;
        case 0x195570u: goto label_195570;
        case 0x195574u: goto label_195574;
        case 0x195578u: goto label_195578;
        case 0x19557cu: goto label_19557c;
        case 0x195580u: goto label_195580;
        case 0x195584u: goto label_195584;
        case 0x195588u: goto label_195588;
        case 0x19558cu: goto label_19558c;
        case 0x195590u: goto label_195590;
        case 0x195594u: goto label_195594;
        case 0x195598u: goto label_195598;
        case 0x19559cu: goto label_19559c;
        case 0x1955a0u: goto label_1955a0;
        case 0x1955a4u: goto label_1955a4;
        case 0x1955a8u: goto label_1955a8;
        case 0x1955acu: goto label_1955ac;
        case 0x1955b0u: goto label_1955b0;
        case 0x1955b4u: goto label_1955b4;
        case 0x1955b8u: goto label_1955b8;
        case 0x1955bcu: goto label_1955bc;
        case 0x1955c0u: goto label_1955c0;
        case 0x1955c4u: goto label_1955c4;
        case 0x1955c8u: goto label_1955c8;
        case 0x1955ccu: goto label_1955cc;
        case 0x1955d0u: goto label_1955d0;
        case 0x1955d4u: goto label_1955d4;
        case 0x1955d8u: goto label_1955d8;
        case 0x1955dcu: goto label_1955dc;
        case 0x1955e0u: goto label_1955e0;
        case 0x1955e4u: goto label_1955e4;
        case 0x1955e8u: goto label_1955e8;
        case 0x1955ecu: goto label_1955ec;
        case 0x1955f0u: goto label_1955f0;
        case 0x1955f4u: goto label_1955f4;
        case 0x1955f8u: goto label_1955f8;
        case 0x1955fcu: goto label_1955fc;
        case 0x195600u: goto label_195600;
        case 0x195604u: goto label_195604;
        case 0x195608u: goto label_195608;
        case 0x19560cu: goto label_19560c;
        case 0x195610u: goto label_195610;
        case 0x195614u: goto label_195614;
        case 0x195618u: goto label_195618;
        case 0x19561cu: goto label_19561c;
        case 0x195620u: goto label_195620;
        case 0x195624u: goto label_195624;
        case 0x195628u: goto label_195628;
        case 0x19562cu: goto label_19562c;
        case 0x195630u: goto label_195630;
        case 0x195634u: goto label_195634;
        case 0x195638u: goto label_195638;
        case 0x19563cu: goto label_19563c;
        case 0x195640u: goto label_195640;
        case 0x195644u: goto label_195644;
        case 0x195648u: goto label_195648;
        case 0x19564cu: goto label_19564c;
        case 0x195650u: goto label_195650;
        case 0x195654u: goto label_195654;
        case 0x195658u: goto label_195658;
        case 0x19565cu: goto label_19565c;
        case 0x195660u: goto label_195660;
        case 0x195664u: goto label_195664;
        case 0x195668u: goto label_195668;
        case 0x19566cu: goto label_19566c;
        case 0x195670u: goto label_195670;
        case 0x195674u: goto label_195674;
        case 0x195678u: goto label_195678;
        case 0x19567cu: goto label_19567c;
        case 0x195680u: goto label_195680;
        case 0x195684u: goto label_195684;
        case 0x195688u: goto label_195688;
        case 0x19568cu: goto label_19568c;
        case 0x195690u: goto label_195690;
        case 0x195694u: goto label_195694;
        case 0x195698u: goto label_195698;
        case 0x19569cu: goto label_19569c;
        case 0x1956a0u: goto label_1956a0;
        case 0x1956a4u: goto label_1956a4;
        case 0x1956a8u: goto label_1956a8;
        case 0x1956acu: goto label_1956ac;
        case 0x1956b0u: goto label_1956b0;
        case 0x1956b4u: goto label_1956b4;
        case 0x1956b8u: goto label_1956b8;
        case 0x1956bcu: goto label_1956bc;
        case 0x1956c0u: goto label_1956c0;
        case 0x1956c4u: goto label_1956c4;
        case 0x1956c8u: goto label_1956c8;
        case 0x1956ccu: goto label_1956cc;
        case 0x1956d0u: goto label_1956d0;
        case 0x1956d4u: goto label_1956d4;
        case 0x1956d8u: goto label_1956d8;
        case 0x1956dcu: goto label_1956dc;
        case 0x1956e0u: goto label_1956e0;
        case 0x1956e4u: goto label_1956e4;
        case 0x1956e8u: goto label_1956e8;
        case 0x1956ecu: goto label_1956ec;
        case 0x1956f0u: goto label_1956f0;
        case 0x1956f4u: goto label_1956f4;
        case 0x1956f8u: goto label_1956f8;
        case 0x1956fcu: goto label_1956fc;
        case 0x195700u: goto label_195700;
        case 0x195704u: goto label_195704;
        case 0x195708u: goto label_195708;
        case 0x19570cu: goto label_19570c;
        case 0x195710u: goto label_195710;
        case 0x195714u: goto label_195714;
        case 0x195718u: goto label_195718;
        case 0x19571cu: goto label_19571c;
        case 0x195720u: goto label_195720;
        case 0x195724u: goto label_195724;
        case 0x195728u: goto label_195728;
        case 0x19572cu: goto label_19572c;
        case 0x195730u: goto label_195730;
        case 0x195734u: goto label_195734;
        case 0x195738u: goto label_195738;
        case 0x19573cu: goto label_19573c;
        case 0x195740u: goto label_195740;
        case 0x195744u: goto label_195744;
        case 0x195748u: goto label_195748;
        case 0x19574cu: goto label_19574c;
        case 0x195750u: goto label_195750;
        case 0x195754u: goto label_195754;
        case 0x195758u: goto label_195758;
        case 0x19575cu: goto label_19575c;
        case 0x195760u: goto label_195760;
        case 0x195764u: goto label_195764;
        case 0x195768u: goto label_195768;
        case 0x19576cu: goto label_19576c;
        case 0x195770u: goto label_195770;
        case 0x195774u: goto label_195774;
        case 0x195778u: goto label_195778;
        case 0x19577cu: goto label_19577c;
        case 0x195780u: goto label_195780;
        case 0x195784u: goto label_195784;
        case 0x195788u: goto label_195788;
        case 0x19578cu: goto label_19578c;
        case 0x195790u: goto label_195790;
        case 0x195794u: goto label_195794;
        case 0x195798u: goto label_195798;
        case 0x19579cu: goto label_19579c;
        case 0x1957a0u: goto label_1957a0;
        case 0x1957a4u: goto label_1957a4;
        case 0x1957a8u: goto label_1957a8;
        case 0x1957acu: goto label_1957ac;
        case 0x1957b0u: goto label_1957b0;
        case 0x1957b4u: goto label_1957b4;
        case 0x1957b8u: goto label_1957b8;
        case 0x1957bcu: goto label_1957bc;
        case 0x1957c0u: goto label_1957c0;
        case 0x1957c4u: goto label_1957c4;
        case 0x1957c8u: goto label_1957c8;
        case 0x1957ccu: goto label_1957cc;
        case 0x1957d0u: goto label_1957d0;
        case 0x1957d4u: goto label_1957d4;
        case 0x1957d8u: goto label_1957d8;
        case 0x1957dcu: goto label_1957dc;
        case 0x1957e0u: goto label_1957e0;
        case 0x1957e4u: goto label_1957e4;
        case 0x1957e8u: goto label_1957e8;
        case 0x1957ecu: goto label_1957ec;
        case 0x1957f0u: goto label_1957f0;
        case 0x1957f4u: goto label_1957f4;
        case 0x1957f8u: goto label_1957f8;
        case 0x1957fcu: goto label_1957fc;
        case 0x195800u: goto label_195800;
        case 0x195804u: goto label_195804;
        case 0x195808u: goto label_195808;
        case 0x19580cu: goto label_19580c;
        case 0x195810u: goto label_195810;
        case 0x195814u: goto label_195814;
        case 0x195818u: goto label_195818;
        case 0x19581cu: goto label_19581c;
        case 0x195820u: goto label_195820;
        case 0x195824u: goto label_195824;
        case 0x195828u: goto label_195828;
        case 0x19582cu: goto label_19582c;
        case 0x195830u: goto label_195830;
        case 0x195834u: goto label_195834;
        case 0x195838u: goto label_195838;
        case 0x19583cu: goto label_19583c;
        case 0x195840u: goto label_195840;
        case 0x195844u: goto label_195844;
        case 0x195848u: goto label_195848;
        case 0x19584cu: goto label_19584c;
        case 0x195850u: goto label_195850;
        case 0x195854u: goto label_195854;
        case 0x195858u: goto label_195858;
        case 0x19585cu: goto label_19585c;
        case 0x195860u: goto label_195860;
        case 0x195864u: goto label_195864;
        case 0x195868u: goto label_195868;
        case 0x19586cu: goto label_19586c;
        case 0x195870u: goto label_195870;
        case 0x195874u: goto label_195874;
        case 0x195878u: goto label_195878;
        case 0x19587cu: goto label_19587c;
        case 0x195880u: goto label_195880;
        case 0x195884u: goto label_195884;
        case 0x195888u: goto label_195888;
        case 0x19588cu: goto label_19588c;
        case 0x195890u: goto label_195890;
        case 0x195894u: goto label_195894;
        case 0x195898u: goto label_195898;
        case 0x19589cu: goto label_19589c;
        case 0x1958a0u: goto label_1958a0;
        case 0x1958a4u: goto label_1958a4;
        case 0x1958a8u: goto label_1958a8;
        case 0x1958acu: goto label_1958ac;
        default: break;
    }

    ctx->pc = 0x195400u;

label_195400:
    // 0x195400: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x195400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_195404:
    // 0x195404: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x195404u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_195408:
    // 0x195408: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x195408u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_19540c:
    // 0x19540c: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x19540cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_195410:
    // 0x195410: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x195410u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_195414:
    // 0x195414: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x195414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_195418:
    // 0x195418: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x195418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_19541c:
    // 0x19541c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19541cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_195420:
    // 0x195420: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x195420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_195424:
    // 0x195424: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x195424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_195428:
    // 0x195428: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x195428u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_19542c:
    // 0x19542c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19542cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195430:
    // 0x195430: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x195430u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_195434:
    // 0x195434: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x195434u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
label_195438:
    // 0x195438: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x195438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_19543c:
    // 0x19543c: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x19543cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_195440:
    // 0x195440: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x195440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_195444:
    // 0x195444: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x195444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_195448:
    // 0x195448: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x195448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_19544c:
    // 0x19544c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x19544cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_195450:
    // 0x195450: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x195450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_195454:
    // 0x195454: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x195454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_195458:
    // 0x195458: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x195458u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19545c:
    // 0x19545c: 0xe7b60004  swc1        $f22, 0x4($sp)
    ctx->pc = 0x19545cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_195460:
    // 0x195460: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x195460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_195464:
    // 0x195464: 0xe7b00060  swc1        $f16, 0x60($sp)
    ctx->pc = 0x195464u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_195468:
    // 0x195468: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x195468u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_19546c:
    // 0x19546c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x19546cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_195470:
    // 0x195470: 0x40f809  jalr        $v0
label_195474:
    if (ctx->pc == 0x195474u) {
        ctx->pc = 0x195474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195470u;
        // 0x195474: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195478u;
        goto label_195478;
    }
    ctx->pc = 0x195470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195478u);
        ctx->pc = 0x195474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195470u;
        // 0x195474: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195470u, 0x195478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195478u;
label_195478:
    // 0x195478: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x195478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19547c:
    // 0x19547c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19547cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195480:
    // 0x195480: 0xc7ad0060  lwc1        $f13, 0x60($sp)
    ctx->pc = 0x195480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_195484:
    // 0x195484: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x195484u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_195488:
    // 0x195488: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x195488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_19548c:
    // 0x19548c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x19548cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_195490:
    // 0x195490: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x195490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_195494:
    // 0x195494: 0xc0f809  jalr        $a2
label_195498:
    if (ctx->pc == 0x195498u) {
        ctx->pc = 0x195498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195494u;
        // 0x195498: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19549Cu;
        goto label_19549c;
    }
    ctx->pc = 0x195494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x19549Cu);
        ctx->pc = 0x195498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195494u;
        // 0x195498: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195494u, 0x19549Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19549Cu;
label_19549c:
    // 0x19549c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x19549cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1954a0:
    // 0x1954a0: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x1954a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_1954a4:
    // 0x1954a4: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1954a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_1954a8:
    // 0x1954a8: 0x40f809  jalr        $v0
label_1954ac:
    if (ctx->pc == 0x1954ACu) {
        ctx->pc = 0x1954ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954A8u;
        // 0x1954ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954B0u;
        goto label_1954b0;
    }
    ctx->pc = 0x1954A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1954B0u);
        ctx->pc = 0x1954ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954A8u;
        // 0x1954ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1954A8u, 0x1954B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1954B0u;
label_1954b0:
    // 0x1954b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1954b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1954b4:
    // 0x1954b4: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x1954b4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_1954b8:
    // 0x1954b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1954b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1954bc:
    // 0x1954bc: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x1954bcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
label_1954c0:
    // 0x1954c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1954c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1954c4:
    // 0x1954c4: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x1954c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1954c8:
    // 0x1954c8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1954c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1954cc:
    // 0x1954cc: 0xa0f809  jalr        $a1
label_1954d0:
    if (ctx->pc == 0x1954D0u) {
        ctx->pc = 0x1954D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954CCu;
        // 0x1954d0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954D4u;
        goto label_1954d4;
    }
    ctx->pc = 0x1954CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1954D4u);
        ctx->pc = 0x1954D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954CCu;
        // 0x1954d0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1954CCu, 0x1954D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1954D4u;
label_1954d4:
    // 0x1954d4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1954d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1954d8:
    // 0x1954d8: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x1954d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_1954dc:
    // 0x1954dc: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1954dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_1954e0:
    // 0x1954e0: 0x40f809  jalr        $v0
label_1954e4:
    if (ctx->pc == 0x1954E4u) {
        ctx->pc = 0x1954E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954E0u;
        // 0x1954e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954E8u;
        goto label_1954e8;
    }
    ctx->pc = 0x1954E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1954E8u);
        ctx->pc = 0x1954E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954E0u;
        // 0x1954e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1954E0u, 0x1954E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1954E8u;
label_1954e8:
    // 0x1954e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1954e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1954ec:
    // 0x1954ec: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1954ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1954f0:
    // 0x1954f0: 0xc62c0444  lwc1        $f12, 0x444($s1)
    ctx->pc = 0x1954f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1954f4:
    // 0x1954f4: 0x84a40040  lh          $a0, 0x40($a1)
    ctx->pc = 0x1954f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
label_1954f8:
    // 0x1954f8: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x1954f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_1954fc:
    // 0x1954fc: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x1954fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_195500:
    // 0x195500: 0x60f809  jalr        $v1
label_195504:
    if (ctx->pc == 0x195504u) {
        ctx->pc = 0x195504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195500u;
        // 0x195504: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195508u;
        goto label_195508;
    }
    ctx->pc = 0x195500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x195508u);
        ctx->pc = 0x195504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195500u;
        // 0x195504: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195500u, 0x195508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195508u;
label_195508:
    // 0x195508: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x195508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_19550c:
    // 0x19550c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_195510:
    // 0x195510: 0xc123c3e  jal         func_48F0F8
label_195514:
    if (ctx->pc == 0x195514u) {
        ctx->pc = 0x195514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195510u;
        // 0x195514: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195518u;
        goto label_195518;
    }
    ctx->pc = 0x195510u;
    SET_GPR_U32(ctx, 31, 0x195518u);
    ctx->pc = 0x195514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195510u;
    // 0x195514: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48F0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F0F8u, 0x195510u, 0x195518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195518u;
label_195518:
    // 0x195518: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x195518u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_19551c:
    // 0x19551c: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x19551cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_195520:
    // 0x195520: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x195520u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_195524:
    // 0x195524: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x195524u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_195528:
    // 0x195528: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x195528u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_19552c:
    // 0x19552c: 0x10000036  b           . + 4 + (0x36 << 2)
label_195530:
    if (ctx->pc == 0x195530u) {
        ctx->pc = 0x195530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19552Cu;
        // 0x195530: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195534u;
        goto label_195534;
    }
    ctx->pc = 0x19552Cu;
    {
        const bool branch_taken_0x19552c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19552Cu;
        // 0x195530: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19552c) {
            ctx->pc = 0x195608u;
            goto label_195608;
        }
    }
    ctx->pc = 0x195534u;
label_195534:
    // 0x195534: 0x0  nop
    ctx->pc = 0x195534u;
    // NOP
label_195538:
    // 0x195538: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x195538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19553c:
    // 0x19553c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x19553cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_195540:
    // 0x195540: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x195540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_195544:
    // 0x195544: 0x40f809  jalr        $v0
label_195548:
    if (ctx->pc == 0x195548u) {
        ctx->pc = 0x195548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195544u;
        // 0x195548: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19554Cu;
        goto label_19554c;
    }
    ctx->pc = 0x195544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19554Cu);
        ctx->pc = 0x195548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195544u;
        // 0x195548: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195544u, 0x19554Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19554Cu;
label_19554c:
    // 0x19554c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195550:
    // 0x195550: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x195550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_195554:
    // 0x195554: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x195554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_195558:
    // 0x195558: 0xa0f809  jalr        $a1
label_19555c:
    if (ctx->pc == 0x19555Cu) {
        ctx->pc = 0x19555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195558u;
        // 0x19555c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195560u;
        goto label_195560;
    }
    ctx->pc = 0x195558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x195560u);
        ctx->pc = 0x19555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195558u;
        // 0x19555c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195558u, 0x195560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195560u;
label_195560:
    // 0x195560: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_195564:
    if (ctx->pc == 0x195564u) {
        ctx->pc = 0x195564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195560u;
        // 0x195564: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195568u;
        goto label_195568;
    }
    ctx->pc = 0x195560u;
    {
        const bool branch_taken_0x195560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195560u;
        // 0x195564: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195560) {
            ctx->pc = 0x195604u;
            goto label_195604;
        }
    }
    ctx->pc = 0x195568u;
label_195568:
    // 0x195568: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x195568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_19556c:
    // 0x19556c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x19556cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_195570:
    // 0x195570: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x195570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_195574:
    // 0x195574: 0x40f809  jalr        $v0
label_195578:
    if (ctx->pc == 0x195578u) {
        ctx->pc = 0x195578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195574u;
        // 0x195578: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19557Cu;
        goto label_19557c;
    }
    ctx->pc = 0x195574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19557Cu);
        ctx->pc = 0x195578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195574u;
        // 0x195578: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195574u, 0x19557Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19557Cu;
label_19557c:
    // 0x19557c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195580:
    // 0x195580: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x195580u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_195584:
    // 0x195584: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x195584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_195588:
    // 0x195588: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x195588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19558c:
    // 0x19558c: 0xa0f809  jalr        $a1
label_195590:
    if (ctx->pc == 0x195590u) {
        ctx->pc = 0x195590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19558Cu;
        // 0x195590: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195594u;
        goto label_195594;
    }
    ctx->pc = 0x19558Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x195594u);
        ctx->pc = 0x195590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19558Cu;
        // 0x195590: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19558Cu, 0x195594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195594u;
label_195594:
    // 0x195594: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x195594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_195598:
    // 0x195598: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x195598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19559c:
    // 0x19559c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x19559cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1955a0:
    // 0x1955a0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1955a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1955a4:
    // 0x1955a4: 0x40f809  jalr        $v0
label_1955a8:
    if (ctx->pc == 0x1955A8u) {
        ctx->pc = 0x1955A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955A4u;
        // 0x1955a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1955ACu;
        goto label_1955ac;
    }
    ctx->pc = 0x1955A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1955ACu);
        ctx->pc = 0x1955A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955A4u;
        // 0x1955a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1955A4u, 0x1955ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1955ACu;
label_1955ac:
    // 0x1955ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1955acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1955b0:
    // 0x1955b0: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x1955b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1955b4:
    // 0x1955b4: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1955b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1955b8:
    // 0x1955b8: 0x8c65003c  lw          $a1, 0x3C($v1)
    ctx->pc = 0x1955b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1955bc:
    // 0x1955bc: 0xa0f809  jalr        $a1
label_1955c0:
    if (ctx->pc == 0x1955C0u) {
        ctx->pc = 0x1955C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955BCu;
        // 0x1955c0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1955C4u;
        goto label_1955c4;
    }
    ctx->pc = 0x1955BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1955C4u);
        ctx->pc = 0x1955C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955BCu;
        // 0x1955c0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1955BCu, 0x1955C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1955C4u;
label_1955c4:
    // 0x1955c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1955c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1955c8:
    // 0x1955c8: 0xc123c3e  jal         func_48F0F8
label_1955cc:
    if (ctx->pc == 0x1955CCu) {
        ctx->pc = 0x1955CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955C8u;
        // 0x1955cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1955D0u;
        goto label_1955d0;
    }
    ctx->pc = 0x1955C8u;
    SET_GPR_U32(ctx, 31, 0x1955D0u);
    ctx->pc = 0x1955CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1955C8u;
    // 0x1955cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48F0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F0F8u, 0x1955C8u, 0x1955D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955D0u;
label_1955d0:
    // 0x1955d0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1955d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1955d4:
    // 0x1955d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1955d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1955d8:
    // 0x1955d8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1955d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1955dc:
    // 0x1955dc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1955dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1955e0:
    // 0x1955e0: 0x40f809  jalr        $v0
label_1955e4:
    if (ctx->pc == 0x1955E4u) {
        ctx->pc = 0x1955E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955E0u;
        // 0x1955e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1955E8u;
        goto label_1955e8;
    }
    ctx->pc = 0x1955E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1955E8u);
        ctx->pc = 0x1955E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955E0u;
        // 0x1955e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1955E0u, 0x1955E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1955E8u;
label_1955e8:
    // 0x1955e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1955e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1955ec:
    // 0x1955ec: 0xc62c0444  lwc1        $f12, 0x444($s1)
    ctx->pc = 0x1955ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1955f0:
    // 0x1955f0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1955f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1955f4:
    // 0x1955f4: 0x460cbb02  mul.s       $f12, $f23, $f12
    ctx->pc = 0x1955f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[12]);
label_1955f8:
    // 0x1955f8: 0x8c650044  lw          $a1, 0x44($v1)
    ctx->pc = 0x1955f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1955fc:
    // 0x1955fc: 0xa0f809  jalr        $a1
label_195600:
    if (ctx->pc == 0x195600u) {
        ctx->pc = 0x195600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955FCu;
        // 0x195600: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195604u;
        goto label_195604;
    }
    ctx->pc = 0x1955FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x195604u);
        ctx->pc = 0x195600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955FCu;
        // 0x195600: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1955FCu, 0x195604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195604u;
label_195604:
    // 0x195604: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x195604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_195608:
    // 0x195608: 0xc047ab8  jal         func_11EAE0
label_19560c:
    if (ctx->pc == 0x19560Cu) {
        ctx->pc = 0x195610u;
        goto label_195610;
    }
    ctx->pc = 0x195608u;
    SET_GPR_U32(ctx, 31, 0x195610u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x195608u, 0x195610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195610u;
label_195610:
    // 0x195610: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x195610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_195614:
    // 0x195614: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_195618:
    if (ctx->pc == 0x195618u) {
        ctx->pc = 0x195618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195614u;
        // 0x195618: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19561Cu;
        goto label_19561c;
    }
    ctx->pc = 0x195614u;
    {
        const bool branch_taken_0x195614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195614u;
        // 0x195618: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195614) {
            ctx->pc = 0x195538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195538;
        }
    }
    ctx->pc = 0x19561Cu;
label_19561c:
    // 0x19561c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19561cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_195620:
    // 0x195620: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x195620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_195624:
    // 0x195624: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x195624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195628:
    // 0x195628: 0xc681b208  lwc1        $f1, -0x4DF8($s4)
    ctx->pc = 0x195628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294947336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19562c:
    // 0x19562c: 0xc6a0b20c  lwc1        $f0, -0x4DF4($s5)
    ctx->pc = 0x19562cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294947340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_195630:
    // 0x195630: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x195630u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_195634:
    // 0x195634: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x195634u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_195638:
    // 0x195638: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x195638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19563c:
    // 0x19563c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19563cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_195640:
    // 0x195640: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x195640u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_195644:
    // 0x195644: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x195644u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
label_195648:
    // 0x195648: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x195648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_19564c:
    // 0x19564c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x19564cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_195650:
    // 0x195650: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x195650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_195654:
    // 0x195654: 0x40f809  jalr        $v0
label_195658:
    if (ctx->pc == 0x195658u) {
        ctx->pc = 0x195658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195654u;
        // 0x195658: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19565Cu;
        goto label_19565c;
    }
    ctx->pc = 0x195654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19565Cu);
        ctx->pc = 0x195658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195654u;
        // 0x195658: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195654u, 0x19565Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19565Cu;
label_19565c:
    // 0x19565c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19565cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195660:
    // 0x195660: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x195660u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_195664:
    // 0x195664: 0xc7ae0010  lwc1        $f14, 0x10($sp)
    ctx->pc = 0x195664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_195668:
    // 0x195668: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x195668u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_19566c:
    // 0x19566c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x19566cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_195670:
    // 0x195670: 0xc7af0014  lwc1        $f15, 0x14($sp)
    ctx->pc = 0x195670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_195674:
    // 0x195674: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x195674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_195678:
    // 0x195678: 0xa0f809  jalr        $a1
label_19567c:
    if (ctx->pc == 0x19567Cu) {
        ctx->pc = 0x19567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195678u;
        // 0x19567c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195680u;
        goto label_195680;
    }
    ctx->pc = 0x195678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x195680u);
        ctx->pc = 0x19567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195678u;
        // 0x19567c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195678u, 0x195680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195680u;
label_195680:
    // 0x195680: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x195680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_195684:
    // 0x195684: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x195684u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_195688:
    // 0x195688: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x195688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_19568c:
    // 0x19568c: 0x40f809  jalr        $v0
label_195690:
    if (ctx->pc == 0x195690u) {
        ctx->pc = 0x195690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19568Cu;
        // 0x195690: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195694u;
        goto label_195694;
    }
    ctx->pc = 0x19568Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195694u);
        ctx->pc = 0x195690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19568Cu;
        // 0x195690: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19568Cu, 0x195694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195694u;
label_195694:
    // 0x195694: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x195694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195698:
    // 0x195698: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x195698u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_19569c:
    // 0x19569c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x19569cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1956a0:
    // 0x1956a0: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x1956a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1956a4:
    // 0x1956a4: 0xa0f809  jalr        $a1
label_1956a8:
    if (ctx->pc == 0x1956A8u) {
        ctx->pc = 0x1956A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956A4u;
        // 0x1956a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1956ACu;
        goto label_1956ac;
    }
    ctx->pc = 0x1956A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1956ACu);
        ctx->pc = 0x1956A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956A4u;
        // 0x1956a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1956A4u, 0x1956ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1956ACu;
label_1956ac:
    // 0x1956ac: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1956acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1956b0:
    // 0x1956b0: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1956b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1956b4:
    // 0x1956b4: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1956b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1956b8:
    // 0x1956b8: 0x40f809  jalr        $v0
label_1956bc:
    if (ctx->pc == 0x1956BCu) {
        ctx->pc = 0x1956BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956B8u;
        // 0x1956bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1956C0u;
        goto label_1956c0;
    }
    ctx->pc = 0x1956B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1956C0u);
        ctx->pc = 0x1956BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956B8u;
        // 0x1956bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1956B8u, 0x1956C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1956C0u;
label_1956c0:
    // 0x1956c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1956c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1956c4:
    // 0x1956c4: 0x3c014b18  lui         $at, 0x4B18
    ctx->pc = 0x1956c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19224 << 16));
label_1956c8:
    // 0x1956c8: 0x34219680  ori         $at, $at, 0x9680
    ctx->pc = 0x1956c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38528);
label_1956cc:
    // 0x1956cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1956ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1956d0:
    // 0x1956d0: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1956d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1956d4:
    // 0x1956d4: 0x8c65003c  lw          $a1, 0x3C($v1)
    ctx->pc = 0x1956d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1956d8:
    // 0x1956d8: 0xa0f809  jalr        $a1
label_1956dc:
    if (ctx->pc == 0x1956DCu) {
        ctx->pc = 0x1956DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956D8u;
        // 0x1956dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1956E0u;
        goto label_1956e0;
    }
    ctx->pc = 0x1956D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1956E0u);
        ctx->pc = 0x1956DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956D8u;
        // 0x1956dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1956D8u, 0x1956E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1956E0u;
label_1956e0:
    // 0x1956e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1956e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1956e4:
    // 0x1956e4: 0x26c417a0  addiu       $a0, $s6, 0x17A0
    ctx->pc = 0x1956e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 6048));
label_1956e8:
    // 0x1956e8: 0x244717d0  addiu       $a3, $v0, 0x17D0
    ctx->pc = 0x1956e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6096));
label_1956ec:
    // 0x1956ec: 0x26e517b0  addiu       $a1, $s7, 0x17B0
    ctx->pc = 0x1956ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 6064));
label_1956f0:
    // 0x1956f0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1956f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1956f4:
    // 0x1956f4: 0x27c617c0  addiu       $a2, $fp, 0x17C0
    ctx->pc = 0x1956f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 6080));
label_1956f8:
    // 0x1956f8: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1956f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1956fc:
    // 0x1956fc: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x1956fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_195700:
    // 0x195700: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x195700u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_195704:
    // 0x195704: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x195704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_195708:
    // 0x195708: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x195708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
label_19570c:
    // 0x19570c: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x19570cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_195710:
    // 0x195710: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x195710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_195714:
    // 0x195714: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x195714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_195718:
    // 0x195718: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x195718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_19571c:
    // 0x19571c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x19571cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_195720:
    // 0x195720: 0x40f809  jalr        $v0
label_195724:
    if (ctx->pc == 0x195724u) {
        ctx->pc = 0x195724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195720u;
        // 0x195724: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195728u;
        goto label_195728;
    }
    ctx->pc = 0x195720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195728u);
        ctx->pc = 0x195724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195720u;
        // 0x195724: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195720u, 0x195728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195728u;
label_195728:
    // 0x195728: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x195728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19572c:
    // 0x19572c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19572cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_195730:
    // 0x195730: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x195730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_195734:
    // 0x195734: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x195734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_195738:
    // 0x195738: 0xc0f809  jalr        $a2
label_19573c:
    if (ctx->pc == 0x19573Cu) {
        ctx->pc = 0x19573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195738u;
        // 0x19573c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195740u;
        goto label_195740;
    }
    ctx->pc = 0x195738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x195740u);
        ctx->pc = 0x19573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195738u;
        // 0x19573c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195738u, 0x195740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195740u;
label_195740:
    // 0x195740: 0x10000044  b           . + 4 + (0x44 << 2)
label_195744:
    if (ctx->pc == 0x195744u) {
        ctx->pc = 0x195748u;
        goto label_195748;
    }
    ctx->pc = 0x195740u;
    {
        const bool branch_taken_0x195740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195740) {
            ctx->pc = 0x195854u;
            goto label_195854;
        }
    }
    ctx->pc = 0x195748u;
label_195748:
    // 0x195748: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x195748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19574c:
    // 0x19574c: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x19574cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_195750:
    // 0x195750: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x195750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_195754:
    // 0x195754: 0x40f809  jalr        $v0
label_195758:
    if (ctx->pc == 0x195758u) {
        ctx->pc = 0x195758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195754u;
        // 0x195758: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19575Cu;
        goto label_19575c;
    }
    ctx->pc = 0x195754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19575Cu);
        ctx->pc = 0x195758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195754u;
        // 0x195758: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195754u, 0x19575Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19575Cu;
label_19575c:
    // 0x19575c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195760:
    // 0x195760: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x195760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_195764:
    // 0x195764: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x195764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_195768:
    // 0x195768: 0xa0f809  jalr        $a1
label_19576c:
    if (ctx->pc == 0x19576Cu) {
        ctx->pc = 0x19576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195768u;
        // 0x19576c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195770u;
        goto label_195770;
    }
    ctx->pc = 0x195768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x195770u);
        ctx->pc = 0x19576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195768u;
        // 0x19576c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195768u, 0x195770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195770u;
label_195770:
    // 0x195770: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_195774:
    if (ctx->pc == 0x195774u) {
        ctx->pc = 0x195774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195770u;
        // 0x195774: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195778u;
        goto label_195778;
    }
    ctx->pc = 0x195770u;
    {
        const bool branch_taken_0x195770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195770u;
        // 0x195774: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195770) {
            ctx->pc = 0x195850u;
            goto label_195850;
        }
    }
    ctx->pc = 0x195778u;
label_195778:
    // 0x195778: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x195778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_19577c:
    // 0x19577c: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x19577cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_195780:
    // 0x195780: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x195780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_195784:
    // 0x195784: 0x40f809  jalr        $v0
label_195788:
    if (ctx->pc == 0x195788u) {
        ctx->pc = 0x195788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195784u;
        // 0x195788: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19578Cu;
        goto label_19578c;
    }
    ctx->pc = 0x195784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19578Cu);
        ctx->pc = 0x195788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195784u;
        // 0x195788: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195784u, 0x19578Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19578Cu;
label_19578c:
    // 0x19578c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19578cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195790:
    // 0x195790: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x195790u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_195794:
    // 0x195794: 0xc7ae0010  lwc1        $f14, 0x10($sp)
    ctx->pc = 0x195794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_195798:
    // 0x195798: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x195798u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_19579c:
    // 0x19579c: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x19579cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_1957a0:
    // 0x1957a0: 0xc7af0014  lwc1        $f15, 0x14($sp)
    ctx->pc = 0x1957a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1957a4:
    // 0x1957a4: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x1957a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_1957a8:
    // 0x1957a8: 0x60f809  jalr        $v1
label_1957ac:
    if (ctx->pc == 0x1957ACu) {
        ctx->pc = 0x1957ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957A8u;
        // 0x1957ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1957B0u;
        goto label_1957b0;
    }
    ctx->pc = 0x1957A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1957B0u);
        ctx->pc = 0x1957ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957A8u;
        // 0x1957ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1957A8u, 0x1957B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1957B0u;
label_1957b0:
    // 0x1957b0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1957b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1957b4:
    // 0x1957b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1957b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1957b8:
    // 0x1957b8: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x1957b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_1957bc:
    // 0x1957bc: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x1957bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_1957c0:
    // 0x1957c0: 0x40f809  jalr        $v0
label_1957c4:
    if (ctx->pc == 0x1957C4u) {
        ctx->pc = 0x1957C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957C0u;
        // 0x1957c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1957C8u;
        goto label_1957c8;
    }
    ctx->pc = 0x1957C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1957C8u);
        ctx->pc = 0x1957C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957C0u;
        // 0x1957c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1957C0u, 0x1957C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1957C8u;
label_1957c8:
    // 0x1957c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1957c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1957cc:
    // 0x1957cc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1957ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1957d0:
    // 0x1957d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1957d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1957d4:
    // 0x1957d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1957d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1957d8:
    // 0x1957d8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1957d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1957dc:
    // 0x1957dc: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x1957dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1957e0:
    // 0x1957e0: 0xa0f809  jalr        $a1
label_1957e4:
    if (ctx->pc == 0x1957E4u) {
        ctx->pc = 0x1957E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957E0u;
        // 0x1957e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1957E8u;
        goto label_1957e8;
    }
    ctx->pc = 0x1957E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1957E8u);
        ctx->pc = 0x1957E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957E0u;
        // 0x1957e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1957E0u, 0x1957E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1957E8u;
label_1957e8:
    // 0x1957e8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1957e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1957ec:
    // 0x1957ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1957ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1957f0:
    // 0x1957f0: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x1957f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_1957f4:
    // 0x1957f4: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x1957f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_1957f8:
    // 0x1957f8: 0x40f809  jalr        $v0
label_1957fc:
    if (ctx->pc == 0x1957FCu) {
        ctx->pc = 0x1957FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957F8u;
        // 0x1957fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195800u;
        goto label_195800;
    }
    ctx->pc = 0x1957F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195800u);
        ctx->pc = 0x1957FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957F8u;
        // 0x1957fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1957F8u, 0x195800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195800u;
label_195800:
    // 0x195800: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x195800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195804:
    // 0x195804: 0x3c014b18  lui         $at, 0x4B18
    ctx->pc = 0x195804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19224 << 16));
label_195808:
    // 0x195808: 0x34219680  ori         $at, $at, 0x9680
    ctx->pc = 0x195808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38528);
label_19580c:
    // 0x19580c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19580cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_195810:
    // 0x195810: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x195810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_195814:
    // 0x195814: 0x8c65003c  lw          $a1, 0x3C($v1)
    ctx->pc = 0x195814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_195818:
    // 0x195818: 0xa0f809  jalr        $a1
label_19581c:
    if (ctx->pc == 0x19581Cu) {
        ctx->pc = 0x19581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195818u;
        // 0x19581c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195820u;
        goto label_195820;
    }
    ctx->pc = 0x195818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x195820u);
        ctx->pc = 0x19581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195818u;
        // 0x19581c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195818u, 0x195820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195820u;
label_195820:
    // 0x195820: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x195820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_195824:
    // 0x195824: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x195824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195828:
    // 0x195828: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x195828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_19582c:
    // 0x19582c: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x19582cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_195830:
    // 0x195830: 0x40f809  jalr        $v0
label_195834:
    if (ctx->pc == 0x195834u) {
        ctx->pc = 0x195834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195830u;
        // 0x195834: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195838u;
        goto label_195838;
    }
    ctx->pc = 0x195830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195838u);
        ctx->pc = 0x195834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195830u;
        // 0x195834: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195830u, 0x195838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195838u;
label_195838:
    // 0x195838: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x195838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19583c:
    // 0x19583c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19583cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_195840:
    // 0x195840: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x195840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_195844:
    // 0x195844: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x195844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_195848:
    // 0x195848: 0xc0f809  jalr        $a2
label_19584c:
    if (ctx->pc == 0x19584Cu) {
        ctx->pc = 0x19584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195848u;
        // 0x19584c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195850u;
        goto label_195850;
    }
    ctx->pc = 0x195848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x195850u);
        ctx->pc = 0x19584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195848u;
        // 0x19584c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195848u, 0x195850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195850u;
label_195850:
    // 0x195850: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x195850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_195854:
    // 0x195854: 0xc047ab8  jal         func_11EAE0
label_195858:
    if (ctx->pc == 0x195858u) {
        ctx->pc = 0x19585Cu;
        goto label_19585c;
    }
    ctx->pc = 0x195854u;
    SET_GPR_U32(ctx, 31, 0x19585Cu);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x195854u, 0x19585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19585Cu;
label_19585c:
    // 0x19585c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x19585cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_195860:
    // 0x195860: 0x5440ffb9  bnel        $v0, $zero, . + 4 + (-0x47 << 2)
label_195864:
    if (ctx->pc == 0x195864u) {
        ctx->pc = 0x195864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195860u;
        // 0x195864: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195868u;
        goto label_195868;
    }
    ctx->pc = 0x195860u;
    {
        const bool branch_taken_0x195860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195860) {
            ctx->pc = 0x195864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195860u;
            // 0x195864: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195748;
        }
    }
    ctx->pc = 0x195868u;
label_195868:
    // 0x195868: 0xc051232  jal         func_1448C8
label_19586c:
    if (ctx->pc == 0x19586Cu) {
        ctx->pc = 0x195870u;
        goto label_195870;
    }
    ctx->pc = 0x195868u;
    SET_GPR_U32(ctx, 31, 0x195870u);
    ctx->pc = 0x1448C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1448C8u, 0x195868u, 0x195870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195870u;
label_195870:
    // 0x195870: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x195870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_195874:
    // 0x195874: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x195874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_195878:
    // 0x195878: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x195878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_19587c:
    // 0x19587c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x19587cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_195880:
    // 0x195880: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x195880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_195884:
    // 0x195884: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x195884u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_195888:
    // 0x195888: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x195888u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_19588c:
    // 0x19588c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x19588cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_195890:
    // 0x195890: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x195890u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_195894:
    // 0x195894: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x195894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_195898:
    // 0x195898: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x195898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_19589c:
    // 0x19589c: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x19589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1958a0:
    // 0x1958a0: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x1958a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1958a4:
    // 0x1958a4: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1958a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1958a8:
    // 0x1958a8: 0x3e00008  jr          $ra
label_1958ac:
    if (ctx->pc == 0x1958ACu) {
        ctx->pc = 0x1958ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958A8u;
        // 0x1958ac: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1958B0u;
        goto label_fallthrough_0x1958a8;
    }
    ctx->pc = 0x1958A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1958ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958A8u;
        // 0x1958ac: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1958A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1958a8:
    ctx->pc = 0x1958B0u;
}
