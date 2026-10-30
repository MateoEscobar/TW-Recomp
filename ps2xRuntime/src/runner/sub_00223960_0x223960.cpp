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

// Function: sub_00223960
// Address: 0x223960 - 0x223980
void sub_00223960_0x223960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223960_0x223960");
#endif

    switch (ctx->pc) {
        case 0x223970u: goto label_223970;
        default: break;
    }

    ctx->pc = 0x223960u;

    // 0x223960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223968: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x223968u;
    SET_GPR_U32(ctx, 31, 0x223970u);
    ctx->pc = 0x22396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223968u;
    // 0x22396c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x223968u, 0x223970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223970u;
label_223970:
    // 0x223970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223974: 0x3e00008  jr          $ra
    ctx->pc = 0x223974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223974u;
        // 0x223978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22397Cu;
    // 0x22397c: 0x0  nop
    ctx->pc = 0x22397cu;
    // NOP
    ctx->pc = 0x223980u;
}
