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

// Function: sub_004B7938
// Address: 0x4b7938 - 0x4b7958
void sub_004B7938_0x4b7938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7938_0x4b7938");
#endif

    switch (ctx->pc) {
        case 0x4b7948u: goto label_4b7948;
        default: break;
    }

    ctx->pc = 0x4b7938u;

    // 0x4b7938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b7938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b793c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b793cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b7940: 0xc10f5e4  jal         func_43D790
    ctx->pc = 0x4B7940u;
    SET_GPR_U32(ctx, 31, 0x4B7948u);
    ctx->pc = 0x4B7944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7940u;
    // 0x4b7944: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D790u, 0x4B7940u, 0x4B7948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7948u;
label_4b7948:
    // 0x4b7948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b7948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b794c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B794Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B794Cu;
        // 0x4b7950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B794Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7954u;
    // 0x4b7954: 0x0  nop
    ctx->pc = 0x4b7954u;
    // NOP
    ctx->pc = 0x4b7958u;
}
