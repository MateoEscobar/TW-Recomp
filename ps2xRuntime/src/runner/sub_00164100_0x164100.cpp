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

// Function: sub_00164100
// Address: 0x164100 - 0x164138
void sub_00164100_0x164100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164100_0x164100");
#endif

    switch (ctx->pc) {
        case 0x164108u: goto label_164108;
        default: break;
    }

    ctx->pc = 0x164100u;

    // 0x164100: 0x24830438  addiu       $v1, $a0, 0x438
    ctx->pc = 0x164100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1080));
    // 0x164104: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x164104u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_164108:
    // 0x164108: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x164108u;
    {
        const bool branch_taken_0x164108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164108) {
            ctx->pc = 0x16410Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164108u;
            // 0x16410c: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164124u;
            goto label_164124;
        }
    }
    ctx->pc = 0x164110u;
    // 0x164110: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x164110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x164114: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x164114u;
    {
        const bool branch_taken_0x164114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164114) {
            ctx->pc = 0x164118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164114u;
            // 0x164118: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164124u;
            goto label_164124;
        }
    }
    ctx->pc = 0x16411Cu;
    // 0x16411c: 0x3e00008  jr          $ra
    ctx->pc = 0x16411Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16411Cu;
        // 0x164120: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16411Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164124u;
label_164124:
    // 0x164124: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x164124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x164128: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x164128u;
    {
        const bool branch_taken_0x164128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164128) {
            ctx->pc = 0x16412Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164128u;
            // 0x16412c: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164108;
        }
    }
    ctx->pc = 0x164130u;
    // 0x164130: 0x3e00008  jr          $ra
    ctx->pc = 0x164130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164130u;
        // 0x164134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164138u;
}
