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

// Function: sub_0029D5F0
// Address: 0x29d5f0 - 0x29d928
void sub_0029D5F0_0x29d5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D5F0_0x29d5f0");
#endif

    switch (ctx->pc) {
        case 0x29d5f0u: goto label_29d5f0;
        case 0x29d5f4u: goto label_29d5f4;
        case 0x29d5f8u: goto label_29d5f8;
        case 0x29d5fcu: goto label_29d5fc;
        case 0x29d600u: goto label_29d600;
        case 0x29d604u: goto label_29d604;
        case 0x29d608u: goto label_29d608;
        case 0x29d60cu: goto label_29d60c;
        case 0x29d610u: goto label_29d610;
        case 0x29d614u: goto label_29d614;
        case 0x29d618u: goto label_29d618;
        case 0x29d61cu: goto label_29d61c;
        case 0x29d620u: goto label_29d620;
        case 0x29d624u: goto label_29d624;
        case 0x29d628u: goto label_29d628;
        case 0x29d62cu: goto label_29d62c;
        case 0x29d630u: goto label_29d630;
        case 0x29d634u: goto label_29d634;
        case 0x29d638u: goto label_29d638;
        case 0x29d63cu: goto label_29d63c;
        case 0x29d640u: goto label_29d640;
        case 0x29d644u: goto label_29d644;
        case 0x29d648u: goto label_29d648;
        case 0x29d64cu: goto label_29d64c;
        case 0x29d650u: goto label_29d650;
        case 0x29d654u: goto label_29d654;
        case 0x29d658u: goto label_29d658;
        case 0x29d65cu: goto label_29d65c;
        case 0x29d660u: goto label_29d660;
        case 0x29d664u: goto label_29d664;
        case 0x29d668u: goto label_29d668;
        case 0x29d66cu: goto label_29d66c;
        case 0x29d670u: goto label_29d670;
        case 0x29d674u: goto label_29d674;
        case 0x29d678u: goto label_29d678;
        case 0x29d67cu: goto label_29d67c;
        case 0x29d680u: goto label_29d680;
        case 0x29d684u: goto label_29d684;
        case 0x29d688u: goto label_29d688;
        case 0x29d68cu: goto label_29d68c;
        case 0x29d690u: goto label_29d690;
        case 0x29d694u: goto label_29d694;
        case 0x29d698u: goto label_29d698;
        case 0x29d69cu: goto label_29d69c;
        case 0x29d6a0u: goto label_29d6a0;
        case 0x29d6a4u: goto label_29d6a4;
        case 0x29d6a8u: goto label_29d6a8;
        case 0x29d6acu: goto label_29d6ac;
        case 0x29d6b0u: goto label_29d6b0;
        case 0x29d6b4u: goto label_29d6b4;
        case 0x29d6b8u: goto label_29d6b8;
        case 0x29d6bcu: goto label_29d6bc;
        case 0x29d6c0u: goto label_29d6c0;
        case 0x29d6c4u: goto label_29d6c4;
        case 0x29d6c8u: goto label_29d6c8;
        case 0x29d6ccu: goto label_29d6cc;
        case 0x29d6d0u: goto label_29d6d0;
        case 0x29d6d4u: goto label_29d6d4;
        case 0x29d6d8u: goto label_29d6d8;
        case 0x29d6dcu: goto label_29d6dc;
        case 0x29d6e0u: goto label_29d6e0;
        case 0x29d6e4u: goto label_29d6e4;
        case 0x29d6e8u: goto label_29d6e8;
        case 0x29d6ecu: goto label_29d6ec;
        case 0x29d6f0u: goto label_29d6f0;
        case 0x29d6f4u: goto label_29d6f4;
        case 0x29d6f8u: goto label_29d6f8;
        case 0x29d6fcu: goto label_29d6fc;
        case 0x29d700u: goto label_29d700;
        case 0x29d704u: goto label_29d704;
        case 0x29d708u: goto label_29d708;
        case 0x29d70cu: goto label_29d70c;
        case 0x29d710u: goto label_29d710;
        case 0x29d714u: goto label_29d714;
        case 0x29d718u: goto label_29d718;
        case 0x29d71cu: goto label_29d71c;
        case 0x29d720u: goto label_29d720;
        case 0x29d724u: goto label_29d724;
        case 0x29d728u: goto label_29d728;
        case 0x29d72cu: goto label_29d72c;
        case 0x29d730u: goto label_29d730;
        case 0x29d734u: goto label_29d734;
        case 0x29d738u: goto label_29d738;
        case 0x29d73cu: goto label_29d73c;
        case 0x29d740u: goto label_29d740;
        case 0x29d744u: goto label_29d744;
        case 0x29d748u: goto label_29d748;
        case 0x29d74cu: goto label_29d74c;
        case 0x29d750u: goto label_29d750;
        case 0x29d754u: goto label_29d754;
        case 0x29d758u: goto label_29d758;
        case 0x29d75cu: goto label_29d75c;
        case 0x29d760u: goto label_29d760;
        case 0x29d764u: goto label_29d764;
        case 0x29d768u: goto label_29d768;
        case 0x29d76cu: goto label_29d76c;
        case 0x29d770u: goto label_29d770;
        case 0x29d774u: goto label_29d774;
        case 0x29d778u: goto label_29d778;
        case 0x29d77cu: goto label_29d77c;
        case 0x29d780u: goto label_29d780;
        case 0x29d784u: goto label_29d784;
        case 0x29d788u: goto label_29d788;
        case 0x29d78cu: goto label_29d78c;
        case 0x29d790u: goto label_29d790;
        case 0x29d794u: goto label_29d794;
        case 0x29d798u: goto label_29d798;
        case 0x29d79cu: goto label_29d79c;
        case 0x29d7a0u: goto label_29d7a0;
        case 0x29d7a4u: goto label_29d7a4;
        case 0x29d7a8u: goto label_29d7a8;
        case 0x29d7acu: goto label_29d7ac;
        case 0x29d7b0u: goto label_29d7b0;
        case 0x29d7b4u: goto label_29d7b4;
        case 0x29d7b8u: goto label_29d7b8;
        case 0x29d7bcu: goto label_29d7bc;
        case 0x29d7c0u: goto label_29d7c0;
        case 0x29d7c4u: goto label_29d7c4;
        case 0x29d7c8u: goto label_29d7c8;
        case 0x29d7ccu: goto label_29d7cc;
        case 0x29d7d0u: goto label_29d7d0;
        case 0x29d7d4u: goto label_29d7d4;
        case 0x29d7d8u: goto label_29d7d8;
        case 0x29d7dcu: goto label_29d7dc;
        case 0x29d7e0u: goto label_29d7e0;
        case 0x29d7e4u: goto label_29d7e4;
        case 0x29d7e8u: goto label_29d7e8;
        case 0x29d7ecu: goto label_29d7ec;
        case 0x29d7f0u: goto label_29d7f0;
        case 0x29d7f4u: goto label_29d7f4;
        case 0x29d7f8u: goto label_29d7f8;
        case 0x29d7fcu: goto label_29d7fc;
        case 0x29d800u: goto label_29d800;
        case 0x29d804u: goto label_29d804;
        case 0x29d808u: goto label_29d808;
        case 0x29d80cu: goto label_29d80c;
        case 0x29d810u: goto label_29d810;
        case 0x29d814u: goto label_29d814;
        case 0x29d818u: goto label_29d818;
        case 0x29d81cu: goto label_29d81c;
        case 0x29d820u: goto label_29d820;
        case 0x29d824u: goto label_29d824;
        case 0x29d828u: goto label_29d828;
        case 0x29d82cu: goto label_29d82c;
        case 0x29d830u: goto label_29d830;
        case 0x29d834u: goto label_29d834;
        case 0x29d838u: goto label_29d838;
        case 0x29d83cu: goto label_29d83c;
        case 0x29d840u: goto label_29d840;
        case 0x29d844u: goto label_29d844;
        case 0x29d848u: goto label_29d848;
        case 0x29d84cu: goto label_29d84c;
        case 0x29d850u: goto label_29d850;
        case 0x29d854u: goto label_29d854;
        case 0x29d858u: goto label_29d858;
        case 0x29d85cu: goto label_29d85c;
        case 0x29d860u: goto label_29d860;
        case 0x29d864u: goto label_29d864;
        case 0x29d868u: goto label_29d868;
        case 0x29d86cu: goto label_29d86c;
        case 0x29d870u: goto label_29d870;
        case 0x29d874u: goto label_29d874;
        case 0x29d878u: goto label_29d878;
        case 0x29d87cu: goto label_29d87c;
        case 0x29d880u: goto label_29d880;
        case 0x29d884u: goto label_29d884;
        case 0x29d888u: goto label_29d888;
        case 0x29d88cu: goto label_29d88c;
        case 0x29d890u: goto label_29d890;
        case 0x29d894u: goto label_29d894;
        case 0x29d898u: goto label_29d898;
        case 0x29d89cu: goto label_29d89c;
        case 0x29d8a0u: goto label_29d8a0;
        case 0x29d8a4u: goto label_29d8a4;
        case 0x29d8a8u: goto label_29d8a8;
        case 0x29d8acu: goto label_29d8ac;
        case 0x29d8b0u: goto label_29d8b0;
        case 0x29d8b4u: goto label_29d8b4;
        case 0x29d8b8u: goto label_29d8b8;
        case 0x29d8bcu: goto label_29d8bc;
        case 0x29d8c0u: goto label_29d8c0;
        case 0x29d8c4u: goto label_29d8c4;
        case 0x29d8c8u: goto label_29d8c8;
        case 0x29d8ccu: goto label_29d8cc;
        case 0x29d8d0u: goto label_29d8d0;
        case 0x29d8d4u: goto label_29d8d4;
        case 0x29d8d8u: goto label_29d8d8;
        case 0x29d8dcu: goto label_29d8dc;
        case 0x29d8e0u: goto label_29d8e0;
        case 0x29d8e4u: goto label_29d8e4;
        case 0x29d8e8u: goto label_29d8e8;
        case 0x29d8ecu: goto label_29d8ec;
        case 0x29d8f0u: goto label_29d8f0;
        case 0x29d8f4u: goto label_29d8f4;
        case 0x29d8f8u: goto label_29d8f8;
        case 0x29d8fcu: goto label_29d8fc;
        case 0x29d900u: goto label_29d900;
        case 0x29d904u: goto label_29d904;
        case 0x29d908u: goto label_29d908;
        case 0x29d90cu: goto label_29d90c;
        case 0x29d910u: goto label_29d910;
        case 0x29d914u: goto label_29d914;
        case 0x29d918u: goto label_29d918;
        case 0x29d91cu: goto label_29d91c;
        case 0x29d920u: goto label_29d920;
        case 0x29d924u: goto label_29d924;
        default: break;
    }

    ctx->pc = 0x29d5f0u;

