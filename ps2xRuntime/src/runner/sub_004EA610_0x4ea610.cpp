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

// Function: sub_004EA610
// Address: 0x4ea610 - 0x4ea690
void sub_004EA610_0x4ea610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA610_0x4ea610");
#endif

    switch (ctx->pc) {
        case 0x4ea610u: goto label_4ea610;
        case 0x4ea614u: goto label_4ea614;
        case 0x4ea618u: goto label_4ea618;
        case 0x4ea61cu: goto label_4ea61c;
        case 0x4ea620u: goto label_4ea620;
        case 0x4ea624u: goto label_4ea624;
        case 0x4ea628u: goto label_4ea628;
        case 0x4ea62cu: goto label_4ea62c;
        case 0x4ea630u: goto label_4ea630;
        case 0x4ea634u: goto label_4ea634;
        case 0x4ea638u: goto label_4ea638;
        case 0x4ea63cu: goto label_4ea63c;
        case 0x4ea640u: goto label_4ea640;
        case 0x4ea644u: goto label_4ea644;
        case 0x4ea648u: goto label_4ea648;
        case 0x4ea64cu: goto label_4ea64c;
        case 0x4ea650u: goto label_4ea650;
        case 0x4ea654u: goto label_4ea654;
        case 0x4ea658u: goto label_4ea658;
        case 0x4ea65cu: goto label_4ea65c;
        case 0x4ea660u: goto label_4ea660;
        case 0x4ea664u: goto label_4ea664;
        case 0x4ea668u: goto label_4ea668;
        case 0x4ea66cu: goto label_4ea66c;
        case 0x4ea670u: goto label_4ea670;
        case 0x4ea674u: goto label_4ea674;
        case 0x4ea678u: goto label_4ea678;
        case 0x4ea67cu: goto label_4ea67c;
        case 0x4ea680u: goto label_4ea680;
        case 0x4ea684u: goto label_4ea684;
        case 0x4ea688u: goto label_4ea688;
        case 0x4ea68cu: goto label_4ea68c;
        default: break;
    }

    ctx->pc = 0x4ea610u;

label_4ea610:
    // 0x4ea610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ea610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ea614:
    // 0x4ea614: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ea614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ea618:
    // 0x4ea618: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ea618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ea61c:
    // 0x4ea61c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ea61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ea620:
    // 0x4ea620: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ea620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ea624:
    // 0x4ea624: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ea624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ea628:
    // 0x4ea628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ea628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ea62c:
    // 0x4ea62c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ea630:
    if (ctx->pc == 0x4EA630u) {
        ctx->pc = 0x4EA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA62Cu;
        // 0x4ea630: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA634u;
        goto label_4ea634;
    }
    ctx->pc = 0x4EA62Cu;
    {
        const bool branch_taken_0x4ea62c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA62Cu;
        // 0x4ea630: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea62c) {
            ctx->pc = 0x4EA674u;
            goto label_4ea674;
        }
    }
    ctx->pc = 0x4EA634u;
label_4ea634:
    // 0x4ea634: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ea634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ea638:
    // 0x4ea638: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ea638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ea63c:
    // 0x4ea63c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ea63cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ea640:
    // 0x4ea640: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ea640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ea644:
    // 0x4ea644: 0x60f809  jalr        $v1
label_4ea648:
    if (ctx->pc == 0x4EA648u) {
        ctx->pc = 0x4EA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA644u;
        // 0x4ea648: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA64Cu;
        goto label_4ea64c;
    }
    ctx->pc = 0x4EA644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EA64Cu);
        ctx->pc = 0x4EA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA644u;
        // 0x4ea648: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA644u, 0x4EA64Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EA64Cu;
label_4ea64c:
    // 0x4ea64c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ea64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ea650:
    // 0x4ea650: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ea650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ea654:
    // 0x4ea654: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ea654u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ea658:
    // 0x4ea658: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ea658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ea65c:
    // 0x4ea65c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ea65cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ea660:
    // 0x4ea660: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ea660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ea664:
    // 0x4ea664: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ea664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ea668:
    // 0x4ea668: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ea668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ea66c:
    // 0x4ea66c: 0x60f809  jalr        $v1
label_4ea670:
    if (ctx->pc == 0x4EA670u) {
        ctx->pc = 0x4EA670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA66Cu;
        // 0x4ea670: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA674u;
        goto label_4ea674;
    }
    ctx->pc = 0x4EA66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EA674u);
        ctx->pc = 0x4EA670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA66Cu;
        // 0x4ea670: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA66Cu, 0x4EA674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EA674u;
label_4ea674:
    // 0x4ea674: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ea674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ea678:
    // 0x4ea678: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ea678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ea67c:
    // 0x4ea67c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ea67cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ea680:
    // 0x4ea680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ea680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ea684:
    // 0x4ea684: 0x3e00008  jr          $ra
label_4ea688:
    if (ctx->pc == 0x4EA688u) {
        ctx->pc = 0x4EA688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA684u;
        // 0x4ea688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA68Cu;
        goto label_4ea68c;
    }
    ctx->pc = 0x4EA684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EA688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA684u;
        // 0x4ea688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EA68Cu;
label_4ea68c:
    // 0x4ea68c: 0x0  nop
    ctx->pc = 0x4ea68cu;
    // NOP
    ctx->pc = 0x4ea690u;
}
