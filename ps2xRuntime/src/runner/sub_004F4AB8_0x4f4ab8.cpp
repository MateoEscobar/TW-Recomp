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

// Function: sub_004F4AB8
// Address: 0x4f4ab8 - 0x4f4ae8
void sub_004F4AB8_0x4f4ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4AB8_0x4f4ab8");
#endif

    ctx->pc = 0x4f4ab8u;

    // 0x4f4ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x4F4AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4AB8u;
        // 0x4f4abc: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4AC0u;
    // 0x4f4ac0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4f4ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4f4ac4: 0x0  nop
    ctx->pc = 0x4f4ac4u;
    // NOP
    // 0x4f4ac8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4f4ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4f4acc: 0x0  nop
    ctx->pc = 0x4f4accu;
    // NOP
    // 0x4f4ad0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4f4ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4f4ad4: 0x0  nop
    ctx->pc = 0x4f4ad4u;
    // NOP
    // 0x4f4ad8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4f4ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4f4adc: 0x0  nop
    ctx->pc = 0x4f4adcu;
    // NOP
    // 0x4f4ae0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4f4ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4f4ae4: 0x0  nop
    ctx->pc = 0x4f4ae4u;
    // NOP
    ctx->pc = 0x4f4ae8u;
}
