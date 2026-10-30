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

// Function: sub_001100B0
// Address: 0x1100b0 - 0x1100e8
void sub_001100B0_0x1100b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001100B0_0x1100b0");
#endif

    switch (ctx->pc) {
        case 0x1100ccu: goto label_1100cc;
        case 0x1100d8u: goto label_1100d8;
        default: break;
    }

    ctx->pc = 0x1100b0u;

    // 0x1100b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1100b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1100b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1100b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1100b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1100b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1100bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1100c0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1100c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1100c4: 0xc050fda  jal         func_143F68
    ctx->pc = 0x1100C4u;
    SET_GPR_U32(ctx, 31, 0x1100CCu);
    ctx->pc = 0x1100C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1100C4u;
    // 0x1100c8: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1100C4u, 0x1100CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1100CCu;
label_1100cc:
    // 0x1100cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1100ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1100d0: 0xc04403a  jal         func_1100E8
    ctx->pc = 0x1100D0u;
    SET_GPR_U32(ctx, 31, 0x1100D8u);
    ctx->pc = 0x1100D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1100D0u;
    // 0x1100d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1100E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1100E8u, 0x1100D0u, 0x1100D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1100D8u;
label_1100d8:
    // 0x1100d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1100d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1100dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1100dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1100e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1100E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1100E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1100E0u;
        // 0x1100e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1100E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1100E8u;
}
