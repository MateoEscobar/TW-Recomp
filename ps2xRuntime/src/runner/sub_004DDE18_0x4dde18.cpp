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

// Function: sub_004DDE18
// Address: 0x4dde18 - 0x4dde40
void sub_004DDE18_0x4dde18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDE18_0x4dde18");
#endif

    switch (ctx->pc) {
        case 0x4dde34u: goto label_4dde34;
        default: break;
    }

    ctx->pc = 0x4dde18u;

    // 0x4dde18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dde18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dde1c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4dde1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4dde20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dde20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dde24: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4dde24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dde28: 0x24428658  addiu       $v0, $v0, -0x79A8
    ctx->pc = 0x4dde28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x4dde2c: 0xc0557d2  jal         func_155F48
    ctx->pc = 0x4DDE2Cu;
    SET_GPR_U32(ctx, 31, 0x4DDE34u);
    ctx->pc = 0x4DDE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDE2Cu;
    // 0x4dde30: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F48u, 0x4DDE2Cu, 0x4DDE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDE34u;
label_4dde34:
    // 0x4dde34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dde34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dde38: 0x3e00008  jr          $ra
    ctx->pc = 0x4DDE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDE38u;
        // 0x4dde3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DDE40u;
}
