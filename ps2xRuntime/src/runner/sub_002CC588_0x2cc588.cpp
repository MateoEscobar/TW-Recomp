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

// Function: sub_002CC588
// Address: 0x2cc588 - 0x2cc8a8
void sub_002CC588_0x2cc588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC588_0x2cc588");
#endif

    switch (ctx->pc) {
        case 0x2cc588u: goto label_2cc588;
        case 0x2cc58cu: goto label_2cc58c;
        case 0x2cc590u: goto label_2cc590;
        case 0x2cc594u: goto label_2cc594;
        case 0x2cc598u: goto label_2cc598;
        case 0x2cc59cu: goto label_2cc59c;
        case 0x2cc5a0u: goto label_2cc5a0;
        case 0x2cc5a4u: goto label_2cc5a4;
        case 0x2cc5a8u: goto label_2cc5a8;
        case 0x2cc5acu: goto label_2cc5ac;
        case 0x2cc5b0u: goto label_2cc5b0;
        case 0x2cc5b4u: goto label_2cc5b4;
        case 0x2cc5b8u: goto label_2cc5b8;
        case 0x2cc5bcu: goto label_2cc5bc;
        case 0x2cc5c0u: goto label_2cc5c0;
        case 0x2cc5c4u: goto label_2cc5c4;
        case 0x2cc5c8u: goto label_2cc5c8;
        case 0x2cc5ccu: goto label_2cc5cc;
        case 0x2cc5d0u: goto label_2cc5d0;
        case 0x2cc5d4u: goto label_2cc5d4;
        case 0x2cc5d8u: goto label_2cc5d8;
        case 0x2cc5dcu: goto label_2cc5dc;
        case 0x2cc5e0u: goto label_2cc5e0;
        case 0x2cc5e4u: goto label_2cc5e4;
        case 0x2cc5e8u: goto label_2cc5e8;
        case 0x2cc5ecu: goto label_2cc5ec;
        case 0x2cc5f0u: goto label_2cc5f0;
        case 0x2cc5f4u: goto label_2cc5f4;
        case 0x2cc5f8u: goto label_2cc5f8;
        case 0x2cc5fcu: goto label_2cc5fc;
        case 0x2cc600u: goto label_2cc600;
        case 0x2cc604u: goto label_2cc604;
        case 0x2cc608u: goto label_2cc608;
        case 0x2cc60cu: goto label_2cc60c;
        case 0x2cc610u: goto label_2cc610;
        case 0x2cc614u: goto label_2cc614;
        case 0x2cc618u: goto label_2cc618;
        case 0x2cc61cu: goto label_2cc61c;
        case 0x2cc620u: goto label_2cc620;
        case 0x2cc624u: goto label_2cc624;
        case 0x2cc628u: goto label_2cc628;
        case 0x2cc62cu: goto label_2cc62c;
        case 0x2cc630u: goto label_2cc630;
        case 0x2cc634u: goto label_2cc634;
        case 0x2cc638u: goto label_2cc638;
        case 0x2cc63cu: goto label_2cc63c;
        case 0x2cc640u: goto label_2cc640;
        case 0x2cc644u: goto label_2cc644;
        case 0x2cc648u: goto label_2cc648;
        case 0x2cc64cu: goto label_2cc64c;
        case 0x2cc650u: goto label_2cc650;
        case 0x2cc654u: goto label_2cc654;
        case 0x2cc658u: goto label_2cc658;
        case 0x2cc65cu: goto label_2cc65c;
        case 0x2cc660u: goto label_2cc660;
        case 0x2cc664u: goto label_2cc664;
        case 0x2cc668u: goto label_2cc668;
        case 0x2cc66cu: goto label_2cc66c;
        case 0x2cc670u: goto label_2cc670;
        case 0x2cc674u: goto label_2cc674;
        case 0x2cc678u: goto label_2cc678;
        case 0x2cc67cu: goto label_2cc67c;
        case 0x2cc680u: goto label_2cc680;
        case 0x2cc684u: goto label_2cc684;
        case 0x2cc688u: goto label_2cc688;
        case 0x2cc68cu: goto label_2cc68c;
        case 0x2cc690u: goto label_2cc690;
        case 0x2cc694u: goto label_2cc694;
        case 0x2cc698u: goto label_2cc698;
        case 0x2cc69cu: goto label_2cc69c;
        case 0x2cc6a0u: goto label_2cc6a0;
        case 0x2cc6a4u: goto label_2cc6a4;
        case 0x2cc6a8u: goto label_2cc6a8;
        case 0x2cc6acu: goto label_2cc6ac;
        case 0x2cc6b0u: goto label_2cc6b0;
        case 0x2cc6b4u: goto label_2cc6b4;
        case 0x2cc6b8u: goto label_2cc6b8;
        case 0x2cc6bcu: goto label_2cc6bc;
        case 0x2cc6c0u: goto label_2cc6c0;
        case 0x2cc6c4u: goto label_2cc6c4;
        case 0x2cc6c8u: goto label_2cc6c8;
        case 0x2cc6ccu: goto label_2cc6cc;
        case 0x2cc6d0u: goto label_2cc6d0;
        case 0x2cc6d4u: goto label_2cc6d4;
        case 0x2cc6d8u: goto label_2cc6d8;
        case 0x2cc6dcu: goto label_2cc6dc;
        case 0x2cc6e0u: goto label_2cc6e0;
        case 0x2cc6e4u: goto label_2cc6e4;
        case 0x2cc6e8u: goto label_2cc6e8;
        case 0x2cc6ecu: goto label_2cc6ec;
        case 0x2cc6f0u: goto label_2cc6f0;
        case 0x2cc6f4u: goto label_2cc6f4;
        case 0x2cc6f8u: goto label_2cc6f8;
        case 0x2cc6fcu: goto label_2cc6fc;
        case 0x2cc700u: goto label_2cc700;
        case 0x2cc704u: goto label_2cc704;
        case 0x2cc708u: goto label_2cc708;
        case 0x2cc70cu: goto label_2cc70c;
        case 0x2cc710u: goto label_2cc710;
        case 0x2cc714u: goto label_2cc714;
        case 0x2cc718u: goto label_2cc718;
        case 0x2cc71cu: goto label_2cc71c;
        case 0x2cc720u: goto label_2cc720;
        case 0x2cc724u: goto label_2cc724;
        case 0x2cc728u: goto label_2cc728;
        case 0x2cc72cu: goto label_2cc72c;
        case 0x2cc730u: goto label_2cc730;
        case 0x2cc734u: goto label_2cc734;
        case 0x2cc738u: goto label_2cc738;
        case 0x2cc73cu: goto label_2cc73c;
        case 0x2cc740u: goto label_2cc740;
        case 0x2cc744u: goto label_2cc744;
        case 0x2cc748u: goto label_2cc748;
        case 0x2cc74cu: goto label_2cc74c;
        case 0x2cc750u: goto label_2cc750;
        case 0x2cc754u: goto label_2cc754;
        case 0x2cc758u: goto label_2cc758;
        case 0x2cc75cu: goto label_2cc75c;
        case 0x2cc760u: goto label_2cc760;
        case 0x2cc764u: goto label_2cc764;
        case 0x2cc768u: goto label_2cc768;
        case 0x2cc76cu: goto label_2cc76c;
        case 0x2cc770u: goto label_2cc770;
        case 0x2cc774u: goto label_2cc774;
        case 0x2cc778u: goto label_2cc778;
        case 0x2cc77cu: goto label_2cc77c;
        case 0x2cc780u: goto label_2cc780;
        case 0x2cc784u: goto label_2cc784;
        case 0x2cc788u: goto label_2cc788;
        case 0x2cc78cu: goto label_2cc78c;
        case 0x2cc790u: goto label_2cc790;
        case 0x2cc794u: goto label_2cc794;
        case 0x2cc798u: goto label_2cc798;
        case 0x2cc79cu: goto label_2cc79c;
        case 0x2cc7a0u: goto label_2cc7a0;
        case 0x2cc7a4u: goto label_2cc7a4;
        case 0x2cc7a8u: goto label_2cc7a8;
        case 0x2cc7acu: goto label_2cc7ac;
        case 0x2cc7b0u: goto label_2cc7b0;
        case 0x2cc7b4u: goto label_2cc7b4;
        case 0x2cc7b8u: goto label_2cc7b8;
        case 0x2cc7bcu: goto label_2cc7bc;
        case 0x2cc7c0u: goto label_2cc7c0;
        case 0x2cc7c4u: goto label_2cc7c4;
        case 0x2cc7c8u: goto label_2cc7c8;
        case 0x2cc7ccu: goto label_2cc7cc;
        case 0x2cc7d0u: goto label_2cc7d0;
        case 0x2cc7d4u: goto label_2cc7d4;
        case 0x2cc7d8u: goto label_2cc7d8;
        case 0x2cc7dcu: goto label_2cc7dc;
        case 0x2cc7e0u: goto label_2cc7e0;
        case 0x2cc7e4u: goto label_2cc7e4;
        case 0x2cc7e8u: goto label_2cc7e8;
        case 0x2cc7ecu: goto label_2cc7ec;
        case 0x2cc7f0u: goto label_2cc7f0;
        case 0x2cc7f4u: goto label_2cc7f4;
        case 0x2cc7f8u: goto label_2cc7f8;
        case 0x2cc7fcu: goto label_2cc7fc;
        case 0x2cc800u: goto label_2cc800;
        case 0x2cc804u: goto label_2cc804;
        case 0x2cc808u: goto label_2cc808;
        case 0x2cc80cu: goto label_2cc80c;
        case 0x2cc810u: goto label_2cc810;
        case 0x2cc814u: goto label_2cc814;
        case 0x2cc818u: goto label_2cc818;
        case 0x2cc81cu: goto label_2cc81c;
        case 0x2cc820u: goto label_2cc820;
        case 0x2cc824u: goto label_2cc824;
        case 0x2cc828u: goto label_2cc828;
        case 0x2cc82cu: goto label_2cc82c;
        case 0x2cc830u: goto label_2cc830;
        case 0x2cc834u: goto label_2cc834;
        case 0x2cc838u: goto label_2cc838;
        case 0x2cc83cu: goto label_2cc83c;
        case 0x2cc840u: goto label_2cc840;
        case 0x2cc844u: goto label_2cc844;
        case 0x2cc848u: goto label_2cc848;
        case 0x2cc84cu: goto label_2cc84c;
        case 0x2cc850u: goto label_2cc850;
        case 0x2cc854u: goto label_2cc854;
        case 0x2cc858u: goto label_2cc858;
        case 0x2cc85cu: goto label_2cc85c;
        case 0x2cc860u: goto label_2cc860;
        case 0x2cc864u: goto label_2cc864;
        case 0x2cc868u: goto label_2cc868;
        case 0x2cc86cu: goto label_2cc86c;
        case 0x2cc870u: goto label_2cc870;
        case 0x2cc874u: goto label_2cc874;
        case 0x2cc878u: goto label_2cc878;
        case 0x2cc87cu: goto label_2cc87c;
        case 0x2cc880u: goto label_2cc880;
        case 0x2cc884u: goto label_2cc884;
        case 0x2cc888u: goto label_2cc888;
        case 0x2cc88cu: goto label_2cc88c;
        case 0x2cc890u: goto label_2cc890;
        case 0x2cc894u: goto label_2cc894;
        case 0x2cc898u: goto label_2cc898;
        case 0x2cc89cu: goto label_2cc89c;
        case 0x2cc8a0u: goto label_2cc8a0;
        case 0x2cc8a4u: goto label_2cc8a4;
        default: break;
    }

    ctx->pc = 0x2cc588u;

