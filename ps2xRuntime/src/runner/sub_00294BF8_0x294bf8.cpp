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

// Function: sub_00294BF8
// Address: 0x294bf8 - 0x294c98
void sub_00294BF8_0x294bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294BF8_0x294bf8");
#endif

    switch (ctx->pc) {
        case 0x294c28u: goto label_294c28;
        default: break;
    }

    ctx->pc = 0x294bf8u;

    // 0x294bf8: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x294bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x294bfc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x294bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x294c00: 0xa34018  mult        $t0, $a1, $v1
    ctx->pc = 0x294c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x294c04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x294c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x294c08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x294c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x294c0c: 0x24a5024c  addiu       $a1, $a1, 0x24C
    ctx->pc = 0x294c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 588));
    // 0x294c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x294c14: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x294c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x294c18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x294c18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c1c: 0x1043821  addu        $a3, $t0, $a0
    ctx->pc = 0x294c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x294c20: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x294c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x294c24: 0x0  nop
    ctx->pc = 0x294c24u;
    // NOP
label_294c28:
    // 0x294c28: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x294c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294c2c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x294c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x294c30: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x294c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294c34: 0x2d250009  sltiu       $a1, $t1, 0x9
    ctx->pc = 0x294c34u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x294c38: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x294c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x294c3c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x294c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x294c40: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x294c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x294c44: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x294c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x294c48: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x294c48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x294c4c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x294c4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294c50: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x294c50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x294c54: 0x4bc2097d  vftoi4.xyz  $vf2, $vf1
    ctx->pc = 0x294c54u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x294c58: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x294c58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x294c5c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x294c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x294c60: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x294c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x294c64: 0x97a30014  lhu         $v1, 0x14($sp)
    ctx->pc = 0x294c64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x294c68: 0x97a40010  lhu         $a0, 0x10($sp)
    ctx->pc = 0x294c68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294c6c: 0xa4e30002  sh          $v1, 0x2($a3)
    ctx->pc = 0x294c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x294c70: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x294c70u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x294c74: 0x97a20018  lhu         $v0, 0x18($sp)
    ctx->pc = 0x294c74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x294c78: 0xa4e20004  sh          $v0, 0x4($a3)
    ctx->pc = 0x294c78u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x294c7c: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x294c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x294c80: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x294c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x294c84: 0x14a0ffe8  bnez        $a1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x294C84u;
    {
        const bool branch_taken_0x294c84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x294C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C84u;
        // 0x294c88: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294c84) {
            ctx->pc = 0x294C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294c28;
        }
    }
    ctx->pc = 0x294C8Cu;
    // 0x294c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x294C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C8Cu;
        // 0x294c90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294C94u;
    // 0x294c94: 0x0  nop
    ctx->pc = 0x294c94u;
    // NOP
    ctx->pc = 0x294c98u;
}
