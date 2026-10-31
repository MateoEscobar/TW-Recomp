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

// Function: sub_00321DB8
// Address: 0x321db8 - 0x321de8
void sub_00321DB8_0x321db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321DB8_0x321db8");
#endif

    ctx->pc = 0x321db8u;

    // 0x321db8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x321db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x321dbc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x321dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x321dc0: 0x24634290  addiu       $v1, $v1, 0x4290
    ctx->pc = 0x321dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17040));
    // 0x321dc4: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x321dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x321dc8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x321dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321dcc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x321dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x321dd0: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x321dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x321dd4: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x321dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x321dd8: 0xa0800014  sb          $zero, 0x14($a0)
    ctx->pc = 0x321dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x321ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x321DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DDCu;
        // 0x321de0: 0xa0800015  sb          $zero, 0x15($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321DE4u;
    // 0x321de4: 0x0  nop
    ctx->pc = 0x321de4u;
    // NOP
    ctx->pc = 0x321de8u;
}
