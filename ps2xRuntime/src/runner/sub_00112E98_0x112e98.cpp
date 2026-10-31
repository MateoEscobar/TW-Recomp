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

// Function: sub_00112E98
// Address: 0x112e98 - 0x112eb8
void sub_00112E98_0x112e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112E98_0x112e98");
#endif

    switch (ctx->pc) {
        case 0x112ea8u: goto label_112ea8;
        default: break;
    }

    ctx->pc = 0x112e98u;

    // 0x112e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112e9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112ea0: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x112EA0u;
    SET_GPR_U32(ctx, 31, 0x112EA8u);
    ctx->pc = 0x112EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112EA0u;
    // 0x112ea4: 0x24840064  addiu       $a0, $a0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x112EA0u, 0x112EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112EA8u;
label_112ea8:
    // 0x112ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112eac: 0x3e00008  jr          $ra
    ctx->pc = 0x112EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EACu;
        // 0x112eb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112EB4u;
    // 0x112eb4: 0x0  nop
    ctx->pc = 0x112eb4u;
    // NOP
    ctx->pc = 0x112eb8u;
}
