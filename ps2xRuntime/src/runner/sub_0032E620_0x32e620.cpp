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

// Function: sub_0032E620
// Address: 0x32e620 - 0x32e670
void sub_0032E620_0x32e620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E620_0x32e620");
#endif

    ctx->pc = 0x32e620u;

    // 0x32e620: 0x24020111  addiu       $v0, $zero, 0x111
    ctx->pc = 0x32e620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x32e624: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32E624u;
    {
        const bool branch_taken_0x32e624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E624u;
        // 0x32e628: 0x28820112  slti        $v0, $a0, 0x112 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e624) {
            ctx->pc = 0x32E658u;
            goto label_32e658;
        }
    }
    ctx->pc = 0x32E62Cu;
    // 0x32e62c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32E62Cu;
    {
        const bool branch_taken_0x32e62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E62Cu;
        // 0x32e630: 0x28820107  slti        $v0, $a0, 0x107 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)263) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e62c) {
            ctx->pc = 0x32E64Cu;
            goto label_32e64c;
        }
    }
    ctx->pc = 0x32E634u;
    // 0x32e634: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32E634u;
    {
        const bool branch_taken_0x32e634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E634u;
        // 0x32e638: 0x28820104  slti        $v0, $a0, 0x104 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)260) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e634) {
            ctx->pc = 0x32E660u;
            goto label_32e660;
        }
    }
    ctx->pc = 0x32E63Cu;
    // 0x32e63c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32E63Cu;
    {
        const bool branch_taken_0x32e63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E63Cu;
        // 0x32e640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e63c) {
            ctx->pc = 0x32E664u;
            goto label_32e664;
        }
    }
    ctx->pc = 0x32E644u;
    // 0x32e644: 0x3e00008  jr          $ra
    ctx->pc = 0x32E644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E644u;
        // 0x32e648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E64Cu;
label_32e64c:
    // 0x32e64c: 0x2402011c  addiu       $v0, $zero, 0x11C
    ctx->pc = 0x32e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    // 0x32e650: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32E650u;
    {
        const bool branch_taken_0x32e650 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x32E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E650u;
        // 0x32e654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e650) {
            ctx->pc = 0x32E664u;
            goto label_32e664;
        }
    }
    ctx->pc = 0x32E658u;
label_32e658:
    // 0x32e658: 0x3e00008  jr          $ra
    ctx->pc = 0x32E658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E658u;
        // 0x32e65c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E660u;
label_32e660:
    // 0x32e660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32e660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e664:
    // 0x32e664: 0x3e00008  jr          $ra
    ctx->pc = 0x32E664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E66Cu;
    // 0x32e66c: 0x0  nop
    ctx->pc = 0x32e66cu;
    // NOP
    ctx->pc = 0x32e670u;
}
