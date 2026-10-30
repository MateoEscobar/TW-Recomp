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

// Function: sub_00268E50
// Address: 0x268e50 - 0x268ea8
void sub_00268E50_0x268e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268E50_0x268e50");
#endif

    switch (ctx->pc) {
        case 0x268e70u: goto label_268e70;
        case 0x268e88u: goto label_268e88;
        case 0x268e94u: goto label_268e94;
        default: break;
    }

    ctx->pc = 0x268e50u;

    // 0x268e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x268e54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x268e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x268e58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x268e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x268e5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x268e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268e64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x268e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e68: 0xc0e409a  jal         func_390268
    ctx->pc = 0x268E68u;
    SET_GPR_U32(ctx, 31, 0x268E70u);
    ctx->pc = 0x268E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E68u;
    // 0x268e6c: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x268E68u, 0x268E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E70u;
label_268e70:
    // 0x268e70: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x268e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x268e74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x268e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x268e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e80: 0xc08b3ae  jal         func_22CEB8
    ctx->pc = 0x268E80u;
    SET_GPR_U32(ctx, 31, 0x268E88u);
    ctx->pc = 0x268E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E80u;
    // 0x268e84: 0xa4600118  sh          $zero, 0x118($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB8u, 0x268E80u, 0x268E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E88u;
label_268e88:
    // 0x268e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e8c: 0xc09a234  jal         func_2688D0
    ctx->pc = 0x268E8Cu;
    SET_GPR_U32(ctx, 31, 0x268E94u);
    ctx->pc = 0x268E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E8Cu;
    // 0x268e90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2688D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2688D0u, 0x268E8Cu, 0x268E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E94u;
label_268e94:
    // 0x268e94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x268e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268e98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x268EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EA0u;
        // 0x268ea4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268EA8u;
}
