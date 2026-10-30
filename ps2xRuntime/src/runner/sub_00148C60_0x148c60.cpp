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

// Function: sub_00148C60
// Address: 0x148c60 - 0x148c90
void sub_00148C60_0x148c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148C60_0x148c60");
#endif

    switch (ctx->pc) {
        case 0x148c60u: goto label_148c60;
        case 0x148c64u: goto label_148c64;
        case 0x148c68u: goto label_148c68;
        case 0x148c6cu: goto label_148c6c;
        case 0x148c70u: goto label_148c70;
        case 0x148c74u: goto label_148c74;
        case 0x148c78u: goto label_148c78;
        case 0x148c7cu: goto label_148c7c;
        case 0x148c80u: goto label_148c80;
        case 0x148c84u: goto label_148c84;
        case 0x148c88u: goto label_148c88;
        case 0x148c8cu: goto label_148c8c;
        default: break;
    }

    ctx->pc = 0x148c60u;

label_148c60:
    // 0x148c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x148c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_148c64:
    // 0x148c64: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x148c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_148c68:
    // 0x148c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_148c6c:
    // 0x148c6c: 0x8c45bce4  lw          $a1, -0x431C($v0)
    ctx->pc = 0x148c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_148c70:
    // 0x148c70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x148c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_148c74:
    // 0x148c74: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x148c74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_148c78:
    // 0x148c78: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x148c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_148c7c:
    // 0x148c7c: 0x40f809  jalr        $v0
label_148c80:
    if (ctx->pc == 0x148C80u) {
        ctx->pc = 0x148C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C7Cu;
        // 0x148c80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148C84u;
        goto label_148c84;
    }
    ctx->pc = 0x148C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x148C84u);
        ctx->pc = 0x148C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C7Cu;
        // 0x148c80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148C7Cu, 0x148C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x148C84u;
label_148c84:
    // 0x148c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_148c88:
    // 0x148c88: 0x3e00008  jr          $ra
label_148c8c:
    if (ctx->pc == 0x148C8Cu) {
        ctx->pc = 0x148C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C88u;
        // 0x148c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148C90u;
        goto label_fallthrough_0x148c88;
    }
    ctx->pc = 0x148C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C88u;
        // 0x148c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x148c88:
    ctx->pc = 0x148C90u;
}
