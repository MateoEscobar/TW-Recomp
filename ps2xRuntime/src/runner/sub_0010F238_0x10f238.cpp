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

// Function: sub_0010F238
// Address: 0x10f238 - 0x10f258
void sub_0010F238_0x10f238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F238_0x10f238");
#endif

    ctx->pc = 0x10f238u;

    // 0x10f238: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x10f238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f23c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10f240: 0x2442a9e0  addiu       $v0, $v0, -0x5620
    ctx->pc = 0x10f240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945248));
    // 0x10f244: 0x90a3000e  lbu         $v1, 0xE($a1)
    ctx->pc = 0x10f244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x10f248: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x10f248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10f24c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10f250: 0x3e00008  jr          $ra
    ctx->pc = 0x10F250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F250u;
        // 0x10f254: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F258u;
}
