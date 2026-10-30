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

// Function: sub_001B3DD0
// Address: 0x1b3dd0 - 0x1b3df8
void sub_001B3DD0_0x1b3dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3DD0_0x1b3dd0");
#endif

    switch (ctx->pc) {
        case 0x1b3decu: goto label_1b3dec;
        default: break;
    }

    ctx->pc = 0x1b3dd0u;

    // 0x1b3dd0: 0x24020590  addiu       $v0, $zero, 0x590
    ctx->pc = 0x1b3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
    // 0x1b3dd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3dd8: 0x1224818  mult        $t1, $t1, $v0
    ctx->pc = 0x1b3dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1b3ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3de0: 0x25296b40  addiu       $t1, $t1, 0x6B40
    ctx->pc = 0x1b3de0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 27456));
    // 0x1b3de4: 0xc067c9c  jal         func_19F270
    ctx->pc = 0x1B3DE4u;
    SET_GPR_U32(ctx, 31, 0x1B3DECu);
    ctx->pc = 0x1B3DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3DE4u;
    // 0x1b3de8: 0x892021  addu        $a0, $a0, $t1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F270u, 0x1B3DE4u, 0x1B3DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3DECu;
label_1b3dec:
    // 0x1b3dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3df0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DF0u;
        // 0x1b3df4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3DF8u;
}
