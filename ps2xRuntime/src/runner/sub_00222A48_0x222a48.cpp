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

// Function: sub_00222A48
// Address: 0x222a48 - 0x222a90
void sub_00222A48_0x222a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222A48_0x222a48");
#endif

    switch (ctx->pc) {
        case 0x222a60u: goto label_222a60;
        case 0x222a6cu: goto label_222a6c;
        case 0x222a78u: goto label_222a78;
        default: break;
    }

    ctx->pc = 0x222a48u;

    // 0x222a48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222a4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x222a50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x222a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x222a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222a58: 0xc087502  jal         func_21D408
    ctx->pc = 0x222A58u;
    SET_GPR_U32(ctx, 31, 0x222A60u);
    ctx->pc = 0x222A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A58u;
    // 0x222a5c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x222A58u, 0x222A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A60u;
label_222a60:
    // 0x222a60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x222a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a64: 0xc087502  jal         func_21D408
    ctx->pc = 0x222A64u;
    SET_GPR_U32(ctx, 31, 0x222A6Cu);
    ctx->pc = 0x222A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A64u;
    // 0x222a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x222A64u, 0x222A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A6Cu;
label_222a6c:
    // 0x222a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a70: 0xc0a404e  jal         func_290138
    ctx->pc = 0x222A70u;
    SET_GPR_U32(ctx, 31, 0x222A78u);
    ctx->pc = 0x222A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A70u;
    // 0x222a74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x222A70u, 0x222A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A78u;
label_222a78:
    // 0x222a78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x222a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222a7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222a7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222a84: 0x3e00008  jr          $ra
    ctx->pc = 0x222A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A84u;
        // 0x222a88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222A8Cu;
    // 0x222a8c: 0x0  nop
    ctx->pc = 0x222a8cu;
    // NOP
    ctx->pc = 0x222a90u;
}
