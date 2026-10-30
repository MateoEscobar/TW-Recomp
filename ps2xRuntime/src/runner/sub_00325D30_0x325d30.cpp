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

// Function: sub_00325D30
// Address: 0x325d30 - 0x325d80
void sub_00325D30_0x325d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325D30_0x325d30");
#endif

    switch (ctx->pc) {
        case 0x325d4cu: goto label_325d4c;
        case 0x325d58u: goto label_325d58;
        case 0x325d60u: goto label_325d60;
        case 0x325d6cu: goto label_325d6c;
        default: break;
    }

    ctx->pc = 0x325d30u;

    // 0x325d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x325d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x325d34: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x325d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x325d38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x325d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x325d3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325d40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325d44: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x325D44u;
    SET_GPR_U32(ctx, 31, 0x325D4Cu);
    ctx->pc = 0x325D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D44u;
    // 0x325d48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x325D44u, 0x325D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D4Cu;
label_325d4c:
    // 0x325d4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325d50: 0xc0c90b8  jal         func_3242E0
    ctx->pc = 0x325D50u;
    SET_GPR_U32(ctx, 31, 0x325D58u);
    ctx->pc = 0x325D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D50u;
    // 0x325d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3242E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3242E0u, 0x325D50u, 0x325D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D58u;
label_325d58:
    // 0x325d58: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x325D58u;
    SET_GPR_U32(ctx, 31, 0x325D60u);
    ctx->pc = 0x325D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D58u;
    // 0x325d5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x325D58u, 0x325D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D60u;
label_325d60:
    // 0x325d60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x325d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325d64: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x325D64u;
    SET_GPR_U32(ctx, 31, 0x325D6Cu);
    ctx->pc = 0x325D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D64u;
    // 0x325d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x325D64u, 0x325D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D6Cu;
label_325d6c:
    // 0x325d6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x325d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325d70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x325d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325d78: 0x3e00008  jr          $ra
    ctx->pc = 0x325D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D78u;
        // 0x325d7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325D80u;
}
