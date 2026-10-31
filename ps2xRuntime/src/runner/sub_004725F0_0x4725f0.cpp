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

// Function: sub_004725F0
// Address: 0x4725f0 - 0x472900
void sub_004725F0_0x4725f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004725F0_0x4725f0");
#endif

    switch (ctx->pc) {
        case 0x4725f0u: goto label_4725f0;
        case 0x4725f4u: goto label_4725f4;
        case 0x4725f8u: goto label_4725f8;
        case 0x4725fcu: goto label_4725fc;
        case 0x472600u: goto label_472600;
        case 0x472604u: goto label_472604;
        case 0x472608u: goto label_472608;
        case 0x47260cu: goto label_47260c;
        case 0x472610u: goto label_472610;
        case 0x472614u: goto label_472614;
        case 0x472618u: goto label_472618;
        case 0x47261cu: goto label_47261c;
        case 0x472620u: goto label_472620;
        case 0x472624u: goto label_472624;
        case 0x472628u: goto label_472628;
        case 0x47262cu: goto label_47262c;
        case 0x472630u: goto label_472630;
        case 0x472634u: goto label_472634;
        case 0x472638u: goto label_472638;
        case 0x47263cu: goto label_47263c;
        case 0x472640u: goto label_472640;
        case 0x472644u: goto label_472644;
        case 0x472648u: goto label_472648;
        case 0x47264cu: goto label_47264c;
        case 0x472650u: goto label_472650;
        case 0x472654u: goto label_472654;
        case 0x472658u: goto label_472658;
        case 0x47265cu: goto label_47265c;
        case 0x472660u: goto label_472660;
        case 0x472664u: goto label_472664;
        case 0x472668u: goto label_472668;
        case 0x47266cu: goto label_47266c;
        case 0x472670u: goto label_472670;
        case 0x472674u: goto label_472674;
        case 0x472678u: goto label_472678;
        case 0x47267cu: goto label_47267c;
        case 0x472680u: goto label_472680;
        case 0x472684u: goto label_472684;
        case 0x472688u: goto label_472688;
        case 0x47268cu: goto label_47268c;
        case 0x472690u: goto label_472690;
        case 0x472694u: goto label_472694;
        case 0x472698u: goto label_472698;
        case 0x47269cu: goto label_47269c;
        case 0x4726a0u: goto label_4726a0;
        case 0x4726a4u: goto label_4726a4;
        case 0x4726a8u: goto label_4726a8;
        case 0x4726acu: goto label_4726ac;
        case 0x4726b0u: goto label_4726b0;
        case 0x4726b4u: goto label_4726b4;
        case 0x4726b8u: goto label_4726b8;
        case 0x4726bcu: goto label_4726bc;
        case 0x4726c0u: goto label_4726c0;
        case 0x4726c4u: goto label_4726c4;
        case 0x4726c8u: goto label_4726c8;
        case 0x4726ccu: goto label_4726cc;
        case 0x4726d0u: goto label_4726d0;
        case 0x4726d4u: goto label_4726d4;
        case 0x4726d8u: goto label_4726d8;
        case 0x4726dcu: goto label_4726dc;
        case 0x4726e0u: goto label_4726e0;
        case 0x4726e4u: goto label_4726e4;
        case 0x4726e8u: goto label_4726e8;
        case 0x4726ecu: goto label_4726ec;
        case 0x4726f0u: goto label_4726f0;
        case 0x4726f4u: goto label_4726f4;
        case 0x4726f8u: goto label_4726f8;
        case 0x4726fcu: goto label_4726fc;
        case 0x472700u: goto label_472700;
        case 0x472704u: goto label_472704;
        case 0x472708u: goto label_472708;
        case 0x47270cu: goto label_47270c;
        case 0x472710u: goto label_472710;
        case 0x472714u: goto label_472714;
        case 0x472718u: goto label_472718;
        case 0x47271cu: goto label_47271c;
        case 0x472720u: goto label_472720;
        case 0x472724u: goto label_472724;
        case 0x472728u: goto label_472728;
        case 0x47272cu: goto label_47272c;
        case 0x472730u: goto label_472730;
        case 0x472734u: goto label_472734;
        case 0x472738u: goto label_472738;
        case 0x47273cu: goto label_47273c;
        case 0x472740u: goto label_472740;
        case 0x472744u: goto label_472744;
        case 0x472748u: goto label_472748;
        case 0x47274cu: goto label_47274c;
        case 0x472750u: goto label_472750;
        case 0x472754u: goto label_472754;
        case 0x472758u: goto label_472758;
        case 0x47275cu: goto label_47275c;
        case 0x472760u: goto label_472760;
        case 0x472764u: goto label_472764;
        case 0x472768u: goto label_472768;
        case 0x47276cu: goto label_47276c;
        case 0x472770u: goto label_472770;
        case 0x472774u: goto label_472774;
        case 0x472778u: goto label_472778;
        case 0x47277cu: goto label_47277c;
        case 0x472780u: goto label_472780;
        case 0x472784u: goto label_472784;
        case 0x472788u: goto label_472788;
        case 0x47278cu: goto label_47278c;
        case 0x472790u: goto label_472790;
        case 0x472794u: goto label_472794;
        case 0x472798u: goto label_472798;
        case 0x47279cu: goto label_47279c;
        case 0x4727a0u: goto label_4727a0;
        case 0x4727a4u: goto label_4727a4;
        case 0x4727a8u: goto label_4727a8;
        case 0x4727acu: goto label_4727ac;
        case 0x4727b0u: goto label_4727b0;
        case 0x4727b4u: goto label_4727b4;
        case 0x4727b8u: goto label_4727b8;
        case 0x4727bcu: goto label_4727bc;
        case 0x4727c0u: goto label_4727c0;
        case 0x4727c4u: goto label_4727c4;
        case 0x4727c8u: goto label_4727c8;
        case 0x4727ccu: goto label_4727cc;
        case 0x4727d0u: goto label_4727d0;
        case 0x4727d4u: goto label_4727d4;
        case 0x4727d8u: goto label_4727d8;
        case 0x4727dcu: goto label_4727dc;
        case 0x4727e0u: goto label_4727e0;
        case 0x4727e4u: goto label_4727e4;
        case 0x4727e8u: goto label_4727e8;
        case 0x4727ecu: goto label_4727ec;
        case 0x4727f0u: goto label_4727f0;
        case 0x4727f4u: goto label_4727f4;
        case 0x4727f8u: goto label_4727f8;
        case 0x4727fcu: goto label_4727fc;
        case 0x472800u: goto label_472800;
        case 0x472804u: goto label_472804;
        case 0x472808u: goto label_472808;
        case 0x47280cu: goto label_47280c;
        case 0x472810u: goto label_472810;
        case 0x472814u: goto label_472814;
        case 0x472818u: goto label_472818;
        case 0x47281cu: goto label_47281c;
        case 0x472820u: goto label_472820;
        case 0x472824u: goto label_472824;
        case 0x472828u: goto label_472828;
        case 0x47282cu: goto label_47282c;
        case 0x472830u: goto label_472830;
        case 0x472834u: goto label_472834;
        case 0x472838u: goto label_472838;
        case 0x47283cu: goto label_47283c;
        case 0x472840u: goto label_472840;
        case 0x472844u: goto label_472844;
        case 0x472848u: goto label_472848;
        case 0x47284cu: goto label_47284c;
        case 0x472850u: goto label_472850;
        case 0x472854u: goto label_472854;
        case 0x472858u: goto label_472858;
        case 0x47285cu: goto label_47285c;
        case 0x472860u: goto label_472860;
        case 0x472864u: goto label_472864;
        case 0x472868u: goto label_472868;
        case 0x47286cu: goto label_47286c;
        case 0x472870u: goto label_472870;
        case 0x472874u: goto label_472874;
        case 0x472878u: goto label_472878;
        case 0x47287cu: goto label_47287c;
        case 0x472880u: goto label_472880;
        case 0x472884u: goto label_472884;
        case 0x472888u: goto label_472888;
        case 0x47288cu: goto label_47288c;
        case 0x472890u: goto label_472890;
        case 0x472894u: goto label_472894;
        case 0x472898u: goto label_472898;
        case 0x47289cu: goto label_47289c;
        case 0x4728a0u: goto label_4728a0;
        case 0x4728a4u: goto label_4728a4;
        case 0x4728a8u: goto label_4728a8;
        case 0x4728acu: goto label_4728ac;
        case 0x4728b0u: goto label_4728b0;
        case 0x4728b4u: goto label_4728b4;
        case 0x4728b8u: goto label_4728b8;
        case 0x4728bcu: goto label_4728bc;
        case 0x4728c0u: goto label_4728c0;
        case 0x4728c4u: goto label_4728c4;
        case 0x4728c8u: goto label_4728c8;
        case 0x4728ccu: goto label_4728cc;
        case 0x4728d0u: goto label_4728d0;
        case 0x4728d4u: goto label_4728d4;
        case 0x4728d8u: goto label_4728d8;
        case 0x4728dcu: goto label_4728dc;
        case 0x4728e0u: goto label_4728e0;
        case 0x4728e4u: goto label_4728e4;
        case 0x4728e8u: goto label_4728e8;
        case 0x4728ecu: goto label_4728ec;
        case 0x4728f0u: goto label_4728f0;
        case 0x4728f4u: goto label_4728f4;
        case 0x4728f8u: goto label_4728f8;
        case 0x4728fcu: goto label_4728fc;
        default: break;
    }

    ctx->pc = 0x4725f0u;

