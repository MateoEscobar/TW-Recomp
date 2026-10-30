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

// Function: sub_00422380
// Address: 0x422380 - 0x4223b0
void sub_00422380_0x422380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422380_0x422380");
#endif

    switch (ctx->pc) {
        case 0x422380u: goto label_422380;
        case 0x422384u: goto label_422384;
        case 0x422388u: goto label_422388;
        case 0x42238cu: goto label_42238c;
        case 0x422390u: goto label_422390;
        case 0x422394u: goto label_422394;
        case 0x422398u: goto label_422398;
        case 0x42239cu: goto label_42239c;
        case 0x4223a0u: goto label_4223a0;
        case 0x4223a4u: goto label_4223a4;
        case 0x4223a8u: goto label_4223a8;
        case 0x4223acu: goto label_4223ac;
        default: break;
    }

    ctx->pc = 0x422380u;

label_422380:
    // 0x422380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x422380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_422384:
    // 0x422384: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x422384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_422388:
    // 0x422388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x422388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_42238c:
    // 0x42238c: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x42238cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_422390:
    // 0x422390: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x422390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_422394:
    // 0x422394: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x422394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_422398:
    // 0x422398: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x422398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_42239c:
    // 0x42239c: 0x40f809  jalr        $v0
label_4223a0:
    if (ctx->pc == 0x4223A0u) {
        ctx->pc = 0x4223A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42239Cu;
        // 0x4223a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4223A4u;
        goto label_4223a4;
    }
    ctx->pc = 0x42239Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4223A4u);
        ctx->pc = 0x4223A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42239Cu;
        // 0x4223a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42239Cu, 0x4223A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4223A4u;
label_4223a4:
    // 0x4223a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4223a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4223a8:
    // 0x4223a8: 0x3e00008  jr          $ra
label_4223ac:
    if (ctx->pc == 0x4223ACu) {
        ctx->pc = 0x4223ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4223A8u;
        // 0x4223ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4223B0u;
        goto label_fallthrough_0x4223a8;
    }
    ctx->pc = 0x4223A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4223ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4223A8u;
        // 0x4223ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4223A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4223a8:
    ctx->pc = 0x4223B0u;
}
