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

// Function: sub_002F3E60
// Address: 0x2f3e60 - 0x2f3e98
void sub_002F3E60_0x2f3e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3E60_0x2f3e60");
#endif

    ctx->pc = 0x2f3e60u;

    // 0x2f3e60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f3e64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f3e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3e68: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3E68u;
    {
        const bool branch_taken_0x2f3e68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F3E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E68u;
        // 0x2f3e6c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e68) {
            ctx->pc = 0x2F3E84u;
            goto label_2f3e84;
        }
    }
    ctx->pc = 0x2F3E70u;
    // 0x2f3e70: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2f3e70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2f3e74: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2f3e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2f3e78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f3e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f3e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E7Cu;
        // 0x2f3e80: 0xfc8200e0  sd          $v0, 0xE0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3E84u;
label_2f3e84:
    // 0x2f3e84: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2f3e84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2f3e88: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2f3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2f3e8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f3e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f3e90: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E90u;
        // 0x2f3e94: 0xfc8200e0  sd          $v0, 0xE0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3E98u;
}
