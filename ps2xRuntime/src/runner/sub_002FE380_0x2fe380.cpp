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

// Function: sub_002FE380
// Address: 0x2fe380 - 0x2fe3a8
void sub_002FE380_0x2fe380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE380_0x2fe380");
#endif

    ctx->pc = 0x2fe380u;

    // 0x2fe380: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2fe380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2fe384: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2fe384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2fe388: 0x24633020  addiu       $v1, $v1, 0x3020
    ctx->pc = 0x2fe388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12320));
    // 0x2fe38c: 0xa4860004  sh          $a2, 0x4($a0)
    ctx->pc = 0x2fe38cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x2fe390: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fe390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe394: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2fe394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2fe398: 0xe48c000c  swc1        $f12, 0xC($a0)
    ctx->pc = 0x2fe398u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2fe39c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE39Cu;
        // 0x2fe3a0: 0xa0800006  sb          $zero, 0x6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE3A4u;
    // 0x2fe3a4: 0x0  nop
    ctx->pc = 0x2fe3a4u;
    // NOP
    ctx->pc = 0x2fe3a8u;
}
