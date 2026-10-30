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

// Function: sub_00416010
// Address: 0x416010 - 0x416038
void sub_00416010_0x416010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416010_0x416010");
#endif

    switch (ctx->pc) {
        case 0x41602cu: goto label_41602c;
        default: break;
    }

    ctx->pc = 0x416010u;

    // 0x416010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x416010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x416014: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x416014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x416018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41601c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x41601cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x416020: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x416020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x416024: 0xc10c4de  jal         func_431378
    ctx->pc = 0x416024u;
    SET_GPR_U32(ctx, 31, 0x41602Cu);
    ctx->pc = 0x416028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416024u;
    // 0x416028: 0xa0400043  sb          $zero, 0x43($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 67), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x416024u, 0x41602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41602Cu;
label_41602c:
    // 0x41602c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41602cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x416030: 0x3e00008  jr          $ra
    ctx->pc = 0x416030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416030u;
        // 0x416034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x416038u;
}
