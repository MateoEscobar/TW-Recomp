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

// Function: sub_0022D2D8
// Address: 0x22d2d8 - 0x22d310
void sub_0022D2D8_0x22d2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D2D8_0x22d2d8");
#endif

    switch (ctx->pc) {
        case 0x22d2f4u: goto label_22d2f4;
        case 0x22d2fcu: goto label_22d2fc;
        default: break;
    }

    ctx->pc = 0x22d2d8u;

    // 0x22d2d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22d2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22d2dc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22d2dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22d2e0: 0x52ef8  dsll        $a1, $a1, 27
    ctx->pc = 0x22d2e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 27);
    // 0x22d2e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22d2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22d2e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22d2ec: 0xc089974  jal         func_2265D0
    ctx->pc = 0x22D2ECu;
    SET_GPR_U32(ctx, 31, 0x22D2F4u);
    ctx->pc = 0x22D2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D2ECu;
    // 0x22d2f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22D2ECu, 0x22D2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D2F4u;
label_22d2f4:
    // 0x22d2f4: 0xc08d268  jal         func_2349A0
    ctx->pc = 0x22D2F4u;
    SET_GPR_U32(ctx, 31, 0x22D2FCu);
    ctx->pc = 0x22D2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D2F4u;
    // 0x22d2f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2349A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2349A0u, 0x22D2F4u, 0x22D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D2FCu;
label_22d2fc:
    // 0x22d2fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22d2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d304: 0x3e00008  jr          $ra
    ctx->pc = 0x22D304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D304u;
        // 0x22d308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D30Cu;
    // 0x22d30c: 0x0  nop
    ctx->pc = 0x22d30cu;
    // NOP
    ctx->pc = 0x22d310u;
}
