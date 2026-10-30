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

// Function: sub_00417BE8
// Address: 0x417be8 - 0x417c48
void sub_00417BE8_0x417be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417BE8_0x417be8");
#endif

    switch (ctx->pc) {
        case 0x417c00u: goto label_417c00;
        case 0x417c28u: goto label_417c28;
        default: break;
    }

    ctx->pc = 0x417be8u;

    // 0x417be8: 0x24820018  addiu       $v0, $a0, 0x18
    ctx->pc = 0x417be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x417bec: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x417becu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x417bf0: 0xac821c18  sw          $v0, 0x1C18($a0)
    ctx->pc = 0x417bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7192), GPR_U32(ctx, 2));
    // 0x417bf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x417bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x417bf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x417bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417bfc: 0x24830034  addiu       $v1, $a0, 0x34
    ctx->pc = 0x417bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
label_417c00:
    // 0x417c00: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x417c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x417c04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x417c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x417c08: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x417c08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x417c0c: 0x2cc20100  sltiu       $v0, $a2, 0x100
    ctx->pc = 0x417c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x417c10: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x417c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x417c14: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x417c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x417c18: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x417C18u;
    {
        const bool branch_taken_0x417c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x417C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417C18u;
        // 0x417c1c: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417c18) {
            ctx->pc = 0x417C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_417c00;
        }
    }
    ctx->pc = 0x417C20u;
    // 0x417c20: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x417c20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417c24: 0x0  nop
    ctx->pc = 0x417c24u;
    // NOP
label_417c28:
    // 0x417c28: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x417c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x417c2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x417c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x417c30: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x417c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x417c34: 0x0  nop
    ctx->pc = 0x417c34u;
    // NOP
    // 0x417c38: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x417C38u;
    {
        const bool branch_taken_0x417c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x417C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417C38u;
        // 0x417c3c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417c38) {
            ctx->pc = 0x417C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_417c28;
        }
    }
    ctx->pc = 0x417C40u;
    // 0x417c40: 0x3e00008  jr          $ra
    ctx->pc = 0x417C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417C48u;
}
