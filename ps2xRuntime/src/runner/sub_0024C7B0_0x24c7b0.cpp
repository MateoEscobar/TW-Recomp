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

// Function: sub_0024C7B0
// Address: 0x24c7b0 - 0x24ca40
void sub_0024C7B0_0x24c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C7B0_0x24c7b0");
#endif

    switch (ctx->pc) {
        case 0x24c7b0u: goto label_24c7b0;
        case 0x24c7b4u: goto label_24c7b4;
        case 0x24c7b8u: goto label_24c7b8;
        case 0x24c7bcu: goto label_24c7bc;
        case 0x24c7c0u: goto label_24c7c0;
        case 0x24c7c4u: goto label_24c7c4;
        case 0x24c7c8u: goto label_24c7c8;
        case 0x24c7ccu: goto label_24c7cc;
        case 0x24c7d0u: goto label_24c7d0;
        case 0x24c7d4u: goto label_24c7d4;
        case 0x24c7d8u: goto label_24c7d8;
        case 0x24c7dcu: goto label_24c7dc;
        case 0x24c7e0u: goto label_24c7e0;
        case 0x24c7e4u: goto label_24c7e4;
        case 0x24c7e8u: goto label_24c7e8;
        case 0x24c7ecu: goto label_24c7ec;
        case 0x24c7f0u: goto label_24c7f0;
        case 0x24c7f4u: goto label_24c7f4;
        case 0x24c7f8u: goto label_24c7f8;
        case 0x24c7fcu: goto label_24c7fc;
        case 0x24c800u: goto label_24c800;
        case 0x24c804u: goto label_24c804;
        case 0x24c808u: goto label_24c808;
        case 0x24c80cu: goto label_24c80c;
        case 0x24c810u: goto label_24c810;
        case 0x24c814u: goto label_24c814;
        case 0x24c818u: goto label_24c818;
        case 0x24c81cu: goto label_24c81c;
        case 0x24c820u: goto label_24c820;
        case 0x24c824u: goto label_24c824;
        case 0x24c828u: goto label_24c828;
        case 0x24c82cu: goto label_24c82c;
        case 0x24c830u: goto label_24c830;
        case 0x24c834u: goto label_24c834;
        case 0x24c838u: goto label_24c838;
        case 0x24c83cu: goto label_24c83c;
        case 0x24c840u: goto label_24c840;
        case 0x24c844u: goto label_24c844;
        case 0x24c848u: goto label_24c848;
        case 0x24c84cu: goto label_24c84c;
        case 0x24c850u: goto label_24c850;
        case 0x24c854u: goto label_24c854;
        case 0x24c858u: goto label_24c858;
        case 0x24c85cu: goto label_24c85c;
        case 0x24c860u: goto label_24c860;
        case 0x24c864u: goto label_24c864;
        case 0x24c868u: goto label_24c868;
        case 0x24c86cu: goto label_24c86c;
        case 0x24c870u: goto label_24c870;
        case 0x24c874u: goto label_24c874;
        case 0x24c878u: goto label_24c878;
        case 0x24c87cu: goto label_24c87c;
        case 0x24c880u: goto label_24c880;
        case 0x24c884u: goto label_24c884;
        case 0x24c888u: goto label_24c888;
        case 0x24c88cu: goto label_24c88c;
        case 0x24c890u: goto label_24c890;
        case 0x24c894u: goto label_24c894;
        case 0x24c898u: goto label_24c898;
        case 0x24c89cu: goto label_24c89c;
        case 0x24c8a0u: goto label_24c8a0;
        case 0x24c8a4u: goto label_24c8a4;
        case 0x24c8a8u: goto label_24c8a8;
        case 0x24c8acu: goto label_24c8ac;
        case 0x24c8b0u: goto label_24c8b0;
        case 0x24c8b4u: goto label_24c8b4;
        case 0x24c8b8u: goto label_24c8b8;
        case 0x24c8bcu: goto label_24c8bc;
        case 0x24c8c0u: goto label_24c8c0;
        case 0x24c8c4u: goto label_24c8c4;
        case 0x24c8c8u: goto label_24c8c8;
        case 0x24c8ccu: goto label_24c8cc;
        case 0x24c8d0u: goto label_24c8d0;
        case 0x24c8d4u: goto label_24c8d4;
        case 0x24c8d8u: goto label_24c8d8;
        case 0x24c8dcu: goto label_24c8dc;
        case 0x24c8e0u: goto label_24c8e0;
        case 0x24c8e4u: goto label_24c8e4;
        case 0x24c8e8u: goto label_24c8e8;
        case 0x24c8ecu: goto label_24c8ec;
        case 0x24c8f0u: goto label_24c8f0;
        case 0x24c8f4u: goto label_24c8f4;
        case 0x24c8f8u: goto label_24c8f8;
        case 0x24c8fcu: goto label_24c8fc;
        case 0x24c900u: goto label_24c900;
        case 0x24c904u: goto label_24c904;
        case 0x24c908u: goto label_24c908;
        case 0x24c90cu: goto label_24c90c;
        case 0x24c910u: goto label_24c910;
        case 0x24c914u: goto label_24c914;
        case 0x24c918u: goto label_24c918;
        case 0x24c91cu: goto label_24c91c;
        case 0x24c920u: goto label_24c920;
        case 0x24c924u: goto label_24c924;
        case 0x24c928u: goto label_24c928;
        case 0x24c92cu: goto label_24c92c;
        case 0x24c930u: goto label_24c930;
        case 0x24c934u: goto label_24c934;
        case 0x24c938u: goto label_24c938;
        case 0x24c93cu: goto label_24c93c;
        case 0x24c940u: goto label_24c940;
        case 0x24c944u: goto label_24c944;
        case 0x24c948u: goto label_24c948;
        case 0x24c94cu: goto label_24c94c;
        case 0x24c950u: goto label_24c950;
        case 0x24c954u: goto label_24c954;
        case 0x24c958u: goto label_24c958;
        case 0x24c95cu: goto label_24c95c;
        case 0x24c960u: goto label_24c960;
        case 0x24c964u: goto label_24c964;
        case 0x24c968u: goto label_24c968;
        case 0x24c96cu: goto label_24c96c;
        case 0x24c970u: goto label_24c970;
        case 0x24c974u: goto label_24c974;
        case 0x24c978u: goto label_24c978;
        case 0x24c97cu: goto label_24c97c;
        case 0x24c980u: goto label_24c980;
        case 0x24c984u: goto label_24c984;
        case 0x24c988u: goto label_24c988;
        case 0x24c98cu: goto label_24c98c;
        case 0x24c990u: goto label_24c990;
        case 0x24c994u: goto label_24c994;
        case 0x24c998u: goto label_24c998;
        case 0x24c99cu: goto label_24c99c;
        case 0x24c9a0u: goto label_24c9a0;
        case 0x24c9a4u: goto label_24c9a4;
        case 0x24c9a8u: goto label_24c9a8;
        case 0x24c9acu: goto label_24c9ac;
        case 0x24c9b0u: goto label_24c9b0;
        case 0x24c9b4u: goto label_24c9b4;
        case 0x24c9b8u: goto label_24c9b8;
        case 0x24c9bcu: goto label_24c9bc;
        case 0x24c9c0u: goto label_24c9c0;
        case 0x24c9c4u: goto label_24c9c4;
        case 0x24c9c8u: goto label_24c9c8;
        case 0x24c9ccu: goto label_24c9cc;
        case 0x24c9d0u: goto label_24c9d0;
        case 0x24c9d4u: goto label_24c9d4;
        case 0x24c9d8u: goto label_24c9d8;
        case 0x24c9dcu: goto label_24c9dc;
        case 0x24c9e0u: goto label_24c9e0;
        case 0x24c9e4u: goto label_24c9e4;
        case 0x24c9e8u: goto label_24c9e8;
        case 0x24c9ecu: goto label_24c9ec;
        case 0x24c9f0u: goto label_24c9f0;
        case 0x24c9f4u: goto label_24c9f4;
        case 0x24c9f8u: goto label_24c9f8;
        case 0x24c9fcu: goto label_24c9fc;
        case 0x24ca00u: goto label_24ca00;
        case 0x24ca04u: goto label_24ca04;
        case 0x24ca08u: goto label_24ca08;
        case 0x24ca0cu: goto label_24ca0c;
        case 0x24ca10u: goto label_24ca10;
        case 0x24ca14u: goto label_24ca14;
        case 0x24ca18u: goto label_24ca18;
        case 0x24ca1cu: goto label_24ca1c;
        case 0x24ca20u: goto label_24ca20;
        case 0x24ca24u: goto label_24ca24;
        case 0x24ca28u: goto label_24ca28;
        case 0x24ca2cu: goto label_24ca2c;
        case 0x24ca30u: goto label_24ca30;
        case 0x24ca34u: goto label_24ca34;
        case 0x24ca38u: goto label_24ca38;
        case 0x24ca3cu: goto label_24ca3c;
        default: break;
    }

    ctx->pc = 0x24c7b0u;

