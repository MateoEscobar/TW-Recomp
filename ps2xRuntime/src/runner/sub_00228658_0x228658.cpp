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

// Function: sub_00228658
// Address: 0x228658 - 0x228680
void sub_00228658_0x228658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228658_0x228658");
#endif

    switch (ctx->pc) {
        case 0x228674u: goto label_228674;
        default: break;
    }

    ctx->pc = 0x228658u;

    // 0x228658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22865c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22865cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228660: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x228660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x228664: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x228664u;
    {
        const bool branch_taken_0x228664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x228668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228664u;
        // 0x228668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228664) {
            ctx->pc = 0x228674u;
            goto label_228674;
        }
    }
    ctx->pc = 0x22866Cu;
    // 0x22866c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x22866Cu;
    SET_GPR_U32(ctx, 31, 0x228674u);
    ctx->pc = 0x228670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22866Cu;
    // 0x228670: 0x248400d0  addiu       $a0, $a0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x22866Cu, 0x228674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228674u;
label_228674:
    // 0x228674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228678: 0x3e00008  jr          $ra
    ctx->pc = 0x228678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228678u;
        // 0x22867c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228680u;
}
