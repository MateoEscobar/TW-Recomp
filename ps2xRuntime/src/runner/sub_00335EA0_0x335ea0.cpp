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

// Function: sub_00335EA0
// Address: 0x335ea0 - 0x335f48
void sub_00335EA0_0x335ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335EA0_0x335ea0");
#endif

    switch (ctx->pc) {
        case 0x335edcu: goto label_335edc;
        case 0x335ee8u: goto label_335ee8;
        default: break;
    }

    ctx->pc = 0x335ea0u;

    // 0x335ea0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x335ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x335ea4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x335ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x335ea8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x335ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335eac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x335eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x335eb0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x335eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x335eb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x335eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x335eb8: 0x24631710  addiu       $v1, $v1, 0x1710
    ctx->pc = 0x335eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5904));
    // 0x335ebc: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x335ebcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x335ec0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x335ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335ec4: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x335ec4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x335ec8: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x335ec8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x335ecc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x335eccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511710u));
    // 0x335ed0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x335ed0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x335ed4: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x335ED4u;
    SET_GPR_U32(ctx, 31, 0x335EDCu);
    ctx->pc = 0x335ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335ED4u;
    // 0x335ed8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x335ED4u, 0x335EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335EDCu;
label_335edc:
    // 0x335edc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x335edcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x335ee0: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x335EE0u;
    SET_GPR_U32(ctx, 31, 0x335EE8u);
    ctx->pc = 0x335EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335EE0u;
    // 0x335ee4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x335EE0u, 0x335EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335EE8u;
label_335ee8:
    // 0x335ee8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x335ee8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335eec: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x335eecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x335ef0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x335ef0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x335ef4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x335ef4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x335ef8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x335ef8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x335efc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x335efcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x335f00: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x335f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x335f04: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x335f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x335f08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x335f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335f0c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x335f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x335f10: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x335f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x335f14: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x335f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x335f18: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x335f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x335f1c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x335f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x335f20: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x335f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x335f24: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x335f24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x335f28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x335f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x335f2c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x335f2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335f30: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x335f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x335f34: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x335f34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x335f38: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x335f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x335f3c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x335f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x335f40: 0x3e00008  jr          $ra
    ctx->pc = 0x335F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335F40u;
        // 0x335f44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335F48u;
}
