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

// Function: sub_0018D5F8
// Address: 0x18d5f8 - 0x18d868
void sub_0018D5F8_0x18d5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D5F8_0x18d5f8");
#endif

    switch (ctx->pc) {
        case 0x18d5f8u: goto label_18d5f8;
        case 0x18d5fcu: goto label_18d5fc;
        case 0x18d600u: goto label_18d600;
        case 0x18d604u: goto label_18d604;
        case 0x18d608u: goto label_18d608;
        case 0x18d60cu: goto label_18d60c;
        case 0x18d610u: goto label_18d610;
        case 0x18d614u: goto label_18d614;
        case 0x18d618u: goto label_18d618;
        case 0x18d61cu: goto label_18d61c;
        case 0x18d620u: goto label_18d620;
        case 0x18d624u: goto label_18d624;
        case 0x18d628u: goto label_18d628;
        case 0x18d62cu: goto label_18d62c;
        case 0x18d630u: goto label_18d630;
        case 0x18d634u: goto label_18d634;
        case 0x18d638u: goto label_18d638;
        case 0x18d63cu: goto label_18d63c;
        case 0x18d640u: goto label_18d640;
        case 0x18d644u: goto label_18d644;
        case 0x18d648u: goto label_18d648;
        case 0x18d64cu: goto label_18d64c;
        case 0x18d650u: goto label_18d650;
        case 0x18d654u: goto label_18d654;
        case 0x18d658u: goto label_18d658;
        case 0x18d65cu: goto label_18d65c;
        case 0x18d660u: goto label_18d660;
        case 0x18d664u: goto label_18d664;
        case 0x18d668u: goto label_18d668;
        case 0x18d66cu: goto label_18d66c;
        case 0x18d670u: goto label_18d670;
        case 0x18d674u: goto label_18d674;
        case 0x18d678u: goto label_18d678;
        case 0x18d67cu: goto label_18d67c;
        case 0x18d680u: goto label_18d680;
        case 0x18d684u: goto label_18d684;
        case 0x18d688u: goto label_18d688;
        case 0x18d68cu: goto label_18d68c;
        case 0x18d690u: goto label_18d690;
        case 0x18d694u: goto label_18d694;
        case 0x18d698u: goto label_18d698;
        case 0x18d69cu: goto label_18d69c;
        case 0x18d6a0u: goto label_18d6a0;
        case 0x18d6a4u: goto label_18d6a4;
        case 0x18d6a8u: goto label_18d6a8;
        case 0x18d6acu: goto label_18d6ac;
        case 0x18d6b0u: goto label_18d6b0;
        case 0x18d6b4u: goto label_18d6b4;
        case 0x18d6b8u: goto label_18d6b8;
        case 0x18d6bcu: goto label_18d6bc;
        case 0x18d6c0u: goto label_18d6c0;
        case 0x18d6c4u: goto label_18d6c4;
        case 0x18d6c8u: goto label_18d6c8;
        case 0x18d6ccu: goto label_18d6cc;
        case 0x18d6d0u: goto label_18d6d0;
        case 0x18d6d4u: goto label_18d6d4;
        case 0x18d6d8u: goto label_18d6d8;
        case 0x18d6dcu: goto label_18d6dc;
        case 0x18d6e0u: goto label_18d6e0;
        case 0x18d6e4u: goto label_18d6e4;
        case 0x18d6e8u: goto label_18d6e8;
        case 0x18d6ecu: goto label_18d6ec;
        case 0x18d6f0u: goto label_18d6f0;
        case 0x18d6f4u: goto label_18d6f4;
        case 0x18d6f8u: goto label_18d6f8;
        case 0x18d6fcu: goto label_18d6fc;
        case 0x18d700u: goto label_18d700;
        case 0x18d704u: goto label_18d704;
        case 0x18d708u: goto label_18d708;
        case 0x18d70cu: goto label_18d70c;
        case 0x18d710u: goto label_18d710;
        case 0x18d714u: goto label_18d714;
        case 0x18d718u: goto label_18d718;
        case 0x18d71cu: goto label_18d71c;
        case 0x18d720u: goto label_18d720;
        case 0x18d724u: goto label_18d724;
        case 0x18d728u: goto label_18d728;
        case 0x18d72cu: goto label_18d72c;
        case 0x18d730u: goto label_18d730;
        case 0x18d734u: goto label_18d734;
        case 0x18d738u: goto label_18d738;
        case 0x18d73cu: goto label_18d73c;
        case 0x18d740u: goto label_18d740;
        case 0x18d744u: goto label_18d744;
        case 0x18d748u: goto label_18d748;
        case 0x18d74cu: goto label_18d74c;
        case 0x18d750u: goto label_18d750;
        case 0x18d754u: goto label_18d754;
        case 0x18d758u: goto label_18d758;
        case 0x18d75cu: goto label_18d75c;
        case 0x18d760u: goto label_18d760;
        case 0x18d764u: goto label_18d764;
        case 0x18d768u: goto label_18d768;
        case 0x18d76cu: goto label_18d76c;
        case 0x18d770u: goto label_18d770;
        case 0x18d774u: goto label_18d774;
        case 0x18d778u: goto label_18d778;
        case 0x18d77cu: goto label_18d77c;
        case 0x18d780u: goto label_18d780;
        case 0x18d784u: goto label_18d784;
        case 0x18d788u: goto label_18d788;
        case 0x18d78cu: goto label_18d78c;
        case 0x18d790u: goto label_18d790;
        case 0x18d794u: goto label_18d794;
        case 0x18d798u: goto label_18d798;
        case 0x18d79cu: goto label_18d79c;
        case 0x18d7a0u: goto label_18d7a0;
        case 0x18d7a4u: goto label_18d7a4;
        case 0x18d7a8u: goto label_18d7a8;
        case 0x18d7acu: goto label_18d7ac;
        case 0x18d7b0u: goto label_18d7b0;
        case 0x18d7b4u: goto label_18d7b4;
        case 0x18d7b8u: goto label_18d7b8;
        case 0x18d7bcu: goto label_18d7bc;
        case 0x18d7c0u: goto label_18d7c0;
        case 0x18d7c4u: goto label_18d7c4;
        case 0x18d7c8u: goto label_18d7c8;
        case 0x18d7ccu: goto label_18d7cc;
        case 0x18d7d0u: goto label_18d7d0;
        case 0x18d7d4u: goto label_18d7d4;
        case 0x18d7d8u: goto label_18d7d8;
        case 0x18d7dcu: goto label_18d7dc;
        case 0x18d7e0u: goto label_18d7e0;
        case 0x18d7e4u: goto label_18d7e4;
        case 0x18d7e8u: goto label_18d7e8;
        case 0x18d7ecu: goto label_18d7ec;
        case 0x18d7f0u: goto label_18d7f0;
        case 0x18d7f4u: goto label_18d7f4;
        case 0x18d7f8u: goto label_18d7f8;
        case 0x18d7fcu: goto label_18d7fc;
        case 0x18d800u: goto label_18d800;
        case 0x18d804u: goto label_18d804;
        case 0x18d808u: goto label_18d808;
        case 0x18d80cu: goto label_18d80c;
        case 0x18d810u: goto label_18d810;
        case 0x18d814u: goto label_18d814;
        case 0x18d818u: goto label_18d818;
        case 0x18d81cu: goto label_18d81c;
        case 0x18d820u: goto label_18d820;
        case 0x18d824u: goto label_18d824;
        case 0x18d828u: goto label_18d828;
        case 0x18d82cu: goto label_18d82c;
        case 0x18d830u: goto label_18d830;
        case 0x18d834u: goto label_18d834;
        case 0x18d838u: goto label_18d838;
        case 0x18d83cu: goto label_18d83c;
        case 0x18d840u: goto label_18d840;
        case 0x18d844u: goto label_18d844;
        case 0x18d848u: goto label_18d848;
        case 0x18d84cu: goto label_18d84c;
        case 0x18d850u: goto label_18d850;
        case 0x18d854u: goto label_18d854;
        case 0x18d858u: goto label_18d858;
        case 0x18d85cu: goto label_18d85c;
        case 0x18d860u: goto label_18d860;
        case 0x18d864u: goto label_18d864;
        default: break;
    }

    ctx->pc = 0x18d5f8u;