label_24c7b0:
    // 0x24c7b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x24c7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_24c7b4:
    // 0x24c7b4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x24c7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_24c7b8:
    // 0x24c7b8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x24c7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_24c7bc:
    // 0x24c7bc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x24c7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_24c7c0:
    // 0x24c7c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24c7c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24c7c4:
    // 0x24c7c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x24c7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_24c7c8:
    // 0x24c7c8: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x24c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_24c7cc:
    // 0x24c7cc: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
label_24c7d0:
    if (ctx->pc == 0x24C7D0u) {
        ctx->pc = 0x24C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7CCu;
        // 0x24c7d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C7D4u;
        goto label_24c7d4;
    }
    ctx->pc = 0x24C7CCu;
    {
        const bool branch_taken_0x24c7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7CCu;
        // 0x24c7d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c7cc) {
            ctx->pc = 0x24CA24u;
            goto label_24ca24;
        }
    }
    ctx->pc = 0x24C7D4u;
label_24c7d4:
    // 0x24c7d4: 0x12200094  beqz        $s1, . + 4 + (0x94 << 2)
label_24c7d8:
    if (ctx->pc == 0x24C7D8u) {
        ctx->pc = 0x24C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7D4u;
        // 0x24c7d8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C7DCu;
        goto label_24c7dc;
    }
    ctx->pc = 0x24C7D4u;
    {
        const bool branch_taken_0x24c7d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7D4u;
        // 0x24c7d8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c7d4) {
            ctx->pc = 0x24CA28u;
            goto label_24ca28;
        }
    }
    ctx->pc = 0x24C7DCu;
