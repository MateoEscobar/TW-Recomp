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

// Function: sub_001D4570
// Address: 0x1d4570 - 0x1d4590
void sub_001D4570_0x1d4570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4570_0x1d4570");
#endif

    ctx->pc = 0x1d4570u;

    // 0x1d4570: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d4570u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d4574: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1d4574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d4578: 0x8c8300b0  lw          $v1, 0xB0($a0)
    ctx->pc = 0x1d4578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1d457c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1d457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d4580: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x1d4580u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d4584: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4584u;
        // 0x1d4588: 0xa3100b  movn        $v0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D458Cu;
    // 0x1d458c: 0x0  nop
    ctx->pc = 0x1d458cu;
    // NOP
    ctx->pc = 0x1d4590u;
}
