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

// Function: sub_003035D8
// Address: 0x3035d8 - 0x303988
void sub_003035D8_0x3035d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003035D8_0x3035d8");
#endif

    switch (ctx->pc) {
        case 0x3035d8u: goto label_3035d8;
        case 0x3035dcu: goto label_3035dc;
        case 0x3035e0u: goto label_3035e0;
        case 0x3035e4u: goto label_3035e4;
        case 0x3035e8u: goto label_3035e8;
        case 0x3035ecu: goto label_3035ec;
        case 0x3035f0u: goto label_3035f0;
        case 0x3035f4u: goto label_3035f4;
        case 0x3035f8u: goto label_3035f8;
        case 0x3035fcu: goto label_3035fc;
        case 0x303600u: goto label_303600;
        case 0x303604u: goto label_303604;
        case 0x303608u: goto label_303608;
        case 0x30360cu: goto label_30360c;
        case 0x303610u: goto label_303610;
        case 0x303614u: goto label_303614;
        case 0x303618u: goto label_303618;
        case 0x30361cu: goto label_30361c;
        case 0x303620u: goto label_303620;
        case 0x303624u: goto label_303624;
        case 0x303628u: goto label_303628;
        case 0x30362cu: goto label_30362c;
        case 0x303630u: goto label_303630;
        case 0x303634u: goto label_303634;
        case 0x303638u: goto label_303638;
        case 0x30363cu: goto label_30363c;
        case 0x303640u: goto label_303640;
        case 0x303644u: goto label_303644;
        case 0x303648u: goto label_303648;
        case 0x30364cu: goto label_30364c;
        case 0x303650u: goto label_303650;
        case 0x303654u: goto label_303654;
        case 0x303658u: goto label_303658;
        case 0x30365cu: goto label_30365c;
        case 0x303660u: goto label_303660;
        case 0x303664u: goto label_303664;
        case 0x303668u: goto label_303668;
        case 0x30366cu: goto label_30366c;
        case 0x303670u: goto label_303670;
        case 0x303674u: goto label_303674;
        case 0x303678u: goto label_303678;
        case 0x30367cu: goto label_30367c;
        case 0x303680u: goto label_303680;
        case 0x303684u: goto label_303684;
        case 0x303688u: goto label_303688;
        case 0x30368cu: goto label_30368c;
        case 0x303690u: goto label_303690;
        case 0x303694u: goto label_303694;
        case 0x303698u: goto label_303698;
        case 0x30369cu: goto label_30369c;
        case 0x3036a0u: goto label_3036a0;
        case 0x3036a4u: goto label_3036a4;
        case 0x3036a8u: goto label_3036a8;
        case 0x3036acu: goto label_3036ac;
        case 0x3036b0u: goto label_3036b0;
        case 0x3036b4u: goto label_3036b4;
        case 0x3036b8u: goto label_3036b8;
        case 0x3036bcu: goto label_3036bc;
        case 0x3036c0u: goto label_3036c0;
        case 0x3036c4u: goto label_3036c4;
        case 0x3036c8u: goto label_3036c8;
        case 0x3036ccu: goto label_3036cc;
        case 0x3036d0u: goto label_3036d0;
        case 0x3036d4u: goto label_3036d4;
        case 0x3036d8u: goto label_3036d8;
        case 0x3036dcu: goto label_3036dc;
        case 0x3036e0u: goto label_3036e0;
        case 0x3036e4u: goto label_3036e4;
        case 0x3036e8u: goto label_3036e8;
        case 0x3036ecu: goto label_3036ec;
        case 0x3036f0u: goto label_3036f0;
        case 0x3036f4u: goto label_3036f4;
        case 0x3036f8u: goto label_3036f8;
        case 0x3036fcu: goto label_3036fc;
        case 0x303700u: goto label_303700;
        case 0x303704u: goto label_303704;
        case 0x303708u: goto label_303708;
        case 0x30370cu: goto label_30370c;
        case 0x303710u: goto label_303710;
        case 0x303714u: goto label_303714;
        case 0x303718u: goto label_303718;
        case 0x30371cu: goto label_30371c;
        case 0x303720u: goto label_303720;
        case 0x303724u: goto label_303724;
        case 0x303728u: goto label_303728;
        case 0x30372cu: goto label_30372c;
        case 0x303730u: goto label_303730;
        case 0x303734u: goto label_303734;
        case 0x303738u: goto label_303738;
        case 0x30373cu: goto label_30373c;
        case 0x303740u: goto label_303740;
        case 0x303744u: goto label_303744;
        case 0x303748u: goto label_303748;
        case 0x30374cu: goto label_30374c;
        case 0x303750u: goto label_303750;
        case 0x303754u: goto label_303754;
        case 0x303758u: goto label_303758;
        case 0x30375cu: goto label_30375c;
        case 0x303760u: goto label_303760;
        case 0x303764u: goto label_303764;
        case 0x303768u: goto label_303768;
        case 0x30376cu: goto label_30376c;
        case 0x303770u: goto label_303770;
        case 0x303774u: goto label_303774;
        case 0x303778u: goto label_303778;
        case 0x30377cu: goto label_30377c;
        case 0x303780u: goto label_303780;
        case 0x303784u: goto label_303784;
        case 0x303788u: goto label_303788;
        case 0x30378cu: goto label_30378c;
        case 0x303790u: goto label_303790;
        case 0x303794u: goto label_303794;
        case 0x303798u: goto label_303798;
        case 0x30379cu: goto label_30379c;
        case 0x3037a0u: goto label_3037a0;
        case 0x3037a4u: goto label_3037a4;
        case 0x3037a8u: goto label_3037a8;
        case 0x3037acu: goto label_3037ac;
        case 0x3037b0u: goto label_3037b0;
        case 0x3037b4u: goto label_3037b4;
        case 0x3037b8u: goto label_3037b8;
        case 0x3037bcu: goto label_3037bc;
        case 0x3037c0u: goto label_3037c0;
        case 0x3037c4u: goto label_3037c4;
        case 0x3037c8u: goto label_3037c8;
        case 0x3037ccu: goto label_3037cc;
        case 0x3037d0u: goto label_3037d0;
        case 0x3037d4u: goto label_3037d4;
        case 0x3037d8u: goto label_3037d8;
        case 0x3037dcu: goto label_3037dc;
        case 0x3037e0u: goto label_3037e0;
        case 0x3037e4u: goto label_3037e4;
        case 0x3037e8u: goto label_3037e8;
        case 0x3037ecu: goto label_3037ec;
        case 0x3037f0u: goto label_3037f0;
        case 0x3037f4u: goto label_3037f4;
        case 0x3037f8u: goto label_3037f8;
        case 0x3037fcu: goto label_3037fc;
        case 0x303800u: goto label_303800;
        case 0x303804u: goto label_303804;
        case 0x303808u: goto label_303808;
        case 0x30380cu: goto label_30380c;
        case 0x303810u: goto label_303810;
        case 0x303814u: goto label_303814;
        case 0x303818u: goto label_303818;
        case 0x30381cu: goto label_30381c;
        case 0x303820u: goto label_303820;
        case 0x303824u: goto label_303824;
        case 0x303828u: goto label_303828;
        case 0x30382cu: goto label_30382c;
        case 0x303830u: goto label_303830;
        case 0x303834u: goto label_303834;
        case 0x303838u: goto label_303838;
        case 0x30383cu: goto label_30383c;
        case 0x303840u: goto label_303840;
        case 0x303844u: goto label_303844;
        case 0x303848u: goto label_303848;
        case 0x30384cu: goto label_30384c;
        case 0x303850u: goto label_303850;
        case 0x303854u: goto label_303854;
        case 0x303858u: goto label_303858;
        case 0x30385cu: goto label_30385c;
        case 0x303860u: goto label_303860;
        case 0x303864u: goto label_303864;
        case 0x303868u: goto label_303868;
        case 0x30386cu: goto label_30386c;
        case 0x303870u: goto label_303870;
        case 0x303874u: goto label_303874;
        case 0x303878u: goto label_303878;
        case 0x30387cu: goto label_30387c;
        case 0x303880u: goto label_303880;
        case 0x303884u: goto label_303884;
        case 0x303888u: goto label_303888;
        case 0x30388cu: goto label_30388c;
        case 0x303890u: goto label_303890;
        case 0x303894u: goto label_303894;
        case 0x303898u: goto label_303898;
        case 0x30389cu: goto label_30389c;
        case 0x3038a0u: goto label_3038a0;
        case 0x3038a4u: goto label_3038a4;
        case 0x3038a8u: goto label_3038a8;
        case 0x3038acu: goto label_3038ac;
        case 0x3038b0u: goto label_3038b0;
        case 0x3038b4u: goto label_3038b4;
        case 0x3038b8u: goto label_3038b8;
        case 0x3038bcu: goto label_3038bc;
        case 0x3038c0u: goto label_3038c0;
        case 0x3038c4u: goto label_3038c4;
        case 0x3038c8u: goto label_3038c8;
        case 0x3038ccu: goto label_3038cc;
        case 0x3038d0u: goto label_3038d0;
        case 0x3038d4u: goto label_3038d4;
        case 0x3038d8u: goto label_3038d8;
        case 0x3038dcu: goto label_3038dc;
        case 0x3038e0u: goto label_3038e0;
        case 0x3038e4u: goto label_3038e4;
        case 0x3038e8u: goto label_3038e8;
        case 0x3038ecu: goto label_3038ec;
        case 0x3038f0u: goto label_3038f0;
        case 0x3038f4u: goto label_3038f4;
        case 0x3038f8u: goto label_3038f8;
        case 0x3038fcu: goto label_3038fc;
        case 0x303900u: goto label_303900;
        case 0x303904u: goto label_303904;
        case 0x303908u: goto label_303908;
        case 0x30390cu: goto label_30390c;
        case 0x303910u: goto label_303910;
        case 0x303914u: goto label_303914;
        case 0x303918u: goto label_303918;
        case 0x30391cu: goto label_30391c;
        case 0x303920u: goto label_303920;
        case 0x303924u: goto label_303924;
        case 0x303928u: goto label_303928;
        case 0x30392cu: goto label_30392c;
        case 0x303930u: goto label_303930;
        case 0x303934u: goto label_303934;
        case 0x303938u: goto label_303938;
        case 0x30393cu: goto label_30393c;
        case 0x303940u: goto label_303940;
        case 0x303944u: goto label_303944;
        case 0x303948u: goto label_303948;
        case 0x30394cu: goto label_30394c;
        case 0x303950u: goto label_303950;
        case 0x303954u: goto label_303954;
        case 0x303958u: goto label_303958;
        case 0x30395cu: goto label_30395c;
        case 0x303960u: goto label_303960;
        case 0x303964u: goto label_303964;
        case 0x303968u: goto label_303968;
        case 0x30396cu: goto label_30396c;
        case 0x303970u: goto label_303970;
        case 0x303974u: goto label_303974;
        case 0x303978u: goto label_303978;
        case 0x30397cu: goto label_30397c;
        case 0x303980u: goto label_303980;
        case 0x303984u: goto label_303984;
        default: break;
    }

    ctx->pc = 0x3035d8u;

