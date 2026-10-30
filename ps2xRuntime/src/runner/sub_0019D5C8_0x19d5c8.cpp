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

// Function: sub_0019D5C8
// Address: 0x19d5c8 - 0x19d6e8
void sub_0019D5C8_0x19d5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D5C8_0x19d5c8");
#endif

    switch (ctx->pc) {
        case 0x19d5c8u: goto label_19d5c8;
        case 0x19d5ccu: goto label_19d5cc;
        case 0x19d5d0u: goto label_19d5d0;
        case 0x19d5d4u: goto label_19d5d4;
        case 0x19d5d8u: goto label_19d5d8;
        case 0x19d5dcu: goto label_19d5dc;
        case 0x19d5e0u: goto label_19d5e0;
        case 0x19d5e4u: goto label_19d5e4;
        case 0x19d5e8u: goto label_19d5e8;
        case 0x19d5ecu: goto label_19d5ec;
        case 0x19d5f0u: goto label_19d5f0;
        case 0x19d5f4u: goto label_19d5f4;
        case 0x19d5f8u: goto label_19d5f8;
        case 0x19d5fcu: goto label_19d5fc;
        case 0x19d600u: goto label_19d600;
        case 0x19d604u: goto label_19d604;
        case 0x19d608u: goto label_19d608;
        case 0x19d60cu: goto label_19d60c;
        case 0x19d610u: goto label_19d610;
        case 0x19d614u: goto label_19d614;
        case 0x19d618u: goto label_19d618;
        case 0x19d61cu: goto label_19d61c;
        case 0x19d620u: goto label_19d620;
        case 0x19d624u: goto label_19d624;
        case 0x19d628u: goto label_19d628;
        case 0x19d62cu: goto label_19d62c;
        case 0x19d630u: goto label_19d630;
        case 0x19d634u: goto label_19d634;
        case 0x19d638u: goto label_19d638;
        case 0x19d63cu: goto label_19d63c;
        case 0x19d640u: goto label_19d640;
        case 0x19d644u: goto label_19d644;
        case 0x19d648u: goto label_19d648;
        case 0x19d64cu: goto label_19d64c;
        case 0x19d650u: goto label_19d650;
        case 0x19d654u: goto label_19d654;
        case 0x19d658u: goto label_19d658;
        case 0x19d65cu: goto label_19d65c;
        case 0x19d660u: goto label_19d660;
        case 0x19d664u: goto label_19d664;
        case 0x19d668u: goto label_19d668;
        case 0x19d66cu: goto label_19d66c;
        case 0x19d670u: goto label_19d670;
        case 0x19d674u: goto label_19d674;
        case 0x19d678u: goto label_19d678;
        case 0x19d67cu: goto label_19d67c;
        case 0x19d680u: goto label_19d680;
        case 0x19d684u: goto label_19d684;
        case 0x19d688u: goto label_19d688;
        case 0x19d68cu: goto label_19d68c;
        case 0x19d690u: goto label_19d690;
        case 0x19d694u: goto label_19d694;
        case 0x19d698u: goto label_19d698;
        case 0x19d69cu: goto label_19d69c;
        case 0x19d6a0u: goto label_19d6a0;
        case 0x19d6a4u: goto label_19d6a4;
        case 0x19d6a8u: goto label_19d6a8;
        case 0x19d6acu: goto label_19d6ac;
        case 0x19d6b0u: goto label_19d6b0;
        case 0x19d6b4u: goto label_19d6b4;
        case 0x19d6b8u: goto label_19d6b8;
        case 0x19d6bcu: goto label_19d6bc;
        case 0x19d6c0u: goto label_19d6c0;
        case 0x19d6c4u: goto label_19d6c4;
        case 0x19d6c8u: goto label_19d6c8;
        case 0x19d6ccu: goto label_19d6cc;
        case 0x19d6d0u: goto label_19d6d0;
        case 0x19d6d4u: goto label_19d6d4;
        case 0x19d6d8u: goto label_19d6d8;
        case 0x19d6dcu: goto label_19d6dc;
        case 0x19d6e0u: goto label_19d6e0;
        case 0x19d6e4u: goto label_19d6e4;
        default: break;
    }

    ctx->pc = 0x19d5c8u;

