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

// Function: sub_00469E40
// Address: 0x469e40 - 0x469e68
void sub_00469E40_0x469e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469E40_0x469e40");
#endif

    ctx->pc = 0x469e40u;

    // 0x469e40: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x469e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x469e44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x469E44u;
    {
        const bool branch_taken_0x469e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x469e44) {
            ctx->pc = 0x469E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x469E44u;
            // 0x469e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x469E5Cu;
            goto label_469e5c;
        }
    }
    ctx->pc = 0x469E4Cu;
    // 0x469e4c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x469e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x469e50: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x469E50u;
    {
        const bool branch_taken_0x469e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x469E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469E50u;
        // 0x469e54: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469e50) {
            ctx->pc = 0x469E5Cu;
            goto label_469e5c;
        }
    }
    ctx->pc = 0x469E58u;
    // 0x469e58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x469e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469e5c:
    // 0x469e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x469E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469E64u;
    // 0x469e64: 0x0  nop
    ctx->pc = 0x469e64u;
    // NOP
    ctx->pc = 0x469e68u;
}
