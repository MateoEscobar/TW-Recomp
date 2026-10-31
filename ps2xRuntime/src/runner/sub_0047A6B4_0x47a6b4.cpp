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

// Function: sub_0047A6B4
// Address: 0x47a6b4 - 0x47a6c4
void sub_0047A6B4_0x47a6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047A6B4_0x47a6b4");
#endif

    ctx->pc = 0x47a6b4u;

    // 0x47a6b4: 0x10c0ffeb  beqz        $a2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x47A6B4u;
    {
        const bool branch_taken_0x47a6b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A6B4u;
        // 0x47a6b8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a6b4) {
            ctx->pc = 0x47A664u;
            return;
        }
    }
    ctx->pc = 0x47A6BCu;
    // 0x47a6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x47A6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A6BCu;
        // 0x47a6c0: 0xad060008  sw          $a2, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47A6C4u;
}
