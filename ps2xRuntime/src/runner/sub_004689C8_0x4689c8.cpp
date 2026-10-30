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

// Function: sub_004689C8
// Address: 0x4689c8 - 0x4689f0
void sub_004689C8_0x4689c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004689C8_0x4689c8");
#endif

    ctx->pc = 0x4689c8u;

    // 0x4689c8: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x4689c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x4689cc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4689CCu;
    {
        const bool branch_taken_0x4689cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4689cc) {
            ctx->pc = 0x4689D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4689CCu;
            // 0x4689d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4689E4u;
            goto label_4689e4;
        }
    }
    ctx->pc = 0x4689D4u;
    // 0x4689d4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x4689d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x4689d8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4689D8u;
    {
        const bool branch_taken_0x4689d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4689DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4689D8u;
        // 0x4689dc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4689d8) {
            ctx->pc = 0x4689E4u;
            goto label_4689e4;
        }
    }
    ctx->pc = 0x4689E0u;
    // 0x4689e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4689e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4689e4:
    // 0x4689e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4689E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4689E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4689ECu;
    // 0x4689ec: 0x0  nop
    ctx->pc = 0x4689ecu;
    // NOP
    ctx->pc = 0x4689f0u;
}
