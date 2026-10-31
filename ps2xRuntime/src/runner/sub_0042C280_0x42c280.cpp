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

// Function: sub_0042C280
// Address: 0x42c280 - 0x42c2d0
void sub_0042C280_0x42c280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C280_0x42c280");
#endif

    switch (ctx->pc) {
        case 0x42c2a0u: goto label_42c2a0;
        case 0x42c2b0u: goto label_42c2b0;
        case 0x42c2bcu: goto label_42c2bc;
        default: break;
    }

    ctx->pc = 0x42c280u;

    // 0x42c280: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x42c280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x42c284: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x42c284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x42c288: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x42c288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x42c28c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x42c28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x42c290: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x42c290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x42c294: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x42c294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x42c298: 0xc10ae6e  jal         func_42B9B8
    ctx->pc = 0x42C298u;
    SET_GPR_U32(ctx, 31, 0x42C2A0u);
    ctx->pc = 0x42C29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C298u;
    // 0x42c29c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B9B8u, 0x42C298u, 0x42C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C2A0u;
label_42c2a0:
    // 0x42c2a0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x42c2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x42c2a4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x42c2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x42c2a8: 0xc10ae6e  jal         func_42B9B8
    ctx->pc = 0x42C2A8u;
    SET_GPR_U32(ctx, 31, 0x42C2B0u);
    ctx->pc = 0x42C2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C2A8u;
    // 0x42c2ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B9B8u, 0x42C2A8u, 0x42C2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C2B0u;
label_42c2b0:
    // 0x42c2b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42c2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c2b4: 0xc10b05a  jal         func_42C168
    ctx->pc = 0x42C2B4u;
    SET_GPR_U32(ctx, 31, 0x42C2BCu);
    ctx->pc = 0x42C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C2B4u;
    // 0x42c2b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C168u, 0x42C2B4u, 0x42C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C2BCu;
label_42c2bc:
    // 0x42c2bc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x42c2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x42c2c0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x42c2c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x42c2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x42C2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C2C4u;
        // 0x42c2c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C2CCu;
    // 0x42c2cc: 0x0  nop
    ctx->pc = 0x42c2ccu;
    // NOP
    ctx->pc = 0x42c2d0u;
}
