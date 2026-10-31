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

// Function: sub_0029CE40
// Address: 0x29ce40 - 0x29ce70
void sub_0029CE40_0x29ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CE40_0x29ce40");
#endif

    switch (ctx->pc) {
        case 0x29ce5cu: goto label_29ce5c;
        default: break;
    }

    ctx->pc = 0x29ce40u;

    // 0x29ce40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ce44: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29CE44u;
    {
        const bool branch_taken_0x29ce44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE44u;
        // 0x29ce48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce44) {
            ctx->pc = 0x29CE54u;
            goto label_29ce54;
        }
    }
    ctx->pc = 0x29CE4Cu;
    // 0x29ce4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29CE4Cu;
    {
        const bool branch_taken_0x29ce4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE4Cu;
        // 0x29ce50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce4c) {
            ctx->pc = 0x29CE60u;
            goto label_29ce60;
        }
    }
    ctx->pc = 0x29CE54u;
label_29ce54:
    // 0x29ce54: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x29CE54u;
    SET_GPR_U32(ctx, 31, 0x29CE5Cu);
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x29CE54u, 0x29CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE5Cu;
label_29ce5c:
    // 0x29ce5c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x29ce5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29ce60:
    // 0x29ce60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ce60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ce64: 0x3e00008  jr          $ra
    ctx->pc = 0x29CE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE64u;
        // 0x29ce68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CE6Cu;
    // 0x29ce6c: 0x0  nop
    ctx->pc = 0x29ce6cu;
    // NOP
    ctx->pc = 0x29ce70u;
}
