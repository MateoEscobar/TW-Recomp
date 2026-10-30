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

// Function: sub_00331C40
// Address: 0x331c40 - 0x331ca0
void sub_00331C40_0x331c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331C40_0x331c40");
#endif

    switch (ctx->pc) {
        case 0x331c70u: goto label_331c70;
        default: break;
    }

    ctx->pc = 0x331c40u;

    // 0x331c40: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x331c40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331c44: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x331c44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x331c48: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x331c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x331c4c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x331c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x331c50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x331c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x331c54: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x331c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x331c58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x331c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x331c5c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x331c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x331c60: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x331c60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x331c64: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x331c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x331c68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x331c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x331c6c: 0x0  nop
    ctx->pc = 0x331c6cu;
    // NOP
label_331c70:
    // 0x331c70: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x331C70u;
    {
        const bool branch_taken_0x331c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x331c70) {
            ctx->pc = 0x331C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331C70u;
            // 0x331c74: 0x8ca50020  lw          $a1, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331C8Cu;
            goto label_331c8c;
        }
    }
    ctx->pc = 0x331C78u;
    // 0x331c78: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x331c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x331c7c: 0x54470003  bnel        $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x331C7Cu;
    {
        const bool branch_taken_0x331c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x331c7c) {
            ctx->pc = 0x331C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331C7Cu;
            // 0x331c80: 0x8ca50020  lw          $a1, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331C8Cu;
            goto label_331c8c;
        }
    }
    ctx->pc = 0x331C84u;
    // 0x331c84: 0x3e00008  jr          $ra
    ctx->pc = 0x331C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331C84u;
        // 0x331c88: 0x24a20010  addiu       $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331C8Cu;
label_331c8c:
    // 0x331c8c: 0x54a0fff8  bnel        $a1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x331C8Cu;
    {
        const bool branch_taken_0x331c8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x331c8c) {
            ctx->pc = 0x331C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331C8Cu;
            // 0x331c90: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331c70;
        }
    }
    ctx->pc = 0x331C94u;
    // 0x331c94: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x331c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x331c98: 0x3e00008  jr          $ra
    ctx->pc = 0x331C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331C98u;
        // 0x331c9c: 0x24425af0  addiu       $v0, $v0, 0x5AF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331CA0u;
}
