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

// Function: sub_0010BF90
// Address: 0x10bf90 - 0x10bfc0
void sub_0010BF90_0x10bf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BF90_0x10bf90");
#endif

    ctx->pc = 0x10bf90u;

    // 0x10bf90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10bf94: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x10bf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x10bf98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10bf98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10bf9c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x10bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x10bfa0: 0x90640410  lbu         $a0, 0x410($v1)
    ctx->pc = 0x10bfa0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
    // 0x10bfa4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BFA4u;
    {
        const bool branch_taken_0x10bfa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bfa4) {
            ctx->pc = 0x10BFB4u;
            goto label_10bfb4;
        }
    }
    ctx->pc = 0x10BFACu;
    // 0x10bfac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10bfacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10bfb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10bfb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10bfb4:
    // 0x10bfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x10BFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BFBCu;
    // 0x10bfbc: 0x0  nop
    ctx->pc = 0x10bfbcu;
    // NOP
    ctx->pc = 0x10bfc0u;
}