label_4725f0:
    // 0x4725f0: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x4725f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_4725f4:
    // 0x4725f4: 0x7fb001f0  sq          $s0, 0x1F0($sp)
    ctx->pc = 0x4725f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 16));
label_4725f8:
    // 0x4725f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4725f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4725fc:
    // 0x4725fc: 0x7fb201d0  sq          $s2, 0x1D0($sp)
    ctx->pc = 0x4725fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 18));
label_472600:
    // 0x472600: 0x26020094  addiu       $v0, $s0, 0x94
    ctx->pc = 0x472600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_472604:
    // 0x472604: 0x7fb301c0  sq          $s3, 0x1C0($sp)
    ctx->pc = 0x472604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 19));
label_472608:
    // 0x472608: 0x7fb501a0  sq          $s5, 0x1A0($sp)
    ctx->pc = 0x472608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 21));
label_47260c:
    // 0x47260c: 0x7fb60190  sq          $s6, 0x190($sp)
    ctx->pc = 0x47260cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 22));
label_472610:
    // 0x472610: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x472610u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472614:
    // 0x472614: 0x7fb70180  sq          $s7, 0x180($sp)
    ctx->pc = 0x472614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 23));
label_472618:
    // 0x472618: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x472618u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47261c:
    // 0x47261c: 0x7fbe0170  sq          $fp, 0x170($sp)
    ctx->pc = 0x47261cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 30));
