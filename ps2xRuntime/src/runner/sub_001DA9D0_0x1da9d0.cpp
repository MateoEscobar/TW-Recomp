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

// Function: sub_001DA9D0
// Address: 0x1da9d0 - 0x1daa38
void sub_001DA9D0_0x1da9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA9D0_0x1da9d0");
#endif

    switch (ctx->pc) {
        case 0x1da9fcu: goto label_1da9fc;
        default: break;
    }

    ctx->pc = 0x1da9d0u;

    // 0x1da9d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1da9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1da9d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1da9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1da9d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1da9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da9dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da9e4: 0x241106f0  addiu       $s1, $zero, 0x6F0
    ctx->pc = 0x1da9e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1776));
    // 0x1da9e8: 0x8e0445c0  lw          $a0, 0x45C0($s0)
    ctx->pc = 0x1da9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17856)));
    // 0x1da9ec: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x1da9ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1da9f0: 0x24841530  addiu       $a0, $a0, 0x1530
    ctx->pc = 0x1da9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5424));
    // 0x1da9f4: 0xc075858  jal         func_1D6160
    ctx->pc = 0x1DA9F4u;
    SET_GPR_U32(ctx, 31, 0x1DA9FCu);
    ctx->pc = 0x1DA9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA9F4u;
    // 0x1da9f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6160u, 0x1DA9F4u, 0x1DA9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9FCu;
label_1da9fc:
    // 0x1da9fc: 0x8e0345c0  lw          $v1, 0x45C0($s0)
    ctx->pc = 0x1da9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17856)));
    // 0x1daa00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1daa00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1daa04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1daa04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1daa08: 0x711018  mult        $v0, $v1, $s1
    ctx->pc = 0x1daa08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1daa0c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1daa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1daa10: 0xac601740  sw          $zero, 0x1740($v1)
    ctx->pc = 0x1daa10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5952), GPR_U32(ctx, 0));
    // 0x1daa14: 0x8e0245c0  lw          $v0, 0x45C0($s0)
    ctx->pc = 0x1daa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17856)));
    // 0x1daa18: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x1daa18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1daa1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1daa1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1daa20: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1daa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1daa24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1daa24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1daa28: 0xac441748  sw          $a0, 0x1748($v0)
    ctx->pc = 0x1daa28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5960), GPR_U32(ctx, 4));
    // 0x1daa2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA2Cu;
        // 0x1daa30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAA34u;
    // 0x1daa34: 0x0  nop
    ctx->pc = 0x1daa34u;
    // NOP
    ctx->pc = 0x1daa38u;
}
