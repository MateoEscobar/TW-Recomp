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

// Function: sub_00357588
// Address: 0x357588 - 0x3578d8
void sub_00357588_0x357588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357588_0x357588");
#endif

    switch (ctx->pc) {
        case 0x357588u: goto label_357588;
        case 0x35758cu: goto label_35758c;
        case 0x357590u: goto label_357590;
        case 0x357594u: goto label_357594;
        case 0x357598u: goto label_357598;
        case 0x35759cu: goto label_35759c;
        case 0x3575a0u: goto label_3575a0;
        case 0x3575a4u: goto label_3575a4;
        case 0x3575a8u: goto label_3575a8;
        case 0x3575acu: goto label_3575ac;
        case 0x3575b0u: goto label_3575b0;
        case 0x3575b4u: goto label_3575b4;
        case 0x3575b8u: goto label_3575b8;
        case 0x3575bcu: goto label_3575bc;
        case 0x3575c0u: goto label_3575c0;
        case 0x3575c4u: goto label_3575c4;
        case 0x3575c8u: goto label_3575c8;
        case 0x3575ccu: goto label_3575cc;
        case 0x3575d0u: goto label_3575d0;
        case 0x3575d4u: goto label_3575d4;
        case 0x3575d8u: goto label_3575d8;
        case 0x3575dcu: goto label_3575dc;
        case 0x3575e0u: goto label_3575e0;
        case 0x3575e4u: goto label_3575e4;
        case 0x3575e8u: goto label_3575e8;
        case 0x3575ecu: goto label_3575ec;
        case 0x3575f0u: goto label_3575f0;
        case 0x3575f4u: goto label_3575f4;
        case 0x3575f8u: goto label_3575f8;
        case 0x3575fcu: goto label_3575fc;
        case 0x357600u: goto label_357600;
        case 0x357604u: goto label_357604;
        case 0x357608u: goto label_357608;
        case 0x35760cu: goto label_35760c;
        case 0x357610u: goto label_357610;
        case 0x357614u: goto label_357614;
        case 0x357618u: goto label_357618;
        case 0x35761cu: goto label_35761c;
        case 0x357620u: goto label_357620;
        case 0x357624u: goto label_357624;
        case 0x357628u: goto label_357628;
        case 0x35762cu: goto label_35762c;
        case 0x357630u: goto label_357630;
        case 0x357634u: goto label_357634;
        case 0x357638u: goto label_357638;
        case 0x35763cu: goto label_35763c;
        case 0x357640u: goto label_357640;
        case 0x357644u: goto label_357644;
        case 0x357648u: goto label_357648;
        case 0x35764cu: goto label_35764c;
        case 0x357650u: goto label_357650;
        case 0x357654u: goto label_357654;
        case 0x357658u: goto label_357658;
        case 0x35765cu: goto label_35765c;
        case 0x357660u: goto label_357660;
        case 0x357664u: goto label_357664;
        case 0x357668u: goto label_357668;
        case 0x35766cu: goto label_35766c;
        case 0x357670u: goto label_357670;
        case 0x357674u: goto label_357674;
        case 0x357678u: goto label_357678;
        case 0x35767cu: goto label_35767c;
        case 0x357680u: goto label_357680;
        case 0x357684u: goto label_357684;
        case 0x357688u: goto label_357688;
        case 0x35768cu: goto label_35768c;
        case 0x357690u: goto label_357690;
        case 0x357694u: goto label_357694;
        case 0x357698u: goto label_357698;
        case 0x35769cu: goto label_35769c;
        case 0x3576a0u: goto label_3576a0;
        case 0x3576a4u: goto label_3576a4;
        case 0x3576a8u: goto label_3576a8;
        case 0x3576acu: goto label_3576ac;
        case 0x3576b0u: goto label_3576b0;
        case 0x3576b4u: goto label_3576b4;
        case 0x3576b8u: goto label_3576b8;
        case 0x3576bcu: goto label_3576bc;
        case 0x3576c0u: goto label_3576c0;
        case 0x3576c4u: goto label_3576c4;
        case 0x3576c8u: goto label_3576c8;
        case 0x3576ccu: goto label_3576cc;
        case 0x3576d0u: goto label_3576d0;
        case 0x3576d4u: goto label_3576d4;
        case 0x3576d8u: goto label_3576d8;
        case 0x3576dcu: goto label_3576dc;
        case 0x3576e0u: goto label_3576e0;
        case 0x3576e4u: goto label_3576e4;
        case 0x3576e8u: goto label_3576e8;
        case 0x3576ecu: goto label_3576ec;
        case 0x3576f0u: goto label_3576f0;
        case 0x3576f4u: goto label_3576f4;
        case 0x3576f8u: goto label_3576f8;
        case 0x3576fcu: goto label_3576fc;
        case 0x357700u: goto label_357700;
        case 0x357704u: goto label_357704;
        case 0x357708u: goto label_357708;
        case 0x35770cu: goto label_35770c;
        case 0x357710u: goto label_357710;
        case 0x357714u: goto label_357714;
        case 0x357718u: goto label_357718;
        case 0x35771cu: goto label_35771c;
        case 0x357720u: goto label_357720;
        case 0x357724u: goto label_357724;
        case 0x357728u: goto label_357728;
        case 0x35772cu: goto label_35772c;
        case 0x357730u: goto label_357730;
        case 0x357734u: goto label_357734;
        case 0x357738u: goto label_357738;
        case 0x35773cu: goto label_35773c;
        case 0x357740u: goto label_357740;
        case 0x357744u: goto label_357744;
        case 0x357748u: goto label_357748;
        case 0x35774cu: goto label_35774c;
        case 0x357750u: goto label_357750;
        case 0x357754u: goto label_357754;
        case 0x357758u: goto label_357758;
        case 0x35775cu: goto label_35775c;
        case 0x357760u: goto label_357760;
        case 0x357764u: goto label_357764;
        case 0x357768u: goto label_357768;
        case 0x35776cu: goto label_35776c;
        case 0x357770u: goto label_357770;
        case 0x357774u: goto label_357774;
        case 0x357778u: goto label_357778;
        case 0x35777cu: goto label_35777c;
        case 0x357780u: goto label_357780;
        case 0x357784u: goto label_357784;
        case 0x357788u: goto label_357788;
        case 0x35778cu: goto label_35778c;
        case 0x357790u: goto label_357790;
        case 0x357794u: goto label_357794;
        case 0x357798u: goto label_357798;
        case 0x35779cu: goto label_35779c;
        case 0x3577a0u: goto label_3577a0;
        case 0x3577a4u: goto label_3577a4;
        case 0x3577a8u: goto label_3577a8;
        case 0x3577acu: goto label_3577ac;
        case 0x3577b0u: goto label_3577b0;
        case 0x3577b4u: goto label_3577b4;
        case 0x3577b8u: goto label_3577b8;
        case 0x3577bcu: goto label_3577bc;
        case 0x3577c0u: goto label_3577c0;
        case 0x3577c4u: goto label_3577c4;
        case 0x3577c8u: goto label_3577c8;
        case 0x3577ccu: goto label_3577cc;
        case 0x3577d0u: goto label_3577d0;
        case 0x3577d4u: goto label_3577d4;
        case 0x3577d8u: goto label_3577d8;
        case 0x3577dcu: goto label_3577dc;
        case 0x3577e0u: goto label_3577e0;
        case 0x3577e4u: goto label_3577e4;
        case 0x3577e8u: goto label_3577e8;
        case 0x3577ecu: goto label_3577ec;
        case 0x3577f0u: goto label_3577f0;
        case 0x3577f4u: goto label_3577f4;
        case 0x3577f8u: goto label_3577f8;
        case 0x3577fcu: goto label_3577fc;
        case 0x357800u: goto label_357800;
        case 0x357804u: goto label_357804;
        case 0x357808u: goto label_357808;
        case 0x35780cu: goto label_35780c;
        case 0x357810u: goto label_357810;
        case 0x357814u: goto label_357814;
        case 0x357818u: goto label_357818;
        case 0x35781cu: goto label_35781c;
        case 0x357820u: goto label_357820;
        case 0x357824u: goto label_357824;
        case 0x357828u: goto label_357828;
        case 0x35782cu: goto label_35782c;
        case 0x357830u: goto label_357830;
        case 0x357834u: goto label_357834;
        case 0x357838u: goto label_357838;
        case 0x35783cu: goto label_35783c;
        case 0x357840u: goto label_357840;
        case 0x357844u: goto label_357844;
        case 0x357848u: goto label_357848;
        case 0x35784cu: goto label_35784c;
        case 0x357850u: goto label_357850;
        case 0x357854u: goto label_357854;
        case 0x357858u: goto label_357858;
        case 0x35785cu: goto label_35785c;
        case 0x357860u: goto label_357860;
        case 0x357864u: goto label_357864;
        case 0x357868u: goto label_357868;
        case 0x35786cu: goto label_35786c;
        case 0x357870u: goto label_357870;
        case 0x357874u: goto label_357874;
        case 0x357878u: goto label_357878;
        case 0x35787cu: goto label_35787c;
        case 0x357880u: goto label_357880;
        case 0x357884u: goto label_357884;
        case 0x357888u: goto label_357888;
        case 0x35788cu: goto label_35788c;
        case 0x357890u: goto label_357890;
        case 0x357894u: goto label_357894;
        case 0x357898u: goto label_357898;
        case 0x35789cu: goto label_35789c;
        case 0x3578a0u: goto label_3578a0;
        case 0x3578a4u: goto label_3578a4;
        case 0x3578a8u: goto label_3578a8;
        case 0x3578acu: goto label_3578ac;
        case 0x3578b0u: goto label_3578b0;
        case 0x3578b4u: goto label_3578b4;
        case 0x3578b8u: goto label_3578b8;
        case 0x3578bcu: goto label_3578bc;
        case 0x3578c0u: goto label_3578c0;
        case 0x3578c4u: goto label_3578c4;
        case 0x3578c8u: goto label_3578c8;
        case 0x3578ccu: goto label_3578cc;
        case 0x3578d0u: goto label_3578d0;
        case 0x3578d4u: goto label_3578d4;
        default: break;
    }

    ctx->pc = 0x357588u;