label_18d5f8:
    // 0x18d5f8: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x18d5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_18d5fc:
    // 0x18d5fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18d600:
    // 0x18d600: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x18d600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
label_18d604:
    // 0x18d604: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x18d604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
label_18d608:
    // 0x18d608: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18d608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d60c:
    // 0x18d60c: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x18d60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
label_18d610:
    // 0x18d610: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x18d610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
label_18d614:
    // 0x18d614: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x18d614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
label_18d618:
    // 0x18d618: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x18d618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_18d61c:
    // 0x18d61c: 0xe7b70198  swc1        $f23, 0x198($sp)
    ctx->pc = 0x18d61cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_18d620:
    // 0x18d620: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x18d620u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_18d624:
    // 0x18d624: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x18d624u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_18d628:
    // 0x18d628: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x18d628u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_18d62c:
    // 0x18d62c: 0x8c46cdb8  lw          $a2, -0x3248($v0)
    ctx->pc = 0x18d62cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
label_18d630:
    // 0x18d630: 0x96050212  lhu         $a1, 0x212($s0)
    ctx->pc = 0x18d630u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
label_18d634:
    // 0x18d634: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x18d634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_18d638:
    // 0x18d638: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x18d638u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_18d63c:
    // 0x18d63c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x18d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_18d640:
    // 0x18d640: 0x40f809  jalr        $v0