label_29d5f0:
    // 0x29d5f0: 0x27bdf2d0  addiu       $sp, $sp, -0xD30
    ctx->pc = 0x29d5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963920));
label_29d5f4:
    // 0x29d5f4: 0x7fb20cf0  sq          $s2, 0xCF0($sp)
    ctx->pc = 0x29d5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3312), GPR_VEC(ctx, 18));
label_29d5f8:
    // 0x29d5f8: 0x7fb50cc0  sq          $s5, 0xCC0($sp)
    ctx->pc = 0x29d5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3264), GPR_VEC(ctx, 21));
label_29d5fc:
    // 0x29d5fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29d5fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d600:
    // 0x29d600: 0x7fb00d10  sq          $s0, 0xD10($sp)
    ctx->pc = 0x29d600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3344), GPR_VEC(ctx, 16));
label_29d604:
    // 0x29d604: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29d604u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29d608:
    // 0x29d608: 0x7fb10d00  sq          $s1, 0xD00($sp)
    ctx->pc = 0x29d608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3328), GPR_VEC(ctx, 17));
label_29d60c:
    // 0x29d60c: 0x7fb30ce0  sq          $s3, 0xCE0($sp)
    ctx->pc = 0x29d60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3296), GPR_VEC(ctx, 19));
label_29d610:
    // 0x29d610: 0x7fb40cd0  sq          $s4, 0xCD0($sp)
    ctx->pc = 0x29d610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3280), GPR_VEC(ctx, 20));
