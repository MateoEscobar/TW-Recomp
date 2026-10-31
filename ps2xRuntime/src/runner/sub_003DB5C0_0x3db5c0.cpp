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

// Function: sub_003DB5C0
// Address: 0x3db5c0 - 0x3db690
void sub_003DB5C0_0x3db5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB5C0_0x3db5c0");
#endif

    switch (ctx->pc) {
        case 0x3db5c0u: goto label_3db5c0;
        case 0x3db5c4u: goto label_3db5c4;
        case 0x3db5c8u: goto label_3db5c8;
        case 0x3db5ccu: goto label_3db5cc;
        case 0x3db5d0u: goto label_3db5d0;
        case 0x3db5d4u: goto label_3db5d4;
        case 0x3db5d8u: goto label_3db5d8;
        case 0x3db5dcu: goto label_3db5dc;
        case 0x3db5e0u: goto label_3db5e0;
        case 0x3db5e4u: goto label_3db5e4;
        case 0x3db5e8u: goto label_3db5e8;
        case 0x3db5ecu: goto label_3db5ec;
        case 0x3db5f0u: goto label_3db5f0;
        case 0x3db5f4u: goto label_3db5f4;
        case 0x3db5f8u: goto label_3db5f8;
        case 0x3db5fcu: goto label_3db5fc;
        case 0x3db600u: goto label_3db600;
        case 0x3db604u: goto label_3db604;
        case 0x3db608u: goto label_3db608;
        case 0x3db60cu: goto label_3db60c;
        case 0x3db610u: goto label_3db610;
        case 0x3db614u: goto label_3db614;
        case 0x3db618u: goto label_3db618;
        case 0x3db61cu: goto label_3db61c;
        case 0x3db620u: goto label_3db620;
        case 0x3db624u: goto label_3db624;
        case 0x3db628u: goto label_3db628;
        case 0x3db62cu: goto label_3db62c;
        case 0x3db630u: goto label_3db630;
        case 0x3db634u: goto label_3db634;
        case 0x3db638u: goto label_3db638;
        case 0x3db63cu: goto label_3db63c;
        case 0x3db640u: goto label_3db640;
        case 0x3db644u: goto label_3db644;
        case 0x3db648u: goto label_3db648;
        case 0x3db64cu: goto label_3db64c;
        case 0x3db650u: goto label_3db650;
        case 0x3db654u: goto label_3db654;
        case 0x3db658u: goto label_3db658;
        case 0x3db65cu: goto label_3db65c;
        case 0x3db660u: goto label_3db660;
        case 0x3db664u: goto label_3db664;
        case 0x3db668u: goto label_3db668;
        case 0x3db66cu: goto label_3db66c;
        case 0x3db670u: goto label_3db670;
        case 0x3db674u: goto label_3db674;
        case 0x3db678u: goto label_3db678;
        case 0x3db67cu: goto label_3db67c;
        case 0x3db680u: goto label_3db680;
        case 0x3db684u: goto label_3db684;
        case 0x3db688u: goto label_3db688;
        case 0x3db68cu: goto label_3db68c;
        default: break;
    }

    ctx->pc = 0x3db5c0u;

label_3db5c0:
    // 0x3db5c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3db5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3db5c4:
    // 0x3db5c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3db5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3db5c8:
    // 0x3db5c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3db5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3db5cc:
    // 0x3db5cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3db5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3db5d0:
    // 0x3db5d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3db5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3db5d4:
    // 0x3db5d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3db5d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3db5d8:
    // 0x3db5d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3db5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3db5dc:
    // 0x3db5dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3db5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3db5e0:
    // 0x3db5e0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3db5e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3db5e4:
    // 0x3db5e4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3db5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3db5e8:
    // 0x3db5e8: 0x40f809  jalr        $v0
label_3db5ec:
    if (ctx->pc == 0x3DB5ECu) {
        ctx->pc = 0x3DB5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB5E8u;
        // 0x3db5ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB5F0u;
        goto label_3db5f0;
    }
    ctx->pc = 0x3DB5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DB5F0u);
        ctx->pc = 0x3DB5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB5E8u;
        // 0x3db5ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB5E8u, 0x3DB5F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DB5F0u;
label_3db5f0:
    // 0x3db5f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3db5f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3db5f4:
    // 0x3db5f4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3db5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3db5f8:
    // 0x3db5f8: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_3db5fc:
    if (ctx->pc == 0x3DB5FCu) {
        ctx->pc = 0x3DB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB5F8u;
        // 0x3db5fc: 0x2e220013  sltiu       $v0, $s1, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB600u;
        goto label_3db600;
    }
    ctx->pc = 0x3DB5F8u;
    {
        const bool branch_taken_0x3db5f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB5F8u;
        // 0x3db5fc: 0x2e220013  sltiu       $v0, $s1, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db5f8) {
            ctx->pc = 0x3DB618u;
            goto label_3db618;
        }
    }
    ctx->pc = 0x3DB600u;
label_3db600:
    // 0x3db600: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3db604:
    if (ctx->pc == 0x3DB604u) {
        ctx->pc = 0x3DB604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB600u;
        // 0x3db604: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB608u;
        goto label_3db608;
    }
    ctx->pc = 0x3DB600u;
    {
        const bool branch_taken_0x3db600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB600u;
        // 0x3db604: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db600) {
            ctx->pc = 0x3DB678u;
            goto label_3db678;
        }
    }
    ctx->pc = 0x3DB608u;
