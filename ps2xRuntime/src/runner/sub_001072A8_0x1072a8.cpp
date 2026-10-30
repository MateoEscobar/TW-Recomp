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

// Function: sub_001072A8
// Address: 0x1072a8 - 0x107320
void sub_001072A8_0x1072a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001072A8_0x1072a8");
#endif

    switch (ctx->pc) {
        case 0x1072ccu: goto label_1072cc;
        case 0x1072e0u: goto label_1072e0;
        case 0x1072f4u: goto label_1072f4;
        case 0x107308u: goto label_107308;
        default: break;
    }

    ctx->pc = 0x1072a8u;

    // 0x1072a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1072a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1072ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1072acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1072b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1072b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1072b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1072b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1072b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072bc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1072bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1072c0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1072c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1072c4: 0xc041164  jal         func_104590
    ctx->pc = 0x1072C4u;
    SET_GPR_U32(ctx, 31, 0x1072CCu);
    ctx->pc = 0x1072C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1072C4u;
    // 0x1072c8: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x1072C4u, 0x1072CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072CCu;
label_1072cc:
    // 0x1072cc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1072ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1072d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1072d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072d4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1072d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1072d8: 0xc041164  jal         func_104590
    ctx->pc = 0x1072D8u;
    SET_GPR_U32(ctx, 31, 0x1072E0u);
    ctx->pc = 0x1072DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1072D8u;
    // 0x1072dc: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x1072D8u, 0x1072E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072E0u;
label_1072e0:
    // 0x1072e0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1072e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1072e4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1072e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072e8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1072e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1072ec: 0xc041164  jal         func_104590
    ctx->pc = 0x1072ECu;
    SET_GPR_U32(ctx, 31, 0x1072F4u);
    ctx->pc = 0x1072F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1072ECu;
    // 0x1072f0: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x1072ECu, 0x1072F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072F4u;
label_1072f4:
    // 0x1072f4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1072f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1072f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1072f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072fc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1072fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x107300: 0xc041164  jal         func_104590
    ctx->pc = 0x107300u;
    SET_GPR_U32(ctx, 31, 0x107308u);
    ctx->pc = 0x107304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107300u;
    // 0x107304: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x107300u, 0x107308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107308u;
label_107308:
    // 0x107308: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x107308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10730c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10730cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107310: 0x3e00008  jr          $ra
    ctx->pc = 0x107310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107310u;
        // 0x107314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107318u;
    // 0x107318: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x107318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x10731c: 0x0  nop
    ctx->pc = 0x10731cu;
    // NOP
    ctx->pc = 0x107320u;
}
