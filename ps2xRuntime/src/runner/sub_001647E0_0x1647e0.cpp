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

// Function: sub_001647E0
// Address: 0x1647e0 - 0x164808
void sub_001647E0_0x1647e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001647E0_0x1647e0");
#endif

    switch (ctx->pc) {
        case 0x1647e8u: goto label_1647e8;
        default: break;
    }

    ctx->pc = 0x1647e0u;

    // 0x1647e0: 0x248400e4  addiu       $a0, $a0, 0xE4
    ctx->pc = 0x1647e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 228));
    // 0x1647e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1647e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1647e8:
    // 0x1647e8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1647e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1647ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1647ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1647f0: 0x2c62001a  sltiu       $v0, $v1, 0x1A
    ctx->pc = 0x1647f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x1647f4: 0x0  nop
    ctx->pc = 0x1647f4u;
    // NOP
    // 0x1647f8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1647F8u;
    {
        const bool branch_taken_0x1647f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1647FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647F8u;
        // 0x1647fc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647f8) {
            ctx->pc = 0x1647E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1647e8;
        }
    }
    ctx->pc = 0x164800u;
    // 0x164800: 0x3e00008  jr          $ra
    ctx->pc = 0x164800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164808u;
}
