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

// Function: sub_002DD148
// Address: 0x2dd148 - 0x2dd180
void sub_002DD148_0x2dd148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD148_0x2dd148");
#endif

    ctx->pc = 0x2dd148u;

    // 0x2dd148: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2dd148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2dd14c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2dd14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2dd150: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dd150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dd154: 0x24631e90  addiu       $v1, $v1, 0x1E90
    ctx->pc = 0x2dd154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7824));
    // 0x2dd158: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2dd158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2dd15c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2dd15cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2dd160: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2dd160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd164: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2dd164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2dd168: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2dd168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2dd16c: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2dd16cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd170: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2dd170u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd174: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2dd174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2dd178: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD178u;
        // 0x2dd17c: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD180u;
}
