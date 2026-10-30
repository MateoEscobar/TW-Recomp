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

// Function: sub_0035EE50
// Address: 0x35ee50 - 0x35eea0
void sub_0035EE50_0x35ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EE50_0x35ee50");
#endif

    switch (ctx->pc) {
        case 0x35ee6cu: goto label_35ee6c;
        case 0x35ee74u: goto label_35ee74;
        case 0x35ee7cu: goto label_35ee7c;
        case 0x35ee88u: goto label_35ee88;
        default: break;
    }

    ctx->pc = 0x35ee50u;

    // 0x35ee50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35ee54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35ee54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ee58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35ee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35ee5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ee60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ee60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ee64: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35EE64u;
    SET_GPR_U32(ctx, 31, 0x35EE6Cu);
    ctx->pc = 0x35EE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EE64u;
    // 0x35ee68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35EE64u, 0x35EE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EE6Cu;
label_35ee6c:
    // 0x35ee6c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35EE6Cu;
    SET_GPR_U32(ctx, 31, 0x35EE74u);
    ctx->pc = 0x35EE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EE6Cu;
    // 0x35ee70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35EE6Cu, 0x35EE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EE74u;
label_35ee74:
    // 0x35ee74: 0xc0a4974  jal         func_2925D0
    ctx->pc = 0x35EE74u;
    SET_GPR_U32(ctx, 31, 0x35EE7Cu);
    ctx->pc = 0x35EE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EE74u;
    // 0x35ee78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2925D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2925D0u, 0x35EE74u, 0x35EE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EE7Cu;
label_35ee7c:
    // 0x35ee7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35ee7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ee80: 0xc102562  jal         func_409588
    ctx->pc = 0x35EE80u;
    SET_GPR_U32(ctx, 31, 0x35EE88u);
    ctx->pc = 0x35EE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EE80u;
    // 0x35ee84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35EE80u, 0x35EE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EE88u;
label_35ee88:
    // 0x35ee88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35ee88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ee8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ee90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ee90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ee94: 0x3e00008  jr          $ra
    ctx->pc = 0x35EE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE94u;
        // 0x35ee98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EE9Cu;
    // 0x35ee9c: 0x0  nop
    ctx->pc = 0x35ee9cu;
    // NOP
    ctx->pc = 0x35eea0u;
}
