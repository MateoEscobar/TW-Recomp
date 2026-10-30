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

// Function: sub_00228AD8
// Address: 0x228ad8 - 0x228af8
void sub_00228AD8_0x228ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228AD8_0x228ad8");
#endif

    ctx->pc = 0x228ad8u;

    // 0x228ad8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x228ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x228adc: 0x24626650  addiu       $v0, $v1, 0x6650
    ctx->pc = 0x228adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 26192));
    // 0x228ae0: 0xa0646650  sb          $a0, 0x6650($v1)
    ctx->pc = 0x228ae0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B6650u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B6650u, _value); } while (0);
    // 0x228ae4: 0xa0470003  sb          $a3, 0x3($v0)
    ctx->pc = 0x228ae4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6B6653u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B6653u, _value); } while (0);
    // 0x228ae8: 0xa0450001  sb          $a1, 0x1($v0)
    ctx->pc = 0x228ae8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B6651u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B6651u, _value); } while (0);
    // 0x228aec: 0x3e00008  jr          $ra
    ctx->pc = 0x228AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228AECu;
        // 0x228af0: 0xa0460002  sb          $a2, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228AF4u;
    // 0x228af4: 0x0  nop
    ctx->pc = 0x228af4u;
    // NOP
    ctx->pc = 0x228af8u;
}
