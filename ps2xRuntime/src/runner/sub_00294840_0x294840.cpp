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

// Function: sub_00294840
// Address: 0x294840 - 0x294860
void sub_00294840_0x294840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294840_0x294840");
#endif

    ctx->pc = 0x294840u;

    // 0x294840: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x294840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x294844: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x294844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x294848: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x294848u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x29484c: 0xa0440ada  sb          $a0, 0xADA($v0)
    ctx->pc = 0x29484cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x510ADAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x510ADAu, _value); } while (0);
    // 0x294850: 0xa0650adb  sb          $a1, 0xADB($v1)
    ctx->pc = 0x294850u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x510ADBu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x510ADBu, _value); } while (0);
    // 0x294854: 0x3e00008  jr          $ra
    ctx->pc = 0x294854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294854u;
        // 0x294858: 0xa0e60adc  sb          $a2, 0xADC($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 2780), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29485Cu;
    // 0x29485c: 0x0  nop
    ctx->pc = 0x29485cu;
    // NOP
    ctx->pc = 0x294860u;
}
