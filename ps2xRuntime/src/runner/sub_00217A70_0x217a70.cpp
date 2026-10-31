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

// Function: sub_00217A70
// Address: 0x217a70 - 0x217a98
void sub_00217A70_0x217a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217A70_0x217a70");
#endif

    switch (ctx->pc) {
        case 0x217a8cu: goto label_217a8c;
        default: break;
    }

    ctx->pc = 0x217a70u;

    // 0x217a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217a78: 0x8c8400d8  lw          $a0, 0xD8($a0)
    ctx->pc = 0x217a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x217a7c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x217A7Cu;
    {
        const bool branch_taken_0x217a7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x217A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A7Cu;
        // 0x217a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a7c) {
            ctx->pc = 0x217A8Cu;
            goto label_217a8c;
        }
    }
    ctx->pc = 0x217A84u;
    // 0x217a84: 0xc05fdee  jal         func_17F7B8
    ctx->pc = 0x217A84u;
    SET_GPR_U32(ctx, 31, 0x217A8Cu);
    ctx->pc = 0x217A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A84u;
    // 0x217a88: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7B8u, 0x217A84u, 0x217A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A8Cu;
label_217a8c:
    // 0x217a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217a90: 0x3e00008  jr          $ra
    ctx->pc = 0x217A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A90u;
        // 0x217a94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217A98u;
}
