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

// Function: sub_00484300
// Address: 0x484300 - 0x484320
void sub_00484300_0x484300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484300_0x484300");
#endif

    ctx->pc = 0x484300u;

    // 0x484300: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x484300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x484304: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x484304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x484308: 0x3e00008  jr          $ra
    ctx->pc = 0x484308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484308u;
        // 0x48430c: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484310u;
    // 0x484310: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x484310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x484314: 0x0  nop
    ctx->pc = 0x484314u;
    // NOP
    // 0x484318: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x484318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48431c: 0x0  nop
    ctx->pc = 0x48431cu;
    // NOP
    ctx->pc = 0x484320u;
}
