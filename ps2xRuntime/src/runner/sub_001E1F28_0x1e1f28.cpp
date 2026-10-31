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

// Function: sub_001E1F28
// Address: 0x1e1f28 - 0x1e1f68
void sub_001E1F28_0x1e1f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1F28_0x1e1f28");
#endif

    switch (ctx->pc) {
        case 0x1e1f28u: goto label_1e1f28;
        case 0x1e1f2cu: goto label_1e1f2c;
        case 0x1e1f30u: goto label_1e1f30;
        case 0x1e1f34u: goto label_1e1f34;
        case 0x1e1f38u: goto label_1e1f38;
        case 0x1e1f3cu: goto label_1e1f3c;
        case 0x1e1f40u: goto label_1e1f40;
        case 0x1e1f44u: goto label_1e1f44;
        case 0x1e1f48u: goto label_1e1f48;
        case 0x1e1f4cu: goto label_1e1f4c;
        case 0x1e1f50u: goto label_1e1f50;
        case 0x1e1f54u: goto label_1e1f54;
        case 0x1e1f58u: goto label_1e1f58;
        case 0x1e1f5cu: goto label_1e1f5c;
        case 0x1e1f60u: goto label_1e1f60;
        case 0x1e1f64u: goto label_1e1f64;
        default: break;
    }

    ctx->pc = 0x1e1f28u;

label_1e1f28:
    // 0x1e1f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e1f2c:
    // 0x1e1f2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e1f30:
    // 0x1e1f30: 0x8c8200a8  lw          $v0, 0xA8($a0)
    ctx->pc = 0x1e1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
label_1e1f34:
    // 0x1e1f34: 0x8c830098  lw          $v1, 0x98($a0)
    ctx->pc = 0x1e1f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_1e1f38:
    // 0x1e1f38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e1f3c:
    // 0x1e1f3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e1f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e1f40:
    // 0x1e1f40: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1e1f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e1f44:
    // 0x1e1f44: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1e1f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e1f48:
    // 0x1e1f48: 0x84a400f8  lh          $a0, 0xF8($a1)
    ctx->pc = 0x1e1f48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 248)));
label_1e1f4c:
    // 0x1e1f4c: 0x8ca200fc  lw          $v0, 0xFC($a1)
    ctx->pc = 0x1e1f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 252)));
label_1e1f50:
    // 0x1e1f50: 0x40f809  jalr        $v0
label_1e1f54:
    if (ctx->pc == 0x1E1F54u) {
        ctx->pc = 0x1E1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F50u;
        // 0x1e1f54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F58u;
        goto label_1e1f58;
    }
    ctx->pc = 0x1E1F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1F58u);
        ctx->pc = 0x1E1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F50u;
        // 0x1e1f54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1F50u, 0x1E1F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1F58u;
label_1e1f58:
    // 0x1e1f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1f5c:
    // 0x1e1f5c: 0x3e00008  jr          $ra
label_1e1f60:
    if (ctx->pc == 0x1E1F60u) {
        ctx->pc = 0x1E1F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F5Cu;
        // 0x1e1f60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F64u;
        goto label_1e1f64;
    }
    ctx->pc = 0x1E1F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F5Cu;
        // 0x1e1f60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1F64u;
label_1e1f64:
    // 0x1e1f64: 0x0  nop
    ctx->pc = 0x1e1f64u;
    // NOP
    ctx->pc = 0x1e1f68u;
}
