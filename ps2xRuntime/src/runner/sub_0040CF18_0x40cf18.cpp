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

// Function: sub_0040CF18
// Address: 0x40cf18 - 0x40cf40
void sub_0040CF18_0x40cf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040CF18_0x40cf18");
#endif

    switch (ctx->pc) {
        case 0x40cf34u: goto label_40cf34;
        default: break;
    }

    ctx->pc = 0x40cf18u;

    // 0x40cf18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40cf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x40cf1c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40cf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x40cf20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40cf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40cf24: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x40cf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x40cf28: 0x24a5ce30  addiu       $a1, $a1, -0x31D0
    ctx->pc = 0x40cf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954544));
    // 0x40cf2c: 0xc0510d2  jal         func_144348
    ctx->pc = 0x40CF2Cu;
    SET_GPR_U32(ctx, 31, 0x40CF34u);
    ctx->pc = 0x40CF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CF2Cu;
    // 0x40cf30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144348u, 0x40CF2Cu, 0x40CF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CF34u;
label_40cf34:
    // 0x40cf34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40cf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40cf38: 0x3e00008  jr          $ra
    ctx->pc = 0x40CF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CF38u;
        // 0x40cf3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40CF40u;
}
