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

// Function: sub_003269B8
// Address: 0x3269b8 - 0x3269f0
void sub_003269B8_0x3269b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003269B8_0x3269b8");
#endif

    switch (ctx->pc) {
        case 0x3269d0u: goto label_3269d0;
        case 0x3269e4u: goto label_3269e4;
        default: break;
    }

    ctx->pc = 0x3269b8u;

    // 0x3269b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3269b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3269bc: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3269BCu;
    {
        const bool branch_taken_0x3269bc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3269C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269BCu;
        // 0x3269c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3269bc) {
            ctx->pc = 0x3269D8u;
            goto label_3269d8;
        }
    }
    ctx->pc = 0x3269C4u;
    // 0x3269c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3269c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3269c8: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x3269C8u;
    SET_GPR_U32(ctx, 31, 0x3269D0u);
    ctx->pc = 0x3269CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3269C8u;
    // 0x3269cc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x3269C8u, 0x3269D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3269D0u;
label_3269d0:
    // 0x3269d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3269D0u;
    {
        const bool branch_taken_0x3269d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3269D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269D0u;
        // 0x3269d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3269d0) {
            ctx->pc = 0x3269E8u;
            goto label_3269e8;
        }
    }
    ctx->pc = 0x3269D8u;
label_3269d8:
    // 0x3269d8: 0x53023  negu        $a2, $a1
    ctx->pc = 0x3269d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x3269dc: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x3269DCu;
    SET_GPR_U32(ctx, 31, 0x3269E4u);
    ctx->pc = 0x3269E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3269DCu;
    // 0x3269e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x3269DCu, 0x3269E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3269E4u;
label_3269e4:
    // 0x3269e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3269e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3269e8:
    // 0x3269e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3269E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3269ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269E8u;
        // 0x3269ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3269E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3269F0u;
}
