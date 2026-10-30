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

// Function: sub_00208E30
// Address: 0x208e30 - 0x208e58
void sub_00208E30_0x208e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208E30_0x208e30");
#endif

    switch (ctx->pc) {
        case 0x208e30u: goto label_208e30;
        case 0x208e34u: goto label_208e34;
        case 0x208e38u: goto label_208e38;
        case 0x208e3cu: goto label_208e3c;
        case 0x208e40u: goto label_208e40;
        case 0x208e44u: goto label_208e44;
        case 0x208e48u: goto label_208e48;
        case 0x208e4cu: goto label_208e4c;
        case 0x208e50u: goto label_208e50;
        case 0x208e54u: goto label_208e54;
        default: break;
    }

    ctx->pc = 0x208e30u;

label_208e30:
    // 0x208e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_208e34:
    // 0x208e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_208e38:
    // 0x208e38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x208e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_208e3c:
    // 0x208e3c: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x208e3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_208e40:
    // 0x208e40: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x208e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_208e44:
    // 0x208e44: 0xa0f809  jalr        $a1
label_208e48:
    if (ctx->pc == 0x208E48u) {
        ctx->pc = 0x208E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E44u;
        // 0x208e48: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E4Cu;
        goto label_208e4c;
    }
    ctx->pc = 0x208E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x208E4Cu);
        ctx->pc = 0x208E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E44u;
        // 0x208e48: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208E44u, 0x208E4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208E4Cu;
label_208e4c:
    // 0x208e4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208e50:
    // 0x208e50: 0x3e00008  jr          $ra
label_208e54:
    if (ctx->pc == 0x208E54u) {
        ctx->pc = 0x208E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E50u;
        // 0x208e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E58u;
        goto label_fallthrough_0x208e50;
    }
    ctx->pc = 0x208E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E50u;
        // 0x208e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x208e50:
    ctx->pc = 0x208E58u;
}
