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

// Function: sub_0038D9D8
// Address: 0x38d9d8 - 0x38da08
void sub_0038D9D8_0x38d9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D9D8_0x38d9d8");
#endif

    switch (ctx->pc) {
        case 0x38d9e8u: goto label_38d9e8;
        default: break;
    }

    ctx->pc = 0x38d9d8u;

    // 0x38d9d8: 0x248412da  addiu       $a0, $a0, 0x12DA
    ctx->pc = 0x38d9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4826));
    // 0x38d9dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38d9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d9e0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x38d9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38d9e4: 0x0  nop
    ctx->pc = 0x38d9e4u;
    // NOP
label_38d9e8:
    // 0x38d9e8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x38d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x38d9ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38d9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x38d9f0: 0x2ca2000a  sltiu       $v0, $a1, 0xA
    ctx->pc = 0x38d9f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x38d9f4: 0x0  nop
    ctx->pc = 0x38d9f4u;
    // NOP
    // 0x38d9f8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x38D9F8u;
    {
        const bool branch_taken_0x38d9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9F8u;
        // 0x38d9fc: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d9f8) {
            ctx->pc = 0x38D9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d9e8;
        }
    }
    ctx->pc = 0x38DA00u;
    // 0x38da00: 0x3e00008  jr          $ra
    ctx->pc = 0x38DA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DA08u;
}
