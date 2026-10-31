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

// Function: sub_0043F9A0
// Address: 0x43f9a0 - 0x43f9c8
void sub_0043F9A0_0x43f9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043F9A0_0x43f9a0");
#endif

    ctx->pc = 0x43f9a0u;

    // 0x43f9a0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x43f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x43f9a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x43f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x43f9a8: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x43f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x43f9ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x43f9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x43f9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x43F9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F9B0u;
        // 0x43f9b4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43F9B8u;
    // 0x43f9b8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x43f9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x43f9bc: 0x0  nop
    ctx->pc = 0x43f9bcu;
    // NOP
    // 0x43f9c0: 0x244200d8  addiu       $v0, $v0, 0xD8
    ctx->pc = 0x43f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x43f9c4: 0x0  nop
    ctx->pc = 0x43f9c4u;
    // NOP
    ctx->pc = 0x43f9c8u;
}
