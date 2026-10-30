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

// Function: sub_0040F5B8
// Address: 0x40f5b8 - 0x40f850
void sub_0040F5B8_0x40f5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040F5B8_0x40f5b8");
#endif

    switch (ctx->pc) {
        case 0x40f5b8u: goto label_40f5b8;
        case 0x40f5bcu: goto label_40f5bc;
        case 0x40f5c0u: goto label_40f5c0;
        case 0x40f5c4u: goto label_40f5c4;
        case 0x40f5c8u: goto label_40f5c8;
        case 0x40f5ccu: goto label_40f5cc;
        case 0x40f5d0u: goto label_40f5d0;
        case 0x40f5d4u: goto label_40f5d4;
        case 0x40f5d8u: goto label_40f5d8;
        case 0x40f5dcu: goto label_40f5dc;
        case 0x40f5e0u: goto label_40f5e0;
        case 0x40f5e4u: goto label_40f5e4;
        case 0x40f5e8u: goto label_40f5e8;
        case 0x40f5ecu: goto label_40f5ec;
        case 0x40f5f0u: goto label_40f5f0;
        case 0x40f5f4u: goto label_40f5f4;
        case 0x40f5f8u: goto label_40f5f8;
        case 0x40f5fcu: goto label_40f5fc;
        case 0x40f600u: goto label_40f600;
        case 0x40f604u: goto label_40f604;
        case 0x40f608u: goto label_40f608;
        case 0x40f60cu: goto label_40f60c;
        case 0x40f610u: goto label_40f610;
        case 0x40f614u: goto label_40f614;
        case 0x40f618u: goto label_40f618;
        case 0x40f61cu: goto label_40f61c;
        case 0x40f620u: goto label_40f620;
        case 0x40f624u: goto label_40f624;
        case 0x40f628u: goto label_40f628;
        case 0x40f62cu: goto label_40f62c;
        case 0x40f630u: goto label_40f630;
        case 0x40f634u: goto label_40f634;
        case 0x40f638u: goto label_40f638;
        case 0x40f63cu: goto label_40f63c;
        case 0x40f640u: goto label_40f640;
        case 0x40f644u: goto label_40f644;
        case 0x40f648u: goto label_40f648;
        case 0x40f64cu: goto label_40f64c;
        case 0x40f650u: goto label_40f650;
        case 0x40f654u: goto label_40f654;
        case 0x40f658u: goto label_40f658;
        case 0x40f65cu: goto label_40f65c;
        case 0x40f660u: goto label_40f660;
        case 0x40f664u: goto label_40f664;
        case 0x40f668u: goto label_40f668;
        case 0x40f66cu: goto label_40f66c;
        case 0x40f670u: goto label_40f670;
        case 0x40f674u: goto label_40f674;
        case 0x40f678u: goto label_40f678;
        case 0x40f67cu: goto label_40f67c;
        case 0x40f680u: goto label_40f680;
        case 0x40f684u: goto label_40f684;
        case 0x40f688u: goto label_40f688;
        case 0x40f68cu: goto label_40f68c;
        case 0x40f690u: goto label_40f690;
        case 0x40f694u: goto label_40f694;
        case 0x40f698u: goto label_40f698;
        case 0x40f69cu: goto label_40f69c;
        case 0x40f6a0u: goto label_40f6a0;
        case 0x40f6a4u: goto label_40f6a4;
        case 0x40f6a8u: goto label_40f6a8;
        case 0x40f6acu: goto label_40f6ac;
        case 0x40f6b0u: goto label_40f6b0;
        case 0x40f6b4u: goto label_40f6b4;
        case 0x40f6b8u: goto label_40f6b8;
        case 0x40f6bcu: goto label_40f6bc;
        case 0x40f6c0u: goto label_40f6c0;
        case 0x40f6c4u: goto label_40f6c4;
        case 0x40f6c8u: goto label_40f6c8;
        case 0x40f6ccu: goto label_40f6cc;
        case 0x40f6d0u: goto label_40f6d0;
        case 0x40f6d4u: goto label_40f6d4;
        case 0x40f6d8u: goto label_40f6d8;
        case 0x40f6dcu: goto label_40f6dc;
        case 0x40f6e0u: goto label_40f6e0;
        case 0x40f6e4u: goto label_40f6e4;
        case 0x40f6e8u: goto label_40f6e8;
        case 0x40f6ecu: goto label_40f6ec;
        case 0x40f6f0u: goto label_40f6f0;
        case 0x40f6f4u: goto label_40f6f4;
        case 0x40f6f8u: goto label_40f6f8;
        case 0x40f6fcu: goto label_40f6fc;
        case 0x40f700u: goto label_40f700;
        case 0x40f704u: goto label_40f704;
        case 0x40f708u: goto label_40f708;
        case 0x40f70cu: goto label_40f70c;
        case 0x40f710u: goto label_40f710;
        case 0x40f714u: goto label_40f714;
        case 0x40f718u: goto label_40f718;
        case 0x40f71cu: goto label_40f71c;
        case 0x40f720u: goto label_40f720;
        case 0x40f724u: goto label_40f724;
        case 0x40f728u: goto label_40f728;
        case 0x40f72cu: goto label_40f72c;
        case 0x40f730u: goto label_40f730;
        case 0x40f734u: goto label_40f734;
        case 0x40f738u: goto label_40f738;
        case 0x40f73cu: goto label_40f73c;
        case 0x40f740u: goto label_40f740;
        case 0x40f744u: goto label_40f744;
        case 0x40f748u: goto label_40f748;
        case 0x40f74cu: goto label_40f74c;
        case 0x40f750u: goto label_40f750;
        case 0x40f754u: goto label_40f754;
        case 0x40f758u: goto label_40f758;
        case 0x40f75cu: goto label_40f75c;
        case 0x40f760u: goto label_40f760;
        case 0x40f764u: goto label_40f764;
        case 0x40f768u: goto label_40f768;
        case 0x40f76cu: goto label_40f76c;
        case 0x40f770u: goto label_40f770;
        case 0x40f774u: goto label_40f774;
        case 0x40f778u: goto label_40f778;
        case 0x40f77cu: goto label_40f77c;
        case 0x40f780u: goto label_40f780;
        case 0x40f784u: goto label_40f784;
        case 0x40f788u: goto label_40f788;
        case 0x40f78cu: goto label_40f78c;
        case 0x40f790u: goto label_40f790;
        case 0x40f794u: goto label_40f794;
        case 0x40f798u: goto label_40f798;
        case 0x40f79cu: goto label_40f79c;
        case 0x40f7a0u: goto label_40f7a0;
        case 0x40f7a4u: goto label_40f7a4;
        case 0x40f7a8u: goto label_40f7a8;
        case 0x40f7acu: goto label_40f7ac;
        case 0x40f7b0u: goto label_40f7b0;
        case 0x40f7b4u: goto label_40f7b4;
        case 0x40f7b8u: goto label_40f7b8;
        case 0x40f7bcu: goto label_40f7bc;
        case 0x40f7c0u: goto label_40f7c0;
        case 0x40f7c4u: goto label_40f7c4;
        case 0x40f7c8u: goto label_40f7c8;
        case 0x40f7ccu: goto label_40f7cc;
        case 0x40f7d0u: goto label_40f7d0;
        case 0x40f7d4u: goto label_40f7d4;
        case 0x40f7d8u: goto label_40f7d8;
        case 0x40f7dcu: goto label_40f7dc;
        case 0x40f7e0u: goto label_40f7e0;
        case 0x40f7e4u: goto label_40f7e4;
        case 0x40f7e8u: goto label_40f7e8;
        case 0x40f7ecu: goto label_40f7ec;
        case 0x40f7f0u: goto label_40f7f0;
        case 0x40f7f4u: goto label_40f7f4;
        case 0x40f7f8u: goto label_40f7f8;
        case 0x40f7fcu: goto label_40f7fc;
        case 0x40f800u: goto label_40f800;
        case 0x40f804u: goto label_40f804;
        case 0x40f808u: goto label_40f808;
        case 0x40f80cu: goto label_40f80c;
        case 0x40f810u: goto label_40f810;
        case 0x40f814u: goto label_40f814;
        case 0x40f818u: goto label_40f818;
        case 0x40f81cu: goto label_40f81c;
        case 0x40f820u: goto label_40f820;
        case 0x40f824u: goto label_40f824;
        case 0x40f828u: goto label_40f828;
        case 0x40f82cu: goto label_40f82c;
        case 0x40f830u: goto label_40f830;
        case 0x40f834u: goto label_40f834;
        case 0x40f838u: goto label_40f838;
        case 0x40f83cu: goto label_40f83c;
        case 0x40f840u: goto label_40f840;
        case 0x40f844u: goto label_40f844;
        case 0x40f848u: goto label_40f848;
        case 0x40f84cu: goto label_40f84c;
        default: break;
    }

    ctx->pc = 0x40f5b8u;

