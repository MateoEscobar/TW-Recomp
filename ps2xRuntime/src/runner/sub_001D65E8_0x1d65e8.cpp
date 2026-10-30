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

// Function: sub_001D65E8
// Address: 0x1d65e8 - 0x1d6620
void sub_001D65E8_0x1d65e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D65E8_0x1d65e8");
#endif

    switch (ctx->pc) {
        case 0x1d6608u: goto label_1d6608;
        case 0x1d6610u: goto label_1d6610;
        default: break;
    }

    ctx->pc = 0x1d65e8u;

    // 0x1d65e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d65e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d65ec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d65ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d65f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d65f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d65f4: 0x24900050  addiu       $s0, $a0, 0x50
    ctx->pc = 0x1d65f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1d65f8: 0x8c45d310  lw          $a1, -0x2CF0($v0)
    ctx->pc = 0x1d65f8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5FD310u));
    // 0x1d65fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d65fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6600: 0xc06e534  jal         func_1B94D0
    ctx->pc = 0x1D6600u;
    SET_GPR_U32(ctx, 31, 0x1D6608u);
    ctx->pc = 0x1D6604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6600u;
    // 0x1d6604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94D0u, 0x1D6600u, 0x1D6608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6608u;
label_1d6608:
    // 0x1d6608: 0xc06ec70  jal         func_1BB1C0
    ctx->pc = 0x1D6608u;
    SET_GPR_U32(ctx, 31, 0x1D6610u);
    ctx->pc = 0x1D660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6608u;
    // 0x1d660c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1D6608u, 0x1D6610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6610u;
label_1d6610:
    // 0x1d6610: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d6610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6618: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6618u;
        // 0x1d661c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6620u;
}
