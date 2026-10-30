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

// Function: sub_0032CEF0
// Address: 0x32cef0 - 0x32cf40
void sub_0032CEF0_0x32cef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CEF0_0x32cef0");
#endif

    switch (ctx->pc) {
        case 0x32cf1cu: goto label_32cf1c;
        case 0x32cf28u: goto label_32cf28;
        default: break;
    }

    ctx->pc = 0x32cef0u;

    // 0x32cef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32cef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32cef4: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x32cef4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x32cef8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32cef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32cefc: 0x24c65c30  addiu       $a2, $a2, 0x5C30
    ctx->pc = 0x32cefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23600));
    // 0x32cf00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32cf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32cf04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32cf04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cf08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32cf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32cf0c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x32cf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32cf10: 0x38a50113  xori        $a1, $a1, 0x113
    ctx->pc = 0x32cf10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)275);
    // 0x32cf14: 0xc0cb344  jal         func_32CD10
    ctx->pc = 0x32CF14u;
    SET_GPR_U32(ctx, 31, 0x32CF1Cu);
    ctx->pc = 0x32CF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CF14u;
    // 0x32cf18: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD10u, 0x32CF14u, 0x32CF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF1Cu;
label_32cf1c:
    // 0x32cf1c: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x32cf1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32cf20: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32CF20u;
    SET_GPR_U32(ctx, 31, 0x32CF28u);
    ctx->pc = 0x32CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CF20u;
    // 0x32cf24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32CF20u, 0x32CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF28u;
label_32cf28:
    // 0x32cf28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32cf28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cf2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32cf2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32cf30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32cf30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cf34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32cf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cf38: 0x3e00008  jr          $ra
    ctx->pc = 0x32CF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CF38u;
        // 0x32cf3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CF40u;
}
