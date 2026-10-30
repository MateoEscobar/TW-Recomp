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

// Function: sub_0036DD40
// Address: 0x36dd40 - 0x36dda0
void sub_0036DD40_0x36dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DD40_0x36dd40");
#endif

    switch (ctx->pc) {
        case 0x36dd60u: goto label_36dd60;
        case 0x36dd68u: goto label_36dd68;
        case 0x36dd7cu: goto label_36dd7c;
        case 0x36dd88u: goto label_36dd88;
        default: break;
    }

    ctx->pc = 0x36dd40u;

    // 0x36dd40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36dd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36dd44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36dd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36dd48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36dd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36dd4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36dd4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dd50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36dd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36dd54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36dd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36dd58: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DD58u;
    SET_GPR_U32(ctx, 31, 0x36DD60u);
    ctx->pc = 0x36DD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DD58u;
    // 0x36dd5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DD58u, 0x36DD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DD60u;
label_36dd60:
    // 0x36dd60: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36DD60u;
    SET_GPR_U32(ctx, 31, 0x36DD68u);
    ctx->pc = 0x36DD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DD60u;
    // 0x36dd64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36DD60u, 0x36DD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DD68u;
label_36dd68:
    // 0x36dd68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36dd68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dd6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36dd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dd70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36dd70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dd74: 0xc102488  jal         func_409220
    ctx->pc = 0x36DD74u;
    SET_GPR_U32(ctx, 31, 0x36DD7Cu);
    ctx->pc = 0x36DD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DD74u;
    // 0x36dd78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36DD74u, 0x36DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DD7Cu;
label_36dd7c:
    // 0x36dd7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36dd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dd80: 0xc0e5e34  jal         func_3978D0
    ctx->pc = 0x36DD80u;
    SET_GPR_U32(ctx, 31, 0x36DD88u);
    ctx->pc = 0x36DD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DD80u;
    // 0x36dd84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3978D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3978D0u, 0x36DD80u, 0x36DD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DD88u;
label_36dd88:
    // 0x36dd88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36dd88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36dd8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36dd8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dd90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36dd90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36dd94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36dd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dd98: 0x3e00008  jr          $ra
    ctx->pc = 0x36DD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DD98u;
        // 0x36dd9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DDA0u;
}
