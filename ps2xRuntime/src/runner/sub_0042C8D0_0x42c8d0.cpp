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

// Function: sub_0042C8D0
// Address: 0x42c8d0 - 0x42c900
void sub_0042C8D0_0x42c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C8D0_0x42c8d0");
#endif

    switch (ctx->pc) {
        case 0x42c8e4u: goto label_42c8e4;
        default: break;
    }

    ctx->pc = 0x42c8d0u;

    // 0x42c8d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42c8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42c8d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42c8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42c8d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42c8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x42c8dc: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x42C8DCu;
    SET_GPR_U32(ctx, 31, 0x42C8E4u);
    ctx->pc = 0x42C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C8DCu;
    // 0x42c8e0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x42C8DCu, 0x42C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C8E4u;
label_42c8e4:
    // 0x42c8e4: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x42c8e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x42c8e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42c8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42c8ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42c8ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c8f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42c8f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42c8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x42C8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C8F4u;
        // 0x42c8f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C8FCu;
    // 0x42c8fc: 0x0  nop
    ctx->pc = 0x42c8fcu;
    // NOP
    ctx->pc = 0x42c900u;
}
