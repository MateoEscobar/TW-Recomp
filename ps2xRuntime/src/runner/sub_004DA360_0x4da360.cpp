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

// Function: sub_004DA360
// Address: 0x4da360 - 0x4da388
void sub_004DA360_0x4da360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA360_0x4da360");
#endif

    switch (ctx->pc) {
        case 0x4da360u: goto label_4da360;
        case 0x4da364u: goto label_4da364;
        case 0x4da368u: goto label_4da368;
        case 0x4da36cu: goto label_4da36c;
        case 0x4da370u: goto label_4da370;
        case 0x4da374u: goto label_4da374;
        case 0x4da378u: goto label_4da378;
        case 0x4da37cu: goto label_4da37c;
        case 0x4da380u: goto label_4da380;
        case 0x4da384u: goto label_4da384;
        default: break;
    }

    ctx->pc = 0x4da360u;

label_4da360:
    // 0x4da360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4da360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4da364:
    // 0x4da364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4da364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4da368:
    // 0x4da368: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4da368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4da36c:
    // 0x4da36c: 0x844300c0  lh          $v1, 0xC0($v0)
    ctx->pc = 0x4da36cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_4da370:
    // 0x4da370: 0x8c4500c4  lw          $a1, 0xC4($v0)
    ctx->pc = 0x4da370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_4da374:
    // 0x4da374: 0xa0f809  jalr        $a1
label_4da378:
    if (ctx->pc == 0x4DA378u) {
        ctx->pc = 0x4DA378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA374u;
        // 0x4da378: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA37Cu;
        goto label_4da37c;
    }
    ctx->pc = 0x4DA374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x4DA37Cu);
        ctx->pc = 0x4DA378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA374u;
        // 0x4da378: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA374u, 0x4DA37Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DA37Cu;
label_4da37c:
    // 0x4da37c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4da37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4da380:
    // 0x4da380: 0x3e00008  jr          $ra
label_4da384:
    if (ctx->pc == 0x4DA384u) {
        ctx->pc = 0x4DA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA380u;
        // 0x4da384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DA388u;
        goto label_fallthrough_0x4da380;
    }
    ctx->pc = 0x4DA380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA380u;
        // 0x4da384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4da380:
    ctx->pc = 0x4DA388u;
}
