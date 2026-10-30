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

// Function: sub_004EFFC8
// Address: 0x4effc8 - 0x4efff8
void sub_004EFFC8_0x4effc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFFC8_0x4effc8");
#endif

    switch (ctx->pc) {
        case 0x4effc8u: goto label_4effc8;
        case 0x4effccu: goto label_4effcc;
        case 0x4effd0u: goto label_4effd0;
        case 0x4effd4u: goto label_4effd4;
        case 0x4effd8u: goto label_4effd8;
        case 0x4effdcu: goto label_4effdc;
        case 0x4effe0u: goto label_4effe0;
        case 0x4effe4u: goto label_4effe4;
        case 0x4effe8u: goto label_4effe8;
        case 0x4effecu: goto label_4effec;
        case 0x4efff0u: goto label_4efff0;
        case 0x4efff4u: goto label_4efff4;
        default: break;
    }

    ctx->pc = 0x4effc8u;

label_4effc8:
    // 0x4effc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4effc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4effcc:
    // 0x4effcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4effccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4effd0:
    // 0x4effd0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4effd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4effd4:
    // 0x4effd4: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4effd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4effd8:
    // 0x4effd8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4effd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4effdc:
    // 0x4effdc: 0x40f809  jalr        $v0
label_4effe0:
    if (ctx->pc == 0x4EFFE0u) {
        ctx->pc = 0x4EFFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFFDCu;
        // 0x4effe0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFFE4u;
        goto label_4effe4;
    }
    ctx->pc = 0x4EFFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EFFE4u);
        ctx->pc = 0x4EFFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFFDCu;
        // 0x4effe0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFFDCu, 0x4EFFE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EFFE4u;
label_4effe4:
    // 0x4effe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4effe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4effe8:
    // 0x4effe8: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4effe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4effec:
    // 0x4effec: 0x3e00008  jr          $ra
label_4efff0:
    if (ctx->pc == 0x4EFFF0u) {
        ctx->pc = 0x4EFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFFECu;
        // 0x4efff0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFFF4u;
        goto label_4efff4;
    }
    ctx->pc = 0x4EFFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFFECu;
        // 0x4efff0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EFFF4u;
label_4efff4:
    // 0x4efff4: 0x0  nop
    ctx->pc = 0x4efff4u;
    // NOP
    ctx->pc = 0x4efff8u;
}
