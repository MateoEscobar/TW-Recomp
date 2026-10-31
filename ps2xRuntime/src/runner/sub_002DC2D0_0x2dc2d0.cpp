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

// Function: sub_002DC2D0
// Address: 0x2dc2d0 - 0x2dc2f8
void sub_002DC2D0_0x2dc2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC2D0_0x2dc2d0");
#endif

    switch (ctx->pc) {
        case 0x2dc2d0u: goto label_2dc2d0;
        case 0x2dc2d4u: goto label_2dc2d4;
        case 0x2dc2d8u: goto label_2dc2d8;
        case 0x2dc2dcu: goto label_2dc2dc;
        case 0x2dc2e0u: goto label_2dc2e0;
        case 0x2dc2e4u: goto label_2dc2e4;
        case 0x2dc2e8u: goto label_2dc2e8;
        case 0x2dc2ecu: goto label_2dc2ec;
        case 0x2dc2f0u: goto label_2dc2f0;
        case 0x2dc2f4u: goto label_2dc2f4;
        default: break;
    }

    ctx->pc = 0x2dc2d0u;

label_2dc2d0:
    // 0x2dc2d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2dc2d4:
    // 0x2dc2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dc2d8:
    // 0x2dc2d8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2dc2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2dc2dc:
    // 0x2dc2dc: 0x84430030  lh          $v1, 0x30($v0)
    ctx->pc = 0x2dc2dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2dc2e0:
    // 0x2dc2e0: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x2dc2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2dc2e4:
    // 0x2dc2e4: 0xa0f809  jalr        $a1
label_2dc2e8:
    if (ctx->pc == 0x2DC2E8u) {
        ctx->pc = 0x2DC2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2E4u;
        // 0x2dc2e8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC2ECu;
        goto label_2dc2ec;
    }
    ctx->pc = 0x2DC2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2DC2ECu);
        ctx->pc = 0x2DC2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2E4u;
        // 0x2dc2e8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC2E4u, 0x2DC2ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DC2ECu;
label_2dc2ec:
    // 0x2dc2ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dc2f0:
    // 0x2dc2f0: 0x3e00008  jr          $ra
label_2dc2f4:
    if (ctx->pc == 0x2DC2F4u) {
        ctx->pc = 0x2DC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2F0u;
        // 0x2dc2f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC2F8u;
        goto label_fallthrough_0x2dc2f0;
    }
    ctx->pc = 0x2DC2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2F0u;
        // 0x2dc2f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dc2f0:
    ctx->pc = 0x2DC2F8u;
}
