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

// Function: sub_004EE1E0
// Address: 0x4ee1e0 - 0x4ee218
void sub_004EE1E0_0x4ee1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE1E0_0x4ee1e0");
#endif

    ctx->pc = 0x4ee1e0u;

    // 0x4ee1e0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE1E4u;
        // 0x4ee1e8: 0x24423020  addiu       $v0, $v0, 0x3020 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE1ECu;
    // 0x4ee1ec: 0x0  nop
    ctx->pc = 0x4ee1ecu;
    // NOP
    // 0x4ee1f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ee1f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4ee1f4: 0x0  nop
    ctx->pc = 0x4ee1f4u;
    // NOP
    // 0x4ee1f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4ee1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ee1fc: 0x0  nop
    ctx->pc = 0x4ee1fcu;
    // NOP
    // 0x4ee200: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4ee200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4ee204: 0x0  nop
    ctx->pc = 0x4ee204u;
    // NOP
    // 0x4ee208: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4ee208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ee20c: 0x0  nop
    ctx->pc = 0x4ee20cu;
    // NOP
    // 0x4ee210: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4ee210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4ee214: 0x0  nop
    ctx->pc = 0x4ee214u;
    // NOP
    ctx->pc = 0x4ee218u;
}