label_18d644:
    if (ctx->pc == 0x18D644u) {
        ctx->pc = 0x18D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D640u;
        // 0x18d644: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D648u;
        goto label_18d648;
    }
    ctx->pc = 0x18D640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D648u);
        ctx->pc = 0x18D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D640u;
        // 0x18d644: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D640u, 0x18D648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D648u;
label_18d648:
    // 0x18d648: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18d648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d64c:
    // 0x18d64c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x18d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_18d650:
    // 0x18d650: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x18d650u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_18d654:
    // 0x18d654: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x18d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_18d658:
    // 0x18d658: 0x40f809  jalr        $v0
label_18d65c:
    if (ctx->pc == 0x18D65Cu) {
        ctx->pc = 0x18D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D658u;
        // 0x18d65c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D660u;
        goto label_18d660;
    }
    ctx->pc = 0x18D658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D660u);
        ctx->pc = 0x18D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D658u;
        // 0x18d65c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D658u, 0x18D660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D660u;
label_18d660:
    // 0x18d660: 0x50400075  beql        $v0, $zero, . + 4 + (0x75 << 2)
label_18d664:
    if (ctx->pc == 0x18D664u) {
        ctx->pc = 0x18D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D660u;
        // 0x18d664: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D668u;
        goto label_18d668;
    }
    ctx->pc = 0x18D660u;
    {
        const bool branch_taken_0x18d660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d660) {
            ctx->pc = 0x18D664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D660u;
            // 0x18d664: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D838u;
            goto label_18d838;
        }
    }
    ctx->pc = 0x18D668u;
label_18d668:
    // 0x18d668: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x18d668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_18d66c:
    // 0x18d66c: 0xc065f8a  jal         func_197E28
label_18d670:
    if (ctx->pc == 0x18D670u) {
        ctx->pc = 0x18D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D66Cu;
        // 0x18d670: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D674u;
        goto label_18d674;
    }
    ctx->pc = 0x18D66Cu;
    SET_GPR_U32(ctx, 31, 0x18D674u);
    ctx->pc = 0x18D670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D66Cu;
    // 0x18d670: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197E28u, 0x18D66Cu, 0x18D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D674u;
label_18d674:
    // 0x18d674: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x18d674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_18d678:
    // 0x18d678: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18d678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_18d67c:
    // 0x18d67c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x18d67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_18d680:
    // 0x18d680: 0x8c44ad18  lw          $a0, -0x52E8($v0)
    ctx->pc = 0x18d680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946072)));