label_472620:
    // 0x472620: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x472620u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_472624:
    // 0x472624: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x472624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_472628:
    // 0x472628: 0x7fb101e0  sq          $s1, 0x1E0($sp)
    ctx->pc = 0x472628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 17));
label_47262c:
    // 0x47262c: 0x7fb401b0  sq          $s4, 0x1B0($sp)
    ctx->pc = 0x47262cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 20));
label_472630:
    // 0x472630: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x472630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
label_472634:
    // 0x472634: 0x8f828518  lw          $v0, -0x7AE8($gp)
    ctx->pc = 0x472634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935832)));
label_472638:
    // 0x472638: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x472638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_47263c:
    // 0x47263c: 0xc12104a  jal         func_484128
label_472640:
    if (ctx->pc == 0x472640u) {
        ctx->pc = 0x472640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47263Cu;
        // 0x472640: 0x2029821  addu        $s3, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472644u;
        goto label_472644;
    }
    ctx->pc = 0x47263Cu;
    SET_GPR_U32(ctx, 31, 0x472644u);
    ctx->pc = 0x472640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47263Cu;
    // 0x472640: 0x2029821  addu        $s3, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x47263Cu, 0x472644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472644u;
label_472644:
    // 0x472644: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x472644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_472648:
    // 0x472648: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x472648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_47264c:
    // 0x47264c: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x47264cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_472650:
    // 0x472650: 0xb3a30107  sdl         $v1, 0x107($sp)
    ctx->pc = 0x472650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_472654:
    // 0x472654: 0xb7a30100  sdr         $v1, 0x100($sp)
    ctx->pc = 0x472654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_472658:
    // 0x472658: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x472658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
label_47265c:
    // 0x47265c: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x47265cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_472660:
    // 0x472660: 0x6a07011f  ldl         $a3, 0x11F($s0)
    ctx->pc = 0x472660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_472664:
    // 0x472664: 0x6e070118  ldr         $a3, 0x118($s0)
    ctx->pc = 0x472664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_472668:
    // 0x472668: 0x8e080120  lw          $t0, 0x120($s0)
    ctx->pc = 0x472668u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_47266c:
    // 0x47266c: 0xb3a70117  sdl         $a3, 0x117($sp)
    ctx->pc = 0x47266cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_472670:
    // 0x472670: 0xb7a70110  sdr         $a3, 0x110($sp)
    ctx->pc = 0x472670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_472674:
    // 0x472674: 0xafa80118  sw          $t0, 0x118($sp)
    ctx->pc = 0x472674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 8));
