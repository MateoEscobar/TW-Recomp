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

// Function: sub_00238F10
// Address: 0x238f10 - 0x238f50
void sub_00238F10_0x238f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238F10_0x238f10");
#endif

    switch (ctx->pc) {
        case 0x238f10u: goto label_238f10;
        case 0x238f14u: goto label_238f14;
        case 0x238f18u: goto label_238f18;
        case 0x238f1cu: goto label_238f1c;
        case 0x238f20u: goto label_238f20;
        case 0x238f24u: goto label_238f24;
        case 0x238f28u: goto label_238f28;
        case 0x238f2cu: goto label_238f2c;
        case 0x238f30u: goto label_238f30;
        case 0x238f34u: goto label_238f34;
        case 0x238f38u: goto label_238f38;
        case 0x238f3cu: goto label_238f3c;
        case 0x238f40u: goto label_238f40;
        case 0x238f44u: goto label_238f44;
        case 0x238f48u: goto label_238f48;
        case 0x238f4cu: goto label_238f4c;
        default: break;
    }

    ctx->pc = 0x238f10u;

label_238f10:
    // 0x238f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_238f14:
    // 0x238f14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x238f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_238f18:
    // 0x238f18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_238f1c:
    // 0x238f1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x238f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238f20:
    // 0x238f20: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x238f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_238f24:
    // 0x238f24: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x238f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_238f28:
    // 0x238f28: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x238f28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_238f2c:
    // 0x238f2c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x238f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_238f30:
    // 0x238f30: 0x40f809  jalr        $v0
label_238f34:
    if (ctx->pc == 0x238F34u) {
        ctx->pc = 0x238F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F30u;
        // 0x238f34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F38u;
        goto label_238f38;
    }
    ctx->pc = 0x238F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238F38u);
        ctx->pc = 0x238F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F30u;
        // 0x238f34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238F30u, 0x238F38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238F38u;
label_238f38:
    // 0x238f38: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x238f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_238f3c:
    // 0x238f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238f40:
    // 0x238f40: 0xac626870  sw          $v0, 0x6870($v1)
    ctx->pc = 0x238f40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 26736), GPR_U32(ctx, 2));
label_238f44:
    // 0x238f44: 0x3e00008  jr          $ra
label_238f48:
    if (ctx->pc == 0x238F48u) {
        ctx->pc = 0x238F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F44u;
        // 0x238f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F4Cu;
        goto label_238f4c;
    }
    ctx->pc = 0x238F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F44u;
        // 0x238f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238F4Cu;
label_238f4c:
    // 0x238f4c: 0x0  nop
    ctx->pc = 0x238f4cu;
    // NOP
    ctx->pc = 0x238f50u;
}
