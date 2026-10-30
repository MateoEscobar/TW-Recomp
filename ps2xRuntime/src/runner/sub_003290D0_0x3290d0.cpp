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

// Function: sub_003290D0
// Address: 0x3290d0 - 0x329110
void sub_003290D0_0x3290d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003290D0_0x3290d0");
#endif

    switch (ctx->pc) {
        case 0x3290e4u: goto label_3290e4;
        case 0x3290fcu: goto label_3290fc;
        default: break;
    }

    ctx->pc = 0x3290d0u;

    // 0x3290d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3290d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3290d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3290d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3290d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3290d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3290dc: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x3290DCu;
    SET_GPR_U32(ctx, 31, 0x3290E4u);
    ctx->pc = 0x3290E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290DCu;
    // 0x3290e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x3290DCu, 0x3290E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290E4u;
label_3290e4:
    // 0x3290e4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3290E4u;
    {
        const bool branch_taken_0x3290e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3290e4) {
            ctx->pc = 0x3290E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3290E4u;
            // 0x3290e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329100u;
            goto label_329100;
        }
    }
    ctx->pc = 0x3290ECu;
    // 0x3290ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3290ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3290f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3290f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3290f4: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x3290F4u;
    SET_GPR_U32(ctx, 31, 0x3290FCu);
    ctx->pc = 0x3290F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290F4u;
    // 0x3290f8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x3290F4u, 0x3290FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290FCu;
label_3290fc:
    // 0x3290fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3290fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_329100:
    // 0x329100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329104: 0x3e00008  jr          $ra
    ctx->pc = 0x329104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329104u;
        // 0x329108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32910Cu;
    // 0x32910c: 0x0  nop
    ctx->pc = 0x32910cu;
    // NOP
    ctx->pc = 0x329110u;
}
