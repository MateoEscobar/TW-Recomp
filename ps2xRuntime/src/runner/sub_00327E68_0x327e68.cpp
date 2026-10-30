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

// Function: sub_00327E68
// Address: 0x327e68 - 0x327ee0
void sub_00327E68_0x327e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327E68_0x327e68");
#endif

    switch (ctx->pc) {
        case 0x327e88u: goto label_327e88;
        case 0x327ea8u: goto label_327ea8;
        default: break;
    }

    ctx->pc = 0x327e68u;

    // 0x327e68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x327e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x327e6c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x327e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x327e70: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x327E70u;
    {
        const bool branch_taken_0x327e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x327E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E70u;
        // 0x327e74: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e70) {
            ctx->pc = 0x327ED8u;
            goto label_327ed8;
        }
    }
    ctx->pc = 0x327E78u;
    // 0x327e78: 0x8c8b004c  lw          $t3, 0x4C($a0)
    ctx->pc = 0x327e78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x327e7c: 0x244c6458  addiu       $t4, $v0, 0x6458
    ctx->pc = 0x327e7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 25688));
    // 0x327e80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x327e80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e84: 0x296d0000  slti        $t5, $t3, 0x0
    ctx->pc = 0x327e84u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)0) ? 1 : 0);
label_327e88:
    // 0x327e88: 0x15a0000f  bnez        $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x327E88u;
    {
        const bool branch_taken_0x327e88 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x327E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E88u;
        // 0x327e8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e88) {
            ctx->pc = 0x327EC8u;
            goto label_327ec8;
        }
    }
    ctx->pc = 0x327E90u;
    // 0x327e90: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x327e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x327e94: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x327e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x327e98: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x327e98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x327e9c: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x327e9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327ea0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x327ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x327ea4: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x327ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_327ea8:
    // 0x327ea8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x327ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x327eac: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x327EACu;
    {
        const bool branch_taken_0x327eac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x327EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EACu;
        // 0x327eb0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327eac) {
            ctx->pc = 0x327EBCu;
            goto label_327ebc;
        }
    }
    ctx->pc = 0x327EB4u;
    // 0x327eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x327EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EB4u;
        // 0x327eb8: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327EBCu;
label_327ebc:
    // 0x327ebc: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x327ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x327ec0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x327EC0u;
    {
        const bool branch_taken_0x327ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EC0u;
        // 0x327ec4: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ec0) {
            ctx->pc = 0x327EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327ea8;
        }
    }
    ctx->pc = 0x327EC8u;
label_327ec8:
    // 0x327ec8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x327ec8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x327ecc: 0x2942000f  slti        $v0, $t2, 0xF
    ctx->pc = 0x327eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x327ed0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x327ED0u;
    {
        const bool branch_taken_0x327ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327ED0u;
        // 0x327ed4: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ed0) {
            ctx->pc = 0x327E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327e88;
        }
    }
    ctx->pc = 0x327ED8u;
label_327ed8:
    // 0x327ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x327ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327ED8u;
        // 0x327edc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327EE0u;
}