label_472678:
    // 0x472678: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x472678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47267c:
    // 0x47267c: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x47267cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_472680:
    // 0x472680: 0x247ead18  addiu       $fp, $v1, -0x52E8
    ctx->pc = 0x472680u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_472684:
    // 0x472684: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x472684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_472688:
    // 0x472688: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x472688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_47268c:
    // 0x47268c: 0x6a050113  ldl         $a1, 0x113($s0)
    ctx->pc = 0x47268cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_472690:
    // 0x472690: 0x6e05010c  ldr         $a1, 0x10C($s0)
    ctx->pc = 0x472690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_472694:
    // 0x472694: 0x8e060114  lw          $a2, 0x114($s0)
    ctx->pc = 0x472694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_472698:
    // 0x472698: 0xb3a50127  sdl         $a1, 0x127($sp)
    ctx->pc = 0x472698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_47269c:
    // 0x47269c: 0xb7a50120  sdr         $a1, 0x120($sp)
    ctx->pc = 0x47269cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4726a0:
    // 0x4726a0: 0xafa60128  sw          $a2, 0x128($sp)
    ctx->pc = 0x4726a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 6));
label_4726a4:
    // 0x4726a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4726a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4726a8:
    // 0x4726a8: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x4726a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_4726ac:
    // 0x4726ac: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x4726acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_4726b0:
    // 0x4726b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4726b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4726b4:
    // 0x4726b4: 0x0  nop
    ctx->pc = 0x4726b4u;
    // NOP
label_4726b8:
    // 0x4726b8: 0x4810058  bgez        $a0, . + 4 + (0x58 << 2)
label_4726bc:
    if (ctx->pc == 0x4726BCu) {
        ctx->pc = 0x4726BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4726B8u;
        // 0x4726bc: 0x3a41821  addu        $v1, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4726C0u;
        goto label_4726c0;
    }
    ctx->pc = 0x4726B8u;
    {
        const bool branch_taken_0x4726b8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4726BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4726B8u;
        // 0x4726bc: 0x3a41821  addu        $v1, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4726b8) {
            ctx->pc = 0x47281Cu;
            goto label_47281c;
        }
    }
    ctx->pc = 0x4726C0u;
label_4726c0:
    // 0x4726c0: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x4726c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_4726c4:
    // 0x4726c4: 0x26090048  addiu       $t1, $s0, 0x48
    ctx->pc = 0x4726c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_4726c8:
    // 0x4726c8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4726c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4726cc:
    // 0x4726cc: 0x24a70078  addiu       $a3, $a1, 0x78
    ctx->pc = 0x4726ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
label_4726d0:
    // 0x4726d0: 0x90a20010  lbu         $v0, 0x10($a1)
    ctx->pc = 0x4726d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_4726d4:
    // 0x4726d4: 0x0  nop
    ctx->pc = 0x4726d4u;
    // NOP
label_4726d8:
    // 0x4726d8: 0x90a30011  lbu         $v1, 0x11($a1)
    ctx->pc = 0x4726d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
label_4726dc:
    // 0x4726dc: 0x462018  mult        $a0, $v0, $a2
    ctx->pc = 0x4726dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4726e0:
    // 0x4726e0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x4726e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4726e4:
    // 0x4726e4: 0x664018  mult        $t0, $v1, $a2
    ctx->pc = 0x4726e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_4726e8:
    // 0x4726e8: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x4726e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4726ec:
    // 0x4726ec: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x4726ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4726f0:
    // 0x4726f0: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x4726f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4726f4:
    // 0x4726f4: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x4726f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_4726f8:
    // 0x4726f8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x4726f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4726fc:
    // 0x4726fc: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x4726fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_472700:
    // 0x472700: 0x90a40012  lbu         $a0, 0x12($a1)
    ctx->pc = 0x472700u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
label_472704:
    // 0x472704: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x472704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_472708:
    // 0x472708: 0x864018  mult        $t0, $a0, $a2
    ctx->pc = 0x472708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_47270c:
    // 0x47270c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x47270cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_472710:
    // 0x472710: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x472710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_472714:
    // 0x472714: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x472714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_472718:
    // 0x472718: 0x1092021  addu        $a0, $t0, $t1
    ctx->pc = 0x472718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_47271c:
    // 0x47271c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x47271cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_472720:
    // 0x472720: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x472720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_472724:
    // 0x472724: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x472724u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_472728:
    // 0x472728: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x472728u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_47272c:
    // 0x47272c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x47272cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_472730:
    // 0x472730: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x472730u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_472734:
    // 0x472734: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x472734u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_472738:
    // 0x472738: 0x0  nop
    ctx->pc = 0x472738u;
    // NOP
