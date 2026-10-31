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

// Function: sub_003395E8
// Address: 0x3395e8 - 0x339610
void sub_003395E8_0x3395e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003395E8_0x3395e8");
#endif

    switch (ctx->pc) {
        case 0x3395e8u: goto label_3395e8;
        case 0x3395ecu: goto label_3395ec;
        case 0x3395f0u: goto label_3395f0;
        case 0x3395f4u: goto label_3395f4;
        case 0x3395f8u: goto label_3395f8;
        case 0x3395fcu: goto label_3395fc;
        case 0x339600u: goto label_339600;
        case 0x339604u: goto label_339604;
        case 0x339608u: goto label_339608;
        case 0x33960cu: goto label_33960c;
        default: break;
    }

    ctx->pc = 0x3395e8u;

label_3395e8:
    // 0x3395e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3395e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3395ec:
    // 0x3395ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3395ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3395f0:
    // 0x3395f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3395f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3395f4:
    // 0x3395f4: 0x84650070  lh          $a1, 0x70($v1)
    ctx->pc = 0x3395f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3395f8:
    // 0x3395f8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3395f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3395fc:
    // 0x3395fc: 0x40f809  jalr        $v0
label_339600:
    if (ctx->pc == 0x339600u) {
        ctx->pc = 0x339600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3395FCu;
        // 0x339600: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339604u;
        goto label_339604;
    }
    ctx->pc = 0x3395FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339604u);
        ctx->pc = 0x339600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3395FCu;
        // 0x339600: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3395FCu, 0x339604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339604u;
label_339604:
    // 0x339604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339608:
    // 0x339608: 0x3e00008  jr          $ra
label_33960c:
    if (ctx->pc == 0x33960Cu) {
        ctx->pc = 0x33960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339608u;
        // 0x33960c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339610u;
        goto label_fallthrough_0x339608;
    }
    ctx->pc = 0x339608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339608u;
        // 0x33960c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x339608:
    ctx->pc = 0x339610u;
}
