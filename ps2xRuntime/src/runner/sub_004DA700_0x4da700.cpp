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

// Function: sub_004DA700
// Address: 0x4da700 - 0x4da730
void sub_004DA700_0x4da700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA700_0x4da700");
#endif

    switch (ctx->pc) {
        case 0x4da724u: goto label_4da724;
        default: break;
    }

    ctx->pc = 0x4da700u;

    // 0x4da700: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4da700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4da704: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4da704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4da708: 0x24424298  addiu       $v0, $v0, 0x4298
    ctx->pc = 0x4da708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17048));
    // 0x4da70c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4da70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4da710: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4da710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4da714: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DA714u;
    {
        const bool branch_taken_0x4da714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA714u;
        // 0x4da718: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da714) {
            ctx->pc = 0x4DA724u;
            goto label_4da724;
        }
    }
    ctx->pc = 0x4DA71Cu;
    // 0x4da71c: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4DA71Cu;
    SET_GPR_U32(ctx, 31, 0x4DA724u);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4DA71Cu, 0x4DA724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA724u;
label_4da724:
    // 0x4da724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4da724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4da728: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA728u;
        // 0x4da72c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA730u;
}
