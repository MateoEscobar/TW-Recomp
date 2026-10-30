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

// Function: sub_0033AE38
// Address: 0x33ae38 - 0x33ae70
void sub_0033AE38_0x33ae38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AE38_0x33ae38");
#endif

    switch (ctx->pc) {
        case 0x33ae60u: goto label_33ae60;
        default: break;
    }

    ctx->pc = 0x33ae38u;

    // 0x33ae38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33ae38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33ae3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ae40: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33AE40u;
    {
        const bool branch_taken_0x33ae40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x33AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE40u;
        // 0x33ae44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ae40) {
            ctx->pc = 0x33AE4Cu;
            goto label_33ae4c;
        }
    }
    ctx->pc = 0x33AE48u;
    // 0x33ae48: 0xac860058  sw          $a2, 0x58($a0)
    ctx->pc = 0x33ae48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 6));
label_33ae4c:
    // 0x33ae4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33ae50: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x33AE50u;
    {
        const bool branch_taken_0x33ae50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ae50) {
            ctx->pc = 0x33AE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AE50u;
            // 0x33ae54: 0xac86005c  sw          $a2, 0x5C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AE58u;
            goto label_33ae58;
        }
    }
    ctx->pc = 0x33AE58u;
label_33ae58:
    // 0x33ae58: 0xc0ce1f4  jal         func_3387D0
    ctx->pc = 0x33AE58u;
    SET_GPR_U32(ctx, 31, 0x33AE60u);
    ctx->pc = 0x3387D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3387D0u, 0x33AE58u, 0x33AE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE60u;
label_33ae60:
    // 0x33ae60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33ae60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ae64: 0x3e00008  jr          $ra
    ctx->pc = 0x33AE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE64u;
        // 0x33ae68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AE6Cu;
    // 0x33ae6c: 0x0  nop
    ctx->pc = 0x33ae6cu;
    // NOP
    ctx->pc = 0x33ae70u;
}
