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

// Function: sub_00338CE0
// Address: 0x338ce0 - 0x338d08
void sub_00338CE0_0x338ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338CE0_0x338ce0");
#endif

    switch (ctx->pc) {
        case 0x338cf8u: goto label_338cf8;
        default: break;
    }

    ctx->pc = 0x338ce0u;

    // 0x338ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338ce4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x338ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x338cec: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x338cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338cf0: 0xc0cefea  jal         func_33BFA8
    ctx->pc = 0x338CF0u;
    SET_GPR_U32(ctx, 31, 0x338CF8u);
    ctx->pc = 0x338CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338CF0u;
    // 0x338cf4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BFA8u, 0x338CF0u, 0x338CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338CF8u;
label_338cf8:
    // 0x338cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x338CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338CFCu;
        // 0x338d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338D04u;
    // 0x338d04: 0x0  nop
    ctx->pc = 0x338d04u;
    // NOP
    ctx->pc = 0x338d08u;
}
