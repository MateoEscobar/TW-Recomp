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

// Function: sub_00164138
// Address: 0x164138 - 0x164178
void sub_00164138_0x164138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164138_0x164138");
#endif

    switch (ctx->pc) {
        case 0x164148u: goto label_164148;
        default: break;
    }

    ctx->pc = 0x164138u;

    // 0x164138: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x164138u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16413c: 0x24850438  addiu       $a1, $a0, 0x438
    ctx->pc = 0x16413cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1080));
    // 0x164140: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x164140u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164144: 0x0  nop
    ctx->pc = 0x164144u;
    // NOP
label_164148:
    // 0x164148: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x164148u;
    {
        const bool branch_taken_0x164148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164148) {
            ctx->pc = 0x16414Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164148u;
            // 0x16414c: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164164u;
            goto label_164164;
        }
    }
    ctx->pc = 0x164150u;
    // 0x164150: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x164150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x164154: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x164154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x164158: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x164158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16415c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x16415cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x164160: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x164160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_164164:
    // 0x164164: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x164164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x164168: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x164168u;
    {
        const bool branch_taken_0x164168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164168) {
            ctx->pc = 0x16416Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164168u;
            // 0x16416c: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164148;
        }
    }
    ctx->pc = 0x164170u;
    // 0x164170: 0x3e00008  jr          $ra
    ctx->pc = 0x164170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164170u;
        // 0x164174: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164178u;
}
