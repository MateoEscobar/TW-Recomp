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

// Function: sub_002EBB38
// Address: 0x2ebb38 - 0x2ebbb0
void sub_002EBB38_0x2ebb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBB38_0x2ebb38");
#endif

    ctx->pc = 0x2ebb38u;

    // 0x2ebb38: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2ebb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2ebb3c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x2ebb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x2ebb40: 0x24c628e0  addiu       $a2, $a2, 0x28E0
    ctx->pc = 0x2ebb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10464));
    // 0x2ebb44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ebb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ebb48: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x2ebb48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2ebb4c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ebb4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebb50: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x2ebb50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ebb54: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2ebb54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2ebb58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ebb58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb5c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2ebb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2ebb60: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2ebb60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2ebb64: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x2ebb64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x2ebb68: 0xa088001d  sb          $t0, 0x1D($a0)
    ctx->pc = 0x2ebb68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 8));
    // 0x2ebb6c: 0xa0890028  sb          $t1, 0x28($a0)
    ctx->pc = 0x2ebb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 9));
    // 0x2ebb70: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2ebb70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ebb74: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2ebb74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ebb78: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2ebb78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2ebb7c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2ebb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2ebb80: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x2ebb80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ebb84: 0xa080001e  sb          $zero, 0x1E($a0)
    ctx->pc = 0x2ebb84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ebb88: 0xa080001f  sb          $zero, 0x1F($a0)
    ctx->pc = 0x2ebb88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ebb8c: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x2ebb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ebb90: 0xa0800021  sb          $zero, 0x21($a0)
    ctx->pc = 0x2ebb90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ebb94: 0xa0800022  sb          $zero, 0x22($a0)
    ctx->pc = 0x2ebb94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ebb98: 0xa0800023  sb          $zero, 0x23($a0)
    ctx->pc = 0x2ebb98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ebb9c: 0xa0800024  sb          $zero, 0x24($a0)
    ctx->pc = 0x2ebb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ebba0: 0xa0800025  sb          $zero, 0x25($a0)
    ctx->pc = 0x2ebba0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ebba4: 0xa0800026  sb          $zero, 0x26($a0)
    ctx->pc = 0x2ebba4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ebba8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBBA8u;
        // 0x2ebbac: 0xa0800027  sb          $zero, 0x27($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBBB0u;
}
