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

// Function: sub_00112E70
// Address: 0x112e70 - 0x112e90
void sub_00112E70_0x112e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112E70_0x112e70");
#endif

    switch (ctx->pc) {
        case 0x112e80u: goto label_112e80;
        default: break;
    }

    ctx->pc = 0x112e70u;

    // 0x112e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112e78: 0xc0437cc  jal         func_10DF30
    ctx->pc = 0x112E78u;
    SET_GPR_U32(ctx, 31, 0x112E80u);
    ctx->pc = 0x112E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E78u;
    // 0x112e7c: 0x24840064  addiu       $a0, $a0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF30u, 0x112E78u, 0x112E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E80u;
label_112e80:
    // 0x112e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112e84: 0x3e00008  jr          $ra
    ctx->pc = 0x112E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E84u;
        // 0x112e88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112E8Cu;
    // 0x112e8c: 0x0  nop
    ctx->pc = 0x112e8cu;
    // NOP
    ctx->pc = 0x112e90u;
}