label_3035d8:
    // 0x3035d8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3035d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3035dc:
    // 0x3035dc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3035dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3035e0:
    // 0x3035e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3035e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3035e4:
    // 0x3035e4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3035e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3035e8:
    // 0x3035e8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3035e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3035ec:
    // 0x3035ec: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3035ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3035f0:
    // 0x3035f0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3035f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3035f4:
    // 0x3035f4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3035f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3035f8:
    // 0x3035f8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3035f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3035fc:
    // 0x3035fc: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3035fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_303600:
    // 0x303600: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x303600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_303604:
    // 0x303604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x303604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_303608:
    // 0x303608: 0xc0a2efc  jal         func_28BBF0
label_30360c:
    if (ctx->pc == 0x30360Cu) {
        ctx->pc = 0x30360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303608u;
        // 0x30360c: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x303610u;
        goto label_303610;
    }
    ctx->pc = 0x303608u;
    SET_GPR_U32(ctx, 31, 0x303610u);
    ctx->pc = 0x30360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303608u;
    // 0x30360c: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BBF0u, 0x303608u, 0x303610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303610u;
label_303610:
    // 0x303610: 0xc0e409a  jal         func_390268
label_303614:
    if (ctx->pc == 0x303614u) {
        ctx->pc = 0x303614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303610u;
        // 0x303614: 0x26640124  addiu       $a0, $s3, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303618u;
        goto label_303618;
    }
    ctx->pc = 0x303610u;
    SET_GPR_U32(ctx, 31, 0x303618u);
    ctx->pc = 0x303614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303610u;
    // 0x303614: 0x26640124  addiu       $a0, $s3, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x303610u, 0x303618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303618u;
