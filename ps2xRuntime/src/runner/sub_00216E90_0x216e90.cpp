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

// Function: sub_00216E90
// Address: 0x216e90 - 0x216eb0
void sub_00216E90_0x216e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216E90_0x216e90");
#endif

    switch (ctx->pc) {
        case 0x216ea4u: goto label_216ea4;
        default: break;
    }

    ctx->pc = 0x216e90u;

    // 0x216e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216e94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x216e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216e98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216e9c: 0xc085b80  jal         func_216E00
    ctx->pc = 0x216E9Cu;
    SET_GPR_U32(ctx, 31, 0x216EA4u);
    ctx->pc = 0x216EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216E9Cu;
    // 0x216ea0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x216E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216E00u, 0x216E9Cu, 0x216EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216EA4u;
label_216ea4:
    // 0x216ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x216EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EA8u;
        // 0x216eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216EB0u;
}
