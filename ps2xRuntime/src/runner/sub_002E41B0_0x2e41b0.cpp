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

// Function: sub_002E41B0
// Address: 0x2e41b0 - 0x2e41d0
void sub_002E41B0_0x2e41b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E41B0_0x2e41b0");
#endif

    switch (ctx->pc) {
        case 0x2e41c4u: goto label_2e41c4;
        default: break;
    }

    ctx->pc = 0x2e41b0u;

    // 0x2e41b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e41b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e41b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e41b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e41b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e41bc: 0xc08c716  jal         func_231C58
    ctx->pc = 0x2E41BCu;
    SET_GPR_U32(ctx, 31, 0x2E41C4u);
    ctx->pc = 0x2E41C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E41BCu;
    // 0x2e41c0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C58u, 0x2E41BCu, 0x2E41C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E41C4u;
label_2e41c4:
    // 0x2e41c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e41c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e41c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E41C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E41C8u;
        // 0x2e41cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E41C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E41D0u;
}