label_303618:
    // 0x303618: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_30361c:
    if (ctx->pc == 0x30361Cu) {
        ctx->pc = 0x30361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303618u;
        // 0x30361c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303620u;
        goto label_303620;
    }
    ctx->pc = 0x303618u;
    {
        const bool branch_taken_0x303618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303618u;
        // 0x30361c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303618) {
            ctx->pc = 0x303644u;
            goto label_303644;
        }
    }
    ctx->pc = 0x303620u;
label_303620:
    // 0x303620: 0xc0a7390  jal         func_29CE40
label_303624:
    if (ctx->pc == 0x303624u) {
        ctx->pc = 0x303624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303620u;
        // 0x303624: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303628u;
        goto label_303628;
    }
    ctx->pc = 0x303620u;
    SET_GPR_U32(ctx, 31, 0x303628u);
    ctx->pc = 0x303624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303620u;
    // 0x303624: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE40u, 0x303620u, 0x303628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303628u;
label_303628:
    // 0x303628: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_30362c:
    if (ctx->pc == 0x30362Cu) {
        ctx->pc = 0x30362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303628u;
        // 0x30362c: 0x8e640034  lw          $a0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303630u;
        goto label_303630;
    }
    ctx->pc = 0x303628u;
    {
        const bool branch_taken_0x303628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303628) {
            ctx->pc = 0x30362Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303628u;
            // 0x30362c: 0x8e640034  lw          $a0, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303648u;
            goto label_303648;
        }
    }
    ctx->pc = 0x303630u;
label_303630:
    // 0x303630: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x303630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_303634:
    // 0x303634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x303634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303638:
    // 0x303638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x303638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30363c:
    // 0x30363c: 0xc0a33f8  jal         func_28CFE0
label_303640:
    if (ctx->pc == 0x303640u) {
        ctx->pc = 0x303640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30363Cu;
        // 0x303640: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303644u;
        goto label_303644;
    }
    ctx->pc = 0x30363Cu;
    SET_GPR_U32(ctx, 31, 0x303644u);
    ctx->pc = 0x303640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30363Cu;
    // 0x303640: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x30363Cu, 0x303644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303644u;
label_303644:
    // 0x303644: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x303644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_303648:
    // 0x303648: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x303648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_30364c:
    // 0x30364c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_303650:
    if (ctx->pc == 0x303650u) {
        ctx->pc = 0x303650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30364Cu;
        // 0x303650: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x303654u;
        goto label_303654;
    }
    ctx->pc = 0x30364Cu;
    {
        const bool branch_taken_0x30364c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30364c) {
            ctx->pc = 0x303650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30364Cu;
            // 0x303650: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x303654u;
            goto label_303654;
        }
    }
    ctx->pc = 0x303654u;
label_303654:
    // 0x303654: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x303654u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_303658:
    // 0x303658: 0x1810  mfhi        $v1
    ctx->pc = 0x303658u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_30365c:
    // 0x30365c: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
label_303660:
    if (ctx->pc == 0x303660u) {
        ctx->pc = 0x303660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30365Cu;
        // 0x303660: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303664u;
        goto label_303664;
    }
    ctx->pc = 0x30365Cu;
    {
        const bool branch_taken_0x30365c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x303660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30365Cu;
        // 0x303660: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30365c) {
            ctx->pc = 0x303758u;
            goto label_303758;
        }
    }
    ctx->pc = 0x303664u;
label_303664:
    // 0x303664: 0x92620152  lbu         $v0, 0x152($s3)
    ctx->pc = 0x303664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 338)));
label_303668:
    // 0x303668: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x303668u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30366c:
    // 0x30366c: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x30366cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_303670:
    // 0x303670: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x303670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303674:
    // 0x303674: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x303674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_303678:
    // 0x303678: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x303678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_30367c:
    // 0x30367c: 0x0  nop
    ctx->pc = 0x30367cu;
    // NOP
label_303680:
    // 0x303680: 0x26170001  addiu       $s7, $s0, 0x1
    ctx->pc = 0x303680u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_303684:
    // 0x303684: 0xc05b0e2  jal         func_16C388
label_303688:
    if (ctx->pc == 0x303688u) {
        ctx->pc = 0x303688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303684u;
        // 0x303688: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30368Cu;
        goto label_30368c;
    }
    ctx->pc = 0x303684u;
    SET_GPR_U32(ctx, 31, 0x30368Cu);
    ctx->pc = 0x303688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303684u;
    // 0x303688: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x303684u, 0x30368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30368Cu;