label_24c7dc:
    // 0x24c7dc: 0x3c01bf37  lui         $at, 0xBF37
    ctx->pc = 0x24c7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48951 << 16));
label_24c7e0:
    // 0x24c7e0: 0x342193de  ori         $at, $at, 0x93DE
    ctx->pc = 0x24c7e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37854);
label_24c7e4:
    // 0x24c7e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24c7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24c7e8:
    // 0x24c7e8: 0x3c013f37  lui         $at, 0x3F37
    ctx->pc = 0x24c7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16183 << 16));
label_24c7ec:
    // 0x24c7ec: 0x342193de  ori         $at, $at, 0x93DE
    ctx->pc = 0x24c7ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37854);
label_24c7f0:
    // 0x24c7f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24c7f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24c7f4:
    // 0x24c7f4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x24c7f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_24c7f8:
    // 0x24c7f8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x24c7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_24c7fc:
    // 0x24c7fc: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x24c7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
label_24c800:
    // 0x24c800: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x24c800u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_24c804:
    // 0x24c804: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24c804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_24c808:
    // 0x24c808: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x24c808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_24c80c:
    // 0x24c80c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24c80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_24c810:
    // 0x24c810: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24c810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_24c814:
    // 0x24c814: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24c814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24c818:
    // 0x24c818: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x24c818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_24c81c:
    // 0x24c81c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x24c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_24c820:
    // 0x24c820: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x24c820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_24c824:
    // 0x24c824: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x24c824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_24c828:
    // 0x24c828: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x24c828u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_24c82c:
    // 0x24c82c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x24c82cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_24c830:
    // 0x24c830: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x24c830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24c834:
    // 0x24c834: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x24c834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_24c838:
    // 0x24c838: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x24c838u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24c83c:
    // 0x24c83c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x24c83cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24c840:
    // 0x24c840: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x24c840u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_24c844:
    // 0x24c844: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x24c844u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24c848:
    // 0x24c848: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x24c848u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24c84c:
    // 0x24c84c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x24c84cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_24c850:
    // 0x24c850: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x24c850u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_24c854:
    // 0x24c854: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x24c854u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24c858:
    // 0x24c858: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x24c858u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_24c85c:
    // 0x24c85c: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x24c85cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_24c860:
    // 0x24c860: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x24c860u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24c864:
    // 0x24c864: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x24c864u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_24c868:
    // 0x24c868: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x24c868u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_24c86c:
    // 0x24c86c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x24c86cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_24c870:
    // 0x24c870: 0x8e260054  lw          $a2, 0x54($s1)
    ctx->pc = 0x24c870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_24c874:
    // 0x24c874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24c874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24c878:
    // 0x24c878: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x24c878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_24c87c:
    // 0x24c87c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x24c87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24c880:
    // 0x24c880: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x24c880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_24c884:
    // 0x24c884: 0x34c60010  ori         $a2, $a2, 0x10
    ctx->pc = 0x24c884u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
