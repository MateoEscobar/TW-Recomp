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

// Function: sub_00429A60
// Address: 0x429a60 - 0x429a98
void sub_00429A60_0x429a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429A60_0x429a60");
#endif

    switch (ctx->pc) {
        case 0x429a74u: goto label_429a74;
        case 0x429a7cu: goto label_429a7c;
        default: break;
    }

    ctx->pc = 0x429a60u;

    // 0x429a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x429a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x429a64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x429a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x429a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x429a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x429a6c: 0xc109b0c  jal         func_426C30
    ctx->pc = 0x429A6Cu;
    SET_GPR_U32(ctx, 31, 0x429A74u);
    ctx->pc = 0x429A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429A6Cu;
    // 0x429a70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426C30u, 0x429A6Cu, 0x429A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429A74u;
label_429a74:
    // 0x429a74: 0xc1093ba  jal         func_424EE8
    ctx->pc = 0x429A74u;
    SET_GPR_U32(ctx, 31, 0x429A7Cu);
    ctx->pc = 0x429A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429A74u;
    // 0x429a78: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424EE8u, 0x429A74u, 0x429A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429A7Cu;
label_429a7c:
    // 0x429a7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x429a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x429a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x429a84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x429a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x429a88: 0x3e00008  jr          $ra
    ctx->pc = 0x429A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A88u;
        // 0x429a8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429A90u;
    // 0x429a90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x429a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x429a94: 0x0  nop
    ctx->pc = 0x429a94u;
    // NOP
    ctx->pc = 0x429a98u;
}
