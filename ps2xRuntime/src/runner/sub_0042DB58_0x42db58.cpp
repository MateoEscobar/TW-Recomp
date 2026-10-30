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

// Function: sub_0042DB58
// Address: 0x42db58 - 0x42db88
void sub_0042DB58_0x42db58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042DB58_0x42db58");
#endif

    switch (ctx->pc) {
        case 0x42db68u: goto label_42db68;
        case 0x42db7cu: goto label_42db7c;
        default: break;
    }

    ctx->pc = 0x42db58u;

    // 0x42db58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42db58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42db5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42db5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42db60: 0xc10b262  jal         func_42C988
    ctx->pc = 0x42DB60u;
    SET_GPR_U32(ctx, 31, 0x42DB68u);
    ctx->pc = 0x42C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C988u, 0x42DB60u, 0x42DB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DB68u;
label_42db68:
    // 0x42db68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x42db68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42db6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42DB6Cu;
    {
        const bool branch_taken_0x42db6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DB6Cu;
        // 0x42db70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42db6c) {
            ctx->pc = 0x42DB7Cu;
            goto label_42db7c;
        }
    }
    ctx->pc = 0x42DB74u;
    // 0x42db74: 0xc10b61a  jal         func_42D868
    ctx->pc = 0x42DB74u;
    SET_GPR_U32(ctx, 31, 0x42DB7Cu);
    ctx->pc = 0x42D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D868u, 0x42DB74u, 0x42DB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DB7Cu;
label_42db7c:
    // 0x42db7c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x42db7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x42db80: 0x3e00008  jr          $ra
    ctx->pc = 0x42DB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DB80u;
        // 0x42db84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42DB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42DB88u;
}