label_357588:
    // 0x357588: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x357588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_35758c:
    // 0x35758c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x35758cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_357590:
    // 0x357590: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x357590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_357594:
    // 0x357594: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x357594u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_357598:
    // 0x357598: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x357598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_35759c:
    // 0x35759c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x35759cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3575a0:
    // 0x3575a0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3575a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3575a4:
    // 0x3575a4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3575a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3575a8:
    // 0x3575a8: 0x16a00033  bnez        $s5, . + 4 + (0x33 << 2)
label_3575ac:
    if (ctx->pc == 0x3575ACu) {
        ctx->pc = 0x3575ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3575A8u;
        // 0x3575ac: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3575B0u;
        goto label_3575b0;
    }
    ctx->pc = 0x3575A8u;
    {
        const bool branch_taken_0x3575a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x3575ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3575A8u;
        // 0x3575ac: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3575a8) {
            ctx->pc = 0x357678u;
            goto label_357678;
        }
    }
    ctx->pc = 0x3575B0u;
label_3575b0:
    // 0x3575b0: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x3575b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3575b4:
    // 0x3575b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3575b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3575b8:
    // 0x3575b8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3575b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3575bc:
    // 0x3575bc: 0x108300bc  beq         $a0, $v1, . + 4 + (0xBC << 2)
