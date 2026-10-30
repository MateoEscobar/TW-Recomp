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

// Function: sub_00314F38
// Address: 0x314f38 - 0x314f80
void sub_00314F38_0x314f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314F38_0x314f38");
#endif

    switch (ctx->pc) {
        case 0x314f4cu: goto label_314f4c;
        case 0x314f6cu: goto label_314f6c;
        default: break;
    }

    ctx->pc = 0x314f38u;

    // 0x314f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314f3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x314f44: 0xc0c52aa  jal         func_314AA8
    ctx->pc = 0x314F44u;
    SET_GPR_U32(ctx, 31, 0x314F4Cu);
    ctx->pc = 0x314F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314F44u;
    // 0x314f48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314AA8u, 0x314F44u, 0x314F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314F4Cu;
label_314f4c:
    // 0x314f4c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x314f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x314f50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x314f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x314f54: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x314f54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x314f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314f5c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x314f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x314f60: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x314f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
    // 0x314f64: 0xc059838  jal         func_1660E0
    ctx->pc = 0x314F64u;
    SET_GPR_U32(ctx, 31, 0x314F6Cu);
    ctx->pc = 0x314F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314F64u;
    // 0x314f68: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1660E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1660E0u, 0x314F64u, 0x314F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314F6Cu;
label_314f6c:
    // 0x314f6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314f74: 0x3e00008  jr          $ra
    ctx->pc = 0x314F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F74u;
        // 0x314f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314F7Cu;
    // 0x314f7c: 0x0  nop
    ctx->pc = 0x314f7cu;
    // NOP
    ctx->pc = 0x314f80u;
}
