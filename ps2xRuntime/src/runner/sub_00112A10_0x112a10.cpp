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

// Function: sub_00112A10
// Address: 0x112a10 - 0x112a40
void sub_00112A10_0x112a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112A10_0x112a10");
#endif

    switch (ctx->pc) {
        case 0x112a10u: goto label_112a10;
        case 0x112a14u: goto label_112a14;
        case 0x112a18u: goto label_112a18;
        case 0x112a1cu: goto label_112a1c;
        case 0x112a20u: goto label_112a20;
        case 0x112a24u: goto label_112a24;
        case 0x112a28u: goto label_112a28;
        case 0x112a2cu: goto label_112a2c;
        case 0x112a30u: goto label_112a30;
        case 0x112a34u: goto label_112a34;
        case 0x112a38u: goto label_112a38;
        case 0x112a3cu: goto label_112a3c;
        default: break;
    }

    ctx->pc = 0x112a10u;

label_112a10:
    // 0x112a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_112a14:
    // 0x112a14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x112a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_112a18:
    // 0x112a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_112a1c:
    // 0x112a1c: 0x8c47bce4  lw          $a3, -0x431C($v0)
    ctx->pc = 0x112a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_112a20:
    // 0x112a20: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x112a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_112a24:
    // 0x112a24: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x112a24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_112a28:
    // 0x112a28: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x112a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_112a2c:
    // 0x112a2c: 0x40f809  jalr        $v0
label_112a30:
    if (ctx->pc == 0x112A30u) {
        ctx->pc = 0x112A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A2Cu;
        // 0x112a30: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112A34u;
        goto label_112a34;
    }
    ctx->pc = 0x112A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x112A34u);
        ctx->pc = 0x112A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A2Cu;
        // 0x112a30: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112A2Cu, 0x112A34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112A34u;
label_112a34:
    // 0x112a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_112a38:
    // 0x112a38: 0x3e00008  jr          $ra
label_112a3c:
    if (ctx->pc == 0x112A3Cu) {
        ctx->pc = 0x112A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A38u;
        // 0x112a3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112A40u;
        goto label_fallthrough_0x112a38;
    }
    ctx->pc = 0x112A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A38u;
        // 0x112a3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x112a38:
    ctx->pc = 0x112A40u;
}
