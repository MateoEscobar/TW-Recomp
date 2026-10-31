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

// Function: sub_0010F3D8
// Address: 0x10f3d8 - 0x10f410
void sub_0010F3D8_0x10f3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F3D8_0x10f3d8");
#endif

    switch (ctx->pc) {
        case 0x10f3e8u: goto label_10f3e8;
        case 0x10f404u: goto label_10f404;
        default: break;
    }

    ctx->pc = 0x10f3d8u;

    // 0x10f3d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f3dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f3e0: 0xc051048  jal         func_144120
    ctx->pc = 0x10F3E0u;
    SET_GPR_U32(ctx, 31, 0x10F3E8u);
    ctx->pc = 0x10F3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3E0u;
    // 0x10f3e4: 0x24040049  addiu       $a0, $zero, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x10F3E0u, 0x10F3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F3E8u;
label_10f3e8:
    // 0x10f3e8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x10f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x10f3ec: 0x3c07005a  lui         $a3, 0x5A
    ctx->pc = 0x10f3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)90 << 16));
    // 0x10f3f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10f3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10f3f4: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x10f3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x10f3f8: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x10f3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x10f3fc: 0xc043e62  jal         func_10F988
    ctx->pc = 0x10F3FCu;
    SET_GPR_U32(ctx, 31, 0x10F404u);
    ctx->pc = 0x10F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3FCu;
    // 0x10f400: 0xace28688  sw          $v0, -0x7978($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294936200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F988u, 0x10F3FCu, 0x10F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F404u;
label_10f404:
    // 0x10f404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f408: 0x3e00008  jr          $ra
    ctx->pc = 0x10F408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F408u;
        // 0x10f40c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F410u;
}