label_2cc588:
    // 0x2cc588: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2cc588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_2cc58c:
    // 0x2cc58c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2cc58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2cc590:
    // 0x2cc590: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2cc590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_2cc594:
    // 0x2cc594: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2cc594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_2cc598:
    // 0x2cc598: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cc598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cc59c:
    // 0x2cc59c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2cc59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_2cc5a0:
    // 0x2cc5a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2cc5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2cc5a4:
    // 0x2cc5a4: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2cc5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_2cc5a8:
    // 0x2cc5a8: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2cc5a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2cc5ac:
    // 0x2cc5ac: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2cc5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_2cc5b0:
    // 0x2cc5b0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2cc5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2cc5b4:
    // 0x2cc5b4: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x2cc5b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_2cc5b8:
    // 0x2cc5b8: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2cc5b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_2cc5bc:
    // 0x2cc5bc: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2cc5bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2cc5c0:
    // 0x2cc5c0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2cc5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_2cc5c4:
    // 0x2cc5c4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2cc5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cc5c8:
    // 0x2cc5c8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2cc5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2cc5cc:
    // 0x2cc5cc: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x2cc5ccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cc5d0:
    // 0x2cc5d0: 0x26b30090  addiu       $s3, $s5, 0x90
    ctx->pc = 0x2cc5d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_2cc5d4:
    // 0x2cc5d4: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x2cc5d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2cc5d8:
    // 0x2cc5d8: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2cc5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_2cc5dc:
    // 0x2cc5dc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2cc5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2cc5e0:
    // 0x2cc5e0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2cc5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2cc5e4:
    // 0x2cc5e4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2cc5e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2cc5e8:
    // 0x2cc5e8: 0xc0e409a  jal         func_390268
