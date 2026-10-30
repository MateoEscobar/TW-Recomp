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

// Function: sub_003CAC40
// Address: 0x3cac40 - 0x3cac68
void sub_003CAC40_0x3cac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CAC40_0x3cac40");
#endif

    switch (ctx->pc) {
        case 0x3cac40u: goto label_3cac40;
        case 0x3cac44u: goto label_3cac44;
        case 0x3cac48u: goto label_3cac48;
        case 0x3cac4cu: goto label_3cac4c;
        case 0x3cac50u: goto label_3cac50;
        case 0x3cac54u: goto label_3cac54;
        case 0x3cac58u: goto label_3cac58;
        case 0x3cac5cu: goto label_3cac5c;
        case 0x3cac60u: goto label_3cac60;
        case 0x3cac64u: goto label_3cac64;
        default: break;
    }

    ctx->pc = 0x3cac40u;

label_3cac40:
    // 0x3cac40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3cac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3cac44:
    // 0x3cac44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cac44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3cac48:
    // 0x3cac48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3cac48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cac4c:
    // 0x3cac4c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3cac4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3cac50:
    // 0x3cac50: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3cac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3cac54:
    // 0x3cac54: 0x40f809  jalr        $v0
label_3cac58:
    if (ctx->pc == 0x3CAC58u) {
        ctx->pc = 0x3CAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC54u;
        // 0x3cac58: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAC5Cu;
        goto label_3cac5c;
    }
    ctx->pc = 0x3CAC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CAC5Cu);
        ctx->pc = 0x3CAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC54u;
        // 0x3cac58: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAC54u, 0x3CAC5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CAC5Cu;
label_3cac5c:
    // 0x3cac5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cac5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3cac60:
    // 0x3cac60: 0x3e00008  jr          $ra
label_3cac64:
    if (ctx->pc == 0x3CAC64u) {
        ctx->pc = 0x3CAC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC60u;
        // 0x3cac64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAC68u;
        goto label_fallthrough_0x3cac60;
    }
    ctx->pc = 0x3CAC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CAC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC60u;
        // 0x3cac64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3cac60:
    ctx->pc = 0x3CAC68u;
}
