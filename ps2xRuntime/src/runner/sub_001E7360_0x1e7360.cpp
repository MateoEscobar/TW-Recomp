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

// Function: sub_001E7360
// Address: 0x1e7360 - 0x1e7380
void sub_001E7360_0x1e7360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7360_0x1e7360");
#endif

    switch (ctx->pc) {
        case 0x1e7370u: goto label_1e7370;
        default: break;
    }

    ctx->pc = 0x1e7360u;

    // 0x1e7360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7368: 0xc068a44  jal         func_1A2910
    ctx->pc = 0x1E7368u;
    SET_GPR_U32(ctx, 31, 0x1E7370u);
    ctx->pc = 0x1E736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7368u;
    // 0x1e736c: 0x24840210  addiu       $a0, $a0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1E7368u, 0x1E7370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7370u;
label_1e7370:
    // 0x1e7370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7374: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7374u;
        // 0x1e7378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E737Cu;
    // 0x1e737c: 0x0  nop
    ctx->pc = 0x1e737cu;
    // NOP
    ctx->pc = 0x1e7380u;
}