label_3575c0:
    if (ctx->pc == 0x3575C0u) {
        ctx->pc = 0x3575C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3575BCu;
        // 0x3575c0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3575C4u;
        goto label_3575c4;
    }
    ctx->pc = 0x3575BCu;
    {
        const bool branch_taken_0x3575bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3575C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3575BCu;
        // 0x3575c0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3575bc) {
            ctx->pc = 0x3578B0u;
            goto label_3578b0;
        }
    }
    ctx->pc = 0x3575C4u;
label_3575c4:
    // 0x3575c4: 0x3c11aaaa  lui         $s1, 0xAAAA
    ctx->pc = 0x3575c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)43690 << 16));
label_3575c8:
    // 0x3575c8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3575c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3575cc:
    // 0x3575cc: 0x3631aaab  ori         $s1, $s1, 0xAAAB
    ctx->pc = 0x3575ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)43691);
label_3575d0:
    // 0x3575d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3575d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3575d4:
    // 0x3575d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3575d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3575d8:
    // 0x3575d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3575d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3575dc:
    // 0x3575dc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3575dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3575e0:
    // 0x3575e0: 0x2466ffe8  addiu       $a2, $v1, -0x18
    ctx->pc = 0x3575e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
label_3575e4:
    // 0x3575e4: 0x6864ffef  ldl         $a0, -0x11($v1)
    ctx->pc = 0x3575e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3575e8:
    // 0x3575e8: 0x6c64ffe8  ldr         $a0, -0x18($v1)
    ctx->pc = 0x3575e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3575ec:
    // 0x3575ec: 0x6868fff7  ldl         $t0, -0x9($v1)
    ctx->pc = 0x3575ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_3575f0:
    // 0x3575f0: 0x6c68fff0  ldr         $t0, -0x10($v1)
    ctx->pc = 0x3575f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_3575f4:
    // 0x3575f4: 0x6869ffff  ldl         $t1, -0x1($v1)
    ctx->pc = 0x3575f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_3575f8:
    // 0x3575f8: 0x6c69fff8  ldr         $t1, -0x8($v1)
    ctx->pc = 0x3575f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3575fc:
    // 0x3575fc: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x3575fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_357600:
    // 0x357600: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x357600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_357604:
    // 0x357604: 0xb3a8000f  sdl         $t0, 0xF($sp)
    ctx->pc = 0x357604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_357608:
    // 0x357608: 0xb7a80008  sdr         $t0, 0x8($sp)
    ctx->pc = 0x357608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_35760c:
    // 0x35760c: 0xb3a90017  sdl         $t1, 0x17($sp)
    ctx->pc = 0x35760cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_357610:
    // 0x357610: 0xb7a90010  sdr         $t1, 0x10($sp)
    ctx->pc = 0x357610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_357614:
    // 0x357614: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x357614u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_357618:
    // 0x357618: 0x684b0007  ldl         $t3, 0x7($v0)
    ctx->pc = 0x357618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_35761c:
    // 0x35761c: 0x6c4b0000  ldr         $t3, 0x0($v0)
    ctx->pc = 0x35761cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_357620:
    // 0x357620: 0x684c000f  ldl         $t4, 0xF($v0)
    ctx->pc = 0x357620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_357624:
    // 0x357624: 0x6c4c0008  ldr         $t4, 0x8($v0)
    ctx->pc = 0x357624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_357628:
    // 0x357628: 0x68490017  ldl         $t1, 0x17($v0)
    ctx->pc = 0x357628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_35762c:
    // 0x35762c: 0x6c490010  ldr         $t1, 0x10($v0)
    ctx->pc = 0x35762cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_357630:
    // 0x357630: 0xb06bffef  sdl         $t3, -0x11($v1)
    ctx->pc = 0x357630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_357634:
    // 0x357634: 0xb46bffe8  sdr         $t3, -0x18($v1)
    ctx->pc = 0x357634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_357638:
    // 0x357638: 0xb06cfff7  sdl         $t4, -0x9($v1)
    ctx->pc = 0x357638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_35763c:
    // 0x35763c: 0xb46cfff0  sdr         $t4, -0x10($v1)
    ctx->pc = 0x35763cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_357640:
    // 0x357640: 0xb069ffff  sdl         $t1, -0x1($v1)
    ctx->pc = 0x357640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_357644:
    // 0x357644: 0xb469fff8  sdr         $t1, -0x8($v1)
    ctx->pc = 0x357644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_357648:
    // 0x357648: 0xd13018  mult        $a2, $a2, $s1
    ctx->pc = 0x357648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_35764c:
    // 0x35764c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35764cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357650:
    // 0x357650: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x357650u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357654:
    // 0x357654: 0xc13c584  jal         func_4F1610
