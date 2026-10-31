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

// Function: sub_00420048
// Address: 0x420048 - 0x420060
void sub_00420048_0x420048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420048_0x420048");
#endif

    switch (ctx->pc) {
        case 0x42004cu: goto label_42004c;
        default: break;
    }

    ctx->pc = 0x420048u;

    // 0x420048: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x420048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_42004c:
    // 0x42004c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x42004cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x420050: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x420050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x420054: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x420054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x420058: 0x3e00008  jr          $ra
    ctx->pc = 0x420058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420058u;
        // 0x42005c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420060u;
}
