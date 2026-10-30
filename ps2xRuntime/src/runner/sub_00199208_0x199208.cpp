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

// Function: sub_00199208
// Address: 0x199208 - 0x199230
void sub_00199208_0x199208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199208_0x199208");
#endif

    switch (ctx->pc) {
        case 0x199224u: goto label_199224;
        default: break;
    }

    ctx->pc = 0x199208u;

    // 0x199208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19920c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x19920cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x199210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199214: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x199214u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199218: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x199218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x19921c: 0xc066eae  jal         func_19BAB8
    ctx->pc = 0x19921Cu;
    SET_GPR_U32(ctx, 31, 0x199224u);
    ctx->pc = 0x199220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19921Cu;
    // 0x199220: 0xac620094  sw          $v0, 0x94($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BAB8u, 0x19921Cu, 0x199224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199224u;
label_199224:
    // 0x199224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199228: 0x3e00008  jr          $ra
    ctx->pc = 0x199228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199228u;
        // 0x19922c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199230u;
}
