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

// Function: sub_0038EEC0
// Address: 0x38eec0 - 0x38eef8
void sub_0038EEC0_0x38eec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EEC0_0x38eec0");
#endif

    switch (ctx->pc) {
        case 0x38eee4u: goto label_38eee4;
        default: break;
    }

    ctx->pc = 0x38eec0u;

    // 0x38eec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38eec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38eec4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38eec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38eec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38eec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38eecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38eeccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eed0: 0x8e0500e8  lw          $a1, 0xE8($s0)
    ctx->pc = 0x38eed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x38eed4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38EED4u;
    {
        const bool branch_taken_0x38eed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EED4u;
        // 0x38eed8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eed4) {
            ctx->pc = 0x38EEE8u;
            goto label_38eee8;
        }
    }
    ctx->pc = 0x38EEDCu;
    // 0x38eedc: 0xc0cf456  jal         func_33D158
    ctx->pc = 0x38EEDCu;
    SET_GPR_U32(ctx, 31, 0x38EEE4u);
    ctx->pc = 0x38EEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EEDCu;
    // 0x38eee0: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D158u, 0x38EEDCu, 0x38EEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EEE4u;
label_38eee4:
    // 0x38eee4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x38eee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_38eee8:
    // 0x38eee8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38eee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38eeec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38eeecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38eef0: 0x3e00008  jr          $ra
    ctx->pc = 0x38EEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EEF0u;
        // 0x38eef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EEF8u;
}
