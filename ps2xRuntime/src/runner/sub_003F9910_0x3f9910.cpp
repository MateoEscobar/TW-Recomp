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

// Function: sub_003F9910
// Address: 0x3f9910 - 0x3f9ad0
void sub_003F9910_0x3f9910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F9910_0x3f9910");
#endif

    switch (ctx->pc) {
        case 0x3f9910u: goto label_3f9910;
        case 0x3f9914u: goto label_3f9914;
        case 0x3f9918u: goto label_3f9918;
        case 0x3f991cu: goto label_3f991c;
        case 0x3f9920u: goto label_3f9920;
        case 0x3f9924u: goto label_3f9924;
        case 0x3f9928u: goto label_3f9928;
        case 0x3f992cu: goto label_3f992c;
        case 0x3f9930u: goto label_3f9930;
        case 0x3f9934u: goto label_3f9934;
        case 0x3f9938u: goto label_3f9938;
        case 0x3f993cu: goto label_3f993c;
        case 0x3f9940u: goto label_3f9940;
        case 0x3f9944u: goto label_3f9944;
        case 0x3f9948u: goto label_3f9948;
        case 0x3f994cu: goto label_3f994c;
        case 0x3f9950u: goto label_3f9950;
        case 0x3f9954u: goto label_3f9954;
        case 0x3f9958u: goto label_3f9958;
        case 0x3f995cu: goto label_3f995c;
        case 0x3f9960u: goto label_3f9960;
        case 0x3f9964u: goto label_3f9964;
        case 0x3f9968u: goto label_3f9968;
        case 0x3f996cu: goto label_3f996c;
        case 0x3f9970u: goto label_3f9970;
        case 0x3f9974u: goto label_3f9974;
        case 0x3f9978u: goto label_3f9978;
        case 0x3f997cu: goto label_3f997c;
        case 0x3f9980u: goto label_3f9980;
        case 0x3f9984u: goto label_3f9984;
        case 0x3f9988u: goto label_3f9988;
        case 0x3f998cu: goto label_3f998c;
        case 0x3f9990u: goto label_3f9990;
        case 0x3f9994u: goto label_3f9994;
        case 0x3f9998u: goto label_3f9998;
        case 0x3f999cu: goto label_3f999c;
        case 0x3f99a0u: goto label_3f99a0;
        case 0x3f99a4u: goto label_3f99a4;
        case 0x3f99a8u: goto label_3f99a8;
        case 0x3f99acu: goto label_3f99ac;
        case 0x3f99b0u: goto label_3f99b0;
        case 0x3f99b4u: goto label_3f99b4;
        case 0x3f99b8u: goto label_3f99b8;
        case 0x3f99bcu: goto label_3f99bc;
        case 0x3f99c0u: goto label_3f99c0;
        case 0x3f99c4u: goto label_3f99c4;
        case 0x3f99c8u: goto label_3f99c8;
        case 0x3f99ccu: goto label_3f99cc;
        case 0x3f99d0u: goto label_3f99d0;
        case 0x3f99d4u: goto label_3f99d4;
        case 0x3f99d8u: goto label_3f99d8;
        case 0x3f99dcu: goto label_3f99dc;
        case 0x3f99e0u: goto label_3f99e0;
        case 0x3f99e4u: goto label_3f99e4;
        case 0x3f99e8u: goto label_3f99e8;
        case 0x3f99ecu: goto label_3f99ec;
        case 0x3f99f0u: goto label_3f99f0;
        case 0x3f99f4u: goto label_3f99f4;
        case 0x3f99f8u: goto label_3f99f8;
        case 0x3f99fcu: goto label_3f99fc;
        case 0x3f9a00u: goto label_3f9a00;
        case 0x3f9a04u: goto label_3f9a04;
        case 0x3f9a08u: goto label_3f9a08;
        case 0x3f9a0cu: goto label_3f9a0c;
        case 0x3f9a10u: goto label_3f9a10;
        case 0x3f9a14u: goto label_3f9a14;
        case 0x3f9a18u: goto label_3f9a18;
        case 0x3f9a1cu: goto label_3f9a1c;
        case 0x3f9a20u: goto label_3f9a20;
        case 0x3f9a24u: goto label_3f9a24;
        case 0x3f9a28u: goto label_3f9a28;
        case 0x3f9a2cu: goto label_3f9a2c;
        case 0x3f9a30u: goto label_3f9a30;
        case 0x3f9a34u: goto label_3f9a34;
        case 0x3f9a38u: goto label_3f9a38;
        case 0x3f9a3cu: goto label_3f9a3c;
        case 0x3f9a40u: goto label_3f9a40;
        case 0x3f9a44u: goto label_3f9a44;
        case 0x3f9a48u: goto label_3f9a48;
        case 0x3f9a4cu: goto label_3f9a4c;
        case 0x3f9a50u: goto label_3f9a50;
        case 0x3f9a54u: goto label_3f9a54;
        case 0x3f9a58u: goto label_3f9a58;
        case 0x3f9a5cu: goto label_3f9a5c;
        case 0x3f9a60u: goto label_3f9a60;
        case 0x3f9a64u: goto label_3f9a64;
        case 0x3f9a68u: goto label_3f9a68;
        case 0x3f9a6cu: goto label_3f9a6c;
        case 0x3f9a70u: goto label_3f9a70;
        case 0x3f9a74u: goto label_3f9a74;
        case 0x3f9a78u: goto label_3f9a78;
        case 0x3f9a7cu: goto label_3f9a7c;
        case 0x3f9a80u: goto label_3f9a80;
        case 0x3f9a84u: goto label_3f9a84;
        case 0x3f9a88u: goto label_3f9a88;
        case 0x3f9a8cu: goto label_3f9a8c;
        case 0x3f9a90u: goto label_3f9a90;
        case 0x3f9a94u: goto label_3f9a94;
        case 0x3f9a98u: goto label_3f9a98;
        case 0x3f9a9cu: goto label_3f9a9c;
        case 0x3f9aa0u: goto label_3f9aa0;
        case 0x3f9aa4u: goto label_3f9aa4;
        case 0x3f9aa8u: goto label_3f9aa8;
        case 0x3f9aacu: goto label_3f9aac;
        case 0x3f9ab0u: goto label_3f9ab0;
        case 0x3f9ab4u: goto label_3f9ab4;
        case 0x3f9ab8u: goto label_3f9ab8;
        case 0x3f9abcu: goto label_3f9abc;
        case 0x3f9ac0u: goto label_3f9ac0;
        case 0x3f9ac4u: goto label_3f9ac4;
        case 0x3f9ac8u: goto label_3f9ac8;
        case 0x3f9accu: goto label_3f9acc;
        default: break;
    }

    ctx->pc = 0x3f9910u;