label_2cc5ec:
    if (ctx->pc == 0x2CC5ECu) {
        ctx->pc = 0x2CC5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5E8u;
        // 0x2cc5ec: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC5F0u;
        goto label_2cc5f0;
    }
    ctx->pc = 0x2CC5E8u;
    SET_GPR_U32(ctx, 31, 0x2CC5F0u);
    ctx->pc = 0x2CC5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC5E8u;
    // 0x2cc5ec: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CC5E8u, 0x2CC5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC5F0u;
label_2cc5f0:
    // 0x2cc5f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cc5f4:
    // 0x2cc5f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cc5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc5f8:
    // 0x2cc5f8: 0xc0a352c  jal         func_28D4B0
label_2cc5fc:
    if (ctx->pc == 0x2CC5FCu) {
        ctx->pc = 0x2CC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5F8u;
        // 0x2cc5fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC600u;
        goto label_2cc600;
    }
    ctx->pc = 0x2CC5F8u;
    SET_GPR_U32(ctx, 31, 0x2CC600u);
    ctx->pc = 0x2CC5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC5F8u;
    // 0x2cc5fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2CC5F8u, 0x2CC600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC600u;
label_2cc600:
    // 0x2cc600: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cc600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc604:
    // 0x2cc604: 0x1200009b  beqz        $s0, . + 4 + (0x9B << 2)
label_2cc608:
    if (ctx->pc == 0x2CC608u) {
        ctx->pc = 0x2CC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC604u;
        // 0x2cc608: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC60Cu;
        goto label_2cc60c;
    }
    ctx->pc = 0x2CC604u;
    {
        const bool branch_taken_0x2cc604 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC604u;
        // 0x2cc608: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc604) {
            ctx->pc = 0x2CC874u;
            goto label_2cc874;
        }
    }
    ctx->pc = 0x2CC60Cu;
label_2cc60c:
    // 0x2cc60c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cc60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cc610:
    // 0x2cc610: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2cc610u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2cc614:
    // 0x2cc614: 0x1c600097  bgtz        $v1, . + 4 + (0x97 << 2)
