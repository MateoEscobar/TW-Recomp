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

// Function: sub_0010F3A0
// Address: 0x10f3a0 - 0x10f3d8
void sub_0010F3A0_0x10f3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F3A0_0x10f3a0");
#endif

    switch (ctx->pc) {
        case 0x10f3b0u: goto label_10f3b0;
        case 0x10f3c8u: goto label_10f3c8;
        default: break;
    }

    ctx->pc = 0x10f3a0u;

    // 0x10f3a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f3a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f3a8: 0xc051048  jal         func_144120
    ctx->pc = 0x10F3A8u;
    SET_GPR_U32(ctx, 31, 0x10F3B0u);
    ctx->pc = 0x10F3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3A8u;
    // 0x10f3ac: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x10F3A8u, 0x10F3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F3B0u;
label_10f3b0:
    // 0x10f3b0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x10f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x10f3b4: 0x3c05005a  lui         $a1, 0x5A
    ctx->pc = 0x10f3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)90 << 16));
    // 0x10f3b8: 0xaca28684  sw          $v0, -0x797C($a1)
    ctx->pc = 0x10f3b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x598684u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x598684u, _value); } while (0);
    // 0x10f3bc: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x10f3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x10f3c0: 0xc043e5e  jal         func_10F978
    ctx->pc = 0x10F3C0u;
    SET_GPR_U32(ctx, 31, 0x10F3C8u);
    ctx->pc = 0x10F3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3C0u;
    // 0x10f3c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F978u, 0x10F3C0u, 0x10F3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F3C8u;
label_10f3c8:
    // 0x10f3c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x10F3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3CCu;
        // 0x10f3d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F3D4u;
    // 0x10f3d4: 0x0  nop
    ctx->pc = 0x10f3d4u;
    // NOP
    ctx->pc = 0x10f3d8u;
}
