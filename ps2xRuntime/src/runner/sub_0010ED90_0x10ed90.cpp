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

// Function: sub_0010ED90
// Address: 0x10ed90 - 0x10edd0
void sub_0010ED90_0x10ed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ED90_0x10ed90");
#endif

    switch (ctx->pc) {
        case 0x10eda8u: goto label_10eda8;
        default: break;
    }

    ctx->pc = 0x10ed90u;

    // 0x10ed90: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x10ed90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10ed94: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x10ED94u;
    {
        const bool branch_taken_0x10ed94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED94u;
        // 0x10ed98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed94) {
            ctx->pc = 0x10EDC8u;
            goto label_10edc8;
        }
    }
    ctx->pc = 0x10ED9Cu;
    // 0x10ed9c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10eda0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x10eda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10eda4: 0x0  nop
    ctx->pc = 0x10eda4u;
    // NOP
label_10eda8:
    // 0x10eda8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10edac: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EDACu;
    {
        const bool branch_taken_0x10edac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x10edac) {
            ctx->pc = 0x10EDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EDACu;
            // 0x10edb0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EDBCu;
            goto label_10edbc;
        }
    }
    ctx->pc = 0x10EDB4u;
    // 0x10edb4: 0x3e00008  jr          $ra
    ctx->pc = 0x10EDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDB4u;
        // 0x10edb8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EDBCu;
label_10edbc:
    // 0x10edbc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x10edbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x10edc0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10EDC0u;
    {
        const bool branch_taken_0x10edc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDC0u;
        // 0x10edc4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edc0) {
            ctx->pc = 0x10EDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10eda8;
        }
    }
    ctx->pc = 0x10EDC8u;
label_10edc8:
    // 0x10edc8: 0x3e00008  jr          $ra
    ctx->pc = 0x10EDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDC8u;
        // 0x10edcc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EDD0u;
}