label_30368c:
    // 0x30368c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30368cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_303690:
    // 0x303690: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x303690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_303694:
    // 0x303694: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_303698:
    if (ctx->pc == 0x303698u) {
        ctx->pc = 0x303698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303694u;
        // 0x303698: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30369Cu;
        goto label_30369c;
    }
    ctx->pc = 0x303694u;
    {
        const bool branch_taken_0x303694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303694u;
        // 0x303698: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303694) {
            ctx->pc = 0x303738u;
            goto label_303738;
        }
    }
    ctx->pc = 0x30369Cu;
label_30369c:
    // 0x30369c: 0x24960048  addiu       $s6, $a0, 0x48
    ctx->pc = 0x30369cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_3036a0:
    // 0x3036a0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x3036a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3036a4:
    // 0x3036a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3036a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3036a8:
    // 0x3036a8: 0xc137826  jal         func_4DE098
label_3036ac:
    if (ctx->pc == 0x3036ACu) {
        ctx->pc = 0x3036ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036A8u;
        // 0x3036ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3036B0u;
        goto label_3036b0;
    }
    ctx->pc = 0x3036A8u;
    SET_GPR_U32(ctx, 31, 0x3036B0u);
    ctx->pc = 0x3036ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3036A8u;
    // 0x3036ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3036A8u, 0x3036B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3036B0u;
label_3036b0:
    // 0x3036b0: 0x26140001  addiu       $s4, $s0, 0x1
    ctx->pc = 0x3036b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3036b4:
    // 0x3036b4: 0xc0e409a  jal         func_390268
label_3036b8:
    if (ctx->pc == 0x3036B8u) {
        ctx->pc = 0x3036B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036B4u;
        // 0x3036b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3036BCu;
        goto label_3036bc;
    }
    ctx->pc = 0x3036B4u;
    SET_GPR_U32(ctx, 31, 0x3036BCu);
    ctx->pc = 0x3036B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3036B4u;
    // 0x3036b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3036B4u, 0x3036BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3036BCu;
label_3036bc:
    // 0x3036bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3036bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3036c0:
    // 0x3036c0: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_3036c4:
    if (ctx->pc == 0x3036C4u) {
        ctx->pc = 0x3036C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036C0u;
        // 0x3036c4: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3036C8u;
        goto label_3036c8;
    }
    ctx->pc = 0x3036C0u;
    {
        const bool branch_taken_0x3036c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3036C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036C0u;
        // 0x3036c4: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3036c0) {
            ctx->pc = 0x30372Cu;
            goto label_30372c;
        }
    }
    ctx->pc = 0x3036C8u;
label_3036c8:
    // 0x3036c8: 0x10920019  beq         $a0, $s2, . + 4 + (0x19 << 2)
label_3036cc:
    if (ctx->pc == 0x3036CCu) {
        ctx->pc = 0x3036CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036C8u;
        // 0x3036cc: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3036D0u;
        goto label_3036d0;
    }
    ctx->pc = 0x3036C8u;
    {
        const bool branch_taken_0x3036c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x3036CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036C8u;
        // 0x3036cc: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3036c8) {
            ctx->pc = 0x303730u;
            goto label_303730;
        }
    }
    ctx->pc = 0x3036D0u;
label_3036d0:
    // 0x3036d0: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x3036d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
label_3036d4:
    // 0x3036d4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3036d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3036d8:
    // 0x3036d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3036d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3036dc:
    // 0x3036dc: 0x105e0014  beq         $v0, $fp, . + 4 + (0x14 << 2)
label_3036e0:
    if (ctx->pc == 0x3036E0u) {
        ctx->pc = 0x3036E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036DCu;
        // 0x3036e0: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3036E4u;
        goto label_3036e4;
    }
    ctx->pc = 0x3036DCu;
    {
        const bool branch_taken_0x3036dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x3036E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036DCu;
        // 0x3036e0: 0x2e020010  sltiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3036dc) {
            ctx->pc = 0x303730u;
            goto label_303730;
        }
    }
    ctx->pc = 0x3036E4u;
label_3036e4:
    // 0x3036e4: 0xc087502  jal         func_21D408
label_3036e8:
    if (ctx->pc == 0x3036E8u) {
        ctx->pc = 0x3036E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036E4u;
        // 0x3036e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3036ECu;
        goto label_3036ec;
    }
    ctx->pc = 0x3036E4u;
    SET_GPR_U32(ctx, 31, 0x3036ECu);
    ctx->pc = 0x3036E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3036E4u;
    // 0x3036e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3036E4u, 0x3036ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3036ECu;
label_3036ec:
    // 0x3036ec: 0x24510164  addiu       $s1, $v0, 0x164
    ctx->pc = 0x3036ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
label_3036f0:
    // 0x3036f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3036f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3036f4:
    // 0x3036f4: 0x0  nop
    ctx->pc = 0x3036f4u;
    // NOP
label_3036f8:
    // 0x3036f8: 0xc137826  jal         func_4DE098
label_3036fc:
    if (ctx->pc == 0x3036FCu) {
        ctx->pc = 0x3036FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036F8u;
        // 0x3036fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303700u;
        goto label_303700;
    }
    ctx->pc = 0x3036F8u;
    SET_GPR_U32(ctx, 31, 0x303700u);
    ctx->pc = 0x3036FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3036F8u;
    // 0x3036fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3036F8u, 0x303700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303700u;
label_303700:
    // 0x303700: 0xc0e409a  jal         func_390268
label_303704:
    if (ctx->pc == 0x303704u) {
        ctx->pc = 0x303704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303700u;
        // 0x303704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303708u;
        goto label_303708;
    }
    ctx->pc = 0x303700u;
    SET_GPR_U32(ctx, 31, 0x303708u);
    ctx->pc = 0x303704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303700u;
    // 0x303704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x303700u, 0x303708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303708u;
