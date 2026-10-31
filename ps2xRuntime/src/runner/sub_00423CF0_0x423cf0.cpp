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

// Function: sub_00423CF0
// Address: 0x423cf0 - 0x423d30
void sub_00423CF0_0x423cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423CF0_0x423cf0");
#endif

    switch (ctx->pc) {
        case 0x423cfcu: goto label_423cfc;
        default: break;
    }

    ctx->pc = 0x423cf0u;

    // 0x423cf0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x423cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x423cf4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x423CF4u;
    {
        const bool branch_taken_0x423cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x423cf4) {
            ctx->pc = 0x423D04u;
            goto label_423d04;
        }
    }
    ctx->pc = 0x423CFCu;
label_423cfc:
    // 0x423cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x423CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423CFCu;
        // 0x423d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423D04u;
label_423d04:
    // 0x423d04: 0x0  nop
    ctx->pc = 0x423d04u;
    // NOP
    // 0x423d08: 0x0  nop
    ctx->pc = 0x423d08u;
    // NOP
    // 0x423d0c: 0x4a0fffb  bltz        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x423D0Cu;
    {
        const bool branch_taken_0x423d0c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x423d0c) {
            ctx->pc = 0x423CFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423cfc;
        }
    }
    ctx->pc = 0x423D14u;
    // 0x423d14: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x423d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x423d18: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x423d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x423d1c: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x423D1Cu;
    {
        const bool branch_taken_0x423d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x423D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423D1Cu;
        // 0x423d20: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423d1c) {
            ctx->pc = 0x423CFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423cfc;
        }
    }
    ctx->pc = 0x423D24u;
    // 0x423d24: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x423d24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x423d28: 0x3e00008  jr          $ra
    ctx->pc = 0x423D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423D28u;
        // 0x423d2c: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423D30u;
}
