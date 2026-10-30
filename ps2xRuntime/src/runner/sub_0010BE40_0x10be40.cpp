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

// Function: sub_0010BE40
// Address: 0x10be40 - 0x10be78
void sub_0010BE40_0x10be40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BE40_0x10be40");
#endif

    ctx->pc = 0x10be40u;

    // 0x10be40: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10be40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10be44: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x10be44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x10be48: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10be48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x10be4c: 0x8c65b734  lw          $a1, -0x48CC($v1)
    ctx->pc = 0x10be4cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x10be50: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10be50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10be54: 0x8c82378c  lw          $v0, 0x378C($a0)
    ctx->pc = 0x10be54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14220)));
    // 0x10be58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BE58u;
    {
        const bool branch_taken_0x10be58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE58u;
        // 0x10be5c: 0x8ca30038  lw          $v1, 0x38($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be58) {
            ctx->pc = 0x10BE68u;
            goto label_10be68;
        }
    }
    ctx->pc = 0x10BE60u;
    // 0x10be60: 0x3e00008  jr          $ra
    ctx->pc = 0x10BE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE60u;
        // 0x10be64: 0xac83378c  sw          $v1, 0x378C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 14220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BE68u;
label_10be68:
    // 0x10be68: 0x2462f830  addiu       $v0, $v1, -0x7D0
    ctx->pc = 0x10be68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965296));
    // 0x10be6c: 0x3e00008  jr          $ra
    ctx->pc = 0x10BE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE6Cu;
        // 0x10be70: 0xac82378c  sw          $v0, 0x378C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 14220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BE74u;
    // 0x10be74: 0x0  nop
    ctx->pc = 0x10be74u;
    // NOP
    ctx->pc = 0x10be78u;
}
