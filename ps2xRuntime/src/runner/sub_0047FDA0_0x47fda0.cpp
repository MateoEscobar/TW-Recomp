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

// Function: sub_0047FDA0
// Address: 0x47fda0 - 0x47fdf0
void sub_0047FDA0_0x47fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047FDA0_0x47fda0");
#endif

    switch (ctx->pc) {
        case 0x47fdc8u: goto label_47fdc8;
        default: break;
    }

    ctx->pc = 0x47fda0u;

    // 0x47fda0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x47fda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x47fda4: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x47fda4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x47fda8: 0x8f858604  lw          $a1, -0x79FC($gp)
    ctx->pc = 0x47fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936068)));
    // 0x47fdac: 0x2508acc8  addiu       $t0, $t0, -0x5338
    ctx->pc = 0x47fdacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294945992));
    // 0x47fdb0: 0x8f878608  lw          $a3, -0x79F8($gp)
    ctx->pc = 0x47fdb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
    // 0x47fdb4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x47fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x47fdb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47fdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47fdbc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x47fdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x47fdc0: 0xc11f66e  jal         func_47D9B8
    ctx->pc = 0x47FDC0u;
    SET_GPR_U32(ctx, 31, 0x47FDC8u);
    ctx->pc = 0x47FDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47FDC0u;
    // 0x47fdc4: 0x3c090004  lui         $t1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x47FDC0u, 0x47FDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FDC8u;
label_47fdc8:
    // 0x47fdc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47FDC8u;
    {
        const bool branch_taken_0x47fdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FDC8u;
        // 0x47fdcc: 0xaf828948  sw          $v0, -0x76B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936904), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fdc8) {
            ctx->pc = 0x47FDDCu;
            goto label_47fddc;
        }
    }
    ctx->pc = 0x47FDD0u;
    // 0x47fdd0: 0xaf808600  sw          $zero, -0x7A00($gp)
    ctx->pc = 0x47fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936064), GPR_U32(ctx, 0));
    // 0x47fdd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x47FDD4u;
    {
        const bool branch_taken_0x47fdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FDD4u;
        // 0x47fdd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fdd4) {
            ctx->pc = 0x47FDE0u;
            goto label_47fde0;
        }
    }
    ctx->pc = 0x47FDDCu;
label_47fddc:
    // 0x47fddc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47fddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47fde0:
    // 0x47fde0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47fde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47fde4: 0x3e00008  jr          $ra
    ctx->pc = 0x47FDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FDE4u;
        // 0x47fde8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47FDECu;
    // 0x47fdec: 0x0  nop
    ctx->pc = 0x47fdecu;
    // NOP
    ctx->pc = 0x47fdf0u;
}
