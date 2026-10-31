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

// Function: sub_003CC858
// Address: 0x3cc858 - 0x3cc888
void sub_003CC858_0x3cc858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC858_0x3cc858");
#endif

    switch (ctx->pc) {
        case 0x3cc858u: goto label_3cc858;
        case 0x3cc85cu: goto label_3cc85c;
        case 0x3cc860u: goto label_3cc860;
        case 0x3cc864u: goto label_3cc864;
        case 0x3cc868u: goto label_3cc868;
        case 0x3cc86cu: goto label_3cc86c;
        case 0x3cc870u: goto label_3cc870;
        case 0x3cc874u: goto label_3cc874;
        case 0x3cc878u: goto label_3cc878;
        case 0x3cc87cu: goto label_3cc87c;
        case 0x3cc880u: goto label_3cc880;
        case 0x3cc884u: goto label_3cc884;
        default: break;
    }

    ctx->pc = 0x3cc858u;

label_3cc858:
    // 0x3cc858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3cc858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3cc85c:
    // 0x3cc85c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cc85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3cc860:
    // 0x3cc860: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3cc860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cc864:
    // 0x3cc864: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3cc864u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3cc868:
    // 0x3cc868: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3cc868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3cc86c:
    // 0x3cc86c: 0x40f809  jalr        $v0
label_3cc870:
    if (ctx->pc == 0x3CC870u) {
        ctx->pc = 0x3CC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC86Cu;
        // 0x3cc870: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC874u;
        goto label_3cc874;
    }
    ctx->pc = 0x3CC86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC874u);
        ctx->pc = 0x3CC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC86Cu;
        // 0x3cc870: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC86Cu, 0x3CC874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC874u;
label_3cc874:
    // 0x3cc874: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3cc874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3cc878:
    // 0x3cc878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cc878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3cc87c:
    // 0x3cc87c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3cc87cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3cc880:
    // 0x3cc880: 0x3e00008  jr          $ra
label_3cc884:
    if (ctx->pc == 0x3CC884u) {
        ctx->pc = 0x3CC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC880u;
        // 0x3cc884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC888u;
        goto label_fallthrough_0x3cc880;
    }
    ctx->pc = 0x3CC880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC880u;
        // 0x3cc884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3cc880:
    ctx->pc = 0x3CC888u;
}
