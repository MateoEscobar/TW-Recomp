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

// Function: sub_00390130
// Address: 0x390130 - 0x390150
void sub_00390130_0x390130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390130_0x390130");
#endif

    switch (ctx->pc) {
        case 0x390144u: goto label_390144;
        default: break;
    }

    ctx->pc = 0x390130u;

    // 0x390130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x390130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x390134: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x390134u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x390138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x390138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39013c: 0xc0e4054  jal         func_390150
    ctx->pc = 0x39013Cu;
    SET_GPR_U32(ctx, 31, 0x390144u);
    ctx->pc = 0x390140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39013Cu;
    // 0x390140: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390150u, 0x39013Cu, 0x390144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390144u;
label_390144:
    // 0x390144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x390144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x390148: 0x3e00008  jr          $ra
    ctx->pc = 0x390148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390148u;
        // 0x39014c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390150u;
}
