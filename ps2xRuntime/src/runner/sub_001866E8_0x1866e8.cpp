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

// Function: sub_001866E8
// Address: 0x1866e8 - 0x186710
void sub_001866E8_0x1866e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001866E8_0x1866e8");
#endif

    switch (ctx->pc) {
        case 0x186704u: goto label_186704;
        default: break;
    }

    ctx->pc = 0x1866e8u;

    // 0x1866e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1866e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1866ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1866ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1866f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1866f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1866f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1866f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1866f8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1866f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1866fc: 0xc0619c4  jal         func_186710
    ctx->pc = 0x1866FCu;
    SET_GPR_U32(ctx, 31, 0x186704u);
    ctx->pc = 0x186700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1866FCu;
    // 0x186700: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186710u, 0x1866FCu, 0x186704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186704u;
label_186704:
    // 0x186704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186708: 0x3e00008  jr          $ra
    ctx->pc = 0x186708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186708u;
        // 0x18670c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186710u;
}
