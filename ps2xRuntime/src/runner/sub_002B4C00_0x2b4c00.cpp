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

// Function: sub_002B4C00
// Address: 0x2b4c00 - 0x2b4c88
void sub_002B4C00_0x2b4c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4C00_0x2b4c00");
#endif

    ctx->pc = 0x2b4c00u;

    // 0x2b4c00: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b4c04: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2b4c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2b4c08: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b4c08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b4c0c: 0x2463ff70  addiu       $v1, $v1, -0x90
    ctx->pc = 0x2b4c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967152));
    // 0x2b4c10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2b4c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b4c14: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2b4c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2b4c18: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2b4c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2b4c1c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2b4c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2b4c20: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2b4c20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4c24: 0x24a51730  addiu       $a1, $a1, 0x1730
    ctx->pc = 0x2b4c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5936));
    // 0x2b4c28: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2b4c28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4c2c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4c2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4c30: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2b4c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2b4c34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b4c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c38: 0xa0800024  sb          $zero, 0x24($a0)
    ctx->pc = 0x2b4c38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4c3c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2b4c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2b4c40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b4c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4c44: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2b4c44u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511730u));
    // 0x2b4c48: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2b4c48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2b4c4c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b4c4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2b4c50: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2b4c50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2b4c54: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2b4c54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2b4c58: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2b4c58u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b4c5c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2b4c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2b4c60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b4c60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2b4c64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b4c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4c68: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2b4c68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2b4c6c: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2b4c6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2b4c70: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2b4c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2b4c74: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2b4c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2b4c78: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2b4c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2b4c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C7Cu;
        // 0x2b4c80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4C84u;
    // 0x2b4c84: 0x0  nop
    ctx->pc = 0x2b4c84u;
    // NOP
    ctx->pc = 0x2b4c88u;
}
