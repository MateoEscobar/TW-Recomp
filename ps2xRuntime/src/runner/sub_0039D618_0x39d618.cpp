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

// Function: sub_0039D618
// Address: 0x39d618 - 0x39d870
void sub_0039D618_0x39d618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039D618_0x39d618");
#endif

    switch (ctx->pc) {
        case 0x39d618u: goto label_39d618;
        case 0x39d61cu: goto label_39d61c;
        case 0x39d620u: goto label_39d620;
        case 0x39d624u: goto label_39d624;
        case 0x39d628u: goto label_39d628;
        case 0x39d62cu: goto label_39d62c;
        case 0x39d630u: goto label_39d630;
        case 0x39d634u: goto label_39d634;
        case 0x39d638u: goto label_39d638;
        case 0x39d63cu: goto label_39d63c;
        case 0x39d640u: goto label_39d640;
        case 0x39d644u: goto label_39d644;
        case 0x39d648u: goto label_39d648;
        case 0x39d64cu: goto label_39d64c;
        case 0x39d650u: goto label_39d650;
        case 0x39d654u: goto label_39d654;
        case 0x39d658u: goto label_39d658;
        case 0x39d65cu: goto label_39d65c;
        case 0x39d660u: goto label_39d660;
        case 0x39d664u: goto label_39d664;
        case 0x39d668u: goto label_39d668;
        case 0x39d66cu: goto label_39d66c;
        case 0x39d670u: goto label_39d670;
        case 0x39d674u: goto label_39d674;
        case 0x39d678u: goto label_39d678;
        case 0x39d67cu: goto label_39d67c;
        case 0x39d680u: goto label_39d680;
        case 0x39d684u: goto label_39d684;
        case 0x39d688u: goto label_39d688;
        case 0x39d68cu: goto label_39d68c;
        case 0x39d690u: goto label_39d690;
        case 0x39d694u: goto label_39d694;
        case 0x39d698u: goto label_39d698;
        case 0x39d69cu: goto label_39d69c;
        case 0x39d6a0u: goto label_39d6a0;
        case 0x39d6a4u: goto label_39d6a4;
        case 0x39d6a8u: goto label_39d6a8;
        case 0x39d6acu: goto label_39d6ac;
        case 0x39d6b0u: goto label_39d6b0;
        case 0x39d6b4u: goto label_39d6b4;
        case 0x39d6b8u: goto label_39d6b8;
        case 0x39d6bcu: goto label_39d6bc;
        case 0x39d6c0u: goto label_39d6c0;
        case 0x39d6c4u: goto label_39d6c4;
        case 0x39d6c8u: goto label_39d6c8;
        case 0x39d6ccu: goto label_39d6cc;
        case 0x39d6d0u: goto label_39d6d0;
        case 0x39d6d4u: goto label_39d6d4;
        case 0x39d6d8u: goto label_39d6d8;
        case 0x39d6dcu: goto label_39d6dc;
        case 0x39d6e0u: goto label_39d6e0;
        case 0x39d6e4u: goto label_39d6e4;
        case 0x39d6e8u: goto label_39d6e8;
        case 0x39d6ecu: goto label_39d6ec;
        case 0x39d6f0u: goto label_39d6f0;
        case 0x39d6f4u: goto label_39d6f4;
        case 0x39d6f8u: goto label_39d6f8;
        case 0x39d6fcu: goto label_39d6fc;
        case 0x39d700u: goto label_39d700;
        case 0x39d704u: goto label_39d704;
        case 0x39d708u: goto label_39d708;
        case 0x39d70cu: goto label_39d70c;
        case 0x39d710u: goto label_39d710;
        case 0x39d714u: goto label_39d714;
        case 0x39d718u: goto label_39d718;
        case 0x39d71cu: goto label_39d71c;
        case 0x39d720u: goto label_39d720;
        case 0x39d724u: goto label_39d724;
        case 0x39d728u: goto label_39d728;
        case 0x39d72cu: goto label_39d72c;
        case 0x39d730u: goto label_39d730;
        case 0x39d734u: goto label_39d734;
        case 0x39d738u: goto label_39d738;
        case 0x39d73cu: goto label_39d73c;
        case 0x39d740u: goto label_39d740;
        case 0x39d744u: goto label_39d744;
        case 0x39d748u: goto label_39d748;
        case 0x39d74cu: goto label_39d74c;
        case 0x39d750u: goto label_39d750;
        case 0x39d754u: goto label_39d754;
        case 0x39d758u: goto label_39d758;
        case 0x39d75cu: goto label_39d75c;
        case 0x39d760u: goto label_39d760;
        case 0x39d764u: goto label_39d764;
        case 0x39d768u: goto label_39d768;
        case 0x39d76cu: goto label_39d76c;
        case 0x39d770u: goto label_39d770;
        case 0x39d774u: goto label_39d774;
        case 0x39d778u: goto label_39d778;
        case 0x39d77cu: goto label_39d77c;
        case 0x39d780u: goto label_39d780;
        case 0x39d784u: goto label_39d784;
        case 0x39d788u: goto label_39d788;
        case 0x39d78cu: goto label_39d78c;
        case 0x39d790u: goto label_39d790;
        case 0x39d794u: goto label_39d794;
        case 0x39d798u: goto label_39d798;
        case 0x39d79cu: goto label_39d79c;
        case 0x39d7a0u: goto label_39d7a0;
        case 0x39d7a4u: goto label_39d7a4;
        case 0x39d7a8u: goto label_39d7a8;
        case 0x39d7acu: goto label_39d7ac;
        case 0x39d7b0u: goto label_39d7b0;
        case 0x39d7b4u: goto label_39d7b4;
        case 0x39d7b8u: goto label_39d7b8;
        case 0x39d7bcu: goto label_39d7bc;
        case 0x39d7c0u: goto label_39d7c0;
        case 0x39d7c4u: goto label_39d7c4;
        case 0x39d7c8u: goto label_39d7c8;
        case 0x39d7ccu: goto label_39d7cc;
        case 0x39d7d0u: goto label_39d7d0;
        case 0x39d7d4u: goto label_39d7d4;
        case 0x39d7d8u: goto label_39d7d8;
        case 0x39d7dcu: goto label_39d7dc;
        case 0x39d7e0u: goto label_39d7e0;
        case 0x39d7e4u: goto label_39d7e4;
        case 0x39d7e8u: goto label_39d7e8;
        case 0x39d7ecu: goto label_39d7ec;
        case 0x39d7f0u: goto label_39d7f0;
        case 0x39d7f4u: goto label_39d7f4;
        case 0x39d7f8u: goto label_39d7f8;
        case 0x39d7fcu: goto label_39d7fc;
        case 0x39d800u: goto label_39d800;
        case 0x39d804u: goto label_39d804;
        case 0x39d808u: goto label_39d808;
        case 0x39d80cu: goto label_39d80c;
        case 0x39d810u: goto label_39d810;
        case 0x39d814u: goto label_39d814;
        case 0x39d818u: goto label_39d818;
        case 0x39d81cu: goto label_39d81c;
        case 0x39d820u: goto label_39d820;
        case 0x39d824u: goto label_39d824;
        case 0x39d828u: goto label_39d828;
        case 0x39d82cu: goto label_39d82c;
        case 0x39d830u: goto label_39d830;
        case 0x39d834u: goto label_39d834;
        case 0x39d838u: goto label_39d838;
        case 0x39d83cu: goto label_39d83c;
        case 0x39d840u: goto label_39d840;
        case 0x39d844u: goto label_39d844;
        case 0x39d848u: goto label_39d848;
        case 0x39d84cu: goto label_39d84c;
        case 0x39d850u: goto label_39d850;
        case 0x39d854u: goto label_39d854;
        case 0x39d858u: goto label_39d858;
        case 0x39d85cu: goto label_39d85c;
        case 0x39d860u: goto label_39d860;
        case 0x39d864u: goto label_39d864;
        case 0x39d868u: goto label_39d868;
        case 0x39d86cu: goto label_39d86c;
        default: break;
    }

    ctx->pc = 0x39d618u;

