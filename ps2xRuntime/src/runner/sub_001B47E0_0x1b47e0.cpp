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

// Function: sub_001B47E0
// Address: 0x1b47e0 - 0x1b4808
void sub_001B47E0_0x1b47e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B47E0_0x1b47e0");
#endif

    switch (ctx->pc) {
        case 0x1b47f8u: goto label_1b47f8;
        default: break;
    }

    ctx->pc = 0x1b47e0u;

    // 0x1b47e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b47e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b47e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b47e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b47e8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x1b47e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x1b47ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b47ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b47f0: 0xc070ca0  jal         func_1C3280
    ctx->pc = 0x1B47F0u;
    SET_GPR_U32(ctx, 31, 0x1B47F8u);
    ctx->pc = 0x1B47F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B47F0u;
    // 0x1b47f4: 0x2484b4f0  addiu       $a0, $a0, -0x4B10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3280u, 0x1B47F0u, 0x1B47F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B47F8u;
label_1b47f8:
    // 0x1b47f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b47f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b47fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B47FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47FCu;
        // 0x1b4800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B47FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4804u;
    // 0x1b4804: 0x0  nop
    ctx->pc = 0x1b4804u;
    // NOP
    ctx->pc = 0x1b4808u;
}
