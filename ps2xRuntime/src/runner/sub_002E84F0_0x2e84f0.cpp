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

// Function: sub_002E84F0
// Address: 0x2e84f0 - 0x2e8528
void sub_002E84F0_0x2e84f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E84F0_0x2e84f0");
#endif

    switch (ctx->pc) {
        case 0x2e850cu: goto label_2e850c;
        case 0x2e8518u: goto label_2e8518;
        default: break;
    }

    ctx->pc = 0x2e84f0u;

    // 0x2e84f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e84f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e84f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e84f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e84f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e84f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e84fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e84fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8500: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e8500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e8504: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2E8504u;
    SET_GPR_U32(ctx, 31, 0x2E850Cu);
    ctx->pc = 0x2E8508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8504u;
    // 0x2e8508: 0x82050040  lb          $a1, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2E8504u, 0x2E850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E850Cu;
label_2e850c:
    // 0x2e850c: 0x82050041  lb          $a1, 0x41($s0)
    ctx->pc = 0x2e850cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x2e8510: 0xc0a3398  jal         func_28CE60
    ctx->pc = 0x2E8510u;
    SET_GPR_U32(ctx, 31, 0x2E8518u);
    ctx->pc = 0x2E8514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8510u;
    // 0x2e8514: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CE60u, 0x2E8510u, 0x2E8518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8518u;
label_2e8518:
    // 0x2e8518: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e8518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e851c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e851cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8520: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8520u;
        // 0x2e8524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8528u;
}
