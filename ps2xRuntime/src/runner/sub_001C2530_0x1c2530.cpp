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

// Function: sub_001C2530
// Address: 0x1c2530 - 0x1c2568
void sub_001C2530_0x1c2530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2530_0x1c2530");
#endif

    ctx->pc = 0x1c2530u;

    // 0x1c2530: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1c2530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c2534: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2534u;
    {
        const bool branch_taken_0x1c2534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2534) {
            ctx->pc = 0x1C255Cu;
            goto label_1c255c;
        }
    }
    ctx->pc = 0x1C253Cu;
    // 0x1c253c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c253cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2540: 0x0  nop
    ctx->pc = 0x1c2540u;
    // NOP
    // 0x1c2544: 0x46006028  max.s       $f0, $f12, $f0
    ctx->pc = 0x1c2544u;
    ctx->f[0] = std::max(ctx->f[12], ctx->f[0]);
    // 0x1c2548: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c2548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c254c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c254cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2550: 0x0  nop
    ctx->pc = 0x1c2550u;
    // NOP
    // 0x1c2554: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1c2554u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1c2558: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x1c2558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_1c255c:
    // 0x1c255c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C255Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C255Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2564u;
    // 0x1c2564: 0x0  nop
    ctx->pc = 0x1c2564u;
    // NOP
    ctx->pc = 0x1c2568u;
}
