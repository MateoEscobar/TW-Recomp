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

// Function: sub_0013B5D8
// Address: 0x13b5d8 - 0x13b698
void sub_0013B5D8_0x13b5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B5D8_0x13b5d8");
#endif

    switch (ctx->pc) {
        case 0x13b5d8u: goto label_13b5d8;
        case 0x13b5dcu: goto label_13b5dc;
        case 0x13b5e0u: goto label_13b5e0;
        case 0x13b5e4u: goto label_13b5e4;
        case 0x13b5e8u: goto label_13b5e8;
        case 0x13b5ecu: goto label_13b5ec;
        case 0x13b5f0u: goto label_13b5f0;
        case 0x13b5f4u: goto label_13b5f4;
        case 0x13b5f8u: goto label_13b5f8;
        case 0x13b5fcu: goto label_13b5fc;
        case 0x13b600u: goto label_13b600;
        case 0x13b604u: goto label_13b604;
        case 0x13b608u: goto label_13b608;
        case 0x13b60cu: goto label_13b60c;
        case 0x13b610u: goto label_13b610;
        case 0x13b614u: goto label_13b614;
        case 0x13b618u: goto label_13b618;
        case 0x13b61cu: goto label_13b61c;
        case 0x13b620u: goto label_13b620;
        case 0x13b624u: goto label_13b624;
        case 0x13b628u: goto label_13b628;
        case 0x13b62cu: goto label_13b62c;
        case 0x13b630u: goto label_13b630;
        case 0x13b634u: goto label_13b634;
        case 0x13b638u: goto label_13b638;
        case 0x13b63cu: goto label_13b63c;
        case 0x13b640u: goto label_13b640;
        case 0x13b644u: goto label_13b644;
        case 0x13b648u: goto label_13b648;
        case 0x13b64cu: goto label_13b64c;
        case 0x13b650u: goto label_13b650;
        case 0x13b654u: goto label_13b654;
        case 0x13b658u: goto label_13b658;
        case 0x13b65cu: goto label_13b65c;
        case 0x13b660u: goto label_13b660;
        case 0x13b664u: goto label_13b664;
        case 0x13b668u: goto label_13b668;
        case 0x13b66cu: goto label_13b66c;
        case 0x13b670u: goto label_13b670;
        case 0x13b674u: goto label_13b674;
        case 0x13b678u: goto label_13b678;
        case 0x13b67cu: goto label_13b67c;
        case 0x13b680u: goto label_13b680;
        case 0x13b684u: goto label_13b684;
        case 0x13b688u: goto label_13b688;
        case 0x13b68cu: goto label_13b68c;
        case 0x13b690u: goto label_13b690;
        case 0x13b694u: goto label_13b694;
        default: break;
    }

    ctx->pc = 0x13b5d8u;

label_13b5d8:
    // 0x13b5d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13b5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13b5dc:
    // 0x13b5dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x13b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_13b5e0:
    // 0x13b5e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13b5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_13b5e4:
    // 0x13b5e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x13b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_13b5e8:
    // 0x13b5e8: 0x8c50b198  lw          $s0, -0x4E68($v0)
    ctx->pc = 0x13b5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947224)));
label_13b5ec:
    // 0x13b5ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13b5f0:
    // 0x13b5f0: 0x8c62b19c  lw          $v0, -0x4E64($v1)
    ctx->pc = 0x13b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947228)));
label_13b5f4:
    // 0x13b5f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13b5f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13b5f8:
    // 0x13b5f8: 0x12020020  beq         $s0, $v0, . + 4 + (0x20 << 2)
label_13b5fc:
    if (ctx->pc == 0x13B5FCu) {
        ctx->pc = 0x13B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5F8u;
        // 0x13b5fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B600u;
        goto label_13b600;
    }
    ctx->pc = 0x13B5F8u;
    {
        const bool branch_taken_0x13b5f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x13B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5F8u;
        // 0x13b5fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b5f8) {
            ctx->pc = 0x13B67Cu;
            goto label_13b67c;
        }
    }
    ctx->pc = 0x13B600u;
label_13b600:
    // 0x13b600: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13b600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13b604:
    // 0x13b604: 0xc047eec  jal         func_11FBB0
label_13b608:
    if (ctx->pc == 0x13B608u) {
        ctx->pc = 0x13B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B604u;
        // 0x13b608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B60Cu;
        goto label_13b60c;
    }
    ctx->pc = 0x13B604u;
    SET_GPR_U32(ctx, 31, 0x13B60Cu);
    ctx->pc = 0x13B608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B604u;
    // 0x13b608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x13B604u, 0x13B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B60Cu;
label_13b60c:
    // 0x13b60c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_13b610:
    if (ctx->pc == 0x13B610u) {
        ctx->pc = 0x13B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B60Cu;
        // 0x13b610: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B614u;
        goto label_13b614;
    }
    ctx->pc = 0x13B60Cu;
    {
        const bool branch_taken_0x13b60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B60Cu;
        // 0x13b610: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b60c) {
            ctx->pc = 0x13B634u;
            goto label_13b634;
        }
    }
    ctx->pc = 0x13B614u;
label_13b614:
    // 0x13b614: 0xc047eec  jal         func_11FBB0
