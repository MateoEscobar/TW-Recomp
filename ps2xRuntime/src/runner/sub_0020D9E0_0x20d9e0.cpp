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

// Function: sub_0020D9E0
// Address: 0x20d9e0 - 0x20da08
void sub_0020D9E0_0x20d9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D9E0_0x20d9e0");
#endif

    switch (ctx->pc) {
        case 0x20d9e0u: goto label_20d9e0;
        case 0x20d9e4u: goto label_20d9e4;
        case 0x20d9e8u: goto label_20d9e8;
        case 0x20d9ecu: goto label_20d9ec;
        case 0x20d9f0u: goto label_20d9f0;
        case 0x20d9f4u: goto label_20d9f4;
        case 0x20d9f8u: goto label_20d9f8;
        case 0x20d9fcu: goto label_20d9fc;
        case 0x20da00u: goto label_20da00;
        case 0x20da04u: goto label_20da04;
        default: break;
    }

    ctx->pc = 0x20d9e0u;

label_20d9e0:
    // 0x20d9e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20d9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20d9e4:
    // 0x20d9e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20d9e8:
    // 0x20d9e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20d9ec:
    // 0x20d9ec: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x20d9ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20d9f0:
    // 0x20d9f0: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x20d9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20d9f4:
    // 0x20d9f4: 0xa0f809  jalr        $a1
label_20d9f8:
    if (ctx->pc == 0x20D9F8u) {
        ctx->pc = 0x20D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9F4u;
        // 0x20d9f8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D9FCu;
        goto label_20d9fc;
    }
    ctx->pc = 0x20D9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20D9FCu);
        ctx->pc = 0x20D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9F4u;
        // 0x20d9f8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D9F4u, 0x20D9FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D9FCu;
label_20d9fc:
    // 0x20d9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20da00:
    // 0x20da00: 0x3e00008  jr          $ra
label_20da04:
    if (ctx->pc == 0x20DA04u) {
        ctx->pc = 0x20DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA00u;
        // 0x20da04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DA08u;
        goto label_fallthrough_0x20da00;
    }
    ctx->pc = 0x20DA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA00u;
        // 0x20da04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20da00:
    ctx->pc = 0x20DA08u;
}
