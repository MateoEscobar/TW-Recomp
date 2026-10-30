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

// Function: sub_002E4A70
// Address: 0x2e4a70 - 0x2e4ab8
void sub_002E4A70_0x2e4a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4A70_0x2e4a70");
#endif

    switch (ctx->pc) {
        case 0x2e4a88u: goto label_2e4a88;
        case 0x2e4a98u: goto label_2e4a98;
        default: break;
    }

    ctx->pc = 0x2e4a70u;

    // 0x2e4a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e4a74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e4a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e4a78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e4a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e4a80: 0xc0a739c  jal         func_29CE70
    ctx->pc = 0x2E4A80u;
    SET_GPR_U32(ctx, 31, 0x2E4A88u);
    ctx->pc = 0x2E4A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A80u;
    // 0x2e4a84: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x2E4A80u, 0x2E4A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A88u;
label_2e4a88:
    // 0x2e4a88: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4A88u;
    {
        const bool branch_taken_0x2e4a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4a88) {
            ctx->pc = 0x2E4A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4A88u;
            // 0x2e4a8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4AA4u;
            goto label_2e4aa4;
        }
    }
    ctx->pc = 0x2E4A90u;
    // 0x2e4a90: 0xc0d5016  jal         func_354058
    ctx->pc = 0x2E4A90u;
    SET_GPR_U32(ctx, 31, 0x2E4A98u);
    ctx->pc = 0x2E4A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A90u;
    // 0x2e4a94: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354058u, 0x2E4A90u, 0x2E4A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A98u;
label_2e4a98:
    // 0x2e4a98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e4a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e4a9c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2e4a9cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2e4aa0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e4aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e4aa4:
    // 0x2e4aa4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e4aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4aac: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4AACu;
        // 0x2e4ab0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4AB4u;
    // 0x2e4ab4: 0x0  nop
    ctx->pc = 0x2e4ab4u;
    // NOP
    ctx->pc = 0x2e4ab8u;
}
