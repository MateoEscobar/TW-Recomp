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

// Function: sub_00101B58
// Address: 0x101b58 - 0x101b88
void sub_00101B58_0x101b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101B58_0x101b58");
#endif

    switch (ctx->pc) {
        case 0x101b68u: goto label_101b68;
        default: break;
    }

    ctx->pc = 0x101b58u;

    // 0x101b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101b5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101b60: 0xc0886fc  jal         func_221BF0
    ctx->pc = 0x101B60u;
    SET_GPR_U32(ctx, 31, 0x101B68u);
    ctx->pc = 0x221BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BF0u, 0x101B60u, 0x101B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B68u;
label_101b68:
    // 0x101b68: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x101B68u;
    {
        const bool branch_taken_0x101b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101b68) {
            ctx->pc = 0x101B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101B68u;
            // 0x101b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101B7Cu;
            goto label_101b7c;
        }
    }
    ctx->pc = 0x101B70u;
    // 0x101b70: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x101b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x101b74: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x101b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x101b78: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x101b78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_101b7c:
    // 0x101b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101b80: 0x3e00008  jr          $ra
    ctx->pc = 0x101B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B80u;
        // 0x101b84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101B88u;
}
