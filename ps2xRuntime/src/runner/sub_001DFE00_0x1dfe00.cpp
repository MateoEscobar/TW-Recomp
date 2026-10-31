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

// Function: sub_001DFE00
// Address: 0x1dfe00 - 0x1dfe20
void sub_001DFE00_0x1dfe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFE00_0x1dfe00");
#endif

    switch (ctx->pc) {
        case 0x1dfe14u: goto label_1dfe14;
        default: break;
    }

    ctx->pc = 0x1dfe00u;

    // 0x1dfe00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dfe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dfe04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1dfe04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfe08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dfe08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dfe0c: 0xc077f20  jal         func_1DFC80
    ctx->pc = 0x1DFE0Cu;
    SET_GPR_U32(ctx, 31, 0x1DFE14u);
    ctx->pc = 0x1DFE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE0Cu;
    // 0x1dfe10: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC80u, 0x1DFE0Cu, 0x1DFE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE14u;
label_1dfe14:
    // 0x1dfe14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dfe14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfe18: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE18u;
        // 0x1dfe1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFE20u;
}
