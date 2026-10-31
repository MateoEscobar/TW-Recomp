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

// Function: sub_0016D7D8
// Address: 0x16d7d8 - 0x16d808
void sub_0016D7D8_0x16d7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D7D8_0x16d7d8");
#endif

    switch (ctx->pc) {
        case 0x16d7e0u: goto label_16d7e0;
        default: break;
    }

    ctx->pc = 0x16d7d8u;

    // 0x16d7d8: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x16d7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x16d7dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d7e0:
    // 0x16d7e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16d7e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x16d7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x16d7e8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x16d7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x16d7ec: 0x2cc2000a  sltiu       $v0, $a2, 0xA
    ctx->pc = 0x16d7ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x16d7f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x16d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x16d7f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16D7F4u;
    {
        const bool branch_taken_0x16d7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7F4u;
        // 0x16d7f8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d7f4) {
            ctx->pc = 0x16D7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d7e0;
        }
    }
    ctx->pc = 0x16D7FCu;
    // 0x16d7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x16D7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D804u;
    // 0x16d804: 0x0  nop
    ctx->pc = 0x16d804u;
    // NOP
    ctx->pc = 0x16d808u;
}
