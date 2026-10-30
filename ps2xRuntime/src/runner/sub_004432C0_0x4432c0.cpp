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

// Function: sub_004432C0
// Address: 0x4432c0 - 0x443310
void sub_004432C0_0x4432c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004432C0_0x4432c0");
#endif

    switch (ctx->pc) {
        case 0x4432d8u: goto label_4432d8;
        default: break;
    }

    ctx->pc = 0x4432c0u;

    // 0x4432c0: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x4432c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x4432c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4432c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4432c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4432c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4432cc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4432CCu;
    {
        const bool branch_taken_0x4432cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4432D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4432CCu;
        // 0x4432d0: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4432cc) {
            ctx->pc = 0x443304u;
            goto label_443304;
        }
    }
    ctx->pc = 0x4432D4u;
    // 0x4432d4: 0x0  nop
    ctx->pc = 0x4432d4u;
    // NOP
label_4432d8:
    // 0x4432d8: 0x42000039  di
    ctx->pc = 0x4432d8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x4432dc: 0x40f  sync.p
    ctx->pc = 0x4432dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4432e0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x4432e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x4432e4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4432e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x4432e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4432e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4432ec: 0x0  nop
    ctx->pc = 0x4432ecu;
    // NOP
    // 0x4432f0: 0x0  nop
    ctx->pc = 0x4432f0u;
    // NOP
    // 0x4432f4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4432F4u;
    {
        const bool branch_taken_0x4432f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4432f4) {
            ctx->pc = 0x4432D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4432d8;
        }
    }
    ctx->pc = 0x4432FCu;
    // 0x4432fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4432FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4432FCu;
        // 0x443300: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4432FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443304u;
label_443304:
    // 0x443304: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x443304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443308: 0x3e00008  jr          $ra
    ctx->pc = 0x443308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443308u;
        // 0x44330c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443310u;
}
