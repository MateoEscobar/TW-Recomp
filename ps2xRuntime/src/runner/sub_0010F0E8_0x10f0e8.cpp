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

// Function: sub_0010F0E8
// Address: 0x10f0e8 - 0x10f138
void sub_0010F0E8_0x10f0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F0E8_0x10f0e8");
#endif

    switch (ctx->pc) {
        case 0x10f110u: goto label_10f110;
        default: break;
    }

    ctx->pc = 0x10f0e8u;

    // 0x10f0e8: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x10f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x10f0ec: 0x8c478678  lw          $a3, -0x7988($v0)
    ctx->pc = 0x10f0ecu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x598678u));
    // 0x10f0f0: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x10F0F0u;
    {
        const bool branch_taken_0x10f0f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0F0u;
        // 0x10f0f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0f0) {
            ctx->pc = 0x10F130u;
            goto label_10f130;
        }
    }
    ctx->pc = 0x10F0F8u;
    // 0x10f0f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x10f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f0fc: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x10f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x10f100: 0x8c458674  lw          $a1, -0x798C($v0)
    ctx->pc = 0x10f100u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x598674u));
    // 0x10f104: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x10f104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f108: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x10f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x10f10c: 0x0  nop
    ctx->pc = 0x10f10cu;
    // NOP
label_10f110:
    // 0x10f110: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10f110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10f114: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F114u;
    {
        const bool branch_taken_0x10f114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F114u;
        // 0x10f118: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f114) {
            ctx->pc = 0x10F124u;
            goto label_10f124;
        }
    }
    ctx->pc = 0x10F11Cu;
    // 0x10f11c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F11Cu;
        // 0x10f120: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F124u;
label_10f124:
    // 0x10f124: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x10f124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10f128: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10F128u;
    {
        const bool branch_taken_0x10f128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F128u;
        // 0x10f12c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f128) {
            ctx->pc = 0x10F110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f110;
        }
    }
    ctx->pc = 0x10F130u;
label_10f130:
    // 0x10f130: 0x3e00008  jr          $ra
    ctx->pc = 0x10F130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F130u;
        // 0x10f134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F138u;
}
