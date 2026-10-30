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

// Function: sub_002CE0E0
// Address: 0x2ce0e0 - 0x2ce138
void sub_002CE0E0_0x2ce0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE0E0_0x2ce0e0");
#endif

    ctx->pc = 0x2ce0e0u;

    // 0x2ce0e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ce0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ce0e4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ce0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ce0e8: 0x246316b0  addiu       $v1, $v1, 0x16B0
    ctx->pc = 0x2ce0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5808));
    // 0x2ce0ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ce0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ce0f0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2ce0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2ce0f4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x2ce0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x2ce0f8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2ce0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2ce0fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ce0fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce100: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2ce100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2ce104: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2ce104u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ce108: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2ce108u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ce10c: 0x8d03bd30  lw          $v1, -0x42D0($t0)
    ctx->pc = 0x2ce10cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2ce110: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2ce110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2ce114: 0x8d05bd30  lw          $a1, -0x42D0($t0)
    ctx->pc = 0x2ce114u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2ce118: 0xa4870020  sh          $a3, 0x20($a0)
    ctx->pc = 0x2ce118u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 7));
    // 0x2ce11c: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x2ce11cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x2ce120: 0xa4860022  sh          $a2, 0x22($a0)
    ctx->pc = 0x2ce120u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ce124: 0xe48c0024  swc1        $f12, 0x24($a0)
    ctx->pc = 0x2ce124u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2ce128: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2ce128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2ce12c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2ce12cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2ce130: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE130u;
        // 0x2ce134: 0xa0800028  sb          $zero, 0x28($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE138u;
}
