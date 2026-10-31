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

// Function: sub_004B05F8
// Address: 0x4b05f8 - 0x4b0618
void sub_004B05F8_0x4b05f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B05F8_0x4b05f8");
#endif

    switch (ctx->pc) {
        case 0x4b0608u: goto label_4b0608;
        default: break;
    }

    ctx->pc = 0x4b05f8u;

    // 0x4b05f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b05f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b05fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b05fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0600: 0xc12bda4  jal         func_4AF690
    ctx->pc = 0x4B0600u;
    SET_GPR_U32(ctx, 31, 0x4B0608u);
    ctx->pc = 0x4B0604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0600u;
    // 0x4b0604: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF690u, 0x4B0600u, 0x4B0608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0608u;
label_4b0608:
    // 0x4b0608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b060c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B060Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B060Cu;
        // 0x4b0610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B060Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0614u;
    // 0x4b0614: 0x0  nop
    ctx->pc = 0x4b0614u;
    // NOP
    ctx->pc = 0x4b0618u;
}
