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

// Function: sub_0040B2C0
// Address: 0x40b2c0 - 0x40b318
void sub_0040B2C0_0x40b2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B2C0_0x40b2c0");
#endif

    switch (ctx->pc) {
        case 0x40b2dcu: goto label_40b2dc;
        case 0x40b2ecu: goto label_40b2ec;
        case 0x40b2fcu: goto label_40b2fc;
        default: break;
    }

    ctx->pc = 0x40b2c0u;

    // 0x40b2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40b2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40b2c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40b2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b2c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40b2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40b2cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40b2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40b2d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40b2d4: 0xc0c8d78  jal         func_3235E0
    ctx->pc = 0x40B2D4u;
    SET_GPR_U32(ctx, 31, 0x40B2DCu);
    ctx->pc = 0x40B2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B2D4u;
    // 0x40b2d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235E0u, 0x40B2D4u, 0x40B2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B2DCu;
label_40b2dc:
    // 0x40b2dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40b2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b2e4: 0xc0c8e00  jal         func_323800
    ctx->pc = 0x40B2E4u;
    SET_GPR_U32(ctx, 31, 0x40B2ECu);
    ctx->pc = 0x40B2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B2E4u;
    // 0x40b2e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323800u, 0x40B2E4u, 0x40B2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B2ECu;
label_40b2ec:
    // 0x40b2ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x40b2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b2f4: 0xc10296c  jal         func_40A5B0
    ctx->pc = 0x40B2F4u;
    SET_GPR_U32(ctx, 31, 0x40B2FCu);
    ctx->pc = 0x40B2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B2F4u;
    // 0x40b2f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A5B0u, 0x40B2F4u, 0x40B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B2FCu;
label_40b2fc:
    // 0x40b2fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40b2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40b300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40b300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b304: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40b304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40b308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40b30c: 0x3e00008  jr          $ra
    ctx->pc = 0x40B30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B30Cu;
        // 0x40b310: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B314u;
    // 0x40b314: 0x0  nop
    ctx->pc = 0x40b314u;
    // NOP
    ctx->pc = 0x40b318u;
}
