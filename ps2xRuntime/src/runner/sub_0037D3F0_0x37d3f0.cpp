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

// Function: sub_0037D3F0
// Address: 0x37d3f0 - 0x37d420
void sub_0037D3F0_0x37d3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D3F0_0x37d3f0");
#endif

    switch (ctx->pc) {
        case 0x37d404u: goto label_37d404;
        case 0x37d40cu: goto label_37d40c;
        default: break;
    }

    ctx->pc = 0x37d3f0u;

    // 0x37d3f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37d3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37d3f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37d3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d3f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37d3fc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37D3FCu;
    SET_GPR_U32(ctx, 31, 0x37D404u);
    ctx->pc = 0x37D400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D3FCu;
    // 0x37d400: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37D3FCu, 0x37D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D404u;
label_37d404:
    // 0x37d404: 0xc08ec4a  jal         func_23B128
    ctx->pc = 0x37D404u;
    SET_GPR_U32(ctx, 31, 0x37D40Cu);
    ctx->pc = 0x37D408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D404u;
    // 0x37d408: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B128u, 0x37D404u, 0x37D40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D40Cu;
label_37d40c:
    // 0x37d40c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d410: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37d410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d414: 0x3e00008  jr          $ra
    ctx->pc = 0x37D414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D414u;
        // 0x37d418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D41Cu;
    // 0x37d41c: 0x0  nop
    ctx->pc = 0x37d41cu;
    // NOP
    ctx->pc = 0x37d420u;
}
