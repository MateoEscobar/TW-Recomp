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

// Function: sub_001B2E68
// Address: 0x1b2e68 - 0x1b2e98
void sub_001B2E68_0x1b2e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2E68_0x1b2e68");
#endif

    switch (ctx->pc) {
        case 0x1b2e8cu: goto label_1b2e8c;
        default: break;
    }

    ctx->pc = 0x1b2e68u;

    // 0x1b2e68: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1b2e68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2e6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2e6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2e70: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b2e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b2e74: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b2e74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b2e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2e7c: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1b2e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1b2e80: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b2e80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b2e84: 0xc06ca64  jal         func_1B2990
    ctx->pc = 0x1B2E84u;
    SET_GPR_U32(ctx, 31, 0x1B2E8Cu);
    ctx->pc = 0x1B2E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E84u;
    // 0x1b2e88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2990u, 0x1B2E84u, 0x1B2E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E8Cu;
label_1b2e8c:
    // 0x1b2e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2e90: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E90u;
        // 0x1b2e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2E98u;
}
