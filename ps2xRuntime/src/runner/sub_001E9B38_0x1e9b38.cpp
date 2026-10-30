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

// Function: sub_001E9B38
// Address: 0x1e9b38 - 0x1e9b88
void sub_001E9B38_0x1e9b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9B38_0x1e9b38");
#endif

    switch (ctx->pc) {
        case 0x1e9b5cu: goto label_1e9b5c;
        case 0x1e9b6cu: goto label_1e9b6c;
        case 0x1e9b74u: goto label_1e9b74;
        default: break;
    }

    ctx->pc = 0x1e9b38u;

    // 0x1e9b38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e9b3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9b40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e9b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e9b44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e9b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b48: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E9B48u;
    {
        const bool branch_taken_0x1e9b48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B48u;
        // 0x1e9b4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b48) {
            ctx->pc = 0x1E9B74u;
            goto label_1e9b74;
        }
    }
    ctx->pc = 0x1E9B50u;
    // 0x1e9b50: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1e9b50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1e9b54: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x1E9B54u;
    SET_GPR_U32(ctx, 31, 0x1E9B5Cu);
    ctx->pc = 0x1E9B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B54u;
    // 0x1e9b58: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x1E9B54u, 0x1E9B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B5Cu;
label_1e9b5c:
    // 0x1e9b5c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1e9b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x1e9b60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e9b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b64: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x1E9B64u;
    SET_GPR_U32(ctx, 31, 0x1E9B6Cu);
    ctx->pc = 0x1E9B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B64u;
    // 0x1e9b68: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x1E9B64u, 0x1E9B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B6Cu;
label_1e9b6c:
    // 0x1e9b6c: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x1E9B6Cu;
    SET_GPR_U32(ctx, 31, 0x1E9B74u);
    ctx->pc = 0x1E9B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B6Cu;
    // 0x1e9b70: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x1E9B6Cu, 0x1E9B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B74u;
label_1e9b74:
    // 0x1e9b74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e9b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9b78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9b80: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B80u;
        // 0x1e9b84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9B88u;
}
