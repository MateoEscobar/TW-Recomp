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

// Function: sub_0031AFF8
// Address: 0x31aff8 - 0x31b030
void sub_0031AFF8_0x31aff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AFF8_0x31aff8");
#endif

    switch (ctx->pc) {
        case 0x31b010u: goto label_31b010;
        case 0x31b020u: goto label_31b020;
        default: break;
    }

    ctx->pc = 0x31aff8u;

    // 0x31aff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31aff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31affc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31affcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31b000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31b000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31b004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31b004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b008: 0xc05a526  jal         func_169498
    ctx->pc = 0x31B008u;
    SET_GPR_U32(ctx, 31, 0x31B010u);
    ctx->pc = 0x31B00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B008u;
    // 0x31b00c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169498u, 0x31B008u, 0x31B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B010u;
label_31b010:
    // 0x31b010: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31b010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b014: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x31b014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x31b018: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x31B018u;
    SET_GPR_U32(ctx, 31, 0x31B020u);
    ctx->pc = 0x31B01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B018u;
    // 0x31b01c: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x31B018u, 0x31B020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B020u;
label_31b020:
    // 0x31b020: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31b020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31b024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b028: 0x3e00008  jr          $ra
    ctx->pc = 0x31B028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B028u;
        // 0x31b02c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B030u;
}
