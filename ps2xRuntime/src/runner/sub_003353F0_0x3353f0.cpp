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

// Function: sub_003353F0
// Address: 0x3353f0 - 0x335420
void sub_003353F0_0x3353f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003353F0_0x3353f0");
#endif

    switch (ctx->pc) {
        case 0x335408u: goto label_335408;
        default: break;
    }

    ctx->pc = 0x3353f0u;

    // 0x3353f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3353f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3353f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3353f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3353f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3353f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3353fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3353fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x335400: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x335400u;
    SET_GPR_U32(ctx, 31, 0x335408u);
    ctx->pc = 0x335404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335400u;
    // 0x335404: 0xd02823  subu        $a1, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x335400u, 0x335408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335408u;
label_335408:
    // 0x335408: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x335408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33540c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33540cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335410: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x335410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335414: 0x3e00008  jr          $ra
    ctx->pc = 0x335414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335414u;
        // 0x335418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33541Cu;
    // 0x33541c: 0x0  nop
    ctx->pc = 0x33541cu;
    // NOP
    ctx->pc = 0x335420u;
}
