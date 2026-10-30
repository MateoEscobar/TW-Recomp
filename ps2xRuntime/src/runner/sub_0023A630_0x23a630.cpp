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

// Function: sub_0023A630
// Address: 0x23a630 - 0x23a658
void sub_0023A630_0x23a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A630_0x23a630");
#endif

    ctx->pc = 0x23a630u;

    // 0x23a630: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x23a630u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x23a634: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x23a634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x23a638: 0x460d6b42  mul.s       $f13, $f13, $f13
    ctx->pc = 0x23a638u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x23a63c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x23a640: 0x460e7382  mul.s       $f14, $f14, $f14
    ctx->pc = 0x23a640u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x23a644: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23a644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23a648: 0xe48c04bc  swc1        $f12, 0x4BC($a0)
    ctx->pc = 0x23a648u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5104BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5104BCu, _value); } while (0); }
    // 0x23a64c: 0xe46d04c0  swc1        $f13, 0x4C0($v1)
    ctx->pc = 0x23a64cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5104C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5104C0u, _value); } while (0); }
    // 0x23a650: 0x3e00008  jr          $ra
    ctx->pc = 0x23A650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A650u;
        // 0x23a654: 0xe44e04c4  swc1        $f14, 0x4C4($v0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1220), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A658u;
}
