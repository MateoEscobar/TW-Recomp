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

// Function: sub_00101B88
// Address: 0x101b88 - 0x101bc0
void sub_00101B88_0x101b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101B88_0x101b88");
#endif

    switch (ctx->pc) {
        case 0x101b98u: goto label_101b98;
        default: break;
    }

    ctx->pc = 0x101b88u;

    // 0x101b88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101b8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101b90: 0xc0886fc  jal         func_221BF0
    ctx->pc = 0x101B90u;
    SET_GPR_U32(ctx, 31, 0x101B98u);
    ctx->pc = 0x221BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BF0u, 0x101B90u, 0x101B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B98u;
label_101b98:
    // 0x101b98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x101B98u;
    {
        const bool branch_taken_0x101b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B98u;
        // 0x101b9c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b98) {
            ctx->pc = 0x101BB0u;
            goto label_101bb0;
        }
    }
    ctx->pc = 0x101BA0u;
    // 0x101ba0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x101ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x101ba4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x101ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x101ba8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x101BA8u;
    {
        const bool branch_taken_0x101ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101BA8u;
        // 0x101bac: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ba8) {
            ctx->pc = 0x101BB4u;
            goto label_101bb4;
        }
    }
    ctx->pc = 0x101BB0u;
label_101bb0:
    // 0x101bb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101bb4:
    // 0x101bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x101BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101BB8u;
        // 0x101bbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101BC0u;
}
