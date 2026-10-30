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

// Function: sub_001CDC20
// Address: 0x1cdc20 - 0x1cdc80
void sub_001CDC20_0x1cdc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDC20_0x1cdc20");
#endif

    switch (ctx->pc) {
        case 0x1cdc34u: goto label_1cdc34;
        case 0x1cdc4cu: goto label_1cdc4c;
        case 0x1cdc68u: goto label_1cdc68;
        default: break;
    }

    ctx->pc = 0x1cdc20u;

    // 0x1cdc20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdc24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cdc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cdc28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdc2c: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x1CDC2Cu;
    SET_GPR_U32(ctx, 31, 0x1CDC34u);
    ctx->pc = 0x1CDC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC2Cu;
    // 0x1cdc30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1CDC2Cu, 0x1CDC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC34u;
label_1cdc34:
    // 0x1cdc34: 0x8e040290  lw          $a0, 0x290($s0)
    ctx->pc = 0x1cdc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x1cdc38: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CDC38u;
    {
        const bool branch_taken_0x1cdc38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC38u;
        // 0x1cdc3c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc38) {
            ctx->pc = 0x1CDC50u;
            goto label_1cdc50;
        }
    }
    ctx->pc = 0x1CDC40u;
    // 0x1cdc40: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1cdc40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1cdc44: 0xc13a040  jal         func_4E8100
    ctx->pc = 0x1CDC44u;
    SET_GPR_U32(ctx, 31, 0x1CDC4Cu);
    ctx->pc = 0x1CDC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC44u;
    // 0x1cdc48: 0x24a559e8  addiu       $a1, $a1, 0x59E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8100u, 0x1CDC44u, 0x1CDC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC4Cu;
label_1cdc4c:
    // 0x1cdc4c: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x1cdc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
label_1cdc50:
    // 0x1cdc50: 0x8e040294  lw          $a0, 0x294($s0)
    ctx->pc = 0x1cdc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x1cdc54: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CDC54u;
    {
        const bool branch_taken_0x1cdc54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC54u;
        // 0x1cdc58: 0x24060086  addiu       $a2, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc54) {
            ctx->pc = 0x1CDC6Cu;
            goto label_1cdc6c;
        }
    }
    ctx->pc = 0x1CDC5Cu;
    // 0x1cdc5c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1cdc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1cdc60: 0xc13a068  jal         func_4E81A0
    ctx->pc = 0x1CDC60u;
    SET_GPR_U32(ctx, 31, 0x1CDC68u);
    ctx->pc = 0x1CDC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC60u;
    // 0x1cdc64: 0x24a559e8  addiu       $a1, $a1, 0x59E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E81A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E81A0u, 0x1CDC60u, 0x1CDC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC68u;
label_1cdc68:
    // 0x1cdc68: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x1cdc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
label_1cdc6c:
    // 0x1cdc6c: 0xae0003a0  sw          $zero, 0x3A0($s0)
    ctx->pc = 0x1cdc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
    // 0x1cdc70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cdc70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdc74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc78: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC78u;
        // 0x1cdc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDC80u;
}