label_24c888:
    // 0x24c888: 0xae260054  sw          $a2, 0x54($s1)
    ctx->pc = 0x24c888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 6));
label_24c88c:
    // 0x24c88c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x24c88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_24c890:
    // 0x24c890: 0xc0e896c  jal         func_3A25B0
label_24c894:
    if (ctx->pc == 0x24C894u) {
        ctx->pc = 0x24C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C890u;
        // 0x24c894: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C898u;
        goto label_24c898;
    }
    ctx->pc = 0x24C890u;
    SET_GPR_U32(ctx, 31, 0x24C898u);
    ctx->pc = 0x24C894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C890u;
    // 0x24c894: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x24C890u, 0x24C898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C898u;
label_24c898:
    // 0x24c898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24c898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24c89c:
    // 0x24c89c: 0xc0e862e  jal         func_3A18B8
label_24c8a0:
    if (ctx->pc == 0x24C8A0u) {
        ctx->pc = 0x24C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C89Cu;
        // 0x24c8a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C8A4u;
        goto label_24c8a4;
    }
    ctx->pc = 0x24C89Cu;
    SET_GPR_U32(ctx, 31, 0x24C8A4u);
    ctx->pc = 0x24C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C89Cu;
    // 0x24c8a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x24C89Cu, 0x24C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C8A4u;
label_24c8a4:
    // 0x24c8a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24c8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24c8a8:
    // 0x24c8a8: 0xc0e5748  jal         func_395D20
label_24c8ac:
    if (ctx->pc == 0x24C8ACu) {
        ctx->pc = 0x24C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8A8u;
        // 0x24c8ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C8B0u;
        goto label_24c8b0;
    }
    ctx->pc = 0x24C8A8u;
    SET_GPR_U32(ctx, 31, 0x24C8B0u);
    ctx->pc = 0x24C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C8A8u;
    // 0x24c8ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x24C8A8u, 0x24C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C8B0u;
label_24c8b0:
    // 0x24c8b0: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x24c8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_24c8b4:
    // 0x24c8b4: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x24c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