label_39d618:
    // 0x39d618: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x39d618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_39d61c:
    // 0x39d61c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x39d61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_39d620:
    // 0x39d620: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x39d620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_39d624:
    // 0x39d624: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39d624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39d628:
    // 0x39d628: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x39d628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_39d62c:
    // 0x39d62c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39d62cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39d630:
    // 0x39d630: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x39d630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_39d634:
    // 0x39d634: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x39d634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39d638:
    // 0x39d638: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x39d638u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_39d63c:
    // 0x39d63c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x39d63cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39d640:
    // 0x39d640: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x39d640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_39d644:
    // 0x39d644: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x39d644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_39d648:
    // 0x39d648: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x39d648u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_39d64c:
    // 0x39d64c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39d650:
    // 0x39d650: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x39d650u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_39d654:
    // 0x39d654: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x39d654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_39d658:
    // 0x39d658: 0x60f809  jalr        $v1
label_39d65c:
    if (ctx->pc == 0x39D65Cu) {
        ctx->pc = 0x39D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D658u;
        // 0x39d65c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D660u;
        goto label_39d660;
    }
    ctx->pc = 0x39D658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39D660u);
        ctx->pc = 0x39D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D658u;
        // 0x39d65c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D658u, 0x39D660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D660u;
label_39d660:
    // 0x39d660: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x39d660u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39d664:
    // 0x39d664: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x39d664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_39d668:
    // 0x39d668: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39d668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39d66c:
    // 0x39d66c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x39d66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_39d670:
    // 0x39d670: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x39d670u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_39d674:
    // 0x39d674: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x39d674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_39d678:
    // 0x39d678: 0x40f809  jalr        $v0
