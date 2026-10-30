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

// Function: sub_0042C988
// Address: 0x42c988 - 0x42c9b0
void sub_0042C988_0x42c988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C988_0x42c988");
#endif

    switch (ctx->pc) {
        case 0x42c988u: goto label_42c988;
        case 0x42c98cu: goto label_42c98c;
        case 0x42c990u: goto label_42c990;
        case 0x42c994u: goto label_42c994;
        case 0x42c998u: goto label_42c998;
        case 0x42c99cu: goto label_42c99c;
        case 0x42c9a0u: goto label_42c9a0;
        case 0x42c9a4u: goto label_42c9a4;
        case 0x42c9a8u: goto label_42c9a8;
        case 0x42c9acu: goto label_42c9ac;
        default: break;
    }

    ctx->pc = 0x42c988u;

label_42c988:
    // 0x42c988: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x42c988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_42c98c:
    // 0x42c98c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42c98cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_42c990:
    // 0x42c990: 0x8c6254c8  lw          $v0, 0x54C8($v1)
    ctx->pc = 0x42c990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21704)));
label_42c994:
    // 0x42c994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42c994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_42c998:
    // 0x42c998: 0x40f809  jalr        $v0
label_42c99c:
    if (ctx->pc == 0x42C99Cu) {
        ctx->pc = 0x42C9A0u;
        goto label_42c9a0;
    }
    ctx->pc = 0x42C998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42C9A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C998u, 0x42C9A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42C9A0u;
label_42c9a0:
    // 0x42c9a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42c9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42c9a4:
    // 0x42c9a4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x42c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_42c9a8:
    // 0x42c9a8: 0x3e00008  jr          $ra
label_42c9ac:
    if (ctx->pc == 0x42C9ACu) {
        ctx->pc = 0x42C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C9A8u;
        // 0x42c9ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42C9B0u;
        goto label_fallthrough_0x42c9a8;
    }
    ctx->pc = 0x42C9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C9A8u;
        // 0x42c9ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x42c9a8:
    ctx->pc = 0x42C9B0u;
}