label_3f9910:
    // 0x3f9910: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3f9910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3f9914:
    // 0x3f9914: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3f9914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3f9918:
    // 0x3f9918: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3f9918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3f991c:
    // 0x3f991c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f991cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f9920:
    // 0x3f9920: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3f9920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f9924:
    // 0x3f9924: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3f9924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3f9928:
    // 0x3f9928: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3f9928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3f992c:
    // 0x3f992c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f992cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f9930:
    // 0x3f9930: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3f9930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3f9934:
    // 0x3f9934: 0xc0ea14c  jal         func_3A8530
label_3f9938:
    if (ctx->pc == 0x3F9938u) {
        ctx->pc = 0x3F9938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9934u;
        // 0x3f9938: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F993Cu;
        goto label_3f993c;
    }
    ctx->pc = 0x3F9934u;
    SET_GPR_U32(ctx, 31, 0x3F993Cu);
    ctx->pc = 0x3F9938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9934u;
    // 0x3f9938: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F9934u, 0x3F993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F993Cu;
label_3f993c:
    // 0x3f993c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3f993cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f9940:
    // 0x3f9940: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3f9940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f9944:
    // 0x3f9944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f9944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f9948:
    // 0x3f9948: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x3f9948u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_3f994c:
    // 0x3f994c: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x3f994cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_3f9950:
    // 0x3f9950: 0xc0f809  jalr        $a2
