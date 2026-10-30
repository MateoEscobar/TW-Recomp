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

// Function: sub_00442D70
// Address: 0x442d70 - 0x442d98
void sub_00442D70_0x442d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00442D70_0x442d70");
#endif

    switch (ctx->pc) {
        case 0x442d80u: goto label_442d80;
        default: break;
    }

    ctx->pc = 0x442d70u;

    // 0x442d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x442d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x442d74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x442d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x442d78: 0xc110a34  jal         func_4428D0
    ctx->pc = 0x442D78u;
    SET_GPR_U32(ctx, 31, 0x442D80u);
    ctx->pc = 0x442D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x442D78u;
    // 0x442d7c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4428D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4428D0u, 0x442D78u, 0x442D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442D80u;
label_442d80:
    // 0x442d80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x442d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x442d84: 0x3e00008  jr          $ra
    ctx->pc = 0x442D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x442D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442D84u;
        // 0x442d88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x442D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x442D8Cu;
    // 0x442d8c: 0x0  nop
    ctx->pc = 0x442d8cu;
    // NOP
    // 0x442d90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x442d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x442d94: 0x0  nop
    ctx->pc = 0x442d94u;
    // NOP
    ctx->pc = 0x442d98u;
}