label_303708:
    // 0x303708: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_30370c:
    if (ctx->pc == 0x30370Cu) {
        ctx->pc = 0x30370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303708u;
        // 0x30370c: 0x521826  xor         $v1, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303710u;
        goto label_303710;
    }
    ctx->pc = 0x303708u;
    {
        const bool branch_taken_0x303708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303708u;
        // 0x30370c: 0x521826  xor         $v1, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303708) {
            ctx->pc = 0x303718u;
            goto label_303718;
        }
    }
    ctx->pc = 0x303710u;
label_303710:
    // 0x303710: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x303710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_303714:
    // 0x303714: 0x43a80a  movz        $s5, $v0, $v1
    ctx->pc = 0x303714u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
label_303718:
    // 0x303718: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x303718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_30371c:
    // 0x30371c: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x30371cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_303720:
    // 0x303720: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_303724:
    if (ctx->pc == 0x303724u) {
        ctx->pc = 0x303724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303720u;
        // 0x303724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303728u;
        goto label_303728;
    }
    ctx->pc = 0x303720u;
    {
        const bool branch_taken_0x303720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303720) {
            ctx->pc = 0x303724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303720u;
            // 0x303724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3036F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3036f8;
        }
    }
    ctx->pc = 0x303728u;
label_303728:
    // 0x303728: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x303728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30372c:
    // 0x30372c: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x30372cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_303730:
    // 0x303730: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
label_303734:
    if (ctx->pc == 0x303734u) {
        ctx->pc = 0x303734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303730u;
        // 0x303734: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303738u;
        goto label_303738;
    }
    ctx->pc = 0x303730u;
    {
        const bool branch_taken_0x303730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303730) {
            ctx->pc = 0x303734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303730u;
            // 0x303734: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3036A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3036a8;
        }
    }
    ctx->pc = 0x303738u;
label_303738:
    // 0x303738: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x303738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30373c:
    // 0x30373c: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x30373cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_303740:
    // 0x303740: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
label_303744:
    if (ctx->pc == 0x303744u) {
        ctx->pc = 0x303744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303740u;
        // 0x303744: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303748u;
        goto label_303748;
    }
    ctx->pc = 0x303740u;
    {
        const bool branch_taken_0x303740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303740) {
            ctx->pc = 0x303744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303740u;
            // 0x303744: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303680;
        }
    }
    ctx->pc = 0x303748u;
label_303748:
    // 0x303748: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x303748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_30374c:
    // 0x30374c: 0x56a30001  bnel        $s5, $v1, . + 4 + (0x1 << 2)
label_303750:
    if (ctx->pc == 0x303750u) {
        ctx->pc = 0x303750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30374Cu;
        // 0x303750: 0xa2750152  sb          $s5, 0x152($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 338), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303754u;
        goto label_303754;
    }
    ctx->pc = 0x30374Cu;
    {
        const bool branch_taken_0x30374c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x30374c) {
            ctx->pc = 0x303750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30374Cu;
            // 0x303750: 0xa2750152  sb          $s5, 0x152($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 338), (uint8_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303754u;
            goto label_303754;
        }
    }
    ctx->pc = 0x303754u;
label_303754:
    // 0x303754: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x303754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_303758:
    // 0x303758: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x303758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_30375c:
    // 0x30375c: 0x8e620160  lw          $v0, 0x160($s3)
    ctx->pc = 0x30375cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
label_303760:
    // 0x303760: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x303760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_303764:
    // 0x303764: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x303764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
label_303768:
    // 0x303768: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x303768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30376c:
    // 0x30376c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_303770:
    if (ctx->pc == 0x303770u) {
        ctx->pc = 0x303770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30376Cu;
        // 0x303770: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303774u;
        goto label_303774;
    }
    ctx->pc = 0x30376Cu;
    {
        const bool branch_taken_0x30376c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30376Cu;
        // 0x303770: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30376c) {
            ctx->pc = 0x30378Cu;
            goto label_30378c;
        }
    }
    ctx->pc = 0x303774u;
label_303774:
    // 0x303774: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x303774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
label_303778:
    // 0x303778: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x303778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30377c:
    // 0x30377c: 0xc0a2be2  jal         func_28AF88
label_303780:
    if (ctx->pc == 0x303780u) {
        ctx->pc = 0x303780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30377Cu;
        // 0x303780: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303784u;
        goto label_303784;
    }
    ctx->pc = 0x30377Cu;
    SET_GPR_U32(ctx, 31, 0x303784u);
    ctx->pc = 0x303780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30377Cu;
    // 0x303780: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AF88u, 0x30377Cu, 0x303784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303784u;
label_303784:
    // 0x303784: 0xae700160  sw          $s0, 0x160($s3)
    ctx->pc = 0x303784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 352), GPR_U32(ctx, 16));
label_303788:
    // 0x303788: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x303788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_30378c:
    // 0x30378c: 0xc0c0e62  jal         func_303988
label_303790:
    if (ctx->pc == 0x303790u) {
        ctx->pc = 0x303790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30378Cu;
        // 0x303790: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303794u;
        goto label_303794;
    }
    ctx->pc = 0x30378Cu;
    SET_GPR_U32(ctx, 31, 0x303794u);
    ctx->pc = 0x303790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30378Cu;
    // 0x303790: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303988u, 0x30378Cu, 0x303794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303794u;
label_303794:
    // 0x303794: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x303794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_303798:
    // 0x303798: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x303798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_30379c:
    // 0x30379c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3037a0:
    if (ctx->pc == 0x3037A0u) {
        ctx->pc = 0x3037A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30379Cu;
        // 0x3037a0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3037A4u;
        goto label_3037a4;
    }
    ctx->pc = 0x30379Cu;
    {
        const bool branch_taken_0x30379c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30379c) {
            ctx->pc = 0x3037A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30379Cu;
            // 0x3037a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3037A4u;
            goto label_3037a4;
        }
    }
    ctx->pc = 0x3037A4u;