label_2cc618:
    if (ctx->pc == 0x2CC618u) {
        ctx->pc = 0x2CC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC614u;
        // 0x2cc618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC61Cu;
        goto label_2cc61c;
    }
    ctx->pc = 0x2CC614u;
    {
        const bool branch_taken_0x2cc614 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2CC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC614u;
        // 0x2cc618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc614) {
            ctx->pc = 0x2CC874u;
            goto label_2cc874;
        }
    }
    ctx->pc = 0x2CC61Cu;
label_2cc61c:
    // 0x2cc61c: 0x26120090  addiu       $s2, $s0, 0x90
    ctx->pc = 0x2cc61cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_2cc620:
    // 0x2cc620: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cc620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cc624:
    // 0x2cc624: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x2cc624u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2cc628:
    // 0x2cc628: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2cc628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2cc62c:
    // 0x2cc62c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2cc62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2cc630:
    // 0x2cc630: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2cc630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2cc634:
    // 0x2cc634: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2cc634u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2cc638:
    // 0x2cc638: 0xc0cdb38  jal         func_336CE0
label_2cc63c:
    if (ctx->pc == 0x2CC63Cu) {
        ctx->pc = 0x2CC63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC638u;
        // 0x2cc63c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC640u;
        goto label_2cc640;
    }
    ctx->pc = 0x2CC638u;
    SET_GPR_U32(ctx, 31, 0x2CC640u);
    ctx->pc = 0x2CC63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC638u;
    // 0x2cc63c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2CC638u, 0x2CC640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC640u;
label_2cc640:
    // 0x2cc640: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2cc640u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2cc644:
    // 0x2cc644: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2cc644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc648:
    // 0x2cc648: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2cc648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2cc64c:
    // 0x2cc64c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2cc64cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc650:
    // 0x2cc650: 0x0  nop
    ctx->pc = 0x2cc650u;
    // NOP
label_2cc654:
    // 0x2cc654: 0x4500005b  bc1f        . + 4 + (0x5B << 2)
label_2cc658:
    if (ctx->pc == 0x2CC658u) {
        ctx->pc = 0x2CC658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC654u;
        // 0x2cc658: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC65Cu;
        goto label_2cc65c;
    }
    ctx->pc = 0x2CC654u;
    {
        const bool branch_taken_0x2cc654 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC654u;
        // 0x2cc658: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc654) {
            ctx->pc = 0x2CC7C4u;
            goto label_2cc7c4;
        }
    }
    ctx->pc = 0x2CC65Cu;
label_2cc65c:
    // 0x2cc65c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cc65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cc660:
    // 0x2cc660: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2cc664:
    if (ctx->pc == 0x2CC664u) {
        ctx->pc = 0x2CC664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC660u;
        // 0x2cc664: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC668u;
        goto label_2cc668;
    }
    ctx->pc = 0x2CC660u;
    {
        const bool branch_taken_0x2cc660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc660) {
            ctx->pc = 0x2CC664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC660u;
            // 0x2cc664: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC668u;
            goto label_2cc668;
        }
    }
    ctx->pc = 0x2CC668u;
label_2cc668:
    // 0x2cc668: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2cc668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2cc66c:
    // 0x2cc66c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2cc66cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2cc670:
    // 0x2cc670: 0x2010  mfhi        $a0
    ctx->pc = 0x2cc670u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2cc674:
    // 0x2cc674: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
label_2cc678:
    if (ctx->pc == 0x2CC678u) {
        ctx->pc = 0x2CC678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC674u;
        // 0x2cc678: 0x86640002  lh          $a0, 0x2($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC67Cu;
        goto label_2cc67c;
    }
    ctx->pc = 0x2CC674u;
    {
        const bool branch_taken_0x2cc674 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc674) {
            ctx->pc = 0x2CC678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC674u;
            // 0x2cc678: 0x86640002  lh          $a0, 0x2($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC69Cu;
            goto label_2cc69c;
        }
    }
    ctx->pc = 0x2CC67Cu;
label_2cc67c:
    // 0x2cc67c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cc67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2cc680:
    // 0x2cc680: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cc680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cc684:
    // 0x2cc684: 0x26a40284  addiu       $a0, $s5, 0x284
    ctx->pc = 0x2cc684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 644));
label_2cc688:
    // 0x2cc688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cc688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cc68c:
    // 0x2cc68c: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x2cc68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_2cc690:
    // 0x2cc690: 0xc0a6800  jal         func_29A000
label_2cc694:
    if (ctx->pc == 0x2CC694u) {
        ctx->pc = 0x2CC694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC690u;
        // 0x2cc694: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC698u;
        goto label_2cc698;
    }
    ctx->pc = 0x2CC690u;
    SET_GPR_U32(ctx, 31, 0x2CC698u);
    ctx->pc = 0x2CC694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC690u;
    // 0x2cc694: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2CC690u, 0x2CC698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC698u;
label_2cc698:
    // 0x2cc698: 0x86640002  lh          $a0, 0x2($s3)
    ctx->pc = 0x2cc698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2cc69c:
    // 0x2cc69c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2cc69cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2cc6a0:
    // 0x2cc6a0: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2cc6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2cc6a4:
    // 0x2cc6a4: 0xc0cd7d2  jal         func_335F48
