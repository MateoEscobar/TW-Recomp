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

// Function: sub_002391A8
// Address: 0x2391a8 - 0x2391c0
void sub_002391A8_0x2391a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002391A8_0x2391a8");
#endif

    ctx->pc = 0x2391a8u;

    // 0x2391a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2391a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2391ac: 0x24420918  addiu       $v0, $v0, 0x918
    ctx->pc = 0x2391acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2328));
    // 0x2391b0: 0xe44c002c  swc1        $f12, 0x2C($v0)
    ctx->pc = 0x2391b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x510944u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510944u, _value); } while (0); }
    // 0x2391b4: 0xac440024  sw          $a0, 0x24($v0)
    ctx->pc = 0x2391b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x51093Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x51093Cu, _value); } while (0);
    // 0x2391b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2391B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2391BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391B8u;
        // 0x2391bc: 0xac450028  sw          $a1, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2391B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2391C0u;
}
