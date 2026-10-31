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

// Function: sub_0038D7D8
// Address: 0x38d7d8 - 0x38d810
void sub_0038D7D8_0x38d7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D7D8_0x38d7d8");
#endif

    switch (ctx->pc) {
        case 0x38d7e8u: goto label_38d7e8;
        default: break;
    }

    ctx->pc = 0x38d7d8u;

    // 0x38d7d8: 0x80a60092  lb          $a2, 0x92($a1)
    ctx->pc = 0x38d7d8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 146)));
    // 0x38d7dc: 0x248412da  addiu       $a0, $a0, 0x12DA
    ctx->pc = 0x38d7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4826));
    // 0x38d7e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38d7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d7e4: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x38d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_38d7e8:
    // 0x38d7e8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x38d7e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38d7ec: 0x54660003  bnel        $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x38D7ECu;
    {
        const bool branch_taken_0x38d7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x38d7ec) {
            ctx->pc = 0x38D7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D7ECu;
            // 0x38d7f0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D7FCu;
            goto label_38d7fc;
        }
    }
    ctx->pc = 0x38D7F4u;
    // 0x38d7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x38D7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D7F4u;
        // 0x38d7f8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D7FCu;
label_38d7fc:
    // 0x38d7fc: 0x2ca2000a  sltiu       $v0, $a1, 0xA
    ctx->pc = 0x38d7fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x38d800: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x38D800u;
    {
        const bool branch_taken_0x38d800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D800u;
        // 0x38d804: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d800) {
            ctx->pc = 0x38D7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d7e8;
        }
    }
    ctx->pc = 0x38D808u;
    // 0x38d808: 0x3e00008  jr          $ra
    ctx->pc = 0x38D808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D808u;
        // 0x38d80c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D810u;
}
