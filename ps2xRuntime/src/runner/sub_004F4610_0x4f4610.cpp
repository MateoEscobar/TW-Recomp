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

// Function: sub_004F4610
// Address: 0x4f4610 - 0x4f4680
void sub_004F4610_0x4f4610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4610_0x4f4610");
#endif

    switch (ctx->pc) {
        case 0x4f4610u: goto label_4f4610;
        case 0x4f4614u: goto label_4f4614;
        case 0x4f4618u: goto label_4f4618;
        case 0x4f461cu: goto label_4f461c;
        case 0x4f4620u: goto label_4f4620;
        case 0x4f4624u: goto label_4f4624;
        case 0x4f4628u: goto label_4f4628;
        case 0x4f462cu: goto label_4f462c;
        case 0x4f4630u: goto label_4f4630;
        case 0x4f4634u: goto label_4f4634;
        case 0x4f4638u: goto label_4f4638;
        case 0x4f463cu: goto label_4f463c;
        case 0x4f4640u: goto label_4f4640;
        case 0x4f4644u: goto label_4f4644;
        case 0x4f4648u: goto label_4f4648;
        case 0x4f464cu: goto label_4f464c;
        case 0x4f4650u: goto label_4f4650;
        case 0x4f4654u: goto label_4f4654;
        case 0x4f4658u: goto label_4f4658;
        case 0x4f465cu: goto label_4f465c;
        case 0x4f4660u: goto label_4f4660;
        case 0x4f4664u: goto label_4f4664;
        case 0x4f4668u: goto label_4f4668;
        case 0x4f466cu: goto label_4f466c;
        case 0x4f4670u: goto label_4f4670;
        case 0x4f4674u: goto label_4f4674;
        case 0x4f4678u: goto label_4f4678;
        case 0x4f467cu: goto label_4f467c;
        default: break;
    }

    ctx->pc = 0x4f4610u;

label_4f4610:
    // 0x4f4610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f4610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f4614:
    // 0x4f4614: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f4614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f4618:
    // 0x4f4618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f4618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f461c:
    // 0x4f461c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f461cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f4620:
    // 0x4f4620: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f4620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f4624:
    // 0x4f4624: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4f4624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4f4628:
    // 0x4f4628: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4f4628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4f462c:
    // 0x4f462c: 0x40f809  jalr        $v0
label_4f4630:
    if (ctx->pc == 0x4F4630u) {
        ctx->pc = 0x4F4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F462Cu;
        // 0x4f4630: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4634u;
        goto label_4f4634;
    }
    ctx->pc = 0x4F462Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F4634u);
        ctx->pc = 0x4F4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F462Cu;
        // 0x4f4630: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F462Cu, 0x4F4634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F4634u;
label_4f4634:
    // 0x4f4634: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_4f4638:
    if (ctx->pc == 0x4F4638u) {
        ctx->pc = 0x4F4638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4634u;
        // 0x4f4638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F463Cu;
        goto label_4f463c;
    }
    ctx->pc = 0x4F4634u;
    {
        const bool branch_taken_0x4f4634 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4F4638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4634u;
        // 0x4f4638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4634) {
            ctx->pc = 0x4F466Cu;
            goto label_4f466c;
        }
    }
    ctx->pc = 0x4F463Cu;
label_4f463c:
    // 0x4f463c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4f463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4f4640:
    // 0x4f4640: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4f4640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f4644:
    // 0x4f4644: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4f4644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f4648:
    // 0x4f4648: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f4648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f464c:
    // 0x4f464c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4f464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4f4650:
    // 0x4f4650: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4f4650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f4654:
    // 0x4f4654: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4f4658:
    if (ctx->pc == 0x4F4658u) {
        ctx->pc = 0x4F4658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4654u;
        // 0x4f4658: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F465Cu;
        goto label_4f465c;
    }
    ctx->pc = 0x4F4654u;
    {
        const bool branch_taken_0x4f4654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4654u;
        // 0x4f4658: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4654) {
            ctx->pc = 0x4F4668u;
            goto label_4f4668;
        }
    }
    ctx->pc = 0x4F465Cu;
label_4f465c:
    // 0x4f465c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f465cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f4660:
    // 0x4f4660: 0x244258c8  addiu       $v0, $v0, 0x58C8
    ctx->pc = 0x4f4660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22728));
label_4f4664:
    // 0x4f4664: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4f4664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4f4668:
    // 0x4f4668: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4f4668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4f466c:
    // 0x4f466c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f466cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4670:
    // 0x4f4670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4674:
    // 0x4f4674: 0x3e00008  jr          $ra
label_4f4678:
    if (ctx->pc == 0x4F4678u) {
        ctx->pc = 0x4F4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4674u;
        // 0x4f4678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F467Cu;
        goto label_4f467c;
    }
    ctx->pc = 0x4F4674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4674u;
        // 0x4f4678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F467Cu;
label_4f467c:
    // 0x4f467c: 0x0  nop
    ctx->pc = 0x4f467cu;
    // NOP
    ctx->pc = 0x4f4680u;
}
