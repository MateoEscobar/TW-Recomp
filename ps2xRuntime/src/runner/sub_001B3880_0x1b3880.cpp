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

// Function: sub_001B3880
// Address: 0x1b3880 - 0x1b38b8
void sub_001B3880_0x1b3880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3880_0x1b3880");
#endif

    switch (ctx->pc) {
        case 0x1b389cu: goto label_1b389c;
        case 0x1b38a4u: goto label_1b38a4;
        default: break;
    }

    ctx->pc = 0x1b3880u;

    // 0x1b3880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b3884: 0x3402e530  ori         $v0, $zero, 0xE530
    ctx->pc = 0x1b3884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58672);
    // 0x1b3888: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b3888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b388c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1b388cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b3890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3894: 0xc07e506  jal         func_1F9418
    ctx->pc = 0x1B3894u;
    SET_GPR_U32(ctx, 31, 0x1B389Cu);
    ctx->pc = 0x1B3898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3894u;
    // 0x1b3898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9418u, 0x1B3894u, 0x1B389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B389Cu;
label_1b389c:
    // 0x1b389c: 0xc07e556  jal         func_1F9558
    ctx->pc = 0x1B389Cu;
    SET_GPR_U32(ctx, 31, 0x1B38A4u);
    ctx->pc = 0x1B38A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B389Cu;
    // 0x1b38a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9558u, 0x1B389Cu, 0x1B38A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B38A4u;
label_1b38a4:
    // 0x1b38a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b38a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b38a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b38a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b38ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B38ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B38B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B38ACu;
        // 0x1b38b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B38ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B38B4u;
    // 0x1b38b4: 0x0  nop
    ctx->pc = 0x1b38b4u;
    // NOP
    ctx->pc = 0x1b38b8u;
}