label_29d614:
    // 0x29d614: 0x7fb60cb0  sq          $s6, 0xCB0($sp)
    ctx->pc = 0x29d614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3248), GPR_VEC(ctx, 22));
label_29d618:
    // 0x29d618: 0x7fb70ca0  sq          $s7, 0xCA0($sp)
    ctx->pc = 0x29d618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3232), GPR_VEC(ctx, 23));
label_29d61c:
    // 0x29d61c: 0x7fbe0c90  sq          $fp, 0xC90($sp)
    ctx->pc = 0x29d61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3216), GPR_VEC(ctx, 30));
label_29d620:
    // 0x29d620: 0xffbf0c80  sd          $ra, 0xC80($sp)
    ctx->pc = 0x29d620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3200), GPR_U64(ctx, 31));
label_29d624:
    // 0x29d624: 0xe7b40d20  swc1        $f20, 0xD20($sp)
    ctx->pc = 0x29d624u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3360), bits); }
label_29d628:
    // 0x29d628: 0xafa50c68  sw          $a1, 0xC68($sp)
    ctx->pc = 0x29d628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3176), GPR_U32(ctx, 5));
label_29d62c:
    // 0x29d62c: 0xafa70c6c  sw          $a3, 0xC6C($sp)
    ctx->pc = 0x29d62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3180), GPR_U32(ctx, 7));
label_29d630:
    // 0x29d630: 0xafa80c70  sw          $t0, 0xC70($sp)
    ctx->pc = 0x29d630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3184), GPR_U32(ctx, 8));
label_29d634:
    // 0x29d634: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
label_29d638:
    if (ctx->pc == 0x29D638u) {
        ctx->pc = 0x29D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D634u;
        // 0x29d638: 0xafaa0c74  sw          $t2, 0xC74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 3188), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D63Cu;
        goto label_29d63c;
    }
    ctx->pc = 0x29D634u;
    {
        const bool branch_taken_0x29d634 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D634u;
        // 0x29d638: 0xafaa0c74  sw          $t2, 0xC74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 3188), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d634) {
            ctx->pc = 0x29D650u;
            goto label_29d650;
        }
    }
    ctx->pc = 0x29D63Cu;
label_29d63c:
    // 0x29d63c: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x29d63cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_29d640:
    // 0x29d640: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x29d640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_29d644:
    // 0x29d644: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x29d644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_29d648:
    // 0x29d648: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29d648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_29d64c:
    // 0x29d64c: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x29d64cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29d650:
    // 0x29d650: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x29d650u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_29d654:
    // 0x29d654: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x29d654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_29d658:
    // 0x29d658: 0x8c662c7c  lw          $a2, 0x2C7C($v1)
    ctx->pc = 0x29d658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_29d65c:
    // 0x29d65c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x29d65cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_29d660:
    // 0x29d660: 0x7fa20c00  sq          $v0, 0xC00($sp)
    ctx->pc = 0x29d660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3072), GPR_VEC(ctx, 2));
label_29d664:
    // 0x29d664: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x29d664u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_29d668:
    // 0x29d668: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29d668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29d66c:
    // 0x29d66c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29d66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d670:
    // 0x29d670: 0x8cc40840  lw          $a0, 0x840($a2)
    ctx->pc = 0x29d670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2112)));
label_29d674:
    // 0x29d674: 0x27a80c00  addiu       $t0, $sp, 0xC00
    ctx->pc = 0x29d674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3072));
label_29d678:
    // 0x29d678: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x29d678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_29d67c:
    // 0x29d67c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x29d67cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_29d680:
    // 0x29d680: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x29d680u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_29d684:
    // 0x29d684: 0xc0e6a14  jal         func_39A850
label_29d688:
    if (ctx->pc == 0x29D688u) {
        ctx->pc = 0x29D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D684u;
        // 0x29d688: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D68Cu;
        goto label_29d68c;
    }
    ctx->pc = 0x29D684u;
    SET_GPR_U32(ctx, 31, 0x29D68Cu);
    ctx->pc = 0x29D688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D684u;
    // 0x29d688: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A850u, 0x29D684u, 0x29D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D68Cu;
label_29d68c:
    // 0x29d68c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x29d68cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d690:
    // 0x29d690: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29d690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29d694:
    // 0x29d694: 0xc0e1a34  jal         func_3868D0
label_29d698:
    if (ctx->pc == 0x29D698u) {
        ctx->pc = 0x29D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D694u;
        // 0x29d698: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D69Cu;
        goto label_29d69c;
    }
    ctx->pc = 0x29D694u;
    SET_GPR_U32(ctx, 31, 0x29D69Cu);
    ctx->pc = 0x29D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D694u;
    // 0x29d698: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x29D694u, 0x29D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D69Cu;
