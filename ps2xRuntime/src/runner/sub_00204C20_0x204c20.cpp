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

// Function: sub_00204C20
// Address: 0x204c20 - 0x204c50
void sub_00204C20_0x204c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204C20_0x204c20");
#endif

    switch (ctx->pc) {
        case 0x204c20u: goto label_204c20;
        case 0x204c24u: goto label_204c24;
        case 0x204c28u: goto label_204c28;
        case 0x204c2cu: goto label_204c2c;
        case 0x204c30u: goto label_204c30;
        case 0x204c34u: goto label_204c34;
        case 0x204c38u: goto label_204c38;
        case 0x204c3cu: goto label_204c3c;
        case 0x204c40u: goto label_204c40;
        case 0x204c44u: goto label_204c44;
        case 0x204c48u: goto label_204c48;
        case 0x204c4cu: goto label_204c4c;
        default: break;
    }

    ctx->pc = 0x204c20u;

label_204c20:
    // 0x204c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_204c24:
    // 0x204c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_204c28:
    // 0x204c28: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x204c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_204c2c:
    // 0x204c2c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x204c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_204c30:
    // 0x204c30: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x204c30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_204c34:
    // 0x204c34: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x204c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_204c38:
    // 0x204c38: 0xa0f809  jalr        $a1
label_204c3c:
    if (ctx->pc == 0x204C3Cu) {
        ctx->pc = 0x204C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C38u;
        // 0x204c3c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204C40u;
        goto label_204c40;
    }
    ctx->pc = 0x204C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x204C40u);
        ctx->pc = 0x204C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C38u;
        // 0x204c3c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204C38u, 0x204C40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204C40u;
label_204c40:
    // 0x204c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204c44:
    // 0x204c44: 0x3e00008  jr          $ra
label_204c48:
    if (ctx->pc == 0x204C48u) {
        ctx->pc = 0x204C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C44u;
        // 0x204c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204C4Cu;
        goto label_204c4c;
    }
    ctx->pc = 0x204C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C44u;
        // 0x204c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204C4Cu;
label_204c4c:
    // 0x204c4c: 0x0  nop
    ctx->pc = 0x204c4cu;
    // NOP
    ctx->pc = 0x204c50u;
}
