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

// Function: sub_0010A4B0
// Address: 0x10a4b0 - 0x10a500
void sub_0010A4B0_0x10a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A4B0_0x10a4b0");
#endif

    switch (ctx->pc) {
        case 0x10a4d4u: goto label_10a4d4;
        case 0x10a4e8u: goto label_10a4e8;
        default: break;
    }

    ctx->pc = 0x10a4b0u;

    // 0x10a4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a4b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10a4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10a4b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a4bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a4c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10a4c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a4c4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x10a4c8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x10a4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10a4cc: 0xc041164  jal         func_104590
    ctx->pc = 0x10A4CCu;
    SET_GPR_U32(ctx, 31, 0x10A4D4u);
    ctx->pc = 0x10A4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A4CCu;
    // 0x10a4d0: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x10A4CCu, 0x10A4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A4D4u;
label_10a4d4:
    // 0x10a4d4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10a4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10a4d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10a4d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a4dc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x10a4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10a4e0: 0xc041164  jal         func_104590
    ctx->pc = 0x10A4E0u;
    SET_GPR_U32(ctx, 31, 0x10A4E8u);
    ctx->pc = 0x10A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A4E0u;
    // 0x10a4e4: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x10A4E0u, 0x10A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A4E8u;
label_10a4e8:
    // 0x10a4e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10a4e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a4ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x10A4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4F0u;
        // 0x10a4f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A4F8u;
    // 0x10a4f8: 0xac850040  sw          $a1, 0x40($a0)
    ctx->pc = 0x10a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
    // 0x10a4fc: 0x0  nop
    ctx->pc = 0x10a4fcu;
    // NOP
    ctx->pc = 0x10a500u;
}
