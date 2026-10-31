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

// Function: sub_003A3408
// Address: 0x3a3408 - 0x3a3430
void sub_003A3408_0x3a3408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3408_0x3a3408");
#endif

    ctx->pc = 0x3a3408u;

    // 0x3a3408: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x3a3408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x3a340c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a340cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a3410: 0x3442dfff  ori         $v0, $v0, 0xDFFF
    ctx->pc = 0x3a3410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57343);
    // 0x3a3414: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3a3414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a3418: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a3418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a341c: 0xaca0005c  sw          $zero, 0x5C($a1)
    ctx->pc = 0x3a341cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
    // 0x3a3420: 0xa4a40062  sh          $a0, 0x62($a1)
    ctx->pc = 0x3a3420u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 98), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a3424: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3424u;
        // 0x3a3428: 0xaca30054  sw          $v1, 0x54($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A342Cu;
    // 0x3a342c: 0x0  nop
    ctx->pc = 0x3a342cu;
    // NOP
    ctx->pc = 0x3a3430u;
}
