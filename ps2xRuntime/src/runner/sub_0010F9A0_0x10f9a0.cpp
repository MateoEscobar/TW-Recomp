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

// Function: sub_0010F9A0
// Address: 0x10f9a0 - 0x10f9d0
void sub_0010F9A0_0x10f9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F9A0_0x10f9a0");
#endif

    switch (ctx->pc) {
        case 0x10f9a0u: goto label_10f9a0;
        case 0x10f9a4u: goto label_10f9a4;
        case 0x10f9a8u: goto label_10f9a8;
        case 0x10f9acu: goto label_10f9ac;
        case 0x10f9b0u: goto label_10f9b0;
        case 0x10f9b4u: goto label_10f9b4;
        case 0x10f9b8u: goto label_10f9b8;
        case 0x10f9bcu: goto label_10f9bc;
        case 0x10f9c0u: goto label_10f9c0;
        case 0x10f9c4u: goto label_10f9c4;
        case 0x10f9c8u: goto label_10f9c8;
        case 0x10f9ccu: goto label_10f9cc;
        default: break;
    }

    ctx->pc = 0x10f9a0u;

label_10f9a0:
    // 0x10f9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10f9a4:
    // 0x10f9a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_10f9a8:
    // 0x10f9a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10f9ac:
    // 0x10f9ac: 0x8c45bce4  lw          $a1, -0x431C($v0)
    ctx->pc = 0x10f9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_10f9b0:
    // 0x10f9b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10f9b4:
    // 0x10f9b4: 0x84640160  lh          $a0, 0x160($v1)
    ctx->pc = 0x10f9b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 352)));
label_10f9b8:
    // 0x10f9b8: 0x8c620164  lw          $v0, 0x164($v1)
    ctx->pc = 0x10f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
label_10f9bc:
    // 0x10f9bc: 0x40f809  jalr        $v0
label_10f9c0:
    if (ctx->pc == 0x10F9C0u) {
        ctx->pc = 0x10F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9BCu;
        // 0x10f9c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F9C4u;
        goto label_10f9c4;
    }
    ctx->pc = 0x10F9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10F9C4u);
        ctx->pc = 0x10F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9BCu;
        // 0x10f9c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F9BCu, 0x10F9C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F9C4u;
label_10f9c4:
    // 0x10f9c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10f9c8:
    // 0x10f9c8: 0x3e00008  jr          $ra
label_10f9cc:
    if (ctx->pc == 0x10F9CCu) {
        ctx->pc = 0x10F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9C8u;
        // 0x10f9cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F9D0u;
        goto label_fallthrough_0x10f9c8;
    }
    ctx->pc = 0x10F9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9C8u;
        // 0x10f9cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10f9c8:
    ctx->pc = 0x10F9D0u;
}
