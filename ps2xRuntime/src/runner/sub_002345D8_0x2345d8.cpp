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

// Function: sub_002345D8
// Address: 0x2345d8 - 0x2345f8
void sub_002345D8_0x2345d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002345D8_0x2345d8");
#endif

    ctx->pc = 0x2345d8u;

    // 0x2345d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2345d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2345dc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2345dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2345e0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2345e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2345e4: 0xe44c0680  swc1        $f12, 0x680($v0)
    ctx->pc = 0x2345e4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x510680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510680u, _value); } while (0); }
    // 0x2345e8: 0xe46d0684  swc1        $f13, 0x684($v1)
    ctx->pc = 0x2345e8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x510684u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510684u, _value); } while (0); }
    // 0x2345ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2345ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2345F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345ECu;
        // 0x2345f0: 0xaca40688  sw          $a0, 0x688($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1672), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2345ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2345F4u;
    // 0x2345f4: 0x0  nop
    ctx->pc = 0x2345f4u;
    // NOP
    ctx->pc = 0x2345f8u;
}