label_40f5b8:
    // 0x40f5b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x40f5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_40f5bc:
    // 0x40f5bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40f5c0:
    // 0x40f5c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x40f5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_40f5c4:
    // 0x40f5c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x40f5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_40f5c8:
    // 0x40f5c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x40f5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40f5cc:
    // 0x40f5cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x40f5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_40f5d0:
    // 0x40f5d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x40f5d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40f5d4:
    // 0x40f5d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40f5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40f5d8:
    // 0x40f5d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40f5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40f5dc:
    // 0x40f5dc: 0x8c46cdb4  lw          $a2, -0x324C($v0)
    ctx->pc = 0x40f5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_40f5e0:
    // 0x40f5e0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x40f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_40f5e4:
    // 0x40f5e4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x40f5e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_40f5e8:
    // 0x40f5e8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x40f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_40f5ec:
    // 0x40f5ec: 0x60f809  jalr        $v1
label_40f5f0:
    if (ctx->pc == 0x40F5F0u) {
        ctx->pc = 0x40F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F5ECu;
        // 0x40f5f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F5F4u;
        goto label_40f5f4;
    }
    ctx->pc = 0x40F5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40F5F4u);
        ctx->pc = 0x40F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F5ECu;
        // 0x40f5f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F5ECu, 0x40F5F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F5F4u;
