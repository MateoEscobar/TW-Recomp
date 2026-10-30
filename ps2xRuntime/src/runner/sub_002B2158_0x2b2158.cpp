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

// Function: sub_002B2158
// Address: 0x2b2158 - 0x2b21c8
void sub_002B2158_0x2b2158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2158_0x2b2158");
#endif

    ctx->pc = 0x2b2158u;

    // 0x2b2158: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2b2158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2b215c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2b215cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2b2160: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b2160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2164: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2b2164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2b2168: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2b2168u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b216c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2b216cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2b2170: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2b2170u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2b2174: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2b2174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2178: 0xa0800024  sb          $zero, 0x24($a0)
    ctx->pc = 0x2b2178u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b217c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2b217cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2b2180: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2b2180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2b2184: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2b2184u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2b2188: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b2188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b218c: 0x2463fc70  addiu       $v1, $v1, -0x390
    ctx->pc = 0x2b218cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966384));
    // 0x2b2190: 0x8c49b734  lw          $t1, -0x48CC($v0)
    ctx->pc = 0x2b2190u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x50B734u));
    // 0x2b2194: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2b2194u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2b2198: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b2198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b219c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b219cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b21a0: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x2b21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x2b21a4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2b21a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2b21a8: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2b21a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2b21ac: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2b21acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2b21b0: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x2b21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x2b21b4: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x2b21b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b21b8: 0x8d230048  lw          $v1, 0x48($t1)
    ctx->pc = 0x2b21b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x2b21bc: 0x24632ee0  addiu       $v1, $v1, 0x2EE0
    ctx->pc = 0x2b21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12000));
    // 0x2b21c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B21C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21C0u;
        // 0x2b21c4: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B21C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B21C8u;
}
