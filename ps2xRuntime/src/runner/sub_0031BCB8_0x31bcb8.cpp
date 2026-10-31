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

// Function: sub_0031BCB8
// Address: 0x31bcb8 - 0x31bcd0
void sub_0031BCB8_0x31bcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BCB8_0x31bcb8");
#endif

    switch (ctx->pc) {
        case 0x31bcbcu: goto label_31bcbc;
        default: break;
    }

    ctx->pc = 0x31bcb8u;

    // 0x31bcb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31bcb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31bcbc:
    // 0x31bcbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31bcbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31bcc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31bcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31bcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x31BCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BCC4u;
        // 0x31bcc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BCCCu;
    // 0x31bccc: 0x0  nop
    ctx->pc = 0x31bcccu;
    // NOP
    ctx->pc = 0x31bcd0u;
}