label_3037a4:
    // 0x3037a4: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x3037a4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_3037a8:
    // 0x3037a8: 0x1810  mfhi        $v1
    ctx->pc = 0x3037a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3037ac:
    // 0x3037ac: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_3037b0:
    if (ctx->pc == 0x3037B0u) {
        ctx->pc = 0x3037B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037ACu;
        // 0x3037b0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3037B4u;
        goto label_3037b4;
    }
    ctx->pc = 0x3037ACu;
    {
        const bool branch_taken_0x3037ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3037ac) {
            ctx->pc = 0x3037B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3037ACu;
            // 0x3037b0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3037D0u;
            goto label_3037d0;
        }
    }
    ctx->pc = 0x3037B4u;
label_3037b4:
    // 0x3037b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3037b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3037b8:
    // 0x3037b8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3037b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3037bc:
    // 0x3037bc: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3037bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3037c0:
    // 0x3037c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3037c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3037c4:
    // 0x3037c4: 0xc1070ce  jal         func_41C338
label_3037c8:
    if (ctx->pc == 0x3037C8u) {
        ctx->pc = 0x3037C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037C4u;
        // 0x3037c8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3037CCu;
        goto label_3037cc;
    }
    ctx->pc = 0x3037C4u;
    SET_GPR_U32(ctx, 31, 0x3037CCu);
    ctx->pc = 0x3037C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3037C4u;
    // 0x3037c8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C338u, 0x3037C4u, 0x3037CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3037CCu;
label_3037cc:
    // 0x3037cc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3037ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3037d0:
    // 0x3037d0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x3037d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_3037d4:
    // 0x3037d4: 0x24704b00  addiu       $s0, $v1, 0x4B00
    ctx->pc = 0x3037d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_3037d8:
    // 0x3037d8: 0x84440092  lh          $a0, 0x92($v0)
    ctx->pc = 0x3037d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_3037dc:
    // 0x3037dc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3037dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3037e0:
    // 0x3037e0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x3037e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_3037e4:
    // 0x3037e4: 0xc0cd7d2  jal         func_335F48
label_3037e8:
    if (ctx->pc == 0x3037E8u) {
        ctx->pc = 0x3037E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037E4u;
        // 0x3037e8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3037ECu;
        goto label_3037ec;
    }
    ctx->pc = 0x3037E4u;
    SET_GPR_U32(ctx, 31, 0x3037ECu);
    ctx->pc = 0x3037E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3037E4u;
    // 0x3037e8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x3037E4u, 0x3037ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3037ECu;
label_3037ec:
    // 0x3037ec: 0x926202e4  lbu         $v0, 0x2E4($s3)
    ctx->pc = 0x3037ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 740)));
label_3037f0:
    // 0x3037f0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_3037f4:
    if (ctx->pc == 0x3037F4u) {
        ctx->pc = 0x3037F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037F0u;
        // 0x3037f4: 0xe6600110  swc1        $f0, 0x110($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3037F8u;
        goto label_3037f8;
    }
    ctx->pc = 0x3037F0u;
    {
        const bool branch_taken_0x3037f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3037F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037F0u;
        // 0x3037f4: 0xe6600110  swc1        $f0, 0x110($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3037f0) {
            ctx->pc = 0x303948u;
            goto label_303948;
        }
    }
    ctx->pc = 0x3037F8u;
label_3037f8:
    // 0x3037f8: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x3037f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_3037fc:
    // 0x3037fc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3037fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_303800:
    // 0x303800: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_303804:
    if (ctx->pc == 0x303804u) {
        ctx->pc = 0x303804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303800u;
        // 0x303804: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x303808u;
        goto label_303808;
    }
    ctx->pc = 0x303800u;
    {
        const bool branch_taken_0x303800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303800) {
            ctx->pc = 0x303804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303800u;
            // 0x303804: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x303808u;
            goto label_303808;
        }
    }
    ctx->pc = 0x303808u;
label_303808:
    // 0x303808: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x303808u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_30380c:
    // 0x30380c: 0x1810  mfhi        $v1
    ctx->pc = 0x30380cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_303810:
    // 0x303810: 0x5460004e  bnel        $v1, $zero, . + 4 + (0x4E << 2)
label_303814:
    if (ctx->pc == 0x303814u) {
        ctx->pc = 0x303814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303810u;
        // 0x303814: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303818u;
        goto label_303818;
    }
    ctx->pc = 0x303810u;
    {
        const bool branch_taken_0x303810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303810) {
            ctx->pc = 0x303814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303810u;
            // 0x303814: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30394Cu;
            goto label_30394c;
        }
    }
    ctx->pc = 0x303818u;
label_303818:
    // 0x303818: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x303818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_30381c:
    // 0x30381c: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x30381cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_303820:
    // 0x303820: 0x8e64020c  lw          $a0, 0x20C($s3)
    ctx->pc = 0x303820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
label_303824:
    // 0x303824: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x303824u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303828:
    // 0x303828: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x303828u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_30382c:
    // 0x30382c: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x30382cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_303830:
    // 0x303830: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x303830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
label_303834:
    // 0x303834: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x303834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_303838:
    // 0x303838: 0x24950048  addiu       $s5, $a0, 0x48
    ctx->pc = 0x303838u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_30383c:
    // 0x30383c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x30383cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_303840:
    // 0x303840: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x303840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_303844:
    // 0x303844: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x303844u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_303848:
    // 0x303848: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x303848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_30384c:
    // 0x30384c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30384cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_303850:
    // 0x303850: 0xc137826  jal         func_4DE098
label_303854:
    if (ctx->pc == 0x303854u) {
        ctx->pc = 0x303854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303850u;
        // 0x303854: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303858u;
        goto label_303858;
    }
    ctx->pc = 0x303850u;
    SET_GPR_U32(ctx, 31, 0x303858u);
    ctx->pc = 0x303854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303850u;
    // 0x303854: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x303850u, 0x303858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303858u;
