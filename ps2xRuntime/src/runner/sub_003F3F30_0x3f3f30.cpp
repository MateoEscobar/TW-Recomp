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

// Function: sub_003F3F30
// Address: 0x3f3f30 - 0x3f3f58
void sub_003F3F30_0x3f3f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3F30_0x3f3f30");
#endif

    switch (ctx->pc) {
        case 0x3f3f30u: goto label_3f3f30;
        case 0x3f3f34u: goto label_3f3f34;
        case 0x3f3f38u: goto label_3f3f38;
        case 0x3f3f3cu: goto label_3f3f3c;
        case 0x3f3f40u: goto label_3f3f40;
        case 0x3f3f44u: goto label_3f3f44;
        case 0x3f3f48u: goto label_3f3f48;
        case 0x3f3f4cu: goto label_3f3f4c;
        case 0x3f3f50u: goto label_3f3f50;
        case 0x3f3f54u: goto label_3f3f54;
        default: break;
    }

    ctx->pc = 0x3f3f30u;

label_3f3f30:
    // 0x3f3f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f3f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3f3f34:
    // 0x3f3f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f3f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f3f38:
    // 0x3f3f38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f3f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f3f3c:
    // 0x3f3f3c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3f3f3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f3f40:
    // 0x3f3f40: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f3f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f3f44:
    // 0x3f3f44: 0x40f809  jalr        $v0
label_3f3f48:
    if (ctx->pc == 0x3F3F48u) {
        ctx->pc = 0x3F3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3F44u;
        // 0x3f3f48: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3F4Cu;
        goto label_3f3f4c;
    }
    ctx->pc = 0x3F3F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F3F4Cu);
        ctx->pc = 0x3F3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3F44u;
        // 0x3f3f48: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3F44u, 0x3F3F4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F3F4Cu;
label_3f3f4c:
    // 0x3f3f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f3f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f3f50:
    // 0x3f3f50: 0x3e00008  jr          $ra
label_3f3f54:
    if (ctx->pc == 0x3F3F54u) {
        ctx->pc = 0x3F3F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3F50u;
        // 0x3f3f54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3F58u;
        goto label_fallthrough_0x3f3f50;
    }
    ctx->pc = 0x3F3F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3F50u;
        // 0x3f3f54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f3f50:
    ctx->pc = 0x3F3F58u;
}
