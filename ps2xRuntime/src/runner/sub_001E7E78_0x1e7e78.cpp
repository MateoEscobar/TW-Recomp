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

// Function: sub_001E7E78
// Address: 0x1e7e78 - 0x1e7ea8
void sub_001E7E78_0x1e7e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7E78_0x1e7e78");
#endif

    switch (ctx->pc) {
        case 0x1e7e78u: goto label_1e7e78;
        case 0x1e7e7cu: goto label_1e7e7c;
        case 0x1e7e80u: goto label_1e7e80;
        case 0x1e7e84u: goto label_1e7e84;
        case 0x1e7e88u: goto label_1e7e88;
        case 0x1e7e8cu: goto label_1e7e8c;
        case 0x1e7e90u: goto label_1e7e90;
        case 0x1e7e94u: goto label_1e7e94;
        case 0x1e7e98u: goto label_1e7e98;
        case 0x1e7e9cu: goto label_1e7e9c;
        case 0x1e7ea0u: goto label_1e7ea0;
        case 0x1e7ea4u: goto label_1e7ea4;
        default: break;
    }

    ctx->pc = 0x1e7e78u;

label_1e7e78:
    // 0x1e7e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e7e7c:
    // 0x1e7e7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e7e80:
    // 0x1e7e80: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x1e7e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_1e7e84:
    // 0x1e7e84: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e7e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e7e88:
    // 0x1e7e88: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1e7e88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1e7e8c:
    // 0x1e7e8c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1e7e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1e7e90:
    // 0x1e7e90: 0x60f809  jalr        $v1
label_1e7e94:
    if (ctx->pc == 0x1E7E94u) {
        ctx->pc = 0x1E7E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E90u;
        // 0x1e7e94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7E98u;
        goto label_1e7e98;
    }
    ctx->pc = 0x1E7E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E7E98u);
        ctx->pc = 0x1E7E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E90u;
        // 0x1e7e94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7E90u, 0x1E7E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E7E98u;
label_1e7e98:
    // 0x1e7e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7e9c:
    // 0x1e7e9c: 0x3e00008  jr          $ra
label_1e7ea0:
    if (ctx->pc == 0x1E7EA0u) {
        ctx->pc = 0x1E7EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E9Cu;
        // 0x1e7ea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7EA4u;
        goto label_1e7ea4;
    }
    ctx->pc = 0x1E7E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E9Cu;
        // 0x1e7ea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7EA4u;
label_1e7ea4:
    // 0x1e7ea4: 0x0  nop
    ctx->pc = 0x1e7ea4u;
    // NOP
    ctx->pc = 0x1e7ea8u;
}
