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

// Function: sub_00426C78
// Address: 0x426c78 - 0x426cc8
void sub_00426C78_0x426c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00426C78_0x426c78");
#endif

    switch (ctx->pc) {
        case 0x426cb4u: goto label_426cb4;
        default: break;
    }

    ctx->pc = 0x426c78u;

    // 0x426c78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x426c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x426c7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x426c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x426c80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x426c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x426c84: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x426c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x426c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x426c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426c8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x426c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x426c90: 0x8c4451c4  lw          $a0, 0x51C4($v0)
    ctx->pc = 0x426c90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5151C4u));
    // 0x426c94: 0x24a56cc8  addiu       $a1, $a1, 0x6CC8
    ctx->pc = 0x426c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27848));
    // 0x426c98: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x426c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x426c9c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x426c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426ca0: 0xae04006c  sw          $a0, 0x6C($s0)
    ctx->pc = 0x426ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 4));
    // 0x426ca4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x426ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426ca8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x426ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x426cac: 0xc11afd8  jal         func_46BF60
    ctx->pc = 0x426CACu;
    SET_GPR_U32(ctx, 31, 0x426CB4u);
    ctx->pc = 0x426CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426CACu;
    // 0x426cb0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BF60u, 0x426CACu, 0x426CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426CB4u;
label_426cb4:
    // 0x426cb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x426cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426cb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x426cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x426cbc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x426cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x426cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x426CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426CC0u;
        // 0x426cc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x426CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x426CC8u;
}
