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

// Function: sub_001A90F8
// Address: 0x1a90f8 - 0x1a9130
void sub_001A90F8_0x1a90f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A90F8_0x1a90f8");
#endif

    switch (ctx->pc) {
        case 0x1a910cu: goto label_1a910c;
        default: break;
    }

    ctx->pc = 0x1a90f8u;

    // 0x1a90f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a90f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a90fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a90fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a9100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9104: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1A9104u;
    SET_GPR_U32(ctx, 31, 0x1A910Cu);
    ctx->pc = 0x1A9108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9104u;
    // 0x1a9108: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1A9104u, 0x1A910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A910Cu;
label_1a910c:
    // 0x1a910c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1a910cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1a9110: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a9110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9114: 0x24639a10  addiu       $v1, $v1, -0x65F0
    ctx->pc = 0x1a9114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941200));
    // 0x1a9118: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1a9118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1a911c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1a911cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1a9120: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a9120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9128: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9128u;
        // 0x1a912c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9130u;
}
