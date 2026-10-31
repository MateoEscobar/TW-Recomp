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

// Function: sub_0014E8C8
// Address: 0x14e8c8 - 0x14e900
void sub_0014E8C8_0x14e8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E8C8_0x14e8c8");
#endif

    switch (ctx->pc) {
        case 0x14e8d8u: goto label_14e8d8;
        case 0x14e8e0u: goto label_14e8e0;
        case 0x14e8e8u: goto label_14e8e8;
        case 0x14e8f0u: goto label_14e8f0;
        default: break;
    }

    ctx->pc = 0x14e8c8u;

    // 0x14e8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14e8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14e8cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e8d0: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14E8D0u;
    SET_GPR_U32(ctx, 31, 0x14E8D8u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14E8D0u, 0x14E8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8D8u;
label_14e8d8:
    // 0x14e8d8: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14E8D8u;
    SET_GPR_U32(ctx, 31, 0x14E8E0u);
    ctx->pc = 0x14E8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E8D8u;
    // 0x14e8dc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14E8D8u, 0x14E8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8E0u;
label_14e8e0:
    // 0x14e8e0: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14E8E0u;
    SET_GPR_U32(ctx, 31, 0x14E8E8u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14E8E0u, 0x14E8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8E8u;
label_14e8e8:
    // 0x14e8e8: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E8E8u;
    SET_GPR_U32(ctx, 31, 0x14E8F0u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E8E8u, 0x14E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8F0u;
label_14e8f0:
    // 0x14e8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x14E8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8F4u;
        // 0x14e8f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E8FCu;
    // 0x14e8fc: 0x0  nop
    ctx->pc = 0x14e8fcu;
    // NOP
    ctx->pc = 0x14e900u;
}
