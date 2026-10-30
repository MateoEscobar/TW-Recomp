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

// Function: sub_00114178
// Address: 0x114178 - 0x1141b0
void sub_00114178_0x114178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114178_0x114178");
#endif

    switch (ctx->pc) {
        case 0x114190u: goto label_114190;
        case 0x1141a0u: goto label_1141a0;
        default: break;
    }

    ctx->pc = 0x114178u;

    // 0x114178: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x114178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11417c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11417cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114180: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x114180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x114184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114188: 0xc050fda  jal         func_143F68
    ctx->pc = 0x114188u;
    SET_GPR_U32(ctx, 31, 0x114190u);
    ctx->pc = 0x11418Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114188u;
    // 0x11418c: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x114188u, 0x114190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114190u;
label_114190:
    // 0x114190: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x114190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x114194: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x114194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114198: 0xc043fda  jal         func_10FF68
    ctx->pc = 0x114198u;
    SET_GPR_U32(ctx, 31, 0x1141A0u);
    ctx->pc = 0x11419Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114198u;
    // 0x11419c: 0x8c64aa84  lw          $a0, -0x557C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF68u, 0x114198u, 0x1141A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1141A0u;
label_1141a0:
    // 0x1141a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1141a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1141a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1141A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1141A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141A4u;
        // 0x1141a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1141A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1141ACu;
    // 0x1141ac: 0x0  nop
    ctx->pc = 0x1141acu;
    // NOP
    ctx->pc = 0x1141b0u;
}
