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

// Function: sub_004EFB98
// Address: 0x4efb98 - 0x4efbc8
void sub_004EFB98_0x4efb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFB98_0x4efb98");
#endif

    switch (ctx->pc) {
        case 0x4efb98u: goto label_4efb98;
        case 0x4efb9cu: goto label_4efb9c;
        case 0x4efba0u: goto label_4efba0;
        case 0x4efba4u: goto label_4efba4;
        case 0x4efba8u: goto label_4efba8;
        case 0x4efbacu: goto label_4efbac;
        case 0x4efbb0u: goto label_4efbb0;
        case 0x4efbb4u: goto label_4efbb4;
        case 0x4efbb8u: goto label_4efbb8;
        case 0x4efbbcu: goto label_4efbbc;
        case 0x4efbc0u: goto label_4efbc0;
        case 0x4efbc4u: goto label_4efbc4;
        default: break;
    }

    ctx->pc = 0x4efb98u;

label_4efb98:
    // 0x4efb98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4efb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4efb9c:
    // 0x4efb9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4efb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4efba0:
    // 0x4efba0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4efba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4efba4:
    // 0x4efba4: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4efba4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4efba8:
    // 0x4efba8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4efba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4efbac:
    // 0x4efbac: 0x40f809  jalr        $v0
label_4efbb0:
    if (ctx->pc == 0x4EFBB0u) {
        ctx->pc = 0x4EFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFBACu;
        // 0x4efbb0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFBB4u;
        goto label_4efbb4;
    }
    ctx->pc = 0x4EFBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EFBB4u);
        ctx->pc = 0x4EFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFBACu;
        // 0x4efbb0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFBACu, 0x4EFBB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EFBB4u;
label_4efbb4:
    // 0x4efbb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4efbb8:
    // 0x4efbb8: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4efbb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4efbbc:
    // 0x4efbbc: 0x3e00008  jr          $ra
label_4efbc0:
    if (ctx->pc == 0x4EFBC0u) {
        ctx->pc = 0x4EFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFBBCu;
        // 0x4efbc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFBC4u;
        goto label_4efbc4;
    }
    ctx->pc = 0x4EFBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFBBCu;
        // 0x4efbc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EFBC4u;
label_4efbc4:
    // 0x4efbc4: 0x0  nop
    ctx->pc = 0x4efbc4u;
    // NOP
    ctx->pc = 0x4efbc8u;
}
