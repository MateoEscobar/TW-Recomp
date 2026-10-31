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

// Function: sub_00303E68
// Address: 0x303e68 - 0x303e90
void sub_00303E68_0x303e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303E68_0x303e68");
#endif

    switch (ctx->pc) {
        case 0x303e78u: goto label_303e78;
        default: break;
    }

    ctx->pc = 0x303e68u;

    // 0x303e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x303e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x303e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x303e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x303e70: 0xc137832  jal         func_4DE0C8
    ctx->pc = 0x303E70u;
    SET_GPR_U32(ctx, 31, 0x303E78u);
    ctx->pc = 0x303E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303E70u;
    // 0x303e74: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x303E70u, 0x303E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E78u;
label_303e78:
    // 0x303e78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x303e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x303e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x303e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303e80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x303e80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x303e84: 0x3e00008  jr          $ra
    ctx->pc = 0x303E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E84u;
        // 0x303e88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303E8Cu;
    // 0x303e8c: 0x0  nop
    ctx->pc = 0x303e8cu;
    // NOP
    ctx->pc = 0x303e90u;
}