label_357658:
    if (ctx->pc == 0x357658u) {
        ctx->pc = 0x357658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357654u;
        // 0x357658: 0x630c3  sra         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35765Cu;
        goto label_35765c;
    }
    ctx->pc = 0x357654u;
    SET_GPR_U32(ctx, 31, 0x35765Cu);
    ctx->pc = 0x357658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357654u;
    // 0x357658: 0x630c3  sra         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1610u, 0x357654u, 0x35765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35765Cu;
label_35765c:
    // 0x35765c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x35765cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_357660:
    // 0x357660: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x357660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_357664:
    // 0x357664: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x357664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_357668:
    // 0x357668: 0x1462ffd9  bne         $v1, $v0, . + 4 + (-0x27 << 2)
label_35766c:
    if (ctx->pc == 0x35766Cu) {
        ctx->pc = 0x35766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357668u;
        // 0x35766c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357670u;
        goto label_357670;
    }
    ctx->pc = 0x357668u;
    {
        const bool branch_taken_0x357668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357668u;
        // 0x35766c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357668) {
            ctx->pc = 0x3575D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3575d0;
        }
    }
    ctx->pc = 0x357670u;
label_357670:
    // 0x357670: 0x10000090  b           . + 4 + (0x90 << 2)
label_357674:
    if (ctx->pc == 0x357674u) {
        ctx->pc = 0x357674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357670u;
        // 0x357674: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357678u;
        goto label_357678;
    }
    ctx->pc = 0x357670u;
    {
        const bool branch_taken_0x357670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357670u;
        // 0x357674: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357670) {
            ctx->pc = 0x3578B4u;
            goto label_3578b4;
        }
    }
    ctx->pc = 0x357678u;
label_357678:
    // 0x357678: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x357678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_35767c:
    // 0x35767c: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x35767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_357680:
    // 0x357680: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x357680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357684:
    // 0x357684: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x357684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_357688:
    // 0x357688: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x357688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_35768c:
    // 0x35768c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x35768cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_357690:
    // 0x357690: 0x10830062  beq         $a0, $v1, . + 4 + (0x62 << 2)
label_357694:
    if (ctx->pc == 0x357694u) {
        ctx->pc = 0x357694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357690u;
        // 0x357694: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357698u;
        goto label_357698;
    }
    ctx->pc = 0x357690u;
    {
        const bool branch_taken_0x357690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x357694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357690u;
        // 0x357694: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357690) {
            ctx->pc = 0x35781Cu;
            goto label_35781c;
        }
    }
    ctx->pc = 0x357698u;
label_357698:
    // 0x357698: 0x3c14aaaa  lui         $s4, 0xAAAA
    ctx->pc = 0x357698u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)43690 << 16));