label_29d69c:
    // 0x29d69c: 0xc087502  jal         func_21D408
label_29d6a0:
    if (ctx->pc == 0x29D6A0u) {
        ctx->pc = 0x29D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D69Cu;
        // 0x29d6a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D6A4u;
        goto label_29d6a4;
    }
    ctx->pc = 0x29D69Cu;
    SET_GPR_U32(ctx, 31, 0x29D6A4u);
    ctx->pc = 0x29D6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D69Cu;
    // 0x29d6a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29D69Cu, 0x29D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D6A4u;
label_29d6a4:
    // 0x29d6a4: 0x12e00092  beqz        $s7, . + 4 + (0x92 << 2)
label_29d6a8:
    if (ctx->pc == 0x29D6A8u) {
        ctx->pc = 0x29D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6A4u;
        // 0x29d6a8: 0x8c56020c  lw          $s6, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D6ACu;
        goto label_29d6ac;
    }
    ctx->pc = 0x29D6A4u;
    {
        const bool branch_taken_0x29d6a4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6A4u;
        // 0x29d6a8: 0x8c56020c  lw          $s6, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d6a4) {
            ctx->pc = 0x29D8F0u;
            goto label_29d8f0;
        }
    }
    ctx->pc = 0x29D6ACu;
label_29d6ac:
    // 0x29d6ac: 0x26420090  addiu       $v0, $s2, 0x90
    ctx->pc = 0x29d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_29d6b0:
    // 0x29d6b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29d6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_29d6b4:
    // 0x29d6b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x29d6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_29d6b8:
    // 0x29d6b8: 0xafa20c78  sw          $v0, 0xC78($sp)
    ctx->pc = 0x29d6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3192), GPR_U32(ctx, 2));
label_29d6bc:
    // 0x29d6bc: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x29d6bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d6c0:
    // 0x29d6c0: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x29d6c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29d6c4:
    // 0x29d6c4: 0x0  nop
    ctx->pc = 0x29d6c4u;
    // NOP
label_29d6c8:
    // 0x29d6c8: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x29d6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_29d6cc:
    // 0x29d6cc: 0xc0e53c8  jal         func_394F20
label_29d6d0:
    if (ctx->pc == 0x29D6D0u) {
        ctx->pc = 0x29D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6CCu;
        // 0x29d6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D6D4u;
        goto label_29d6d4;
    }
    ctx->pc = 0x29D6CCu;
    SET_GPR_U32(ctx, 31, 0x29D6D4u);
    ctx->pc = 0x29D6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D6CCu;
    // 0x29d6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F20u, 0x29D6CCu, 0x29D6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D6D4u;
label_29d6d4:
    // 0x29d6d4: 0x505e0083  beql        $v0, $fp, . + 4 + (0x83 << 2)
label_29d6d8:
    if (ctx->pc == 0x29D6D8u) {
        ctx->pc = 0x29D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6D4u;
        // 0x29d6d8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D6DCu;
        goto label_29d6dc;
    }
    ctx->pc = 0x29D6D4u;
    {
        const bool branch_taken_0x29d6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        if (branch_taken_0x29d6d4) {
            ctx->pc = 0x29D6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D6D4u;
            // 0x29d6d8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D8E4u;
            goto label_29d8e4;
        }
    }
    ctx->pc = 0x29D6DCu;
label_29d6dc:
    // 0x29d6dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29d6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29d6e0:
    // 0x29d6e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x29d6e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_29d6e4:
    // 0x29d6e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x29d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_29d6e8:
    // 0x29d6e8: 0x40f809  jalr        $v0
label_29d6ec:
    if (ctx->pc == 0x29D6ECu) {
        ctx->pc = 0x29D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6E8u;
        // 0x29d6ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D6F0u;
        goto label_29d6f0;
    }
    ctx->pc = 0x29D6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29D6F0u);
        ctx->pc = 0x29D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6E8u;
        // 0x29d6ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D6E8u, 0x29D6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D6F0u;
label_29d6f0:
    // 0x29d6f0: 0x21683  sra         $v0, $v0, 26
    ctx->pc = 0x29d6f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 26));
label_29d6f4:
    // 0x29d6f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29d6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_29d6f8:
    // 0x29d6f8: 0x505e007a  beql        $v0, $fp, . + 4 + (0x7A << 2)
label_29d6fc:
    if (ctx->pc == 0x29D6FCu) {
        ctx->pc = 0x29D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6F8u;
        // 0x29d6fc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D700u;
        goto label_29d700;
    }
    ctx->pc = 0x29D6F8u;
    {
        const bool branch_taken_0x29d6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        if (branch_taken_0x29d6f8) {
            ctx->pc = 0x29D6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D6F8u;
            // 0x29d6fc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D8E4u;
            goto label_29d8e4;
        }
    }
    ctx->pc = 0x29D700u;
label_29d700:
    // 0x29d700: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x29d700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_29d704:
    // 0x29d704: 0x14560007  bne         $v0, $s6, . + 4 + (0x7 << 2)
label_29d708:
    if (ctx->pc == 0x29D708u) {
        ctx->pc = 0x29D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D704u;
        // 0x29d708: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D70Cu;
        goto label_29d70c;
    }
    ctx->pc = 0x29D704u;
    {
        const bool branch_taken_0x29d704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x29D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D704u;
        // 0x29d708: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d704) {
            ctx->pc = 0x29D724u;
            goto label_29d724;
        }
    }
    ctx->pc = 0x29D70Cu;
label_29d70c:
    // 0x29d70c: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x29d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_29d710:
    // 0x29d710: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x29d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_29d714:
    // 0x29d714: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x29d714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_29d718:
    // 0x29d718: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x29d718u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_29d71c:
    // 0x29d71c: 0x54600071  bnel        $v1, $zero, . + 4 + (0x71 << 2)
