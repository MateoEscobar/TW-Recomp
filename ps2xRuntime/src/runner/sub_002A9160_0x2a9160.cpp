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

// Function: sub_002A9160
// Address: 0x2a9160 - 0x2a9188
void sub_002A9160_0x2a9160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9160_0x2a9160");
#endif

    switch (ctx->pc) {
        case 0x2a9160u: goto label_2a9160;
        case 0x2a9164u: goto label_2a9164;
        case 0x2a9168u: goto label_2a9168;
        case 0x2a916cu: goto label_2a916c;
        case 0x2a9170u: goto label_2a9170;
        case 0x2a9174u: goto label_2a9174;
        case 0x2a9178u: goto label_2a9178;
        case 0x2a917cu: goto label_2a917c;
        case 0x2a9180u: goto label_2a9180;
        case 0x2a9184u: goto label_2a9184;
        default: break;
    }

    ctx->pc = 0x2a9160u;

label_2a9160:
    // 0x2a9160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a9164:
    // 0x2a9164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a9168:
    // 0x2a9168: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2a9168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2a916c:
    // 0x2a916c: 0x84430038  lh          $v1, 0x38($v0)
    ctx->pc = 0x2a916cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2a9170:
    // 0x2a9170: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x2a9170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2a9174:
    // 0x2a9174: 0xa0f809  jalr        $a1
label_2a9178:
    if (ctx->pc == 0x2A9178u) {
        ctx->pc = 0x2A9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9174u;
        // 0x2a9178: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A917Cu;
        goto label_2a917c;
    }
    ctx->pc = 0x2A9174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2A917Cu);
        ctx->pc = 0x2A9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9174u;
        // 0x2a9178: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9174u, 0x2A917Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A917Cu;
label_2a917c:
    // 0x2a917c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a917cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9180:
    // 0x2a9180: 0x3e00008  jr          $ra
label_2a9184:
    if (ctx->pc == 0x2A9184u) {
        ctx->pc = 0x2A9184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9180u;
        // 0x2a9184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9188u;
        goto label_fallthrough_0x2a9180;
    }
    ctx->pc = 0x2A9180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9180u;
        // 0x2a9184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a9180:
    ctx->pc = 0x2A9188u;
}