label_3f9954:
    if (ctx->pc == 0x3F9954u) {
        ctx->pc = 0x3F9954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9950u;
        // 0x3f9954: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9958u;
        goto label_3f9958;
    }
    ctx->pc = 0x3F9950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3F9958u);
        ctx->pc = 0x3F9954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9950u;
        // 0x3f9954: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9950u, 0x3F9958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F9958u;
label_3f9958:
    // 0x3f9958: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f9958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f995c:
    // 0x3f995c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f995cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f9960:
    // 0x3f9960: 0xc136afa  jal         func_4DABE8
label_3f9964:
    if (ctx->pc == 0x3F9964u) {
        ctx->pc = 0x3F9964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9960u;
        // 0x3f9964: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9968u;
        goto label_3f9968;
    }
    ctx->pc = 0x3F9960u;
    SET_GPR_U32(ctx, 31, 0x3F9968u);
    ctx->pc = 0x3F9964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9960u;
    // 0x3f9964: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3F9960u, 0x3F9968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9968u;
label_3f9968:
    // 0x3f9968: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3f9968u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f996c:
    // 0x3f996c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3f996cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f9970:
    // 0x3f9970: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f9970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f9974:
    // 0x3f9974: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f9974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f9978:
    // 0x3f9978: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f9978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3f997c:
    // 0x3f997c: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x3f997cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3f9980:
    // 0x3f9980: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3f9980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3f9984:
    // 0x3f9984: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3f9984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3f9988:
    // 0x3f9988: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x3f9988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_3f998c:
    // 0x3f998c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3f998cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3f9990:
    // 0x3f9990: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3f9990u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f9994:
    // 0x3f9994: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f9994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f9998:
    // 0x3f9998: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f9998u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f999c:
    // 0x3f999c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3f999cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f99a0:
    // 0x3f99a0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f99a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f99a4:
    // 0x3f99a4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f99a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f99a8:
    // 0x3f99a8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f99a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f99ac:
    // 0x3f99ac: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f99acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f99b0:
    // 0x3f99b0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f99b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f99b4:
    // 0x3f99b4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f99b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f99b8:
    // 0x3f99b8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f99b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f99bc:
    // 0x3f99bc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f99bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f99c0:
    // 0x3f99c0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f99c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f99c4:
    // 0x3f99c4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f99c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f99c8:
    // 0x3f99c8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f99c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f99cc:
    // 0x3f99cc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f99ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f99d0:
    // 0x3f99d0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f99d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f99d4:
    // 0x3f99d4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f99d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f99d8:
    // 0x3f99d8: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3f99d8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f99dc:
    // 0x3f99dc: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3f99dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f99e0:
    // 0x3f99e0: 0x2410ff56  addiu       $s0, $zero, -0xAA
    ctx->pc = 0x3f99e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967126));
label_3f99e4:
    // 0x3f99e4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f99e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f99e8:
    // 0x3f99e8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3f99e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3f99ec:
    // 0x3f99ec: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f99ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f99f0:
    // 0x3f99f0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f99f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f99f4:
    // 0x3f99f4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f99f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f99f8:
    // 0x3f99f8: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x3f99f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_3f99fc:
    // 0x3f99fc: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x3f99fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f9a00:
    // 0x3f9a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f9a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f9a04:
    // 0x3f9a04: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3f9a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3f9a08:
    // 0x3f9a08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f9a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f9a0c:
    // 0x3f9a0c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3f9a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3f9a10:
    // 0x3f9a10: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3f9a14:
    if (ctx->pc == 0x3F9A14u) {
        ctx->pc = 0x3F9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A10u;
        // 0x3f9a14: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9A18u;
        goto label_3f9a18;
    }
    ctx->pc = 0x3F9A10u;
    {
        const bool branch_taken_0x3f9a10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A10u;
        // 0x3f9a14: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9a10) {
            ctx->pc = 0x3F9A1Cu;
            goto label_3f9a1c;
        }
    }
    ctx->pc = 0x3F9A18u;
