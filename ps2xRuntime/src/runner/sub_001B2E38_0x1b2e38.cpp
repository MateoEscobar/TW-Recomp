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

// Function: sub_001B2E38
// Address: 0x1b2e38 - 0x1b2e68
void sub_001B2E38_0x1b2e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2E38_0x1b2e38");
#endif

    switch (ctx->pc) {
        case 0x1b2e5cu: goto label_1b2e5c;
        default: break;
    }

    ctx->pc = 0x1b2e38u;

    // 0x1b2e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2e3c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b2e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b2e40: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b2e40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b2e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2e48: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1b2e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1b2e4c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b2e4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b2e50: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1b2e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b2e54: 0xc06ca64  jal         func_1B2990
    ctx->pc = 0x1B2E54u;
    SET_GPR_U32(ctx, 31, 0x1B2E5Cu);
    ctx->pc = 0x1B2E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E54u;
    // 0x1b2e58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2990u, 0x1B2E54u, 0x1B2E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E5Cu;
label_1b2e5c:
    // 0x1b2e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2e60: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E60u;
        // 0x1b2e64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2E68u;
}
