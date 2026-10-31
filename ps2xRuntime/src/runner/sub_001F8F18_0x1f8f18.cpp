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

// Function: sub_001F8F18
// Address: 0x1f8f18 - 0x1f8f40
void sub_001F8F18_0x1f8f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8F18_0x1f8f18");
#endif

    switch (ctx->pc) {
        case 0x1f8f18u: goto label_1f8f18;
        case 0x1f8f1cu: goto label_1f8f1c;
        case 0x1f8f20u: goto label_1f8f20;
        case 0x1f8f24u: goto label_1f8f24;
        case 0x1f8f28u: goto label_1f8f28;
        case 0x1f8f2cu: goto label_1f8f2c;
        case 0x1f8f30u: goto label_1f8f30;
        case 0x1f8f34u: goto label_1f8f34;
        case 0x1f8f38u: goto label_1f8f38;
        case 0x1f8f3cu: goto label_1f8f3c;
        default: break;
    }

    ctx->pc = 0x1f8f18u;

label_1f8f18:
    // 0x1f8f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f8f1c:
    // 0x1f8f1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f8f20:
    // 0x1f8f20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f8f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f8f24:
    // 0x1f8f24: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1f8f24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f8f28:
    // 0x1f8f28: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x1f8f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f8f2c:
    // 0x1f8f2c: 0xa0f809  jalr        $a1
label_1f8f30:
    if (ctx->pc == 0x1F8F30u) {
        ctx->pc = 0x1F8F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F2Cu;
        // 0x1f8f30: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8F34u;
        goto label_1f8f34;
    }
    ctx->pc = 0x1F8F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F8F34u);
        ctx->pc = 0x1F8F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F2Cu;
        // 0x1f8f30: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8F2Cu, 0x1F8F34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8F34u;
label_1f8f34:
    // 0x1f8f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8f38:
    // 0x1f8f38: 0x3e00008  jr          $ra
label_1f8f3c:
    if (ctx->pc == 0x1F8F3Cu) {
        ctx->pc = 0x1F8F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F38u;
        // 0x1f8f3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8F40u;
        goto label_fallthrough_0x1f8f38;
    }
    ctx->pc = 0x1F8F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F38u;
        // 0x1f8f3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f8f38:
    ctx->pc = 0x1F8F40u;
}
