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

// Function: sub_00432B10
// Address: 0x432b10 - 0x432b30
void sub_00432B10_0x432b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432B10_0x432b10");
#endif

    switch (ctx->pc) {
        case 0x432b24u: goto label_432b24;
        default: break;
    }

    ctx->pc = 0x432b10u;

    // 0x432b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x432b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x432b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x432b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x432b18: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x432b18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x432b1c: 0xc10ea3e  jal         func_43A8F8
    ctx->pc = 0x432B1Cu;
    SET_GPR_U32(ctx, 31, 0x432B24u);
    ctx->pc = 0x432B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432B1Cu;
    // 0x432b20: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43A8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43A8F8u, 0x432B1Cu, 0x432B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432B24u;
label_432b24:
    // 0x432b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x432b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432b28: 0x3e00008  jr          $ra
    ctx->pc = 0x432B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432B28u;
        // 0x432b2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x432B30u;
}
