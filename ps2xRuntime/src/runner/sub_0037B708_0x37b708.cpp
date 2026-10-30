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

// Function: sub_0037B708
// Address: 0x37b708 - 0x37b728
void sub_0037B708_0x37b708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B708_0x37b708");
#endif

    switch (ctx->pc) {
        case 0x37b718u: goto label_37b718;
        default: break;
    }

    ctx->pc = 0x37b708u;

    // 0x37b708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37b708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37b70c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b710: 0xc1088e0  jal         func_422380
    ctx->pc = 0x37B710u;
    SET_GPR_U32(ctx, 31, 0x37B718u);
    ctx->pc = 0x422380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422380u, 0x37B710u, 0x37B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B718u;
label_37b718:
    // 0x37b718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b71c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37b71cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b720: 0x3e00008  jr          $ra
    ctx->pc = 0x37B720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B720u;
        // 0x37b724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B728u;
}
