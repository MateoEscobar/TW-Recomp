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

// Function: sub_0042C8A8
// Address: 0x42c8a8 - 0x42c8d0
void sub_0042C8A8_0x42c8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C8A8_0x42c8a8");
#endif

    switch (ctx->pc) {
        case 0x42c8a8u: goto label_42c8a8;
        case 0x42c8acu: goto label_42c8ac;
        case 0x42c8b0u: goto label_42c8b0;
        case 0x42c8b4u: goto label_42c8b4;
        case 0x42c8b8u: goto label_42c8b8;
        case 0x42c8bcu: goto label_42c8bc;
        case 0x42c8c0u: goto label_42c8c0;
        case 0x42c8c4u: goto label_42c8c4;
        case 0x42c8c8u: goto label_42c8c8;
        case 0x42c8ccu: goto label_42c8cc;
        default: break;
    }

    ctx->pc = 0x42c8a8u;

label_42c8a8:
    // 0x42c8a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x42c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_42c8ac:
    // 0x42c8ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42c8acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_42c8b0:
    // 0x42c8b0: 0x8c4354c4  lw          $v1, 0x54C4($v0)
    ctx->pc = 0x42c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21700)));
label_42c8b4:
    // 0x42c8b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42c8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_42c8b8:
    // 0x42c8b8: 0x60f809  jalr        $v1
label_42c8bc:
    if (ctx->pc == 0x42C8BCu) {
        ctx->pc = 0x42C8C0u;
        goto label_42c8c0;
    }
    ctx->pc = 0x42C8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42C8C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C8B8u, 0x42C8C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42C8C0u;
label_42c8c0:
    // 0x42c8c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42c8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42c8c4:
    // 0x42c8c4: 0x3e00008  jr          $ra
label_42c8c8:
    if (ctx->pc == 0x42C8C8u) {
        ctx->pc = 0x42C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C8C4u;
        // 0x42c8c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42C8CCu;
        goto label_42c8cc;
    }
    ctx->pc = 0x42C8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C8C4u;
        // 0x42c8c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C8CCu;
label_42c8cc:
    // 0x42c8cc: 0x0  nop
    ctx->pc = 0x42c8ccu;
    // NOP
    ctx->pc = 0x42c8d0u;
}
