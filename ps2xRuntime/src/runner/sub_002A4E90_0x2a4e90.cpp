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

// Function: sub_002A4E90
// Address: 0x2a4e90 - 0x2a4eb0
void sub_002A4E90_0x2a4e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4E90_0x2a4e90");
#endif

    switch (ctx->pc) {
        case 0x2a4ea4u: goto label_2a4ea4;
        default: break;
    }

    ctx->pc = 0x2a4e90u;

    // 0x2a4e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a4e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a4e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a4e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a4e98: 0x8085003a  lb          $a1, 0x3A($a0)
    ctx->pc = 0x2a4e98u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x2a4e9c: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2A4E9Cu;
    SET_GPR_U32(ctx, 31, 0x2A4EA4u);
    ctx->pc = 0x2A4EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4E9Cu;
    // 0x2a4ea0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2A4E9Cu, 0x2A4EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4EA4u;
label_2a4ea4:
    // 0x2a4ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a4ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4EA8u;
        // 0x2a4eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4EB0u;
}
