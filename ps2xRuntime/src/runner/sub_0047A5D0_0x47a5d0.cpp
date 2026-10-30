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

// Function: sub_0047A5D0
// Address: 0x47a5d0 - 0x47a600
void sub_0047A5D0_0x47a5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047A5D0_0x47a5d0");
#endif

    ctx->pc = 0x47a5d0u;

    // 0x47a5d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x47a5d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a5d4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x47A5D4u;
    {
        const bool branch_taken_0x47a5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47a5d4) {
            ctx->pc = 0x47A5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47A5D4u;
            // 0x47a5d8: 0x8c430014  lw          $v1, 0x14($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47A5E4u;
            goto label_47a5e4;
        }
    }
    ctx->pc = 0x47A5DCu;
    // 0x47a5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x47A5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A5DCu;
        // 0x47a5e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47A5E4u;
label_47a5e4:
    // 0x47a5e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47A5E4u;
    {
        const bool branch_taken_0x47a5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a5e4) {
            ctx->pc = 0x47A5F4u;
            goto label_47a5f4;
        }
    }
    ctx->pc = 0x47A5ECu;
    // 0x47a5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x47A5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A5ECu;
        // 0x47a5f0: 0xac650014  sw          $a1, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47A5F4u;
label_47a5f4:
    // 0x47a5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x47A5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A5F4u;
        // 0x47a5f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47A5FCu;
    // 0x47a5fc: 0x0  nop
    ctx->pc = 0x47a5fcu;
    // NOP
    ctx->pc = 0x47a600u;
}
