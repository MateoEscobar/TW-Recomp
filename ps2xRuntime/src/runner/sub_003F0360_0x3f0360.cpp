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

// Function: sub_003F0360
// Address: 0x3f0360 - 0x3f0388
void sub_003F0360_0x3f0360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0360_0x3f0360");
#endif

    switch (ctx->pc) {
        case 0x3f0360u: goto label_3f0360;
        case 0x3f0364u: goto label_3f0364;
        case 0x3f0368u: goto label_3f0368;
        case 0x3f036cu: goto label_3f036c;
        case 0x3f0370u: goto label_3f0370;
        case 0x3f0374u: goto label_3f0374;
        case 0x3f0378u: goto label_3f0378;
        case 0x3f037cu: goto label_3f037c;
        case 0x3f0380u: goto label_3f0380;
        case 0x3f0384u: goto label_3f0384;
        default: break;
    }

    ctx->pc = 0x3f0360u;

label_3f0360:
    // 0x3f0360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f0360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3f0364:
    // 0x3f0364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f0364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f0368:
    // 0x3f0368: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f0368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f036c:
    // 0x3f036c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3f036cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f0370:
    // 0x3f0370: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f0370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f0374:
    // 0x3f0374: 0x40f809  jalr        $v0
label_3f0378:
    if (ctx->pc == 0x3F0378u) {
        ctx->pc = 0x3F0378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0374u;
        // 0x3f0378: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F037Cu;
        goto label_3f037c;
    }
    ctx->pc = 0x3F0374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F037Cu);
        ctx->pc = 0x3F0378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0374u;
        // 0x3f0378: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0374u, 0x3F037Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F037Cu;
label_3f037c:
    // 0x3f037c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f037cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f0380:
    // 0x3f0380: 0x3e00008  jr          $ra
label_3f0384:
    if (ctx->pc == 0x3F0384u) {
        ctx->pc = 0x3F0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0380u;
        // 0x3f0384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0388u;
        goto label_fallthrough_0x3f0380;
    }
    ctx->pc = 0x3F0380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0380u;
        // 0x3f0384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f0380:
    ctx->pc = 0x3F0388u;
}
