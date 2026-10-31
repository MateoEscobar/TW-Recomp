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

// Function: sub_003ED890
// Address: 0x3ed890 - 0x3ed8b0
void sub_003ED890_0x3ed890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED890_0x3ed890");
#endif

    switch (ctx->pc) {
        case 0x3ed8a0u: goto label_3ed8a0;
        default: break;
    }

    ctx->pc = 0x3ed890u;

    // 0x3ed890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ed890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ed894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ed894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ed898: 0xc0e858c  jal         func_3A1630
    ctx->pc = 0x3ED898u;
    SET_GPR_U32(ctx, 31, 0x3ED8A0u);
    ctx->pc = 0x3ED89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED898u;
    // 0x3ed89c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3ED898u, 0x3ED8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED8A0u;
label_3ed8a0:
    // 0x3ed8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ed8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ed8a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ed8a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED8A8u;
        // 0x3ed8ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED8B0u;
}
