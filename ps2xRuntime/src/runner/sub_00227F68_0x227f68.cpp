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

// Function: sub_00227F68
// Address: 0x227f68 - 0x227f90
void sub_00227F68_0x227f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227F68_0x227f68");
#endif

    switch (ctx->pc) {
        case 0x227f80u: goto label_227f80;
        default: break;
    }

    ctx->pc = 0x227f68u;

    // 0x227f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227f6c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x227f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x227f70: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x227f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x227f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227f78: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x227F78u;
    SET_GPR_U32(ctx, 31, 0x227F80u);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x227F78u, 0x227F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F80u;
label_227f80:
    // 0x227f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227f84: 0x3e00008  jr          $ra
    ctx->pc = 0x227F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F84u;
        // 0x227f88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227F8Cu;
    // 0x227f8c: 0x0  nop
    ctx->pc = 0x227f8cu;
    // NOP
    ctx->pc = 0x227f90u;
}
