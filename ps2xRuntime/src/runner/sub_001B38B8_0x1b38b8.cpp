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

// Function: sub_001B38B8
// Address: 0x1b38b8 - 0x1b38d8
void sub_001B38B8_0x1b38b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B38B8_0x1b38b8");
#endif

    switch (ctx->pc) {
        case 0x1b38ccu: goto label_1b38cc;
        default: break;
    }

    ctx->pc = 0x1b38b8u;

    // 0x1b38b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b38b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b38bc: 0x3402ea30  ori         $v0, $zero, 0xEA30
    ctx->pc = 0x1b38bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59952);
    // 0x1b38c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b38c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b38c4: 0xc06a44c  jal         func_1A9130
    ctx->pc = 0x1B38C4u;
    SET_GPR_U32(ctx, 31, 0x1B38CCu);
    ctx->pc = 0x1B38C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B38C4u;
    // 0x1b38c8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9130u, 0x1B38C4u, 0x1B38CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B38CCu;
label_1b38cc:
    // 0x1b38cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b38ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b38d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B38D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B38D0u;
        // 0x1b38d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B38D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B38D8u;
}