label_29d720:
    if (ctx->pc == 0x29D720u) {
        ctx->pc = 0x29D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D71Cu;
        // 0x29d720: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D724u;
        goto label_29d724;
    }
    ctx->pc = 0x29D71Cu;
    {
        const bool branch_taken_0x29d71c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d71c) {
            ctx->pc = 0x29D720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D71Cu;
            // 0x29d720: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D8E4u;
            goto label_29d8e4;
        }
    }
    ctx->pc = 0x29D724u;
label_29d724:
    // 0x29d724: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_29d728:
    if (ctx->pc == 0x29D728u) {
        ctx->pc = 0x29D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D724u;
        // 0x29d728: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D72Cu;
        goto label_29d72c;
    }
    ctx->pc = 0x29D724u;
    {
        const bool branch_taken_0x29d724 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D724u;
        // 0x29d728: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d724) {
            ctx->pc = 0x29D748u;
            goto label_29d748;
        }
    }
    ctx->pc = 0x29D72Cu;
label_29d72c:
    // 0x29d72c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x29d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_29d730:
    // 0x29d730: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x29d730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_29d734:
    // 0x29d734: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x29d734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_29d738:
    // 0x29d738: 0x40f809  jalr        $v0
label_29d73c:
    if (ctx->pc == 0x29D73Cu) {
        ctx->pc = 0x29D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D738u;
        // 0x29d73c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D740u;
        goto label_29d740;
    }
    ctx->pc = 0x29D738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29D740u);
        ctx->pc = 0x29D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D738u;
        // 0x29d73c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D738u, 0x29D740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D740u;
label_29d740:
    // 0x29d740: 0x50400068  beql        $v0, $zero, . + 4 + (0x68 << 2)
label_29d744:
    if (ctx->pc == 0x29D744u) {
        ctx->pc = 0x29D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D740u;
        // 0x29d744: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D748u;
        goto label_29d748;
    }
    ctx->pc = 0x29D740u;
    {
        const bool branch_taken_0x29d740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d740) {
            ctx->pc = 0x29D744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D740u;
            // 0x29d744: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D8E4u;
            goto label_29d8e4;
        }
    }
    ctx->pc = 0x29D748u;
label_29d748:
    // 0x29d748: 0x824301b0  lb          $v1, 0x1B0($s2)
    ctx->pc = 0x29d748u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_29d74c:
    // 0x29d74c: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x29d74cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_29d750:
    // 0x29d750: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x29d750u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_29d754:
    // 0x29d754: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_29d758:
    if (ctx->pc == 0x29D758u) {
        ctx->pc = 0x29D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D754u;
        // 0x29d758: 0x7fa20c10  sq          $v0, 0xC10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 3088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D75Cu;
        goto label_29d75c;
    }
    ctx->pc = 0x29D754u;
    {
        const bool branch_taken_0x29d754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D754u;
        // 0x29d758: 0x7fa20c10  sq          $v0, 0xC10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 3088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d754) {
            ctx->pc = 0x29D798u;
            goto label_29d798;
        }
    }
    ctx->pc = 0x29D75Cu;
label_29d75c:
    // 0x29d75c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x29d75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_29d760:
    // 0x29d760: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x29d760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_29d764:
    // 0x29d764: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29d764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29d768:
    // 0x29d768: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_29d76c:
    // 0x29d76c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x29d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_29d770:
    // 0x29d770: 0x27a50c10  addiu       $a1, $sp, 0xC10
    ctx->pc = 0x29d770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3088));
label_29d774:
    // 0x29d774: 0x27a60c60  addiu       $a2, $sp, 0xC60
    ctx->pc = 0x29d774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3168));
label_29d778:
    // 0x29d778: 0xc1067b8  jal         func_419EE0
label_29d77c:
    if (ctx->pc == 0x29D77Cu) {
        ctx->pc = 0x29D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D778u;
        // 0x29d77c: 0xe7a00c60  swc1        $f0, 0xC60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D780u;
        goto label_29d780;
    }
    ctx->pc = 0x29D778u;
    SET_GPR_U32(ctx, 31, 0x29D780u);
    ctx->pc = 0x29D77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D778u;
    // 0x29d77c: 0xe7a00c60  swc1        $f0, 0xC60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x29D778u, 0x29D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D780u;
label_29d780:
    // 0x29d780: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29d784:
    if (ctx->pc == 0x29D784u) {
        ctx->pc = 0x29D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D780u;
        // 0x29d784: 0xc7a00c60  lwc1        $f0, 0xC60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D788u;
        goto label_29d788;
    }
    ctx->pc = 0x29D780u;
    {
        const bool branch_taken_0x29d780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D780u;
        // 0x29d784: 0xc7a00c60  lwc1        $f0, 0xC60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d780) {
            ctx->pc = 0x29D798u;
            goto label_29d798;
        }
    }
    ctx->pc = 0x29D788u;
label_29d788:
    // 0x29d788: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x29d788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29d78c:
    // 0x29d78c: 0x0  nop
    ctx->pc = 0x29d78cu;
    // NOP
label_29d790:
    // 0x29d790: 0x45030054  bc1tl       . + 4 + (0x54 << 2)
label_29d794:
    if (ctx->pc == 0x29D794u) {
        ctx->pc = 0x29D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D790u;
        // 0x29d794: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D798u;
        goto label_29d798;
    }
    ctx->pc = 0x29D790u;
    {
        const bool branch_taken_0x29d790 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d790) {
            ctx->pc = 0x29D794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D790u;
            // 0x29d794: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D8E4u;
            goto label_29d8e4;
        }
    }
    ctx->pc = 0x29D798u;
