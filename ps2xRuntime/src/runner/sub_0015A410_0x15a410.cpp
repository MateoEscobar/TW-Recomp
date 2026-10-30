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

// Function: sub_0015A410
// Address: 0x15a410 - 0x15a448
void sub_0015A410_0x15a410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A410_0x15a410");
#endif

    switch (ctx->pc) {
        case 0x15a42cu: goto label_15a42c;
        default: break;
    }

    ctx->pc = 0x15a410u;

    // 0x15a410: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15a410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15a414: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15a414u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15a418: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15a41c: 0x8c445024  lw          $a0, 0x5024($v0)
    ctx->pc = 0x15a41cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x515024u));
    // 0x15a420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15a424: 0xc108774  jal         func_421DD0
    ctx->pc = 0x15A424u;
    SET_GPR_U32(ctx, 31, 0x15A42Cu);
    ctx->pc = 0x15A428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A424u;
    // 0x15a428: 0xac60c70c  sw          $zero, -0x38F4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952716), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x421DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x421DD0u, 0x15A424u, 0x15A42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A42Cu;
label_15a42c:
    // 0x15a42c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x15a430: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15a434: 0x2442a328  addiu       $v0, $v0, -0x5CD8
    ctx->pc = 0x15a434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943528));
    // 0x15a438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a43c: 0xac62c734  sw          $v0, -0x38CC($v1)
    ctx->pc = 0x15a43cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50C734u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C734u, _value); } while (0);
    // 0x15a440: 0x3e00008  jr          $ra
    ctx->pc = 0x15A440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A440u;
        // 0x15a444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A448u;
}
