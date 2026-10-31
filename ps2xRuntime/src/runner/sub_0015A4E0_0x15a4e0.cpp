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

// Function: sub_0015A4E0
// Address: 0x15a4e0 - 0x15a508
void sub_0015A4E0_0x15a4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A4E0_0x15a4e0");
#endif

    ctx->pc = 0x15a4e0u;

    // 0x15a4e0: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x15a4e4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x15a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x15a4e8: 0x2442b8c0  addiu       $v0, $v0, -0x4740
    ctx->pc = 0x15a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
    // 0x15a4ec: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x15a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x15a4f0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15a4f4: 0xac80c708  sw          $zero, -0x38F8($a0)
    ctx->pc = 0x15a4f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C708u, _value); } while (0);
    // 0x15a4f8: 0xac62c734  sw          $v0, -0x38CC($v1)
    ctx->pc = 0x15a4f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50C734u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C734u, _value); } while (0);
    // 0x15a4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x15A4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4FCu;
        // 0x15a500: 0xaca0c724  sw          $zero, -0x38DC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294952740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A504u;
    // 0x15a504: 0x0  nop
    ctx->pc = 0x15a504u;
    // NOP
    ctx->pc = 0x15a508u;
}
