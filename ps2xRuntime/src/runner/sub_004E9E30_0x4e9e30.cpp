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

// Function: sub_004E9E30
// Address: 0x4e9e30 - 0x4e9e60
void sub_004E9E30_0x4e9e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9E30_0x4e9e30");
#endif

    switch (ctx->pc) {
        case 0x4e9e30u: goto label_4e9e30;
        case 0x4e9e34u: goto label_4e9e34;
        case 0x4e9e38u: goto label_4e9e38;
        case 0x4e9e3cu: goto label_4e9e3c;
        case 0x4e9e40u: goto label_4e9e40;
        case 0x4e9e44u: goto label_4e9e44;
        case 0x4e9e48u: goto label_4e9e48;
        case 0x4e9e4cu: goto label_4e9e4c;
        case 0x4e9e50u: goto label_4e9e50;
        case 0x4e9e54u: goto label_4e9e54;
        case 0x4e9e58u: goto label_4e9e58;
        case 0x4e9e5cu: goto label_4e9e5c;
        default: break;
    }

    ctx->pc = 0x4e9e30u;

label_4e9e30:
    // 0x4e9e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e9e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4e9e34:
    // 0x4e9e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e9e38:
    // 0x4e9e38: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x4e9e38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_4e9e3c:
    // 0x4e9e3c: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x4e9e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_4e9e40:
    // 0x4e9e40: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x4e9e40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_4e9e44:
    // 0x4e9e44: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e9e48:
    // 0x4e9e48: 0x40f809  jalr        $v0
label_4e9e4c:
    if (ctx->pc == 0x4E9E4Cu) {
        ctx->pc = 0x4E9E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9E48u;
        // 0x4e9e4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9E50u;
        goto label_4e9e50;
    }
    ctx->pc = 0x4E9E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E9E50u);
        ctx->pc = 0x4E9E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9E48u;
        // 0x4e9e4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9E48u, 0x4E9E50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9E50u;
label_4e9e50:
    // 0x4e9e50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e9e54:
    // 0x4e9e54: 0x3e00008  jr          $ra
label_4e9e58:
    if (ctx->pc == 0x4E9E58u) {
        ctx->pc = 0x4E9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9E54u;
        // 0x4e9e58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9E5Cu;
        goto label_4e9e5c;
    }
    ctx->pc = 0x4E9E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9E54u;
        // 0x4e9e58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9E5Cu;
label_4e9e5c:
    // 0x4e9e5c: 0x0  nop
    ctx->pc = 0x4e9e5cu;
    // NOP
    ctx->pc = 0x4e9e60u;
}
