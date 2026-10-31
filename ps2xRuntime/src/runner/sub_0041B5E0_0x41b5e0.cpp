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

// Function: sub_0041B5E0
// Address: 0x41b5e0 - 0x41b6a8
void sub_0041B5E0_0x41b5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B5E0_0x41b5e0");
#endif

    switch (ctx->pc) {
        case 0x41b5e0u: goto label_41b5e0;
        case 0x41b5e4u: goto label_41b5e4;
        case 0x41b5e8u: goto label_41b5e8;
        case 0x41b5ecu: goto label_41b5ec;
        case 0x41b5f0u: goto label_41b5f0;
        case 0x41b5f4u: goto label_41b5f4;
        case 0x41b5f8u: goto label_41b5f8;
        case 0x41b5fcu: goto label_41b5fc;
        case 0x41b600u: goto label_41b600;
        case 0x41b604u: goto label_41b604;
        case 0x41b608u: goto label_41b608;
        case 0x41b60cu: goto label_41b60c;
        case 0x41b610u: goto label_41b610;
        case 0x41b614u: goto label_41b614;
        case 0x41b618u: goto label_41b618;
        case 0x41b61cu: goto label_41b61c;
        case 0x41b620u: goto label_41b620;
        case 0x41b624u: goto label_41b624;
        case 0x41b628u: goto label_41b628;
        case 0x41b62cu: goto label_41b62c;
        case 0x41b630u: goto label_41b630;
        case 0x41b634u: goto label_41b634;
        case 0x41b638u: goto label_41b638;
        case 0x41b63cu: goto label_41b63c;
        case 0x41b640u: goto label_41b640;
        case 0x41b644u: goto label_41b644;
        case 0x41b648u: goto label_41b648;
        case 0x41b64cu: goto label_41b64c;
        case 0x41b650u: goto label_41b650;
        case 0x41b654u: goto label_41b654;
        case 0x41b658u: goto label_41b658;
        case 0x41b65cu: goto label_41b65c;
        case 0x41b660u: goto label_41b660;
        case 0x41b664u: goto label_41b664;
        case 0x41b668u: goto label_41b668;
        case 0x41b66cu: goto label_41b66c;
        case 0x41b670u: goto label_41b670;
        case 0x41b674u: goto label_41b674;
        case 0x41b678u: goto label_41b678;
        case 0x41b67cu: goto label_41b67c;
        case 0x41b680u: goto label_41b680;
        case 0x41b684u: goto label_41b684;
        case 0x41b688u: goto label_41b688;
        case 0x41b68cu: goto label_41b68c;
        case 0x41b690u: goto label_41b690;
        case 0x41b694u: goto label_41b694;
        case 0x41b698u: goto label_41b698;
        case 0x41b69cu: goto label_41b69c;
        case 0x41b6a0u: goto label_41b6a0;
        case 0x41b6a4u: goto label_41b6a4;
        default: break;
    }

    ctx->pc = 0x41b5e0u;

label_41b5e0:
    // 0x41b5e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41b5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_41b5e4:
    // 0x41b5e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x41b5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_41b5e8:
    // 0x41b5e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41b5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41b5ec:
    // 0x41b5ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41b5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41b5f0:
    // 0x41b5f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x41b5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_41b5f4:
    // 0x41b5f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41b5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41b5f8:
    // 0x41b5f8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x41b5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_41b5fc:
    // 0x41b5fc: 0x820202fc  lb          $v0, 0x2FC($s0)
    ctx->pc = 0x41b5fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 764)));
label_41b600:
    // 0x41b600: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_41b604:
    if (ctx->pc == 0x41B604u) {
        ctx->pc = 0x41B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B600u;
        // 0x41b604: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B608u;
        goto label_41b608;
    }
    ctx->pc = 0x41B600u;
    {
        const bool branch_taken_0x41b600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B600u;
        // 0x41b604: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b600) {
            ctx->pc = 0x41B690u;
            goto label_41b690;
        }
    }
    ctx->pc = 0x41B608u;
label_41b608:
    // 0x41b608: 0xc0e4060  jal         func_390180
label_41b60c:
    if (ctx->pc == 0x41B60Cu) {
        ctx->pc = 0x41B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B608u;
        // 0x41b60c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B610u;
        goto label_41b610;
    }
    ctx->pc = 0x41B608u;
    SET_GPR_U32(ctx, 31, 0x41B610u);
    ctx->pc = 0x41B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B608u;
    // 0x41b60c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x41B608u, 0x41B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B610u;