label_40f5f4:
    // 0x40f5f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40f5f8:
    // 0x40f5f8: 0x8c462c7c  lw          $a2, 0x2C7C($v0)
    ctx->pc = 0x40f5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_40f5fc:
    // 0x40f5fc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x40f5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40f600:
    // 0x40f600: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x40f600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_40f604:
    // 0x40f604: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x40f604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_40f608:
    // 0x40f608: 0xa0f809  jalr        $a1
label_40f60c:
    if (ctx->pc == 0x40F60Cu) {
        ctx->pc = 0x40F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F608u;
        // 0x40f60c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F610u;
        goto label_40f610;
    }
    ctx->pc = 0x40F608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x40F610u);
        ctx->pc = 0x40F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F608u;
        // 0x40f60c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F608u, 0x40F610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F610u;
label_40f610:
    // 0x40f610: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x40f610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_40f614:
    // 0x40f614: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_40f618:
    if (ctx->pc == 0x40F618u) {
        ctx->pc = 0x40F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F614u;
        // 0x40f618: 0x8e640048  lw          $a0, 0x48($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F61Cu;
        goto label_40f61c;
    }
    ctx->pc = 0x40F614u;
    {
        const bool branch_taken_0x40f614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40f614) {
            ctx->pc = 0x40F618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40F614u;
            // 0x40f618: 0x8e640048  lw          $a0, 0x48($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40F648u;
            goto label_40f648;
        }
    }
    ctx->pc = 0x40F61Cu;
label_40f61c:
    // 0x40f61c: 0xc103a34  jal         func_40E8D0
