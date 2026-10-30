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

// Function: sub_00149308
// Address: 0x149308 - 0x149328
void sub_00149308_0x149308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149308_0x149308");
#endif

    switch (ctx->pc) {
        case 0x149318u: goto label_149318;
        default: break;
    }

    ctx->pc = 0x149308u;

    // 0x149308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14930c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14930cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149310: 0xc110872  jal         func_4421C8
    ctx->pc = 0x149310u;
    SET_GPR_U32(ctx, 31, 0x149318u);
    ctx->pc = 0x149314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149310u;
    // 0x149314: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4421C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4421C8u, 0x149310u, 0x149318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149318u;
label_149318:
    // 0x149318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14931c: 0x3e00008  jr          $ra
    ctx->pc = 0x14931Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14931Cu;
        // 0x149320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14931Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149324u;
    // 0x149324: 0x0  nop
    ctx->pc = 0x149324u;
    // NOP
    ctx->pc = 0x149328u;
}