label_303858:
    // 0x303858: 0xc0e409a  jal         func_390268
label_30385c:
    if (ctx->pc == 0x30385Cu) {
        ctx->pc = 0x30385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303858u;
        // 0x30385c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303860u;
        goto label_303860;
    }
    ctx->pc = 0x303858u;
    SET_GPR_U32(ctx, 31, 0x303860u);
    ctx->pc = 0x30385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303858u;
    // 0x30385c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x303858u, 0x303860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303860u;
label_303860:
    // 0x303860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x303860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_303864:
    // 0x303864: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
label_303868:
    if (ctx->pc == 0x303868u) {
        ctx->pc = 0x303868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303864u;
        // 0x303868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30386Cu;
        goto label_30386c;
    }
    ctx->pc = 0x303864u;
    {
        const bool branch_taken_0x303864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x303868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303864u;
        // 0x303868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303864) {
            ctx->pc = 0x303938u;
            goto label_303938;
        }
    }
    ctx->pc = 0x30386Cu;
label_30386c:
    // 0x30386c: 0xc08a08a  jal         func_228228
label_303870:
    if (ctx->pc == 0x303870u) {
        ctx->pc = 0x303870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30386Cu;
        // 0x303870: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303874u;
        goto label_303874;
    }
    ctx->pc = 0x30386Cu;
    SET_GPR_U32(ctx, 31, 0x303874u);
    ctx->pc = 0x303870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30386Cu;
    // 0x303870: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x30386Cu, 0x303874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303874u;
label_303874:
    // 0x303874: 0x50520031  beql        $v0, $s2, . + 4 + (0x31 << 2)
label_303878:
    if (ctx->pc == 0x303878u) {
        ctx->pc = 0x303878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303874u;
        // 0x303878: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30387Cu;
        goto label_30387c;
    }
    ctx->pc = 0x303874u;
    {
        const bool branch_taken_0x303874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x303874) {
            ctx->pc = 0x303878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303874u;
            // 0x303878: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30393Cu;
            goto label_30393c;
        }
    }
    ctx->pc = 0x30387Cu;
label_30387c:
    // 0x30387c: 0xc08a096  jal         func_228258
label_303880:
    if (ctx->pc == 0x303880u) {
        ctx->pc = 0x303880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30387Cu;
        // 0x303880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303884u;
        goto label_303884;
    }
    ctx->pc = 0x30387Cu;
    SET_GPR_U32(ctx, 31, 0x303884u);
    ctx->pc = 0x303880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30387Cu;
    // 0x303880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x30387Cu, 0x303884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303884u;
label_303884:
    // 0x303884: 0x5052002d  beql        $v0, $s2, . + 4 + (0x2D << 2)
label_303888:
    if (ctx->pc == 0x303888u) {
        ctx->pc = 0x303888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303884u;
        // 0x303888: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30388Cu;
        goto label_30388c;
    }
    ctx->pc = 0x303884u;
    {
        const bool branch_taken_0x303884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x303884) {
            ctx->pc = 0x303888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303884u;
            // 0x303888: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30393Cu;
            goto label_30393c;
        }
    }
    ctx->pc = 0x30388Cu;
label_30388c:
    // 0x30388c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x30388cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_303890:
    // 0x303890: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x303890u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_303894:
    // 0x303894: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x303894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_303898:
    // 0x303898: 0x50520028  beql        $v0, $s2, . + 4 + (0x28 << 2)
label_30389c:
    if (ctx->pc == 0x30389Cu) {
        ctx->pc = 0x30389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303898u;
        // 0x30389c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3038A0u;
        goto label_3038a0;
    }
    ctx->pc = 0x303898u;
    {
        const bool branch_taken_0x303898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x303898) {
            ctx->pc = 0x30389Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303898u;
            // 0x30389c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30393Cu;
            goto label_30393c;
        }
    }
    ctx->pc = 0x3038A0u;
label_3038a0:
    // 0x3038a0: 0xc087502  jal         func_21D408
label_3038a4:
    if (ctx->pc == 0x3038A4u) {
        ctx->pc = 0x3038A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038A0u;
        // 0x3038a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3038A8u;
        goto label_3038a8;
    }
    ctx->pc = 0x3038A0u;
    SET_GPR_U32(ctx, 31, 0x3038A8u);
    ctx->pc = 0x3038A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3038A0u;
    // 0x3038a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3038A0u, 0x3038A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3038A8u;
label_3038a8:
    // 0x3038a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3038a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3038ac:
    // 0x3038ac: 0x922202e5  lbu         $v0, 0x2E5($s1)
    ctx->pc = 0x3038acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 741)));
label_3038b0:
    // 0x3038b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3038b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3038b4:
    // 0x3038b4: 0x10520020  beq         $v0, $s2, . + 4 + (0x20 << 2)
label_3038b8:
    if (ctx->pc == 0x3038B8u) {
        ctx->pc = 0x3038B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038B4u;
        // 0x3038b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3038BCu;
        goto label_3038bc;
    }
    ctx->pc = 0x3038B4u;
    {
        const bool branch_taken_0x3038b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x3038B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038B4u;
        // 0x3038b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3038b4) {
            ctx->pc = 0x303938u;
            goto label_303938;
        }
    }
    ctx->pc = 0x3038BCu;
label_3038bc:
    // 0x3038bc: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x3038bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_3038c0:
    // 0x3038c0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3038c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3038c4:
    // 0x3038c4: 0xc0cdb38  jal         func_336CE0
label_3038c8:
    if (ctx->pc == 0x3038C8u) {
        ctx->pc = 0x3038C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038C4u;
        // 0x3038c8: 0x972021  addu        $a0, $a0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3038CCu;
        goto label_3038cc;
    }
    ctx->pc = 0x3038C4u;
    SET_GPR_U32(ctx, 31, 0x3038CCu);
    ctx->pc = 0x3038C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3038C4u;
    // 0x3038c8: 0x972021  addu        $a0, $a0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x3038C4u, 0x3038CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3038CCu;
