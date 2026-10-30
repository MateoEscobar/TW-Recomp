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

// Function: sub_0049DE30
// Address: 0x49de30 - 0x49de78
void sub_0049DE30_0x49de30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049DE30_0x49de30");
#endif

    switch (ctx->pc) {
        case 0x49de68u: goto label_49de68;
        default: break;
    }

    ctx->pc = 0x49de30u;

    // 0x49de30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49de30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49de34: 0x8f838a58  lw          $v1, -0x75A8($gp)
    ctx->pc = 0x49de34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49de38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49de38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49de3c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x49DE3Cu;
    {
        const bool branch_taken_0x49de3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DE3Cu;
        // 0x49de40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49de3c) {
            ctx->pc = 0x49DE68u;
            goto label_49de68;
        }
    }
    ctx->pc = 0x49DE44u;
    // 0x49de44: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x49de44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x49de48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x49de48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49de4c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x49de4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x49de50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x49de50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49de54: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x49de54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x49de58: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x49de58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x49de5c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x49de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x49de60: 0xc1264d4  jal         func_499350
    ctx->pc = 0x49DE60u;
    SET_GPR_U32(ctx, 31, 0x49DE68u);
    ctx->pc = 0x49DE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DE60u;
    // 0x49de64: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499350u, 0x49DE60u, 0x49DE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DE68u;
label_49de68:
    // 0x49de68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49de68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49de6c: 0x3e00008  jr          $ra
    ctx->pc = 0x49DE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DE6Cu;
        // 0x49de70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49DE74u;
    // 0x49de74: 0x0  nop
    ctx->pc = 0x49de74u;
    // NOP
    ctx->pc = 0x49de78u;
}
