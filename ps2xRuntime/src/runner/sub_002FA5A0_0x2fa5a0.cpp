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

// Function: sub_002FA5A0
// Address: 0x2fa5a0 - 0x2fa5e0
void sub_002FA5A0_0x2fa5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA5A0_0x2fa5a0");
#endif

    ctx->pc = 0x2fa5a0u;

    // 0x2fa5a0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2fa5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2fa5a4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2fa5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2fa5a8: 0x24632b60  addiu       $v1, $v1, 0x2B60
    ctx->pc = 0x2fa5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11104));
    // 0x2fa5ac: 0xa4890004  sh          $t1, 0x4($a0)
    ctx->pc = 0x2fa5acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 9));
    // 0x2fa5b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fa5b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa5b4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2fa5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2fa5b8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2fa5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2fa5bc: 0xe48c0010  swc1        $f12, 0x10($a0)
    ctx->pc = 0x2fa5bcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2fa5c0: 0xe48d0014  swc1        $f13, 0x14($a0)
    ctx->pc = 0x2fa5c0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2fa5c4: 0xa087001c  sb          $a3, 0x1C($a0)
    ctx->pc = 0x2fa5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 7));
    // 0x2fa5c8: 0xa088001d  sb          $t0, 0x1D($a0)
    ctx->pc = 0x2fa5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 8));
    // 0x2fa5cc: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x2fa5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fa5d0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2fa5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2fa5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA5D4u;
        // 0x2fa5d8: 0xa080001e  sb          $zero, 0x1E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA5DCu;
    // 0x2fa5dc: 0x0  nop
    ctx->pc = 0x2fa5dcu;
    // NOP
    ctx->pc = 0x2fa5e0u;
}
