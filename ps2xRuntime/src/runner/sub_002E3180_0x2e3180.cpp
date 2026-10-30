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

// Function: sub_002E3180
// Address: 0x2e3180 - 0x2e3218
void sub_002E3180_0x2e3180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3180_0x2e3180");
#endif

    ctx->pc = 0x2e3180u;

    // 0x2e3180: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e3180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e3184: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e3184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e3188: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2e3188u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e318c: 0x246319b0  addiu       $v1, $v1, 0x19B0
    ctx->pc = 0x2e318cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6576));
    // 0x2e3190: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e3190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e3194: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x2e3194u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x2e3198: 0xad63000c  sw          $v1, 0xC($t3)
    ctx->pc = 0x2e3198u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 3));
    // 0x2e319c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e319cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2e31a0: 0xad620008  sw          $v0, 0x8($t3)
    ctx->pc = 0x2e31a0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 2));
    // 0x2e31a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e31a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e31a8: 0xa1600004  sb          $zero, 0x4($t3)
    ctx->pc = 0x2e31a8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e31ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e31acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e31b0: 0xa1600005  sb          $zero, 0x5($t3)
    ctx->pc = 0x2e31b0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e31b4: 0x8c82bd30  lw          $v0, -0x42D0($a0)
    ctx->pc = 0x2e31b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2e31b8: 0xad630024  sw          $v1, 0x24($t3)
    ctx->pc = 0x2e31b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 36), GPR_U32(ctx, 3));
    // 0x2e31bc: 0xad620010  sw          $v0, 0x10($t3)
    ctx->pc = 0x2e31bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
    // 0x2e31c0: 0xe56c0028  swc1        $f12, 0x28($t3)
    ctx->pc = 0x2e31c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 40), bits); }
    // 0x2e31c4: 0xe56d002c  swc1        $f13, 0x2C($t3)
    ctx->pc = 0x2e31c4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 44), bits); }
    // 0x2e31c8: 0xe56e0030  swc1        $f14, 0x30($t3)
    ctx->pc = 0x2e31c8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 48), bits); }
    // 0x2e31cc: 0xe56f0034  swc1        $f15, 0x34($t3)
    ctx->pc = 0x2e31ccu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 52), bits); }
    // 0x2e31d0: 0xe5700038  swc1        $f16, 0x38($t3)
    ctx->pc = 0x2e31d0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 56), bits); }
    // 0x2e31d4: 0xad69003c  sw          $t1, 0x3C($t3)
    ctx->pc = 0x2e31d4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 60), GPR_U32(ctx, 9));
    // 0x2e31d8: 0xa1650040  sb          $a1, 0x40($t3)
    ctx->pc = 0x2e31d8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e31dc: 0xa1660041  sb          $a2, 0x41($t3)
    ctx->pc = 0x2e31dcu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 65), (uint8_t)GPR_U32(ctx, 6));
    // 0x2e31e0: 0xa1670042  sb          $a3, 0x42($t3)
    ctx->pc = 0x2e31e0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 66), (uint8_t)GPR_U32(ctx, 7));
    // 0x2e31e4: 0xa1680043  sb          $t0, 0x43($t3)
    ctx->pc = 0x2e31e4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 67), (uint8_t)GPR_U32(ctx, 8));
    // 0x2e31e8: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x2e31e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
    // 0x2e31ec: 0xad600018  sw          $zero, 0x18($t3)
    ctx->pc = 0x2e31ecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 0));
    // 0x2e31f0: 0xad60001c  sw          $zero, 0x1C($t3)
    ctx->pc = 0x2e31f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
    // 0x2e31f4: 0x11400006  beqz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E31F4u;
    {
        const bool branch_taken_0x2e31f4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E31F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E31F4u;
        // 0x2e31f8: 0xad6a0020  sw          $t2, 0x20($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e31f4) {
            ctx->pc = 0x2E3210u;
            goto label_2e3210;
        }
    }
    ctx->pc = 0x2E31FCu;
    // 0x2e31fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e31fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2e3200: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2e3200u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2e3204: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2e3204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2e3208: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x2e3208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2e320c: 0xad630020  sw          $v1, 0x20($t3)
    ctx->pc = 0x2e320cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 3));
label_2e3210:
    // 0x2e3210: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3210u;
        // 0x2e3214: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3218u;
}
