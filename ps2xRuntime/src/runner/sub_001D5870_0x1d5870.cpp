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

// Function: sub_001D5870
// Address: 0x1d5870 - 0x1d58a8
void sub_001D5870_0x1d5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5870_0x1d5870");
#endif

    switch (ctx->pc) {
        case 0x1d5888u: goto label_1d5888;
        case 0x1d5894u: goto label_1d5894;
        default: break;
    }

    ctx->pc = 0x1d5870u;

    // 0x1d5870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5874: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d5878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d587c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d587cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5880: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1D5880u;
    SET_GPR_U32(ctx, 31, 0x1D5888u);
    ctx->pc = 0x1D5884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5880u;
    // 0x1d5884: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1D5880u, 0x1D5888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5888u;
label_1d5888:
    // 0x1d5888: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x1d5888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x1d588c: 0xc07599c  jal         func_1D6670
    ctx->pc = 0x1D588Cu;
    SET_GPR_U32(ctx, 31, 0x1D5894u);
    ctx->pc = 0x1D5890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D588Cu;
    // 0x1d5890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6670u, 0x1D588Cu, 0x1D5894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5894u;
label_1d5894:
    // 0x1d5894: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d5894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d589c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d589cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d58a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D58A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D58A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58A0u;
        // 0x1d58a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D58A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D58A8u;
}