label_18d684:
    // 0x18d684: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18d684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18d688:
    // 0x18d688: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x18d688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_18d68c:
    // 0x18d68c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x18d68cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_18d690:
    // 0x18d690: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d694:
    // 0x18d694: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x18d694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_18d698:
    // 0x18d698: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x18d698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_18d69c:
    // 0x18d69c: 0xc60101ec  lwc1        $f1, 0x1EC($s0)
    ctx->pc = 0x18d69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d6a0:
    // 0x18d6a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x18d6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18d6a4:
    // 0x18d6a4: 0x8c720010  lw          $s2, 0x10($v1)
    ctx->pc = 0x18d6a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18d6a8:
    // 0x18d6a8: 0x8c71000c  lw          $s1, 0xC($v1)
    ctx->pc = 0x18d6a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18d6ac:
    // 0x18d6ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x18d6acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18d6b0:
    // 0x18d6b0: 0x44921800  mtc1        $s2, $f3
    ctx->pc = 0x18d6b0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_18d6b4:
    // 0x18d6b4: 0x0  nop
    ctx->pc = 0x18d6b4u;
    // NOP
label_18d6b8:
    // 0x18d6b8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x18d6b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_18d6bc:
    // 0x18d6bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18d6c0:
    // 0x18d6c0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x18d6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_18d6c4:
    // 0x18d6c4: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x18d6c4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18d6c8:
    // 0x18d6c8: 0x0  nop
    ctx->pc = 0x18d6c8u;
    // NOP
label_18d6cc:
    // 0x18d6cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18d6ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18d6d0:
    // 0x18d6d0: 0x129023  negu        $s2, $s2
    ctx->pc = 0x18d6d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_18d6d4:
    // 0x18d6d4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x18d6d4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d6d8:
    // 0x18d6d8: 0x0  nop
    ctx->pc = 0x18d6d8u;
    // NOP
label_18d6dc:
    // 0x18d6dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18d6dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18d6e0:
    // 0x18d6e0: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x18d6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_18d6e4:
    // 0x18d6e4: 0x0  nop
    ctx->pc = 0x18d6e4u;
    // NOP
label_18d6e8:
    // 0x18d6e8: 0x0  nop
    ctx->pc = 0x18d6e8u;
    // NOP
label_18d6ec:
    // 0x18d6ec: 0x46032583  div.s       $f22, $f4, $f3
    ctx->pc = 0x18d6ecu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
label_18d6f0:
    // 0x18d6f0: 0x118823  negu        $s1, $s1
    ctx->pc = 0x18d6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_18d6f4:
    // 0x18d6f4: 0x0  nop
    ctx->pc = 0x18d6f4u;
    // NOP
label_18d6f8:
    // 0x18d6f8: 0x0  nop
    ctx->pc = 0x18d6f8u;
    // NOP
label_18d6fc:
    // 0x18d6fc: 0x46022543  div.s       $f21, $f4, $f2
    ctx->pc = 0x18d6fcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
label_18d700:
    // 0x18d700: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x18d700u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18d704:
    // 0x18d704: 0x4603b580  add.s       $f22, $f22, $f3
    ctx->pc = 0x18d704u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[3]);
label_18d708:
    // 0x18d708: 0x4602ad40  add.s       $f21, $f21, $f2
    ctx->pc = 0x18d708u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_18d70c:
    // 0x18d70c: 0x0  nop
    ctx->pc = 0x18d70cu;
    // NOP
label_18d710:
    // 0x18d710: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x18d710u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_18d714:
    // 0x18d714: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x18d714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
label_18d718:
    // 0x18d718: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x18d718u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
label_18d71c:
    // 0x18d71c: 0xe4a5002c  swc1        $f5, 0x2C($a1)
    ctx->pc = 0x18d71cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
label_18d720:
    // 0x18d720: 0xe4a60008  swc1        $f6, 0x8($a1)
    ctx->pc = 0x18d720u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_18d724:
    // 0x18d724: 0xe4a50018  swc1        $f5, 0x18($a1)
    ctx->pc = 0x18d724u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_18d728:
    // 0x18d728: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x18d728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_18d72c:
    // 0x18d72c: 0x481fff8  bgez        $a0, . + 4 + (-0x8 << 2)
label_18d730:
    if (ctx->pc == 0x18D730u) {
        ctx->pc = 0x18D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D72Cu;
        // 0x18d730: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D734u;
        goto label_18d734;
    }
    ctx->pc = 0x18D72Cu;
    {
        const bool branch_taken_0x18d72c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x18D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D72Cu;
        // 0x18d730: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d72c) {
            ctx->pc = 0x18D710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d710;
        }
    }
    ctx->pc = 0x18D734u;
