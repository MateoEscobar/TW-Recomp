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

// Function: sub_003C7CF8
// Address: 0x3c7cf8 - 0x3c7d30
void sub_003C7CF8_0x3c7cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7CF8_0x3c7cf8");
#endif

    switch (ctx->pc) {
        case 0x3c7d14u: goto label_3c7d14;
        default: break;
    }

    ctx->pc = 0x3c7cf8u;

    // 0x3c7cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c7cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c7cfc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3c7cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7d00: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c7d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c7d04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c7d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c7d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c7d0c: 0xc0ea12a  jal         func_3A84A8
    ctx->pc = 0x3C7D0Cu;
    SET_GPR_U32(ctx, 31, 0x3C7D14u);
    ctx->pc = 0x3C7D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7D0Cu;
    // 0x3c7d10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C7D0Cu, 0x3C7D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7D14u;
label_3c7d14:
    // 0x3c7d14: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3c7d14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c7d18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c7d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7d1c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3c7d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x3c7d20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c7d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c7d24: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7D24u;
        // 0x3c7d28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7D2Cu;
    // 0x3c7d2c: 0x0  nop
    ctx->pc = 0x3c7d2cu;
    // NOP
    ctx->pc = 0x3c7d30u;
}
