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

// Function: sub_00239EE0
// Address: 0x239ee0 - 0x239f20
void sub_00239EE0_0x239ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239EE0_0x239ee0");
#endif

    switch (ctx->pc) {
        case 0x239efcu: goto label_239efc;
        case 0x239f04u: goto label_239f04;
        default: break;
    }

    ctx->pc = 0x239ee0u;

    // 0x239ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239ee4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x239ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x239ee8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x239ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x239eec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x239eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239ef4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x239EF4u;
    SET_GPR_U32(ctx, 31, 0x239EFCu);
    ctx->pc = 0x239EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239EF4u;
    // 0x239ef8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x239EF4u, 0x239EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239EFCu;
label_239efc:
    // 0x239efc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x239EFCu;
    SET_GPR_U32(ctx, 31, 0x239F04u);
    ctx->pc = 0x239F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239EFCu;
    // 0x239f00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x239EFCu, 0x239F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F04u;
label_239f04:
    // 0x239f04: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x239F04u;
    {
        const bool branch_taken_0x239f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239f04) {
            ctx->pc = 0x239F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239F04u;
            // 0x239f08: 0xac5005b0  sw          $s0, 0x5B0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 1456), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239F0Cu;
            goto label_239f0c;
        }
    }
    ctx->pc = 0x239F0Cu;
label_239f0c:
    // 0x239f0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x239f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239f10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239f14: 0x3e00008  jr          $ra
    ctx->pc = 0x239F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F14u;
        // 0x239f18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239F1Cu;
    // 0x239f1c: 0x0  nop
    ctx->pc = 0x239f1cu;
    // NOP
    ctx->pc = 0x239f20u;
}
