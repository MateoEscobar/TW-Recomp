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

// Function: sub_002364A0
// Address: 0x2364a0 - 0x2364d8
void sub_002364A0_0x2364a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002364A0_0x2364a0");
#endif

    ctx->pc = 0x2364a0u;

    // 0x2364a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2364a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2364a4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2364a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2364a8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2364a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2364ac: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2364acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2364b0: 0xe44c0260  swc1        $f12, 0x260($v0)
    ctx->pc = 0x2364b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x510260u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510260u, _value); } while (0); }
    // 0x2364b4: 0xe46d0264  swc1        $f13, 0x264($v1)
    ctx->pc = 0x2364b4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x510264u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510264u, _value); } while (0); }
    // 0x2364b8: 0xe48e0268  swc1        $f14, 0x268($a0)
    ctx->pc = 0x2364b8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x510268u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510268u, _value); } while (0); }
    // 0x2364bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2364BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2364C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364BCu;
        // 0x2364c0: 0xe4af026c  swc1        $f15, 0x26C($a1) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 620), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2364BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2364C4u;
    // 0x2364c4: 0x0  nop
    ctx->pc = 0x2364c4u;
    // NOP
    // 0x2364c8: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x2364c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2364cc: 0x0  nop
    ctx->pc = 0x2364ccu;
    // NOP
    // 0x2364d0: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x2364d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2364d4: 0x0  nop
    ctx->pc = 0x2364d4u;
    // NOP
    ctx->pc = 0x2364d8u;
}
