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

// Function: sub_001E0998
// Address: 0x1e0998 - 0x1e09c8
void sub_001E0998_0x1e0998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0998_0x1e0998");
#endif

    switch (ctx->pc) {
        case 0x1e09bcu: goto label_1e09bc;
        default: break;
    }

    ctx->pc = 0x1e0998u;

    // 0x1e0998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e099c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e099cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e09a0: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E09A0u;
    {
        const bool branch_taken_0x1e09a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E09A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E09A0u;
        // 0x1e09a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e09a0) {
            ctx->pc = 0x1E09BCu;
            goto label_1e09bc;
        }
    }
    ctx->pc = 0x1E09A8u;
    // 0x1e09a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E09A8u;
    {
        const bool branch_taken_0x1e09a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E09ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E09A8u;
        // 0x1e09ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e09a8) {
            ctx->pc = 0x1E09C0u;
            goto label_1e09c0;
        }
    }
    ctx->pc = 0x1E09B0u;
    // 0x1e09b0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1e09b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1e09b4: 0xc077fbc  jal         func_1DFEF0
    ctx->pc = 0x1E09B4u;
    SET_GPR_U32(ctx, 31, 0x1E09BCu);
    ctx->pc = 0x1E09B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E09B4u;
    // 0x1e09b8: 0x24845390  addiu       $a0, $a0, 0x5390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFEF0u, 0x1E09B4u, 0x1E09BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E09BCu;
label_1e09bc:
    // 0x1e09bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e09bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e09c0:
    // 0x1e09c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E09C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E09C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E09C0u;
        // 0x1e09c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E09C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E09C8u;
}