label_19d5c8:
    // 0x19d5c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19d5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_19d5cc:
    // 0x19d5cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19d5d0:
    // 0x19d5d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x19d5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_19d5d4:
    // 0x19d5d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19d5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_19d5d8:
    // 0x19d5d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19d5d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d5dc:
    // 0x19d5dc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x19d5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_19d5e0:
    // 0x19d5e0: 0x262500d0  addiu       $a1, $s1, 0xD0
    ctx->pc = 0x19d5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_19d5e4:
    // 0x19d5e4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x19d5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_19d5e8:
    // 0x19d5e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19d5e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d5ec:
    // 0x19d5ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19d5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19d5f0:
    // 0x19d5f0: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x19d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_19d5f4:
    // 0x19d5f4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x19d5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_19d5f8:
    // 0x19d5f8: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x19d5f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_19d5fc:
    // 0x19d5fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19d600:
    // 0x19d600: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x19d600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_19d604:
    // 0x19d604: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x19d604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_19d608:
    // 0x19d608: 0x60f809  jalr        $v1
label_19d60c:
    if (ctx->pc == 0x19D60Cu) {
        ctx->pc = 0x19D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D608u;
        // 0x19d60c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D610u;
        goto label_19d610;
    }
    ctx->pc = 0x19D608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19D610u);
        ctx->pc = 0x19D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D608u;
        // 0x19d60c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D608u, 0x19D610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D610u;
label_19d610:
    // 0x19d610: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x19d610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_19d614:
    // 0x19d614: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19d614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19d618:
    // 0x19d618: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_19d61c:
    if (ctx->pc == 0x19D61Cu) {
        ctx->pc = 0x19D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D618u;
        // 0x19d61c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D620u;
        goto label_19d620;
    }
    ctx->pc = 0x19D618u;
    {
        const bool branch_taken_0x19d618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D618u;
        // 0x19d61c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d618) {
            ctx->pc = 0x19D69Cu;
            goto label_19d69c;
        }
    }
    ctx->pc = 0x19D620u;
label_19d620:
    // 0x19d620: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x19d620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_19d624:
    // 0x19d624: 0x0  nop
    ctx->pc = 0x19d624u;
    // NOP
label_19d628:
    // 0x19d628: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x19d628u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19d62c:
    // 0x19d62c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19d630:
    // 0x19d630: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_19d634:
    if (ctx->pc == 0x19D634u) {
        ctx->pc = 0x19D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D630u;
        // 0x19d634: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D638u;
        goto label_19d638;
    }
    ctx->pc = 0x19D630u;
    {
        const bool branch_taken_0x19d630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D630u;
        // 0x19d634: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d630) {
            ctx->pc = 0x19D684u;
            goto label_19d684;
        }
    }
    ctx->pc = 0x19D638u;
label_19d638:
    // 0x19d638: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19d638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19d63c:
    // 0x19d63c: 0x0  nop
    ctx->pc = 0x19d63cu;
    // NOP
label_19d640:
    // 0x19d640: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19d640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19d644:
    // 0x19d644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19d648:
    // 0x19d648: 0xc067568  jal         func_19D5A0
label_19d64c:
    if (ctx->pc == 0x19D64Cu) {
        ctx->pc = 0x19D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D648u;
        // 0x19d64c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D650u;
        goto label_19d650;
    }
    ctx->pc = 0x19D648u;
    SET_GPR_U32(ctx, 31, 0x19D650u);
    ctx->pc = 0x19D64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D648u;
    // 0x19d64c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5A0u, 0x19D648u, 0x19D650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D650u;
label_19d650:
    // 0x19d650: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19d650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19d654:
    // 0x19d654: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19d654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19d658:
    // 0x19d658: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19d658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19d65c:
    // 0x19d65c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19d65cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_19d660:
    // 0x19d660: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x19d660u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_19d664:
    // 0x19d664: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x19d664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_19d668:
    // 0x19d668: 0x60f809  jalr        $v1