label_3038cc:
    // 0x3038cc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3038ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3038d0:
    // 0x3038d0: 0x0  nop
    ctx->pc = 0x3038d0u;
    // NOP
label_3038d4:
    // 0x3038d4: 0x45030019  bc1tl       . + 4 + (0x19 << 2)
label_3038d8:
    if (ctx->pc == 0x3038D8u) {
        ctx->pc = 0x3038D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038D4u;
        // 0x3038d8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3038DCu;
        goto label_3038dc;
    }
    ctx->pc = 0x3038D4u;
    {
        const bool branch_taken_0x3038d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3038d4) {
            ctx->pc = 0x3038D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3038D4u;
            // 0x3038d8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30393Cu;
            goto label_30393c;
        }
    }
    ctx->pc = 0x3038DCu;
label_3038dc:
    // 0x3038dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3038dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3038e0:
    // 0x3038e0: 0xc0a3658  jal         func_28D960
label_3038e4:
    if (ctx->pc == 0x3038E4u) {
        ctx->pc = 0x3038E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038E0u;
        // 0x3038e4: 0x24050063  addiu       $a1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3038E8u;
        goto label_3038e8;
    }
    ctx->pc = 0x3038E0u;
    SET_GPR_U32(ctx, 31, 0x3038E8u);
    ctx->pc = 0x3038E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3038E0u;
    // 0x3038e4: 0x24050063  addiu       $a1, $zero, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x3038E0u, 0x3038E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3038E8u;
label_3038e8:
    // 0x3038e8: 0x54560014  bnel        $v0, $s6, . + 4 + (0x14 << 2)
label_3038ec:
    if (ctx->pc == 0x3038ECu) {
        ctx->pc = 0x3038ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038E8u;
        // 0x3038ec: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3038F0u;
        goto label_3038f0;
    }
    ctx->pc = 0x3038E8u;
    {
        const bool branch_taken_0x3038e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x3038e8) {
            ctx->pc = 0x3038ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3038E8u;
            // 0x3038ec: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30393Cu;
            goto label_30393c;
        }
    }
    ctx->pc = 0x3038F0u;
label_3038f0:
    // 0x3038f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3038f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3038f4:
    // 0x3038f4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3038f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3038f8:
    // 0x3038f8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3038f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3038fc:
    // 0x3038fc: 0x40f809  jalr        $v0
label_303900:
    if (ctx->pc == 0x303900u) {
        ctx->pc = 0x303900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038FCu;
        // 0x303900: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303904u;
        goto label_303904;
    }
    ctx->pc = 0x3038FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x303904u);
        ctx->pc = 0x303900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038FCu;
        // 0x303900: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3038FCu, 0x303904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x303904u;
label_303904:
    // 0x303904: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x303904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_303908:
    // 0x303908: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x303908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30390c:
    // 0x30390c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30390cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_303910:
    // 0x303910: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x303910u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_303914:
    // 0x303914: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x303914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_303918:
    // 0x303918: 0x40f809  jalr        $v0
label_30391c:
    if (ctx->pc == 0x30391Cu) {
        ctx->pc = 0x30391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303918u;
        // 0x30391c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303920u;
        goto label_303920;
    }
    ctx->pc = 0x303918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x303920u);
        ctx->pc = 0x30391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303918u;
        // 0x30391c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303918u, 0x303920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x303920u;
label_303920:
    // 0x303920: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x303920u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_303924:
    // 0x303924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_303928:
    // 0x303928: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x303928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30392c:
    // 0x30392c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30392cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_303930:
    // 0x303930: 0xc0b427c  jal         func_2D09F0
label_303934:
    if (ctx->pc == 0x303934u) {
        ctx->pc = 0x303934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303930u;
        // 0x303934: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x303938u;
        goto label_303938;
    }
    ctx->pc = 0x303930u;
    SET_GPR_U32(ctx, 31, 0x303938u);
    ctx->pc = 0x303934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303930u;
    // 0x303934: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D09F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D09F0u, 0x303930u, 0x303938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303938u;
label_303938:
    // 0x303938: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x303938u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_30393c:
    // 0x30393c: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x30393cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_303940:
    // 0x303940: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_303944:
    if (ctx->pc == 0x303944u) {
        ctx->pc = 0x303944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303940u;
        // 0x303944: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303948u;
        goto label_303948;
    }
    ctx->pc = 0x303940u;
    {
        const bool branch_taken_0x303940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303940u;
        // 0x303944: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303940) {
            ctx->pc = 0x303850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303850;
        }
    }
    ctx->pc = 0x303948u;
label_303948:
    // 0x303948: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x303948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_30394c:
    // 0x30394c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x30394cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_303950:
    // 0x303950: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x303950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_303954:
    // 0x303954: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x303954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_303958:
    // 0x303958: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x303958u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30395c:
    // 0x30395c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x30395cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_303960:
    // 0x303960: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x303960u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_303964:
    // 0x303964: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x303964u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_303968:
    // 0x303968: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x303968u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30396c:
    // 0x30396c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30396cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_303970:
    // 0x303970: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x303970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_303974:
    // 0x303974: 0x3e00008  jr          $ra
label_303978:
    if (ctx->pc == 0x303978u) {
        ctx->pc = 0x303978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303974u;
        // 0x303978: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30397Cu;
        goto label_30397c;
    }
    ctx->pc = 0x303974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303974u;
        // 0x303978: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30397Cu;
label_30397c:
    // 0x30397c: 0x0  nop
    ctx->pc = 0x30397cu;
    // NOP
label_303980:
    // 0x303980: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x303980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_303984:
    // 0x303984: 0x0  nop
    ctx->pc = 0x303984u;
    // NOP
    ctx->pc = 0x303988u;
}