label_2cc6a8:
    if (ctx->pc == 0x2CC6A8u) {
        ctx->pc = 0x2CC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6A4u;
        // 0x2cc6a8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC6ACu;
        goto label_2cc6ac;
    }
    ctx->pc = 0x2CC6A4u;
    SET_GPR_U32(ctx, 31, 0x2CC6ACu);
    ctx->pc = 0x2CC6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC6A4u;
    // 0x2cc6a8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2CC6A4u, 0x2CC6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC6ACu;
label_2cc6ac:
    // 0x2cc6ac: 0x86640002  lh          $a0, 0x2($s3)
    ctx->pc = 0x2cc6acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2cc6b0:
    // 0x2cc6b0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2cc6b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2cc6b4:
    // 0x2cc6b4: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x2cc6b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2cc6b8:
    // 0x2cc6b8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2cc6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2cc6bc:
    // 0x2cc6bc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2cc6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2cc6c0:
    // 0x2cc6c0: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2cc6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2cc6c4:
    // 0x2cc6c4: 0xc0cd780  jal         func_335E00
label_2cc6c8:
    if (ctx->pc == 0x2CC6C8u) {
        ctx->pc = 0x2CC6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6C4u;
        // 0x2cc6c8: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC6CCu;
        goto label_2cc6cc;
    }
    ctx->pc = 0x2CC6C4u;
    SET_GPR_U32(ctx, 31, 0x2CC6CCu);
    ctx->pc = 0x2CC6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC6C4u;
    // 0x2cc6c8: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2CC6C4u, 0x2CC6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC6CCu;
label_2cc6cc:
    // 0x2cc6cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2cc6ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2cc6d0:
    // 0x2cc6d0: 0xc0cd742  jal         func_335D08
label_2cc6d4:
    if (ctx->pc == 0x2CC6D4u) {
        ctx->pc = 0x2CC6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6D0u;
        // 0x2cc6d4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC6D8u;
        goto label_2cc6d8;
    }
    ctx->pc = 0x2CC6D0u;
    SET_GPR_U32(ctx, 31, 0x2CC6D8u);
    ctx->pc = 0x2CC6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC6D0u;
    // 0x2cc6d4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2CC6D0u, 0x2CC6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC6D8u;
label_2cc6d8:
    // 0x2cc6d8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2cc6d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2cc6dc:
    // 0x2cc6dc: 0xc0cdd2e  jal         func_3374B8
label_2cc6e0:
    if (ctx->pc == 0x2CC6E0u) {
        ctx->pc = 0x2CC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6DCu;
        // 0x2cc6e0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC6E4u;
        goto label_2cc6e4;
    }
    ctx->pc = 0x2CC6DCu;
    SET_GPR_U32(ctx, 31, 0x2CC6E4u);
    ctx->pc = 0x2CC6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC6DCu;
    // 0x2cc6e0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2CC6DCu, 0x2CC6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC6E4u;
label_2cc6e4:
    // 0x2cc6e4: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2cc6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2cc6e8:
    // 0x2cc6e8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2cc6e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2cc6ec:
    // 0x2cc6ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cc6ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cc6f0:
    // 0x2cc6f0: 0x0  nop
    ctx->pc = 0x2cc6f0u;
    // NOP
label_2cc6f4:
    // 0x2cc6f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cc6f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc6f8:
    // 0x2cc6f8: 0x0  nop
    ctx->pc = 0x2cc6f8u;
    // NOP
label_2cc6fc:
    // 0x2cc6fc: 0x45000031  bc1f        . + 4 + (0x31 << 2)
label_2cc700:
    if (ctx->pc == 0x2CC700u) {
        ctx->pc = 0x2CC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6FCu;
        // 0x2cc700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC704u;
        goto label_2cc704;
    }
    ctx->pc = 0x2CC6FCu;
    {
        const bool branch_taken_0x2cc6fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6FCu;
        // 0x2cc700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6fc) {
            ctx->pc = 0x2CC7C4u;
            goto label_2cc7c4;
        }
    }
    ctx->pc = 0x2CC704u;
label_2cc704:
    // 0x2cc704: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x2cc704u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2cc708:
    // 0x2cc708: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2cc708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2cc70c:
    // 0x2cc70c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2cc70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2cc710:
    // 0x2cc710: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2cc710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2cc714:
    // 0x2cc714: 0xc088e88  jal         func_223A20
label_2cc718:
    if (ctx->pc == 0x2CC718u) {
        ctx->pc = 0x2CC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC714u;
        // 0x2cc718: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC71Cu;
        goto label_2cc71c;
    }
    ctx->pc = 0x2CC714u;
    SET_GPR_U32(ctx, 31, 0x2CC71Cu);
    ctx->pc = 0x2CC718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC714u;
    // 0x2cc718: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2CC714u, 0x2CC71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC71Cu;
label_2cc71c:
    // 0x2cc71c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2cc720:
    if (ctx->pc == 0x2CC720u) {
        ctx->pc = 0x2CC720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC71Cu;
        // 0x2cc720: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC724u;
        goto label_2cc724;
    }
    ctx->pc = 0x2CC71Cu;
    {
        const bool branch_taken_0x2cc71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC71Cu;
        // 0x2cc720: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc71c) {
            ctx->pc = 0x2CC788u;
            goto label_2cc788;
        }
    }
    ctx->pc = 0x2CC724u;