label_3db608:
    // 0x3db608: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
label_3db60c:
    if (ctx->pc == 0x3DB60Cu) {
        ctx->pc = 0x3DB60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB608u;
        // 0x3db60c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB610u;
        goto label_3db610;
    }
    ctx->pc = 0x3DB608u;
    {
        const bool branch_taken_0x3db608 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DB60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB608u;
        // 0x3db60c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db608) {
            ctx->pc = 0x3DB644u;
            goto label_3db644;
        }
    }
    ctx->pc = 0x3DB610u;
label_3db610:
    // 0x3db610: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3db614:
    if (ctx->pc == 0x3DB614u) {
        ctx->pc = 0x3DB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB610u;
        // 0x3db614: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB618u;
        goto label_3db618;
    }
    ctx->pc = 0x3DB610u;
    {
        const bool branch_taken_0x3db610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB610u;
        // 0x3db614: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db610) {
            ctx->pc = 0x3DB67Cu;
            goto label_3db67c;
        }
    }
    ctx->pc = 0x3DB618u;
label_3db618:
    // 0x3db618: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3db618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3db61c:
    // 0x3db61c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_3db620:
    if (ctx->pc == 0x3DB620u) {
        ctx->pc = 0x3DB620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB61Cu;
        // 0x3db620: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB624u;
        goto label_3db624;
    }
    ctx->pc = 0x3DB61Cu;
    {
        const bool branch_taken_0x3db61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3db61c) {
            ctx->pc = 0x3DB620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DB61Cu;
            // 0x3db620: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DB67Cu;
            goto label_3db67c;
        }
    }
    ctx->pc = 0x3DB624u;
label_3db624:
    // 0x3db624: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3db624u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3db628:
    // 0x3db628: 0x3c0426ac  lui         $a0, 0x26AC
    ctx->pc = 0x3db628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9900 << 16));
label_3db62c:
    // 0x3db62c: 0x3484304b  ori         $a0, $a0, 0x304B
    ctx->pc = 0x3db62cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12363);
label_3db630:
    // 0x3db630: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3db630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3db634:
    // 0x3db634: 0xc045c64  jal         func_117190
label_3db638:
    if (ctx->pc == 0x3DB638u) {
        ctx->pc = 0x3DB638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB634u;
        // 0x3db638: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB63Cu;
        goto label_3db63c;
    }
    ctx->pc = 0x3DB634u;
    SET_GPR_U32(ctx, 31, 0x3DB63Cu);
    ctx->pc = 0x3DB638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB634u;
    // 0x3db638: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117190u, 0x3DB634u, 0x3DB63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB63Cu;
label_3db63c:
    // 0x3db63c: 0x1000000e  b           . + 4 + (0xE << 2)
label_3db640:
    if (ctx->pc == 0x3DB640u) {
        ctx->pc = 0x3DB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB63Cu;
        // 0x3db640: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB644u;
        goto label_3db644;
    }
    ctx->pc = 0x3DB63Cu;
    {
        const bool branch_taken_0x3db63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB63Cu;
        // 0x3db640: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db63c) {
            ctx->pc = 0x3DB678u;
            goto label_3db678;
        }
    }
    ctx->pc = 0x3DB644u;
label_3db644:
    // 0x3db644: 0xc0e90ca  jal         func_3A4328
label_3db648:
    if (ctx->pc == 0x3DB648u) {
        ctx->pc = 0x3DB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB644u;
        // 0x3db648: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB64Cu;
        goto label_3db64c;
    }
    ctx->pc = 0x3DB644u;
    SET_GPR_U32(ctx, 31, 0x3DB64Cu);
    ctx->pc = 0x3DB648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB644u;
    // 0x3db648: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3DB644u, 0x3DB64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB64Cu;
label_3db64c:
    // 0x3db64c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3db64cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3db650:
    // 0x3db650: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3db650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3db654:
    // 0x3db654: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3db654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3db658:
    // 0x3db658: 0xc0e911e  jal         func_3A4478
label_3db65c:
    if (ctx->pc == 0x3DB65Cu) {
        ctx->pc = 0x3DB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB658u;
        // 0x3db65c: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB660u;
        goto label_3db660;
    }
    ctx->pc = 0x3DB658u;
    SET_GPR_U32(ctx, 31, 0x3DB660u);
    ctx->pc = 0x3DB65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB658u;
    // 0x3db65c: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3DB658u, 0x3DB660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB660u;
label_3db660:
    // 0x3db660: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3db660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3db664:
    // 0x3db664: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3db664u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3db668:
    // 0x3db668: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3db668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_3db66c:
    // 0x3db66c: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x3db66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
label_3db670:
    // 0x3db670: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3db670u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3db674:
    // 0x3db674: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3db674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3db678:
    // 0x3db678: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3db678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3db67c:
    // 0x3db67c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3db67cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3db680:
    // 0x3db680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3db680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3db684:
    // 0x3db684: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3db684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3db688:
    // 0x3db688: 0x3e00008  jr          $ra
label_3db68c:
    if (ctx->pc == 0x3DB68Cu) {
        ctx->pc = 0x3DB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB688u;
        // 0x3db68c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB690u;
        goto label_fallthrough_0x3db688;
    }
    ctx->pc = 0x3DB688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB688u;
        // 0x3db68c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3db688:
    ctx->pc = 0x3DB690u;
}