label_3f9a18:
    // 0x3f9a18: 0x241000aa  addiu       $s0, $zero, 0xAA
    ctx->pc = 0x3f9a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_3f9a1c:
    // 0x3f9a1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f9a20:
    // 0x3f9a20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f9a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f9a24:
    // 0x3f9a24: 0xc0fe4da  jal         func_3F9368
label_3f9a28:
    if (ctx->pc == 0x3F9A28u) {
        ctx->pc = 0x3F9A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A24u;
        // 0x3f9a28: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9A2Cu;
        goto label_3f9a2c;
    }
    ctx->pc = 0x3F9A24u;
    SET_GPR_U32(ctx, 31, 0x3F9A2Cu);
    ctx->pc = 0x3F9A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9A24u;
    // 0x3f9a28: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9368u, 0x3F9A24u, 0x3F9A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9A2Cu;
label_3f9a2c:
    // 0x3f9a2c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3f9a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f9a30:
    // 0x3f9a30: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3f9a34:
    if (ctx->pc == 0x3F9A34u) {
        ctx->pc = 0x3F9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A30u;
        // 0x3f9a34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9A38u;
        goto label_3f9a38;
    }
    ctx->pc = 0x3F9A30u;
    {
        const bool branch_taken_0x3f9a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A30u;
        // 0x3f9a34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9a30) {
            ctx->pc = 0x3F9A54u;
            goto label_3f9a54;
        }
    }
    ctx->pc = 0x3F9A38u;
label_3f9a38:
    // 0x3f9a38: 0xc0ea16a  jal         func_3A85A8
label_3f9a3c:
    if (ctx->pc == 0x3F9A3Cu) {
        ctx->pc = 0x3F9A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A38u;
        // 0x3f9a3c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9A40u;
        goto label_3f9a40;
    }
    ctx->pc = 0x3F9A38u;
    SET_GPR_U32(ctx, 31, 0x3F9A40u);
    ctx->pc = 0x3F9A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9A38u;
    // 0x3f9a3c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3F9A38u, 0x3F9A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9A40u;
label_3f9a40:
    // 0x3f9a40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f9a44:
    // 0x3f9a44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f9a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f9a48:
    // 0x3f9a48: 0xc0fe5dc  jal         func_3F9770
label_3f9a4c:
    if (ctx->pc == 0x3F9A4Cu) {
        ctx->pc = 0x3F9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A48u;
        // 0x3f9a4c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9A50u;
        goto label_3f9a50;
    }
    ctx->pc = 0x3F9A48u;
    SET_GPR_U32(ctx, 31, 0x3F9A50u);
    ctx->pc = 0x3F9A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9A48u;
    // 0x3f9a4c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9770u, 0x3F9A48u, 0x3F9A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9A50u;
label_3f9a50:
    // 0x3f9a50: 0x86300004  lh          $s0, 0x4($s1)
    ctx->pc = 0x3f9a50u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_3f9a54:
    // 0x3f9a54: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3f9a54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_3f9a58:
    // 0x3f9a58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f9a5c:
    // 0x3f9a5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f9a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f9a60:
    // 0x3f9a60: 0xc0fe3f4  jal         func_3F8FD0
label_3f9a64:
    if (ctx->pc == 0x3F9A64u) {
        ctx->pc = 0x3F9A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A60u;
        // 0x3f9a64: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9A68u;
        goto label_3f9a68;
    }
    ctx->pc = 0x3F9A60u;
    SET_GPR_U32(ctx, 31, 0x3F9A68u);
    ctx->pc = 0x3F9A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9A60u;
    // 0x3f9a64: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F8FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F8FD0u, 0x3F9A60u, 0x3F9A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9A68u;
