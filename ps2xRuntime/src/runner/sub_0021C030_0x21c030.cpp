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

// Function: sub_0021C030
// Address: 0x21c030 - 0x21c058
void sub_0021C030_0x21c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C030_0x21c030");
#endif

    switch (ctx->pc) {
        case 0x21c04cu: goto label_21c04c;
        default: break;
    }

    ctx->pc = 0x21c030u;

    // 0x21c030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c038: 0x8c8401a0  lw          $a0, 0x1A0($a0)
    ctx->pc = 0x21c038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x21c03c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C03Cu;
    {
        const bool branch_taken_0x21c03c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C03Cu;
        // 0x21c040: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c03c) {
            ctx->pc = 0x21C050u;
            goto label_21c050;
        }
    }
    ctx->pc = 0x21C044u;
    // 0x21c044: 0xc0d0a34  jal         func_3428D0
    ctx->pc = 0x21C044u;
    SET_GPR_U32(ctx, 31, 0x21C04Cu);
    ctx->pc = 0x3428D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3428D0u, 0x21C044u, 0x21C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C04Cu;
label_21c04c:
    // 0x21c04c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c050:
    // 0x21c050: 0x3e00008  jr          $ra
    ctx->pc = 0x21C050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C050u;
        // 0x21c054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C058u;
}
