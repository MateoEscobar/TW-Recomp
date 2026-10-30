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

// Function: sub_0042CA40
// Address: 0x42ca40 - 0x42ca68
void sub_0042CA40_0x42ca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042CA40_0x42ca40");
#endif

    switch (ctx->pc) {
        case 0x42ca40u: goto label_42ca40;
        case 0x42ca44u: goto label_42ca44;
        case 0x42ca48u: goto label_42ca48;
        case 0x42ca4cu: goto label_42ca4c;
        case 0x42ca50u: goto label_42ca50;
        case 0x42ca54u: goto label_42ca54;
        case 0x42ca58u: goto label_42ca58;
        case 0x42ca5cu: goto label_42ca5c;
        case 0x42ca60u: goto label_42ca60;
        case 0x42ca64u: goto label_42ca64;
        default: break;
    }

    ctx->pc = 0x42ca40u;

label_42ca40:
    // 0x42ca40: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x42ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_42ca44:
    // 0x42ca44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42ca44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_42ca48:
    // 0x42ca48: 0x8c6254c8  lw          $v0, 0x54C8($v1)
    ctx->pc = 0x42ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21704)));
label_42ca4c:
    // 0x42ca4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42ca4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_42ca50:
    // 0x42ca50: 0x40f809  jalr        $v0
label_42ca54:
    if (ctx->pc == 0x42CA54u) {
        ctx->pc = 0x42CA58u;
        goto label_42ca58;
    }
    ctx->pc = 0x42CA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42CA58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42CA50u, 0x42CA58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42CA58u;
label_42ca58:
    // 0x42ca58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42ca58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42ca5c:
    // 0x42ca5c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x42ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_42ca60:
    // 0x42ca60: 0x3e00008  jr          $ra
label_42ca64:
    if (ctx->pc == 0x42CA64u) {
        ctx->pc = 0x42CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CA60u;
        // 0x42ca64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CA68u;
        goto label_fallthrough_0x42ca60;
    }
    ctx->pc = 0x42CA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CA60u;
        // 0x42ca64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42CA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x42ca60:
    ctx->pc = 0x42CA68u;
}