label_24c8b8:
    // 0x24c8b8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x24c8b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24c8bc:
    // 0x24c8bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24c8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_24c8c0:
    // 0x24c8c0: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x24c8c0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24c8c4:
    // 0x24c8c4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x24c8c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_24c8c8:
    // 0x24c8c8: 0xae250054  sw          $a1, 0x54($s1)
    ctx->pc = 0x24c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 5));
label_24c8cc:
    // 0x24c8cc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x24c8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_24c8d0:
    // 0x24c8d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24c8d4:
    // 0x24c8d4: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x24c8d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_24c8d8:
    // 0x24c8d8: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x24c8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_24c8dc:
    // 0x24c8dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24c8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24c8e0:
    // 0x24c8e0: 0x7e240020  sq          $a0, 0x20($s1)
    ctx->pc = 0x24c8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 4));
label_24c8e4:
    // 0x24c8e4: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x24c8e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_24c8e8:
    // 0x24c8e8: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x24c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_24c8ec:
    // 0x24c8ec: 0x60f809  jalr        $v1
label_24c8f0:
    if (ctx->pc == 0x24C8F0u) {
        ctx->pc = 0x24C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8ECu;
        // 0x24c8f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C8F4u;
        goto label_24c8f4;
    }
    ctx->pc = 0x24C8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24C8F4u);
        ctx->pc = 0x24C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8ECu;
        // 0x24c8f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C8ECu, 0x24C8F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C8F4u;
label_24c8f4:
    // 0x24c8f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24c8f8:
    // 0x24c8f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24c8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24c8fc:
    // 0x24c8fc: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x24c8fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_24c900:
    // 0x24c900: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x24c900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_24c904:
    // 0x24c904: 0xc0f809  jalr        $a2
label_24c908:
    if (ctx->pc == 0x24C908u) {
        ctx->pc = 0x24C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C904u;
        // 0x24c908: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C90Cu;
        goto label_24c90c;
    }
    ctx->pc = 0x24C904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x24C90Cu);
        ctx->pc = 0x24C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C904u;
        // 0x24c908: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C904u, 0x24C90Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C90Cu;
label_24c90c:
    // 0x24c90c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x24c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24c910:
    // 0x24c910: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x24c910u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24c914:
    // 0x24c914: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24c914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_24c918:
    // 0x24c918: 0x40f809  jalr        $v0
label_24c91c:
    if (ctx->pc == 0x24C91Cu) {
        ctx->pc = 0x24C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C918u;
        // 0x24c91c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C920u;
        goto label_24c920;
    }
    ctx->pc = 0x24C918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C920u);
        ctx->pc = 0x24C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C918u;
        // 0x24c91c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C918u, 0x24C920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C920u;
label_24c920:
    // 0x24c920: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24c924:
    // 0x24c924: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x24c924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_24c928:
    // 0x24c928: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x24c928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24c92c:
    // 0x24c92c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_24c930:
    // 0x24c930: 0x40f809  jalr        $v0
label_24c934:
    if (ctx->pc == 0x24C934u) {
        ctx->pc = 0x24C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C930u;
        // 0x24c934: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C938u;
        goto label_24c938;
    }
    ctx->pc = 0x24C930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C938u);
        ctx->pc = 0x24C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C930u;
        // 0x24c934: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C930u, 0x24C938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C938u;
label_24c938:
    // 0x24c938: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x24c938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_24c93c:
    // 0x24c93c: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x24c93cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_24c940:
    // 0x24c940: 0xae44035c  sw          $a0, 0x35C($s2)
    ctx->pc = 0x24c940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 860), GPR_U32(ctx, 4));
label_24c944:
    // 0x24c944: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x24c944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_24c948:
    // 0x24c948: 0xae420358  sw          $v0, 0x358($s2)
    ctx->pc = 0x24c948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 856), GPR_U32(ctx, 2));
