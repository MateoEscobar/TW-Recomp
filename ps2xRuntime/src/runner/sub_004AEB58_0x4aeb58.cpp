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

// Function: sub_004AEB58
// Address: 0x4aeb58 - 0x4aeb78
void sub_004AEB58_0x4aeb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEB58_0x4aeb58");
#endif

    switch (ctx->pc) {
        case 0x4aeb58u: goto label_4aeb58;
        case 0x4aeb5cu: goto label_4aeb5c;
        case 0x4aeb60u: goto label_4aeb60;
        case 0x4aeb64u: goto label_4aeb64;
        case 0x4aeb68u: goto label_4aeb68;
        case 0x4aeb6cu: goto label_4aeb6c;
        case 0x4aeb70u: goto label_4aeb70;
        case 0x4aeb74u: goto label_4aeb74;
        default: break;
    }

    ctx->pc = 0x4aeb58u;

label_4aeb58:
    // 0x4aeb58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4aeb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4aeb5c:
    // 0x4aeb5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aeb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4aeb60:
    // 0x4aeb60: 0xa0f809  jalr        $a1
label_4aeb64:
    if (ctx->pc == 0x4AEB64u) {
        ctx->pc = 0x4AEB68u;
        goto label_4aeb68;
    }
    ctx->pc = 0x4AEB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x4AEB68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEB60u, 0x4AEB68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AEB68u;
label_4aeb68:
    // 0x4aeb68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aeb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4aeb6c:
    // 0x4aeb6c: 0x3e00008  jr          $ra
label_4aeb70:
    if (ctx->pc == 0x4AEB70u) {
        ctx->pc = 0x4AEB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEB6Cu;
        // 0x4aeb70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AEB74u;
        goto label_4aeb74;
    }
    ctx->pc = 0x4AEB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEB6Cu;
        // 0x4aeb70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AEB74u;
label_4aeb74:
    // 0x4aeb74: 0x0  nop
    ctx->pc = 0x4aeb74u;
    // NOP
    ctx->pc = 0x4aeb78u;
}
