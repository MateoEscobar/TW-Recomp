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

// Function: sub_003A6EC8
// Address: 0x3a6ec8 - 0x3a6ee8
void sub_003A6EC8_0x3a6ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6EC8_0x3a6ec8");
#endif

    ctx->pc = 0x3a6ec8u;

    // 0x3a6ec8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a6ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a6ecc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3a6eccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6ed0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3a6ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3a6ed4: 0xac850128  sw          $a1, 0x128($a0)
    ctx->pc = 0x3a6ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 5));
    // 0x3a6ed8: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x3a6ed8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x3a6edc: 0xa083010d  sb          $v1, 0x10D($a0)
    ctx->pc = 0x3a6edcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 269), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a6ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6EE0u;
        // 0x3a6ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6EE8u;
}
