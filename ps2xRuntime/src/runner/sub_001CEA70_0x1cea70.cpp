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

// Function: sub_001CEA70
// Address: 0x1cea70 - 0x1ceab0
void sub_001CEA70_0x1cea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEA70_0x1cea70");
#endif

    switch (ctx->pc) {
        case 0x1cea84u: goto label_1cea84;
        case 0x1cea98u: goto label_1cea98;
        default: break;
    }

    ctx->pc = 0x1cea70u;

    // 0x1cea70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cea70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cea74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cea74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cea78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cea7c: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1CEA7Cu;
    SET_GPR_U32(ctx, 31, 0x1CEA84u);
    ctx->pc = 0x1CEA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA7Cu;
    // 0x1cea80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1CEA7Cu, 0x1CEA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA84u;
label_1cea84:
    // 0x1cea84: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1cea84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1cea88: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1cea88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1cea8c: 0x2463b0f0  addiu       $v1, $v1, -0x4F10
    ctx->pc = 0x1cea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947056));
    // 0x1cea90: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1CEA90u;
    SET_GPR_U32(ctx, 31, 0x1CEA98u);
    ctx->pc = 0x1CEA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA90u;
    // 0x1cea94: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1CEA90u, 0x1CEA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA98u;
label_1cea98:
    // 0x1cea98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cea98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cea9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ceaa0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ceaa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ceaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEAA4u;
        // 0x1ceaa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEAACu;
    // 0x1ceaac: 0x0  nop
    ctx->pc = 0x1ceaacu;
    // NOP
    ctx->pc = 0x1ceab0u;
}