label_35769c:
    // 0x35769c: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x35769cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3576a0:
    // 0x3576a0: 0x3694aaab  ori         $s4, $s4, 0xAAAB
    ctx->pc = 0x3576a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)43691);
label_3576a4:
    // 0x3576a4: 0x0  nop
    ctx->pc = 0x3576a4u;
    // NOP
label_3576a8:
    // 0x3576a8: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x3576a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3576ac:
    // 0x3576ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3576acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3576b0:
    // 0x3576b0: 0xc10c313  jal         func_430C4C
label_3576b4:
    if (ctx->pc == 0x3576B4u) {
        ctx->pc = 0x3576B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3576B0u;
        // 0x3576b4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3576B8u;
        goto label_3576b8;
    }
    ctx->pc = 0x3576B0u;
    SET_GPR_U32(ctx, 31, 0x3576B8u);
    ctx->pc = 0x3576B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3576B0u;
    // 0x3576b4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3576B0u, 0x3576B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3576B8u;
label_3576b8:
    // 0x3576b8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_3576bc:
    if (ctx->pc == 0x3576BCu) {
        ctx->pc = 0x3576BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3576B8u;
        // 0x3576bc: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3576C0u;
        goto label_3576c0;
    }
    ctx->pc = 0x3576B8u;
    {
        const bool branch_taken_0x3576b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3576BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3576B8u;
        // 0x3576bc: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3576b8) {
            ctx->pc = 0x35777Cu;
            goto label_35777c;
        }
    }
    ctx->pc = 0x3576C0u;
label_3576c0:
    // 0x3576c0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3576c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3576c4:
    // 0x3576c4: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
label_3576c8:
    if (ctx->pc == 0x3576C8u) {
        ctx->pc = 0x3576C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3576C4u;
        // 0x3576c8: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3576CCu;
        goto label_3576cc;
    }
    ctx->pc = 0x3576C4u;
    {
        const bool branch_taken_0x3576c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3576C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3576C4u;
        // 0x3576c8: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3576c4) {
            ctx->pc = 0x357714u;
            goto label_357714;
        }
    }
    ctx->pc = 0x3576CCu;
label_3576cc:
    // 0x3576cc: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_3576d0:
    if (ctx->pc == 0x3576D0u) {
        ctx->pc = 0x3576D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3576CCu;
        // 0x3576d0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3576D4u;
        goto label_3576d4;
    }
    ctx->pc = 0x3576CCu;
    {
        const bool branch_taken_0x3576cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3576D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3576CCu;
        // 0x3576d0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3576cc) {
            ctx->pc = 0x357708u;
            goto label_357708;
        }
    }
    ctx->pc = 0x3576D4u;
label_3576d4:
    // 0x3576d4: 0x6a0b0007  ldl         $t3, 0x7($s0)
    ctx->pc = 0x3576d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3576d8:
    // 0x3576d8: 0x6e0b0000  ldr         $t3, 0x0($s0)
    ctx->pc = 0x3576d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3576dc:
    // 0x3576dc: 0x6a0c000f  ldl         $t4, 0xF($s0)
    ctx->pc = 0x3576dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_3576e0:
    // 0x3576e0: 0x6e0c0008  ldr         $t4, 0x8($s0)
    ctx->pc = 0x3576e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3576e4:
    // 0x3576e4: 0x6a020017  ldl         $v0, 0x17($s0)
    ctx->pc = 0x3576e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3576e8:
    // 0x3576e8: 0x6e020010  ldr         $v0, 0x10($s0)
    ctx->pc = 0x3576e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3576ec:
    // 0x3576ec: 0xb0ab0007  sdl         $t3, 0x7($a1)
    ctx->pc = 0x3576ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3576f0:
    // 0x3576f0: 0xb4ab0000  sdr         $t3, 0x0($a1)
    ctx->pc = 0x3576f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3576f4:
    // 0x3576f4: 0xb0ac000f  sdl         $t4, 0xF($a1)
    ctx->pc = 0x3576f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3576f8:
    // 0x3576f8: 0xb4ac0008  sdr         $t4, 0x8($a1)
    ctx->pc = 0x3576f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3576fc:
    // 0x3576fc: 0xb0a20017  sdl         $v0, 0x17($a1)
    ctx->pc = 0x3576fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_357700:
    // 0x357700: 0xb4a20010  sdr         $v0, 0x10($a1)
    ctx->pc = 0x357700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_357704:
    // 0x357704: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x357704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_357708:
    // 0x357708: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x357708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_35770c:
    // 0x35770c: 0x10000004  b           . + 4 + (0x4 << 2)
