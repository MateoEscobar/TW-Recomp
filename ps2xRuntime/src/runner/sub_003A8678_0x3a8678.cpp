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

// Function: sub_003A8678
// Address: 0x3a8678 - 0x3a8698
void sub_003A8678_0x3a8678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8678_0x3a8678");
#endif

    switch (ctx->pc) {
        case 0x3a868cu: goto label_3a868c;
        default: break;
    }

    ctx->pc = 0x3a8678u;

    // 0x3a8678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a8678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a867c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a867cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a8680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a8684: 0xc0ea17c  jal         func_3A85F0
    ctx->pc = 0x3A8684u;
    SET_GPR_U32(ctx, 31, 0x3A868Cu);
    ctx->pc = 0x3A8688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8684u;
    // 0x3a8688: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85F0u, 0x3A8684u, 0x3A868Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A868Cu;
label_3a868c:
    // 0x3a868c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a868cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a8690: 0x3e00008  jr          $ra
    ctx->pc = 0x3A8690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8690u;
        // 0x3a8694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8698u;
}
