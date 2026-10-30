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

// Function: sub_001E6600
// Address: 0x1e6600 - 0x1e6698
void sub_001E6600_0x1e6600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6600_0x1e6600");
#endif

    switch (ctx->pc) {
        case 0x1e6600u: goto label_1e6600;
        case 0x1e6604u: goto label_1e6604;
        case 0x1e6608u: goto label_1e6608;
        case 0x1e660cu: goto label_1e660c;
        case 0x1e6610u: goto label_1e6610;
        case 0x1e6614u: goto label_1e6614;
        case 0x1e6618u: goto label_1e6618;
        case 0x1e661cu: goto label_1e661c;
        case 0x1e6620u: goto label_1e6620;
        case 0x1e6624u: goto label_1e6624;
        case 0x1e6628u: goto label_1e6628;
        case 0x1e662cu: goto label_1e662c;
        case 0x1e6630u: goto label_1e6630;
        case 0x1e6634u: goto label_1e6634;
        case 0x1e6638u: goto label_1e6638;
        case 0x1e663cu: goto label_1e663c;
        case 0x1e6640u: goto label_1e6640;
        case 0x1e6644u: goto label_1e6644;
        case 0x1e6648u: goto label_1e6648;
        case 0x1e664cu: goto label_1e664c;
        case 0x1e6650u: goto label_1e6650;
        case 0x1e6654u: goto label_1e6654;
        case 0x1e6658u: goto label_1e6658;
        case 0x1e665cu: goto label_1e665c;
        case 0x1e6660u: goto label_1e6660;
        case 0x1e6664u: goto label_1e6664;
        case 0x1e6668u: goto label_1e6668;
        case 0x1e666cu: goto label_1e666c;
        case 0x1e6670u: goto label_1e6670;
        case 0x1e6674u: goto label_1e6674;
        case 0x1e6678u: goto label_1e6678;
        case 0x1e667cu: goto label_1e667c;
        case 0x1e6680u: goto label_1e6680;
        case 0x1e6684u: goto label_1e6684;
        case 0x1e6688u: goto label_1e6688;
        case 0x1e668cu: goto label_1e668c;
        case 0x1e6690u: goto label_1e6690;
        case 0x1e6694u: goto label_1e6694;
        default: break;
    }

    ctx->pc = 0x1e6600u;

label_1e6600:
    // 0x1e6600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e6604:
    // 0x1e6604: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e6604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e6608:
    // 0x1e6608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e660c:
    // 0x1e660c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e660cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e6610:
    // 0x1e6610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e6610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6614:
    // 0x1e6614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e6618:
    // 0x1e6618: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1e6618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1e661c:
    // 0x1e661c: 0x8e300790  lw          $s0, 0x790($s1)
    ctx->pc = 0x1e661cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1936)));
label_1e6620:
    // 0x1e6620: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e6620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e6624:
    // 0x1e6624: 0x26102710  addiu       $s0, $s0, 0x2710
    ctx->pc = 0x1e6624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10000));
label_1e6628:
    // 0x1e6628: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1e6628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1e662c:
    // 0x1e662c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1e662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e6630:
    // 0x1e6630: 0x40f809  jalr        $v0
label_1e6634:
    if (ctx->pc == 0x1E6634u) {
        ctx->pc = 0x1E6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6630u;
        // 0x1e6634: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6638u;
        goto label_1e6638;
    }
    ctx->pc = 0x1E6630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6638u);
        ctx->pc = 0x1E6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6630u;
        // 0x1e6634: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6630u, 0x1E6638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6638u;
label_1e6638:
    // 0x1e6638: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x1e6638u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e663c:
    // 0x1e663c: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
label_1e6640:
    if (ctx->pc == 0x1E6640u) {
        ctx->pc = 0x1E6640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E663Cu;
        // 0x1e6640: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6644u;
        goto label_1e6644;
    }
    ctx->pc = 0x1E663Cu;
    {
        const bool branch_taken_0x1e663c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E663Cu;
        // 0x1e6640: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e663c) {
            ctx->pc = 0x1E6680u;
            goto label_1e6680;
        }
    }
    ctx->pc = 0x1E6644u;
label_1e6644:
    // 0x1e6644: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e6644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e6648:
    // 0x1e6648: 0x8e250874  lw          $a1, 0x874($s1)
    ctx->pc = 0x1e6648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2164)));
label_1e664c:
    // 0x1e664c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1e664cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1e6650:
    // 0x1e6650: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1e6650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1e6654:
    // 0x1e6654: 0x40f809  jalr        $v0
label_1e6658:
    if (ctx->pc == 0x1E6658u) {
        ctx->pc = 0x1E6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6654u;
        // 0x1e6658: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E665Cu;
        goto label_1e665c;
    }
    ctx->pc = 0x1E6654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E665Cu);
        ctx->pc = 0x1E6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6654u;
        // 0x1e6658: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6654u, 0x1E665Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E665Cu;
label_1e665c:
    // 0x1e665c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1e6660:
    if (ctx->pc == 0x1E6660u) {
        ctx->pc = 0x1E6660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E665Cu;
        // 0x1e6660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6664u;
        goto label_1e6664;
    }
    ctx->pc = 0x1E665Cu;
    {
        const bool branch_taken_0x1e665c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e665c) {
            ctx->pc = 0x1E6660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E665Cu;
            // 0x1e6660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6680u;
            goto label_1e6680;
        }
    }
    ctx->pc = 0x1E6664u;
label_1e6664:
    // 0x1e6664: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e6664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e6668:
    // 0x1e6668: 0x8e250b74  lw          $a1, 0xB74($s1)
    ctx->pc = 0x1e6668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2932)));
label_1e666c:
    // 0x1e666c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1e666cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1e6670:
    // 0x1e6670: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1e6670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1e6674:
    // 0x1e6674: 0x40f809  jalr        $v0
label_1e6678:
    if (ctx->pc == 0x1E6678u) {
        ctx->pc = 0x1E6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6674u;
        // 0x1e6678: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E667Cu;
        goto label_1e667c;
    }
    ctx->pc = 0x1E6674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E667Cu);
        ctx->pc = 0x1E6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6674u;
        // 0x1e6678: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6674u, 0x1E667Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E667Cu;
label_1e667c:
    // 0x1e667c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e667cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e6680:
    // 0x1e6680: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e6680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6684:
    // 0x1e6684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6688:
    // 0x1e6688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e668c:
    // 0x1e668c: 0x3e00008  jr          $ra
label_1e6690:
    if (ctx->pc == 0x1E6690u) {
        ctx->pc = 0x1E6690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E668Cu;
        // 0x1e6690: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6694u;
        goto label_1e6694;
    }
    ctx->pc = 0x1E668Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E668Cu;
        // 0x1e6690: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E668Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6694u;
label_1e6694:
    // 0x1e6694: 0x0  nop
    ctx->pc = 0x1e6694u;
    // NOP
    ctx->pc = 0x1e6698u;
}
