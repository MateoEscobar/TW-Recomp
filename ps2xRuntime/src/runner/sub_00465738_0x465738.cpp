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

// Function: sub_00465738
// Address: 0x465738 - 0x465780
void sub_00465738_0x465738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465738_0x465738");
#endif

    switch (ctx->pc) {
        case 0x465750u: goto label_465750;
        default: break;
    }

    ctx->pc = 0x465738u;

    // 0x465738: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x465738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x46573c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x46573cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x465740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x465740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465744: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x465744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x465748: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x465748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x46574c: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x46574cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_465750:
    // 0x465750: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x465750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x465754: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x465754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x465758: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x465758u;
    {
        const bool branch_taken_0x465758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x465758) {
            ctx->pc = 0x465778u;
            goto label_465778;
        }
    }
    ctx->pc = 0x465760u;
    // 0x465760: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x465760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x465764: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x465764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x465768: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x465768u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x46576c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x46576Cu;
    {
        const bool branch_taken_0x46576c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46576c) {
            ctx->pc = 0x465770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46576Cu;
            // 0x465770: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x465750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465750;
        }
    }
    ctx->pc = 0x465774u;
    // 0x465774: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x465774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465778:
    // 0x465778: 0x3e00008  jr          $ra
    ctx->pc = 0x465778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465778u;
        // 0x46577c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465780u;
}