label_29d798:
    // 0x29d798: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x29d798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d79c:
    // 0x29d79c: 0x8fa30c68  lw          $v1, 0xC68($sp)
    ctx->pc = 0x29d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3176)));
label_29d7a0:
    // 0x29d7a0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_29d7a4:
    if (ctx->pc == 0x29D7A4u) {
        ctx->pc = 0x29D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7A0u;
        // 0x29d7a4: 0xafb10c64  sw          $s1, 0xC64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 3172), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D7A8u;
        goto label_29d7a8;
    }
    ctx->pc = 0x29D7A0u;
    {
        const bool branch_taken_0x29d7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7A0u;
        // 0x29d7a4: 0xafb10c64  sw          $s1, 0xC64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 3172), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d7a0) {
            ctx->pc = 0x29D7C8u;
            goto label_29d7c8;
        }
    }
    ctx->pc = 0x29D7A8u;
label_29d7a8:
    // 0x29d7a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29d7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29d7ac:
    // 0x29d7ac: 0x27a50c10  addiu       $a1, $sp, 0xC10
    ctx->pc = 0x29d7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3088));
label_29d7b0:
    // 0x29d7b0: 0x27a60c64  addiu       $a2, $sp, 0xC64
    ctx->pc = 0x29d7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3172));
label_29d7b4:
    // 0x29d7b4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x29d7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_29d7b8:
    // 0x29d7b8: 0xc0888dc  jal         func_222370
label_29d7bc:
    if (ctx->pc == 0x29D7BCu) {
        ctx->pc = 0x29D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7B8u;
        // 0x29d7bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D7C0u;
        goto label_29d7c0;
    }
    ctx->pc = 0x29D7B8u;
    SET_GPR_U32(ctx, 31, 0x29D7C0u);
    ctx->pc = 0x29D7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D7B8u;
    // 0x29d7bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222370u, 0x29D7B8u, 0x29D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D7C0u;
label_29d7c0:
    // 0x29d7c0: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
label_29d7c4:
    if (ctx->pc == 0x29D7C4u) {
        ctx->pc = 0x29D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7C0u;
        // 0x29d7c4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D7C8u;
        goto label_29d7c8;
    }
    ctx->pc = 0x29D7C0u;
    {
        const bool branch_taken_0x29d7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d7c0) {
            ctx->pc = 0x29D7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D7C0u;
            // 0x29d7c4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D8E4u;
            goto label_29d8e4;
        }
    }
    ctx->pc = 0x29D7C8u;
label_29d7c8:
    // 0x29d7c8: 0x8fa20c74  lw          $v0, 0xC74($sp)
    ctx->pc = 0x29d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3188)));
label_29d7cc:
    // 0x29d7cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_29d7d0:
    if (ctx->pc == 0x29D7D0u) {
        ctx->pc = 0x29D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7CCu;
        // 0x29d7d0: 0x8fa30c70  lw          $v1, 0xC70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D7D4u;
        goto label_29d7d4;
    }
    ctx->pc = 0x29D7CCu;
    {
        const bool branch_taken_0x29d7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7CCu;
        // 0x29d7d0: 0x8fa30c70  lw          $v1, 0xC70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d7cc) {
            ctx->pc = 0x29D7E4u;
            goto label_29d7e4;
        }
    }
    ctx->pc = 0x29D7D4u;
label_29d7d4:
    // 0x29d7d4: 0x8fa30c64  lw          $v1, 0xC64($sp)
    ctx->pc = 0x29d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3172)));
label_29d7d8:
    // 0x29d7d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29d7dc:
    // 0x29d7dc: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
label_29d7e0:
    if (ctx->pc == 0x29D7E0u) {
        ctx->pc = 0x29D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7DCu;
        // 0x29d7e0: 0x8fa30c70  lw          $v1, 0xC70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D7E4u;
        goto label_29d7e4;
    }
    ctx->pc = 0x29D7DCu;
    {
        const bool branch_taken_0x29d7dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7DCu;
        // 0x29d7e0: 0x8fa30c70  lw          $v1, 0xC70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d7dc) {
            ctx->pc = 0x29D8E0u;
            goto label_29d8e0;
        }
    }
    ctx->pc = 0x29D7E4u;
label_29d7e4:
    // 0x29d7e4: 0x14710034  bne         $v1, $s1, . + 4 + (0x34 << 2)
label_29d7e8:
    if (ctx->pc == 0x29D7E8u) {
        ctx->pc = 0x29D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7E4u;
        // 0x29d7e8: 0x8fa30c6c  lw          $v1, 0xC6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D7ECu;
        goto label_29d7ec;
    }
    ctx->pc = 0x29D7E4u;
    {
        const bool branch_taken_0x29d7e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x29D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7E4u;
        // 0x29d7e8: 0x8fa30c6c  lw          $v1, 0xC6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d7e4) {
            ctx->pc = 0x29D8B8u;
            goto label_29d8b8;
        }
    }
    ctx->pc = 0x29D7ECu;
label_29d7ec:
    // 0x29d7ec: 0x7ba20c10  lq          $v0, 0xC10($sp)
    ctx->pc = 0x29d7ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 3088)));
label_29d7f0:
    // 0x29d7f0: 0x7ba30c00  lq          $v1, 0xC00($sp)
    ctx->pc = 0x29d7f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 3072)));
label_29d7f4:
    // 0x29d7f4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29d7f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_29d7f8:
    // 0x29d7f8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x29d7f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29d7fc:
    // 0x29d7fc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29d7fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29d800:
    // 0x29d800: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29d800u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_29d804:
    // 0x29d804: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x29d804u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_29d808:
    // 0x29d808: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_29d80c:
    // 0x29d80c: 0x7fa30c30  sq          $v1, 0xC30($sp)
    ctx->pc = 0x29d80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3120), GPR_VEC(ctx, 3));
