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

// Function: sub_004EFE20
// Address: 0x4efe20 - 0x4efe58
void sub_004EFE20_0x4efe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFE20_0x4efe20");
#endif

    switch (ctx->pc) {
        case 0x4efe20u: goto label_4efe20;
        case 0x4efe24u: goto label_4efe24;
        case 0x4efe28u: goto label_4efe28;
        case 0x4efe2cu: goto label_4efe2c;
        case 0x4efe30u: goto label_4efe30;
        case 0x4efe34u: goto label_4efe34;
        case 0x4efe38u: goto label_4efe38;
        case 0x4efe3cu: goto label_4efe3c;
        case 0x4efe40u: goto label_4efe40;
        case 0x4efe44u: goto label_4efe44;
        case 0x4efe48u: goto label_4efe48;
        case 0x4efe4cu: goto label_4efe4c;
        case 0x4efe50u: goto label_4efe50;
        case 0x4efe54u: goto label_4efe54;
        default: break;
    }

    ctx->pc = 0x4efe20u;

label_4efe20:
    // 0x4efe20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4efe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4efe24:
    // 0x4efe24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4efe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4efe28:
    // 0x4efe28: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4efe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4efe2c:
    // 0x4efe2c: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4efe2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4efe30:
    // 0x4efe30: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4efe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4efe34:
    // 0x4efe34: 0x40f809  jalr        $v0
label_4efe38:
    if (ctx->pc == 0x4EFE38u) {
        ctx->pc = 0x4EFE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFE34u;
        // 0x4efe38: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFE3Cu;
        goto label_4efe3c;
    }
    ctx->pc = 0x4EFE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EFE3Cu);
        ctx->pc = 0x4EFE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFE34u;
        // 0x4efe38: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFE34u, 0x4EFE3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EFE3Cu;
label_4efe3c:
    // 0x4efe3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4efe3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4efe40:
    // 0x4efe40: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4efe40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4efe44:
    // 0x4efe44: 0x3e00008  jr          $ra
label_4efe48:
    if (ctx->pc == 0x4EFE48u) {
        ctx->pc = 0x4EFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFE44u;
        // 0x4efe48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFE4Cu;
        goto label_4efe4c;
    }
    ctx->pc = 0x4EFE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFE44u;
        // 0x4efe48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EFE4Cu;
label_4efe4c:
    // 0x4efe4c: 0x0  nop
    ctx->pc = 0x4efe4cu;
    // NOP
label_4efe50:
    // 0x4efe50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4efe50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4efe54:
    // 0x4efe54: 0x0  nop
    ctx->pc = 0x4efe54u;
    // NOP
    ctx->pc = 0x4efe58u;
}
