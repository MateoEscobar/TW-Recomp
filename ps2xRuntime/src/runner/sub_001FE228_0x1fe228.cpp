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

// Function: sub_001FE228
// Address: 0x1fe228 - 0x1fe258
void sub_001FE228_0x1fe228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE228_0x1fe228");
#endif

    ctx->pc = 0x1fe228u;

    // 0x1fe228: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fe228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1fe22c: 0x8c62f4e0  lw          $v0, -0xB20($v1)
    ctx->pc = 0x1fe22cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50F4E0u));
    // 0x1fe230: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE230u;
    {
        const bool branch_taken_0x1fe230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE230u;
        // 0x1fe234: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe230) {
            ctx->pc = 0x1FE248u;
            goto label_1fe248;
        }
    }
    ctx->pc = 0x1FE238u;
    // 0x1fe238: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fe238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1fe23c: 0x8c43f4dc  lw          $v1, -0xB24($v0)
    ctx->pc = 0x1fe23cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50F4DCu));
    // 0x1fe240: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE240u;
    {
        const bool branch_taken_0x1fe240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe240) {
            ctx->pc = 0x1FE24Cu;
            goto label_1fe24c;
        }
    }
    ctx->pc = 0x1FE248u;
label_1fe248:
    // 0x1fe248: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fe248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe24c:
    // 0x1fe24c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE24Cu;
        // 0x1fe250: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE254u;
    // 0x1fe254: 0x0  nop
    ctx->pc = 0x1fe254u;
    // NOP
    ctx->pc = 0x1fe258u;
}