label_39d67c:
    if (ctx->pc == 0x39D67Cu) {
        ctx->pc = 0x39D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D678u;
        // 0x39d67c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D680u;
        goto label_39d680;
    }
    ctx->pc = 0x39D678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D680u);
        ctx->pc = 0x39D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D678u;
        // 0x39d67c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D678u, 0x39D680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D680u;
label_39d680:
    // 0x39d680: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x39d680u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39d684:
    // 0x39d684: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39d684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d688:
    // 0x39d688: 0x92250020  lbu         $a1, 0x20($s1)
    ctx->pc = 0x39d688u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_39d68c:
    // 0x39d68c: 0x10a0006f  beqz        $a1, . + 4 + (0x6F << 2)
label_39d690:
    if (ctx->pc == 0x39D690u) {
        ctx->pc = 0x39D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D68Cu;
        // 0x39d690: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D694u;
        goto label_39d694;
    }
    ctx->pc = 0x39D68Cu;
    {
        const bool branch_taken_0x39d68c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D68Cu;
        // 0x39d690: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d68c) {
            ctx->pc = 0x39D84Cu;
            goto label_39d84c;
        }
    }
    ctx->pc = 0x39D694u;
label_39d694:
    // 0x39d694: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x39d694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_39d698:
    // 0x39d698: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x39d698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_39d69c:
    // 0x39d69c: 0x14500068  bne         $v0, $s0, . + 4 + (0x68 << 2)
label_39d6a0:
    if (ctx->pc == 0x39D6A0u) {
        ctx->pc = 0x39D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D69Cu;
        // 0x39d6a0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D6A4u;
        goto label_39d6a4;
    }
    ctx->pc = 0x39D69Cu;
    {
        const bool branch_taken_0x39d69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x39D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D69Cu;
        // 0x39d6a0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d69c) {
            ctx->pc = 0x39D840u;
            goto label_39d840;
        }
    }
    ctx->pc = 0x39D6A4u;
label_39d6a4:
    // 0x39d6a4: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x39d6a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_39d6a8:
    // 0x39d6a8: 0x7a440000  lq          $a0, 0x0($s2)
    ctx->pc = 0x39d6a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_39d6ac:
    // 0x39d6ac: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x39d6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_39d6b0:
    // 0x39d6b0: 0x78650020  lq          $a1, 0x20($v1)
    ctx->pc = 0x39d6b0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_39d6b4:
    // 0x39d6b4: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x39d6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
