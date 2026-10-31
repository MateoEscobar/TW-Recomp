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

// Function: sub_00110D50
// Address: 0x110d50 - 0x110d78
void sub_00110D50_0x110d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110D50_0x110d50");
#endif

    switch (ctx->pc) {
        case 0x110d68u: goto label_110d68;
        default: break;
    }

    ctx->pc = 0x110d50u;

    // 0x110d50: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x110d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x110d54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110d54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110d58: 0x34424280  ori         $v0, $v0, 0x4280
    ctx->pc = 0x110d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17024);
    // 0x110d5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110d60: 0xc043520  jal         func_10D480
    ctx->pc = 0x110D60u;
    SET_GPR_U32(ctx, 31, 0x110D68u);
    ctx->pc = 0x110D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D60u;
    // 0x110d64: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D480u, 0x110D60u, 0x110D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D68u;
label_110d68:
    // 0x110d68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x110D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D6Cu;
        // 0x110d70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110D74u;
    // 0x110d74: 0x0  nop
    ctx->pc = 0x110d74u;
    // NOP
    ctx->pc = 0x110d78u;
}
