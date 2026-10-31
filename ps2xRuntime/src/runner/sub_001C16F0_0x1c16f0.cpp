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

// Function: sub_001C16F0
// Address: 0x1c16f0 - 0x1c1718
void sub_001C16F0_0x1c16f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C16F0_0x1c16f0");
#endif

    switch (ctx->pc) {
        case 0x1c170cu: goto label_1c170c;
        default: break;
    }

    ctx->pc = 0x1c16f0u;

    // 0x1c16f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c16f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c16f4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1c16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1c16f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c16f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c16fc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1c16fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1700: 0x2442a550  addiu       $v0, $v0, -0x5AB0
    ctx->pc = 0x1c1700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944080));
    // 0x1c1704: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1C1704u;
    SET_GPR_U32(ctx, 31, 0x1C170Cu);
    ctx->pc = 0x1C1708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1704u;
    // 0x1c1708: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1C1704u, 0x1C170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C170Cu;
label_1c170c:
    // 0x1c170c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c170cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1710: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1710u;
        // 0x1c1714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1718u;
}