label_39d6b8:
    // 0x39d6b8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x39d6b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_39d6bc:
    // 0x39d6bc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x39d6bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39d6c0:
    // 0x39d6c0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x39d6c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d6c4:
    // 0x39d6c4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x39d6c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39d6c8:
    // 0x39d6c8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x39d6c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39d6cc:
    // 0x39d6cc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39d6ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d6d0:
    // 0x39d6d0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x39d6d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39d6d4:
    // 0x39d6d4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x39d6d4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39d6d8:
    // 0x39d6d8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39d6d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d6dc:
    // 0x39d6dc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x39d6dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39d6e0:
    // 0x39d6e0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x39d6e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39d6e4:
    // 0x39d6e4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x39d6e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39d6e8:
    // 0x39d6e8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x39d6e8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39d6ec:
    // 0x39d6ec: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x39d6ecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d6f0:
    // 0x39d6f0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x39d6f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39d6f4:
    // 0x39d6f4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x39d6f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39d6f8:
    // 0x39d6f8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x39d6f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_39d6fc:
    // 0x39d6fc: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x39d6fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_39d700:
    // 0x39d700: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x39d700u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39d704:
    // 0x39d704: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x39d704u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39d708:
    // 0x39d708: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x39d708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39d70c:
    // 0x39d70c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x39d70cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39d710:
    // 0x39d710: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x39d710u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_39d714:
    // 0x39d714: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x39d714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_39d718:
    // 0x39d718: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x39d718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_39d71c:
    // 0x39d71c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x39d71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_39d720:
    // 0x39d720: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x39d720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_39d724:
    // 0x39d724: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x39d724u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_39d728:
    // 0x39d728: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x39d728u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_39d72c:
    // 0x39d72c: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x39d72cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d730:
    // 0x39d730: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x39d730u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39d734:
    // 0x39d734: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x39d734u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39d738:
    // 0x39d738: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39d738u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d73c:
    // 0x39d73c: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x39d73cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39d740:
    // 0x39d740: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x39d740u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39d744:
    // 0x39d744: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39d744u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d748:
    // 0x39d748: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x39d748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39d74c:
    // 0x39d74c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x39d74cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39d750:
    // 0x39d750: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x39d750u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
label_39d754:
    // 0x39d754: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x39d754u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39d758:
    // 0x39d758: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x39d758u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39d75c:
    // 0x39d75c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x39d75cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39d760:
    // 0x39d760: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x39d760u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_39d764:
    // 0x39d764: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x39d764u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_39d768:
    // 0x39d768: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x39d768u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_39d76c:
    // 0x39d76c: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x39d76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_39d770:
    // 0x39d770: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x39d770u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39d774:
    // 0x39d774: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x39d774u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39d778:
    // 0x39d778: 0x4bc1006c  vsub.xyz    $vf1, $vf0, $vf1
    ctx->pc = 0x39d778u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_39d77c:
    // 0x39d77c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x39d77cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_39d780:
    // 0x39d780: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x39d780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_39d784:
    // 0x39d784: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x39d784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
label_39d788:
    // 0x39d788: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x39d788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_39d78c:
    // 0x39d78c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x39d78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_39d790:
    // 0x39d790: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x39d790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_39d794:
    // 0x39d794: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x39d794u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_39d798:
    // 0x39d798: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x39d798u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_39d79c:
    // 0x39d79c: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x39d79cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d7a0:
    // 0x39d7a0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x39d7a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39d7a4:
    // 0x39d7a4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x39d7a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_39d7a8:
    // 0x39d7a8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39d7a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d7ac:
    // 0x39d7ac: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x39d7acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_39d7b0:
    // 0x39d7b0: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x39d7b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39d7b4:
    // 0x39d7b4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39d7b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d7b8:
    // 0x39d7b8: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x39d7b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39d7bc:
    // 0x39d7bc: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x39d7bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_39d7c0:
    // 0x39d7c0: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x39d7c0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
label_39d7c4:
    // 0x39d7c4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x39d7c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_39d7c8:
    // 0x39d7c8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x39d7c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d7cc:
    // 0x39d7cc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39d7ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d7d0:
    // 0x39d7d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39d7d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d7d4:
    // 0x39d7d4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x39d7d4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_39d7d8:
    // 0x39d7d8: 0x4a0003bf  vwaitq
    ctx->pc = 0x39d7d8u;
    // VWAITQ (Q already resolved in this runtime)
label_39d7dc:
    // 0x39d7dc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x39d7dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d7e0:
    // 0x39d7e0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x39d7e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_39d7e4:
    // 0x39d7e4: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x39d7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_39d7e8:
    // 0x39d7e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39d7e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39d7ec:
    // 0x39d7ec: 0x0  nop
    ctx->pc = 0x39d7ecu;
    // NOP
