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

// Function: sub_004EF4F0
// Address: 0x4ef4f0 - 0x4ef520
void sub_004EF4F0_0x4ef4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF4F0_0x4ef4f0");
#endif

    switch (ctx->pc) {
        case 0x4ef4f0u: goto label_4ef4f0;
        case 0x4ef4f4u: goto label_4ef4f4;
        case 0x4ef4f8u: goto label_4ef4f8;
        case 0x4ef4fcu: goto label_4ef4fc;
        case 0x4ef500u: goto label_4ef500;
        case 0x4ef504u: goto label_4ef504;
        case 0x4ef508u: goto label_4ef508;
        case 0x4ef50cu: goto label_4ef50c;
        case 0x4ef510u: goto label_4ef510;
        case 0x4ef514u: goto label_4ef514;
        case 0x4ef518u: goto label_4ef518;
        case 0x4ef51cu: goto label_4ef51c;
        default: break;
    }

    ctx->pc = 0x4ef4f0u;

label_4ef4f0:
    // 0x4ef4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ef4f4:
    // 0x4ef4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ef4f8:
    // 0x4ef4f8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4ef4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4ef4fc:
    // 0x4ef4fc: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4ef4fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4ef500:
    // 0x4ef500: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4ef500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ef504:
    // 0x4ef504: 0x40f809  jalr        $v0
label_4ef508:
    if (ctx->pc == 0x4EF508u) {
        ctx->pc = 0x4EF508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF504u;
        // 0x4ef508: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF50Cu;
        goto label_4ef50c;
    }
    ctx->pc = 0x4EF504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EF50Cu);
        ctx->pc = 0x4EF508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF504u;
        // 0x4ef508: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF504u, 0x4EF50Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EF50Cu;
label_4ef50c:
    // 0x4ef50c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef510:
    // 0x4ef510: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4ef510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4ef514:
    // 0x4ef514: 0x3e00008  jr          $ra
label_4ef518:
    if (ctx->pc == 0x4EF518u) {
        ctx->pc = 0x4EF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF514u;
        // 0x4ef518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF51Cu;
        goto label_4ef51c;
    }
    ctx->pc = 0x4EF514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF514u;
        // 0x4ef518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF51Cu;
label_4ef51c:
    // 0x4ef51c: 0x0  nop
    ctx->pc = 0x4ef51cu;
    // NOP
    ctx->pc = 0x4ef520u;
}
