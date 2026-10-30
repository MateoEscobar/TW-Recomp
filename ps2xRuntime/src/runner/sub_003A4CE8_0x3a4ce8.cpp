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

// Function: sub_003A4CE8
// Address: 0x3a4ce8 - 0x3a4d10
void sub_003A4CE8_0x3a4ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4CE8_0x3a4ce8");
#endif

    switch (ctx->pc) {
        case 0x3a4cf8u: goto label_3a4cf8;
        default: break;
    }

    ctx->pc = 0x3a4ce8u;

    // 0x3a4ce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a4ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a4cec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4cf0: 0xc0e3d62  jal         func_38F588
    ctx->pc = 0x3A4CF0u;
    SET_GPR_U32(ctx, 31, 0x3A4CF8u);
    ctx->pc = 0x38F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F588u, 0x3A4CF0u, 0x3A4CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4CF8u;
label_3a4cf8:
    // 0x3a4cf8: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A4CF8u;
    {
        const bool branch_taken_0x3a4cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4cf8) {
            ctx->pc = 0x3A4CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4CF8u;
            // 0x3a4cfc: 0x944200fa  lhu         $v0, 0xFA($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 250)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4D04u;
            goto label_3a4d04;
        }
    }
    ctx->pc = 0x3A4D00u;
    // 0x3a4d00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a4d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a4d04:
    // 0x3a4d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4d08: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D08u;
        // 0x3a4d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4D10u;
}