label_29d810:
    // 0x29d810: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x29d810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
label_29d814:
    // 0x29d814: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29d814u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_29d818:
    // 0x29d818: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x29d818u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29d81c:
    // 0x29d81c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x29d81cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29d820:
    // 0x29d820: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x29d820u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29d824:
    // 0x29d824: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x29d824u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_29d828:
    // 0x29d828: 0x4a0003bf  vwaitq
    ctx->pc = 0x29d828u;
    // VWAITQ (Q already resolved in this runtime)
label_29d82c:
    // 0x29d82c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x29d82cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_29d830:
    // 0x29d830: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x29d830u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_29d834:
    // 0x29d834: 0x7fa30c40  sq          $v1, 0xC40($sp)
    ctx->pc = 0x29d834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3136), GPR_VEC(ctx, 3));
label_29d838:
    // 0x29d838: 0x7fa20c30  sq          $v0, 0xC30($sp)
    ctx->pc = 0x29d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3120), GPR_VEC(ctx, 2));
label_29d83c:
    // 0x29d83c: 0x7fa30c50  sq          $v1, 0xC50($sp)
    ctx->pc = 0x29d83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3152), GPR_VEC(ctx, 3));
label_29d840:
    // 0x29d840: 0x96050112  lhu         $a1, 0x112($s0)
    ctx->pc = 0x29d840u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
label_29d844:
    // 0x29d844: 0xc0e44cc  jal         func_391330
label_29d848:
    if (ctx->pc == 0x29D848u) {
        ctx->pc = 0x29D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D844u;
        // 0x29d848: 0x7fa20c40  sq          $v0, 0xC40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 3136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D84Cu;
        goto label_29d84c;
    }
    ctx->pc = 0x29D844u;
    SET_GPR_U32(ctx, 31, 0x29D84Cu);
    ctx->pc = 0x29D848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D844u;
    // 0x29d848: 0x7fa20c40  sq          $v0, 0xC40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 3136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x29D844u, 0x29D84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D84Cu;
label_29d84c:
    // 0x29d84c: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x29d84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29d850:
    // 0x29d850: 0x27a40c10  addiu       $a0, $sp, 0xC10
    ctx->pc = 0x29d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3088));
label_29d854:
    // 0x29d854: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x29d854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29d858:
    // 0x29d858: 0x27a50c30  addiu       $a1, $sp, 0xC30
    ctx->pc = 0x29d858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3120));
label_29d85c:
    // 0x29d85c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29d85cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29d860:
    // 0x29d860: 0x0  nop
    ctx->pc = 0x29d860u;
    // NOP
label_29d864:
    // 0x29d864: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_29d868:
    if (ctx->pc == 0x29D868u) {
        ctx->pc = 0x29D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D864u;
        // 0x29d868: 0x27b10c20  addiu       $s1, $sp, 0xC20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 3104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D86Cu;
        goto label_29d86c;
    }
    ctx->pc = 0x29D864u;
    {
        const bool branch_taken_0x29d864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D864u;
        // 0x29d868: 0x27b10c20  addiu       $s1, $sp, 0xC20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 3104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d864) {
            ctx->pc = 0x29D870u;
            goto label_29d870;
        }
    }
    ctx->pc = 0x29D86Cu;
label_29d86c:
    // 0x29d86c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x29d86cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_29d870:
    // 0x29d870: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x29d870u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_29d874:
    // 0x29d874: 0xc094904  jal         func_252410
label_29d878:
    if (ctx->pc == 0x29D878u) {
        ctx->pc = 0x29D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D874u;
        // 0x29d878: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D87Cu;
        goto label_29d87c;
    }
    ctx->pc = 0x29D874u;
    SET_GPR_U32(ctx, 31, 0x29D87Cu);
    ctx->pc = 0x29D878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D874u;
    // 0x29d878: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x29D874u, 0x29D87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D87Cu;
label_29d87c:
    // 0x29d87c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_29d880:
    if (ctx->pc == 0x29D880u) {
        ctx->pc = 0x29D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D87Cu;
        // 0x29d880: 0x8fa30c78  lw          $v1, 0xC78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D884u;
        goto label_29d884;
    }
    ctx->pc = 0x29D87Cu;
    {
        const bool branch_taken_0x29d87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D87Cu;
        // 0x29d880: 0x8fa30c78  lw          $v1, 0xC78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d87c) {
            ctx->pc = 0x29D8E0u;
            goto label_29d8e0;
        }
    }
    ctx->pc = 0x29D884u;
label_29d884:
    // 0x29d884: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x29d884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_29d888:
    // 0x29d888: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x29d888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_29d88c:
    // 0x29d88c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29d88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29d890:
    // 0x29d890: 0x84640002  lh          $a0, 0x2($v1)
    ctx->pc = 0x29d890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_29d894:
    // 0x29d894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29d894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d898:
    // 0x29d898: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29d898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d89c:
    // 0x29d89c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x29d89cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d8a0:
    // 0x29d8a0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x29d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_29d8a4:
    // 0x29d8a4: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x29d8a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_29d8a8:
    // 0x29d8a8: 0xc09381e  jal         func_24E078
label_29d8ac:
    if (ctx->pc == 0x29D8ACu) {
        ctx->pc = 0x29D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8A8u;
        // 0x29d8ac: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D8B0u;
        goto label_29d8b0;
    }
    ctx->pc = 0x29D8A8u;
    SET_GPR_U32(ctx, 31, 0x29D8B0u);
    ctx->pc = 0x29D8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D8A8u;
    // 0x29d8ac: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x29D8A8u, 0x29D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8B0u;