label_39d7f0:
    // 0x39d7f0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x39d7f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39d7f4:
    // 0x39d7f4: 0x0  nop
    ctx->pc = 0x39d7f4u;
    // NOP
label_39d7f8:
    // 0x39d7f8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_39d7fc:
    if (ctx->pc == 0x39D7FCu) {
        ctx->pc = 0x39D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D7F8u;
        // 0x39d7fc: 0x7fa40000  sq          $a0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D800u;
        goto label_39d800;
    }
    ctx->pc = 0x39D7F8u;
    {
        const bool branch_taken_0x39d7f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D7F8u;
        // 0x39d7fc: 0x7fa40000  sq          $a0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d7f8) {
            ctx->pc = 0x39D838u;
            goto label_39d838;
        }
    }
    ctx->pc = 0x39D800u;
label_39d800:
    // 0x39d800: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x39d800u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_39d804:
    // 0x39d804: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x39d804u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d808:
    // 0x39d808: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x39d808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d80c:
    // 0x39d80c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x39d80cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d810:
    // 0x39d810: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x39d810u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_39d814:
    // 0x39d814: 0x4a0003bf  vwaitq
    ctx->pc = 0x39d814u;
    // VWAITQ (Q already resolved in this runtime)
label_39d818:
    // 0x39d818: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x39d818u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_39d81c:
    // 0x39d81c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x39d81cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_39d820:
    // 0x39d820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39d820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39d824:
    // 0x39d824: 0x0  nop
    ctx->pc = 0x39d824u;
    // NOP
label_39d828:
    // 0x39d828: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x39d828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39d82c:
    // 0x39d82c: 0x0  nop
    ctx->pc = 0x39d82cu;
    // NOP
label_39d830:
    // 0x39d830: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_39d834:
    if (ctx->pc == 0x39D834u) {
        ctx->pc = 0x39D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D830u;
        // 0x39d834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D838u;
        goto label_39d838;
    }
    ctx->pc = 0x39D830u;
    {
        const bool branch_taken_0x39d830 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D830u;
        // 0x39d834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d830) {
            ctx->pc = 0x39D850u;
            goto label_39d850;
        }
    }
    ctx->pc = 0x39D838u;
label_39d838:
    // 0x39d838: 0x10000005  b           . + 4 + (0x5 << 2)
label_39d83c:
    if (ctx->pc == 0x39D83Cu) {
        ctx->pc = 0x39D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D838u;
        // 0x39d83c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D840u;
        goto label_39d840;
    }
    ctx->pc = 0x39D838u;
    {
        const bool branch_taken_0x39d838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D838u;
        // 0x39d83c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d838) {
            ctx->pc = 0x39D850u;
            goto label_39d850;
        }
    }
    ctx->pc = 0x39D840u;
label_39d840:
    // 0x39d840: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x39d840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_39d844:
    // 0x39d844: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
label_39d848:
    if (ctx->pc == 0x39D848u) {
        ctx->pc = 0x39D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D844u;
        // 0x39d848: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D84Cu;
        goto label_39d84c;
    }
    ctx->pc = 0x39D844u;
    {
        const bool branch_taken_0x39d844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D844u;
        // 0x39d848: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d844) {
            ctx->pc = 0x39D698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d698;
        }
    }
    ctx->pc = 0x39D84Cu;
label_39d84c:
    // 0x39d84c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39d850:
    // 0x39d850: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x39d850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39d854:
    // 0x39d854: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x39d854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39d858:
    // 0x39d858: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x39d858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39d85c:
    // 0x39d85c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x39d85cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39d860:
    // 0x39d860: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x39d860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_39d864:
    // 0x39d864: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x39d864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39d868:
    // 0x39d868: 0x3e00008  jr          $ra
label_39d86c:
    if (ctx->pc == 0x39D86Cu) {
        ctx->pc = 0x39D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D868u;
        // 0x39d86c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D870u;
        goto label_fallthrough_0x39d868;
    }
    ctx->pc = 0x39D868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D868u;
        // 0x39d86c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39d868:
    ctx->pc = 0x39D870u;
}
