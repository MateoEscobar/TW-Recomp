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

// Function: sub_001093F8
// Address: 0x1093f8 - 0x109460
void sub_001093F8_0x1093f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001093F8_0x1093f8");
#endif

    switch (ctx->pc) {
        case 0x10941cu: goto label_10941c;
        case 0x109430u: goto label_109430;
        case 0x109444u: goto label_109444;
        default: break;
    }

    ctx->pc = 0x1093f8u;

    // 0x1093f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1093f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1093fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1093fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x109400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109408: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x109408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10940c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10940cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x109410: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x109410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x109414: 0xc041164  jal         func_104590
    ctx->pc = 0x109414u;
    SET_GPR_U32(ctx, 31, 0x10941Cu);
    ctx->pc = 0x109418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109414u;
    // 0x109418: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x109414u, 0x10941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10941Cu;
label_10941c:
    // 0x10941c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x109420: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x109420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109424: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x109424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x109428: 0xc041164  jal         func_104590
    ctx->pc = 0x109428u;
    SET_GPR_U32(ctx, 31, 0x109430u);
    ctx->pc = 0x10942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109428u;
    // 0x10942c: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x109428u, 0x109430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109430u;
label_109430:
    // 0x109430: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x109430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x109434: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x109434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109438: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x109438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10943c: 0xc041164  jal         func_104590
    ctx->pc = 0x10943Cu;
    SET_GPR_U32(ctx, 31, 0x109444u);
    ctx->pc = 0x109440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10943Cu;
    // 0x109440: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x10943Cu, 0x109444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109444u;
label_109444:
    // 0x109444: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x109444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10944c: 0x3e00008  jr          $ra
    ctx->pc = 0x10944Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10944Cu;
        // 0x109450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10944Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109454u;
    // 0x109454: 0x0  nop
    ctx->pc = 0x109454u;
    // NOP
    // 0x109458: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x109458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x10945c: 0x0  nop
    ctx->pc = 0x10945cu;
    // NOP
    ctx->pc = 0x109460u;
}
