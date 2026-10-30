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

// Function: sub_0041AE30
// Address: 0x41ae30 - 0x41ae60
void sub_0041AE30_0x41ae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041AE30_0x41ae30");
#endif

    switch (ctx->pc) {
        case 0x41ae48u: goto label_41ae48;
        default: break;
    }

    ctx->pc = 0x41ae30u;

    // 0x41ae30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41ae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41ae34: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x41AE34u;
    {
        const bool branch_taken_0x41ae34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE34u;
        // 0x41ae38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ae34) {
            ctx->pc = 0x41AE50u;
            goto label_41ae50;
        }
    }
    ctx->pc = 0x41AE3Cu;
    // 0x41ae3c: 0x248402dc  addiu       $a0, $a0, 0x2DC
    ctx->pc = 0x41ae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 732));
    // 0x41ae40: 0xc10c4de  jal         func_431378
    ctx->pc = 0x41AE40u;
    SET_GPR_U32(ctx, 31, 0x41AE48u);
    ctx->pc = 0x41AE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AE40u;
    // 0x41ae44: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x41AE40u, 0x41AE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AE48u;
label_41ae48:
    // 0x41ae48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x41AE48u;
    {
        const bool branch_taken_0x41ae48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE48u;
        // 0x41ae4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ae48) {
            ctx->pc = 0x41AE58u;
            goto label_41ae58;
        }
    }
    ctx->pc = 0x41AE50u;
label_41ae50:
    // 0x41ae50: 0xa08002dc  sb          $zero, 0x2DC($a0)
    ctx->pc = 0x41ae50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 732), (uint8_t)GPR_U32(ctx, 0));
    // 0x41ae54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41ae54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41ae58:
    // 0x41ae58: 0x3e00008  jr          $ra
    ctx->pc = 0x41AE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE58u;
        // 0x41ae5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41AE60u;
}
