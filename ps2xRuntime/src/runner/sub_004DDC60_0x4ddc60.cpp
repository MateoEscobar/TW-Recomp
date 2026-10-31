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

// Function: sub_004DDC60
// Address: 0x4ddc60 - 0x4ddc88
void sub_004DDC60_0x4ddc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDC60_0x4ddc60");
#endif

    switch (ctx->pc) {
        case 0x4ddc7cu: goto label_4ddc7c;
        default: break;
    }

    ctx->pc = 0x4ddc60u;

    // 0x4ddc60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ddc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ddc64: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ddc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ddc68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ddc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ddc6c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4ddc6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddc70: 0x24428438  addiu       $v0, $v0, -0x7BC8
    ctx->pc = 0x4ddc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935608));
    // 0x4ddc74: 0xc0557d2  jal         func_155F48
    ctx->pc = 0x4DDC74u;
    SET_GPR_U32(ctx, 31, 0x4DDC7Cu);
    ctx->pc = 0x4DDC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDC74u;
    // 0x4ddc78: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F48u, 0x4DDC74u, 0x4DDC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDC7Cu;
label_4ddc7c:
    // 0x4ddc7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ddc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ddc80: 0x3e00008  jr          $ra
    ctx->pc = 0x4DDC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDC80u;
        // 0x4ddc84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DDC88u;
}
