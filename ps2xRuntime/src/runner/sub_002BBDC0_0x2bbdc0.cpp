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

// Function: sub_002BBDC0
// Address: 0x2bbdc0 - 0x2bbe00
void sub_002BBDC0_0x2bbdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBDC0_0x2bbdc0");
#endif

    ctx->pc = 0x2bbdc0u;

    // 0x2bbdc0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2bbdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2bbdc4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2bbdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2bbdc8: 0x244205d0  addiu       $v0, $v0, 0x5D0
    ctx->pc = 0x2bbdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1488));
    // 0x2bbdcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2bbdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2bbdd0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2bbdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2bbdd4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2bbdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2bbdd8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bbdd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbddc: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2bbddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2bbde0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2bbde0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2bbde4: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2bbde4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bbde8: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2bbde8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bbdec: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2bbdecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2bbdf0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2bbdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2bbdf4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2bbdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2bbdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBDF8u;
        // 0x2bbdfc: 0xa0800020  sb          $zero, 0x20($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBE00u;
}
