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

// Function: sub_0029A388
// Address: 0x29a388 - 0x29a3c0
void sub_0029A388_0x29a388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A388_0x29a388");
#endif

    ctx->pc = 0x29a388u;

    // 0x29a388: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29a388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a38c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x29a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29a390: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x29a390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x29a394: 0xa0820010  sb          $v0, 0x10($a0)
    ctx->pc = 0x29a394u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x29a398: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x29a398u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x29a39c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x29a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x29a3a0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x29a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x29a3a4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x29a3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x29a3a8: 0xa0800011  sb          $zero, 0x11($a0)
    ctx->pc = 0x29a3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a3ac: 0xa0800012  sb          $zero, 0x12($a0)
    ctx->pc = 0x29a3acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a3b0: 0xa0800013  sb          $zero, 0x13($a0)
    ctx->pc = 0x29a3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a3b4: 0xa0800016  sb          $zero, 0x16($a0)
    ctx->pc = 0x29a3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x29A3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A3B8u;
        // 0x29a3bc: 0xa0800017  sb          $zero, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A3C0u;
}
