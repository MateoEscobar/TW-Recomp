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

// Function: sub_003BF528
// Address: 0x3bf528 - 0x3bf548
void sub_003BF528_0x3bf528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF528_0x3bf528");
#endif

    switch (ctx->pc) {
        case 0x3bf52cu: goto label_3bf52c;
        default: break;
    }

    ctx->pc = 0x3bf528u;

    // 0x3bf528: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3bf528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3bf52c:
    // 0x3bf52c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3bf52cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3bf530: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3bf530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3bf534: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3bf534u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3bf538: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3bf538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3bf53c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3bf53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3bf540: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF540u;
        // 0x3bf544: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF548u;
}
