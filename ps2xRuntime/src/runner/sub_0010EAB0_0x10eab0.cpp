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

// Function: sub_0010EAB0
// Address: 0x10eab0 - 0x10ead4
void sub_0010EAB0_0x10eab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EAB0_0x10eab0");
#endif

    switch (ctx->pc) {
        case 0x10eab0u: goto label_10eab0;
        case 0x10eab4u: goto label_10eab4;
        case 0x10eab8u: goto label_10eab8;
        case 0x10eabcu: goto label_10eabc;
        case 0x10eac0u: goto label_10eac0;
        case 0x10eac4u: goto label_10eac4;
        case 0x10eac8u: goto label_10eac8;
        case 0x10eaccu: goto label_10eacc;
        case 0x10ead0u: goto label_10ead0;
        default: break;
    }

    ctx->pc = 0x10eab0u;

label_10eab0:
    // 0x10eab0: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x10eab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_10eab4:
    // 0x10eab4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_10eab8:
    if (ctx->pc == 0x10EAB8u) {
        ctx->pc = 0x10EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAB4u;
        // 0x10eab8: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EABCu;
        goto label_10eabc;
    }
    ctx->pc = 0x10EAB4u;
    {
        const bool branch_taken_0x10eab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAB4u;
        // 0x10eab8: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eab4) {
            ctx->pc = 0x10EB34u;
            return;
        }
    }
    ctx->pc = 0x10EABCu;
label_10eabc:
    // 0x10eabc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x10eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_10eac0:
    // 0x10eac0: 0x24426e30  addiu       $v0, $v0, 0x6E30
    ctx->pc = 0x10eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28208));
label_10eac4:
    // 0x10eac4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10eac8:
    // 0x10eac8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10eac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10eacc:
    // 0x10eacc: 0x800008  jr          $a0
label_10ead0:
    if (ctx->pc == 0x10EAD0u) {
        ctx->pc = 0x10EAD4u;
        goto label_fallthrough_0x10eacc;
    }
    ctx->pc = 0x10EACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EACCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x10eacc:
    ctx->pc = 0x10EAD4u;
}
