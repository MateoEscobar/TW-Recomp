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

// Function: sub_0041EDF0
// Address: 0x41edf0 - 0x41ee20
void sub_0041EDF0_0x41edf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041EDF0_0x41edf0");
#endif

    switch (ctx->pc) {
        case 0x41ee10u: goto label_41ee10;
        default: break;
    }

    ctx->pc = 0x41edf0u;

    // 0x41edf0: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x41edf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x41edf4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41edf8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x41edf8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41edfc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41edfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41ee00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41ee00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41ee04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41ee04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41ee08: 0xc107908  jal         func_41E420
    ctx->pc = 0x41EE08u;
    SET_GPR_U32(ctx, 31, 0x41EE10u);
    ctx->pc = 0x41EE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EE08u;
    // 0x41ee0c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x41EE08u, 0x41EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EE10u;
label_41ee10:
    // 0x41ee10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41ee10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41ee14: 0x3e00008  jr          $ra
    ctx->pc = 0x41EE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EE14u;
        // 0x41ee18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41EE1Cu;
    // 0x41ee1c: 0x0  nop
    ctx->pc = 0x41ee1cu;
    // NOP
    ctx->pc = 0x41ee20u;
}
