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

// Function: sub_00116CD8
// Address: 0x116cd8 - 0x116d10
void sub_00116CD8_0x116cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116CD8_0x116cd8");
#endif

    ctx->pc = 0x116cd8u;

    // 0x116cd8: 0x3c0a0002  lui         $t2, 0x2
    ctx->pc = 0x116cd8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)2 << 16));
    // 0x116cdc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x116cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x116ce0: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x116ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x116ce4: 0x654821  addu        $t1, $v1, $a1
    ctx->pc = 0x116ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x116ce8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x116ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x116cec: 0xad263f20  sw          $a2, 0x3F20($t1)
    ctx->pc = 0x116cecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16160), GPR_U32(ctx, 6));
    // 0x116cf0: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x116cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116cf4: 0xac473f24  sw          $a3, 0x3F24($v0)
    ctx->pc = 0x116cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16164), GPR_U32(ctx, 7));
    // 0x116cf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x116cf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116cfc: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x116cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x116d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116d04: 0xa0883f2c  sb          $t0, 0x3F2C($a0)
    ctx->pc = 0x116d04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16172), (uint8_t)GPR_U32(ctx, 8));
    // 0x116d08: 0x3e00008  jr          $ra
    ctx->pc = 0x116D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D08u;
        // 0x116d0c: 0xac623f28  sw          $v0, 0x3F28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116D10u;
}