label_40f620:
    if (ctx->pc == 0x40F620u) {
        ctx->pc = 0x40F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F61Cu;
        // 0x40f620: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F624u;
        goto label_40f624;
    }
    ctx->pc = 0x40F61Cu;
    SET_GPR_U32(ctx, 31, 0x40F624u);
    ctx->pc = 0x40F620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F61Cu;
    // 0x40f620: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x40F61Cu, 0x40F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F624u;
label_40f624:
    // 0x40f624: 0xc1042dc  jal         func_410B70
label_40f628:
    if (ctx->pc == 0x40F628u) {
        ctx->pc = 0x40F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F624u;
        // 0x40f628: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F62Cu;
        goto label_40f62c;
    }
    ctx->pc = 0x40F624u;
    SET_GPR_U32(ctx, 31, 0x40F62Cu);
    ctx->pc = 0x40F628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F624u;
    // 0x40f628: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410B70u, 0x40F624u, 0x40F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F62Cu;
label_40f62c:
    // 0x40f62c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40f62cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_40f630:
    // 0x40f630: 0x8e640044  lw          $a0, 0x44($s3)
    ctx->pc = 0x40f630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_40f634:
    // 0x40f634: 0x24a58a88  addiu       $a1, $a1, -0x7578
    ctx->pc = 0x40f634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937224));
label_40f638:
    // 0x40f638: 0xc13d5f6  jal         func_4F57D8
label_40f63c:
    if (ctx->pc == 0x40F63Cu) {
        ctx->pc = 0x40F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F638u;
        // 0x40f63c: 0x24060488  addiu       $a2, $zero, 0x488 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F640u;
        goto label_40f640;
    }
    ctx->pc = 0x40F638u;
    SET_GPR_U32(ctx, 31, 0x40F640u);
    ctx->pc = 0x40F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F638u;
    // 0x40f63c: 0x24060488  addiu       $a2, $zero, 0x488 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F57D8u, 0x40F638u, 0x40F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F640u;
label_40f640:
    // 0x40f640: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x40f640u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
label_40f644:
    // 0x40f644: 0x8e640048  lw          $a0, 0x48($s3)
    ctx->pc = 0x40f644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_40f648:
    // 0x40f648: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_40f64c:
    if (ctx->pc == 0x40F64Cu) {
        ctx->pc = 0x40F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F648u;
        // 0x40f64c: 0x8e64005c  lw          $a0, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F650u;
        goto label_40f650;
    }
    ctx->pc = 0x40F648u;
    {
        const bool branch_taken_0x40f648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40f648) {
            ctx->pc = 0x40F64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40F648u;
            // 0x40f64c: 0x8e64005c  lw          $a0, 0x5C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40F674u;
            goto label_40f674;
        }
    }
    ctx->pc = 0x40F650u;
label_40f650:
    // 0x40f650: 0xc1042dc  jal         func_410B70
label_40f654:
    if (ctx->pc == 0x40F654u) {
        ctx->pc = 0x40F658u;
        goto label_40f658;
    }
    ctx->pc = 0x40F650u;
    SET_GPR_U32(ctx, 31, 0x40F658u);
    ctx->pc = 0x410B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410B70u, 0x40F650u, 0x40F658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F658u;
label_40f658:
    // 0x40f658: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40f658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_40f65c:
    // 0x40f65c: 0x8e640048  lw          $a0, 0x48($s3)
    ctx->pc = 0x40f65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_40f660:
    // 0x40f660: 0x24a58a88  addiu       $a1, $a1, -0x7578
    ctx->pc = 0x40f660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937224));
label_40f664:
    // 0x40f664: 0xc13d5f6  jal         func_4F57D8
label_40f668:
    if (ctx->pc == 0x40F668u) {
        ctx->pc = 0x40F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F664u;
        // 0x40f668: 0x24060490  addiu       $a2, $zero, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F66Cu;
        goto label_40f66c;
    }
    ctx->pc = 0x40F664u;
    SET_GPR_U32(ctx, 31, 0x40F66Cu);
    ctx->pc = 0x40F668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F664u;
    // 0x40f668: 0x24060490  addiu       $a2, $zero, 0x490 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F57D8u, 0x40F664u, 0x40F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F66Cu;
