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

// Function: sub_002DC278
// Address: 0x2dc278 - 0x2dc2d0
void sub_002DC278_0x2dc278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC278_0x2dc278");
#endif

    ctx->pc = 0x2dc278u;

    // 0x2dc278: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2dc278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2dc27c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2dc27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2dc280: 0x24631fb0  addiu       $v1, $v1, 0x1FB0
    ctx->pc = 0x2dc280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8112));
    // 0x2dc284: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2dc284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2dc288: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2dc288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2dc28c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2dc28cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2dc290: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2dc290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2dc294: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2dc294u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc298: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2dc298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc29c: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2dc29cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc2a0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2dc2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2dc2a4: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2dc2a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2dc2a8: 0x8ca6b734  lw          $a2, -0x48CC($a1)
    ctx->pc = 0x2dc2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50B734u));
    // 0x2dc2ac: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x2dc2acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x2dc2b0: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2dc2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2dc2b4: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x2dc2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x2dc2b8: 0xe48c0024  swc1        $f12, 0x24($a0)
    ctx->pc = 0x2dc2b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2dc2bc: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2dc2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2dc2c0: 0x8cc30048  lw          $v1, 0x48($a2)
    ctx->pc = 0x2dc2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x2dc2c4: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x2dc2c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2dc2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2C8u;
        // 0x2dc2cc: 0xac880028  sw          $t0, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC2D0u;
}
