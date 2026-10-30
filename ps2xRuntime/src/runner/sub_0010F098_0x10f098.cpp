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

// Function: sub_0010F098
// Address: 0x10f098 - 0x10f0e8
void sub_0010F098_0x10f098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F098_0x10f098");
#endif

    switch (ctx->pc) {
        case 0x10f0c0u: goto label_10f0c0;
        default: break;
    }

    ctx->pc = 0x10f098u;

    // 0x10f098: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x10f098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x10f09c: 0x8c478678  lw          $a3, -0x7988($v0)
    ctx->pc = 0x10f09cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x598678u));
    // 0x10f0a0: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x10F0A0u;
    {
        const bool branch_taken_0x10f0a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0A0u;
        // 0x10f0a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0a0) {
            ctx->pc = 0x10F0E0u;
            goto label_10f0e0;
        }
    }
    ctx->pc = 0x10F0A8u;
    // 0x10f0a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x10f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f0ac: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x10f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x10f0b0: 0x8c458674  lw          $a1, -0x798C($v0)
    ctx->pc = 0x10f0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x598674u));
    // 0x10f0b4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x10f0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0b8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x10f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x10f0bc: 0x0  nop
    ctx->pc = 0x10f0bcu;
    // NOP
label_10f0c0:
    // 0x10f0c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10f0c4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F0C4u;
    {
        const bool branch_taken_0x10f0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0C4u;
        // 0x10f0c8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0c4) {
            ctx->pc = 0x10F0D4u;
            goto label_10f0d4;
        }
    }
    ctx->pc = 0x10F0CCu;
    // 0x10f0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x10F0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0CCu;
        // 0x10f0d0: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F0D4u;
label_10f0d4:
    // 0x10f0d4: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x10f0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10f0d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10F0D8u;
    {
        const bool branch_taken_0x10f0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0D8u;
        // 0x10f0dc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0d8) {
            ctx->pc = 0x10F0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f0c0;
        }
    }
    ctx->pc = 0x10F0E0u;
label_10f0e0:
    // 0x10f0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x10F0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0E0u;
        // 0x10f0e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F0E8u;
}