label_47273c:
    // 0x47273c: 0x1c600033  bgtz        $v1, . + 4 + (0x33 << 2)
label_472740:
    if (ctx->pc == 0x472740u) {
        ctx->pc = 0x472740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47273Cu;
        // 0x472740: 0xe7a20138  swc1        $f2, 0x138($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x472744u;
        goto label_472744;
    }
    ctx->pc = 0x47273Cu;
    {
        const bool branch_taken_0x47273c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x472740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47273Cu;
        // 0x472740: 0xe7a20138  swc1        $f2, 0x138($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47273c) {
            ctx->pc = 0x47280Cu;
            goto label_47280c;
        }
    }
    ctx->pc = 0x472744u;
label_472744:
    // 0x472744: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x472744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
label_472748:
    // 0x472748: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x472748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_47274c:
    // 0x47274c: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
label_472750:
    if (ctx->pc == 0x472750u) {
        ctx->pc = 0x472750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47274Cu;
        // 0x472750: 0x90a20010  lbu         $v0, 0x10($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472754u;
        goto label_472754;
    }
    ctx->pc = 0x47274Cu;
    {
        const bool branch_taken_0x47274c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47274c) {
            ctx->pc = 0x472750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47274Cu;
            // 0x472750: 0x90a20010  lbu         $v0, 0x10($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4726D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4726d8;
        }
    }
    ctx->pc = 0x472754u;
label_472754:
    // 0x472754: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x472754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_472758:
    // 0x472758: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x472758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_47275c:
    // 0x47275c: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_472760:
    if (ctx->pc == 0x472760u) {
        ctx->pc = 0x472760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47275Cu;
        // 0x472760: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472764u;
        goto label_472764;
    }
    ctx->pc = 0x47275Cu;
    {
        const bool branch_taken_0x47275c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47275c) {
            ctx->pc = 0x472760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47275Cu;
            // 0x472760: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4727FCu;
            goto label_4727fc;
        }
    }
    ctx->pc = 0x472764u;
label_472764:
    // 0x472764: 0x24620032  addiu       $v0, $v1, 0x32
    ctx->pc = 0x472764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
label_472768:
    // 0x472768: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x472768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_47276c:
    // 0x47276c: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x47276cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_472770:
    // 0x472770: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_472774:
    if (ctx->pc == 0x472774u) {
        ctx->pc = 0x472774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472770u;
        // 0x472774: 0x27b40140  addiu       $s4, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472778u;
        goto label_472778;
    }
    ctx->pc = 0x472770u;
    {
        const bool branch_taken_0x472770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x472774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472770u;
        // 0x472774: 0x27b40140  addiu       $s4, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472770) {
            ctx->pc = 0x472794u;
            goto label_472794;
        }
    }
    ctx->pc = 0x472778u;
label_472778:
    // 0x472778: 0x8fc20110  lw          $v0, 0x110($fp)
    ctx->pc = 0x472778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 272)));
label_47277c:
    // 0x47277c: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x47277cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_472780:
    // 0x472780: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x472780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_472784:
    // 0x472784: 0x40f809  jalr        $v0
label_472788:
    if (ctx->pc == 0x472788u) {
        ctx->pc = 0x472788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472784u;
        // 0x472788: 0x34c60507  ori         $a2, $a2, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47278Cu;
        goto label_47278c;
    }
    ctx->pc = 0x472784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47278Cu);
        ctx->pc = 0x472788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472784u;
        // 0x472788: 0x34c60507  ori         $a2, $a2, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472784u, 0x47278Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47278Cu;
label_47278c:
    // 0x47278c: 0x10000007  b           . + 4 + (0x7 << 2)
label_472790:
    if (ctx->pc == 0x472790u) {
        ctx->pc = 0x472790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47278Cu;
        // 0x472790: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472794u;
        goto label_472794;
    }
    ctx->pc = 0x47278Cu;
    {
        const bool branch_taken_0x47278c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47278Cu;
        // 0x472790: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47278c) {
            ctx->pc = 0x4727ACu;
            goto label_4727ac;
        }
    }
    ctx->pc = 0x472794u;
label_472794:
    // 0x472794: 0x8fc20108  lw          $v0, 0x108($fp)
    ctx->pc = 0x472794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 264)));
label_472798:
    // 0x472798: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x472798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_47279c:
    // 0x47279c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47279cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4727a0:
    // 0x4727a0: 0x40f809  jalr        $v0
