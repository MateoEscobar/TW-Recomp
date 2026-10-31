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

// Function: sub_0010FB20
// Address: 0x10fb20 - 0x10fb68
void sub_0010FB20_0x10fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FB20_0x10fb20");
#endif

    switch (ctx->pc) {
        case 0x10fb20u: goto label_10fb20;
        case 0x10fb24u: goto label_10fb24;
        case 0x10fb28u: goto label_10fb28;
        case 0x10fb2cu: goto label_10fb2c;
        case 0x10fb30u: goto label_10fb30;
        case 0x10fb34u: goto label_10fb34;
        case 0x10fb38u: goto label_10fb38;
        case 0x10fb3cu: goto label_10fb3c;
        case 0x10fb40u: goto label_10fb40;
        case 0x10fb44u: goto label_10fb44;
        case 0x10fb48u: goto label_10fb48;
        case 0x10fb4cu: goto label_10fb4c;
        case 0x10fb50u: goto label_10fb50;
        case 0x10fb54u: goto label_10fb54;
        case 0x10fb58u: goto label_10fb58;
        case 0x10fb5cu: goto label_10fb5c;
        case 0x10fb60u: goto label_10fb60;
        case 0x10fb64u: goto label_10fb64;
        default: break;
    }

    ctx->pc = 0x10fb20u;

label_10fb20:
    // 0x10fb20: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x10fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_10fb24:
    // 0x10fb24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10fb24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10fb28:
    // 0x10fb28: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10fb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_10fb2c:
    // 0x10fb2c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x10fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_10fb30:
    // 0x10fb30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10fb34:
    // 0x10fb34: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10fb38:
    // 0x10fb38: 0x8c65bce4  lw          $a1, -0x431C($v1)
    ctx->pc = 0x10fb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950116)));
label_10fb3c:
    // 0x10fb3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10fb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10fb40:
    // 0x10fb40: 0xac867a24  sw          $a2, 0x7A24($a0)
    ctx->pc = 0x10fb40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31268), GPR_U32(ctx, 6));
label_10fb44:
    // 0x10fb44: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10fb48:
    // 0x10fb48: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x10fb48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_10fb4c:
    // 0x10fb4c: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x10fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_10fb50:
    // 0x10fb50: 0x60f809  jalr        $v1
label_10fb54:
    if (ctx->pc == 0x10FB54u) {
        ctx->pc = 0x10FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB50u;
        // 0x10fb54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB58u;
        goto label_10fb58;
    }
    ctx->pc = 0x10FB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10FB58u);
        ctx->pc = 0x10FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB50u;
        // 0x10fb54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FB50u, 0x10FB58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10FB58u;
label_10fb58:
    // 0x10fb58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10fb5c:
    // 0x10fb5c: 0x3e00008  jr          $ra
label_10fb60:
    if (ctx->pc == 0x10FB60u) {
        ctx->pc = 0x10FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB5Cu;
        // 0x10fb60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB64u;
        goto label_10fb64;
    }
    ctx->pc = 0x10FB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB5Cu;
        // 0x10fb60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FB64u;
label_10fb64:
    // 0x10fb64: 0x0  nop
    ctx->pc = 0x10fb64u;
    // NOP
    ctx->pc = 0x10fb68u;
}
