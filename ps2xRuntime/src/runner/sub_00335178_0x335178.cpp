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

// Function: sub_00335178
// Address: 0x335178 - 0x3351b0
void sub_00335178_0x335178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335178_0x335178");
#endif

    ctx->pc = 0x335178u;

    // 0x335178: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x335178u;
    {
        const bool branch_taken_0x335178 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335178u;
        // 0x33517c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335178) {
            ctx->pc = 0x3351A0u;
            goto label_3351a0;
        }
    }
    ctx->pc = 0x335180u;
    // 0x335180: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x335180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x335184: 0x24425170  addiu       $v0, $v0, 0x5170
    ctx->pc = 0x335184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20848));
    // 0x335188: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x335188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x33518c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x33518cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x335190: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x335190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335194: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x335194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x335198: 0x3e00008  jr          $ra
    ctx->pc = 0x335198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335198u;
        // 0x33519c: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3351A0u;
label_3351a0:
    // 0x3351a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3351A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3351A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3351A0u;
        // 0x3351a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3351A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3351A8u;
    // 0x3351a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3351a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3351ac: 0x0  nop
    ctx->pc = 0x3351acu;
    // NOP
    ctx->pc = 0x3351b0u;
}
