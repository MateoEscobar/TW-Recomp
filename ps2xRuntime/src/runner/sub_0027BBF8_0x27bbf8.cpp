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

// Function: sub_0027BBF8
// Address: 0x27bbf8 - 0x27bc20
void sub_0027BBF8_0x27bbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BBF8_0x27bbf8");
#endif

    switch (ctx->pc) {
        case 0x27bc08u: goto label_27bc08;
        default: break;
    }

    ctx->pc = 0x27bbf8u;

    // 0x27bbf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27bbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27bbfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27bbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27bc00: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BC00u;
    SET_GPR_U32(ctx, 31, 0x27BC08u);
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BC00u, 0x27BC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC08u;
label_27bc08:
    // 0x27bc08: 0x38420027  xori        $v0, $v0, 0x27
    ctx->pc = 0x27bc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)39);
    // 0x27bc0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bc10: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27bc10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27bc14: 0x3e00008  jr          $ra
    ctx->pc = 0x27BC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BC14u;
        // 0x27bc18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BC1Cu;
    // 0x27bc1c: 0x0  nop
    ctx->pc = 0x27bc1cu;
    // NOP
    ctx->pc = 0x27bc20u;
}