label_357710:
    if (ctx->pc == 0x357710u) {
        ctx->pc = 0x357710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35770Cu;
        // 0x357710: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357714u;
        goto label_357714;
    }
    ctx->pc = 0x35770Cu;
    {
        const bool branch_taken_0x35770c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35770Cu;
        // 0x357710: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35770c) {
            ctx->pc = 0x357720u;
            goto label_357720;
        }
    }
    ctx->pc = 0x357714u;
label_357714:
    // 0x357714: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x357714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357718:
    // 0x357718: 0xc13c5ec  jal         func_4F17B0
label_35771c:
    if (ctx->pc == 0x35771Cu) {
        ctx->pc = 0x35771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357718u;
        // 0x35771c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357720u;
        goto label_357720;
    }
    ctx->pc = 0x357718u;
    SET_GPR_U32(ctx, 31, 0x357720u);
    ctx->pc = 0x35771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357718u;
    // 0x35771c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F17B0u, 0x357718u, 0x357720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357720u;
label_357720:
    // 0x357720: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x357720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_357724:
    // 0x357724: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357728:
    // 0x357728: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x357728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_35772c:
    // 0x35772c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x35772cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_357730:
    // 0x357730: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x357730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_357734:
    // 0x357734: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x357734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357738:
    // 0x357738: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x357738u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_35773c:
    // 0x35773c: 0x6849ffef  ldl         $t1, -0x11($v0)
    ctx->pc = 0x35773cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_357740:
    // 0x357740: 0x6c49ffe8  ldr         $t1, -0x18($v0)
    ctx->pc = 0x357740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_357744:
    // 0x357744: 0x684afff7  ldl         $t2, -0x9($v0)
    ctx->pc = 0x357744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_357748:
    // 0x357748: 0x6c4afff0  ldr         $t2, -0x10($v0)
    ctx->pc = 0x357748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_35774c:
    // 0x35774c: 0x684bffff  ldl         $t3, -0x1($v0)
    ctx->pc = 0x35774cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_357750:
    // 0x357750: 0x6c4bfff8  ldr         $t3, -0x8($v0)
    ctx->pc = 0x357750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_357754:
    // 0x357754: 0xb3a90037  sdl         $t1, 0x37($sp)
    ctx->pc = 0x357754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_357758:
    // 0x357758: 0xb7a90030  sdr         $t1, 0x30($sp)
    ctx->pc = 0x357758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_35775c:
    // 0x35775c: 0xb3aa003f  sdl         $t2, 0x3F($sp)
    ctx->pc = 0x35775cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_357760:
    // 0x357760: 0xb7aa0038  sdr         $t2, 0x38($sp)
    ctx->pc = 0x357760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_357764:
    // 0x357764: 0xb3ab0047  sdl         $t3, 0x47($sp)
    ctx->pc = 0x357764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_357768:
    // 0x357768: 0xb7ab0040  sdr         $t3, 0x40($sp)
    ctx->pc = 0x357768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_35776c:
    // 0x35776c: 0xb42818  mult        $a1, $a1, $s4
    ctx->pc = 0x35776cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_357770:
    // 0x357770: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x357770u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_357774:
    // 0x357774: 0xc13c534  jal         func_4F14D0
label_357778:
    if (ctx->pc == 0x357778u) {
        ctx->pc = 0x357778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357774u;
        // 0x357778: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35777Cu;
        goto label_35777c;
    }
    ctx->pc = 0x357774u;
    SET_GPR_U32(ctx, 31, 0x35777Cu);
    ctx->pc = 0x357778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357774u;
    // 0x357778: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F14D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F14D0u, 0x357774u, 0x35777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35777Cu;
label_35777c:
    // 0x35777c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x35777cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_357780:
    // 0x357780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x357780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357784:
    // 0x357784: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x357784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_357788:
    // 0x357788: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x357788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35778c:
    // 0x35778c: 0x2466ffe8  addiu       $a2, $v1, -0x18
    ctx->pc = 0x35778cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
