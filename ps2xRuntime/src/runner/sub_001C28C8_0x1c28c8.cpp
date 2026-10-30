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

// Function: sub_001C28C8
// Address: 0x1c28c8 - 0x1c2908
void sub_001C28C8_0x1c28c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C28C8_0x1c28c8");
#endif

    ctx->pc = 0x1c28c8u;

    // 0x1c28c8: 0x8c8200a8  lw          $v0, 0xA8($a0)
    ctx->pc = 0x1c28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1c28cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C28CCu;
    {
        const bool branch_taken_0x1c28cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c28cc) {
            ctx->pc = 0x1C28FCu;
            goto label_1c28fc;
        }
    }
    ctx->pc = 0x1C28D4u;
    // 0x1c28d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c28d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c28d8: 0x0  nop
    ctx->pc = 0x1c28d8u;
    // NOP
    // 0x1c28dc: 0x46006028  max.s       $f0, $f12, $f0
    ctx->pc = 0x1c28dcu;
    ctx->f[0] = std::max(ctx->f[12], ctx->f[0]);
    // 0x1c28e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c28e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c28e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c28e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c28e8: 0x0  nop
    ctx->pc = 0x1c28e8u;
    // NOP
    // 0x1c28ec: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1c28ecu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1c28f0: 0xac8500a0  sw          $a1, 0xA0($a0)
    ctx->pc = 0x1c28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 5));
    // 0x1c28f4: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x1c28f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x1c28f8: 0xac8600a4  sw          $a2, 0xA4($a0)
    ctx->pc = 0x1c28f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 6));
label_1c28fc:
    // 0x1c28fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C28FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C28FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2904u;
    // 0x1c2904: 0x0  nop
    ctx->pc = 0x1c2904u;
    // NOP
    ctx->pc = 0x1c2908u;
}
