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

// Function: sub_0010F1B0
// Address: 0x10f1b0 - 0x10f1e8
void sub_0010F1B0_0x10f1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F1B0_0x10f1b0");
#endif

    ctx->pc = 0x10f1b0u;

    // 0x10f1b0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x10f1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f1b4: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x10f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x10f1b8: 0x8c448670  lw          $a0, -0x7990($v0)
    ctx->pc = 0x10f1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x598670u));
    // 0x10f1bc: 0x90a3000f  lbu         $v1, 0xF($a1)
    ctx->pc = 0x10f1bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 15)));
    // 0x10f1c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x10f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10f1c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10f1c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10f1cc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x10f1ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10f1d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10f1d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10f1d4: 0x0  nop
    ctx->pc = 0x10f1d4u;
    // NOP
    // 0x10f1d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10f1d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10f1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x10F1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F1E4u;
    // 0x10f1e4: 0x0  nop
    ctx->pc = 0x10f1e4u;
    // NOP
    ctx->pc = 0x10f1e8u;
}
