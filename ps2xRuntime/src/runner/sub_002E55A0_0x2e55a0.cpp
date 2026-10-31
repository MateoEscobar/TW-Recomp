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

// Function: sub_002E55A0
// Address: 0x2e55a0 - 0x2e55e8
void sub_002E55A0_0x2e55a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E55A0_0x2e55a0");
#endif

    switch (ctx->pc) {
        case 0x2e55c8u: goto label_2e55c8;
        case 0x2e55d8u: goto label_2e55d8;
        default: break;
    }

    ctx->pc = 0x2e55a0u;

    // 0x2e55a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e55a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e55a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e55a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e55a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e55a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e55ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e55acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e55b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e55b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e55b4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e55b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e55b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E55B8u;
    {
        const bool branch_taken_0x2e55b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E55B8u;
        // 0x2e55bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e55b8) {
            ctx->pc = 0x2E55D0u;
            goto label_2e55d0;
        }
    }
    ctx->pc = 0x2E55C0u;
    // 0x2e55c0: 0xc0a33b6  jal         func_28CED8
    ctx->pc = 0x2E55C0u;
    SET_GPR_U32(ctx, 31, 0x2E55C8u);
    ctx->pc = 0x2E55C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E55C0u;
    // 0x2e55c4: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CED8u, 0x2E55C0u, 0x2E55C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E55C8u;
label_2e55c8:
    // 0x2e55c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e55c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e55cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e55ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e55d0:
    // 0x2e55d0: 0xc0a22c6  jal         func_288B18
    ctx->pc = 0x2E55D0u;
    SET_GPR_U32(ctx, 31, 0x2E55D8u);
    ctx->pc = 0x2E55D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E55D0u;
    // 0x2e55d4: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2E55D0u, 0x2E55D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E55D8u;
label_2e55d8:
    // 0x2e55d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e55d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e55dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e55dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e55e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E55E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E55E0u;
        // 0x2e55e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E55E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E55E8u;
}
