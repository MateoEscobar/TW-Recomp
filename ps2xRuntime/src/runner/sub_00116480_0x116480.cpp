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

// Function: sub_00116480
// Address: 0x116480 - 0x1164a8
void sub_00116480_0x116480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116480_0x116480");
#endif

    ctx->pc = 0x116480u;

    // 0x116480: 0x240202fc  addiu       $v0, $zero, 0x2FC
    ctx->pc = 0x116480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 764));
    // 0x116484: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x116484u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x116488: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x116488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x11648c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x11648cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x116490: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x116490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x116494: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x116494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x116498: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x116498u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x11649c: 0x3e00008  jr          $ra
    ctx->pc = 0x11649Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1164A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11649Cu;
        // 0x1164a0: 0xa0400002  sb          $zero, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11649Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1164A4u;
    // 0x1164a4: 0x0  nop
    ctx->pc = 0x1164a4u;
    // NOP
    ctx->pc = 0x1164a8u;
}