label_40f66c:
    // 0x40f66c: 0xae600048  sw          $zero, 0x48($s3)
    ctx->pc = 0x40f66cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
label_40f670:
    // 0x40f670: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x40f670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_40f674:
    // 0x40f674: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_40f678:
    if (ctx->pc == 0x40F678u) {
        ctx->pc = 0x40F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F674u;
        // 0x40f678: 0x24060496  addiu       $a2, $zero, 0x496 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1174));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F67Cu;
        goto label_40f67c;
    }
    ctx->pc = 0x40F674u;
    {
        const bool branch_taken_0x40f674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F674u;
        // 0x40f678: 0x24060496  addiu       $a2, $zero, 0x496 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1174));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f674) {
            ctx->pc = 0x40F68Cu;
            goto label_40f68c;
        }
    }
    ctx->pc = 0x40F67Cu;
label_40f67c:
    // 0x40f67c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40f67cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_40f680:
    // 0x40f680: 0xc13d612  jal         func_4F5848
label_40f684:
    if (ctx->pc == 0x40F684u) {
        ctx->pc = 0x40F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F680u;
        // 0x40f684: 0x24a58a88  addiu       $a1, $a1, -0x7578 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F688u;
        goto label_40f688;
    }
    ctx->pc = 0x40F680u;
    SET_GPR_U32(ctx, 31, 0x40F688u);
    ctx->pc = 0x40F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F680u;
    // 0x40f684: 0x24a58a88  addiu       $a1, $a1, -0x7578 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5848u, 0x40F680u, 0x40F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F688u;
label_40f688:
    // 0x40f688: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x40f688u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_40f68c:
    // 0x40f68c: 0x1600006a  bnez        $s0, . + 4 + (0x6A << 2)
label_40f690:
    if (ctx->pc == 0x40F690u) {
        ctx->pc = 0x40F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F68Cu;
        // 0x40f690: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F694u;
        goto label_40f694;
    }
    ctx->pc = 0x40F68Cu;
    {
        const bool branch_taken_0x40f68c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x40F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F68Cu;
        // 0x40f690: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f68c) {
            ctx->pc = 0x40F838u;
            goto label_40f838;
        }
    }
    ctx->pc = 0x40F694u;
label_40f694:
    // 0x40f694: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x40f694u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_40f698:
    // 0x40f698: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40f698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40f69c:
    // 0x40f69c: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x40f69cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_40f6a0:
    // 0x40f6a0: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x40f6a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_40f6a4:
    // 0x40f6a4: 0x8c65b9b8  lw          $a1, -0x4648($v1)
    ctx->pc = 0x40f6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949304)));
label_40f6a8:
    // 0x40f6a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40f6ac:
    // 0x40f6ac: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x40f6acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_40f6b0:
    // 0x40f6b0: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x40f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_40f6b4:
    // 0x40f6b4: 0x60f809  jalr        $v1
label_40f6b8:
    if (ctx->pc == 0x40F6B8u) {
        ctx->pc = 0x40F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F6B4u;
        // 0x40f6b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F6BCu;
        goto label_40f6bc;
    }
    ctx->pc = 0x40F6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40F6BCu);
        ctx->pc = 0x40F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F6B4u;
        // 0x40f6b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F6B4u, 0x40F6BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F6BCu;
label_40f6bc:
    // 0x40f6bc: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x40f6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_40f6c0:
    // 0x40f6c0: 0x8e650038  lw          $a1, 0x38($s3)
    ctx->pc = 0x40f6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_40f6c4:
    // 0x40f6c4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40f6c8:
    // 0x40f6c8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x40f6c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_40f6cc:
    // 0x40f6cc: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x40f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_40f6d0:
    // 0x40f6d0: 0x60f809  jalr        $v1
label_40f6d4:
    if (ctx->pc == 0x40F6D4u) {
        ctx->pc = 0x40F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F6D0u;
        // 0x40f6d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F6D8u;
        goto label_40f6d8;
    }
    ctx->pc = 0x40F6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40F6D8u);
        ctx->pc = 0x40F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F6D0u;
        // 0x40f6d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F6D0u, 0x40F6D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F6D8u;
