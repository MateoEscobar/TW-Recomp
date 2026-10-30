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

// Function: sub_004433C8
// Address: 0x4433c8 - 0x443408
void sub_004433C8_0x4433c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004433C8_0x4433c8");
#endif

    switch (ctx->pc) {
        case 0x4433e0u: goto label_4433e0;
        default: break;
    }

    ctx->pc = 0x4433c8u;

    // 0x4433c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4433c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4433cc: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4433CCu;
    {
        const bool branch_taken_0x4433cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x4433D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4433CCu;
        // 0x4433d0: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4433cc) {
            ctx->pc = 0x4433FCu;
            goto label_4433fc;
        }
    }
    ctx->pc = 0x4433D4u;
    // 0x4433d4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4433D4u;
    {
        const bool branch_taken_0x4433d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4433d4) {
            ctx->pc = 0x4433D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4433D4u;
            // 0x4433d8: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
            if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x443400u;
            goto label_443400;
        }
    }
    ctx->pc = 0x4433DCu;
    // 0x4433dc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4433dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4433e0:
    // 0x4433e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4433e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4433e4: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4433E4u;
    {
        const bool branch_taken_0x4433e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x4433E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4433E4u;
        // 0x4433e8: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4433e4) {
            ctx->pc = 0x4433FCu;
            goto label_4433fc;
        }
    }
    ctx->pc = 0x4433ECu;
    // 0x4433ec: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x4433ECu;
    {
        const bool branch_taken_0x4433ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4433ec) {
            ctx->pc = 0x4433F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4433ECu;
            // 0x4433f0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4433E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4433e0;
        }
    }
    ctx->pc = 0x4433F4u;
    // 0x4433f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4433F4u;
    {
        const bool branch_taken_0x4433f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4433F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4433F4u;
        // 0x4433f8: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4433f4) {
            ctx->pc = 0x443400u;
            goto label_443400;
        }
    }
    ctx->pc = 0x4433FCu;
label_4433fc:
    // 0x4433fc: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x4433fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_443400:
    // 0x443400: 0x3e00008  jr          $ra
    ctx->pc = 0x443400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443400u;
        // 0x443404: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443408u;
}