label_24c94c:
    // 0x24c94c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x24c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_24c950:
    // 0x24c950: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x24c950u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_24c954:
    // 0x24c954: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x24c954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_24c958:
    // 0x24c958: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24c958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_24c95c:
    // 0x24c95c: 0x24841730  addiu       $a0, $a0, 0x1730
    ctx->pc = 0x24c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5936));
label_24c960:
    // 0x24c960: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x24c960u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_24c964:
    // 0x24c964: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x24c964u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_24c968:
    // 0x24c968: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x24c968u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_24c96c:
    // 0x24c96c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x24c96cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24c970:
    // 0x24c970: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x24c970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24c974:
    // 0x24c974: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x24c974u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_24c978:
    // 0x24c978: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x24c978u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_24c97c:
    // 0x24c97c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x24c97cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24c980:
    // 0x24c980: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x24c980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_24c984:
    // 0x24c984: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x24c984u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_24c988:
    // 0x24c988: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x24c988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24c98c:
    // 0x24c98c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x24c98cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_24c990:
    // 0x24c990: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x24c990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24c994:
    // 0x24c994: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x24c994u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_24c998:
    // 0x24c998: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x24c998u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_24c99c:
    // 0x24c99c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x24c99cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_24c9a0:
    // 0x24c9a0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x24c9a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_24c9a4:
    // 0x24c9a4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x24c9a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_24c9a8:
    // 0x24c9a8: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x24c9a8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_24c9ac:
    // 0x24c9ac: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x24c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_24c9b0:
    // 0x24c9b0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x24c9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_24c9b4:
    // 0x24c9b4: 0x8c85489c  lw          $a1, 0x489C($a0)
    ctx->pc = 0x24c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_24c9b8:
    // 0x24c9b8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x24c9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_24c9bc:
    // 0x24c9bc: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x24c9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_24c9c0:
    // 0x24c9c0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x24c9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_24c9c4:
    // 0x24c9c4: 0x84a20454  lh          $v0, 0x454($a1)
    ctx->pc = 0x24c9c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 1108)));
label_24c9c8:
    // 0x24c9c8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_24c9cc:
    if (ctx->pc == 0x24C9CCu) {
        ctx->pc = 0x24C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9C8u;
        // 0x24c9cc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C9D0u;
        goto label_24c9d0;
    }
    ctx->pc = 0x24C9C8u;
    {
        const bool branch_taken_0x24c9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9C8u;
        // 0x24c9cc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c9c8) {
            ctx->pc = 0x24CA28u;
            goto label_24ca28;
        }
    }
    ctx->pc = 0x24C9D0u;
label_24c9d0:
    // 0x24c9d0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x24c9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_24c9d4:
    // 0x24c9d4: 0xc0e8b48  jal         func_3A2D20
label_24c9d8:
    if (ctx->pc == 0x24C9D8u) {
        ctx->pc = 0x24C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9D4u;
        // 0x24c9d8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C9DCu;
        goto label_24c9dc;
    }
    ctx->pc = 0x24C9D4u;
    SET_GPR_U32(ctx, 31, 0x24C9DCu);
    ctx->pc = 0x24C9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9D4u;
    // 0x24c9d8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x24C9D4u, 0x24C9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9DCu;
label_24c9dc:
    // 0x24c9dc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x24c9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_24c9e0:
    // 0x24c9e0: 0xc0e8b70  jal         func_3A2DC0
label_24c9e4:
    if (ctx->pc == 0x24C9E4u) {
        ctx->pc = 0x24C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9E0u;
        // 0x24c9e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C9E8u;
        goto label_24c9e8;
    }
    ctx->pc = 0x24C9E0u;
    SET_GPR_U32(ctx, 31, 0x24C9E8u);
    ctx->pc = 0x24C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9E0u;
    // 0x24c9e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x24C9E0u, 0x24C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9E8u;
label_24c9e8:
    // 0x24c9e8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x24c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_24c9ec:
    // 0x24c9ec: 0xc0e8b68  jal         func_3A2DA0
