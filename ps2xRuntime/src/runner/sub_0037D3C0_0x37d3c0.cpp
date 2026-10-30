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

// Function: sub_0037D3C0
// Address: 0x37d3c0 - 0x37d3f0
void sub_0037D3C0_0x37d3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D3C0_0x37d3c0");
#endif

    switch (ctx->pc) {
        case 0x37d3d4u: goto label_37d3d4;
        case 0x37d3dcu: goto label_37d3dc;
        default: break;
    }

    ctx->pc = 0x37d3c0u;

    // 0x37d3c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37d3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37d3c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37d3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d3c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37d3cc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37D3CCu;
    SET_GPR_U32(ctx, 31, 0x37D3D4u);
    ctx->pc = 0x37D3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D3CCu;
    // 0x37d3d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37D3CCu, 0x37D3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D3D4u;
label_37d3d4:
    // 0x37d3d4: 0xc108e78  jal         func_4239E0
    ctx->pc = 0x37D3D4u;
    SET_GPR_U32(ctx, 31, 0x37D3DCu);
    ctx->pc = 0x37D3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D3D4u;
    // 0x37d3d8: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4239E0u, 0x37D3D4u, 0x37D3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D3DCu;
label_37d3dc:
    // 0x37d3dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d3e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37d3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x37D3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D3E4u;
        // 0x37d3e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D3ECu;
    // 0x37d3ec: 0x0  nop
    ctx->pc = 0x37d3ecu;
    // NOP
    ctx->pc = 0x37d3f0u;
}
