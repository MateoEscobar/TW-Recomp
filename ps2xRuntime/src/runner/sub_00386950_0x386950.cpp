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

// Function: sub_00386950
// Address: 0x386950 - 0x386980
void sub_00386950_0x386950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386950_0x386950");
#endif

    switch (ctx->pc) {
        case 0x386958u: goto label_386958;
        default: break;
    }

    ctx->pc = 0x386950u;

    // 0x386950: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x386950u;
    {
        const bool branch_taken_0x386950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x386954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386950u;
        // 0x386954: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386950) {
            ctx->pc = 0x386978u;
            goto label_386978;
        }
    }
    ctx->pc = 0x386958u;
label_386958:
    // 0x386958: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x386958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38695c: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x38695Cu;
    {
        const bool branch_taken_0x38695c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x386960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38695Cu;
        // 0x386960: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38695c) {
            ctx->pc = 0x38696Cu;
            goto label_38696c;
        }
    }
    ctx->pc = 0x386964u;
    // 0x386964: 0x3e00008  jr          $ra
    ctx->pc = 0x386964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386964u;
        // 0x386968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38696Cu;
label_38696c:
    // 0x38696c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x38696cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x386970: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x386970u;
    {
        const bool branch_taken_0x386970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386970u;
        // 0x386974: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386970) {
            ctx->pc = 0x386958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386958;
        }
    }
    ctx->pc = 0x386978u;
label_386978:
    // 0x386978: 0x3e00008  jr          $ra
    ctx->pc = 0x386978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386978u;
        // 0x38697c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386980u;
}