label_4727a4:
    if (ctx->pc == 0x4727A4u) {
        ctx->pc = 0x4727A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4727A0u;
        // 0x4727a4: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4727A8u;
        goto label_4727a8;
    }
    ctx->pc = 0x4727A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4727A8u);
        ctx->pc = 0x4727A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4727A0u;
        // 0x4727a4: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4727A0u, 0x4727A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4727A8u;
label_4727a8:
    // 0x4727a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4727a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4727ac:
    // 0x4727ac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_4727b0:
    if (ctx->pc == 0x4727B0u) {
        ctx->pc = 0x4727B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4727ACu;
        // 0x4727b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4727B4u;
        goto label_4727b4;
    }
    ctx->pc = 0x4727ACu;
    {
        const bool branch_taken_0x4727ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4727B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4727ACu;
        // 0x4727b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4727ac) {
            ctx->pc = 0x4727CCu;
            goto label_4727cc;
        }
    }
    ctx->pc = 0x4727B4u;
label_4727b4:
    // 0x4727b4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4727b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4727b8:
    // 0x4727b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4727b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4727bc:
    // 0x4727bc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4727bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4727c0:
    // 0x4727c0: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x4727c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_4727c4:
    // 0x4727c4: 0x1000000a  b           . + 4 + (0xA << 2)
label_4727c8:
    if (ctx->pc == 0x4727C8u) {
        ctx->pc = 0x4727C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4727C4u;
        // 0x4727c8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4727CCu;
        goto label_4727cc;
    }
    ctx->pc = 0x4727C4u;
    {
        const bool branch_taken_0x4727c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4727C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4727C4u;
        // 0x4727c8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4727c4) {
            ctx->pc = 0x4727F0u;
            goto label_4727f0;
        }
    }
    ctx->pc = 0x4727CCu;
label_4727cc:
    // 0x4727cc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4727ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4727d0:
    // 0x4727d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4727d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4727d4:
    // 0x4727d4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4727d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_4727d8:
    // 0x4727d8: 0xc11eff2  jal         func_47BFC8
label_4727dc:
    if (ctx->pc == 0x4727DCu) {
        ctx->pc = 0x4727DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4727D8u;
        // 0x4727dc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4727E0u;
        goto label_4727e0;
    }
    ctx->pc = 0x4727D8u;
    SET_GPR_U32(ctx, 31, 0x4727E0u);
    ctx->pc = 0x4727DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4727D8u;
    // 0x4727dc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4727D8u, 0x4727E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4727E0u;
label_4727e0:
    // 0x4727e0: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x4727e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_4727e4:
    // 0x4727e4: 0xc11f024  jal         func_47C090
label_4727e8:
    if (ctx->pc == 0x4727E8u) {
        ctx->pc = 0x4727E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4727E4u;
        // 0x4727e8: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4727ECu;
        goto label_4727ec;
    }
    ctx->pc = 0x4727E4u;
    SET_GPR_U32(ctx, 31, 0x4727ECu);
    ctx->pc = 0x4727E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4727E4u;
    // 0x4727e8: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4727E4u, 0x4727ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4727ECu;
label_4727ec:
    // 0x4727ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4727ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4727f0:
    // 0x4727f0: 0x50800035  beql        $a0, $zero, . + 4 + (0x35 << 2)
label_4727f4:
    if (ctx->pc == 0x4727F4u) {
        ctx->pc = 0x4727F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4727F0u;
        // 0x4727f4: 0xae760008  sw          $s6, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4727F8u;
        goto label_4727f8;
    }
    ctx->pc = 0x4727F0u;
    {
        const bool branch_taken_0x4727f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4727f0) {
            ctx->pc = 0x4727F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4727F0u;
            // 0x4727f4: 0xae760008  sw          $s6, 0x8($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4728C8u;
            goto label_4728c8;
        }
    }
    ctx->pc = 0x4727F8u;
label_4727f8:
    // 0x4727f8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4727f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4727fc:
    // 0x4727fc: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x4727fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_472800:
    // 0x472800: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x472800u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_472804:
    // 0x472804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x472804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_472808:
    // 0x472808: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x472808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_47280c:
    // 0x47280c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x47280cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_472810:
    // 0x472810: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x472810u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_472814:
    // 0x472814: 0x10000029  b           . + 4 + (0x29 << 2)
