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

// Function: sub_003408D8
// Address: 0x3408d8 - 0x340918
void sub_003408D8_0x3408d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003408D8_0x3408d8");
#endif

    switch (ctx->pc) {
        case 0x3408e8u: goto label_3408e8;
        default: break;
    }

    ctx->pc = 0x3408d8u;

    // 0x3408d8: 0x3402f7b0  ori         $v0, $zero, 0xF7B0
    ctx->pc = 0x3408d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63408);
    // 0x3408dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3408dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3408e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3408e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3408e4: 0x0  nop
    ctx->pc = 0x3408e4u;
    // NOP
label_3408e8:
    // 0x3408e8: 0x94820032  lhu         $v0, 0x32($a0)
    ctx->pc = 0x3408e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x3408ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3408ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3408f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3408F0u;
    {
        const bool branch_taken_0x3408f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3408F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3408F0u;
        // 0x3408f4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3408f0) {
            ctx->pc = 0x340900u;
            goto label_340900;
        }
    }
    ctx->pc = 0x3408F8u;
    // 0x3408f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3408F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3408FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3408F8u;
        // 0x3408fc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3408F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340900u;
label_340900:
    // 0x340900: 0x2c62003c  sltiu       $v0, $v1, 0x3C
    ctx->pc = 0x340900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x340904: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x340904u;
    {
        const bool branch_taken_0x340904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x340908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340904u;
        // 0x340908: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340904) {
            ctx->pc = 0x3408E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3408e8;
        }
    }
    ctx->pc = 0x34090Cu;
    // 0x34090c: 0x3e00008  jr          $ra
    ctx->pc = 0x34090Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34090Cu;
        // 0x340910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34090Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340914u;
    // 0x340914: 0x0  nop
    ctx->pc = 0x340914u;
    // NOP
    ctx->pc = 0x340918u;
}
