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

// Function: sub_00154718
// Address: 0x154718 - 0x1547b0
void sub_00154718_0x154718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154718_0x154718");
#endif

    ctx->pc = 0x154718u;

    // 0x154718: 0x3e00008  jr          $ra
    ctx->pc = 0x154718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154718u;
        // 0x15471c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154720u;
    // 0x154720: 0x27bd0460  addiu       $sp, $sp, 0x460
    ctx->pc = 0x154720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x154724: 0x0  nop
    ctx->pc = 0x154724u;
    // NOP
    // 0x154728: 0x27bd0460  addiu       $sp, $sp, 0x460
    ctx->pc = 0x154728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x15472c: 0x0  nop
    ctx->pc = 0x15472cu;
    // NOP
    // 0x154730: 0x27bd0460  addiu       $sp, $sp, 0x460
    ctx->pc = 0x154730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x154734: 0x0  nop
    ctx->pc = 0x154734u;
    // NOP
    // 0x154738: 0x27bd0470  addiu       $sp, $sp, 0x470
    ctx->pc = 0x154738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    // 0x15473c: 0x0  nop
    ctx->pc = 0x15473cu;
    // NOP
    // 0x154740: 0x27bd0460  addiu       $sp, $sp, 0x460
    ctx->pc = 0x154740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x154744: 0x0  nop
    ctx->pc = 0x154744u;
    // NOP
    // 0x154748: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x154748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15474c: 0x0  nop
    ctx->pc = 0x15474cu;
    // NOP
    // 0x154750: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x154750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x154754: 0x0  nop
    ctx->pc = 0x154754u;
    // NOP
    // 0x154758: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x154758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15475c: 0x0  nop
    ctx->pc = 0x15475cu;
    // NOP
    // 0x154760: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x154760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x154764: 0x0  nop
    ctx->pc = 0x154764u;
    // NOP
    // 0x154768: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x154768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15476c: 0x0  nop
    ctx->pc = 0x15476cu;
    // NOP
    // 0x154770: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x154770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x154774: 0x0  nop
    ctx->pc = 0x154774u;
    // NOP
    // 0x154778: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x154778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15477c: 0x0  nop
    ctx->pc = 0x15477cu;
    // NOP
    // 0x154780: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x154780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x154784: 0x0  nop
    ctx->pc = 0x154784u;
    // NOP
    // 0x154788: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x154788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15478c: 0x0  nop
    ctx->pc = 0x15478cu;
    // NOP
    // 0x154790: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x154790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x154794: 0x0  nop
    ctx->pc = 0x154794u;
    // NOP
    // 0x154798: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x154798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15479c: 0x0  nop
    ctx->pc = 0x15479cu;
    // NOP
    // 0x1547a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1547a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1547a4: 0x0  nop
    ctx->pc = 0x1547a4u;
    // NOP
    // 0x1547a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1547a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1547ac: 0x0  nop
    ctx->pc = 0x1547acu;
    // NOP
    ctx->pc = 0x1547b0u;
}
