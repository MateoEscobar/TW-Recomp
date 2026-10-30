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

// Function: sub_00294C98
// Address: 0x294c98 - 0x294ce0
void sub_00294C98_0x294c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294C98_0x294c98");
#endif

    ctx->pc = 0x294c98u;

    // 0x294c98: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x294c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x294c9c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x294c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x294ca0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x294ca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x294ca4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x294ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x294ca8: 0x8ce2bd30  lw          $v0, -0x42D0($a3)
    ctx->pc = 0x294ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
    // 0x294cac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x294cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294cb0: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x294cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x294cb4: 0xac6201b0  sw          $v0, 0x1B0($v1)
    ctx->pc = 0x294cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 432), GPR_U32(ctx, 2));
    // 0x294cb8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x294cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x294cbc: 0xaca601b4  sw          $a2, 0x1B4($a1)
    ctx->pc = 0x294cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 436), GPR_U32(ctx, 6));
    // 0x294cc0: 0x8ce2bd30  lw          $v0, -0x42D0($a3)
    ctx->pc = 0x294cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
    // 0x294cc4: 0xac6201b8  sw          $v0, 0x1B8($v1)
    ctx->pc = 0x294cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 440), GPR_U32(ctx, 2));
    // 0x294cc8: 0xa0880274  sb          $t0, 0x274($a0)
    ctx->pc = 0x294cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 628), (uint8_t)GPR_U32(ctx, 8));
    // 0x294ccc: 0x90820273  lbu         $v0, 0x273($a0)
    ctx->pc = 0x294cccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 627)));
    // 0x294cd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x294cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x294cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x294CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294CD4u;
        // 0x294cd8: 0xa0820273  sb          $v0, 0x273($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 627), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294CDCu;
    // 0x294cdc: 0x0  nop
    ctx->pc = 0x294cdcu;
    // NOP
    ctx->pc = 0x294ce0u;
}
