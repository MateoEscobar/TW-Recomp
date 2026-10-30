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

// Function: sub_001CCFC0
// Address: 0x1ccfc0 - 0x1ccff0
void sub_001CCFC0_0x1ccfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCFC0_0x1ccfc0");
#endif

    switch (ctx->pc) {
        case 0x1ccfe4u: goto label_1ccfe4;
        default: break;
    }

    ctx->pc = 0x1ccfc0u;

    // 0x1ccfc0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ccfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1ccfc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccfc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccfc8: 0x2442ae78  addiu       $v0, $v0, -0x5188
    ctx->pc = 0x1ccfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946424));
    // 0x1ccfcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccfd0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1ccfd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1ccfd4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCFD4u;
    {
        const bool branch_taken_0x1ccfd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFD4u;
        // 0x1ccfd8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfd4) {
            ctx->pc = 0x1CCFE4u;
            goto label_1ccfe4;
        }
    }
    ctx->pc = 0x1CCFDCu;
    // 0x1ccfdc: 0xc10b208  jal         func_42C820
    ctx->pc = 0x1CCFDCu;
    SET_GPR_U32(ctx, 31, 0x1CCFE4u);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x1CCFDCu, 0x1CCFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFE4u;
label_1ccfe4:
    // 0x1ccfe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFE8u;
        // 0x1ccfec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCFF0u;
}
