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

// Function: sub_002FE0A8
// Address: 0x2fe0a8 - 0x2fe0c8
void sub_002FE0A8_0x2fe0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE0A8_0x2fe0a8");
#endif

    switch (ctx->pc) {
        case 0x2fe0b8u: goto label_2fe0b8;
        default: break;
    }

    ctx->pc = 0x2fe0a8u;

    // 0x2fe0a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe0ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe0b0: 0xc0bf742  jal         func_2FDD08
    ctx->pc = 0x2FE0B0u;
    SET_GPR_U32(ctx, 31, 0x2FE0B8u);
    ctx->pc = 0x2FDD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDD08u, 0x2FE0B0u, 0x2FE0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE0B8u;
label_2fe0b8:
    // 0x2fe0b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE0BCu;
        // 0x2fe0c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE0C4u;
    // 0x2fe0c4: 0x0  nop
    ctx->pc = 0x2fe0c4u;
    // NOP
    ctx->pc = 0x2fe0c8u;
}
