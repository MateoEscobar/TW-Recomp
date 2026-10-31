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

// Function: sub_00292C68
// Address: 0x292c68 - 0x292ca8
void sub_00292C68_0x292c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292C68_0x292c68");
#endif

    switch (ctx->pc) {
        case 0x292c7cu: goto label_292c7c;
        case 0x292c84u: goto label_292c84;
        case 0x292c94u: goto label_292c94;
        default: break;
    }

    ctx->pc = 0x292c68u;

    // 0x292c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x292c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x292c6c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292c70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292c74: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292C74u;
    SET_GPR_U32(ctx, 31, 0x292C7Cu);
    ctx->pc = 0x292C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C74u;
    // 0x292c78: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292C74u, 0x292C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C7Cu;
label_292c7c:
    // 0x292c7c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x292C7Cu;
    SET_GPR_U32(ctx, 31, 0x292C84u);
    ctx->pc = 0x292C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C7Cu;
    // 0x292c80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x292C7Cu, 0x292C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C84u;
label_292c84:
    // 0x292c84: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x292C84u;
    {
        const bool branch_taken_0x292c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292c84) {
            ctx->pc = 0x292C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292C84u;
            // 0x292c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292C9Cu;
            goto label_292c9c;
        }
    }
    ctx->pc = 0x292C8Cu;
    // 0x292c8c: 0xc087502  jal         func_21D408
    ctx->pc = 0x292C8Cu;
    SET_GPR_U32(ctx, 31, 0x292C94u);
    ctx->pc = 0x292C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C8Cu;
    // 0x292c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x292C8Cu, 0x292C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C94u;
label_292c94:
    // 0x292c94: 0x90420152  lbu         $v0, 0x152($v0)
    ctx->pc = 0x292c94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 338)));
    // 0x292c98: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x292c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_292c9c:
    // 0x292c9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x292CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292CA0u;
        // 0x292ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292CA8u;
}
