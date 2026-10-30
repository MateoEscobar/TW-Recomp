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

// Function: sub_001D63F0
// Address: 0x1d63f0 - 0x1d6430
void sub_001D63F0_0x1d63f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D63F0_0x1d63f0");
#endif

    switch (ctx->pc) {
        case 0x1d6404u: goto label_1d6404;
        case 0x1d6418u: goto label_1d6418;
        default: break;
    }

    ctx->pc = 0x1d63f0u;

    // 0x1d63f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d63f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d63f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d63f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d63f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d63f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d63fc: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1D63FCu;
    SET_GPR_U32(ctx, 31, 0x1D6404u);
    ctx->pc = 0x1D6400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D63FCu;
    // 0x1d6400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1D63FCu, 0x1D6404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6404u;
label_1d6404:
    // 0x1d6404: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1d6404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1d6408: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d6408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d640c: 0x2463bcd0  addiu       $v1, $v1, -0x4330
    ctx->pc = 0x1d640cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950096));
    // 0x1d6410: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1D6410u;
    SET_GPR_U32(ctx, 31, 0x1D6418u);
    ctx->pc = 0x1D6414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6410u;
    // 0x1d6414: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1D6410u, 0x1D6418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6418u;
label_1d6418:
    // 0x1d6418: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d6418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d641c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d641cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6420: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d6420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6424: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6424u;
        // 0x1d6428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D642Cu;
    // 0x1d642c: 0x0  nop
    ctx->pc = 0x1d642cu;
    // NOP
    ctx->pc = 0x1d6430u;
}
