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

// Function: sub_0035A2C8
// Address: 0x35a2c8 - 0x35a2f8
void sub_0035A2C8_0x35a2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A2C8_0x35a2c8");
#endif

    switch (ctx->pc) {
        case 0x35a2dcu: goto label_35a2dc;
        case 0x35a2e4u: goto label_35a2e4;
        default: break;
    }

    ctx->pc = 0x35a2c8u;

    // 0x35a2c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a2cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a2d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a2d4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35A2D4u;
    SET_GPR_U32(ctx, 31, 0x35A2DCu);
    ctx->pc = 0x35A2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A2D4u;
    // 0x35a2d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35A2D4u, 0x35A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A2DCu;
label_35a2dc:
    // 0x35a2dc: 0xc08ea5c  jal         func_23A970
    ctx->pc = 0x35A2DCu;
    SET_GPR_U32(ctx, 31, 0x35A2E4u);
    ctx->pc = 0x35A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A2DCu;
    // 0x35a2e0: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A970u, 0x35A2DCu, 0x35A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A2E4u;
label_35a2e4:
    // 0x35a2e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a2e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a2e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x35A2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A2ECu;
        // 0x35a2f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A2F4u;
    // 0x35a2f4: 0x0  nop
    ctx->pc = 0x35a2f4u;
    // NOP
    ctx->pc = 0x35a2f8u;
}
