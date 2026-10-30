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

// Function: sub_00147F18
// Address: 0x147f18 - 0x147f50
void sub_00147F18_0x147f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147F18_0x147f18");
#endif

    ctx->pc = 0x147f18u;

    // 0x147f18: 0x80830019  lb          $v1, 0x19($a0)
    ctx->pc = 0x147f18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x147f1c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147f20: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x147f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x147f24: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x147f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x147f28: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x147f28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x147f2c: 0x2ca4000c  sltiu       $a0, $a1, 0xC
    ctx->pc = 0x147f2cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x147f30: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x147F30u;
    {
        const bool branch_taken_0x147f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x147F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F30u;
        // 0x147f34: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f30) {
            ctx->pc = 0x147F44u;
            goto label_147f44;
        }
    }
    ctx->pc = 0x147F38u;
    // 0x147f38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x147f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x147f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x147F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F3Cu;
        // 0x147f40: 0x90620034  lbu         $v0, 0x34($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147F44u;
label_147f44:
    // 0x147f44: 0x3e00008  jr          $ra
    ctx->pc = 0x147F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F44u;
        // 0x147f48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147F4Cu;
    // 0x147f4c: 0x0  nop
    ctx->pc = 0x147f4cu;
    // NOP
    ctx->pc = 0x147f50u;
}
