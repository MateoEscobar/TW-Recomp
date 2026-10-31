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

// Function: sub_00323E60
// Address: 0x323e60 - 0x323ea8
void sub_00323E60_0x323e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323E60_0x323e60");
#endif

    switch (ctx->pc) {
        case 0x323e7cu: goto label_323e7c;
        case 0x323e88u: goto label_323e88;
        default: break;
    }

    ctx->pc = 0x323e60u;

    // 0x323e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x323e64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323e6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323e70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x323e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x323e74: 0xc0cbf58  jal         func_32FD60
    ctx->pc = 0x323E74u;
    SET_GPR_U32(ctx, 31, 0x323E7Cu);
    ctx->pc = 0x323E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323E74u;
    // 0x323e78: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FD60u, 0x323E74u, 0x323E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323E7Cu;
label_323e7c:
    // 0x323e7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x323e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323e80: 0xc0ccf38  jal         func_333CE0
    ctx->pc = 0x323E80u;
    SET_GPR_U32(ctx, 31, 0x323E88u);
    ctx->pc = 0x323E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323E80u;
    // 0x323e84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333CE0u, 0x323E80u, 0x323E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323E88u;
label_323e88:
    // 0x323e88: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x323e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x323e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323e90: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x323e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x323e94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x323e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323e98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x323E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323E9Cu;
        // 0x323ea0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323EA4u;
    // 0x323ea4: 0x0  nop
    ctx->pc = 0x323ea4u;
    // NOP
    ctx->pc = 0x323ea8u;
}
