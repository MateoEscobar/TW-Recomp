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

// Function: sub_00386920
// Address: 0x386920 - 0x386950
void sub_00386920_0x386920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386920_0x386920");
#endif

    switch (ctx->pc) {
        case 0x386938u: goto label_386938;
        default: break;
    }

    ctx->pc = 0x386920u;

    // 0x386920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x386920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x386924: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x386924u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x386928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38692c: 0x24e76860  addiu       $a3, $a3, 0x6860
    ctx->pc = 0x38692cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26720));
    // 0x386930: 0xc10cff6  jal         func_433FD8
    ctx->pc = 0x386930u;
    SET_GPR_U32(ctx, 31, 0x386938u);
    ctx->pc = 0x386934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386930u;
    // 0x386934: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433FD8u, 0x386930u, 0x386938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386938u;
label_386938:
    // 0x386938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38693c: 0x3e00008  jr          $ra
    ctx->pc = 0x38693Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38693Cu;
        // 0x386940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38693Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386944u;
    // 0x386944: 0x0  nop
    ctx->pc = 0x386944u;
    // NOP
    // 0x386948: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x386948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x38694c: 0x0  nop
    ctx->pc = 0x38694cu;
    // NOP
    ctx->pc = 0x386950u;
}
