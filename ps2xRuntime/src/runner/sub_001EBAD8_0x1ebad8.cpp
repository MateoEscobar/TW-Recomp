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

// Function: sub_001EBAD8
// Address: 0x1ebad8 - 0x1ebaf8
void sub_001EBAD8_0x1ebad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBAD8_0x1ebad8");
#endif

    switch (ctx->pc) {
        case 0x1ebae8u: goto label_1ebae8;
        default: break;
    }

    ctx->pc = 0x1ebad8u;

    // 0x1ebad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ebad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ebadc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ebadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ebae0: 0xc07ac32  jal         func_1EB0C8
    ctx->pc = 0x1EBAE0u;
    SET_GPR_U32(ctx, 31, 0x1EBAE8u);
    ctx->pc = 0x1EBAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBAE0u;
    // 0x1ebae4: 0xac850070  sw          $a1, 0x70($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB0C8u, 0x1EBAE0u, 0x1EBAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBAE8u;
label_1ebae8:
    // 0x1ebae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebaec: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAECu;
        // 0x1ebaf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBAF4u;
    // 0x1ebaf4: 0x0  nop
    ctx->pc = 0x1ebaf4u;
    // NOP
    ctx->pc = 0x1ebaf8u;
}
