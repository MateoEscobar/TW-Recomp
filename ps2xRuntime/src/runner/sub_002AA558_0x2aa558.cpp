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

// Function: sub_002AA558
// Address: 0x2aa558 - 0x2aa598
void sub_002AA558_0x2aa558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA558_0x2aa558");
#endif

    ctx->pc = 0x2aa558u;

    // 0x2aa558: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2aa558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2aa55c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2aa55cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2aa560: 0x2463f6d0  addiu       $v1, $v1, -0x930
    ctx->pc = 0x2aa560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964944));
    // 0x2aa564: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x2aa564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x2aa568: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2aa568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa56c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2aa56cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2aa570: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2aa570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2aa574: 0xa487001c  sh          $a3, 0x1C($a0)
    ctx->pc = 0x2aa574u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 7));
    // 0x2aa578: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2aa578u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aa57c: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2aa57cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aa580: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2aa580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2aa584: 0xa4800018  sh          $zero, 0x18($a0)
    ctx->pc = 0x2aa584u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x2aa588: 0xa480001a  sh          $zero, 0x1A($a0)
    ctx->pc = 0x2aa588u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x2aa58c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA58Cu;
        // 0x2aa590: 0xa080001e  sb          $zero, 0x1E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA594u;
    // 0x2aa594: 0x0  nop
    ctx->pc = 0x2aa594u;
    // NOP
    ctx->pc = 0x2aa598u;
}
