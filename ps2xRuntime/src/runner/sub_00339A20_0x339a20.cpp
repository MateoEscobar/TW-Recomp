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

// Function: sub_00339A20
// Address: 0x339a20 - 0x339a58
void sub_00339A20_0x339a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339A20_0x339a20");
#endif

    switch (ctx->pc) {
        case 0x339a20u: goto label_339a20;
        case 0x339a24u: goto label_339a24;
        case 0x339a28u: goto label_339a28;
        case 0x339a2cu: goto label_339a2c;
        case 0x339a30u: goto label_339a30;
        case 0x339a34u: goto label_339a34;
        case 0x339a38u: goto label_339a38;
        case 0x339a3cu: goto label_339a3c;
        case 0x339a40u: goto label_339a40;
        case 0x339a44u: goto label_339a44;
        case 0x339a48u: goto label_339a48;
        case 0x339a4cu: goto label_339a4c;
        case 0x339a50u: goto label_339a50;
        case 0x339a54u: goto label_339a54;
        default: break;
    }

    ctx->pc = 0x339a20u;

label_339a20:
    // 0x339a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_339a24:
    // 0x339a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_339a28:
    // 0x339a28: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x339a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_339a2c:
    // 0x339a2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x339a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_339a30:
    // 0x339a30: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x339a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_339a34:
    // 0x339a34: 0x8c8c0020  lw          $t4, 0x20($a0)
    ctx->pc = 0x339a34u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_339a38:
    // 0x339a38: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x339a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_339a3c:
    // 0x339a3c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x339a3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_339a40:
    // 0x339a40: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x339a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_339a44:
    // 0x339a44: 0x40f809  jalr        $v0
label_339a48:
    if (ctx->pc == 0x339A48u) {
        ctx->pc = 0x339A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A44u;
        // 0x339a48: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339A4Cu;
        goto label_339a4c;
    }
    ctx->pc = 0x339A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339A4Cu);
        ctx->pc = 0x339A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A44u;
        // 0x339a48: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339A44u, 0x339A4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339A4Cu;
label_339a4c:
    // 0x339a4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339a50:
    // 0x339a50: 0x3e00008  jr          $ra
label_339a54:
    if (ctx->pc == 0x339A54u) {
        ctx->pc = 0x339A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A50u;
        // 0x339a54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339A58u;
        goto label_fallthrough_0x339a50;
    }
    ctx->pc = 0x339A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A50u;
        // 0x339a54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x339a50:
    ctx->pc = 0x339A58u;
}