label_24c9f0:
    if (ctx->pc == 0x24C9F0u) {
        ctx->pc = 0x24C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9ECu;
        // 0x24c9f0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C9F4u;
        goto label_24c9f4;
    }
    ctx->pc = 0x24C9ECu;
    SET_GPR_U32(ctx, 31, 0x24C9F4u);
    ctx->pc = 0x24C9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9ECu;
    // 0x24c9f0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x24C9ECu, 0x24C9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9F4u;
label_24c9f4:
    // 0x24c9f4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x24c9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_24c9f8:
    // 0x24c9f8: 0xc0e8b58  jal         func_3A2D60
label_24c9fc:
    if (ctx->pc == 0x24C9FCu) {
        ctx->pc = 0x24C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9F8u;
        // 0x24c9fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CA00u;
        goto label_24ca00;
    }
    ctx->pc = 0x24C9F8u;
    SET_GPR_U32(ctx, 31, 0x24CA00u);
    ctx->pc = 0x24C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9F8u;
    // 0x24c9fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24C9F8u, 0x24CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA00u;
label_24ca00:
    // 0x24ca00: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x24ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_24ca04:
    // 0x24ca04: 0xc0e8b58  jal         func_3A2D60
label_24ca08:
    if (ctx->pc == 0x24CA08u) {
        ctx->pc = 0x24CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA04u;
        // 0x24ca08: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CA0Cu;
        goto label_24ca0c;
    }
    ctx->pc = 0x24CA04u;
    SET_GPR_U32(ctx, 31, 0x24CA0Cu);
    ctx->pc = 0x24CA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA04u;
    // 0x24ca08: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24CA04u, 0x24CA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA0Cu;
label_24ca0c:
    // 0x24ca0c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x24ca0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_24ca10:
    // 0x24ca10: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x24ca10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_24ca14:
    // 0x24ca14: 0xc0e8b90  jal         func_3A2E40
label_24ca18:
    if (ctx->pc == 0x24CA18u) {
        ctx->pc = 0x24CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA14u;
        // 0x24ca18: 0x24a5cfb0  addiu       $a1, $a1, -0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CA1Cu;
        goto label_24ca1c;
    }
    ctx->pc = 0x24CA14u;
    SET_GPR_U32(ctx, 31, 0x24CA1Cu);
    ctx->pc = 0x24CA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA14u;
    // 0x24ca18: 0x24a5cfb0  addiu       $a1, $a1, -0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x24CA14u, 0x24CA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA1Cu;
label_24ca1c:
    // 0x24ca1c: 0xc0e8b50  jal         func_3A2D40
label_24ca20:
    if (ctx->pc == 0x24CA20u) {
        ctx->pc = 0x24CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA1Cu;
        // 0x24ca20: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CA24u;
        goto label_24ca24;
    }
    ctx->pc = 0x24CA1Cu;
    SET_GPR_U32(ctx, 31, 0x24CA24u);
    ctx->pc = 0x24CA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA1Cu;
    // 0x24ca20: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x24CA1Cu, 0x24CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA24u;
label_24ca24:
    // 0x24ca24: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x24ca24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_24ca28:
    // 0x24ca28: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x24ca28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_24ca2c:
    // 0x24ca2c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x24ca2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_24ca30:
    // 0x24ca30: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x24ca30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_24ca34:
    // 0x24ca34: 0x3e00008  jr          $ra
label_24ca38:
    if (ctx->pc == 0x24CA38u) {
        ctx->pc = 0x24CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA34u;
        // 0x24ca38: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CA3Cu;
        goto label_24ca3c;
    }
    ctx->pc = 0x24CA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA34u;
        // 0x24ca38: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CA3Cu;
label_24ca3c:
    // 0x24ca3c: 0x0  nop
    ctx->pc = 0x24ca3cu;
    // NOP
    ctx->pc = 0x24ca40u;
}
