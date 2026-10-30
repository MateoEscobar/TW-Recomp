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

// Function: sub_0042DE78
// Address: 0x42de78 - 0x42dea0
void sub_0042DE78_0x42de78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042DE78_0x42de78");
#endif

    switch (ctx->pc) {
        case 0x42de78u: goto label_42de78;
        case 0x42de7cu: goto label_42de7c;
        case 0x42de80u: goto label_42de80;
        case 0x42de84u: goto label_42de84;
        case 0x42de88u: goto label_42de88;
        case 0x42de8cu: goto label_42de8c;
        case 0x42de90u: goto label_42de90;
        case 0x42de94u: goto label_42de94;
        case 0x42de98u: goto label_42de98;
        case 0x42de9cu: goto label_42de9c;
        default: break;
    }

    ctx->pc = 0x42de78u;

label_42de78:
    // 0x42de78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42de78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_42de7c:
    // 0x42de7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x42de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42de80:
    // 0x42de80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42de80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_42de84:
    // 0x42de84: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x42de84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_42de88:
    // 0x42de88: 0x40f809  jalr        $v0
label_42de8c:
    if (ctx->pc == 0x42DE8Cu) {
        ctx->pc = 0x42DE90u;
        goto label_42de90;
    }
    ctx->pc = 0x42DE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42DE90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42DE88u, 0x42DE90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42DE90u;
label_42de90:
    // 0x42de90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x42de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42de94:
    // 0x42de94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42de94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42de98:
    // 0x42de98: 0x3e00008  jr          $ra
label_42de9c:
    if (ctx->pc == 0x42DE9Cu) {
        ctx->pc = 0x42DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DE98u;
        // 0x42de9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42DEA0u;
        goto label_fallthrough_0x42de98;
    }
    ctx->pc = 0x42DE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DE98u;
        // 0x42de9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42DE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x42de98:
    ctx->pc = 0x42DEA0u;
}
