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

// Function: sub_0014C380
// Address: 0x14c380 - 0x14c3b8
void sub_0014C380_0x14c380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C380_0x14c380");
#endif

    switch (ctx->pc) {
        case 0x14c3a0u: goto label_14c3a0;
        case 0x14c3a8u: goto label_14c3a8;
        default: break;
    }

    ctx->pc = 0x14c380u;

    // 0x14c380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14c384: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14c384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14c388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c38c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c390: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x14c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x14c394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c398: 0xc053112  jal         func_14C448
    ctx->pc = 0x14C398u;
    SET_GPR_U32(ctx, 31, 0x14C3A0u);
    ctx->pc = 0x14C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C398u;
    // 0x14c39c: 0xae020828  sw          $v0, 0x828($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C448u, 0x14C398u, 0x14C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C3A0u;
label_14c3a0:
    // 0x14c3a0: 0xc0530ee  jal         func_14C3B8
    ctx->pc = 0x14C3A0u;
    SET_GPR_U32(ctx, 31, 0x14C3A8u);
    ctx->pc = 0x14C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C3A0u;
    // 0x14c3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C3B8u, 0x14C3A0u, 0x14C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C3A8u;
label_14c3a8:
    // 0x14c3a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14c3a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c3ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x14C3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C3B0u;
        // 0x14c3b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C3B8u;
}
