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

// Function: sub_0017ECC8
// Address: 0x17ecc8 - 0x17ed60
void sub_0017ECC8_0x17ecc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ECC8_0x17ecc8");
#endif

    switch (ctx->pc) {
        case 0x17ececu: goto label_17ecec;
        case 0x17ecf8u: goto label_17ecf8;
        default: break;
    }

    ctx->pc = 0x17ecc8u;

    // 0x17ecc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17ecc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17eccc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17ecccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17ecd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17ecd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17ecd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17ecd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17ecd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecdc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17ecdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17ece0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ece4: 0xc05fb1e  jal         func_17EC78
    ctx->pc = 0x17ECE4u;
    SET_GPR_U32(ctx, 31, 0x17ECECu);
    ctx->pc = 0x17ECE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ECE4u;
    // 0x17ece8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC78u, 0x17ECE4u, 0x17ECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECECu;
label_17ecec:
    // 0x17ecec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17ececu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecf0: 0xc05fb30  jal         func_17ECC0
    ctx->pc = 0x17ECF0u;
    SET_GPR_U32(ctx, 31, 0x17ECF8u);
    ctx->pc = 0x17ECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ECF0u;
    // 0x17ecf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ECC0u, 0x17ECF0u, 0x17ECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECF8u;
label_17ecf8:
    // 0x17ecf8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x17ecf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17ecfc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x17ecfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ed00: 0x4be208a8  vadd.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x17ed00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x17ed04: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x17ed04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x17ed08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17ed08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17ed0c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x17ed0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed10: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x17ed10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17ed14: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x17ed14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17ed18: 0x460208a8  max.s       $f2, $f1, $f2
    ctx->pc = 0x17ed18u;
    ctx->f[2] = std::max(ctx->f[1], ctx->f[2]);
    // 0x17ed1c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x17ed1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ed20: 0x460308e8  max.s       $f3, $f1, $f3
    ctx->pc = 0x17ed20u;
    ctx->f[3] = std::max(ctx->f[1], ctx->f[3]);
    // 0x17ed24: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x17ed24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17ed28: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x17ed28u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x17ed2c: 0x46040868  max.s       $f1, $f1, $f4
    ctx->pc = 0x17ed2cu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[4]);
    // 0x17ed30: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x17ed30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17ed34: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x17ed34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17ed38: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x17ed38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17ed3c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x17ed3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17ed40: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17ed40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ed44: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x17ed44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ed48: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17ed48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ed4c: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x17ed4cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    // 0x17ed50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17ed50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ed54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ed54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ed58: 0x3e00008  jr          $ra
    ctx->pc = 0x17ED58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED58u;
        // 0x17ed5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ED58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ED60u;
}
