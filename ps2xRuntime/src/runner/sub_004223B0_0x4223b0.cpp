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

// Function: sub_004223B0
// Address: 0x4223b0 - 0x4223e0
void sub_004223B0_0x4223b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004223B0_0x4223b0");
#endif

    switch (ctx->pc) {
        case 0x4223b0u: goto label_4223b0;
        case 0x4223b4u: goto label_4223b4;
        case 0x4223b8u: goto label_4223b8;
        case 0x4223bcu: goto label_4223bc;
        case 0x4223c0u: goto label_4223c0;
        case 0x4223c4u: goto label_4223c4;
        case 0x4223c8u: goto label_4223c8;
        case 0x4223ccu: goto label_4223cc;
        case 0x4223d0u: goto label_4223d0;
        case 0x4223d4u: goto label_4223d4;
        case 0x4223d8u: goto label_4223d8;
        case 0x4223dcu: goto label_4223dc;
        default: break;
    }

    ctx->pc = 0x4223b0u;

label_4223b0:
    // 0x4223b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4223b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4223b4:
    // 0x4223b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4223b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4223b8:
    // 0x4223b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4223b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4223bc:
    // 0x4223bc: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x4223bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_4223c0:
    // 0x4223c0: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x4223c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_4223c4:
    // 0x4223c4: 0x84640118  lh          $a0, 0x118($v1)
    ctx->pc = 0x4223c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
label_4223c8:
    // 0x4223c8: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x4223c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_4223cc:
    // 0x4223cc: 0x40f809  jalr        $v0
label_4223d0:
    if (ctx->pc == 0x4223D0u) {
        ctx->pc = 0x4223D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4223CCu;
        // 0x4223d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4223D4u;
        goto label_4223d4;
    }
    ctx->pc = 0x4223CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4223D4u);
        ctx->pc = 0x4223D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4223CCu;
        // 0x4223d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4223CCu, 0x4223D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4223D4u;
label_4223d4:
    // 0x4223d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4223d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4223d8:
    // 0x4223d8: 0x3e00008  jr          $ra
label_4223dc:
    if (ctx->pc == 0x4223DCu) {
        ctx->pc = 0x4223DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4223D8u;
        // 0x4223dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4223E0u;
        goto label_fallthrough_0x4223d8;
    }
    ctx->pc = 0x4223D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4223DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4223D8u;
        // 0x4223dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4223D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4223d8:
    ctx->pc = 0x4223E0u;
}
