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

// Function: sub_00367E20
// Address: 0x367e20 - 0x367e80
void sub_00367E20_0x367e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367E20_0x367e20");
#endif

    switch (ctx->pc) {
        case 0x367e40u: goto label_367e40;
        case 0x367e48u: goto label_367e48;
        case 0x367e5cu: goto label_367e5c;
        case 0x367e68u: goto label_367e68;
        default: break;
    }

    ctx->pc = 0x367e20u;

    // 0x367e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x367e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x367e24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x367e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367e28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x367e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x367e2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x367e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x367e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x367e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x367e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x367e38: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367E38u;
    SET_GPR_U32(ctx, 31, 0x367E40u);
    ctx->pc = 0x367E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E38u;
    // 0x367e3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367E38u, 0x367E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E40u;
label_367e40:
    // 0x367e40: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367E40u;
    SET_GPR_U32(ctx, 31, 0x367E48u);
    ctx->pc = 0x367E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E40u;
    // 0x367e44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367E40u, 0x367E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E48u;
label_367e48:
    // 0x367e48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x367e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x367e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x367e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e54: 0xc1024c6  jal         func_409318
    ctx->pc = 0x367E54u;
    SET_GPR_U32(ctx, 31, 0x367E5Cu);
    ctx->pc = 0x367E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E54u;
    // 0x367e58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x367E54u, 0x367E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E5Cu;
label_367e5c:
    // 0x367e5c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x367e5cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x367e60: 0xc0d500e  jal         func_354038
    ctx->pc = 0x367E60u;
    SET_GPR_U32(ctx, 31, 0x367E68u);
    ctx->pc = 0x367E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E60u;
    // 0x367e64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354038u, 0x367E60u, 0x367E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E68u;
label_367e68:
    // 0x367e68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x367e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367e6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x367e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x367e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367e74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x367e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367e78: 0x3e00008  jr          $ra
    ctx->pc = 0x367E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367E78u;
        // 0x367e7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367E80u;
}
