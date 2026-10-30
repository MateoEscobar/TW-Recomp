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

// Function: sub_00222AD8
// Address: 0x222ad8 - 0x222b18
void sub_00222AD8_0x222ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222AD8_0x222ad8");
#endif

    ctx->pc = 0x222ad8u;

    // 0x222ad8: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x222ad8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x222adc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x222adcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x222ae0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x222AE0u;
    {
        const bool branch_taken_0x222ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222AE0u;
        // 0x222ae4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ae0) {
            ctx->pc = 0x222B08u;
            goto label_222b08;
        }
    }
    ctx->pc = 0x222AE8u;
    // 0x222ae8: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x222ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x222aec: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x222aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x222af0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x222af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x222af4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x222af4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x222af8: 0x8c85489c  lw          $a1, 0x489C($a0)
    ctx->pc = 0x222af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
    // 0x222afc: 0x24420168  addiu       $v0, $v0, 0x168
    ctx->pc = 0x222afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x222b00: 0x3e00008  jr          $ra
    ctx->pc = 0x222B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B00u;
        // 0x222b04: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222B08u;
label_222b08:
    // 0x222b08: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x222b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    // 0x222b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x222B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B0Cu;
        // 0x222b10: 0x24420168  addiu       $v0, $v0, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222B14u;
    // 0x222b14: 0x0  nop
    ctx->pc = 0x222b14u;
    // NOP
    ctx->pc = 0x222b18u;
}
