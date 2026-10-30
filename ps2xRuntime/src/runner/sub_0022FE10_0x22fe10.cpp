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

// Function: sub_0022FE10
// Address: 0x22fe10 - 0x22fe48
void sub_0022FE10_0x22fe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FE10_0x22fe10");
#endif

    switch (ctx->pc) {
        case 0x22fe28u: goto label_22fe28;
        case 0x22fe38u: goto label_22fe38;
        default: break;
    }

    ctx->pc = 0x22fe10u;

    // 0x22fe10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22fe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22fe14: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x22fe14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x22fe18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22fe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22fe1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22fe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22fe20: 0xc089988  jal         func_226620
    ctx->pc = 0x22FE20u;
    SET_GPR_U32(ctx, 31, 0x22FE28u);
    ctx->pc = 0x22FE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE20u;
    // 0x22fe24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22FE20u, 0x22FE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE28u;
label_22fe28:
    // 0x22fe28: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x22fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x22fe2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fe2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe30: 0xc086b6c  jal         func_21ADB0
    ctx->pc = 0x22FE30u;
    SET_GPR_U32(ctx, 31, 0x22FE38u);
    ctx->pc = 0x22FE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE30u;
    // 0x22fe34: 0xac40010c  sw          $zero, 0x10C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ADB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21ADB0u, 0x22FE30u, 0x22FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE38u;
label_22fe38:
    // 0x22fe38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22fe38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fe3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22fe3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fe40: 0x3e00008  jr          $ra
    ctx->pc = 0x22FE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE40u;
        // 0x22fe44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FE48u;
}
