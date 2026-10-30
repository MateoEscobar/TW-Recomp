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

// Function: sub_0033D1A0
// Address: 0x33d1a0 - 0x33d1e8
void sub_0033D1A0_0x33d1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D1A0_0x33d1a0");
#endif

    switch (ctx->pc) {
        case 0x33d1b0u: goto label_33d1b0;
        default: break;
    }

    ctx->pc = 0x33d1a0u;

    // 0x33d1a0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x33d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x33d1a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33d1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d1a8: 0x34422930  ori         $v0, $v0, 0x2930
    ctx->pc = 0x33d1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10544);
    // 0x33d1ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33d1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_33d1b0:
    // 0x33d1b0: 0x94830032  lhu         $v1, 0x32($a0)
    ctx->pc = 0x33d1b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x33d1b4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x33d1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x33d1b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D1B8u;
    {
        const bool branch_taken_0x33d1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D1B8u;
        // 0x33d1bc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d1b8) {
            ctx->pc = 0x33D1D0u;
            goto label_33d1d0;
        }
    }
    ctx->pc = 0x33D1C0u;
    // 0x33d1c0: 0x3463000b  ori         $v1, $v1, 0xB
    ctx->pc = 0x33d1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11);
    // 0x33d1c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x33d1c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x33D1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D1C8u;
        // 0x33d1cc: 0xa4830032  sh          $v1, 0x32($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D1D0u;
label_33d1d0:
    // 0x33d1d0: 0x28a201a0  slti        $v0, $a1, 0x1A0
    ctx->pc = 0x33d1d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)416) ? 1 : 0);
    // 0x33d1d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x33D1D4u;
    {
        const bool branch_taken_0x33d1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D1D4u;
        // 0x33d1d8: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d1d4) {
            ctx->pc = 0x33D1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d1b0;
        }
    }
    ctx->pc = 0x33D1DCu;
    // 0x33d1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x33D1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D1DCu;
        // 0x33d1e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D1E4u;
    // 0x33d1e4: 0x0  nop
    ctx->pc = 0x33d1e4u;
    // NOP
    ctx->pc = 0x33d1e8u;
}
