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

// Function: sub_00372E20
// Address: 0x372e20 - 0x372e58
void sub_00372E20_0x372e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372E20_0x372e20");
#endif

    switch (ctx->pc) {
        case 0x372e34u: goto label_372e34;
        case 0x372e3cu: goto label_372e3c;
        case 0x372e44u: goto label_372e44;
        default: break;
    }

    ctx->pc = 0x372e20u;

    // 0x372e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372e24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x372e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x372e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x372e2c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372E2Cu;
    SET_GPR_U32(ctx, 31, 0x372E34u);
    ctx->pc = 0x372E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372E2Cu;
    // 0x372e30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372E2Cu, 0x372E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E34u;
label_372e34:
    // 0x372e34: 0xc10b108  jal         func_42C420
    ctx->pc = 0x372E34u;
    SET_GPR_U32(ctx, 31, 0x372E3Cu);
    ctx->pc = 0x372E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372E34u;
    // 0x372e38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x372E34u, 0x372E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E3Cu;
label_372e3c:
    // 0x372e3c: 0xc045006  jal         func_114018
    ctx->pc = 0x372E3Cu;
    SET_GPR_U32(ctx, 31, 0x372E44u);
    ctx->pc = 0x372E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372E3Cu;
    // 0x372e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114018u, 0x372E3Cu, 0x372E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E44u;
label_372e44:
    // 0x372e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x372e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372e48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x372e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x372E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372E4Cu;
        // 0x372e50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372E54u;
    // 0x372e54: 0x0  nop
    ctx->pc = 0x372e54u;
    // NOP
    ctx->pc = 0x372e58u;
}