label_472818:
    if (ctx->pc == 0x472818u) {
        ctx->pc = 0x472818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472814u;
        // 0x472818: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47281Cu;
        goto label_47281c;
    }
    ctx->pc = 0x472814u;
    {
        const bool branch_taken_0x472814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472814u;
        // 0x472818: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472814) {
            ctx->pc = 0x4728BCu;
            goto label_4728bc;
        }
    }
    ctx->pc = 0x47281Cu;
label_47281c:
    // 0x47281c: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x47281cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_472820:
    // 0x472820: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x472820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_472824:
    // 0x472824: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x472824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_472828:
    // 0x472828: 0xc4420120  lwc1        $f2, 0x120($v0)
    ctx->pc = 0x472828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47282c:
    // 0x47282c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x47282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_472830:
    // 0x472830: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x472830u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_472834:
    // 0x472834: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x472834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_472838:
    // 0x472838: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x472838u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_47283c:
    // 0x47283c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x47283cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_472840:
    // 0x472840: 0x461001d  bgez        $v1, . + 4 + (0x1D << 2)
label_472844:
    if (ctx->pc == 0x472844u) {
        ctx->pc = 0x472844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472840u;
        // 0x472844: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472848u;
        goto label_472848;
    }
    ctx->pc = 0x472840u;
    {
        const bool branch_taken_0x472840 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x472844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472840u;
        // 0x472844: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472840) {
            ctx->pc = 0x4728B8u;
            goto label_4728b8;
        }
    }
    ctx->pc = 0x472848u;
label_472848:
    // 0x472848: 0x443001c  bgezl       $v0, . + 4 + (0x1C << 2)
label_47284c:
    if (ctx->pc == 0x47284Cu) {
        ctx->pc = 0x47284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472848u;
        // 0x47284c: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472850u;
        goto label_472850;
    }
    ctx->pc = 0x472848u;
    {
        const bool branch_taken_0x472848 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x472848) {
            ctx->pc = 0x47284Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x472848u;
            // 0x47284c: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4728BCu;
            goto label_4728bc;
        }
    }
    ctx->pc = 0x472850u;
label_472850:
    // 0x472850: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x472850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_472854:
    // 0x472854: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x472854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_472858:
    // 0x472858: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x472858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47285c:
    // 0x47285c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x47285cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_472860:
    // 0x472860: 0x0  nop
    ctx->pc = 0x472860u;
    // NOP
label_472864:
    // 0x472864: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_472868:
    if (ctx->pc == 0x472868u) {
        ctx->pc = 0x472868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472864u;
        // 0x472868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47286Cu;
        goto label_47286c;
    }
    ctx->pc = 0x472864u;
    {
        const bool branch_taken_0x472864 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x472868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472864u;
        // 0x472868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472864) {
            ctx->pc = 0x472870u;
            goto label_472870;
        }
    }
    ctx->pc = 0x47286Cu;
label_47286c:
    // 0x47286c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47286cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472870:
    // 0x472870: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x472870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_472874:
    // 0x472874: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_472878:
    if (ctx->pc == 0x472878u) {
        ctx->pc = 0x47287Cu;
        goto label_47287c;
    }
    ctx->pc = 0x472874u;
    {
        const bool branch_taken_0x472874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x472874) {
            ctx->pc = 0x47288Cu;
            goto label_47288c;
        }
    }
    ctx->pc = 0x47287Cu;
label_47287c:
    // 0x47287c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_472880:
    if (ctx->pc == 0x472880u) {
        ctx->pc = 0x472880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47287Cu;
        // 0x472880: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472884u;
        goto label_472884;
    }
    ctx->pc = 0x47287Cu;
    {
        const bool branch_taken_0x47287c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47287c) {
            ctx->pc = 0x472880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47287Cu;
            // 0x472880: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x472898u;
            goto label_472898;
        }
    }
    ctx->pc = 0x472884u;
label_472884:
    // 0x472884: 0x10000007  b           . + 4 + (0x7 << 2)
label_472888:
    if (ctx->pc == 0x472888u) {
        ctx->pc = 0x472888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472884u;
        // 0x472888: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47288Cu;
        goto label_47288c;
    }
    ctx->pc = 0x472884u;
    {
        const bool branch_taken_0x472884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472884u;
        // 0x472888: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472884) {
            ctx->pc = 0x4728A4u;
            goto label_4728a4;
        }
    }
    ctx->pc = 0x47288Cu;
label_47288c:
    // 0x47288c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_472890:
    if (ctx->pc == 0x472890u) {
        ctx->pc = 0x472890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47288Cu;
        // 0x472890: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472894u;
        goto label_472894;
    }
    ctx->pc = 0x47288Cu;
    {
        const bool branch_taken_0x47288c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47288c) {
            ctx->pc = 0x472890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47288Cu;
            // 0x472890: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4728A4u;
            goto label_4728a4;
        }
    }
    ctx->pc = 0x472894u;