label_2cc724:
    // 0x2cc724: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x2cc724u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2cc728:
    // 0x2cc728: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2cc728u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2cc72c:
    // 0x2cc72c: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2cc72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_2cc730:
    // 0x2cc730: 0xc0cd8ec  jal         func_3363B0
label_2cc734:
    if (ctx->pc == 0x2CC734u) {
        ctx->pc = 0x2CC734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC730u;
        // 0x2cc734: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC738u;
        goto label_2cc738;
    }
    ctx->pc = 0x2CC730u;
    SET_GPR_U32(ctx, 31, 0x2CC738u);
    ctx->pc = 0x2CC734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC730u;
    // 0x2cc734: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2CC730u, 0x2CC738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC738u;
label_2cc738:
    // 0x2cc738: 0xc60001ac  lwc1        $f0, 0x1AC($s0)
    ctx->pc = 0x2cc738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc73c:
    // 0x2cc73c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2cc73cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cc740:
    // 0x2cc740: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2cc740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2cc744:
    // 0x2cc744: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2cc744u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2cc748:
    // 0x2cc748: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2cc748u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2cc74c:
    // 0x2cc74c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2cc74cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2cc750:
    // 0x2cc750: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2cc750u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2cc754:
    // 0x2cc754: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2cc754u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cc758:
    // 0x2cc758: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2cc758u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2cc75c:
    // 0x2cc75c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2cc75cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2cc760:
    // 0x2cc760: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2cc760u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2cc764:
    // 0x2cc764: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2cc764u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2cc768:
    // 0x2cc768: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2cc768u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2cc76c:
    // 0x2cc76c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2cc76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_2cc770:
    // 0x2cc770: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2cc770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2cc774:
    // 0x2cc774: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2cc774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2cc778:
    // 0x2cc778: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2cc778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2cc77c:
    // 0x2cc77c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2cc77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_2cc780:
    // 0x2cc780: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2cc780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_2cc784:
    // 0x2cc784: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2cc784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2cc788:
    // 0x2cc788: 0xc0a367c  jal         func_28D9F0
label_2cc78c:
    if (ctx->pc == 0x2CC78Cu) {
        ctx->pc = 0x2CC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC788u;
        // 0x2cc78c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC790u;
        goto label_2cc790;
    }
    ctx->pc = 0x2CC788u;
    SET_GPR_U32(ctx, 31, 0x2CC790u);
    ctx->pc = 0x2CC78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC788u;
    // 0x2cc78c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CC788u, 0x2CC790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC790u;
label_2cc790:
    // 0x2cc790: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cc790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc794:
    // 0x2cc794: 0x12400036  beqz        $s2, . + 4 + (0x36 << 2)
label_2cc798:
    if (ctx->pc == 0x2CC798u) {
        ctx->pc = 0x2CC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC794u;
        // 0x2cc798: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC79Cu;
        goto label_2cc79c;
    }
    ctx->pc = 0x2CC794u;
    {
        const bool branch_taken_0x2cc794 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC794u;
        // 0x2cc798: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc794) {
            ctx->pc = 0x2CC870u;
            goto label_2cc870;
        }
    }
    ctx->pc = 0x2CC79Cu;
label_2cc79c:
    // 0x2cc79c: 0xc0884f6  jal         func_2213D8
label_2cc7a0:
    if (ctx->pc == 0x2CC7A0u) {
        ctx->pc = 0x2CC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC79Cu;
        // 0x2cc7a0: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC7A4u;
        goto label_2cc7a4;
    }
    ctx->pc = 0x2CC79Cu;
    SET_GPR_U32(ctx, 31, 0x2CC7A4u);
    ctx->pc = 0x2CC7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC79Cu;
    // 0x2cc7a0: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2CC79Cu, 0x2CC7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC7A4u;
label_2cc7a4:
    // 0x2cc7a4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cc7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cc7a8:
    // 0x2cc7a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cc7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cc7ac:
    // 0x2cc7ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cc7acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cc7b0:
    // 0x2cc7b0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2cc7b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2cc7b4:
    // 0x2cc7b4: 0xc0bf800  jal         func_2FE000
label_2cc7b8:
    if (ctx->pc == 0x2CC7B8u) {
        ctx->pc = 0x2CC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7B4u;
        // 0x2cc7b8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC7BCu;
        goto label_2cc7bc;
    }
    ctx->pc = 0x2CC7B4u;
    SET_GPR_U32(ctx, 31, 0x2CC7BCu);
    ctx->pc = 0x2CC7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC7B4u;
    // 0x2cc7b8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2CC7B4u, 0x2CC7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC7BCu;
label_2cc7bc:
    // 0x2cc7bc: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2cc7c0:
    if (ctx->pc == 0x2CC7C0u) {
        ctx->pc = 0x2CC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7BCu;
        // 0x2cc7c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC7C4u;
        goto label_2cc7c4;
    }
    ctx->pc = 0x2CC7BCu;
    {
        const bool branch_taken_0x2cc7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7BCu;
        // 0x2cc7c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7bc) {
            ctx->pc = 0x2CC874u;
            goto label_2cc874;
        }
    }
    ctx->pc = 0x2CC7C4u;
