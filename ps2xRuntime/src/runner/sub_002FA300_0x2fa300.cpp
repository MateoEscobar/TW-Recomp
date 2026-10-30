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

// Function: sub_002FA300
// Address: 0x2fa300 - 0x2fa338
void sub_002FA300_0x2fa300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA300_0x2fa300");
#endif

    ctx->pc = 0x2fa300u;

    // 0x2fa300: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2fa300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2fa304: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2fa304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2fa308: 0x24632be0  addiu       $v1, $v1, 0x2BE0
    ctx->pc = 0x2fa308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11232));
    // 0x2fa30c: 0xa4880004  sh          $t0, 0x4($a0)
    ctx->pc = 0x2fa30cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x2fa310: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fa310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa314: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2fa314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2fa318: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2fa318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2fa31c: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x2fa31cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x2fa320: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x2fa320u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2fa324: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x2fa324u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fa328: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2fa328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2fa32c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA32Cu;
        // 0x2fa330: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA334u;
    // 0x2fa334: 0x0  nop
    ctx->pc = 0x2fa334u;
    // NOP
    ctx->pc = 0x2fa338u;
}