label_40f6d8:
    // 0x40f6d8: 0x8e670038  lw          $a3, 0x38($s3)
    ctx->pc = 0x40f6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_40f6dc:
    // 0x40f6dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40f6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f6e0:
    // 0x40f6e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x40f6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40f6e4:
    // 0x40f6e4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x40f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_40f6e8:
    // 0x40f6e8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x40f6e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_40f6ec:
    // 0x40f6ec: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x40f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_40f6f0:
    // 0x40f6f0: 0x60f809  jalr        $v1
label_40f6f4:
    if (ctx->pc == 0x40F6F4u) {
        ctx->pc = 0x40F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F6F0u;
        // 0x40f6f4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F6F8u;
        goto label_40f6f8;
    }
    ctx->pc = 0x40F6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40F6F8u);
        ctx->pc = 0x40F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F6F0u;
        // 0x40f6f4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F6F0u, 0x40F6F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F6F8u;
label_40f6f8:
    // 0x40f6f8: 0xc1031fc  jal         func_40C7F0
label_40f6fc:
    if (ctx->pc == 0x40F6FCu) {
        ctx->pc = 0x40F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F6F8u;
        // 0x40f6fc: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F700u;
        goto label_40f700;
    }
    ctx->pc = 0x40F6F8u;
    SET_GPR_U32(ctx, 31, 0x40F700u);
    ctx->pc = 0x40F6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F6F8u;
    // 0x40f6fc: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C7F0u, 0x40F6F8u, 0x40F700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F700u;
label_40f700:
    // 0x40f700: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40f700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40f704:
    // 0x40f704: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x40f704u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_40f708:
    // 0x40f708: 0x8c44058c  lw          $a0, 0x58C($v0)
    ctx->pc = 0x40f708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1420)));
label_40f70c:
    // 0x40f70c: 0x26108a88  addiu       $s0, $s0, -0x7578
    ctx->pc = 0x40f70cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937224));
label_40f710:
    // 0x40f710: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40f710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40f714:
    // 0x40f714: 0xc13d62e  jal         func_4F58B8
label_40f718:
    if (ctx->pc == 0x40F718u) {
        ctx->pc = 0x40F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F714u;
        // 0x40f718: 0x240604a3  addiu       $a2, $zero, 0x4A3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1187));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F71Cu;
        goto label_40f71c;
    }
    ctx->pc = 0x40F714u;
    SET_GPR_U32(ctx, 31, 0x40F71Cu);
    ctx->pc = 0x40F718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F714u;
    // 0x40f718: 0x240604a3  addiu       $a2, $zero, 0x4A3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1187));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F58B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F58B8u, 0x40F714u, 0x40F71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F71Cu;
label_40f71c:
    // 0x40f71c: 0x8e670038  lw          $a3, 0x38($s3)
    ctx->pc = 0x40f71cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_40f720:
    // 0x40f720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40f720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f724:
    // 0x40f724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40f724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f728:
    // 0x40f728: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x40f728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_40f72c:
    // 0x40f72c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x40f72cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_40f730:
    // 0x40f730: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x40f730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_40f734:
    // 0x40f734: 0x60f809  jalr        $v1
label_40f738:
    if (ctx->pc == 0x40F738u) {
        ctx->pc = 0x40F738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F734u;
        // 0x40f738: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F73Cu;
        goto label_40f73c;
    }
    ctx->pc = 0x40F734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40F73Cu);
        ctx->pc = 0x40F738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F734u;
        // 0x40f738: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F734u, 0x40F73Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F73Cu;
label_40f73c:
    // 0x40f73c: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x40f73cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_40f740:
    // 0x40f740: 0x8e650038  lw          $a1, 0x38($s3)
    ctx->pc = 0x40f740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_40f744:
    // 0x40f744: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40f744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40f748:
    // 0x40f748: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x40f748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_40f74c:
    // 0x40f74c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x40f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_40f750:
    // 0x40f750: 0x60f809  jalr        $v1
