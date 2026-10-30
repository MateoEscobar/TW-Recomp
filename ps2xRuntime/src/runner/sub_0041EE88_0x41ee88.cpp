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

// Function: sub_0041EE88
// Address: 0x41ee88 - 0x41eeac
void sub_0041EE88_0x41ee88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041EE88_0x41ee88");
#endif

    switch (ctx->pc) {
        case 0x41eea8u: goto label_41eea8;
        default: break;
    }

    ctx->pc = 0x41ee88u;

    // 0x41ee88: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x41ee88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x41ee8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41ee90: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x41ee90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41ee94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41ee94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41ee98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41ee98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41ee9c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x41ee9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x41eea0: 0xc107908  jal         func_41E420
    ctx->pc = 0x41EEA0u;
    SET_GPR_U32(ctx, 31, 0x41EEA8u);
    ctx->pc = 0x41EEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EEA0u;
    // 0x41eea4: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x41EEA0u, 0x41EEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EEA8u;
label_41eea8:
    // 0x41eea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41eea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x41eeacu;
}
