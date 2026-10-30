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

// Function: sub_00370C68
// Address: 0x370c68 - 0x370ca0
void sub_00370C68_0x370c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370C68_0x370c68");
#endif

    switch (ctx->pc) {
        case 0x370c7cu: goto label_370c7c;
        case 0x370c84u: goto label_370c84;
        case 0x370c8cu: goto label_370c8c;
        default: break;
    }

    ctx->pc = 0x370c68u;

    // 0x370c68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370c6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370c74: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370C74u;
    SET_GPR_U32(ctx, 31, 0x370C7Cu);
    ctx->pc = 0x370C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C74u;
    // 0x370c78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370C74u, 0x370C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C7Cu;
label_370c7c:
    // 0x370c7c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x370C7Cu;
    SET_GPR_U32(ctx, 31, 0x370C84u);
    ctx->pc = 0x370C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C7Cu;
    // 0x370c80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x370C7Cu, 0x370C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C84u;
label_370c84:
    // 0x370c84: 0xc06cfb2  jal         func_1B3EC8
    ctx->pc = 0x370C84u;
    SET_GPR_U32(ctx, 31, 0x370C8Cu);
    ctx->pc = 0x370C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C84u;
    // 0x370c88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3EC8u, 0x370C84u, 0x370C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C8Cu;
label_370c8c:
    // 0x370c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370c90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370c94: 0x3e00008  jr          $ra
    ctx->pc = 0x370C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C94u;
        // 0x370c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370C9Cu;
    // 0x370c9c: 0x0  nop
    ctx->pc = 0x370c9cu;
    // NOP
    ctx->pc = 0x370ca0u;
}
