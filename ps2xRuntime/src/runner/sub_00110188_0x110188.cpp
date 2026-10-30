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

// Function: sub_00110188
// Address: 0x110188 - 0x1101b8
void sub_00110188_0x110188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110188_0x110188");
#endif

    switch (ctx->pc) {
        case 0x110198u: goto label_110198;
        default: break;
    }

    ctx->pc = 0x110188u;

    // 0x110188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11018c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11018cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110190: 0xc0447de  jal         func_111F78
    ctx->pc = 0x110190u;
    SET_GPR_U32(ctx, 31, 0x110198u);
    ctx->pc = 0x111F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F78u, 0x110190u, 0x110198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110198u;
label_110198:
    // 0x110198: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110198u;
    {
        const bool branch_taken_0x110198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110198u;
        // 0x11019c: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110198) {
            ctx->pc = 0x1101A8u;
            goto label_1101a8;
        }
    }
    ctx->pc = 0x1101A0u;
    // 0x1101a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1101A0u;
    {
        const bool branch_taken_0x1101a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1101A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101A0u;
        // 0x1101a4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101a0) {
            ctx->pc = 0x1101ACu;
            goto label_1101ac;
        }
    }
    ctx->pc = 0x1101A8u;
label_1101a8:
    // 0x1101a8: 0x8c628690  lw          $v0, -0x7970($v1)
    ctx->pc = 0x1101a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936208)));
label_1101ac:
    // 0x1101ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1101acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1101b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1101B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1101B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101B0u;
        // 0x1101b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1101B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1101B8u;
}
