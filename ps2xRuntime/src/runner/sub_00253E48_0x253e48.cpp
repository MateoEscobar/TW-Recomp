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

// Function: sub_00253E48
// Address: 0x253e48 - 0x253e68
void sub_00253E48_0x253e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253E48_0x253e48");
#endif

    switch (ctx->pc) {
        case 0x253e50u: goto label_253e50;
        default: break;
    }

    ctx->pc = 0x253e48u;

    // 0x253e48: 0xc09501e  jal         func_254078
    ctx->pc = 0x253E48u;
    SET_GPR_U32(ctx, 31, 0x253E50u);
    ctx->pc = 0x253E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E48u;
    // 0x253e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254078u, 0x253E48u, 0x253E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E50u;
label_253e50:
    // 0x253e50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x253e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253e54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x253E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E5Cu;
        // 0x253e60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253E64u;
    // 0x253e64: 0x0  nop
    ctx->pc = 0x253e64u;
    // NOP
    ctx->pc = 0x253e68u;
}
