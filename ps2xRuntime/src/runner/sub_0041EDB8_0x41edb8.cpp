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

// Function: sub_0041EDB8
// Address: 0x41edb8 - 0x41edf0
void sub_0041EDB8_0x41edb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041EDB8_0x41edb8");
#endif

    switch (ctx->pc) {
        case 0x41ede0u: goto label_41ede0;
        default: break;
    }

    ctx->pc = 0x41edb8u;

    // 0x41edb8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41edbc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41edbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41edc0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41edc4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x41edc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41edc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41edc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41edcc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x41edccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x41edd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41edd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41edd4: 0x24640480  addiu       $a0, $v1, 0x480
    ctx->pc = 0x41edd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x41edd8: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x41EDD8u;
    SET_GPR_U32(ctx, 31, 0x41EDE0u);
    ctx->pc = 0x41EDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EDD8u;
    // 0x41eddc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x41EDD8u, 0x41EDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EDE0u;
label_41ede0:
    // 0x41ede0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41ede0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41ede4: 0x3e00008  jr          $ra
    ctx->pc = 0x41EDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EDE4u;
        // 0x41ede8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41EDECu;
    // 0x41edec: 0x0  nop
    ctx->pc = 0x41edecu;
    // NOP
    ctx->pc = 0x41edf0u;
}