label_18d734:
    // 0x18d734: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x18d734u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_18d738:
    // 0x18d738: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18d738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d73c:
    // 0x18d73c: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x18d73cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_18d740:
    // 0x18d740: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18d740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18d744:
    // 0x18d744: 0x40f809  jalr        $v0
label_18d748:
    if (ctx->pc == 0x18D748u) {
        ctx->pc = 0x18D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D744u;
        // 0x18d748: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D74Cu;
        goto label_18d74c;
    }
    ctx->pc = 0x18D744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D74Cu);
        ctx->pc = 0x18D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D744u;
        // 0x18d748: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D744u, 0x18D74Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D74Cu;
label_18d74c:
    // 0x18d74c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18d750:
    // 0x18d750: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18d750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_18d754:
    // 0x18d754: 0x40f809  jalr        $v0
label_18d758:
    if (ctx->pc == 0x18D758u) {
        ctx->pc = 0x18D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D754u;
        // 0x18d758: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D75Cu;
        goto label_18d75c;
    }
    ctx->pc = 0x18D754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D75Cu);
        ctx->pc = 0x18D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D754u;
        // 0x18d758: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D754u, 0x18D75Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D75Cu;
label_18d75c:
    // 0x18d75c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18d760:
    // 0x18d760: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x18d760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_18d764:
    // 0x18d764: 0x40f809  jalr        $v0
label_18d768:
    if (ctx->pc == 0x18D768u) {
        ctx->pc = 0x18D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D764u;
        // 0x18d768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D76Cu;
        goto label_18d76c;
    }
    ctx->pc = 0x18D764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D76Cu);
        ctx->pc = 0x18D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D764u;
        // 0x18d768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D764u, 0x18D76Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D76Cu;
label_18d76c:
    // 0x18d76c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18d770:
    // 0x18d770: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x18d770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_18d774:
    // 0x18d774: 0x40f809  jalr        $v0
label_18d778:
    if (ctx->pc == 0x18D778u) {
        ctx->pc = 0x18D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D774u;
        // 0x18d778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D77Cu;
        goto label_18d77c;
    }
    ctx->pc = 0x18D774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D77Cu);
        ctx->pc = 0x18D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D774u;
        // 0x18d778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D774u, 0x18D77Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D77Cu;
label_18d77c:
    // 0x18d77c: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x18d77cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_18d780:
    // 0x18d780: 0x0  nop
    ctx->pc = 0x18d780u;
    // NOP
label_18d784:
    // 0x18d784: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x18d784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_18d788:
    // 0x18d788: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x18d788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18d78c:
    // 0x18d78c: 0x4617b000  add.s       $f0, $f22, $f23
    ctx->pc = 0x18d78cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
label_18d790:
    // 0x18d790: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18d790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18d794:
    // 0x18d794: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x18d794u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18d798:
    // 0x18d798: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x18d798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18d79c:
    // 0x18d79c: 0x4614ad00  add.s       $f20, $f21, $f20
    ctx->pc = 0x18d79cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_18d7a0:
    // 0x18d7a0: 0xe7b60004  swc1        $f22, 0x4($sp)
    ctx->pc = 0x18d7a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_18d7a4:
    // 0x18d7a4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x18d7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_18d7a8:
    // 0x18d7a8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18d7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18d7ac:
    // 0x18d7ac: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x18d7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_18d7b0:
    // 0x18d7b0: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x18d7b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_18d7b4:
    // 0x18d7b4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x18d7b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_18d7b8:
    // 0x18d7b8: 0xe7b60084  swc1        $f22, 0x84($sp)
    ctx->pc = 0x18d7b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_18d7bc:
    // 0x18d7bc: 0x40f809  jalr        $v0
label_18d7c0:
    if (ctx->pc == 0x18D7C0u) {
        ctx->pc = 0x18D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7BCu;
        // 0x18d7c0: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D7C4u;
        goto label_18d7c4;
    }
    ctx->pc = 0x18D7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D7C4u);
        ctx->pc = 0x18D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7BCu;
        // 0x18d7c0: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D7BCu, 0x18D7C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D7C4u;
