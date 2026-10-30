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

// Function: sub_002C4338
// Address: 0x2c4338 - 0x2c4360
void sub_002C4338_0x2c4338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4338_0x2c4338");
#endif

    ctx->pc = 0x2c4338u;

    // 0x2c4338: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c4338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c433c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c433cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4340: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x2c4340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2c4344: 0xac45021c  sw          $a1, 0x21C($v0)
    ctx->pc = 0x2c4344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 5));
    // 0x2c4348: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c4348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c434c: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x2c434cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x2c4350: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c4350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2c4354: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2c4354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2c4358: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4358u;
        // 0x2c435c: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4360u;
}
