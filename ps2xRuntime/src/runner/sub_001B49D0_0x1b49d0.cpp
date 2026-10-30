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

// Function: sub_001B49D0
// Address: 0x1b49d0 - 0x1b49f8
void sub_001B49D0_0x1b49d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B49D0_0x1b49d0");
#endif

    switch (ctx->pc) {
        case 0x1b49e8u: goto label_1b49e8;
        default: break;
    }

    ctx->pc = 0x1b49d0u;

    // 0x1b49d0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1b49d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b49d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b49d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b49d8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x1b49d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x1b49dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b49dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b49e0: 0xc0739d2  jal         func_1CE748
    ctx->pc = 0x1B49E0u;
    SET_GPR_U32(ctx, 31, 0x1B49E8u);
    ctx->pc = 0x1B49E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B49E0u;
    // 0x1b49e4: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE748u, 0x1B49E0u, 0x1B49E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B49E8u;
label_1b49e8:
    // 0x1b49e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b49e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b49ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B49ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B49F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49ECu;
        // 0x1b49f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B49ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B49F4u;
    // 0x1b49f4: 0x0  nop
    ctx->pc = 0x1b49f4u;
    // NOP
    ctx->pc = 0x1b49f8u;
}
