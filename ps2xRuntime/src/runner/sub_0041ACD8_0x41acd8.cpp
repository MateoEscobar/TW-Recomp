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

// Function: sub_0041ACD8
// Address: 0x41acd8 - 0x41ad00
void sub_0041ACD8_0x41acd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041ACD8_0x41acd8");
#endif

    ctx->pc = 0x41acd8u;

    // 0x41acd8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x41acd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x41acdc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x41acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x41ace0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x41ace0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x41ace4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x41ace4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x41ace8: 0x8ca2489c  lw          $v0, 0x489C($a1)
    ctx->pc = 0x41ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41acec: 0x42383  sra         $a0, $a0, 14
    ctx->pc = 0x41acecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 14));
    // 0x41acf0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x41acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x41acf4: 0x3e00008  jr          $ra
    ctx->pc = 0x41ACF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ACF4u;
        // 0x41acf8: 0xe44c570c  swc1        $f12, 0x570C($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 22284), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41ACF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41ACFCu;
    // 0x41acfc: 0x0  nop
    ctx->pc = 0x41acfcu;
    // NOP
    ctx->pc = 0x41ad00u;
}