label_18d7c4:
    // 0x18d7c4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x18d7c4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d7c8:
    // 0x18d7c8: 0x0  nop
    ctx->pc = 0x18d7c8u;
    // NOP
label_18d7cc:
    // 0x18d7cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18d7ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18d7d0:
    // 0x18d7d0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x18d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18d7d4:
    // 0x18d7d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18d7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18d7d8:
    // 0x18d7d8: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x18d7d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_18d7dc:
    // 0x18d7dc: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x18d7dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_18d7e0:
    // 0x18d7e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x18d7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18d7e4:
    // 0x18d7e4: 0x461705c1  sub.s       $f23, $f0, $f23
    ctx->pc = 0x18d7e4u;
    ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
label_18d7e8:
    // 0x18d7e8: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x18d7e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18d7ec:
    // 0x18d7ec: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x18d7ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_18d7f0:
    // 0x18d7f0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x18d7f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_18d7f4:
    // 0x18d7f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x18d7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18d7f8:
    // 0x18d7f8: 0x4617b040  add.s       $f1, $f22, $f23
    ctx->pc = 0x18d7f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
label_18d7fc:
    // 0x18d7fc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x18d7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_18d800:
    // 0x18d800: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x18d800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_18d804:
    // 0x18d804: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x18d804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_18d808:
    // 0x18d808: 0x40f809  jalr        $v0
label_18d80c:
    if (ctx->pc == 0x18D80Cu) {
        ctx->pc = 0x18D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D808u;
        // 0x18d80c: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D810u;
        goto label_18d810;
    }
    ctx->pc = 0x18D808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D810u);
        ctx->pc = 0x18D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D808u;
        // 0x18d80c: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D808u, 0x18D810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D810u;
label_18d810:
    // 0x18d810: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18d810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18d814:
    // 0x18d814: 0xc065fb0  jal         func_197EC0
label_18d818:
    if (ctx->pc == 0x18D818u) {
        ctx->pc = 0x18D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D814u;
        // 0x18d818: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D81Cu;
        goto label_18d81c;
    }
    ctx->pc = 0x18D814u;
    SET_GPR_U32(ctx, 31, 0x18D81Cu);
    ctx->pc = 0x18D818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D814u;
    // 0x18d818: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197EC0u, 0x18D814u, 0x18D81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D81Cu;
label_18d81c:
    // 0x18d81c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x18d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_18d820:
    // 0x18d820: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x18d820u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_18d824:
    // 0x18d824: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x18d824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_18d828:
    // 0x18d828: 0x40f809  jalr        $v0
label_18d82c:
    if (ctx->pc == 0x18D82Cu) {
        ctx->pc = 0x18D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D828u;
        // 0x18d82c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D830u;
        goto label_18d830;
    }
    ctx->pc = 0x18D828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D830u);
        ctx->pc = 0x18D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D828u;
        // 0x18d82c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D828u, 0x18D830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D830u;
label_18d830:
    // 0x18d830: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x18d830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_18d834:
    // 0x18d834: 0x0  nop
    ctx->pc = 0x18d834u;
    // NOP
label_18d838:
    // 0x18d838: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x18d838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_18d83c:
    // 0x18d83c: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x18d83cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_18d840:
    // 0x18d840: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x18d840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_18d844:
    // 0x18d844: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x18d844u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_18d848:
    // 0x18d848: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x18d848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_18d84c:
    // 0x18d84c: 0xc7b70198  lwc1        $f23, 0x198($sp)
    ctx->pc = 0x18d84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_18d850:
    // 0x18d850: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x18d850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_18d854:
    // 0x18d854: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x18d854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_18d858:
    // 0x18d858: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x18d858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18d85c:
    // 0x18d85c: 0x3e00008  jr          $ra
label_18d860:
    if (ctx->pc == 0x18D860u) {
        ctx->pc = 0x18D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D85Cu;
        // 0x18d860: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D864u;
        goto label_18d864;
    }
    ctx->pc = 0x18D85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D85Cu;
        // 0x18d860: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D864u;
label_18d864:
    // 0x18d864: 0x0  nop
    ctx->pc = 0x18d864u;
    // NOP
    ctx->pc = 0x18d868u;
}
