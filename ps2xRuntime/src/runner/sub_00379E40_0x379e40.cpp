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

// Function: sub_00379E40
// Address: 0x379e40 - 0x379ea0
void sub_00379E40_0x379e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379E40_0x379e40");
#endif

    switch (ctx->pc) {
        case 0x379e60u: goto label_379e60;
        case 0x379e68u: goto label_379e68;
        case 0x379e7cu: goto label_379e7c;
        case 0x379e88u: goto label_379e88;
        default: break;
    }

    ctx->pc = 0x379e40u;

    // 0x379e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x379e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x379e44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379e48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x379e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x379e4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x379e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379e50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x379e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x379e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379e58: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379E58u;
    SET_GPR_U32(ctx, 31, 0x379E60u);
    ctx->pc = 0x379E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379E58u;
    // 0x379e5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379E58u, 0x379E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E60u;
label_379e60:
    // 0x379e60: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379E60u;
    SET_GPR_U32(ctx, 31, 0x379E68u);
    ctx->pc = 0x379E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379E60u;
    // 0x379e64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379E60u, 0x379E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E68u;
label_379e68:
    // 0x379e68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x379e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379e70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x379e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379e74: 0xc1024c6  jal         func_409318
    ctx->pc = 0x379E74u;
    SET_GPR_U32(ctx, 31, 0x379E7Cu);
    ctx->pc = 0x379E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379E74u;
    // 0x379e78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x379E74u, 0x379E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E7Cu;
label_379e7c:
    // 0x379e7c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x379e7cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x379e80: 0xc0e5c1e  jal         func_397078
    ctx->pc = 0x379E80u;
    SET_GPR_U32(ctx, 31, 0x379E88u);
    ctx->pc = 0x379E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379E80u;
    // 0x379e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397078u, 0x379E80u, 0x379E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E88u;
label_379e88:
    // 0x379e88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x379e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379e8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x379e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379e90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x379e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379e94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379e98: 0x3e00008  jr          $ra
    ctx->pc = 0x379E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379E98u;
        // 0x379e9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379EA0u;
}
