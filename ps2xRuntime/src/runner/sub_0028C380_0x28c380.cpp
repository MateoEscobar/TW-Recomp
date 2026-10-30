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

// Function: sub_0028C380
// Address: 0x28c380 - 0x28c3b0
void sub_0028C380_0x28c380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C380_0x28c380");
#endif

    switch (ctx->pc) {
        case 0x28c394u: goto label_28c394;
        default: break;
    }

    ctx->pc = 0x28c380u;

    // 0x28c380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28c380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28c384: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28c384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28c388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28c388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28c38c: 0xc0a2a86  jal         func_28AA18
    ctx->pc = 0x28C38Cu;
    SET_GPR_U32(ctx, 31, 0x28C394u);
    ctx->pc = 0x28C390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C38Cu;
    // 0x28c390: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA18u, 0x28C38Cu, 0x28C394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C394u;
label_28c394:
    // 0x28c394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28c394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28c398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c39c: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x28c39cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x28c3a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28c3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x28C3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C3A4u;
        // 0x28c3a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C3ACu;
    // 0x28c3ac: 0x0  nop
    ctx->pc = 0x28c3acu;
    // NOP
    ctx->pc = 0x28c3b0u;
}
