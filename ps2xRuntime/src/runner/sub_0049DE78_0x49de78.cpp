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

// Function: sub_0049DE78
// Address: 0x49de78 - 0x49deb0
void sub_0049DE78_0x49de78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049DE78_0x49de78");
#endif

    ctx->pc = 0x49de78u;

    // 0x49de78: 0x84a7001c  lh          $a3, 0x1C($a1)
    ctx->pc = 0x49de78u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x49de7c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x49de7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x49de80: 0x248604f0  addiu       $a2, $a0, 0x4F0
    ctx->pc = 0x49de80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1264));
    // 0x49de84: 0xaf858a58  sw          $a1, -0x75A8($gp)
    ctx->pc = 0x49de84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937176), GPR_U32(ctx, 5));
    // 0x49de88: 0xac8704f0  sw          $a3, 0x4F0($a0)
    ctx->pc = 0x49de88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x7104F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7104F0u, _value); } while (0);
    // 0x49de8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49de90: 0x84a3001e  lh          $v1, 0x1E($a1)
    ctx->pc = 0x49de90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x49de94: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x49de94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7104F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7104F4u, _value); } while (0);
    // 0x49de98: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x49de98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x49de9c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x49de9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7104F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7104F8u, _value); } while (0);
    // 0x49dea0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x49dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x49dea4: 0x3e00008  jr          $ra
    ctx->pc = 0x49DEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DEA4u;
        // 0x49dea8: 0xacc3000c  sw          $v1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49DEACu;
    // 0x49deac: 0x0  nop
    ctx->pc = 0x49deacu;
    // NOP
    ctx->pc = 0x49deb0u;
}
