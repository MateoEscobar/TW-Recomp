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

// Function: sub_00331A58
// Address: 0x331a58 - 0x331a80
void sub_00331A58_0x331a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331A58_0x331a58");
#endif

    switch (ctx->pc) {
        case 0x331a70u: goto label_331a70;
        default: break;
    }

    ctx->pc = 0x331a58u;

    // 0x331a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331a5c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x331a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x331a60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331a64: 0x24a562e8  addiu       $a1, $a1, 0x62E8
    ctx->pc = 0x331a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25320));
    // 0x331a68: 0xc0c920a  jal         func_324828
    ctx->pc = 0x331A68u;
    SET_GPR_U32(ctx, 31, 0x331A70u);
    ctx->pc = 0x331A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331A68u;
    // 0x331a6c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324828u, 0x331A68u, 0x331A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A70u;
label_331a70:
    // 0x331a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331a74: 0x3e00008  jr          $ra
    ctx->pc = 0x331A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331A74u;
        // 0x331a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331A7Cu;
    // 0x331a7c: 0x0  nop
    ctx->pc = 0x331a7cu;
    // NOP
    ctx->pc = 0x331a80u;
}
