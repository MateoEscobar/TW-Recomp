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

// Function: sub_00341AE8
// Address: 0x341ae8 - 0x341b20
void sub_00341AE8_0x341ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341AE8_0x341ae8");
#endif

    switch (ctx->pc) {
        case 0x341b00u: goto label_341b00;
        default: break;
    }

    ctx->pc = 0x341ae8u;

    // 0x341ae8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x341AE8u;
    {
        const bool branch_taken_0x341ae8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x341ae8) {
            ctx->pc = 0x341B18u;
            goto label_341b18;
        }
    }
    ctx->pc = 0x341AF0u;
    // 0x341af0: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x341af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x341af4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x341AF4u;
    {
        const bool branch_taken_0x341af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x341af4) {
            ctx->pc = 0x341B18u;
            goto label_341b18;
        }
    }
    ctx->pc = 0x341AFCu;
    // 0x341afc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x341afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_341b00:
    // 0x341b00: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x341B00u;
    {
        const bool branch_taken_0x341b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x341b00) {
            ctx->pc = 0x341B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341B00u;
            // 0x341b04: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341B10u;
            goto label_341b10;
        }
    }
    ctx->pc = 0x341B08u;
    // 0x341b08: 0x3e00008  jr          $ra
    ctx->pc = 0x341B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B08u;
        // 0x341b0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341B10u;
label_341b10:
    // 0x341b10: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x341B10u;
    {
        const bool branch_taken_0x341b10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x341b10) {
            ctx->pc = 0x341B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341B10u;
            // 0x341b14: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341b00;
        }
    }
    ctx->pc = 0x341B18u;
label_341b18:
    // 0x341b18: 0x3e00008  jr          $ra
    ctx->pc = 0x341B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B18u;
        // 0x341b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341B20u;
}
