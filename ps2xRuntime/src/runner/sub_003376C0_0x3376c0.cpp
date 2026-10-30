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

// Function: sub_003376C0
// Address: 0x3376c0 - 0x337788
void sub_003376C0_0x3376c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003376C0_0x3376c0");
#endif

    switch (ctx->pc) {
        case 0x337700u: goto label_337700;
        case 0x33770cu: goto label_33770c;
        default: break;
    }

    ctx->pc = 0x3376c0u;

    // 0x3376c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3376c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3376c4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x3376c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x3376c8: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x3376c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x3376cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3376ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3376d0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3376d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3376d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3376d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3376d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3376d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3376dc: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x3376dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3376e0: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x3376e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3376e4: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x3376e4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x3376e8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x3376e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3376ec: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x3376ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3376f0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3376f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3376f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3376f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3376f8: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x3376F8u;
    SET_GPR_U32(ctx, 31, 0x337700u);
    ctx->pc = 0x3376FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3376F8u;
    // 0x3376fc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3376F8u, 0x337700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337700u;
label_337700:
    // 0x337700: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x337700u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x337704: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x337704u;
    SET_GPR_U32(ctx, 31, 0x33770Cu);
    ctx->pc = 0x337708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337704u;
    // 0x337708: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x337704u, 0x33770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33770Cu;
label_33770c:
    // 0x33770c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33770cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x337710: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x337710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x337714: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x337714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337718: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x337718u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x33771c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x33771cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x337720: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x337720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x337724: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x337724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x337728: 0x4405b000  mfc1        $a1, $f22
    ctx->pc = 0x337728u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x33772c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x33772cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337730: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x337730u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x337734: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x337734u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x337738: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x337738u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33773c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x33773cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x337740: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x337740u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337744: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x337744u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x337748: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x337748u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x33774c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33774cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x337750: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x337750u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x337754: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x337754u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x337758: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x337758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x33775c: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x33775cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
    // 0x337760: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x337760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x337764: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x337764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x337768: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x337768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x33776c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x33776cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x337770: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x337770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x337774: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x337774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x337778: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x337778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x33777c: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x33777cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x337780: 0x3e00008  jr          $ra
    ctx->pc = 0x337780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337780u;
        // 0x337784: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337788u;
}
