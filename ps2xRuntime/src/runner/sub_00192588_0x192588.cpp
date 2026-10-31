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

// Function: sub_00192588
// Address: 0x192588 - 0x1925b0
void sub_00192588_0x192588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192588_0x192588");
#endif

    switch (ctx->pc) {
        case 0x1925a4u: goto label_1925a4;
        default: break;
    }

    ctx->pc = 0x192588u;

    // 0x192588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19258c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19258cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192594: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x192594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192598: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x192598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19259c: 0xc06496c  jal         func_1925B0
    ctx->pc = 0x19259Cu;
    SET_GPR_U32(ctx, 31, 0x1925A4u);
    ctx->pc = 0x1925A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19259Cu;
    // 0x1925a0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925B0u, 0x19259Cu, 0x1925A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1925A4u;
label_1925a4:
    // 0x1925a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1925a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1925a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1925A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1925ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925A8u;
        // 0x1925ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1925A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1925B0u;
}
