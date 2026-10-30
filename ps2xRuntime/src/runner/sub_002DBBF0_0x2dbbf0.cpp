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

// Function: sub_002DBBF0
// Address: 0x2dbbf0 - 0x2dbc10
void sub_002DBBF0_0x2dbbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBBF0_0x2dbbf0");
#endif

    ctx->pc = 0x2dbbf0u;

    // 0x2dbbf0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2dbbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2dbbf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dbbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbbf8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2dbbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dbbfc: 0x94a300d0  lhu         $v1, 0xD0($a1)
    ctx->pc = 0x2dbbfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x2dbc00: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x2dbc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
    // 0x2dbc04: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC04u;
        // 0x2dbc08: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBC0Cu;
    // 0x2dbc0c: 0x0  nop
    ctx->pc = 0x2dbc0cu;
    // NOP
    ctx->pc = 0x2dbc10u;
}
