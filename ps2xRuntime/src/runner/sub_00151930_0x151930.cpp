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

// Function: sub_00151930
// Address: 0x151930 - 0x151980
void sub_00151930_0x151930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151930_0x151930");
#endif

    ctx->pc = 0x151930u;

    // 0x151930: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x151930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x151934: 0x3e00008  jr          $ra
    ctx->pc = 0x151934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151934u;
        // 0x151938: 0x8c62bd74  lw          $v0, -0x428C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950260)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15193Cu;
    // 0x15193c: 0x0  nop
    ctx->pc = 0x15193cu;
    // NOP
    // 0x151940: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x151940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151944: 0x0  nop
    ctx->pc = 0x151944u;
    // NOP
    // 0x151948: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x151948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15194c: 0x0  nop
    ctx->pc = 0x15194cu;
    // NOP
    // 0x151950: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x151950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151954: 0x0  nop
    ctx->pc = 0x151954u;
    // NOP
    // 0x151958: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x151958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15195c: 0x0  nop
    ctx->pc = 0x15195cu;
    // NOP
    // 0x151960: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x151960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151964: 0x0  nop
    ctx->pc = 0x151964u;
    // NOP
    // 0x151968: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x151968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15196c: 0x0  nop
    ctx->pc = 0x15196cu;
    // NOP
    // 0x151970: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x151970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x151974: 0x0  nop
    ctx->pc = 0x151974u;
    // NOP
    // 0x151978: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x151978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15197c: 0x0  nop
    ctx->pc = 0x15197cu;
    // NOP
    ctx->pc = 0x151980u;
}
