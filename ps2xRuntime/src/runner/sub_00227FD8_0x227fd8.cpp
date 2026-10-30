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

// Function: sub_00227FD8
// Address: 0x227fd8 - 0x228000
void sub_00227FD8_0x227fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227FD8_0x227fd8");
#endif

    switch (ctx->pc) {
        case 0x227ff0u: goto label_227ff0;
        default: break;
    }

    ctx->pc = 0x227fd8u;

    // 0x227fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227fdc: 0x3c051800  lui         $a1, 0x1800
    ctx->pc = 0x227fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6144 << 16));
    // 0x227fe0: 0x34a53ff0  ori         $a1, $a1, 0x3FF0
    ctx->pc = 0x227fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16368);
    // 0x227fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227fe8: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x227FE8u;
    SET_GPR_U32(ctx, 31, 0x227FF0u);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x227FE8u, 0x227FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FF0u;
label_227ff0:
    // 0x227ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x227FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FF4u;
        // 0x227ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227FFCu;
    // 0x227ffc: 0x0  nop
    ctx->pc = 0x227ffcu;
    // NOP
    ctx->pc = 0x228000u;
}
