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

// Function: sub_0035E2C8
// Address: 0x35e2c8 - 0x35e300
void sub_0035E2C8_0x35e2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E2C8_0x35e2c8");
#endif

    switch (ctx->pc) {
        case 0x35e2dcu: goto label_35e2dc;
        case 0x35e2e4u: goto label_35e2e4;
        case 0x35e2ecu: goto label_35e2ec;
        default: break;
    }

    ctx->pc = 0x35e2c8u;

    // 0x35e2c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35e2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35e2cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e2d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e2d4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E2D4u;
    SET_GPR_U32(ctx, 31, 0x35E2DCu);
    ctx->pc = 0x35E2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E2D4u;
    // 0x35e2d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E2D4u, 0x35E2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E2DCu;
label_35e2dc:
    // 0x35e2dc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35E2DCu;
    SET_GPR_U32(ctx, 31, 0x35E2E4u);
    ctx->pc = 0x35E2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E2DCu;
    // 0x35e2e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35E2DCu, 0x35E2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E2E4u;
label_35e2e4:
    // 0x35e2e4: 0xc0a5206  jal         func_294818
    ctx->pc = 0x35E2E4u;
    SET_GPR_U32(ctx, 31, 0x35E2ECu);
    ctx->pc = 0x35E2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E2E4u;
    // 0x35e2e8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x294818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294818u, 0x35E2E4u, 0x35E2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E2ECu;
label_35e2ec:
    // 0x35e2ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e2f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e2f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x35E2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E2F4u;
        // 0x35e2f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E2FCu;
    // 0x35e2fc: 0x0  nop
    ctx->pc = 0x35e2fcu;
    // NOP
    ctx->pc = 0x35e300u;
}
