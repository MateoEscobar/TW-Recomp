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

// Function: sub_0028DB08
// Address: 0x28db08 - 0x28db20
void sub_0028DB08_0x28db08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DB08_0x28db08");
#endif

    ctx->pc = 0x28db08u;

    // 0x28db08: 0x8082002f  lb          $v0, 0x2F($a0)
    ctx->pc = 0x28db08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 47)));
    // 0x28db0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28db10: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x28db10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28db14: 0x3e00008  jr          $ra
    ctx->pc = 0x28DB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB14u;
        // 0x28db18: 0x8c820068  lw          $v0, 0x68($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DB1Cu;
    // 0x28db1c: 0x0  nop
    ctx->pc = 0x28db1cu;
    // NOP
    ctx->pc = 0x28db20u;
}
