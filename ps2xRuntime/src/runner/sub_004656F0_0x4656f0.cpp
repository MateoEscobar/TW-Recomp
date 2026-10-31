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

// Function: sub_004656F0
// Address: 0x4656f0 - 0x465738
void sub_004656F0_0x4656f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004656F0_0x4656f0");
#endif

    switch (ctx->pc) {
        case 0x465708u: goto label_465708;
        default: break;
    }

    ctx->pc = 0x4656f0u;

    // 0x4656f0: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x4656f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x4656f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4656f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4656f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4656f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4656fc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4656fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x465700: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x465700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x465704: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x465704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_465708:
    // 0x465708: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x465708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x46570c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x46570cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x465710: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x465710u;
    {
        const bool branch_taken_0x465710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x465710) {
            ctx->pc = 0x465730u;
            goto label_465730;
        }
    }
    ctx->pc = 0x465718u;
    // 0x465718: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x465718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x46571c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x46571cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x465720: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x465720u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x465724: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x465724u;
    {
        const bool branch_taken_0x465724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x465724) {
            ctx->pc = 0x465728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x465724u;
            // 0x465728: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x465708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465708;
        }
    }
    ctx->pc = 0x46572Cu;
    // 0x46572c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46572cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465730:
    // 0x465730: 0x3e00008  jr          $ra
    ctx->pc = 0x465730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465730u;
        // 0x465734: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465738u;
}
