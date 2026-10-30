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

// Function: sub_00144080
// Address: 0x144080 - 0x1440a0
void sub_00144080_0x144080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144080_0x144080");
#endif

    switch (ctx->pc) {
        case 0x144094u: goto label_144094;
        default: break;
    }

    ctx->pc = 0x144080u;

    // 0x144080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x144080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144084: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x144084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14408c: 0xc051014  jal         func_144050
    ctx->pc = 0x14408Cu;
    SET_GPR_U32(ctx, 31, 0x144094u);
    ctx->pc = 0x144090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14408Cu;
    // 0x144090: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x144050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144050u, 0x14408Cu, 0x144094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144094u;
label_144094:
    // 0x144094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144098: 0x3e00008  jr          $ra
    ctx->pc = 0x144098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144098u;
        // 0x14409c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1440A0u;
}
