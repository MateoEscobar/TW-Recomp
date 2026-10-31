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

// Function: sub_0035AC20
// Address: 0x35ac20 - 0x35ac80
void sub_0035AC20_0x35ac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AC20_0x35ac20");
#endif

    switch (ctx->pc) {
        case 0x35ac40u: goto label_35ac40;
        case 0x35ac48u: goto label_35ac48;
        case 0x35ac5cu: goto label_35ac5c;
        case 0x35ac68u: goto label_35ac68;
        default: break;
    }

    ctx->pc = 0x35ac20u;

    // 0x35ac20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35ac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35ac24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ac24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ac28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35ac28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35ac2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35ac2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ac30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35ac34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ac34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ac38: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35AC38u;
    SET_GPR_U32(ctx, 31, 0x35AC40u);
    ctx->pc = 0x35AC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AC38u;
    // 0x35ac3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35AC38u, 0x35AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC40u;
label_35ac40:
    // 0x35ac40: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35AC40u;
    SET_GPR_U32(ctx, 31, 0x35AC48u);
    ctx->pc = 0x35AC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AC40u;
    // 0x35ac44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35AC40u, 0x35AC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC48u;
label_35ac48:
    // 0x35ac48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35ac48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ac4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ac4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ac50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35ac50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ac54: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35AC54u;
    SET_GPR_U32(ctx, 31, 0x35AC5Cu);
    ctx->pc = 0x35AC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AC54u;
    // 0x35ac58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35AC54u, 0x35AC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC5Cu;
label_35ac5c:
    // 0x35ac5c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35ac5cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35ac60: 0xc08e884  jal         func_23A210
    ctx->pc = 0x35AC60u;
    SET_GPR_U32(ctx, 31, 0x35AC68u);
    ctx->pc = 0x35AC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AC60u;
    // 0x35ac64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A210u, 0x35AC60u, 0x35AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC68u;
label_35ac68:
    // 0x35ac68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35ac68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ac6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ac6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ac70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35ac70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ac74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ac74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ac78: 0x3e00008  jr          $ra
    ctx->pc = 0x35AC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AC78u;
        // 0x35ac7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AC80u;
}
