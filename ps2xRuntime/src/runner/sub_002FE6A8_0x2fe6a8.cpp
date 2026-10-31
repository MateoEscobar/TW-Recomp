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

// Function: sub_002FE6A8
// Address: 0x2fe6a8 - 0x2fe6c8
void sub_002FE6A8_0x2fe6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE6A8_0x2fe6a8");
#endif

    ctx->pc = 0x2fe6a8u;

    // 0x2fe6a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fe6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fe6ac: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2fe6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2fe6b0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2fe6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2fe6b4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2fe6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2fe6b8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fe6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fe6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE6BCu;
        // 0x2fe6c0: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE6C4u;
    // 0x2fe6c4: 0x0  nop
    ctx->pc = 0x2fe6c4u;
    // NOP
    ctx->pc = 0x2fe6c8u;
}
