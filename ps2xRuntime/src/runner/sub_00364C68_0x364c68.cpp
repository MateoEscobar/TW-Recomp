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

// Function: sub_00364C68
// Address: 0x364c68 - 0x364cc8
void sub_00364C68_0x364c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364C68_0x364c68");
#endif

    switch (ctx->pc) {
        case 0x364c88u: goto label_364c88;
        case 0x364c90u: goto label_364c90;
        case 0x364ca4u: goto label_364ca4;
        case 0x364cb0u: goto label_364cb0;
        default: break;
    }

    ctx->pc = 0x364c68u;

    // 0x364c68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x364c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x364c6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x364c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364c70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x364c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x364c74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x364c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x364c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364c80: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364C80u;
    SET_GPR_U32(ctx, 31, 0x364C88u);
    ctx->pc = 0x364C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364C80u;
    // 0x364c84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364C80u, 0x364C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C88u;
label_364c88:
    // 0x364c88: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364C88u;
    SET_GPR_U32(ctx, 31, 0x364C90u);
    ctx->pc = 0x364C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364C88u;
    // 0x364c8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364C88u, 0x364C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C90u;
label_364c90:
    // 0x364c90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x364c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364c98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x364c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364c9c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x364C9Cu;
    SET_GPR_U32(ctx, 31, 0x364CA4u);
    ctx->pc = 0x364CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364C9Cu;
    // 0x364ca0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x364C9Cu, 0x364CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364CA4u;
label_364ca4:
    // 0x364ca4: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x364ca4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x364ca8: 0xc08e480  jal         func_239200
    ctx->pc = 0x364CA8u;
    SET_GPR_U32(ctx, 31, 0x364CB0u);
    ctx->pc = 0x364CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364CA8u;
    // 0x364cac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239200u, 0x364CA8u, 0x364CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364CB0u;
label_364cb0:
    // 0x364cb0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x364cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364cb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364cb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x364cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x364CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364CC0u;
        // 0x364cc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364CC8u;
}
