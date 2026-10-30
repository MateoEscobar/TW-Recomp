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

// Function: sub_003A1688
// Address: 0x3a1688 - 0x3a16b8
void sub_003A1688_0x3a1688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1688_0x3a1688");
#endif

    ctx->pc = 0x3a1688u;

    // 0x3a1688: 0x84820060  lh          $v0, 0x60($a0)
    ctx->pc = 0x3a1688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x3a168c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a168cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3a1690: 0x24632c58  addiu       $v1, $v1, 0x2C58
    ctx->pc = 0x3a1690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11352));
    // 0x3a1694: 0xc4820050  lwc1        $f2, 0x50($a0)
    ctx->pc = 0x3a1694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a1698: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a1698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a169c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a169cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a16a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a16a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3a16a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a16a8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a16a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3a16ac: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x3a16acu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x3a16b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A16B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A16B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A16B8u;
}
