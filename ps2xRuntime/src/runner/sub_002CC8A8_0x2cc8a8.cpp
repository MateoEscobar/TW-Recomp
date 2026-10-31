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

// Function: sub_002CC8A8
// Address: 0x2cc8a8 - 0x2cc908
void sub_002CC8A8_0x2cc8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC8A8_0x2cc8a8");
#endif

    ctx->pc = 0x2cc8a8u;

    // 0x2cc8a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2cc8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2cc8ac: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2cc8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2cc8b0: 0x246317d0  addiu       $v1, $v1, 0x17D0
    ctx->pc = 0x2cc8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6096));
    // 0x2cc8b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cc8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cc8b8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2cc8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2cc8bc: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2cc8bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc8c0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2cc8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2cc8c4: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x2cc8c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2cc8c8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2cc8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2cc8cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cc8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc8d0: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2cc8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc8d4: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2cc8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc8d8: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2cc8d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cc8dc: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2cc8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2cc8e0: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x2cc8e0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cc8e4: 0xac890034  sw          $t1, 0x34($a0)
    ctx->pc = 0x2cc8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 9));
    // 0x2cc8e8: 0x7c850020  sq          $a1, 0x20($a0)
    ctx->pc = 0x2cc8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
    // 0x2cc8ec: 0xa48a003c  sh          $t2, 0x3C($a0)
    ctx->pc = 0x2cc8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 10));
    // 0x2cc8f0: 0xa088003e  sb          $t0, 0x3E($a0)
    ctx->pc = 0x2cc8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 62), (uint8_t)GPR_U32(ctx, 8));
    // 0x2cc8f4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2cc8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2cc8f8: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2cc8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2cc8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8FCu;
        // 0x2cc900: 0xa080003f  sb          $zero, 0x3F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 63), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC904u;
    // 0x2cc904: 0x0  nop
    ctx->pc = 0x2cc904u;
    // NOP
    ctx->pc = 0x2cc908u;
}
