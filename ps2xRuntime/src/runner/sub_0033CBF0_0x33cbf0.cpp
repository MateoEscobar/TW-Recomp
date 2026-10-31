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

// Function: sub_0033CBF0
// Address: 0x33cbf0 - 0x33cc48
void sub_0033CBF0_0x33cbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CBF0_0x33cbf0");
#endif

    switch (ctx->pc) {
        case 0x33cc0cu: goto label_33cc0c;
        case 0x33cc18u: goto label_33cc18;
        case 0x33cc24u: goto label_33cc24;
        case 0x33cc30u: goto label_33cc30;
        default: break;
    }

    ctx->pc = 0x33cbf0u;

    // 0x33cbf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33cbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33cbf4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33cbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x33cbf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33cbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33cbfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33cbfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cc00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33cc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33cc04: 0xc0d01fe  jal         func_3407F8
    ctx->pc = 0x33CC04u;
    SET_GPR_U32(ctx, 31, 0x33CC0Cu);
    ctx->pc = 0x33CC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CC04u;
    // 0x33cc08: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3407F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3407F8u, 0x33CC04u, 0x33CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CC0Cu;
label_33cc0c:
    // 0x33cc0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33cc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cc10: 0xc0d01c0  jal         func_340700
    ctx->pc = 0x33CC10u;
    SET_GPR_U32(ctx, 31, 0x33CC18u);
    ctx->pc = 0x33CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CC10u;
    // 0x33cc14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340700u, 0x33CC10u, 0x33CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CC18u;
label_33cc18:
    // 0x33cc18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33cc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cc1c: 0xc0d069a  jal         func_341A68
    ctx->pc = 0x33CC1Cu;
    SET_GPR_U32(ctx, 31, 0x33CC24u);
    ctx->pc = 0x33CC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CC1Cu;
    // 0x33cc20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A68u, 0x33CC1Cu, 0x33CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CC24u;
label_33cc24:
    // 0x33cc24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33cc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cc28: 0xc0d0834  jal         func_3420D0
    ctx->pc = 0x33CC28u;
    SET_GPR_U32(ctx, 31, 0x33CC30u);
    ctx->pc = 0x33CC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CC28u;
    // 0x33cc2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3420D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3420D0u, 0x33CC28u, 0x33CC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CC30u;
label_33cc30:
    // 0x33cc30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33cc30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33cc34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33cc34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cc38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33cc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x33CC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC3Cu;
        // 0x33cc40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CC44u;
    // 0x33cc44: 0x0  nop
    ctx->pc = 0x33cc44u;
    // NOP
    ctx->pc = 0x33cc48u;
}