label_2cc7c4:
    // 0x2cc7c4: 0x86230020  lh          $v1, 0x20($s1)
    ctx->pc = 0x2cc7c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
label_2cc7c8:
    // 0x2cc7c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cc7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cc7cc:
    // 0x2cc7cc: 0x10640020  beq         $v1, $a0, . + 4 + (0x20 << 2)
label_2cc7d0:
    if (ctx->pc == 0x2CC7D0u) {
        ctx->pc = 0x2CC7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7CCu;
        // 0x2cc7d0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC7D4u;
        goto label_2cc7d4;
    }
    ctx->pc = 0x2CC7CCu;
    {
        const bool branch_taken_0x2cc7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CC7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7CCu;
        // 0x2cc7d0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7cc) {
            ctx->pc = 0x2CC850u;
            goto label_2cc850;
        }
    }
    ctx->pc = 0x2CC7D4u;
label_2cc7d4:
    // 0x2cc7d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2cc7d8:
    if (ctx->pc == 0x2CC7D8u) {
        ctx->pc = 0x2CC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7D4u;
        // 0x2cc7d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC7DCu;
        goto label_2cc7dc;
    }
    ctx->pc = 0x2CC7D4u;
    {
        const bool branch_taken_0x2cc7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7D4u;
        // 0x2cc7d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7d4) {
            ctx->pc = 0x2CC7ECu;
            goto label_2cc7ec;
        }
    }
    ctx->pc = 0x2CC7DCu;
label_2cc7dc:
    // 0x2cc7dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2cc7e0:
    if (ctx->pc == 0x2CC7E0u) {
        ctx->pc = 0x2CC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7DCu;
        // 0x2cc7e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC7E4u;
        goto label_2cc7e4;
    }
    ctx->pc = 0x2CC7DCu;
    {
        const bool branch_taken_0x2cc7dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7DCu;
        // 0x2cc7e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7dc) {
            ctx->pc = 0x2CC7FCu;
            goto label_2cc7fc;
        }
    }
    ctx->pc = 0x2CC7E4u;
label_2cc7e4:
    // 0x2cc7e4: 0x10000024  b           . + 4 + (0x24 << 2)
label_2cc7e8:
    if (ctx->pc == 0x2CC7E8u) {
        ctx->pc = 0x2CC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7E4u;
        // 0x2cc7e8: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC7ECu;
        goto label_2cc7ec;
    }
    ctx->pc = 0x2CC7E4u;
    {
        const bool branch_taken_0x2cc7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7E4u;
        // 0x2cc7e8: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7e4) {
            ctx->pc = 0x2CC878u;
            goto label_2cc878;
        }
    }
    ctx->pc = 0x2CC7ECu;
label_2cc7ec:
    // 0x2cc7ec: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_2cc7f0:
    if (ctx->pc == 0x2CC7F0u) {
        ctx->pc = 0x2CC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7ECu;
        // 0x2cc7f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC7F4u;
        goto label_2cc7f4;
    }
    ctx->pc = 0x2CC7ECu;
    {
        const bool branch_taken_0x2cc7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7ECu;
        // 0x2cc7f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7ec) {
            ctx->pc = 0x2CC868u;
            goto label_2cc868;
        }
    }
    ctx->pc = 0x2CC7F4u;
label_2cc7f4:
    // 0x2cc7f4: 0x10000020  b           . + 4 + (0x20 << 2)
label_2cc7f8:
    if (ctx->pc == 0x2CC7F8u) {
        ctx->pc = 0x2CC7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7F4u;
        // 0x2cc7f8: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC7FCu;
        goto label_2cc7fc;
    }
    ctx->pc = 0x2CC7F4u;
    {
        const bool branch_taken_0x2cc7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7F4u;
        // 0x2cc7f8: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7f4) {
            ctx->pc = 0x2CC878u;
            goto label_2cc878;
        }
    }
    ctx->pc = 0x2CC7FCu;
label_2cc7fc:
    // 0x2cc7fc: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2cc7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cc800:
    // 0x2cc800: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2cc800u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2cc804:
    // 0x2cc804: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2cc804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cc808:
    // 0x2cc808: 0x0  nop
    ctx->pc = 0x2cc808u;
    // NOP
label_2cc80c:
    // 0x2cc80c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_2cc810:
    if (ctx->pc == 0x2CC810u) {
        ctx->pc = 0x2CC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC80Cu;
        // 0x2cc810: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC814u;
        goto label_2cc814;
    }
    ctx->pc = 0x2CC80Cu;
    {
        const bool branch_taken_0x2cc80c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC80Cu;
        // 0x2cc810: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc80c) {
            ctx->pc = 0x2CC878u;
            goto label_2cc878;
        }
    }
    ctx->pc = 0x2CC814u;
label_2cc814:
    // 0x2cc814: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2cc814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2cc818:
    // 0x2cc818: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2cc81c:
    if (ctx->pc == 0x2CC81Cu) {
        ctx->pc = 0x2CC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC818u;
        // 0x2cc81c: 0xa6240020  sh          $a0, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC820u;
        goto label_2cc820;
    }
    ctx->pc = 0x2CC818u;
    {
        const bool branch_taken_0x2cc818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC818u;
        // 0x2cc81c: 0xa6240020  sh          $a0, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc818) {
            ctx->pc = 0x2CC870u;
            goto label_2cc870;
        }
    }
    ctx->pc = 0x2CC820u;
