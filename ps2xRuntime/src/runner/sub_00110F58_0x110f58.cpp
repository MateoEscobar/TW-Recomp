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

// Function: sub_00110F58
// Address: 0x110f58 - 0x110f80
void sub_00110F58_0x110f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110F58_0x110f58");
#endif

    switch (ctx->pc) {
        case 0x110f70u: goto label_110f70;
        default: break;
    }

    ctx->pc = 0x110f58u;

    // 0x110f58: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x110f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x110f5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110f5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110f60: 0x34424280  ori         $v0, $v0, 0x4280
    ctx->pc = 0x110f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17024);
    // 0x110f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110f68: 0xc042fd0  jal         func_10BF40
    ctx->pc = 0x110F68u;
    SET_GPR_U32(ctx, 31, 0x110F70u);
    ctx->pc = 0x110F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F68u;
    // 0x110f6c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF40u, 0x110F68u, 0x110F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F70u;
label_110f70:
    // 0x110f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110f74: 0x3e00008  jr          $ra
    ctx->pc = 0x110F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F74u;
        // 0x110f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110F7Cu;
    // 0x110f7c: 0x0  nop
    ctx->pc = 0x110f7cu;
    // NOP
    ctx->pc = 0x110f80u;
}
