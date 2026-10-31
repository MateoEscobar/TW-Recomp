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

// Function: sub_00120A68
// Address: 0x120a68 - 0x120a98
void sub_00120A68_0x120a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120A68_0x120a68");
#endif

    switch (ctx->pc) {
        case 0x120a7cu: goto label_120a7c;
        case 0x120a84u: goto label_120a84;
        default: break;
    }

    ctx->pc = 0x120a68u;

    // 0x120a68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x120a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x120a6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x120a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x120a70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x120a74: 0xc0485c8  jal         func_121720
    ctx->pc = 0x120A74u;
    SET_GPR_U32(ctx, 31, 0x120A7Cu);
    ctx->pc = 0x120A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A74u;
    // 0x120a78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121720u, 0x120A74u, 0x120A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A7Cu;
label_120a7c:
    // 0x120a7c: 0xc048622  jal         func_121888
    ctx->pc = 0x120A7Cu;
    SET_GPR_U32(ctx, 31, 0x120A84u);
    ctx->pc = 0x120A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A7Cu;
    // 0x120a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121888u, 0x120A7Cu, 0x120A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A84u;
label_120a84:
    // 0x120a84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x120a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120a88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x120A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A8Cu;
        // 0x120a90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120A94u;
    // 0x120a94: 0x0  nop
    ctx->pc = 0x120a94u;
    // NOP
    ctx->pc = 0x120a98u;
}
