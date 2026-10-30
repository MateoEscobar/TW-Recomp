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

// Function: sub_002FB868
// Address: 0x2fb868 - 0x2fb898
void sub_002FB868_0x2fb868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB868_0x2fb868");
#endif

    ctx->pc = 0x2fb868u;

    // 0x2fb868: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2fb868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2fb86c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2fb86cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2fb870: 0x24632d20  addiu       $v1, $v1, 0x2D20
    ctx->pc = 0x2fb870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11552));
    // 0x2fb874: 0xa4880004  sh          $t0, 0x4($a0)
    ctx->pc = 0x2fb874u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x2fb878: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fb878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb87c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2fb87cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2fb880: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2fb880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2fb884: 0xe48c0010  swc1        $f12, 0x10($a0)
    ctx->pc = 0x2fb884u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2fb888: 0xa0870014  sb          $a3, 0x14($a0)
    ctx->pc = 0x2fb888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 7));
    // 0x2fb88c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB88Cu;
        // 0x2fb890: 0xa0800006  sb          $zero, 0x6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB894u;
    // 0x2fb894: 0x0  nop
    ctx->pc = 0x2fb894u;
    // NOP
    ctx->pc = 0x2fb898u;
}