label_357790:
    // 0x357790: 0x6864ffef  ldl         $a0, -0x11($v1)
    ctx->pc = 0x357790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_357794:
    // 0x357794: 0x6c64ffe8  ldr         $a0, -0x18($v1)
    ctx->pc = 0x357794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_357798:
    // 0x357798: 0x6868fff7  ldl         $t0, -0x9($v1)
    ctx->pc = 0x357798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_35779c:
    // 0x35779c: 0x6c68fff0  ldr         $t0, -0x10($v1)
    ctx->pc = 0x35779cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_3577a0:
    // 0x3577a0: 0x6869ffff  ldl         $t1, -0x1($v1)
    ctx->pc = 0x3577a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_3577a4:
    // 0x3577a4: 0x6c69fff8  ldr         $t1, -0x8($v1)
    ctx->pc = 0x3577a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3577a8:
    // 0x3577a8: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x3577a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3577ac:
    // 0x3577ac: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x3577acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3577b0:
    // 0x3577b0: 0xb3a8002f  sdl         $t0, 0x2F($sp)
    ctx->pc = 0x3577b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3577b4:
    // 0x3577b4: 0xb7a80028  sdr         $t0, 0x28($sp)
    ctx->pc = 0x3577b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3577b8:
    // 0x3577b8: 0xb3a90037  sdl         $t1, 0x37($sp)
    ctx->pc = 0x3577b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3577bc:
    // 0x3577bc: 0xb7a90030  sdr         $t1, 0x30($sp)
    ctx->pc = 0x3577bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3577c0:
    // 0x3577c0: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x3577c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3577c4:
    // 0x3577c4: 0x684b0007  ldl         $t3, 0x7($v0)
    ctx->pc = 0x3577c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3577c8:
    // 0x3577c8: 0x6c4b0000  ldr         $t3, 0x0($v0)
    ctx->pc = 0x3577c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3577cc:
    // 0x3577cc: 0x684c000f  ldl         $t4, 0xF($v0)
    ctx->pc = 0x3577ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_3577d0:
    // 0x3577d0: 0x6c4c0008  ldr         $t4, 0x8($v0)
    ctx->pc = 0x3577d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3577d4:
    // 0x3577d4: 0x68490017  ldl         $t1, 0x17($v0)
    ctx->pc = 0x3577d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_3577d8:
    // 0x3577d8: 0x6c490010  ldr         $t1, 0x10($v0)
    ctx->pc = 0x3577d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3577dc:
    // 0x3577dc: 0xb06bffef  sdl         $t3, -0x11($v1)
    ctx->pc = 0x3577dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3577e0:
    // 0x3577e0: 0xb46bffe8  sdr         $t3, -0x18($v1)
    ctx->pc = 0x3577e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3577e4:
    // 0x3577e4: 0xb06cfff7  sdl         $t4, -0x9($v1)
    ctx->pc = 0x3577e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3577e8:
    // 0x3577e8: 0xb46cfff0  sdr         $t4, -0x10($v1)
    ctx->pc = 0x3577e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3577ec:
    // 0x3577ec: 0xb069ffff  sdl         $t1, -0x1($v1)
    ctx->pc = 0x3577ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3577f0:
    // 0x3577f0: 0xb469fff8  sdr         $t1, -0x8($v1)
    ctx->pc = 0x3577f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3577f4:
    // 0x3577f4: 0xd43018  mult        $a2, $a2, $s4
    ctx->pc = 0x3577f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3577f8:
    // 0x3577f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3577f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3577fc:
    // 0x3577fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3577fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357800:
    // 0x357800: 0xc13c584  jal         func_4F1610
label_357804:
    if (ctx->pc == 0x357804u) {
        ctx->pc = 0x357804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357800u;
        // 0x357804: 0x630c3  sra         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357808u;
        goto label_357808;
    }
    ctx->pc = 0x357800u;
    SET_GPR_U32(ctx, 31, 0x357808u);
    ctx->pc = 0x357804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357800u;
    // 0x357804: 0x630c3  sra         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1610u, 0x357800u, 0x357808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357808u;
label_357808:
    // 0x357808: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x357808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_35780c:
    // 0x35780c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x35780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_357810:
    // 0x357810: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x357810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_357814:
    // 0x357814: 0x1462ffa4  bne         $v1, $v0, . + 4 + (-0x5C << 2)
label_357818:
    if (ctx->pc == 0x357818u) {
        ctx->pc = 0x357818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357814u;
        // 0x357818: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35781Cu;
        goto label_35781c;
    }
    ctx->pc = 0x357814u;
    {
        const bool branch_taken_0x357814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x357818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357814u;
        // 0x357818: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357814) {
            ctx->pc = 0x3576A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3576a8;
        }
    }
    ctx->pc = 0x35781Cu;
label_35781c:
    // 0x35781c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x35781cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_357820:
    // 0x357820: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x357820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_357824:
    // 0x357824: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_357828:
    if (ctx->pc == 0x357828u) {
        ctx->pc = 0x357828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357824u;
        // 0x357828: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35782Cu;
        goto label_35782c;
    }
    ctx->pc = 0x357824u;
    {
        const bool branch_taken_0x357824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x357828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357824u;
        // 0x357828: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357824) {
            ctx->pc = 0x357850u;
            goto label_357850;
        }
    }
    ctx->pc = 0x35782Cu;
label_35782c:
    // 0x35782c: 0xc13c6b2  jal         func_4F1AC8
label_357830:
    if (ctx->pc == 0x357830u) {
        ctx->pc = 0x357830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35782Cu;
        // 0x357830: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357834u;
        goto label_357834;
    }
    ctx->pc = 0x35782Cu;
    SET_GPR_U32(ctx, 31, 0x357834u);
    ctx->pc = 0x357830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35782Cu;
    // 0x357830: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1AC8u, 0x35782Cu, 0x357834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357834u;
