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

// Function: sub_00443D60
// Address: 0x443d60 - 0x443d98
void sub_00443D60_0x443d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443D60_0x443d60");
#endif

    ctx->pc = 0x443d60u;

    // 0x443d60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x443d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x443d64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x443D64u;
    {
        const bool branch_taken_0x443d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x443D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443D64u;
        // 0x443d68: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443d64) {
            ctx->pc = 0x443D74u;
            goto label_443d74;
        }
    }
    ctx->pc = 0x443D6Cu;
    // 0x443d6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x443D6Cu;
    {
        const bool branch_taken_0x443d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x443D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443D6Cu;
        // 0x443d70: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443d6c) {
            ctx->pc = 0x443D7Cu;
            goto label_443d7c;
        }
    }
    ctx->pc = 0x443D74u;
label_443d74:
    // 0x443d74: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x443d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x443d78: 0xac439eb8  sw          $v1, -0x6148($v0)
    ctx->pc = 0x443d78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x519EB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x519EB8u, _value); } while (0);
label_443d7c:
    // 0x443d7c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x443D7Cu;
    {
        const bool branch_taken_0x443d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x443d7c) {
            ctx->pc = 0x443D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443D7Cu;
            // 0x443d80: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x443D90u;
            goto label_443d90;
        }
    }
    ctx->pc = 0x443D84u;
    // 0x443d84: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x443d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x443d88: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x443d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x443d8c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x443d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_443d90:
    // 0x443d90: 0x3e00008  jr          $ra
    ctx->pc = 0x443D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443D90u;
        // 0x443d94: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443D98u;
}
