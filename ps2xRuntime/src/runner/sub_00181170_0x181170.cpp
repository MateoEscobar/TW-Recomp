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

// Function: sub_00181170
// Address: 0x181170 - 0x1811a8
void sub_00181170_0x181170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181170_0x181170");
#endif

    switch (ctx->pc) {
        case 0x181180u: goto label_181180;
        default: break;
    }

    ctx->pc = 0x181170u;

    // 0x181170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181178: 0xc051048  jal         func_144120
    ctx->pc = 0x181178u;
    SET_GPR_U32(ctx, 31, 0x181180u);
    ctx->pc = 0x18117Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181178u;
    // 0x18117c: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x181178u, 0x181180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181180u;
label_181180:
    // 0x181180: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x181180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x181184: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x181184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x181188: 0x8c83cd4c  lw          $v1, -0x32B4($a0)
    ctx->pc = 0x181188u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x18118c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18118cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181190: 0xac62008c  sw          $v0, 0x8C($v1)
    ctx->pc = 0x181190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 2));
    // 0x181194: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x181194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181198: 0xac650094  sw          $a1, 0x94($v1)
    ctx->pc = 0x181198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 5));
    // 0x18119c: 0xac640090  sw          $a0, 0x90($v1)
    ctx->pc = 0x18119cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 4));
    // 0x1811a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1811A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1811A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811A0u;
        // 0x1811a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1811A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1811A8u;
}
