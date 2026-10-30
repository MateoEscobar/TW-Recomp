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

// Function: sub_00419728
// Address: 0x419728 - 0x419758
void sub_00419728_0x419728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419728_0x419728");
#endif

    switch (ctx->pc) {
        case 0x419748u: goto label_419748;
        default: break;
    }

    ctx->pc = 0x419728u;

    // 0x419728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x419728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41972c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41972cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419730: 0x8c820268  lw          $v0, 0x268($a0)
    ctx->pc = 0x419730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 616)));
    // 0x419734: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x419734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x419738: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x419738u;
    {
        const bool branch_taken_0x419738 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x41973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419738u;
        // 0x41973c: 0xac820268  sw          $v0, 0x268($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419738) {
            ctx->pc = 0x419748u;
            goto label_419748;
        }
    }
    ctx->pc = 0x419740u;
    // 0x419740: 0xc1065d6  jal         func_419758
    ctx->pc = 0x419740u;
    SET_GPR_U32(ctx, 31, 0x419748u);
    ctx->pc = 0x419758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419758u, 0x419740u, 0x419748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419748u;
label_419748:
    // 0x419748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41974c: 0x3e00008  jr          $ra
    ctx->pc = 0x41974Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41974Cu;
        // 0x419750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41974Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419754u;
    // 0x419754: 0x0  nop
    ctx->pc = 0x419754u;
    // NOP
    ctx->pc = 0x419758u;
}
