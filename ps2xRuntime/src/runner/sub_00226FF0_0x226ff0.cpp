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

// Function: sub_00226FF0
// Address: 0x226ff0 - 0x227010
void sub_00226FF0_0x226ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226FF0_0x226ff0");
#endif

    switch (ctx->pc) {
        case 0x227000u: goto label_227000;
        default: break;
    }

    ctx->pc = 0x226ff0u;

    // 0x226ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226ff8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x226FF8u;
    SET_GPR_U32(ctx, 31, 0x227000u);
    ctx->pc = 0x226FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226FF8u;
    // 0x226ffc: 0x24840338  addiu       $a0, $a0, 0x338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x226FF8u, 0x227000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227000u;
label_227000:
    // 0x227000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227004: 0x3e00008  jr          $ra
    ctx->pc = 0x227004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227004u;
        // 0x227008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22700Cu;
    // 0x22700c: 0x0  nop
    ctx->pc = 0x22700cu;
    // NOP
    ctx->pc = 0x227010u;
}
