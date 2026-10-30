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

// Function: sub_0015AD80
// Address: 0x15ad80 - 0x15ada0
void sub_0015AD80_0x15ad80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AD80_0x15ad80");
#endif

    ctx->pc = 0x15ad80u;

    // 0x15ad80: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x15ad84: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x15ad84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x15ad88: 0x2442a2b0  addiu       $v0, $v0, -0x5D50
    ctx->pc = 0x15ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943408));
    // 0x15ad8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ad90: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x15ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x15ad94: 0xaca3c708  sw          $v1, -0x38F8($a1)
    ctx->pc = 0x15ad94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x50C708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C708u, _value); } while (0);
    // 0x15ad98: 0x3e00008  jr          $ra
    ctx->pc = 0x15AD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD98u;
        // 0x15ad9c: 0xac82c734  sw          $v0, -0x38CC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294952756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ADA0u;
}
