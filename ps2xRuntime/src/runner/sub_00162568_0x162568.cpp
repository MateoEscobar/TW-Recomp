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

// Function: sub_00162568
// Address: 0x162568 - 0x162598
void sub_00162568_0x162568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162568_0x162568");
#endif

    switch (ctx->pc) {
        case 0x162578u: goto label_162578;
        default: break;
    }

    ctx->pc = 0x162568u;

    // 0x162568: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x162568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x16256c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16256cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162570: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x162570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x162574: 0x0  nop
    ctx->pc = 0x162574u;
    // NOP
label_162578:
    // 0x162578: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x162578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x16257c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16257cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x162580: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x162580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x162584: 0x0  nop
    ctx->pc = 0x162584u;
    // NOP
    // 0x162588: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x162588u;
    {
        const bool branch_taken_0x162588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162588u;
        // 0x16258c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162588) {
            ctx->pc = 0x162578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162578;
        }
    }
    ctx->pc = 0x162590u;
    // 0x162590: 0x3e00008  jr          $ra
    ctx->pc = 0x162590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162598u;
}