label_19d66c:
    if (ctx->pc == 0x19D66Cu) {
        ctx->pc = 0x19D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D668u;
        // 0x19d66c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D670u;
        goto label_19d670;
    }
    ctx->pc = 0x19D668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19D670u);
        ctx->pc = 0x19D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D668u;
        // 0x19d66c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D668u, 0x19D670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D670u;
label_19d670:
    // 0x19d670: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x19d670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_19d674:
    // 0x19d674: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19d674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19d678:
    // 0x19d678: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x19d678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19d67c:
    // 0x19d67c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_19d680:
    if (ctx->pc == 0x19D680u) {
        ctx->pc = 0x19D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D67Cu;
        // 0x19d680: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D684u;
        goto label_19d684;
    }
    ctx->pc = 0x19D67Cu;
    {
        const bool branch_taken_0x19d67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D67Cu;
        // 0x19d680: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d67c) {
            ctx->pc = 0x19D640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d640;
        }
    }
    ctx->pc = 0x19D684u;
label_19d684:
    // 0x19d684: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x19d684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_19d688:
    // 0x19d688: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x19d688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19d68c:
    // 0x19d68c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19d690:
    // 0x19d690: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x19d690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19d694:
    // 0x19d694: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
label_19d698:
    if (ctx->pc == 0x19D698u) {
        ctx->pc = 0x19D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D694u;
        // 0x19d698: 0x8e220078  lw          $v0, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D69Cu;
        goto label_19d69c;
    }
    ctx->pc = 0x19D694u;
    {
        const bool branch_taken_0x19d694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d694) {
            ctx->pc = 0x19D698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D694u;
            // 0x19d698: 0x8e220078  lw          $v0, 0x78($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d628;
        }
    }
    ctx->pc = 0x19D69Cu;
label_19d69c:
    // 0x19d69c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19d6a0:
    // 0x19d6a0: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x19d6a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
label_19d6a4:
    // 0x19d6a4: 0x8e2832f8  lw          $t0, 0x32F8($s1)
    ctx->pc = 0x19d6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13048)));
label_19d6a8:
    // 0x19d6a8: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x19d6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_19d6ac:
    // 0x19d6ac: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x19d6acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_19d6b0:
    // 0x19d6b0: 0x2529f7a0  addiu       $t1, $t1, -0x860
    ctx->pc = 0x19d6b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965152));
label_19d6b4:
    // 0x19d6b4: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x19d6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_19d6b8:
    // 0x19d6b8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x19d6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19d6bc:
    // 0x19d6bc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x19d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_19d6c0:
    // 0x19d6c0: 0x40f809  jalr        $v0
label_19d6c4:
    if (ctx->pc == 0x19D6C4u) {
        ctx->pc = 0x19D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D6C0u;
        // 0x19d6c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D6C8u;
        goto label_19d6c8;
    }
    ctx->pc = 0x19D6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D6C8u);
        ctx->pc = 0x19D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D6C0u;
        // 0x19d6c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D6C0u, 0x19D6C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D6C8u;
label_19d6c8:
    // 0x19d6c8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x19d6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19d6cc:
    // 0x19d6cc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x19d6ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19d6d0:
    // 0x19d6d0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x19d6d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19d6d4:
    // 0x19d6d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19d6d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19d6d8:
    // 0x19d6d8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x19d6d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19d6dc:
    // 0x19d6dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19d6e0:
    // 0x19d6e0: 0x3e00008  jr          $ra
label_19d6e4:
    if (ctx->pc == 0x19D6E4u) {
        ctx->pc = 0x19D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D6E0u;
        // 0x19d6e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D6E8u;
        goto label_fallthrough_0x19d6e0;
    }
    ctx->pc = 0x19D6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D6E0u;
        // 0x19d6e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19d6e0:
    ctx->pc = 0x19D6E8u;
}
