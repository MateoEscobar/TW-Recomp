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

// Function: sub_001A38D8
// Address: 0x1a38d8 - 0x1a3918
void sub_001A38D8_0x1a38d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A38D8_0x1a38d8");
#endif

    switch (ctx->pc) {
        case 0x1a38f0u: goto label_1a38f0;
        case 0x1a38f8u: goto label_1a38f8;
        case 0x1a3900u: goto label_1a3900;
        default: break;
    }

    ctx->pc = 0x1a38d8u;

    // 0x1a38d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a38d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a38dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a38dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a38e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a38e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a38e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a38e8: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1A38E8u;
    SET_GPR_U32(ctx, 31, 0x1A38F0u);
    ctx->pc = 0x1A38ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38E8u;
    // 0x1a38ec: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1A38E8u, 0x1A38F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A38F0u;
label_1a38f0:
    // 0x1a38f0: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1A38F0u;
    SET_GPR_U32(ctx, 31, 0x1A38F8u);
    ctx->pc = 0x1A38F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38F0u;
    // 0x1a38f4: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1A38F0u, 0x1A38F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A38F8u;
label_1a38f8:
    // 0x1a38f8: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1A38F8u;
    SET_GPR_U32(ctx, 31, 0x1A3900u);
    ctx->pc = 0x1A38FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38F8u;
    // 0x1a38fc: 0x26040240  addiu       $a0, $s0, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1A38F8u, 0x1A3900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3900u;
label_1a3900:
    // 0x1a3900: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a3900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a3904: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a3904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a390c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A390Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A390Cu;
        // 0x1a3910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A390Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3914u;
    // 0x1a3914: 0x0  nop
    ctx->pc = 0x1a3914u;
    // NOP
    ctx->pc = 0x1a3918u;
}
