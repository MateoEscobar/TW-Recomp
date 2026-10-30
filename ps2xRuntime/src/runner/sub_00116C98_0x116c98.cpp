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

// Function: sub_00116C98
// Address: 0x116c98 - 0x116cd8
void sub_00116C98_0x116c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116C98_0x116c98");
#endif

    ctx->pc = 0x116c98u;

    // 0x116c98: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x116c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x116c9c: 0x3c0b0002  lui         $t3, 0x2
    ctx->pc = 0x116c9cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)2 << 16));
    // 0x116ca0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x116ca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x116ca4: 0x8b1821  addu        $v1, $a0, $t3
    ctx->pc = 0x116ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x116ca8: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x116ca8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116cac: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x116cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x116cb0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x116cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x116cb4: 0xac463da4  sw          $a2, 0x3DA4($v0)
    ctx->pc = 0x116cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15780), GPR_U32(ctx, 6));
    // 0x116cb8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x116cb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116cbc: 0xad473da8  sw          $a3, 0x3DA8($t2)
    ctx->pc = 0x116cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 15784), GPR_U32(ctx, 7));
    // 0x116cc0: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x116cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x116cc4: 0xac483dac  sw          $t0, 0x3DAC($v0)
    ctx->pc = 0x116cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15788), GPR_U32(ctx, 8));
    // 0x116cc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x116cc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ccc: 0xa0893db4  sb          $t1, 0x3DB4($a0)
    ctx->pc = 0x116cccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15796), (uint8_t)GPR_U32(ctx, 9));
    // 0x116cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x116CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CD0u;
        // 0x116cd4: 0xac6c3db0  sw          $t4, 0x3DB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 15792), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116CD8u;
}
