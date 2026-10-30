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

// Function: sub_0032E328
// Address: 0x32e328 - 0x32e358
void sub_0032E328_0x32e328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E328_0x32e328");
#endif

    ctx->pc = 0x32e328u;

    // 0x32e328: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x32e328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x32e32c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32E32Cu;
    {
        const bool branch_taken_0x32e32c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E32Cu;
        // 0x32e330: 0x2402010c  addiu       $v0, $zero, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e32c) {
            ctx->pc = 0x32E344u;
            goto label_32e344;
        }
    }
    ctx->pc = 0x32E334u;
    // 0x32e334: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32E334u;
    {
        const bool branch_taken_0x32e334 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x32E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E334u;
        // 0x32e338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e334) {
            ctx->pc = 0x32E34Cu;
            goto label_32e34c;
        }
    }
    ctx->pc = 0x32E33Cu;
    // 0x32e33c: 0x3e00008  jr          $ra
    ctx->pc = 0x32E33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E344u;
label_32e344:
    // 0x32e344: 0x3e00008  jr          $ra
    ctx->pc = 0x32E344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E344u;
        // 0x32e348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E34Cu;
label_32e34c:
    // 0x32e34c: 0x3e00008  jr          $ra
    ctx->pc = 0x32E34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E34Cu;
        // 0x32e350: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E354u;
    // 0x32e354: 0x0  nop
    ctx->pc = 0x32e354u;
    // NOP
    ctx->pc = 0x32e358u;
}
