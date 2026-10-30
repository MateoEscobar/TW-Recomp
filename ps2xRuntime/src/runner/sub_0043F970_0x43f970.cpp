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

// Function: sub_0043F970
// Address: 0x43f970 - 0x43f990
void sub_0043F970_0x43f970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043F970_0x43f970");
#endif

    ctx->pc = 0x43f970u;

    // 0x43f970: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x43f970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x43f974: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x43f974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x43f978: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x43f978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x43f97c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x43f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x43f980: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x43f980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x43f984: 0x3e00008  jr          $ra
    ctx->pc = 0x43F984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43F984u;
        // 0x43f988: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43F984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43F98Cu;
    // 0x43f98c: 0x0  nop
    ctx->pc = 0x43f98cu;
    // NOP
    ctx->pc = 0x43f990u;
}
