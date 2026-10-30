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

// Function: sub_00318F60
// Address: 0x318f60 - 0x318f90
void sub_00318F60_0x318f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318F60_0x318f60");
#endif

    ctx->pc = 0x318f60u;

    // 0x318f60: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x318f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318f64: 0x8cc5002c  lw          $a1, 0x2C($a2)
    ctx->pc = 0x318f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x318f68: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x318F68u;
    {
        const bool branch_taken_0x318f68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x318F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F68u;
        // 0x318f6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f68) {
            ctx->pc = 0x318F84u;
            goto label_318f84;
        }
    }
    ctx->pc = 0x318F70u;
    // 0x318f70: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x318f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x318f74: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x318f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x318f78: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x318f78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x318f7c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x318F7Cu;
    {
        const bool branch_taken_0x318f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x318f7c) {
            ctx->pc = 0x318F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318F7Cu;
            // 0x318f80: 0xacc0002c  sw          $zero, 0x2C($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318F84u;
            goto label_318f84;
        }
    }
    ctx->pc = 0x318F84u;
label_318f84:
    // 0x318f84: 0x3e00008  jr          $ra
    ctx->pc = 0x318F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F84u;
        // 0x318f88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318F8Cu;
    // 0x318f8c: 0x0  nop
    ctx->pc = 0x318f8cu;
    // NOP
    ctx->pc = 0x318f90u;
}
