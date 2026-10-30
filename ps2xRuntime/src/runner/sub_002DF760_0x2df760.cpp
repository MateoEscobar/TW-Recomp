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

// Function: sub_002DF760
// Address: 0x2df760 - 0x2df7a0
void sub_002DF760_0x2df760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF760_0x2df760");
#endif

    ctx->pc = 0x2df760u;

    // 0x2df760: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2df760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2df764: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2df764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2df768: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2df768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2df76c: 0x24631cb0  addiu       $v1, $v1, 0x1CB0
    ctx->pc = 0x2df76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7344));
    // 0x2df770: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2df770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2df774: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2df774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2df778: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2df778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df77c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2df77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2df780: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x2df780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x2df784: 0xe48c0024  swc1        $f12, 0x24($a0)
    ctx->pc = 0x2df784u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2df788: 0xac87002c  sw          $a3, 0x2C($a0)
    ctx->pc = 0x2df788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 7));
    // 0x2df78c: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2df78cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df790: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2df790u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df794: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF794u;
        // 0x2df798: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF79Cu;
    // 0x2df79c: 0x0  nop
    ctx->pc = 0x2df79cu;
    // NOP
    ctx->pc = 0x2df7a0u;
}
