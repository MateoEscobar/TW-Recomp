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

// Function: sub_0014A1E8
// Address: 0x14a1e8 - 0x14a228
void sub_0014A1E8_0x14a1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A1E8_0x14a1e8");
#endif

    ctx->pc = 0x14a1e8u;

    // 0x14a1e8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x14a1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x14a1ec: 0x28a2fff7  slti        $v0, $a1, -0x9
    ctx->pc = 0x14a1ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967287) ? 1 : 0);
    // 0x14a1f0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14A1F0u;
    {
        const bool branch_taken_0x14a1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1F0u;
        // 0x14a1f4: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1f0) {
            ctx->pc = 0x14A220u;
            goto label_14a220;
        }
    }
    ctx->pc = 0x14A1F8u;
    // 0x14a1f8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x14a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14a1fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a200: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A200u;
    {
        const bool branch_taken_0x14a200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A200u;
        // 0x14a204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a200) {
            ctx->pc = 0x14A220u;
            goto label_14a220;
        }
    }
    ctx->pc = 0x14A208u;
    // 0x14a208: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14A208u;
    {
        const bool branch_taken_0x14a208 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x14A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A208u;
        // 0x14a20c: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a208) {
            ctx->pc = 0x14A214u;
            goto label_14a214;
        }
    }
    ctx->pc = 0x14A210u;
    // 0x14a210: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x14a210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_14a214:
    // 0x14a214: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x14a214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14a218: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x14a218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x14a21c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x14a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_14a220:
    // 0x14a220: 0x3e00008  jr          $ra
    ctx->pc = 0x14A220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A228u;
}
