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

// Function: sub_004827D8
// Address: 0x4827d8 - 0x4827f8
void sub_004827D8_0x4827d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004827D8_0x4827d8");
#endif

    switch (ctx->pc) {
        case 0x4827d8u: goto label_4827d8;
        case 0x4827dcu: goto label_4827dc;
        case 0x4827e0u: goto label_4827e0;
        case 0x4827e4u: goto label_4827e4;
        case 0x4827e8u: goto label_4827e8;
        case 0x4827ecu: goto label_4827ec;
        case 0x4827f0u: goto label_4827f0;
        case 0x4827f4u: goto label_4827f4;
        default: break;
    }

    ctx->pc = 0x4827d8u;

label_4827d8:
    // 0x4827d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4827d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4827dc:
    // 0x4827dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4827dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4827e0:
    // 0x4827e0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x4827e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4827e4:
    // 0x4827e4: 0x40f809  jalr        $v0
label_4827e8:
    if (ctx->pc == 0x4827E8u) {
        ctx->pc = 0x4827ECu;
        goto label_4827ec;
    }
    ctx->pc = 0x4827E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4827ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4827E4u, 0x4827ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4827ECu;
label_4827ec:
    // 0x4827ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4827ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4827f0:
    // 0x4827f0: 0x3e00008  jr          $ra
label_4827f4:
    if (ctx->pc == 0x4827F4u) {
        ctx->pc = 0x4827F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4827F0u;
        // 0x4827f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4827F8u;
        goto label_fallthrough_0x4827f0;
    }
    ctx->pc = 0x4827F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4827F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4827F0u;
        // 0x4827f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4827F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4827f0:
    ctx->pc = 0x4827F8u;
}
