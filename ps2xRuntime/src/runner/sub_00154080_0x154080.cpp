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

// Function: sub_00154080
// Address: 0x154080 - 0x1540b0
void sub_00154080_0x154080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154080_0x154080");
#endif

    switch (ctx->pc) {
        case 0x154080u: goto label_154080;
        case 0x154084u: goto label_154084;
        case 0x154088u: goto label_154088;
        case 0x15408cu: goto label_15408c;
        case 0x154090u: goto label_154090;
        case 0x154094u: goto label_154094;
        case 0x154098u: goto label_154098;
        case 0x15409cu: goto label_15409c;
        case 0x1540a0u: goto label_1540a0;
        case 0x1540a4u: goto label_1540a4;
        case 0x1540a8u: goto label_1540a8;
        case 0x1540acu: goto label_1540ac;
        default: break;
    }

    ctx->pc = 0x154080u;

label_154080:
    // 0x154080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_154084:
    // 0x154084: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x154084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_154088:
    // 0x154088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15408c:
    // 0x15408c: 0x8c860048  lw          $a2, 0x48($a0)
    ctx->pc = 0x15408cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_154090:
    // 0x154090: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x154090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_154094:
    // 0x154094: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x154094u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_154098:
    // 0x154098: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x154098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_15409c:
    // 0x15409c: 0x40f809  jalr        $v0
label_1540a0:
    if (ctx->pc == 0x1540A0u) {
        ctx->pc = 0x1540A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15409Cu;
        // 0x1540a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1540A4u;
        goto label_1540a4;
    }
    ctx->pc = 0x15409Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1540A4u);
        ctx->pc = 0x1540A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15409Cu;
        // 0x1540a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15409Cu, 0x1540A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1540A4u;
label_1540a4:
    // 0x1540a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1540a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1540a8:
    // 0x1540a8: 0x3e00008  jr          $ra
label_1540ac:
    if (ctx->pc == 0x1540ACu) {
        ctx->pc = 0x1540ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540A8u;
        // 0x1540ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1540B0u;
        goto label_fallthrough_0x1540a8;
    }
    ctx->pc = 0x1540A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1540ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540A8u;
        // 0x1540ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1540A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1540a8:
    ctx->pc = 0x1540B0u;
}
