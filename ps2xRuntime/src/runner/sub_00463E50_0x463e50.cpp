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

// Function: sub_00463E50
// Address: 0x463e50 - 0x463e90
void sub_00463E50_0x463e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463E50_0x463e50");
#endif

    switch (ctx->pc) {
        case 0x463e50u: goto label_463e50;
        case 0x463e54u: goto label_463e54;
        case 0x463e58u: goto label_463e58;
        case 0x463e5cu: goto label_463e5c;
        case 0x463e60u: goto label_463e60;
        case 0x463e64u: goto label_463e64;
        case 0x463e68u: goto label_463e68;
        case 0x463e6cu: goto label_463e6c;
        case 0x463e70u: goto label_463e70;
        case 0x463e74u: goto label_463e74;
        case 0x463e78u: goto label_463e78;
        case 0x463e7cu: goto label_463e7c;
        case 0x463e80u: goto label_463e80;
        case 0x463e84u: goto label_463e84;
        case 0x463e88u: goto label_463e88;
        case 0x463e8cu: goto label_463e8c;
        default: break;
    }

    ctx->pc = 0x463e50u;

label_463e50:
    // 0x463e50: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x463e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_463e54:
    // 0x463e54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x463e54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_463e58:
    // 0x463e58: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x463e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_463e5c:
    // 0x463e5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x463e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_463e60:
    // 0x463e60: 0x40f809  jalr        $v0
label_463e64:
    if (ctx->pc == 0x463E64u) {
        ctx->pc = 0x463E68u;
        goto label_463e68;
    }
    ctx->pc = 0x463E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x463E68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463E60u, 0x463E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x463E68u;
label_463e68:
    // 0x463e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x463e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_463e6c:
    // 0x463e6c: 0x3e00008  jr          $ra
label_463e70:
    if (ctx->pc == 0x463E70u) {
        ctx->pc = 0x463E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463E6Cu;
        // 0x463e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x463E74u;
        goto label_463e74;
    }
    ctx->pc = 0x463E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463E6Cu;
        // 0x463e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x463E74u;
label_463e74:
    // 0x463e74: 0x0  nop
    ctx->pc = 0x463e74u;
    // NOP
label_463e78:
    // 0x463e78: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x463e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
label_463e7c:
    // 0x463e7c: 0x0  nop
    ctx->pc = 0x463e7cu;
    // NOP
label_463e80:
    // 0x463e80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x463e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_463e84:
    // 0x463e84: 0x0  nop
    ctx->pc = 0x463e84u;
    // NOP
label_463e88:
    // 0x463e88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x463e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_463e8c:
    // 0x463e8c: 0x0  nop
    ctx->pc = 0x463e8cu;
    // NOP
    ctx->pc = 0x463e90u;
}
