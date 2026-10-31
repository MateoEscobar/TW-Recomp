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

// Function: sub_002EA3A0
// Address: 0x2ea3a0 - 0x2ea3c8
void sub_002EA3A0_0x2ea3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA3A0_0x2ea3a0");
#endif

    switch (ctx->pc) {
        case 0x2ea3b8u: goto label_2ea3b8;
        default: break;
    }

    ctx->pc = 0x2ea3a0u;

    // 0x2ea3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ea3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ea3a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ea3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ea3a8: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x2ea3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x2ea3ac: 0xdfa60000  ld          $a2, 0x0($sp)
    ctx->pc = 0x2ea3acu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea3b0: 0xc0a39c2  jal         func_28E708
    ctx->pc = 0x2EA3B0u;
    SET_GPR_U32(ctx, 31, 0x2EA3B8u);
    ctx->pc = 0x2EA3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA3B0u;
    // 0x2ea3b4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2EA3B0u, 0x2EA3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA3B8u;
label_2ea3b8:
    // 0x2ea3b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ea3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3BCu;
        // 0x2ea3c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA3C4u;
    // 0x2ea3c4: 0x0  nop
    ctx->pc = 0x2ea3c4u;
    // NOP
    ctx->pc = 0x2ea3c8u;
}
