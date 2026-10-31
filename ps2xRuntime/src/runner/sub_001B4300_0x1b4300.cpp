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

// Function: sub_001B4300
// Address: 0x1b4300 - 0x1b4328
void sub_001B4300_0x1b4300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4300_0x1b4300");
#endif

    switch (ctx->pc) {
        case 0x1b4318u: goto label_1b4318;
        default: break;
    }

    ctx->pc = 0x1b4300u;

    // 0x1b4300: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b4300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4304: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4308: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b4308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b430c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b430cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4310: 0xc06cad6  jal         func_1B2B58
    ctx->pc = 0x1B4310u;
    SET_GPR_U32(ctx, 31, 0x1B4318u);
    ctx->pc = 0x1B4314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4310u;
    // 0x1b4314: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B58u, 0x1B4310u, 0x1B4318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4318u;
label_1b4318:
    // 0x1b4318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b431c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B431Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B431Cu;
        // 0x1b4320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B431Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4324u;
    // 0x1b4324: 0x0  nop
    ctx->pc = 0x1b4324u;
    // NOP
    ctx->pc = 0x1b4328u;
}
