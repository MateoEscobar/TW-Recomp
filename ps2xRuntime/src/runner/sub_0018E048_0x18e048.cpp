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

// Function: sub_0018E048
// Address: 0x18e048 - 0x18e070
void sub_0018E048_0x18e048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E048_0x18e048");
#endif

    switch (ctx->pc) {
        case 0x18e060u: goto label_18e060;
        default: break;
    }

    ctx->pc = 0x18e048u;

    // 0x18e048: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18e048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x18e04c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e04cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e050: 0x8c44deb8  lw          $a0, -0x2148($v0)
    ctx->pc = 0x18e050u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FDEB8u));
    // 0x18e054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e058: 0xc062f52  jal         func_18BD48
    ctx->pc = 0x18E058u;
    SET_GPR_U32(ctx, 31, 0x18E060u);
    ctx->pc = 0x18E05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E058u;
    // 0x18e05c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD48u, 0x18E058u, 0x18E060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E060u;
label_18e060:
    // 0x18e060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e064: 0x3e00008  jr          $ra
    ctx->pc = 0x18E064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E064u;
        // 0x18e068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E06Cu;
    // 0x18e06c: 0x0  nop
    ctx->pc = 0x18e06cu;
    // NOP
    ctx->pc = 0x18e070u;
}
