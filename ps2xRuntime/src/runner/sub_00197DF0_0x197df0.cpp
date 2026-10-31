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

// Function: sub_00197DF0
// Address: 0x197df0 - 0x197e28
void sub_00197DF0_0x197df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197DF0_0x197df0");
#endif

    ctx->pc = 0x197df0u;

    // 0x197df0: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x197df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x197df4: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x197df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
    // 0x197df8: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x197df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x197dfc: 0x3c070019  lui         $a3, 0x19
    ctx->pc = 0x197dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
    // 0x197e00: 0x24427d58  addiu       $v0, $v0, 0x7D58
    ctx->pc = 0x197e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32088));
    // 0x197e04: 0x24637d60  addiu       $v1, $v1, 0x7D60
    ctx->pc = 0x197e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32096));
    // 0x197e08: 0x24c67d98  addiu       $a2, $a2, 0x7D98
    ctx->pc = 0x197e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32152));
    // 0x197e0c: 0x24e77dc8  addiu       $a3, $a3, 0x7DC8
    ctx->pc = 0x197e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32200));
    // 0x197e10: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x197e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x197e14: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x197e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x197e18: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x197e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x197e1c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x197e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x197e20: 0x3e00008  jr          $ra
    ctx->pc = 0x197E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E20u;
        // 0x197e24: 0xac87000c  sw          $a3, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197E28u;
}
