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

// Function: sub_001CCE30
// Address: 0x1cce30 - 0x1cce68
void sub_001CCE30_0x1cce30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCE30_0x1cce30");
#endif

    switch (ctx->pc) {
        case 0x1cce44u: goto label_1cce44;
        default: break;
    }

    ctx->pc = 0x1cce30u;

    // 0x1cce30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cce30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cce34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cce34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cce38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cce38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cce3c: 0xc079ba6  jal         func_1E6E98
    ctx->pc = 0x1CCE3Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE44u);
    ctx->pc = 0x1CCE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE3Cu;
    // 0x1cce40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6E98u, 0x1CCE3Cu, 0x1CCE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE44u;
label_1cce44:
    // 0x1cce44: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1cce44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1cce48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cce48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce4c: 0x2463ad78  addiu       $v1, $v1, -0x5288
    ctx->pc = 0x1cce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946168));
    // 0x1cce50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cce50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cce54: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1cce54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1cce58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cce58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cce5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE5Cu;
        // 0x1cce60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCE64u;
    // 0x1cce64: 0x0  nop
    ctx->pc = 0x1cce64u;
    // NOP
    ctx->pc = 0x1cce68u;
}