label_40f754:
    if (ctx->pc == 0x40F754u) {
        ctx->pc = 0x40F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F750u;
        // 0x40f754: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F758u;
        goto label_40f758;
    }
    ctx->pc = 0x40F750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40F758u);
        ctx->pc = 0x40F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F750u;
        // 0x40f754: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F750u, 0x40F758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F758u;
label_40f758:
    // 0x40f758: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x40f758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_40f75c:
    // 0x40f75c: 0x8e45b9c8  lw          $a1, -0x4638($s2)
    ctx->pc = 0x40f75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949320)));
label_40f760:
    // 0x40f760: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40f760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40f764:
    // 0x40f764: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x40f764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_40f768:
    // 0x40f768: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x40f768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_40f76c:
    // 0x40f76c: 0x60f809  jalr        $v1
label_40f770:
    if (ctx->pc == 0x40F770u) {
        ctx->pc = 0x40F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F76Cu;
        // 0x40f770: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F774u;
        goto label_40f774;
    }
    ctx->pc = 0x40F76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40F774u);
        ctx->pc = 0x40F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F76Cu;
        // 0x40f770: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F76Cu, 0x40F774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F774u;
label_40f774:
    // 0x40f774: 0x8e650038  lw          $a1, 0x38($s3)
    ctx->pc = 0x40f774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_40f778:
    // 0x40f778: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40f778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40f77c:
    // 0x40f77c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x40f77cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_40f780:
    // 0x40f780: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x40f780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_40f784:
    // 0x40f784: 0x40f809  jalr        $v0
label_40f788:
    if (ctx->pc == 0x40F788u) {
        ctx->pc = 0x40F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F784u;
        // 0x40f788: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F78Cu;
        goto label_40f78c;
    }
    ctx->pc = 0x40F784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F78Cu);
        ctx->pc = 0x40F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F784u;
        // 0x40f788: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F784u, 0x40F78Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F78Cu;
label_40f78c:
    // 0x40f78c: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x40f78cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_40f790:
    // 0x40f790: 0x8e650038  lw          $a1, 0x38($s3)
    ctx->pc = 0x40f790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_40f794:
    // 0x40f794: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40f794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40f798:
    // 0x40f798: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x40f798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_40f79c:
    // 0x40f79c: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x40f79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_40f7a0:
    // 0x40f7a0: 0x60f809  jalr        $v1
label_40f7a4:
    if (ctx->pc == 0x40F7A4u) {
        ctx->pc = 0x40F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F7A0u;
        // 0x40f7a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F7A8u;
        goto label_40f7a8;
    }
    ctx->pc = 0x40F7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40F7A8u);
        ctx->pc = 0x40F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F7A0u;
        // 0x40f7a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F7A0u, 0x40F7A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F7A8u;
label_40f7a8:
    // 0x40f7a8: 0x8e47b9c8  lw          $a3, -0x4638($s2)
    ctx->pc = 0x40f7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949320)));
label_40f7ac:
    // 0x40f7ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x40f7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40f7b0:
    // 0x40f7b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40f7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f7b4:
    // 0x40f7b4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x40f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_40f7b8:
    // 0x40f7b8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x40f7b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_40f7bc:
    // 0x40f7bc: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x40f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_40f7c0:
    // 0x40f7c0: 0x60f809  jalr        $v1
label_40f7c4:
    if (ctx->pc == 0x40F7C4u) {
        ctx->pc = 0x40F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F7C0u;
        // 0x40f7c4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F7C8u;
        goto label_40f7c8;
    }
    ctx->pc = 0x40F7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40F7C8u);
        ctx->pc = 0x40F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F7C0u;
        // 0x40f7c4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F7C0u, 0x40F7C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F7C8u;
label_40f7c8:
    // 0x40f7c8: 0x8e660038  lw          $a2, 0x38($s3)
    ctx->pc = 0x40f7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_40f7cc:
    // 0x40f7cc: 0x8e45b9c8  lw          $a1, -0x4638($s2)
    ctx->pc = 0x40f7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949320)));
