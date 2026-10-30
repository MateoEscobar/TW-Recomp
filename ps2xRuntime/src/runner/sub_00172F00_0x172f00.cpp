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

// Function: sub_00172F00
// Address: 0x172f00 - 0x172f28
void sub_00172F00_0x172f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172F00_0x172f00");
#endif

    ctx->pc = 0x172f00u;

    // 0x172f00: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x172f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x172f04: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172F04u;
    {
        const bool branch_taken_0x172f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x172F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F04u;
        // 0x172f08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f04) {
            ctx->pc = 0x172F1Cu;
            goto label_172f1c;
        }
    }
    ctx->pc = 0x172F0Cu;
    // 0x172f0c: 0x8c8311fc  lw          $v1, 0x11FC($a0)
    ctx->pc = 0x172f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4604)));
    // 0x172f10: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x172f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x172f14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x172f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x172f18: 0xac8311fc  sw          $v1, 0x11FC($a0)
    ctx->pc = 0x172f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4604), GPR_U32(ctx, 3));
label_172f1c:
    // 0x172f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x172F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172F24u;
    // 0x172f24: 0x0  nop
    ctx->pc = 0x172f24u;
    // NOP
    ctx->pc = 0x172f28u;
}