label_13b618:
    if (ctx->pc == 0x13B618u) {
        ctx->pc = 0x13B618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B614u;
        // 0x13b618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B61Cu;
        goto label_13b61c;
    }
    ctx->pc = 0x13B614u;
    SET_GPR_U32(ctx, 31, 0x13B61Cu);
    ctx->pc = 0x13B618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B614u;
    // 0x13b618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x13B614u, 0x13B61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B61Cu;
label_13b61c:
    // 0x13b61c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13b620:
    // 0x13b620: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13b624:
    // 0x13b624: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x13b624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_13b628:
    // 0x13b628: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x13b628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_13b62c:
    // 0x13b62c: 0xc0f809  jalr        $a2
label_13b630:
    if (ctx->pc == 0x13B630u) {
        ctx->pc = 0x13B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B62Cu;
        // 0x13b630: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B634u;
        goto label_13b634;
    }
    ctx->pc = 0x13B62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x13B634u);
        ctx->pc = 0x13B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B62Cu;
        // 0x13b630: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B62Cu, 0x13B634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B634u;
label_13b634:
    // 0x13b634: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13b634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13b638:
    // 0x13b638: 0xc047eec  jal         func_11FBB0
label_13b63c:
    if (ctx->pc == 0x13B63Cu) {
        ctx->pc = 0x13B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B638u;
        // 0x13b63c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B640u;
        goto label_13b640;
    }
    ctx->pc = 0x13B638u;
    SET_GPR_U32(ctx, 31, 0x13B640u);
    ctx->pc = 0x13B63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B638u;
    // 0x13b63c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x13B638u, 0x13B640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B640u;
label_13b640:
    // 0x13b640: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_13b644:
    if (ctx->pc == 0x13B644u) {
        ctx->pc = 0x13B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B640u;
        // 0x13b644: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B648u;
        goto label_13b648;
    }
    ctx->pc = 0x13B640u;
    {
        const bool branch_taken_0x13b640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B640u;
        // 0x13b644: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b640) {
            ctx->pc = 0x13B668u;
            goto label_13b668;
        }
    }
    ctx->pc = 0x13B648u;
label_13b648:
    // 0x13b648: 0xc047eec  jal         func_11FBB0
label_13b64c:
    if (ctx->pc == 0x13B64Cu) {
        ctx->pc = 0x13B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B648u;
        // 0x13b64c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B650u;
        goto label_13b650;
    }
    ctx->pc = 0x13B648u;
    SET_GPR_U32(ctx, 31, 0x13B650u);
    ctx->pc = 0x13B64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B648u;
    // 0x13b64c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x13B648u, 0x13B650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B650u;
label_13b650:
    // 0x13b650: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13b650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13b654:
    // 0x13b654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13b658:
    // 0x13b658: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x13b658u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_13b65c:
    // 0x13b65c: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x13b65cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_13b660:
    // 0x13b660: 0xc0f809  jalr        $a2
label_13b664:
    if (ctx->pc == 0x13B664u) {
        ctx->pc = 0x13B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B660u;
        // 0x13b664: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B668u;
        goto label_13b668;
    }
    ctx->pc = 0x13B660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x13B668u);
        ctx->pc = 0x13B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B660u;
        // 0x13b664: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B660u, 0x13B668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B668u;
label_13b668:
    // 0x13b668: 0xc048bb4  jal         func_122ED0
label_13b66c:
    if (ctx->pc == 0x13B66Cu) {
        ctx->pc = 0x13B670u;
        goto label_13b670;
    }
    ctx->pc = 0x13B668u;
    SET_GPR_U32(ctx, 31, 0x13B670u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x13B668u, 0x13B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B670u;
label_13b670:
    // 0x13b670: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13b670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13b674:
    // 0x13b674: 0xc04f336  jal         func_13CCD8
label_13b678:
    if (ctx->pc == 0x13B678u) {
        ctx->pc = 0x13B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B674u;
        // 0x13b678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B67Cu;
        goto label_13b67c;
    }
    ctx->pc = 0x13B674u;
    SET_GPR_U32(ctx, 31, 0x13B67Cu);
    ctx->pc = 0x13B678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B674u;
    // 0x13b678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCD8u, 0x13B674u, 0x13B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B67Cu;
label_13b67c:
    // 0x13b67c: 0xc04edbe  jal         func_13B6F8
label_13b680:
    if (ctx->pc == 0x13B680u) {
        ctx->pc = 0x13B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B67Cu;
        // 0x13b680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B684u;
        goto label_13b684;
    }
    ctx->pc = 0x13B67Cu;
    SET_GPR_U32(ctx, 31, 0x13B684u);
    ctx->pc = 0x13B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B67Cu;
    // 0x13b680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B6F8u, 0x13B67Cu, 0x13B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B684u;
label_13b684:
    // 0x13b684: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13b684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13b688:
    // 0x13b688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13b68c:
    // 0x13b68c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13b690:
    // 0x13b690: 0x3e00008  jr          $ra
label_13b694:
    if (ctx->pc == 0x13B694u) {
        ctx->pc = 0x13B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B690u;
        // 0x13b694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B698u;
        goto label_fallthrough_0x13b690;
    }
    ctx->pc = 0x13B690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B690u;
        // 0x13b694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13b690:
    ctx->pc = 0x13B698u;
}
