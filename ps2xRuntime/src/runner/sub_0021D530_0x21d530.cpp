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

// Function: sub_0021D530
// Address: 0x21d530 - 0x21d550
void sub_0021D530_0x21d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D530_0x21d530");
#endif

    switch (ctx->pc) {
        case 0x21d540u: goto label_21d540;
        default: break;
    }

    ctx->pc = 0x21d530u;

    // 0x21d530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d538: 0xc0e1300  jal         func_384C00
    ctx->pc = 0x21D538u;
    SET_GPR_U32(ctx, 31, 0x21D540u);
    ctx->pc = 0x21D53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D538u;
    // 0x21d53c: 0x248400e8  addiu       $a0, $a0, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384C00u, 0x21D538u, 0x21D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D540u;
label_21d540:
    // 0x21d540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d544: 0x3e00008  jr          $ra
    ctx->pc = 0x21D544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D544u;
        // 0x21d548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D54Cu;
    // 0x21d54c: 0x0  nop
    ctx->pc = 0x21d54cu;
    // NOP
    ctx->pc = 0x21d550u;
}
