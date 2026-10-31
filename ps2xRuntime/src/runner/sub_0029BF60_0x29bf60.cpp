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

// Function: sub_0029BF60
// Address: 0x29bf60 - 0x29bf98
void sub_0029BF60_0x29bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BF60_0x29bf60");
#endif

    switch (ctx->pc) {
        case 0x29bf74u: goto label_29bf74;
        case 0x29bf80u: goto label_29bf80;
        default: break;
    }

    ctx->pc = 0x29bf60u;

    // 0x29bf60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29bf64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29bf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29bf68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29bf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29bf6c: 0xc087502  jal         func_21D408
    ctx->pc = 0x29BF6Cu;
    SET_GPR_U32(ctx, 31, 0x29BF74u);
    ctx->pc = 0x29BF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF6Cu;
    // 0x29bf70: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29BF6Cu, 0x29BF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF74u;
label_29bf74:
    // 0x29bf74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29bf74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf78: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x29BF78u;
    SET_GPR_U32(ctx, 31, 0x29BF80u);
    ctx->pc = 0x29BF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF78u;
    // 0x29bf7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x29BF78u, 0x29BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF80u;
label_29bf80:
    // 0x29bf80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29bf80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bf84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29bf84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29bf88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29bf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bf8c: 0x3e00008  jr          $ra
    ctx->pc = 0x29BF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BF8Cu;
        // 0x29bf90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BF94u;
    // 0x29bf94: 0x0  nop
    ctx->pc = 0x29bf94u;
    // NOP
    ctx->pc = 0x29bf98u;
}
