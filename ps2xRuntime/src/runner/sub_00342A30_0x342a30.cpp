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

// Function: sub_00342A30
// Address: 0x342a30 - 0x342a70
void sub_00342A30_0x342a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342A30_0x342a30");
#endif

    ctx->pc = 0x342a30u;

    // 0x342a30: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x342a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x342a34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x342a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x342a38: 0x24424870  addiu       $v0, $v0, 0x4870
    ctx->pc = 0x342a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18544));
    // 0x342a3c: 0xa0850030  sb          $a1, 0x30($a0)
    ctx->pc = 0x342a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x342a40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x342a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x342a44: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x342a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x342a48: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x342a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x342a4c: 0xa0830031  sb          $v1, 0x31($a0)
    ctx->pc = 0x342a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x342a50: 0xa4860032  sh          $a2, 0x32($a0)
    ctx->pc = 0x342a50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 6));
    // 0x342a54: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x342a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x342a58: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x342a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x342a5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x342a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342a60: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x342a60u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x342a64: 0x3e00008  jr          $ra
    ctx->pc = 0x342A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A64u;
        // 0x342a68: 0x7c830010  sq          $v1, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342A6Cu;
    // 0x342a6c: 0x0  nop
    ctx->pc = 0x342a6cu;
    // NOP
    ctx->pc = 0x342a70u;
}
