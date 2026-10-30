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

// Function: sub_00291E78
// Address: 0x291e78 - 0x291ed0
void sub_00291E78_0x291e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291E78_0x291e78");
#endif

    switch (ctx->pc) {
        case 0x291e90u: goto label_291e90;
        case 0x291ea0u: goto label_291ea0;
        default: break;
    }

    ctx->pc = 0x291e78u;

    // 0x291e78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x291e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x291e7c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x291e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x291e80: 0x8c46bd30  lw          $a2, -0x42D0($v0)
    ctx->pc = 0x291e80u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x291e84: 0x2463ddf8  addiu       $v1, $v1, -0x2208
    ctx->pc = 0x291e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958584));
    // 0x291e88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x291e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e8c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x291e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_291e90:
    // 0x291e90: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x291e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x291e94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x291e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291e98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x291e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291e9c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x291e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_291ea0:
    // 0x291ea0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x291ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x291ea4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x291ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x291ea8: 0x0  nop
    ctx->pc = 0x291ea8u;
    // NOP
    // 0x291eac: 0x0  nop
    ctx->pc = 0x291eacu;
    // NOP
    // 0x291eb0: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x291EB0u;
    {
        const bool branch_taken_0x291eb0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x291EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291EB0u;
        // 0x291eb4: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291eb0) {
            ctx->pc = 0x291EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291ea0;
        }
    }
    ctx->pc = 0x291EB8u;
    // 0x291eb8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x291eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ebc: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x291ebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x291ec0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x291EC0u;
    {
        const bool branch_taken_0x291ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291EC0u;
        // 0x291ec4: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ec0) {
            ctx->pc = 0x291E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291e90;
        }
    }
    ctx->pc = 0x291EC8u;
    // 0x291ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x291EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291ED0u;
}
