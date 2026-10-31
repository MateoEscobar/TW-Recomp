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

// Function: sub_0027BBD0
// Address: 0x27bbd0 - 0x27bbf8
void sub_0027BBD0_0x27bbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BBD0_0x27bbd0");
#endif

    switch (ctx->pc) {
        case 0x27bbe0u: goto label_27bbe0;
        default: break;
    }

    ctx->pc = 0x27bbd0u;

    // 0x27bbd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27bbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27bbd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27bbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27bbd8: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BBD8u;
    SET_GPR_U32(ctx, 31, 0x27BBE0u);
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BBD8u, 0x27BBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BBE0u;
label_27bbe0:
    // 0x27bbe0: 0x38420028  xori        $v0, $v0, 0x28
    ctx->pc = 0x27bbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)40);
    // 0x27bbe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bbe8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27bbe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27bbec: 0x3e00008  jr          $ra
    ctx->pc = 0x27BBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BBECu;
        // 0x27bbf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BBF4u;
    // 0x27bbf4: 0x0  nop
    ctx->pc = 0x27bbf4u;
    // NOP
    ctx->pc = 0x27bbf8u;
}
