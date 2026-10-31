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

// Function: sub_001B2BF0
// Address: 0x1b2bf0 - 0x1b2c40
void sub_001B2BF0_0x1b2bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2BF0_0x1b2bf0");
#endif

    switch (ctx->pc) {
        case 0x1b2c18u: goto label_1b2c18;
        case 0x1b2c28u: goto label_1b2c28;
        default: break;
    }

    ctx->pc = 0x1b2bf0u;

    // 0x1b2bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b2bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b2bf4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b2bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b2bf8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b2bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b2bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b2c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b2c04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b2c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c08: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b2c08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2c10: 0xc071190  jal         func_1C4640
    ctx->pc = 0x1B2C10u;
    SET_GPR_U32(ctx, 31, 0x1B2C18u);
    ctx->pc = 0x1B2C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C10u;
    // 0x1b2c14: 0x260415d0  addiu       $a0, $s0, 0x15D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4640u, 0x1B2C10u, 0x1B2C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C18u;
label_1b2c18:
    // 0x1b2c18: 0x26043f10  addiu       $a0, $s0, 0x3F10
    ctx->pc = 0x1b2c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16144));
    // 0x1b2c1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c20: 0xc071190  jal         func_1C4640
    ctx->pc = 0x1B2C20u;
    SET_GPR_U32(ctx, 31, 0x1B2C28u);
    ctx->pc = 0x1B2C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C20u;
    // 0x1b2c24: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4640u, 0x1B2C20u, 0x1B2C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C28u;
label_1b2c28:
    // 0x1b2c28: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b2c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2c2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b2c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2c30: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b2c30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2c38: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C38u;
        // 0x1b2c3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2C40u;
}
