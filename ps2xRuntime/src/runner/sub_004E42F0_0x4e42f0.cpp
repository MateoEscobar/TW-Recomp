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

// Function: sub_004E42F0
// Address: 0x4e42f0 - 0x4e4318
void sub_004E42F0_0x4e42f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E42F0_0x4e42f0");
#endif

    ctx->pc = 0x4e42f0u;

    // 0x4e42f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e42f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e42f4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x4e42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4e42f8: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x4e42f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x4e42fc: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x4e42fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4e4300: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x4e4300u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x4e4304: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x4e4304u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x4e4308: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4e4308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e430c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E430Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E430Cu;
        // 0x4e4310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E430Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E4314u;
    // 0x4e4314: 0x0  nop
    ctx->pc = 0x4e4314u;
    // NOP
    ctx->pc = 0x4e4318u;
}
