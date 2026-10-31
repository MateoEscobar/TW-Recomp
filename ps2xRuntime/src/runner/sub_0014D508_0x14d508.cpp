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

// Function: sub_0014D508
// Address: 0x14d508 - 0x14d528
void sub_0014D508_0x14d508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D508_0x14d508");
#endif

    switch (ctx->pc) {
        case 0x14d51cu: goto label_14d51c;
        default: break;
    }

    ctx->pc = 0x14d508u;

    // 0x14d508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d50c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14d50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d514: 0xc053536  jal         func_14D4D8
    ctx->pc = 0x14D514u;
    SET_GPR_U32(ctx, 31, 0x14D51Cu);
    ctx->pc = 0x14D518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D514u;
    // 0x14d518: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D4D8u, 0x14D514u, 0x14D51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D51Cu;
label_14d51c:
    // 0x14d51c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d520: 0x3e00008  jr          $ra
    ctx->pc = 0x14D520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D520u;
        // 0x14d524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D528u;
}
