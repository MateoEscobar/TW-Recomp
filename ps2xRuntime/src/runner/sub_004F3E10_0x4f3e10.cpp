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

// Function: sub_004F3E10
// Address: 0x4f3e10 - 0x4f3e88
void sub_004F3E10_0x4f3e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3E10_0x4f3e10");
#endif

    switch (ctx->pc) {
        case 0x4f3e28u: goto label_4f3e28;
        default: break;
    }

    ctx->pc = 0x4f3e10u;

    // 0x4f3e10: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x4F3E10u;
    {
        const bool branch_taken_0x4f3e10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3E10u;
        // 0x4f3e14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3e10) {
            ctx->pc = 0x4F3E7Cu;
            goto label_4f3e7c;
        }
    }
    ctx->pc = 0x4F3E18u;
    // 0x4f3e18: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x4f3e18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4f3e1c: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x4F3E1Cu;
    {
        const bool branch_taken_0x4f3e1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3E1Cu;
        // 0x4f3e20: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3e1c) {
            ctx->pc = 0x4F3E7Cu;
            goto label_4f3e7c;
        }
    }
    ctx->pc = 0x4F3E24u;
    // 0x4f3e24: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x4f3e24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4f3e28:
    // 0x4f3e28: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4f3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4f3e2c: 0x484821  addu        $t1, $v0, $t0
    ctx->pc = 0x4f3e2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4f3e30: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4f3e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f3e34: 0x1465000d  bne         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x4F3E34u;
    {
        const bool branch_taken_0x4f3e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x4F3E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3E34u;
        // 0x4f3e38: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3e34) {
            ctx->pc = 0x4F3E6Cu;
            goto label_4f3e6c;
        }
    }
    ctx->pc = 0x4F3E3Cu;
    // 0x4f3e3c: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x4f3e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4f3e40: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4f3e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x4f3e44: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4f3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4f3e48: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4f3e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4f3e4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4f3e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f3e50: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4f3e50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4f3e54: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4f3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4f3e58: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4f3e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4f3e5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4f3e60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f3e64: 0x3e00008  jr          $ra
    ctx->pc = 0x4F3E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3E64u;
        // 0x4f3e68: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3E6Cu;
label_4f3e6c:
    // 0x4f3e6c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x4f3e6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3e70: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x4f3e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4f3e74: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4F3E74u;
    {
        const bool branch_taken_0x4f3e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f3e74) {
            ctx->pc = 0x4F3E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F3E74u;
            // 0x4f3e78: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f3e28;
        }
    }
    ctx->pc = 0x4F3E7Cu;
label_4f3e7c:
    // 0x4f3e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F3E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3E84u;
    // 0x4f3e84: 0x0  nop
    ctx->pc = 0x4f3e84u;
    // NOP
    ctx->pc = 0x4f3e88u;
}
