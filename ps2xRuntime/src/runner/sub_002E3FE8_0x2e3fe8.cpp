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

// Function: sub_002E3FE8
// Address: 0x2e3fe8 - 0x2e4038
void sub_002E3FE8_0x2e3fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3FE8_0x2e3fe8");
#endif

    ctx->pc = 0x2e3fe8u;

    // 0x2e3fe8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e3fec: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e3fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e3ff0: 0x24631950  addiu       $v1, $v1, 0x1950
    ctx->pc = 0x2e3ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6480));
    // 0x2e3ff4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e3ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e3ff8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2e3ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2e3ffc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e3ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e4000: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2e4000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2e4004: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2e4004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2e4008: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x2e4008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x2e400c: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2e400cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4010: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e4010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4014: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2e4014u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4018: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2e4018u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x2e401c: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x2e401cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x2e4020: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2e4020u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2e4024: 0xe48c0024  swc1        $f12, 0x24($a0)
    ctx->pc = 0x2e4024u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2e4028: 0xa087002c  sb          $a3, 0x2C($a0)
    ctx->pc = 0x2e4028u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 7));
    // 0x2e402c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E402Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E402Cu;
        // 0x2e4030: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E402Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4034u;
    // 0x2e4034: 0x0  nop
    ctx->pc = 0x2e4034u;
    // NOP
    ctx->pc = 0x2e4038u;
}
