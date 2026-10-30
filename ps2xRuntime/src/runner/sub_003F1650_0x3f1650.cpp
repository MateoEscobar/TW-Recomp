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

// Function: sub_003F1650
// Address: 0x3f1650 - 0x3f1678
void sub_003F1650_0x3f1650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1650_0x3f1650");
#endif

    switch (ctx->pc) {
        case 0x3f1650u: goto label_3f1650;
        case 0x3f1654u: goto label_3f1654;
        case 0x3f1658u: goto label_3f1658;
        case 0x3f165cu: goto label_3f165c;
        case 0x3f1660u: goto label_3f1660;
        case 0x3f1664u: goto label_3f1664;
        case 0x3f1668u: goto label_3f1668;
        case 0x3f166cu: goto label_3f166c;
        case 0x3f1670u: goto label_3f1670;
        case 0x3f1674u: goto label_3f1674;
        default: break;
    }

    ctx->pc = 0x3f1650u;

label_3f1650:
    // 0x3f1650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f1650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3f1654:
    // 0x3f1654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f1654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f1658:
    // 0x3f1658: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f1658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f165c:
    // 0x3f165c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3f165cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f1660:
    // 0x3f1660: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f1660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f1664:
    // 0x3f1664: 0x40f809  jalr        $v0
label_3f1668:
    if (ctx->pc == 0x3F1668u) {
        ctx->pc = 0x3F1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1664u;
        // 0x3f1668: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F166Cu;
        goto label_3f166c;
    }
    ctx->pc = 0x3F1664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F166Cu);
        ctx->pc = 0x3F1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1664u;
        // 0x3f1668: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1664u, 0x3F166Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F166Cu;
label_3f166c:
    // 0x3f166c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f166cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f1670:
    // 0x3f1670: 0x3e00008  jr          $ra
label_3f1674:
    if (ctx->pc == 0x3F1674u) {
        ctx->pc = 0x3F1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1670u;
        // 0x3f1674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1678u;
        goto label_fallthrough_0x3f1670;
    }
    ctx->pc = 0x3F1670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1670u;
        // 0x3f1674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f1670:
    ctx->pc = 0x3F1678u;
}
