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

// Function: sub_00341E18
// Address: 0x341e18 - 0x341e40
void sub_00341E18_0x341e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341E18_0x341e18");
#endif

    ctx->pc = 0x341e18u;

    // 0x341e18: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x341e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x341e1c: 0x3c013f7a  lui         $at, 0x3F7A
    ctx->pc = 0x341e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16250 << 16));
    // 0x341e20: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x341e20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x341e24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x341e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341e28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x341E28u;
    {
        const bool branch_taken_0x341e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341e28) {
            ctx->pc = 0x341E38u;
            goto label_341e38;
        }
    }
    ctx->pc = 0x341E30u;
    // 0x341e30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x341e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x341e34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x341e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341e38:
    // 0x341e38: 0x3e00008  jr          $ra
    ctx->pc = 0x341E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341E40u;
}
