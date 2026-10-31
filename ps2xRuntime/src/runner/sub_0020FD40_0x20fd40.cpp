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

// Function: sub_0020FD40
// Address: 0x20fd40 - 0x20fd60
void sub_0020FD40_0x20fd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FD40_0x20fd40");
#endif

    switch (ctx->pc) {
        case 0x20fd54u: goto label_20fd54;
        default: break;
    }

    ctx->pc = 0x20fd40u;

    // 0x20fd40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20fd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20fd44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fd48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20fd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20fd4c: 0xc08380a  jal         func_20E028
    ctx->pc = 0x20FD4Cu;
    SET_GPR_U32(ctx, 31, 0x20FD54u);
    ctx->pc = 0x20FD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FD4Cu;
    // 0x20fd50: 0xac8240f8  sw          $v0, 0x40F8($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 16632), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E028u, 0x20FD4Cu, 0x20FD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FD54u;
label_20fd54:
    // 0x20fd54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20fd54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fd58: 0x3e00008  jr          $ra
    ctx->pc = 0x20FD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD58u;
        // 0x20fd5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FD60u;
}
