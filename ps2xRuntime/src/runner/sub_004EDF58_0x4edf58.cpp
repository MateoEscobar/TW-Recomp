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

// Function: sub_004EDF58
// Address: 0x4edf58 - 0x4edf88
void sub_004EDF58_0x4edf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EDF58_0x4edf58");
#endif

    switch (ctx->pc) {
        case 0x4edf7cu: goto label_4edf7c;
        default: break;
    }

    ctx->pc = 0x4edf58u;

    // 0x4edf58: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4edf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4edf5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4edf5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4edf60: 0x2442f2f0  addiu       $v0, $v0, -0xD10
    ctx->pc = 0x4edf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
    // 0x4edf64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4edf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4edf68: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4edf68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4edf6c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EDF6Cu;
    {
        const bool branch_taken_0x4edf6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EDF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDF6Cu;
        // 0x4edf70: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edf6c) {
            ctx->pc = 0x4EDF7Cu;
            goto label_4edf7c;
        }
    }
    ctx->pc = 0x4EDF74u;
    // 0x4edf74: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4EDF74u;
    SET_GPR_U32(ctx, 31, 0x4EDF7Cu);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4EDF74u, 0x4EDF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDF7Cu;
label_4edf7c:
    // 0x4edf7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4edf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4edf80: 0x3e00008  jr          $ra
    ctx->pc = 0x4EDF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDF80u;
        // 0x4edf84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EDF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EDF88u;
}
