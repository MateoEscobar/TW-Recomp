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

// Function: sub_00280FA0
// Address: 0x280fa0 - 0x280fd8
void sub_00280FA0_0x280fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280FA0_0x280fa0");
#endif

    switch (ctx->pc) {
        case 0x280fc0u: goto label_280fc0;
        default: break;
    }

    ctx->pc = 0x280fa0u;

    // 0x280fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x280fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x280fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280fa8: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x280fa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x280fac: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x280facu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x280fb0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x280FB0u;
    {
        const bool branch_taken_0x280fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FB0u;
        // 0x280fb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280fb0) {
            ctx->pc = 0x280FCCu;
            goto label_280fcc;
        }
    }
    ctx->pc = 0x280FB8u;
    // 0x280fb8: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x280FB8u;
    SET_GPR_U32(ctx, 31, 0x280FC0u);
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x280FB8u, 0x280FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280FC0u;
label_280fc0:
    // 0x280fc0: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x280fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x280fc4: 0xa040004d  sb          $zero, 0x4D($v0)
    ctx->pc = 0x280fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x280fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_280fcc:
    // 0x280fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x280FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FCCu;
        // 0x280fd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280FD4u;
    // 0x280fd4: 0x0  nop
    ctx->pc = 0x280fd4u;
    // NOP
    ctx->pc = 0x280fd8u;
}
