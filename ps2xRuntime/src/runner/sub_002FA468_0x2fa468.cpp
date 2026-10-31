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

// Function: sub_002FA468
// Address: 0x2fa468 - 0x2fa4a0
void sub_002FA468_0x2fa468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA468_0x2fa468");
#endif

    ctx->pc = 0x2fa468u;

    // 0x2fa468: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2fa468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2fa46c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2fa46cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2fa470: 0x24632ba0  addiu       $v1, $v1, 0x2BA0
    ctx->pc = 0x2fa470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11168));
    // 0x2fa474: 0xa4880004  sh          $t0, 0x4($a0)
    ctx->pc = 0x2fa474u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x2fa478: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fa478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa47c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2fa47cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2fa480: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2fa480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2fa484: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x2fa484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x2fa488: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x2fa488u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2fa48c: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x2fa48cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fa490: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2fa490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2fa494: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA494u;
        // 0x2fa498: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA49Cu;
    // 0x2fa49c: 0x0  nop
    ctx->pc = 0x2fa49cu;
    // NOP
    ctx->pc = 0x2fa4a0u;
}
