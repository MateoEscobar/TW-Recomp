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

// Function: sub_003251E0
// Address: 0x3251e0 - 0x325220
void sub_003251E0_0x3251e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003251E0_0x3251e0");
#endif

    switch (ctx->pc) {
        case 0x3251f4u: goto label_3251f4;
        case 0x3251fcu: goto label_3251fc;
        case 0x325208u: goto label_325208;
        default: break;
    }

    ctx->pc = 0x3251e0u;

    // 0x3251e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3251e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3251e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3251e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3251e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3251e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3251ec: 0xc0cc97e  jal         func_3325F8
    ctx->pc = 0x3251ECu;
    SET_GPR_U32(ctx, 31, 0x3251F4u);
    ctx->pc = 0x3251F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3251ECu;
    // 0x3251f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3325F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3325F8u, 0x3251ECu, 0x3251F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3251F4u;
label_3251f4:
    // 0x3251f4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3251F4u;
    SET_GPR_U32(ctx, 31, 0x3251FCu);
    ctx->pc = 0x3251F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3251F4u;
    // 0x3251f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3251F4u, 0x3251FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3251FCu;
label_3251fc:
    // 0x3251fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3251fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325200: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x325200u;
    SET_GPR_U32(ctx, 31, 0x325208u);
    ctx->pc = 0x325204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325200u;
    // 0x325204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x325200u, 0x325208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325208u;
label_325208:
    // 0x325208: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x325208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32520c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325214: 0x3e00008  jr          $ra
    ctx->pc = 0x325214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325214u;
        // 0x325218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32521Cu;
    // 0x32521c: 0x0  nop
    ctx->pc = 0x32521cu;
    // NOP
    ctx->pc = 0x325220u;
}
