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

// Function: sub_001D5BC8
// Address: 0x1d5bc8 - 0x1d5c38
void sub_001D5BC8_0x1d5bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5BC8_0x1d5bc8");
#endif

    switch (ctx->pc) {
        case 0x1d5bfcu: goto label_1d5bfc;
        default: break;
    }

    ctx->pc = 0x1d5bc8u;

    // 0x1d5bc8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1d5bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5bcc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d5bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d5bd0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1d5bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d5bd4: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D5BD4u;
    {
        const bool branch_taken_0x1d5bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d5bd4) {
            ctx->pc = 0x1D5C2Cu;
            goto label_1d5c2c;
        }
    }
    ctx->pc = 0x1D5BDCu;
    // 0x1d5bdc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d5bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1d5be0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5BE0u;
    {
        const bool branch_taken_0x1d5be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BE0u;
        // 0x1d5be4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5be0) {
            ctx->pc = 0x1D5BF8u;
            goto label_1d5bf8;
        }
    }
    ctx->pc = 0x1D5BE8u;
    // 0x1d5be8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1d5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d5bec: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x1d5becu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x1d5bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BF0u;
        // 0x1d5bf4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5BF8u;
label_1d5bf8:
    // 0x1d5bf8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d5bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1d5bfc:
    // 0x1d5bfc: 0x2ce20005  sltiu       $v0, $a3, 0x5
    ctx->pc = 0x1d5bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d5c00: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D5C00u;
    {
        const bool branch_taken_0x1d5c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C00u;
        // 0x1d5c04: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c00) {
            ctx->pc = 0x1D5C2Cu;
            goto label_1d5c2c;
        }
    }
    ctx->pc = 0x1D5C08u;
    // 0x1d5c08: 0x24c3000c  addiu       $v1, $a2, 0xC
    ctx->pc = 0x1d5c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x1d5c0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5c10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d5c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d5c14: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D5C14u;
    {
        const bool branch_taken_0x1d5c14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C14u;
        // 0x1d5c18: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c14) {
            ctx->pc = 0x1D5BFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5bfc;
        }
    }
    ctx->pc = 0x1D5C1Cu;
    // 0x1d5c1c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1d5c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1d5c20: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1d5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d5c24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d5c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d5c28: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1d5c28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1d5c2c:
    // 0x1d5c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5C34u;
    // 0x1d5c34: 0x0  nop
    ctx->pc = 0x1d5c34u;
    // NOP
    ctx->pc = 0x1d5c38u;
}
