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

// Function: sub_00151D88
// Address: 0x151d88 - 0x151dc0
void sub_00151D88_0x151d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151D88_0x151d88");
#endif

    ctx->pc = 0x151d88u;

    // 0x151d88: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x151d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151d8c: 0x2ca20030  sltiu       $v0, $a1, 0x30
    ctx->pc = 0x151d8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x151d90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151D90u;
    {
        const bool branch_taken_0x151d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D90u;
        // 0x151d94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d90) {
            ctx->pc = 0x151DA0u;
            goto label_151da0;
        }
    }
    ctx->pc = 0x151D98u;
    // 0x151d98: 0x3e00008  jr          $ra
    ctx->pc = 0x151D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D98u;
        // 0x151d9c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151DA0u;
label_151da0:
    // 0x151da0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x151da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x151da4: 0x2442c248  addiu       $v0, $v0, -0x3DB8
    ctx->pc = 0x151da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951496));
    // 0x151da8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x151da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x151dac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x151dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151db0: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x151DB0u;
    {
        const bool branch_taken_0x151db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x151db0) {
            ctx->pc = 0x151DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151DB0u;
            // 0x151db4: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151DB8u;
            goto label_151db8;
        }
    }
    ctx->pc = 0x151DB8u;
label_151db8:
    // 0x151db8: 0x3e00008  jr          $ra
    ctx->pc = 0x151DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DB8u;
        // 0x151dbc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151DC0u;
}
