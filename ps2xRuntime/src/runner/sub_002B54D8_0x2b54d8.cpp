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

// Function: sub_002B54D8
// Address: 0x2b54d8 - 0x2b5520
void sub_002B54D8_0x2b54d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B54D8_0x2b54d8");
#endif

    ctx->pc = 0x2b54d8u;

    // 0x2b54d8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2b54d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2b54dc: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x2b54dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x2b54e0: 0x24c6feb0  addiu       $a2, $a2, -0x150
    ctx->pc = 0x2b54e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966960));
    // 0x2b54e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2b54e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2b54e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b54e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b54ec: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b54ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b54f0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b54f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b54f4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2b54f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2b54f8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2b54f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2b54fc: 0xa0870016  sb          $a3, 0x16($a0)
    ctx->pc = 0x2b54fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b5500: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2b5500u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5504: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2b5504u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5508: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2b5508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2b550c: 0xa0800014  sb          $zero, 0x14($a0)
    ctx->pc = 0x2b550cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5510: 0xa0800015  sb          $zero, 0x15($a0)
    ctx->pc = 0x2b5510u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5514: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5514u;
        // 0x2b5518: 0xa0800017  sb          $zero, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B551Cu;
    // 0x2b551c: 0x0  nop
    ctx->pc = 0x2b551cu;
    // NOP
    ctx->pc = 0x2b5520u;
}
