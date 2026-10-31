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

// Function: sub_0010F410
// Address: 0x10f410 - 0x10f450
void sub_0010F410_0x10f410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F410_0x10f410");
#endif

    switch (ctx->pc) {
        case 0x10f420u: goto label_10f420;
        default: break;
    }

    ctx->pc = 0x10f410u;

    // 0x10f410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f418: 0xc051048  jal         func_144120
    ctx->pc = 0x10F418u;
    SET_GPR_U32(ctx, 31, 0x10F420u);
    ctx->pc = 0x10F41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F418u;
    // 0x10f41c: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x10F418u, 0x10F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F420u;
label_10f420:
    // 0x10f420: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x10f420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x10f424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f428: 0xac62868c  sw          $v0, -0x7974($v1)
    ctx->pc = 0x10f428u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x59868Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x59868Cu, _value); } while (0);
    // 0x10f42c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F42Cu;
        // 0x10f430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F434u;
    // 0x10f434: 0x0  nop
    ctx->pc = 0x10f434u;
    // NOP
    // 0x10f438: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10f438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10f43c: 0x0  nop
    ctx->pc = 0x10f43cu;
    // NOP
    // 0x10f440: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10f440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10f444: 0x0  nop
    ctx->pc = 0x10f444u;
    // NOP
    // 0x10f448: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10f448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10f44c: 0x0  nop
    ctx->pc = 0x10f44cu;
    // NOP
    ctx->pc = 0x10f450u;
}
