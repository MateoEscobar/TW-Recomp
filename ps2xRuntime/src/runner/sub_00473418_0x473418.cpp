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

// Function: sub_00473418
// Address: 0x473418 - 0x473478
void sub_00473418_0x473418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473418_0x473418");
#endif

    ctx->pc = 0x473418u;

    // 0x473418: 0x8f868518  lw          $a2, -0x7AE8($gp)
    ctx->pc = 0x473418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935832)));
    // 0x47341c: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x47341cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x473420: 0x3c090047  lui         $t1, 0x47
    ctx->pc = 0x473420u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)71 << 16));
    // 0x473424: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x473424u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x473428: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x473428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x47342c: 0x25083c00  addiu       $t0, $t0, 0x3C00
    ctx->pc = 0x47342cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15360));
    // 0x473430: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x473430u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x473434: 0x25293b88  addiu       $t1, $t1, 0x3B88
    ctx->pc = 0x473434u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15240));
    // 0x473438: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x473438u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x47343c: 0x24e73bd0  addiu       $a3, $a3, 0x3BD0
    ctx->pc = 0x47343cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15312));
    // 0x473440: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x473440u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x473444: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x473444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473448: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x473448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x47344c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x47344cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x473450: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x473450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x473454: 0xacc50014  sw          $a1, 0x14($a2)
    ctx->pc = 0x473454u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
    // 0x473458: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x473458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x47345c: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x47345cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x473460: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x473460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x473464: 0xac890018  sw          $t1, 0x18($a0)
    ctx->pc = 0x473464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 9));
    // 0x473468: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x473468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
    // 0x47346c: 0x3e00008  jr          $ra
    ctx->pc = 0x47346Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47346Cu;
        // 0x473470: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47346Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473474u;
    // 0x473474: 0x0  nop
    ctx->pc = 0x473474u;
    // NOP
    ctx->pc = 0x473478u;
}
