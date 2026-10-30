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

// Function: sub_002CADE0
// Address: 0x2cade0 - 0x2cae08
void sub_002CADE0_0x2cade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CADE0_0x2cade0");
#endif

    ctx->pc = 0x2cade0u;

    // 0x2cade0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2cade0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2cade4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2cade4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2cade8: 0x24630db0  addiu       $v1, $v1, 0xDB0
    ctx->pc = 0x2cade8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3504));
    // 0x2cadec: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2cadecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2cadf0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cadf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cadf4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2cadf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2cadf8: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2cadf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cadfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CADFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADFCu;
        // 0x2cae00: 0xa0800005  sb          $zero, 0x5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CADFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAE04u;
    // 0x2cae04: 0x0  nop
    ctx->pc = 0x2cae04u;
    // NOP
    ctx->pc = 0x2cae08u;
}
