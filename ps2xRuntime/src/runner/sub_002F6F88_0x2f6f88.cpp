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

// Function: sub_002F6F88
// Address: 0x2f6f88 - 0x2f6fb0
void sub_002F6F88_0x2f6f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6F88_0x2f6f88");
#endif

    switch (ctx->pc) {
        case 0x2f6f88u: goto label_2f6f88;
        case 0x2f6f8cu: goto label_2f6f8c;
        case 0x2f6f90u: goto label_2f6f90;
        case 0x2f6f94u: goto label_2f6f94;
        case 0x2f6f98u: goto label_2f6f98;
        case 0x2f6f9cu: goto label_2f6f9c;
        case 0x2f6fa0u: goto label_2f6fa0;
        case 0x2f6fa4u: goto label_2f6fa4;
        case 0x2f6fa8u: goto label_2f6fa8;
        case 0x2f6facu: goto label_2f6fac;
        default: break;
    }

    ctx->pc = 0x2f6f88u;

label_2f6f88:
    // 0x2f6f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f6f8c:
    // 0x2f6f8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f6f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f6f90:
    // 0x2f6f90: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2f6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f6f94:
    // 0x2f6f94: 0x84430038  lh          $v1, 0x38($v0)
    ctx->pc = 0x2f6f94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2f6f98:
    // 0x2f6f98: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x2f6f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2f6f9c:
    // 0x2f6f9c: 0xa0f809  jalr        $a1
label_2f6fa0:
    if (ctx->pc == 0x2F6FA0u) {
        ctx->pc = 0x2F6FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F9Cu;
        // 0x2f6fa0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6FA4u;
        goto label_2f6fa4;
    }
    ctx->pc = 0x2F6F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2F6FA4u);
        ctx->pc = 0x2F6FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F9Cu;
        // 0x2f6fa0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6F9Cu, 0x2F6FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F6FA4u;
label_2f6fa4:
    // 0x2f6fa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f6fa8:
    // 0x2f6fa8: 0x3e00008  jr          $ra
label_2f6fac:
    if (ctx->pc == 0x2F6FACu) {
        ctx->pc = 0x2F6FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6FA8u;
        // 0x2f6fac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6FB0u;
        goto label_fallthrough_0x2f6fa8;
    }
    ctx->pc = 0x2F6FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6FA8u;
        // 0x2f6fac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f6fa8:
    ctx->pc = 0x2F6FB0u;
}
