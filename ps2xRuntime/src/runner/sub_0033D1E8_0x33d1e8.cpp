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

// Function: sub_0033D1E8
// Address: 0x33d1e8 - 0x33d230
void sub_0033D1E8_0x33d1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D1E8_0x33d1e8");
#endif

    switch (ctx->pc) {
        case 0x33d1f8u: goto label_33d1f8;
        default: break;
    }

    ctx->pc = 0x33d1e8u;

    // 0x33d1e8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x33d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x33d1ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33d1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d1f0: 0x3442c530  ori         $v0, $v0, 0xC530
    ctx->pc = 0x33d1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50480);
    // 0x33d1f4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33d1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_33d1f8:
    // 0x33d1f8: 0x94830032  lhu         $v1, 0x32($a0)
    ctx->pc = 0x33d1f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x33d1fc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x33d1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x33d200: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D200u;
    {
        const bool branch_taken_0x33d200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D200u;
        // 0x33d204: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d200) {
            ctx->pc = 0x33D218u;
            goto label_33d218;
        }
    }
    ctx->pc = 0x33D208u;
    // 0x33d208: 0x3463000b  ori         $v1, $v1, 0xB
    ctx->pc = 0x33d208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11);
    // 0x33d20c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x33d20cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d210: 0x3e00008  jr          $ra
    ctx->pc = 0x33D210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D210u;
        // 0x33d214: 0xa4830032  sh          $v1, 0x32($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D218u;
label_33d218:
    // 0x33d218: 0x28a201a0  slti        $v0, $a1, 0x1A0
    ctx->pc = 0x33d218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)416) ? 1 : 0);
    // 0x33d21c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x33D21Cu;
    {
        const bool branch_taken_0x33d21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D21Cu;
        // 0x33d220: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d21c) {
            ctx->pc = 0x33D1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d1f8;
        }
    }
    ctx->pc = 0x33D224u;
    // 0x33d224: 0x3e00008  jr          $ra
    ctx->pc = 0x33D224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D224u;
        // 0x33d228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D22Cu;
    // 0x33d22c: 0x0  nop
    ctx->pc = 0x33d22cu;
    // NOP
    ctx->pc = 0x33d230u;
}
