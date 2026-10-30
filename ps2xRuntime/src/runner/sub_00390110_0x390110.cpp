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

// Function: sub_00390110
// Address: 0x390110 - 0x390130
void sub_00390110_0x390110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390110_0x390110");
#endif

    switch (ctx->pc) {
        case 0x390124u: goto label_390124;
        default: break;
    }

    ctx->pc = 0x390110u;

    // 0x390110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x390110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x390114: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x390114u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x390118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x390118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39011c: 0xc0e4054  jal         func_390150
    ctx->pc = 0x39011Cu;
    SET_GPR_U32(ctx, 31, 0x390124u);
    ctx->pc = 0x390120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39011Cu;
    // 0x390120: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390150u, 0x39011Cu, 0x390124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390124u;
label_390124:
    // 0x390124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x390124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x390128: 0x3e00008  jr          $ra
    ctx->pc = 0x390128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390128u;
        // 0x39012c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390130u;
}