label_41b610:
    // 0x41b610: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_41b614:
    if (ctx->pc == 0x41B614u) {
        ctx->pc = 0x41B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B610u;
        // 0x41b614: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B618u;
        goto label_41b618;
    }
    ctx->pc = 0x41B610u;
    {
        const bool branch_taken_0x41b610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B610u;
        // 0x41b614: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b610) {
            ctx->pc = 0x41B690u;
            goto label_41b690;
        }
    }
    ctx->pc = 0x41B618u;
label_41b618:
    // 0x41b618: 0x260502fc  addiu       $a1, $s0, 0x2FC
    ctx->pc = 0x41b618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 764));
label_41b61c:
    // 0x41b61c: 0x8e262b04  lw          $a2, 0x2B04($s1)
    ctx->pc = 0x41b61cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_41b620:
    // 0x41b620: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x41b620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41b624:
    // 0x41b624: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x41b624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_41b628:
    // 0x41b628: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x41b628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_41b62c:
    // 0x41b62c: 0x40f809  jalr        $v0
label_41b630:
    if (ctx->pc == 0x41B630u) {
        ctx->pc = 0x41B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B62Cu;
        // 0x41b630: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B634u;
        goto label_41b634;
    }
    ctx->pc = 0x41B62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B634u);
        ctx->pc = 0x41B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B62Cu;
        // 0x41b630: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B62Cu, 0x41B634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B634u;
label_41b634:
    // 0x41b634: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_41b638:
    if (ctx->pc == 0x41B638u) {
        ctx->pc = 0x41B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B634u;
        // 0x41b638: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B63Cu;
        goto label_41b63c;
    }
    ctx->pc = 0x41B634u;
    {
        const bool branch_taken_0x41b634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B634u;
        // 0x41b638: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b634) {
            ctx->pc = 0x41B690u;
            goto label_41b690;
        }
    }
    ctx->pc = 0x41B63Cu;
label_41b63c:
    // 0x41b63c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x41b63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41b640:
    // 0x41b640: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41b644:
    // 0x41b644: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x41b644u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_41b648:
    // 0x41b648: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x41b648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_41b64c:
    // 0x41b64c: 0x60f809  jalr        $v1
label_41b650:
    if (ctx->pc == 0x41B650u) {
        ctx->pc = 0x41B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B64Cu;
        // 0x41b650: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B654u;
        goto label_41b654;
    }
    ctx->pc = 0x41B64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B654u);
        ctx->pc = 0x41B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B64Cu;
        // 0x41b650: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B64Cu, 0x41B654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B654u;
label_41b654:
    // 0x41b654: 0x8e262b04  lw          $a2, 0x2B04($s1)
    ctx->pc = 0x41b654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_41b658:
    // 0x41b658: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41b658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41b65c:
    // 0x41b65c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41b660:
    // 0x41b660: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x41b660u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_41b664:
    // 0x41b664: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x41b664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_41b668:
    // 0x41b668: 0x60f809  jalr        $v1
label_41b66c:
    if (ctx->pc == 0x41B66Cu) {
        ctx->pc = 0x41B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B668u;
        // 0x41b66c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B670u;
        goto label_41b670;
    }
    ctx->pc = 0x41B668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B670u);
        ctx->pc = 0x41B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B668u;
        // 0x41b66c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B668u, 0x41B670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B670u;
label_41b670:
    // 0x41b670: 0x8e272b04  lw          $a3, 0x2B04($s1)
    ctx->pc = 0x41b670u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_41b674:
    // 0x41b674: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x41b674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41b678:
    // 0x41b678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41b678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41b67c:
    // 0x41b67c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x41b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_41b680:
    // 0x41b680: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x41b680u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_41b684:
    // 0x41b684: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x41b684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_41b688:
    // 0x41b688: 0x60f809  jalr        $v1
label_41b68c:
    if (ctx->pc == 0x41B68Cu) {
        ctx->pc = 0x41B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B688u;
        // 0x41b68c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B690u;
        goto label_41b690;
    }
    ctx->pc = 0x41B688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B690u);
        ctx->pc = 0x41B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B688u;
        // 0x41b68c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B688u, 0x41B690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B690u;
label_41b690:
    // 0x41b690: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x41b690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41b694:
    // 0x41b694: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x41b694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41b698:
    // 0x41b698: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41b698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41b69c:
    // 0x41b69c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41b69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41b6a0:
    // 0x41b6a0: 0x3e00008  jr          $ra
label_41b6a4:
    if (ctx->pc == 0x41B6A4u) {
        ctx->pc = 0x41B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B6A0u;
        // 0x41b6a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B6A8u;
        goto label_fallthrough_0x41b6a0;
    }
    ctx->pc = 0x41B6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B6A0u;
        // 0x41b6a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41b6a0:
    ctx->pc = 0x41B6A8u;
}