label_472894:
    // 0x472894: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x472894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_472898:
    // 0x472898: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x472898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_47289c:
    // 0x47289c: 0x10000003  b           . + 4 + (0x3 << 2)
label_4728a0:
    if (ctx->pc == 0x4728A0u) {
        ctx->pc = 0x4728A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47289Cu;
        // 0x4728a0: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4728A4u;
        goto label_4728a4;
    }
    ctx->pc = 0x47289Cu;
    {
        const bool branch_taken_0x47289c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4728A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47289Cu;
        // 0x4728a0: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47289c) {
            ctx->pc = 0x4728ACu;
            goto label_4728ac;
        }
    }
    ctx->pc = 0x4728A4u;
label_4728a4:
    // 0x4728a4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4728a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4728a8:
    // 0x4728a8: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x4728a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4728ac:
    // 0x4728ac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4728acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4728b0:
    // 0x4728b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4728b4:
    if (ctx->pc == 0x4728B4u) {
        ctx->pc = 0x4728B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4728B0u;
        // 0x4728b4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4728B8u;
        goto label_4728b8;
    }
    ctx->pc = 0x4728B0u;
    {
        const bool branch_taken_0x4728b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4728B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4728B0u;
        // 0x4728b4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4728b0) {
            ctx->pc = 0x4728BCu;
            goto label_4728bc;
        }
    }
    ctx->pc = 0x4728B8u;
label_4728b8:
    // 0x4728b8: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x4728b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4728bc:
    // 0x4728bc: 0x6a3ff7e  bgezl       $s5, . + 4 + (-0x82 << 2)
label_4728c0:
    if (ctx->pc == 0x4728C0u) {
        ctx->pc = 0x4728C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4728BCu;
        // 0x4728c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4728C4u;
        goto label_4728c4;
    }
    ctx->pc = 0x4728BCu;
    {
        const bool branch_taken_0x4728bc = (GPR_S32(ctx, 21) >= 0);
        if (branch_taken_0x4728bc) {
            ctx->pc = 0x4728C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4728BCu;
            // 0x4728c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4726B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4726b8;
        }
    }
    ctx->pc = 0x4728C4u;
label_4728c4:
    // 0x4728c4: 0xae760008  sw          $s6, 0x8($s3)
    ctx->pc = 0x4728c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 22));
label_4728c8:
    // 0x4728c8: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x4728c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4728cc:
    // 0x4728cc: 0x7bb001f0  lq          $s0, 0x1F0($sp)
    ctx->pc = 0x4728ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_4728d0:
    // 0x4728d0: 0x7bb101e0  lq          $s1, 0x1E0($sp)
    ctx->pc = 0x4728d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_4728d4:
    // 0x4728d4: 0x7bb201d0  lq          $s2, 0x1D0($sp)
    ctx->pc = 0x4728d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_4728d8:
    // 0x4728d8: 0x7bb301c0  lq          $s3, 0x1C0($sp)
    ctx->pc = 0x4728d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_4728dc:
    // 0x4728dc: 0x7bb401b0  lq          $s4, 0x1B0($sp)
    ctx->pc = 0x4728dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_4728e0:
    // 0x4728e0: 0x7bb501a0  lq          $s5, 0x1A0($sp)
    ctx->pc = 0x4728e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_4728e4:
    // 0x4728e4: 0x7bb60190  lq          $s6, 0x190($sp)
    ctx->pc = 0x4728e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_4728e8:
    // 0x4728e8: 0x7bb70180  lq          $s7, 0x180($sp)
    ctx->pc = 0x4728e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_4728ec:
    // 0x4728ec: 0x7bbe0170  lq          $fp, 0x170($sp)
    ctx->pc = 0x4728ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_4728f0:
    // 0x4728f0: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x4728f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_4728f4:
    // 0x4728f4: 0x3e00008  jr          $ra
label_4728f8:
    if (ctx->pc == 0x4728F8u) {
        ctx->pc = 0x4728F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4728F4u;
        // 0x4728f8: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4728FCu;
        goto label_4728fc;
    }
    ctx->pc = 0x4728F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4728F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4728F4u;
        // 0x4728f8: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4728F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4728FCu;
label_4728fc:
    // 0x4728fc: 0x0  nop
    ctx->pc = 0x4728fcu;
    // NOP
    ctx->pc = 0x472900u;
}
