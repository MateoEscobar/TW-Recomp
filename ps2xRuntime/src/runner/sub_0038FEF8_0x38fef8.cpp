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

// Function: sub_0038FEF8
// Address: 0x38fef8 - 0x38ff18
void sub_0038FEF8_0x38fef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FEF8_0x38fef8");
#endif

    switch (ctx->pc) {
        case 0x38ff08u: goto label_38ff08;
        default: break;
    }

    ctx->pc = 0x38fef8u;

    // 0x38fef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38fef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38fefc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38fefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38ff00: 0xc0e3f8a  jal         func_38FE28
    ctx->pc = 0x38FF00u;
    SET_GPR_U32(ctx, 31, 0x38FF08u);
    ctx->pc = 0x38FF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FF00u;
    // 0x38ff04: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE28u, 0x38FF00u, 0x38FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FF08u;
label_38ff08:
    // 0x38ff08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38ff08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ff0c: 0x3e00008  jr          $ra
    ctx->pc = 0x38FF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF0Cu;
        // 0x38ff10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FF14u;
    // 0x38ff14: 0x0  nop
    ctx->pc = 0x38ff14u;
    // NOP
    ctx->pc = 0x38ff18u;
}
