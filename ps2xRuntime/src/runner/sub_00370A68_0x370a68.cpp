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

// Function: sub_00370A68
// Address: 0x370a68 - 0x370aa0
void sub_00370A68_0x370a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370A68_0x370a68");
#endif

    switch (ctx->pc) {
        case 0x370a7cu: goto label_370a7c;
        case 0x370a84u: goto label_370a84;
        case 0x370a8cu: goto label_370a8c;
        default: break;
    }

    ctx->pc = 0x370a68u;

    // 0x370a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370a6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370a70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370a74: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370A74u;
    SET_GPR_U32(ctx, 31, 0x370A7Cu);
    ctx->pc = 0x370A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370A74u;
    // 0x370a78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370A74u, 0x370A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A7Cu;
label_370a7c:
    // 0x370a7c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x370A7Cu;
    SET_GPR_U32(ctx, 31, 0x370A84u);
    ctx->pc = 0x370A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370A7Cu;
    // 0x370a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x370A7Cu, 0x370A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A84u;
label_370a84:
    // 0x370a84: 0xc06d05a  jal         func_1B4168
    ctx->pc = 0x370A84u;
    SET_GPR_U32(ctx, 31, 0x370A8Cu);
    ctx->pc = 0x370A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370A84u;
    // 0x370a88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4168u, 0x370A84u, 0x370A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A8Cu;
label_370a8c:
    // 0x370a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370a90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370a94: 0x3e00008  jr          $ra
    ctx->pc = 0x370A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A94u;
        // 0x370a98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370A9Cu;
    // 0x370a9c: 0x0  nop
    ctx->pc = 0x370a9cu;
    // NOP
    ctx->pc = 0x370aa0u;
}
