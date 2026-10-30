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

// Function: sub_00299D20
// Address: 0x299d20 - 0x299d80
void sub_00299D20_0x299d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299D20_0x299d20");
#endif

    switch (ctx->pc) {
        case 0x299d30u: goto label_299d30;
        default: break;
    }

    ctx->pc = 0x299d20u;

    // 0x299d20: 0x24880068  addiu       $t0, $a0, 0x68
    ctx->pc = 0x299d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x299d24: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x299d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x299d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x299d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299d2c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x299d2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_299d30:
    // 0x299d30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x299d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x299d34: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x299D34u;
    {
        const bool branch_taken_0x299d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299d34) {
            ctx->pc = 0x299D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299D34u;
            // 0x299d38: 0x71027  nor         $v0, $zero, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299D4Cu;
            goto label_299d4c;
        }
    }
    ctx->pc = 0x299D3Cu;
    // 0x299d3c: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x299D3Cu;
    {
        const bool branch_taken_0x299d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x299D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D3Cu;
        // 0x299d40: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d3c) {
            ctx->pc = 0x299D54u;
            goto label_299d54;
        }
    }
    ctx->pc = 0x299D44u;
    // 0x299d44: 0x3e00008  jr          $ra
    ctx->pc = 0x299D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D44u;
        // 0x299d48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299D4Cu;
label_299d4c:
    // 0x299d4c: 0xc2380a  movz        $a3, $a2, $v0
    ctx->pc = 0x299d4cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x299d50: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x299d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_299d54:
    // 0x299d54: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x299d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x299d58: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x299D58u;
    {
        const bool branch_taken_0x299d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D58u;
        // 0x299d5c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d58) {
            ctx->pc = 0x299D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299d30;
        }
    }
    ctx->pc = 0x299D60u;
    // 0x299d60: 0x4e00005  bltz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x299D60u;
    {
        const bool branch_taken_0x299d60 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x299D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D60u;
        // 0x299d64: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d60) {
            ctx->pc = 0x299D78u;
            goto label_299d78;
        }
    }
    ctx->pc = 0x299D68u;
    // 0x299d68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x299d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299d6c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x299d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x299d70: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x299d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x299d74: 0xa083008c  sb          $v1, 0x8C($a0)
    ctx->pc = 0x299d74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 140), (uint8_t)GPR_U32(ctx, 3));
label_299d78:
    // 0x299d78: 0x3e00008  jr          $ra
    ctx->pc = 0x299D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D78u;
        // 0x299d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299D80u;
}
