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

// Function: sub_0038DA08
// Address: 0x38da08 - 0x38da2c
void sub_0038DA08_0x38da08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DA08_0x38da08");
#endif

    switch (ctx->pc) {
        case 0x38da08u: goto label_38da08;
        case 0x38da0cu: goto label_38da0c;
        case 0x38da10u: goto label_38da10;
        case 0x38da14u: goto label_38da14;
        case 0x38da18u: goto label_38da18;
        case 0x38da1cu: goto label_38da1c;
        case 0x38da20u: goto label_38da20;
        case 0x38da24u: goto label_38da24;
        case 0x38da28u: goto label_38da28;
        default: break;
    }

    ctx->pc = 0x38da08u;

label_38da08:
    // 0x38da08: 0x2ca2000a  sltiu       $v0, $a1, 0xA
    ctx->pc = 0x38da08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_38da0c:
    // 0x38da0c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_38da10:
    if (ctx->pc == 0x38DA10u) {
        ctx->pc = 0x38DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA0Cu;
        // 0x38da10: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DA14u;
        goto label_38da14;
    }
    ctx->pc = 0x38DA0Cu;
    {
        const bool branch_taken_0x38da0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA0Cu;
        // 0x38da10: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38da0c) {
            ctx->pc = 0x38DA7Cu;
            return;
        }
    }
    ctx->pc = 0x38DA14u;
label_38da14:
    // 0x38da14: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x38da14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_38da18:
    // 0x38da18: 0x2442e410  addiu       $v0, $v0, -0x1BF0
    ctx->pc = 0x38da18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960144));
label_38da1c:
    // 0x38da1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38da1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38da20:
    // 0x38da20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38da20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38da24:
    // 0x38da24: 0x800008  jr          $a0
label_38da28:
    if (ctx->pc == 0x38DA28u) {
        ctx->pc = 0x38DA2Cu;
        goto label_fallthrough_0x38da24;
    }
    ctx->pc = 0x38DA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DA24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x38da24:
    ctx->pc = 0x38DA2Cu;
}
