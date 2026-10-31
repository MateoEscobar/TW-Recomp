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

// Function: sub_00222B18
// Address: 0x222b18 - 0x222b58
void sub_00222B18_0x222b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222B18_0x222b18");
#endif

    ctx->pc = 0x222b18u;

    // 0x222b18: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x222b18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x222b1c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x222b1cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x222b20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x222B20u;
    {
        const bool branch_taken_0x222b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B20u;
        // 0x222b24: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b20) {
            ctx->pc = 0x222B48u;
            goto label_222b48;
        }
    }
    ctx->pc = 0x222B28u;
    // 0x222b28: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x222b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x222b2c: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x222b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x222b30: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x222b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x222b34: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x222b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x222b38: 0x8c85489c  lw          $a1, 0x489C($a0)
    ctx->pc = 0x222b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
    // 0x222b3c: 0x24420168  addiu       $v0, $v0, 0x168
    ctx->pc = 0x222b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x222b40: 0x3e00008  jr          $ra
    ctx->pc = 0x222B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B40u;
        // 0x222b44: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222B48u;
label_222b48:
    // 0x222b48: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x222b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    // 0x222b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x222B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B4Cu;
        // 0x222b50: 0x24420168  addiu       $v0, $v0, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222B54u;
    // 0x222b54: 0x0  nop
    ctx->pc = 0x222b54u;
    // NOP
    ctx->pc = 0x222b58u;
}
