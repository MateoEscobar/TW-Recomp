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

// Function: sub_003A50A8
// Address: 0x3a50a8 - 0x3a50c0
void sub_003A50A8_0x3a50a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A50A8_0x3a50a8");
#endif

    ctx->pc = 0x3a50a8u;

    // 0x3a50a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3a50ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3a50acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3a50b0: 0xac442de8  sw          $a0, 0x2DE8($v0)
    ctx->pc = 0x3a50b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6F2DE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F2DE8u, _value); } while (0);
    // 0x3a50b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a50b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a50b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A50B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A50BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50B8u;
        // 0x3a50bc: 0xac652dec  sw          $a1, 0x2DEC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11756), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A50B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A50C0u;
}