label_29d8b0:
    // 0x29d8b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_29d8b4:
    if (ctx->pc == 0x29D8B4u) {
        ctx->pc = 0x29D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8B0u;
        // 0x29d8b4: 0x8fa30c6c  lw          $v1, 0xC6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D8B8u;
        goto label_29d8b8;
    }
    ctx->pc = 0x29D8B0u;
    {
        const bool branch_taken_0x29d8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8B0u;
        // 0x29d8b4: 0x8fa30c6c  lw          $v1, 0xC6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d8b0) {
            ctx->pc = 0x29D8E0u;
            goto label_29d8e0;
        }
    }
    ctx->pc = 0x29D8B8u;
label_29d8b8:
    // 0x29d8b8: 0x547e000e  bnel        $v1, $fp, . + 4 + (0xE << 2)
label_29d8bc:
    if (ctx->pc == 0x29D8BCu) {
        ctx->pc = 0x29D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8B8u;
        // 0x29d8bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D8C0u;
        goto label_29d8c0;
    }
    ctx->pc = 0x29D8B8u;
    {
        const bool branch_taken_0x29d8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 30));
        if (branch_taken_0x29d8b8) {
            ctx->pc = 0x29D8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D8B8u;
            // 0x29d8bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D8F4u;
            goto label_29d8f4;
        }
    }
    ctx->pc = 0x29D8C0u;
label_29d8c0:
    // 0x29d8c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_29d8c4:
    // 0x29d8c4: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x29d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_29d8c8:
    // 0x29d8c8: 0xae1600ec  sw          $s6, 0xEC($s0)
    ctx->pc = 0x29d8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 22));
label_29d8cc:
    // 0x29d8cc: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x29d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_29d8d0:
    // 0x29d8d0: 0x24421388  addiu       $v0, $v0, 0x1388
    ctx->pc = 0x29d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5000));
label_29d8d4:
    // 0x29d8d4: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x29d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
label_29d8d8:
    // 0x29d8d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_29d8dc:
    if (ctx->pc == 0x29D8DCu) {
        ctx->pc = 0x29D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8D8u;
        // 0x29d8dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D8E0u;
        goto label_29d8e0;
    }
    ctx->pc = 0x29D8D8u;
    {
        const bool branch_taken_0x29d8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8D8u;
        // 0x29d8dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d8d8) {
            ctx->pc = 0x29D8F4u;
            goto label_29d8f4;
        }
    }
    ctx->pc = 0x29D8E0u;
label_29d8e0:
    // 0x29d8e0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x29d8e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_29d8e4:
    // 0x29d8e4: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x29d8e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_29d8e8:
    // 0x29d8e8: 0x1440ff77  bnez        $v0, . + 4 + (-0x89 << 2)
label_29d8ec:
    if (ctx->pc == 0x29D8ECu) {
        ctx->pc = 0x29D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8E8u;
        // 0x29d8ec: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D8F0u;
        goto label_29d8f0;
    }
    ctx->pc = 0x29D8E8u;
    {
        const bool branch_taken_0x29d8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8E8u;
        // 0x29d8ec: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d8e8) {
            ctx->pc = 0x29D6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d6c8;
        }
    }
    ctx->pc = 0x29D8F0u;
label_29d8f0:
    // 0x29d8f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29d8f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d8f4:
    // 0x29d8f4: 0x7bb00d10  lq          $s0, 0xD10($sp)
    ctx->pc = 0x29d8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3344)));
label_29d8f8:
    // 0x29d8f8: 0x7bb10d00  lq          $s1, 0xD00($sp)
    ctx->pc = 0x29d8f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 3328)));
label_29d8fc:
    // 0x29d8fc: 0x7bb20cf0  lq          $s2, 0xCF0($sp)
    ctx->pc = 0x29d8fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 3312)));
label_29d900:
    // 0x29d900: 0x7bb30ce0  lq          $s3, 0xCE0($sp)
    ctx->pc = 0x29d900u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 3296)));
label_29d904:
    // 0x29d904: 0x7bb40cd0  lq          $s4, 0xCD0($sp)
    ctx->pc = 0x29d904u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 3280)));
label_29d908:
    // 0x29d908: 0x7bb50cc0  lq          $s5, 0xCC0($sp)
    ctx->pc = 0x29d908u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 3264)));
label_29d90c:
    // 0x29d90c: 0x7bb60cb0  lq          $s6, 0xCB0($sp)
    ctx->pc = 0x29d90cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 3248)));
label_29d910:
    // 0x29d910: 0x7bb70ca0  lq          $s7, 0xCA0($sp)
    ctx->pc = 0x29d910u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 3232)));
label_29d914:
    // 0x29d914: 0x7bbe0c90  lq          $fp, 0xC90($sp)
    ctx->pc = 0x29d914u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 3216)));
label_29d918:
    // 0x29d918: 0xdfbf0c80  ld          $ra, 0xC80($sp)
    ctx->pc = 0x29d918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3200)));
label_29d91c:
    // 0x29d91c: 0xc7b40d20  lwc1        $f20, 0xD20($sp)
    ctx->pc = 0x29d91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29d920:
    // 0x29d920: 0x3e00008  jr          $ra
label_29d924:
    if (ctx->pc == 0x29D924u) {
        ctx->pc = 0x29D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D920u;
        // 0x29d924: 0x27bd0d30  addiu       $sp, $sp, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D928u;
        goto label_fallthrough_0x29d920;
    }
    ctx->pc = 0x29D920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D920u;
        // 0x29d924: 0x27bd0d30  addiu       $sp, $sp, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29d920:
    ctx->pc = 0x29D928u;
}
