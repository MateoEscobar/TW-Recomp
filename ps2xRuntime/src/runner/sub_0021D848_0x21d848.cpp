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

// Function: sub_0021D848
// Address: 0x21d848 - 0x21d880
void sub_0021D848_0x21d848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D848_0x21d848");
#endif

    ctx->pc = 0x21d848u;

    // 0x21d848: 0x8c8601a0  lw          $a2, 0x1A0($a0)
    ctx->pc = 0x21d848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x21d84c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x21D84Cu;
    {
        const bool branch_taken_0x21d84c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d84c) {
            ctx->pc = 0x21D874u;
            goto label_21d874;
        }
    }
    ctx->pc = 0x21D854u;
    // 0x21d854: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D854u;
    {
        const bool branch_taken_0x21d854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D854u;
        // 0x21d858: 0x2403fdff  addiu       $v1, $zero, -0x201 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d854) {
            ctx->pc = 0x21D868u;
            goto label_21d868;
        }
    }
    ctx->pc = 0x21D85Cu;
    // 0x21d85c: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x21d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x21d860: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21D860u;
    {
        const bool branch_taken_0x21d860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D860u;
        // 0x21d864: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d860) {
            ctx->pc = 0x21D870u;
            goto label_21d870;
        }
    }
    ctx->pc = 0x21D868u;
label_21d868:
    // 0x21d868: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x21d868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x21d86c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x21d86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_21d870:
    // 0x21d870: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x21d870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
label_21d874:
    // 0x21d874: 0x3e00008  jr          $ra
    ctx->pc = 0x21D874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D874u;
        // 0x21d878: 0xa08503bf  sb          $a1, 0x3BF($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 959), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D87Cu;
    // 0x21d87c: 0x0  nop
    ctx->pc = 0x21d87cu;
    // NOP
    ctx->pc = 0x21d880u;
}
