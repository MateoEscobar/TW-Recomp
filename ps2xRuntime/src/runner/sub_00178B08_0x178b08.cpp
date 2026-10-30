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

// Function: sub_00178B08
// Address: 0x178b08 - 0x178b30
void sub_00178B08_0x178b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178B08_0x178b08");
#endif

    ctx->pc = 0x178b08u;

    // 0x178b08: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x178b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178b0c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x178b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x178b10: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x178b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x178b14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178B14u;
    {
        const bool branch_taken_0x178b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B14u;
        // 0x178b18: 0xa4102b  sltu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b14) {
            ctx->pc = 0x178B24u;
            goto label_178b24;
        }
    }
    ctx->pc = 0x178B1Cu;
    // 0x178b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x178B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B1Cu;
        // 0x178b20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178B24u;
label_178b24:
    // 0x178b24: 0x3e00008  jr          $ra
    ctx->pc = 0x178B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178B2Cu;
    // 0x178b2c: 0x0  nop
    ctx->pc = 0x178b2cu;
    // NOP
    ctx->pc = 0x178b30u;
}
