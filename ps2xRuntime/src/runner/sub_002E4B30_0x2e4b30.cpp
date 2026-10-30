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

// Function: sub_002E4B30
// Address: 0x2e4b30 - 0x2e4b88
void sub_002E4B30_0x2e4b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4B30_0x2e4b30");
#endif

    ctx->pc = 0x2e4b30u;

    // 0x2e4b30: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2e4b30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4b34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e4b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2e4b38: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2e4b38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4b3c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2e4b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2e4b40: 0x3c080054  lui         $t0, 0x54
    ctx->pc = 0x2e4b40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)84 << 16));
    // 0x2e4b44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e4b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e4b48: 0x8c4ab734  lw          $t2, -0x48CC($v0)
    ctx->pc = 0x2e4b48u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x50B734u));
    // 0x2e4b4c: 0x25082310  addiu       $t0, $t0, 0x2310
    ctx->pc = 0x2e4b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8976));
    // 0x2e4b50: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2e4b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2e4b54: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x2e4b54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x2e4b58: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2e4b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2e4b5c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2e4b5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e4b60: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x2e4b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x2e4b64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e4b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4b68: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2e4b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2e4b6c: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x2e4b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x2e4b70: 0x8d25489c  lw          $a1, 0x489C($t1)
    ctx->pc = 0x2e4b70u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2e4b74: 0x8d430048  lw          $v1, 0x48($t2)
    ctx->pc = 0x2e4b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 72)));
    // 0x2e4b78: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2e4b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2e4b7c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x2e4b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x2e4b80: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B80u;
        // 0x2e4b84: 0xa4ab0412  sh          $t3, 0x412($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1042), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4B88u;
}
