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

// Function: sub_00364D28
// Address: 0x364d28 - 0x364d88
void sub_00364D28_0x364d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364D28_0x364d28");
#endif

    switch (ctx->pc) {
        case 0x364d48u: goto label_364d48;
        case 0x364d50u: goto label_364d50;
        case 0x364d64u: goto label_364d64;
        case 0x364d70u: goto label_364d70;
        default: break;
    }

    ctx->pc = 0x364d28u;

    // 0x364d28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x364d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x364d2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x364d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364d30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x364d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x364d34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364d38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x364d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x364d3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364d40: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364D40u;
    SET_GPR_U32(ctx, 31, 0x364D48u);
    ctx->pc = 0x364D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364D40u;
    // 0x364d44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364D40u, 0x364D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D48u;
label_364d48:
    // 0x364d48: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364D48u;
    SET_GPR_U32(ctx, 31, 0x364D50u);
    ctx->pc = 0x364D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364D48u;
    // 0x364d4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364D48u, 0x364D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D50u;
label_364d50:
    // 0x364d50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x364d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364d58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x364d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364d5c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x364D5Cu;
    SET_GPR_U32(ctx, 31, 0x364D64u);
    ctx->pc = 0x364D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364D5Cu;
    // 0x364d60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x364D5Cu, 0x364D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D64u;
label_364d64:
    // 0x364d64: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x364d64u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x364d68: 0xc08e4b0  jal         func_2392C0
    ctx->pc = 0x364D68u;
    SET_GPR_U32(ctx, 31, 0x364D70u);
    ctx->pc = 0x364D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364D68u;
    // 0x364d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2392C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2392C0u, 0x364D68u, 0x364D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D70u;
label_364d70:
    // 0x364d70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x364d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364d74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364d78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x364d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364d80: 0x3e00008  jr          $ra
    ctx->pc = 0x364D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364D80u;
        // 0x364d84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364D88u;
}
