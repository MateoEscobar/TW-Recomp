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

// Function: sub_001F1B60
// Address: 0x1f1b60 - 0x1f1b90
void sub_001F1B60_0x1f1b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1B60_0x1f1b60");
#endif

    switch (ctx->pc) {
        case 0x1f1b60u: goto label_1f1b60;
        case 0x1f1b64u: goto label_1f1b64;
        case 0x1f1b68u: goto label_1f1b68;
        case 0x1f1b6cu: goto label_1f1b6c;
        case 0x1f1b70u: goto label_1f1b70;
        case 0x1f1b74u: goto label_1f1b74;
        case 0x1f1b78u: goto label_1f1b78;
        case 0x1f1b7cu: goto label_1f1b7c;
        case 0x1f1b80u: goto label_1f1b80;
        case 0x1f1b84u: goto label_1f1b84;
        case 0x1f1b88u: goto label_1f1b88;
        case 0x1f1b8cu: goto label_1f1b8c;
        default: break;
    }

    ctx->pc = 0x1f1b60u;

label_1f1b60:
    // 0x1f1b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f1b64:
    // 0x1f1b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f1b68:
    // 0x1f1b68: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1f1b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1f1b6c:
    // 0x1f1b6c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1f1b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1f1b70:
    // 0x1f1b70: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1f1b70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f1b74:
    // 0x1f1b74: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x1f1b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f1b78:
    // 0x1f1b78: 0xa0f809  jalr        $a1
label_1f1b7c:
    if (ctx->pc == 0x1F1B7Cu) {
        ctx->pc = 0x1F1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B78u;
        // 0x1f1b7c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B80u;
        goto label_1f1b80;
    }
    ctx->pc = 0x1F1B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F1B80u);
        ctx->pc = 0x1F1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B78u;
        // 0x1f1b7c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1B78u, 0x1F1B80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1B80u;
label_1f1b80:
    // 0x1f1b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1b84:
    // 0x1f1b84: 0x3e00008  jr          $ra
label_1f1b88:
    if (ctx->pc == 0x1F1B88u) {
        ctx->pc = 0x1F1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B84u;
        // 0x1f1b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B8Cu;
        goto label_1f1b8c;
    }
    ctx->pc = 0x1F1B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B84u;
        // 0x1f1b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1B8Cu;
label_1f1b8c:
    // 0x1f1b8c: 0x0  nop
    ctx->pc = 0x1f1b8cu;
    // NOP
    ctx->pc = 0x1f1b90u;
}
