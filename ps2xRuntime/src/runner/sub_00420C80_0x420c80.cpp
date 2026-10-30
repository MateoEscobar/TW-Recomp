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

// Function: sub_00420C80
// Address: 0x420c80 - 0x420cb8
void sub_00420C80_0x420c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420C80_0x420c80");
#endif

    switch (ctx->pc) {
        case 0x420c9cu: goto label_420c9c;
        default: break;
    }

    ctx->pc = 0x420c80u;

    // 0x420c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x420c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x420c84: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x420c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x420c88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x420c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x420c8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x420c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420c90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x420c94: 0xc107444  jal         func_41D110
    ctx->pc = 0x420C94u;
    SET_GPR_U32(ctx, 31, 0x420C9Cu);
    ctx->pc = 0x420C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420C94u;
    // 0x420c98: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x420C94u, 0x420C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420C9Cu;
label_420c9c:
    // 0x420c9c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x420C9Cu;
    {
        const bool branch_taken_0x420c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x420c9c) {
            ctx->pc = 0x420CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420C9Cu;
            // 0x420ca0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420CA8u;
            goto label_420ca8;
        }
    }
    ctx->pc = 0x420CA4u;
    // 0x420ca4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x420ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_420ca8:
    // 0x420ca8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x420ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x420cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x420cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x420CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420CB0u;
        // 0x420cb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420CB8u;
}
