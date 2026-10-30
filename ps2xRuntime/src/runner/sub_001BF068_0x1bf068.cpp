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

// Function: sub_001BF068
// Address: 0x1bf068 - 0x1bf090
void sub_001BF068_0x1bf068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF068_0x1bf068");
#endif

    switch (ctx->pc) {
        case 0x1bf084u: goto label_1bf084;
        default: break;
    }

    ctx->pc = 0x1bf068u;

    // 0x1bf068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bf068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bf06c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bf06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bf070: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1bf070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1bf074: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF074u;
    {
        const bool branch_taken_0x1bf074 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BF078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF074u;
        // 0x1bf078: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf074) {
            ctx->pc = 0x1BF088u;
            goto label_1bf088;
        }
    }
    ctx->pc = 0x1BF07Cu;
    // 0x1bf07c: 0xc06dbb6  jal         func_1B6ED8
    ctx->pc = 0x1BF07Cu;
    SET_GPR_U32(ctx, 31, 0x1BF084u);
    ctx->pc = 0x1BF080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF07Cu;
    // 0x1bf080: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6ED8u, 0x1BF07Cu, 0x1BF084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF084u;
label_1bf084:
    // 0x1bf084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf088:
    // 0x1bf088: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF088u;
        // 0x1bf08c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF090u;
}