label_3f9a68:
    // 0x3f9a68: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x3f9a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_3f9a6c:
    // 0x3f9a6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f9a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f9a70:
    // 0x3f9a70: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3f9a74:
    if (ctx->pc == 0x3F9A74u) {
        ctx->pc = 0x3F9A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A70u;
        // 0x3f9a74: 0x7a420010  lq          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9A78u;
        goto label_3f9a78;
    }
    ctx->pc = 0x3F9A70u;
    {
        const bool branch_taken_0x3f9a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f9a70) {
            ctx->pc = 0x3F9A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F9A70u;
            // 0x3f9a74: 0x7a420010  lq          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F9A84u;
            goto label_3f9a84;
        }
    }
    ctx->pc = 0x3F9A78u;
label_3f9a78:
    // 0x3f9a78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f9a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f9a7c:
    // 0x3f9a7c: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x3f9a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_3f9a80:
    // 0x3f9a80: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3f9a80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3f9a84:
    // 0x3f9a84: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3f9a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f9a88:
    // 0x3f9a88: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3f9a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3f9a8c:
    // 0x3f9a8c: 0xc0e9bba  jal         func_3A6EE8
label_3f9a90:
    if (ctx->pc == 0x3F9A90u) {
        ctx->pc = 0x3F9A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A8Cu;
        // 0x3f9a90: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9A94u;
        goto label_3f9a94;
    }
    ctx->pc = 0x3F9A8Cu;
    SET_GPR_U32(ctx, 31, 0x3F9A94u);
    ctx->pc = 0x3F9A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9A8Cu;
    // 0x3f9a90: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EE8u, 0x3F9A8Cu, 0x3F9A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9A94u;
label_3f9a94:
    // 0x3f9a94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f9a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f9a98:
    // 0x3f9a98: 0xc0ea16a  jal         func_3A85A8
label_3f9a9c:
    if (ctx->pc == 0x3F9A9Cu) {
        ctx->pc = 0x3F9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A98u;
        // 0x3f9a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9AA0u;
        goto label_3f9aa0;
    }
    ctx->pc = 0x3F9A98u;
    SET_GPR_U32(ctx, 31, 0x3F9AA0u);
    ctx->pc = 0x3F9A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9A98u;
    // 0x3f9a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3F9A98u, 0x3F9AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9AA0u;
label_3f9aa0:
    // 0x3f9aa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f9aa4:
    // 0x3f9aa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f9aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f9aa8:
    // 0x3f9aa8: 0xc0fe562  jal         func_3F9588
label_3f9aac:
    if (ctx->pc == 0x3F9AACu) {
        ctx->pc = 0x3F9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9AA8u;
        // 0x3f9aac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9AB0u;
        goto label_3f9ab0;
    }
    ctx->pc = 0x3F9AA8u;
    SET_GPR_U32(ctx, 31, 0x3F9AB0u);
    ctx->pc = 0x3F9AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9AA8u;
    // 0x3f9aac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9588u, 0x3F9AA8u, 0x3F9AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9AB0u;
label_3f9ab0:
    // 0x3f9ab0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3f9ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3f9ab4:
    // 0x3f9ab4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3f9ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3f9ab8:
    // 0x3f9ab8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3f9ab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f9abc:
    // 0x3f9abc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3f9abcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f9ac0:
    // 0x3f9ac0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3f9ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3f9ac4:
    // 0x3f9ac4: 0x3e00008  jr          $ra
label_3f9ac8:
    if (ctx->pc == 0x3F9AC8u) {
        ctx->pc = 0x3F9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9AC4u;
        // 0x3f9ac8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9ACCu;
        goto label_3f9acc;
    }
    ctx->pc = 0x3F9AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9AC4u;
        // 0x3f9ac8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F9ACCu;
label_3f9acc:
    // 0x3f9acc: 0x0  nop
    ctx->pc = 0x3f9accu;
    // NOP
    ctx->pc = 0x3f9ad0u;
}