label_40f7d0:
    // 0x40f7d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40f7d4:
    // 0x40f7d4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x40f7d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_40f7d8:
    // 0x40f7d8: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x40f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_40f7dc:
    // 0x40f7dc: 0x60f809  jalr        $v1
label_40f7e0:
    if (ctx->pc == 0x40F7E0u) {
        ctx->pc = 0x40F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F7DCu;
        // 0x40f7e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F7E4u;
        goto label_40f7e4;
    }
    ctx->pc = 0x40F7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40F7E4u);
        ctx->pc = 0x40F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F7DCu;
        // 0x40f7e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F7DCu, 0x40F7E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F7E4u;
label_40f7e4:
    // 0x40f7e4: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x40f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_40f7e8:
    // 0x40f7e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40f7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40f7ec:
    // 0x40f7ec: 0xc1378f6  jal         func_4DE3D8
label_40f7f0:
    if (ctx->pc == 0x40F7F0u) {
        ctx->pc = 0x40F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F7ECu;
        // 0x40f7f0: 0x240604b0  addiu       $a2, $zero, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F7F4u;
        goto label_40f7f4;
    }
    ctx->pc = 0x40F7ECu;
    SET_GPR_U32(ctx, 31, 0x40F7F4u);
    ctx->pc = 0x40F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F7ECu;
    // 0x40f7f0: 0x240604b0  addiu       $a2, $zero, 0x4B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE3D8u, 0x40F7ECu, 0x40F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F7F4u;
label_40f7f4:
    // 0x40f7f4: 0x8e47b9c8  lw          $a3, -0x4638($s2)
    ctx->pc = 0x40f7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949320)));
label_40f7f8:
    // 0x40f7f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40f7f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f7fc:
    // 0x40f7fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40f7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f800:
    // 0x40f800: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x40f800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_40f804:
    // 0x40f804: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x40f804u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_40f808:
    // 0x40f808: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x40f808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_40f80c:
    // 0x40f80c: 0x60f809  jalr        $v1
label_40f810:
    if (ctx->pc == 0x40F810u) {
        ctx->pc = 0x40F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F80Cu;
        // 0x40f810: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F814u;
        goto label_40f814;
    }
    ctx->pc = 0x40F80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40F814u);
        ctx->pc = 0x40F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F80Cu;
        // 0x40f810: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F80Cu, 0x40F814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F814u;
label_40f814:
    // 0x40f814: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x40f814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_40f818:
    // 0x40f818: 0x8e45b9c8  lw          $a1, -0x4638($s2)
    ctx->pc = 0x40f818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949320)));
label_40f81c:
    // 0x40f81c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40f820:
    // 0x40f820: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x40f820u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_40f824:
    // 0x40f824: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x40f824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_40f828:
    // 0x40f828: 0x60f809  jalr        $v1
label_40f82c:
    if (ctx->pc == 0x40F82Cu) {
        ctx->pc = 0x40F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F828u;
        // 0x40f82c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F830u;
        goto label_40f830;
    }
    ctx->pc = 0x40F828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40F830u);
        ctx->pc = 0x40F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F828u;
        // 0x40f82c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F828u, 0x40F830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F830u;
label_40f830:
    // 0x40f830: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x40f830u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_40f834:
    // 0x40f834: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x40f834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40f838:
    // 0x40f838: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x40f838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40f83c:
    // 0x40f83c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40f83cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40f840:
    // 0x40f840: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x40f840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40f844:
    // 0x40f844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40f844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40f848:
    // 0x40f848: 0x3e00008  jr          $ra
label_40f84c:
    if (ctx->pc == 0x40F84Cu) {
        ctx->pc = 0x40F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F848u;
        // 0x40f84c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F850u;
        goto label_fallthrough_0x40f848;
    }
    ctx->pc = 0x40F848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F848u;
        // 0x40f84c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40f848:
    ctx->pc = 0x40F850u;
}
