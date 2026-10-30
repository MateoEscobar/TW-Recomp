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

// Function: sub_0020A510
// Address: 0x20a510 - 0x20a538
void sub_0020A510_0x20a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A510_0x20a510");
#endif

    switch (ctx->pc) {
        case 0x20a510u: goto label_20a510;
        case 0x20a514u: goto label_20a514;
        case 0x20a518u: goto label_20a518;
        case 0x20a51cu: goto label_20a51c;
        case 0x20a520u: goto label_20a520;
        case 0x20a524u: goto label_20a524;
        case 0x20a528u: goto label_20a528;
        case 0x20a52cu: goto label_20a52c;
        case 0x20a530u: goto label_20a530;
        case 0x20a534u: goto label_20a534;
        default: break;
    }

    ctx->pc = 0x20a510u;

label_20a510:
    // 0x20a510: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20a514:
    // 0x20a514: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20a514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20a518:
    // 0x20a518: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20a518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20a51c:
    // 0x20a51c: 0x60f809  jalr        $v1
label_20a520:
    if (ctx->pc == 0x20A520u) {
        ctx->pc = 0x20A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A51Cu;
        // 0x20a520: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A524u;
        goto label_20a524;
    }
    ctx->pc = 0x20A51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20A524u);
        ctx->pc = 0x20A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A51Cu;
        // 0x20a520: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A51Cu, 0x20A524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A524u;
label_20a524:
    // 0x20a524: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20a524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a528:
    // 0x20a528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a52c:
    // 0x20a52c: 0x3e00008  jr          $ra
label_20a530:
    if (ctx->pc == 0x20A530u) {
        ctx->pc = 0x20A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A52Cu;
        // 0x20a530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A534u;
        goto label_20a534;
    }
    ctx->pc = 0x20A52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A52Cu;
        // 0x20a530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A534u;
label_20a534:
    // 0x20a534: 0x0  nop
    ctx->pc = 0x20a534u;
    // NOP
    ctx->pc = 0x20a538u;
}
