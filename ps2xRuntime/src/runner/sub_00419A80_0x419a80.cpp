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

// Function: sub_00419A80
// Address: 0x419a80 - 0x419ac0
void sub_00419A80_0x419a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419A80_0x419a80");
#endif

    switch (ctx->pc) {
        case 0x419aa4u: goto label_419aa4;
        default: break;
    }

    ctx->pc = 0x419a80u;

    // 0x419a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x419a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x419a84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x419a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x419a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x419a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419a90: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x419a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x419a94: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x419A94u;
    {
        const bool branch_taken_0x419a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x419a94) {
            ctx->pc = 0x419A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419A94u;
            // 0x419a98: 0x8e0256f0  lw          $v0, 0x56F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419AB0u;
            goto label_419ab0;
        }
    }
    ctx->pc = 0x419A9Cu;
    // 0x419a9c: 0xc107444  jal         func_41D110
    ctx->pc = 0x419A9Cu;
    SET_GPR_U32(ctx, 31, 0x419AA4u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x419A9Cu, 0x419AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419AA4u;
label_419aa4:
    // 0x419aa4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x419AA4u;
    {
        const bool branch_taken_0x419aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x419aa4) {
            ctx->pc = 0x419AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419AA4u;
            // 0x419aa8: 0x8e0256f4  lw          $v0, 0x56F4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419AB0u;
            goto label_419ab0;
        }
    }
    ctx->pc = 0x419AACu;
    // 0x419aac: 0x8e0256ec  lw          $v0, 0x56EC($s0)
    ctx->pc = 0x419aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22252)));
label_419ab0:
    // 0x419ab0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x419ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x419AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419AB8u;
        // 0x419abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419AC0u;
}
