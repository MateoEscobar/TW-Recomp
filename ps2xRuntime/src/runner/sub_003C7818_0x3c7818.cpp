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

// Function: sub_003C7818
// Address: 0x3c7818 - 0x3c7840
void sub_003C7818_0x3c7818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7818_0x3c7818");
#endif

    switch (ctx->pc) {
        case 0x3c7818u: goto label_3c7818;
        case 0x3c781cu: goto label_3c781c;
        case 0x3c7820u: goto label_3c7820;
        case 0x3c7824u: goto label_3c7824;
        case 0x3c7828u: goto label_3c7828;
        case 0x3c782cu: goto label_3c782c;
        case 0x3c7830u: goto label_3c7830;
        case 0x3c7834u: goto label_3c7834;
        case 0x3c7838u: goto label_3c7838;
        case 0x3c783cu: goto label_3c783c;
        default: break;
    }

    ctx->pc = 0x3c7818u;

label_3c7818:
    // 0x3c7818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c7818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3c781c:
    // 0x3c781c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c781cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c7820:
    // 0x3c7820: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c7820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c7824:
    // 0x3c7824: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3c7824u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c7828:
    // 0x3c7828: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c7828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c782c:
    // 0x3c782c: 0x40f809  jalr        $v0
label_3c7830:
    if (ctx->pc == 0x3C7830u) {
        ctx->pc = 0x3C7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C782Cu;
        // 0x3c7830: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7834u;
        goto label_3c7834;
    }
    ctx->pc = 0x3C782Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C7834u);
        ctx->pc = 0x3C7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C782Cu;
        // 0x3c7830: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C782Cu, 0x3C7834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C7834u;
label_3c7834:
    // 0x3c7834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c7834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c7838:
    // 0x3c7838: 0x3e00008  jr          $ra
label_3c783c:
    if (ctx->pc == 0x3C783Cu) {
        ctx->pc = 0x3C783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7838u;
        // 0x3c783c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7840u;
        goto label_fallthrough_0x3c7838;
    }
    ctx->pc = 0x3C7838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7838u;
        // 0x3c783c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c7838:
    ctx->pc = 0x3C7840u;
}
