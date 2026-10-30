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

// Function: sub_003EAA30
// Address: 0x3eaa30 - 0x3eaa60
void sub_003EAA30_0x3eaa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EAA30_0x3eaa30");
#endif

    switch (ctx->pc) {
        case 0x3eaa30u: goto label_3eaa30;
        case 0x3eaa34u: goto label_3eaa34;
        case 0x3eaa38u: goto label_3eaa38;
        case 0x3eaa3cu: goto label_3eaa3c;
        case 0x3eaa40u: goto label_3eaa40;
        case 0x3eaa44u: goto label_3eaa44;
        case 0x3eaa48u: goto label_3eaa48;
        case 0x3eaa4cu: goto label_3eaa4c;
        case 0x3eaa50u: goto label_3eaa50;
        case 0x3eaa54u: goto label_3eaa54;
        case 0x3eaa58u: goto label_3eaa58;
        case 0x3eaa5cu: goto label_3eaa5c;
        default: break;
    }

    ctx->pc = 0x3eaa30u;

label_3eaa30:
    // 0x3eaa30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3eaa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3eaa34:
    // 0x3eaa34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3eaa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3eaa38:
    // 0x3eaa38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3eaa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3eaa3c:
    // 0x3eaa3c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3eaa3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eaa40:
    // 0x3eaa40: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eaa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eaa44:
    // 0x3eaa44: 0x40f809  jalr        $v0
label_3eaa48:
    if (ctx->pc == 0x3EAA48u) {
        ctx->pc = 0x3EAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA44u;
        // 0x3eaa48: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAA4Cu;
        goto label_3eaa4c;
    }
    ctx->pc = 0x3EAA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EAA4Cu);
        ctx->pc = 0x3EAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA44u;
        // 0x3eaa48: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAA44u, 0x3EAA4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EAA4Cu;
label_3eaa4c:
    // 0x3eaa4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3eaa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eaa50:
    // 0x3eaa50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3eaa50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eaa54:
    // 0x3eaa54: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3eaa54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3eaa58:
    // 0x3eaa58: 0x3e00008  jr          $ra
label_3eaa5c:
    if (ctx->pc == 0x3EAA5Cu) {
        ctx->pc = 0x3EAA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA58u;
        // 0x3eaa5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAA60u;
        goto label_fallthrough_0x3eaa58;
    }
    ctx->pc = 0x3EAA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EAA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA58u;
        // 0x3eaa5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eaa58:
    ctx->pc = 0x3EAA60u;
}
