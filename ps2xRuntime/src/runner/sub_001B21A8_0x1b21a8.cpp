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

// Function: sub_001B21A8
// Address: 0x1b21a8 - 0x1b2200
void sub_001B21A8_0x1b21a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B21A8_0x1b21a8");
#endif

    switch (ctx->pc) {
        case 0x1b21bcu: goto label_1b21bc;
        case 0x1b21c4u: goto label_1b21c4;
        case 0x1b21ccu: goto label_1b21cc;
        case 0x1b21d4u: goto label_1b21d4;
        case 0x1b21e0u: goto label_1b21e0;
        case 0x1b21ecu: goto label_1b21ec;
        default: break;
    }

    ctx->pc = 0x1b21a8u;

    // 0x1b21a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b21a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b21ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b21acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b21b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b21b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b21b4: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x1B21B4u;
    SET_GPR_U32(ctx, 31, 0x1B21BCu);
    ctx->pc = 0x1B21B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B21B4u;
    // 0x1b21b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x1B21B4u, 0x1B21BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B21BCu;
label_1b21bc:
    // 0x1b21bc: 0xc06c940  jal         func_1B2500
    ctx->pc = 0x1B21BCu;
    SET_GPR_U32(ctx, 31, 0x1B21C4u);
    ctx->pc = 0x1B21C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B21BCu;
    // 0x1b21c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2500u, 0x1B21BCu, 0x1B21C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B21C4u;
label_1b21c4:
    // 0x1b21c4: 0xc071112  jal         func_1C4448
    ctx->pc = 0x1B21C4u;
    SET_GPR_U32(ctx, 31, 0x1B21CCu);
    ctx->pc = 0x1B21C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B21C4u;
    // 0x1b21c8: 0x260415d0  addiu       $a0, $s0, 0x15D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4448u, 0x1B21C4u, 0x1B21CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B21CCu;
label_1b21cc:
    // 0x1b21cc: 0xc071112  jal         func_1C4448
    ctx->pc = 0x1B21CCu;
    SET_GPR_U32(ctx, 31, 0x1B21D4u);
    ctx->pc = 0x1B21D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B21CCu;
    // 0x1b21d0: 0x26043f10  addiu       $a0, $s0, 0x3F10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4448u, 0x1B21CCu, 0x1B21D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B21D4u;
label_1b21d4:
    // 0x1b21d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b21d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21d8: 0xc06c924  jal         func_1B2490
    ctx->pc = 0x1B21D8u;
    SET_GPR_U32(ctx, 31, 0x1B21E0u);
    ctx->pc = 0x1B21DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B21D8u;
    // 0x1b21dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2490u, 0x1B21D8u, 0x1B21E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B21E0u;
label_1b21e0:
    // 0x1b21e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b21e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21e4: 0xc06c924  jal         func_1B2490
    ctx->pc = 0x1B21E4u;
    SET_GPR_U32(ctx, 31, 0x1B21ECu);
    ctx->pc = 0x1B21E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B21E4u;
    // 0x1b21e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2490u, 0x1B21E4u, 0x1B21ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B21ECu;
label_1b21ec:
    // 0x1b21ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b21ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b21f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b21f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b21f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B21F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21F4u;
        // 0x1b21f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B21F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B21FCu;
    // 0x1b21fc: 0x0  nop
    ctx->pc = 0x1b21fcu;
    // NOP
    ctx->pc = 0x1b2200u;
}