label_357834:
    // 0x357834: 0x92630010  lbu         $v1, 0x10($s3)
    ctx->pc = 0x357834u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_357838:
    // 0x357838: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x357838u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_35783c:
    // 0x35783c: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x35783cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
label_357840:
    // 0x357840: 0xa2640010  sb          $a0, 0x10($s3)
    ctx->pc = 0x357840u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 16), (uint8_t)GPR_U32(ctx, 4));
label_357844:
    // 0x357844: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x357844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_357848:
    // 0x357848: 0xa2620010  sb          $v0, 0x10($s3)
    ctx->pc = 0x357848u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 16), (uint8_t)GPR_U32(ctx, 2));
label_35784c:
    // 0x35784c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x35784cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_357850:
    // 0x357850: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x357850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_357854:
    // 0x357854: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x357854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_357858:
    // 0x357858: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_35785c:
    if (ctx->pc == 0x35785Cu) {
        ctx->pc = 0x35785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357858u;
        // 0x35785c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357860u;
        goto label_357860;
    }
    ctx->pc = 0x357858u;
    {
        const bool branch_taken_0x357858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357858u;
        // 0x35785c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357858) {
            ctx->pc = 0x357880u;
            goto label_357880;
        }
    }
    ctx->pc = 0x357860u;
label_357860:
    // 0x357860: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x357860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_357864:
    // 0x357864: 0x0  nop
    ctx->pc = 0x357864u;
    // NOP
label_357868:
    // 0x357868: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x357868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_35786c:
    // 0x35786c: 0x0  nop
    ctx->pc = 0x35786cu;
    // NOP
label_357870:
    // 0x357870: 0x0  nop
    ctx->pc = 0x357870u;
    // NOP
label_357874:
    // 0x357874: 0x0  nop
    ctx->pc = 0x357874u;
    // NOP
label_357878:
    // 0x357878: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_35787c:
    if (ctx->pc == 0x35787Cu) {
        ctx->pc = 0x35787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357878u;
        // 0x35787c: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x357880u;
        goto label_357880;
    }
    ctx->pc = 0x357878u;
    {
        const bool branch_taken_0x357878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357878) {
            ctx->pc = 0x35787Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357878u;
            // 0x35787c: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357868;
        }
    }
    ctx->pc = 0x357880u;
label_357880:
    // 0x357880: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x357880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_357884:
    // 0x357884: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_357888:
    if (ctx->pc == 0x357888u) {
        ctx->pc = 0x357888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357884u;
        // 0x357888: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35788Cu;
        goto label_35788c;
    }
    ctx->pc = 0x357884u;
    {
        const bool branch_taken_0x357884 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x357888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357884u;
        // 0x357888: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357884) {
            ctx->pc = 0x3578B0u;
            goto label_3578b0;
        }
    }
    ctx->pc = 0x35788Cu;
label_35788c:
    // 0x35788c: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x35788cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_357890:
    // 0x357890: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x357890u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_357894:
    // 0x357894: 0x24c68fd8  addiu       $a2, $a2, -0x7028
    ctx->pc = 0x357894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938584));
label_357898:
    // 0x357898: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x357898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_35789c:
    // 0x35789c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x35789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3578a0:
    // 0x3578a0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x3578a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_3578a4:
    // 0x3578a4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x3578a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_3578a8:
    // 0x3578a8: 0x60f809  jalr        $v1
label_3578ac:
    if (ctx->pc == 0x3578ACu) {
        ctx->pc = 0x3578ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3578A8u;
        // 0x3578ac: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3578B0u;
        goto label_3578b0;
    }
    ctx->pc = 0x3578A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3578B0u);
        ctx->pc = 0x3578ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3578A8u;
        // 0x3578ac: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3578A8u, 0x3578B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3578B0u;
label_3578b0:
    // 0x3578b0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3578b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3578b4:
    // 0x3578b4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3578b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3578b8:
    // 0x3578b8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3578b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3578bc:
    // 0x3578bc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3578bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3578c0:
    // 0x3578c0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3578c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3578c4:
    // 0x3578c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3578c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3578c8:
    // 0x3578c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3578c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3578cc:
    // 0x3578cc: 0x3e00008  jr          $ra
label_3578d0:
    if (ctx->pc == 0x3578D0u) {
        ctx->pc = 0x3578D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3578CCu;
        // 0x3578d0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3578D4u;
        goto label_3578d4;
    }
    ctx->pc = 0x3578CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3578D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3578CCu;
        // 0x3578d0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3578CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3578D4u;
label_3578d4:
    // 0x3578d4: 0x0  nop
    ctx->pc = 0x3578d4u;
    // NOP
    ctx->pc = 0x3578d8u;
}