label_2cc820:
    // 0x2cc820: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2cc820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2cc824:
    // 0x2cc824: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cc824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cc828:
    // 0x2cc828: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cc828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cc82c:
    // 0x2cc82c: 0x40f809  jalr        $v0
label_2cc830:
    if (ctx->pc == 0x2CC830u) {
        ctx->pc = 0x2CC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC82Cu;
        // 0x2cc830: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC834u;
        goto label_2cc834;
    }
    ctx->pc = 0x2CC82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CC834u);
        ctx->pc = 0x2CC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC82Cu;
        // 0x2cc830: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC82Cu, 0x2CC834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CC834u;
label_2cc834:
    // 0x2cc834: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x2cc834u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2cc838:
    // 0x2cc838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cc838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc83c:
    // 0x2cc83c: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2cc83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2cc840:
    // 0x2cc840: 0xc0b923a  jal         func_2E48E8
label_2cc844:
    if (ctx->pc == 0x2CC844u) {
        ctx->pc = 0x2CC844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC840u;
        // 0x2cc844: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC848u;
        goto label_2cc848;
    }
    ctx->pc = 0x2CC840u;
    SET_GPR_U32(ctx, 31, 0x2CC848u);
    ctx->pc = 0x2CC844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC840u;
    // 0x2cc844: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E48E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E48E8u, 0x2CC840u, 0x2CC848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC848u;
label_2cc848:
    // 0x2cc848: 0x1000000a  b           . + 4 + (0xA << 2)
label_2cc84c:
    if (ctx->pc == 0x2CC84Cu) {
        ctx->pc = 0x2CC84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC848u;
        // 0x2cc84c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC850u;
        goto label_2cc850;
    }
    ctx->pc = 0x2CC848u;
    {
        const bool branch_taken_0x2cc848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC848u;
        // 0x2cc84c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc848) {
            ctx->pc = 0x2CC874u;
            goto label_2cc874;
        }
    }
    ctx->pc = 0x2CC850u;
label_2cc850:
    // 0x2cc850: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2cc850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2cc854:
    // 0x2cc854: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2cc858:
    if (ctx->pc == 0x2CC858u) {
        ctx->pc = 0x2CC858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC854u;
        // 0x2cc858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC85Cu;
        goto label_2cc85c;
    }
    ctx->pc = 0x2CC854u;
    {
        const bool branch_taken_0x2cc854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC854u;
        // 0x2cc858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc854) {
            ctx->pc = 0x2CC874u;
            goto label_2cc874;
        }
    }
    ctx->pc = 0x2CC85Cu;
label_2cc85c:
    // 0x2cc85c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cc85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cc860:
    // 0x2cc860: 0x10000004  b           . + 4 + (0x4 << 2)
label_2cc864:
    if (ctx->pc == 0x2CC864u) {
        ctx->pc = 0x2CC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC860u;
        // 0x2cc864: 0xa6230020  sh          $v1, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC868u;
        goto label_2cc868;
    }
    ctx->pc = 0x2CC860u;
    {
        const bool branch_taken_0x2cc860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC860u;
        // 0x2cc864: 0xa6230020  sh          $v1, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc860) {
            ctx->pc = 0x2CC874u;
            goto label_2cc874;
        }
    }
    ctx->pc = 0x2CC868u;
label_2cc868:
    // 0x2cc868: 0x10000002  b           . + 4 + (0x2 << 2)
label_2cc86c:
    if (ctx->pc == 0x2CC86Cu) {
        ctx->pc = 0x2CC86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC868u;
        // 0x2cc86c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC870u;
        goto label_2cc870;
    }
    ctx->pc = 0x2CC868u;
    {
        const bool branch_taken_0x2cc868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC868u;
        // 0x2cc86c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc868) {
            ctx->pc = 0x2CC874u;
            goto label_2cc874;
        }
    }
    ctx->pc = 0x2CC870u;
label_2cc870:
    // 0x2cc870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cc870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc874:
    // 0x2cc874: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2cc874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2cc878:
    // 0x2cc878: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2cc878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2cc87c:
    // 0x2cc87c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2cc87cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2cc880:
    // 0x2cc880: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2cc880u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2cc884:
    // 0x2cc884: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2cc884u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2cc888:
    // 0x2cc888: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2cc888u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2cc88c:
    // 0x2cc88c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2cc88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2cc890:
    // 0x2cc890: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x2cc890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2cc894:
    // 0x2cc894: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2cc894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2cc898:
    // 0x2cc898: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2cc898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2cc89c:
    // 0x2cc89c: 0x3e00008  jr          $ra
label_2cc8a0:
    if (ctx->pc == 0x2CC8A0u) {
        ctx->pc = 0x2CC8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC89Cu;
        // 0x2cc8a0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC8A4u;
        goto label_2cc8a4;
    }
    ctx->pc = 0x2CC89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC89Cu;
        // 0x2cc8a0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC8A4u;
label_2cc8a4:
    // 0x2cc8a4: 0x0  nop
    ctx->pc = 0x2cc8a4u;
    // NOP
    ctx->pc = 0x2cc8a8u;
}
