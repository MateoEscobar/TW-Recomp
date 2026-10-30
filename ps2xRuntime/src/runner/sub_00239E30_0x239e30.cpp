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

// Function: sub_00239E30
// Address: 0x239e30 - 0x239e78
void sub_00239E30_0x239e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239E30_0x239e30");
#endif

    switch (ctx->pc) {
        case 0x239e4cu: goto label_239e4c;
        case 0x239e54u: goto label_239e54;
        case 0x239e64u: goto label_239e64;
        default: break;
    }

    ctx->pc = 0x239e30u;

    // 0x239e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239e34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x239e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x239e38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x239e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x239e3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x239e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239e44: 0xc0e4060  jal         func_390180
    ctx->pc = 0x239E44u;
    SET_GPR_U32(ctx, 31, 0x239E4Cu);
    ctx->pc = 0x239E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E44u;
    // 0x239e48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x239E44u, 0x239E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E4Cu;
label_239e4c:
    // 0x239e4c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x239E4Cu;
    SET_GPR_U32(ctx, 31, 0x239E54u);
    ctx->pc = 0x239E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E4Cu;
    // 0x239e50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x239E4Cu, 0x239E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E54u;
label_239e54:
    // 0x239e54: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x239E54u;
    {
        const bool branch_taken_0x239e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239e54) {
            ctx->pc = 0x239E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239E54u;
            // 0x239e58: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239E6Cu;
            goto label_239e6c;
        }
    }
    ctx->pc = 0x239E5Cu;
    // 0x239e5c: 0xc087502  jal         func_21D408
    ctx->pc = 0x239E5Cu;
    SET_GPR_U32(ctx, 31, 0x239E64u);
    ctx->pc = 0x239E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E5Cu;
    // 0x239e60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x239E5Cu, 0x239E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E64u;
label_239e64:
    // 0x239e64: 0xa050011e  sb          $s0, 0x11E($v0)
    ctx->pc = 0x239e64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 16));
    // 0x239e68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x239e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239e6c:
    // 0x239e6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239e70: 0x3e00008  jr          $ra
    ctx->pc = 0x239E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E70u;
        // 0x239e74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239E78u;
}
