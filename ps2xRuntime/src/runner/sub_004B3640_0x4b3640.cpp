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

// Function: sub_004B3640
// Address: 0x4b3640 - 0x4b3660
void sub_004B3640_0x4b3640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3640_0x4b3640");
#endif

    switch (ctx->pc) {
        case 0x4b3650u: goto label_4b3650;
        default: break;
    }

    ctx->pc = 0x4b3640u;

    // 0x4b3640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b3640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b3644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b3648: 0xc12dc44  jal         func_4B7110
    ctx->pc = 0x4B3648u;
    SET_GPR_U32(ctx, 31, 0x4B3650u);
    ctx->pc = 0x4B364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3648u;
    // 0x4b364c: 0xc0302d  daddu       $a2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7110u, 0x4B3648u, 0x4B3650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3650u;
label_4b3650:
    // 0x4b3650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b3650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3654: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3654u;
        // 0x4b3658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B365Cu;
    // 0x4b365c: 0x0  nop
    ctx->pc = 0x4b365cu;
    // NOP
    ctx->pc = 0x4b3660u;
}
