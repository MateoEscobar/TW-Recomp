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

// Function: sub_00465DA8
// Address: 0x465da8 - 0x465dd0
void sub_00465DA8_0x465da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465DA8_0x465da8");
#endif

    ctx->pc = 0x465da8u;

    // 0x465da8: 0x8f828498  lw          $v0, -0x7B68($gp)
    ctx->pc = 0x465da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935704)));
    // 0x465dac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x465dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x465db0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x465db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x465db4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x465DB4u;
    {
        const bool branch_taken_0x465db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x465DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465DB4u;
        // 0x465db8: 0x823021  addu        $a2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465db4) {
            ctx->pc = 0x465DC4u;
            goto label_465dc4;
        }
    }
    ctx->pc = 0x465DBCu;
    // 0x465dbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x465dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x465dc0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x465dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_465dc4:
    // 0x465dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x465DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465DC4u;
        // 0x465dc8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465DCCu;
    // 0x465dcc: 0x0  nop
    ctx->pc = 0x465dccu;
    // NOP
    ctx->pc = 0x465dd0u;
}
