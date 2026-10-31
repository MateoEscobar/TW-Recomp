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

// Function: sub_00228050
// Address: 0x228050 - 0x228070
void sub_00228050_0x228050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228050_0x228050");
#endif

    switch (ctx->pc) {
        case 0x228060u: goto label_228060;
        default: break;
    }

    ctx->pc = 0x228050u;

    // 0x228050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228058: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x228058u;
    SET_GPR_U32(ctx, 31, 0x228060u);
    ctx->pc = 0x22805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228058u;
    // 0x22805c: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x228058u, 0x228060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228060u;
label_228060:
    // 0x228060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228064: 0x3e00008  jr          $ra
    ctx->pc = 0x228064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228064u;
        // 0x228068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22806Cu;
    // 0x22806c: 0x0  nop
    ctx->pc = 0x22806cu;
    // NOP
    ctx->pc = 0x228070u;
}
