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

// Function: sub_004EFAB8
// Address: 0x4efab8 - 0x4efae8
void sub_004EFAB8_0x4efab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFAB8_0x4efab8");
#endif

    switch (ctx->pc) {
        case 0x4efab8u: goto label_4efab8;
        case 0x4efabcu: goto label_4efabc;
        case 0x4efac0u: goto label_4efac0;
        case 0x4efac4u: goto label_4efac4;
        case 0x4efac8u: goto label_4efac8;
        case 0x4efaccu: goto label_4efacc;
        case 0x4efad0u: goto label_4efad0;
        case 0x4efad4u: goto label_4efad4;
        case 0x4efad8u: goto label_4efad8;
        case 0x4efadcu: goto label_4efadc;
        case 0x4efae0u: goto label_4efae0;
        case 0x4efae4u: goto label_4efae4;
        default: break;
    }

    ctx->pc = 0x4efab8u;

label_4efab8:
    // 0x4efab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4efab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4efabc:
    // 0x4efabc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4efabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4efac0:
    // 0x4efac0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4efac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4efac4:
    // 0x4efac4: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4efac4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4efac8:
    // 0x4efac8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4efac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4efacc:
    // 0x4efacc: 0x40f809  jalr        $v0
label_4efad0:
    if (ctx->pc == 0x4EFAD0u) {
        ctx->pc = 0x4EFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFACCu;
        // 0x4efad0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFAD4u;
        goto label_4efad4;
    }
    ctx->pc = 0x4EFACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EFAD4u);
        ctx->pc = 0x4EFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFACCu;
        // 0x4efad0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFACCu, 0x4EFAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EFAD4u;
label_4efad4:
    // 0x4efad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4efad8:
    // 0x4efad8: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4efad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4efadc:
    // 0x4efadc: 0x3e00008  jr          $ra
label_4efae0:
    if (ctx->pc == 0x4EFAE0u) {
        ctx->pc = 0x4EFAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFADCu;
        // 0x4efae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFAE4u;
        goto label_4efae4;
    }
    ctx->pc = 0x4EFADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFADCu;
        // 0x4efae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EFAE4u;
label_4efae4:
    // 0x4efae4: 0x0  nop
    ctx->pc = 0x4efae4u;
    // NOP
    ctx->pc = 0x4efae8u;
}
