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

// Function: sub_003DA910
// Address: 0x3da910 - 0x3da940
void sub_003DA910_0x3da910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA910_0x3da910");
#endif

    switch (ctx->pc) {
        case 0x3da910u: goto label_3da910;
        case 0x3da914u: goto label_3da914;
        case 0x3da918u: goto label_3da918;
        case 0x3da91cu: goto label_3da91c;
        case 0x3da920u: goto label_3da920;
        case 0x3da924u: goto label_3da924;
        case 0x3da928u: goto label_3da928;
        case 0x3da92cu: goto label_3da92c;
        case 0x3da930u: goto label_3da930;
        case 0x3da934u: goto label_3da934;
        case 0x3da938u: goto label_3da938;
        case 0x3da93cu: goto label_3da93c;
        default: break;
    }

    ctx->pc = 0x3da910u;

label_3da910:
    // 0x3da910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3da910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3da914:
    // 0x3da914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3da914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3da918:
    // 0x3da918: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3da918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3da91c:
    // 0x3da91c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3da91cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3da920:
    // 0x3da920: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3da920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3da924:
    // 0x3da924: 0x40f809  jalr        $v0
label_3da928:
    if (ctx->pc == 0x3DA928u) {
        ctx->pc = 0x3DA928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA924u;
        // 0x3da928: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA92Cu;
        goto label_3da92c;
    }
    ctx->pc = 0x3DA924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DA92Cu);
        ctx->pc = 0x3DA928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA924u;
        // 0x3da928: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA924u, 0x3DA92Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DA92Cu;
label_3da92c:
    // 0x3da92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3da92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3da930:
    // 0x3da930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3da930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3da934:
    // 0x3da934: 0x3e00008  jr          $ra
label_3da938:
    if (ctx->pc == 0x3DA938u) {
        ctx->pc = 0x3DA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA934u;
        // 0x3da938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA93Cu;
        goto label_3da93c;
    }
    ctx->pc = 0x3DA934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA934u;
        // 0x3da938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA93Cu;
label_3da93c:
    // 0x3da93c: 0x0  nop
    ctx->pc = 0x3da93cu;
    // NOP
    ctx->pc = 0x3da940u;
}
