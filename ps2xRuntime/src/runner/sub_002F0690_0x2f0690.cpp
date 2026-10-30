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

// Function: sub_002F0690
// Address: 0x2f0690 - 0x2f06d0
void sub_002F0690_0x2f0690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0690_0x2f0690");
#endif

    switch (ctx->pc) {
        case 0x2f06a8u: goto label_2f06a8;
        case 0x2f06b4u: goto label_2f06b4;
        default: break;
    }

    ctx->pc = 0x2f0690u;

    // 0x2f0690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f0694: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f0694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f0698: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f069c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f069cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f06a0: 0xc087502  jal         func_21D408
    ctx->pc = 0x2F06A0u;
    SET_GPR_U32(ctx, 31, 0x2F06A8u);
    ctx->pc = 0x2F06A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F06A0u;
    // 0x2f06a4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2F06A0u, 0x2F06A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F06A8u;
label_2f06a8:
    // 0x2f06a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f06a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f06ac: 0xc0a404e  jal         func_290138
    ctx->pc = 0x2F06ACu;
    SET_GPR_U32(ctx, 31, 0x2F06B4u);
    ctx->pc = 0x2F06B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F06ACu;
    // 0x2f06b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x2F06ACu, 0x2F06B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F06B4u;
label_2f06b4:
    // 0x2f06b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f06b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f06b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f06b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f06bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f06bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f06c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f06c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2f06c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F06C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F06C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F06C4u;
        // 0x2f06c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F06C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F06CCu;
    // 0x2f06cc: 0x0  nop
    ctx->pc = 0x2f06ccu;
    // NOP
    ctx->pc = 0x2f06d0u;
}
