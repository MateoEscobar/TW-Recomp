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

// Function: sub_001298C0
// Address: 0x1298c0 - 0x129c78
void sub_001298C0_0x1298c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001298C0_0x1298c0");
#endif

    switch (ctx->pc) {
        case 0x1298c0u: goto label_1298c0;
        case 0x1298c4u: goto label_1298c4;
        case 0x1298c8u: goto label_1298c8;
        case 0x1298ccu: goto label_1298cc;
        case 0x1298d0u: goto label_1298d0;
        case 0x1298d4u: goto label_1298d4;
        case 0x1298d8u: goto label_1298d8;
        case 0x1298dcu: goto label_1298dc;
        case 0x1298e0u: goto label_1298e0;
        case 0x1298e4u: goto label_1298e4;
        case 0x1298e8u: goto label_1298e8;
        case 0x1298ecu: goto label_1298ec;
        case 0x1298f0u: goto label_1298f0;
        case 0x1298f4u: goto label_1298f4;
        case 0x1298f8u: goto label_1298f8;
        case 0x1298fcu: goto label_1298fc;
        case 0x129900u: goto label_129900;
        case 0x129904u: goto label_129904;
        case 0x129908u: goto label_129908;
        case 0x12990cu: goto label_12990c;
        case 0x129910u: goto label_129910;
        case 0x129914u: goto label_129914;
        case 0x129918u: goto label_129918;
        case 0x12991cu: goto label_12991c;
        case 0x129920u: goto label_129920;
        case 0x129924u: goto label_129924;
        case 0x129928u: goto label_129928;
        case 0x12992cu: goto label_12992c;
        case 0x129930u: goto label_129930;
        case 0x129934u: goto label_129934;
        case 0x129938u: goto label_129938;
        case 0x12993cu: goto label_12993c;
        case 0x129940u: goto label_129940;
        case 0x129944u: goto label_129944;
        case 0x129948u: goto label_129948;
        case 0x12994cu: goto label_12994c;
        case 0x129950u: goto label_129950;
        case 0x129954u: goto label_129954;
        case 0x129958u: goto label_129958;
        case 0x12995cu: goto label_12995c;
        case 0x129960u: goto label_129960;
        case 0x129964u: goto label_129964;
        case 0x129968u: goto label_129968;
        case 0x12996cu: goto label_12996c;
        case 0x129970u: goto label_129970;
        case 0x129974u: goto label_129974;
        case 0x129978u: goto label_129978;
        case 0x12997cu: goto label_12997c;
        case 0x129980u: goto label_129980;
        case 0x129984u: goto label_129984;
        case 0x129988u: goto label_129988;
        case 0x12998cu: goto label_12998c;
        case 0x129990u: goto label_129990;
        case 0x129994u: goto label_129994;
        case 0x129998u: goto label_129998;
        case 0x12999cu: goto label_12999c;
        case 0x1299a0u: goto label_1299a0;
        case 0x1299a4u: goto label_1299a4;
        case 0x1299a8u: goto label_1299a8;
        case 0x1299acu: goto label_1299ac;
        case 0x1299b0u: goto label_1299b0;
        case 0x1299b4u: goto label_1299b4;
        case 0x1299b8u: goto label_1299b8;
        case 0x1299bcu: goto label_1299bc;
        case 0x1299c0u: goto label_1299c0;
        case 0x1299c4u: goto label_1299c4;
        case 0x1299c8u: goto label_1299c8;
        case 0x1299ccu: goto label_1299cc;
        case 0x1299d0u: goto label_1299d0;
        case 0x1299d4u: goto label_1299d4;
        case 0x1299d8u: goto label_1299d8;
        case 0x1299dcu: goto label_1299dc;
        case 0x1299e0u: goto label_1299e0;
        case 0x1299e4u: goto label_1299e4;
        case 0x1299e8u: goto label_1299e8;
        case 0x1299ecu: goto label_1299ec;
        case 0x1299f0u: goto label_1299f0;
        case 0x1299f4u: goto label_1299f4;
        case 0x1299f8u: goto label_1299f8;
        case 0x1299fcu: goto label_1299fc;
        case 0x129a00u: goto label_129a00;
        case 0x129a04u: goto label_129a04;
        case 0x129a08u: goto label_129a08;
        case 0x129a0cu: goto label_129a0c;
        case 0x129a10u: goto label_129a10;
        case 0x129a14u: goto label_129a14;
        case 0x129a18u: goto label_129a18;
        case 0x129a1cu: goto label_129a1c;
        case 0x129a20u: goto label_129a20;
        case 0x129a24u: goto label_129a24;
        case 0x129a28u: goto label_129a28;
        case 0x129a2cu: goto label_129a2c;
        case 0x129a30u: goto label_129a30;
        case 0x129a34u: goto label_129a34;
        case 0x129a38u: goto label_129a38;
        case 0x129a3cu: goto label_129a3c;
        case 0x129a40u: goto label_129a40;
        case 0x129a44u: goto label_129a44;
        case 0x129a48u: goto label_129a48;
        case 0x129a4cu: goto label_129a4c;
        case 0x129a50u: goto label_129a50;
        case 0x129a54u: goto label_129a54;
        case 0x129a58u: goto label_129a58;
        case 0x129a5cu: goto label_129a5c;
        case 0x129a60u: goto label_129a60;
        case 0x129a64u: goto label_129a64;
        case 0x129a68u: goto label_129a68;
        case 0x129a6cu: goto label_129a6c;
        case 0x129a70u: goto label_129a70;
        case 0x129a74u: goto label_129a74;
        case 0x129a78u: goto label_129a78;
        case 0x129a7cu: goto label_129a7c;
        case 0x129a80u: goto label_129a80;
        case 0x129a84u: goto label_129a84;
        case 0x129a88u: goto label_129a88;
        case 0x129a8cu: goto label_129a8c;
        case 0x129a90u: goto label_129a90;
        case 0x129a94u: goto label_129a94;
        case 0x129a98u: goto label_129a98;
        case 0x129a9cu: goto label_129a9c;
        case 0x129aa0u: goto label_129aa0;
        case 0x129aa4u: goto label_129aa4;
        case 0x129aa8u: goto label_129aa8;
        case 0x129aacu: goto label_129aac;
        case 0x129ab0u: goto label_129ab0;
        case 0x129ab4u: goto label_129ab4;
        case 0x129ab8u: goto label_129ab8;
        case 0x129abcu: goto label_129abc;
        case 0x129ac0u: goto label_129ac0;
        case 0x129ac4u: goto label_129ac4;
        case 0x129ac8u: goto label_129ac8;
        case 0x129accu: goto label_129acc;
        case 0x129ad0u: goto label_129ad0;
        case 0x129ad4u: goto label_129ad4;
        case 0x129ad8u: goto label_129ad8;
        case 0x129adcu: goto label_129adc;
        case 0x129ae0u: goto label_129ae0;
        case 0x129ae4u: goto label_129ae4;
        case 0x129ae8u: goto label_129ae8;
        case 0x129aecu: goto label_129aec;
        case 0x129af0u: goto label_129af0;
        case 0x129af4u: goto label_129af4;
        case 0x129af8u: goto label_129af8;
        case 0x129afcu: goto label_129afc;
        case 0x129b00u: goto label_129b00;
        case 0x129b04u: goto label_129b04;
        case 0x129b08u: goto label_129b08;
        case 0x129b0cu: goto label_129b0c;
        case 0x129b10u: goto label_129b10;
        case 0x129b14u: goto label_129b14;
        case 0x129b18u: goto label_129b18;
        case 0x129b1cu: goto label_129b1c;
        case 0x129b20u: goto label_129b20;
        case 0x129b24u: goto label_129b24;
        case 0x129b28u: goto label_129b28;
        case 0x129b2cu: goto label_129b2c;
        case 0x129b30u: goto label_129b30;
        case 0x129b34u: goto label_129b34;
        case 0x129b38u: goto label_129b38;
        case 0x129b3cu: goto label_129b3c;
        case 0x129b40u: goto label_129b40;
        case 0x129b44u: goto label_129b44;
        case 0x129b48u: goto label_129b48;
        case 0x129b4cu: goto label_129b4c;
        case 0x129b50u: goto label_129b50;
        case 0x129b54u: goto label_129b54;
        case 0x129b58u: goto label_129b58;
        case 0x129b5cu: goto label_129b5c;
        case 0x129b60u: goto label_129b60;
        case 0x129b64u: goto label_129b64;
        case 0x129b68u: goto label_129b68;
        case 0x129b6cu: goto label_129b6c;
        case 0x129b70u: goto label_129b70;
        case 0x129b74u: goto label_129b74;
        case 0x129b78u: goto label_129b78;
        case 0x129b7cu: goto label_129b7c;
        case 0x129b80u: goto label_129b80;
        case 0x129b84u: goto label_129b84;
        case 0x129b88u: goto label_129b88;
        case 0x129b8cu: goto label_129b8c;
        case 0x129b90u: goto label_129b90;
        case 0x129b94u: goto label_129b94;
        case 0x129b98u: goto label_129b98;
        case 0x129b9cu: goto label_129b9c;
        case 0x129ba0u: goto label_129ba0;
        case 0x129ba4u: goto label_129ba4;
        case 0x129ba8u: goto label_129ba8;
        case 0x129bacu: goto label_129bac;
        case 0x129bb0u: goto label_129bb0;
        case 0x129bb4u: goto label_129bb4;
        case 0x129bb8u: goto label_129bb8;
        case 0x129bbcu: goto label_129bbc;
        case 0x129bc0u: goto label_129bc0;
        case 0x129bc4u: goto label_129bc4;
        case 0x129bc8u: goto label_129bc8;
        case 0x129bccu: goto label_129bcc;
        case 0x129bd0u: goto label_129bd0;
        case 0x129bd4u: goto label_129bd4;
        case 0x129bd8u: goto label_129bd8;
        case 0x129bdcu: goto label_129bdc;
        case 0x129be0u: goto label_129be0;
        case 0x129be4u: goto label_129be4;
        case 0x129be8u: goto label_129be8;
        case 0x129becu: goto label_129bec;
        case 0x129bf0u: goto label_129bf0;
        case 0x129bf4u: goto label_129bf4;
        case 0x129bf8u: goto label_129bf8;
        case 0x129bfcu: goto label_129bfc;
        case 0x129c00u: goto label_129c00;
        case 0x129c04u: goto label_129c04;
        case 0x129c08u: goto label_129c08;
        case 0x129c0cu: goto label_129c0c;
        case 0x129c10u: goto label_129c10;
        case 0x129c14u: goto label_129c14;
        case 0x129c18u: goto label_129c18;
        case 0x129c1cu: goto label_129c1c;
        case 0x129c20u: goto label_129c20;
        case 0x129c24u: goto label_129c24;
        case 0x129c28u: goto label_129c28;
        case 0x129c2cu: goto label_129c2c;
        case 0x129c30u: goto label_129c30;
        case 0x129c34u: goto label_129c34;
        case 0x129c38u: goto label_129c38;
        case 0x129c3cu: goto label_129c3c;
        case 0x129c40u: goto label_129c40;
        case 0x129c44u: goto label_129c44;
        case 0x129c48u: goto label_129c48;
        case 0x129c4cu: goto label_129c4c;
        case 0x129c50u: goto label_129c50;
        case 0x129c54u: goto label_129c54;
        case 0x129c58u: goto label_129c58;
        case 0x129c5cu: goto label_129c5c;
        case 0x129c60u: goto label_129c60;
        case 0x129c64u: goto label_129c64;
        case 0x129c68u: goto label_129c68;
        case 0x129c6cu: goto label_129c6c;
        case 0x129c70u: goto label_129c70;
        case 0x129c74u: goto label_129c74;
        default: break;
    }

    ctx->pc = 0x1298c0u;

label_1298c0:
    // 0x1298c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1298c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1298c4:
    // 0x1298c4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1298c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1298c8:
    // 0x1298c8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1298c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1298cc:
    // 0x1298cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1298ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1298d0:
    // 0x1298d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1298d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1298d4:
    // 0x1298d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1298d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1298d8:
    // 0x1298d8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1298dc:
    if (ctx->pc == 0x1298DCu) {
        ctx->pc = 0x1298DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298D8u;
        // 0x1298dc: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1298E0u;
        goto label_1298e0;
    }
    ctx->pc = 0x1298D8u;
    {
        const bool branch_taken_0x1298d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1298DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298D8u;
        // 0x1298dc: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298d8) {
            ctx->pc = 0x1298E8u;
            goto label_1298e8;
        }
    }
    ctx->pc = 0x1298E0u;
label_1298e0:
    // 0x1298e0: 0xc600032c  lwc1        $f0, 0x32C($s0)
    ctx->pc = 0x1298e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1298e4:
    // 0x1298e4: 0xe600035c  swc1        $f0, 0x35C($s0)
    ctx->pc = 0x1298e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 860), bits); }
label_1298e8:
    // 0x1298e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1298e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1298ec:
    // 0x1298ec: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x1298ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_1298f0:
    // 0x1298f0: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x1298f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_1298f4:
    // 0x1298f4: 0x40f809  jalr        $v0
label_1298f8:
    if (ctx->pc == 0x1298F8u) {
        ctx->pc = 0x1298F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298F4u;
        // 0x1298f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1298FCu;
        goto label_1298fc;
    }
    ctx->pc = 0x1298F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1298FCu);
        ctx->pc = 0x1298F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298F4u;
        // 0x1298f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1298F4u, 0x1298FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1298FCu;
label_1298fc:
    // 0x1298fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1298fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129900:
    // 0x129900: 0xc0cd8ec  jal         func_3363B0
label_129904:
    if (ctx->pc == 0x129904u) {
        ctx->pc = 0x129904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129900u;
        // 0x129904: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129908u;
        goto label_129908;
    }
    ctx->pc = 0x129900u;
    SET_GPR_U32(ctx, 31, 0x129908u);
    ctx->pc = 0x129904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129900u;
    // 0x129904: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x129900u, 0x129908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129908u;
label_129908:
    // 0x129908: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x129908u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12990c:
    // 0x12990c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x12990cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_129910:
    // 0x129910: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x129910u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_129914:
    // 0x129914: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x129914u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_129918:
    // 0x129918: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x129918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12991c:
    // 0x12991c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x12991cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_129920:
    // 0x129920: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x129920u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_129924:
    // 0x129924: 0x4a0003bf  vwaitq
    ctx->pc = 0x129924u;
    // VWAITQ (Q already resolved in this runtime)
label_129928:
    // 0x129928: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x129928u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_12992c:
    // 0x12992c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x12992cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_129930:
    // 0x129930: 0x8e060314  lw          $a2, 0x314($s0)
    ctx->pc = 0x129930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
label_129934:
    // 0x129934: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x129934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_129938:
    // 0x129938: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x129938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_12993c:
    // 0x12993c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_129940:
    // 0x129940: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x129940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_129944:
    // 0x129944: 0x84c50092  lh          $a1, 0x92($a2)
    ctx->pc = 0x129944u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
label_129948:
    // 0x129948: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x129948u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_12994c:
    // 0x12994c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x12994cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_129950:
    // 0x129950: 0xc0cd8ec  jal         func_3363B0
label_129954:
    if (ctx->pc == 0x129954u) {
        ctx->pc = 0x129954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129950u;
        // 0x129954: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129958u;
        goto label_129958;
    }
    ctx->pc = 0x129950u;
    SET_GPR_U32(ctx, 31, 0x129958u);
    ctx->pc = 0x129954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129950u;
    // 0x129954: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x129950u, 0x129958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129958u;
label_129958:
    // 0x129958: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x129958u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12995c:
    // 0x12995c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12995cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_129960:
    // 0x129960: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x129960u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_129964:
    // 0x129964: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x129964u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_129968:
    // 0x129968: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x129968u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_12996c:
    // 0x12996c: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x12996cu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_129970:
    // 0x129970: 0x4a0003bf  vwaitq
    ctx->pc = 0x129970u;
    // VWAITQ (Q already resolved in this runtime)
label_129974:
    // 0x129974: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x129974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_129978:
    // 0x129978: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x129978u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_12997c:
    // 0x12997c: 0x82030458  lb          $v1, 0x458($s0)
    ctx->pc = 0x12997cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1112)));
label_129980:
    // 0x129980: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x129980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_129984:
    // 0x129984: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_129988:
    if (ctx->pc == 0x129988u) {
        ctx->pc = 0x129988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129984u;
        // 0x129988: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12998Cu;
        goto label_12998c;
    }
    ctx->pc = 0x129984u;
    {
        const bool branch_taken_0x129984 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x129988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129984u;
        // 0x129988: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129984) {
            ctx->pc = 0x1299A0u;
            goto label_1299a0;
        }
    }
    ctx->pc = 0x12998Cu;
label_12998c:
    // 0x12998c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12998cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_129990:
    // 0x129990: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x129990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_129994:
    // 0x129994: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x129994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_129998:
    // 0x129998: 0xc136b24  jal         func_4DAC90
label_12999c:
    if (ctx->pc == 0x12999Cu) {
        ctx->pc = 0x12999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129998u;
        // 0x12999c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1299A0u;
        goto label_1299a0;
    }
    ctx->pc = 0x129998u;
    SET_GPR_U32(ctx, 31, 0x1299A0u);
    ctx->pc = 0x12999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129998u;
    // 0x12999c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x129998u, 0x1299A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1299A0u;
label_1299a0:
    // 0x1299a0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x1299a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1299a4:
    // 0x1299a4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1299a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1299a8:
    // 0x1299a8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1299a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1299ac:
    // 0x1299ac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1299acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1299b0:
    // 0x1299b0: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x1299b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1299b4:
    // 0x1299b4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1299b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1299b8:
    // 0x1299b8: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1299b8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_1299bc:
    // 0x1299bc: 0x82040458  lb          $a0, 0x458($s0)
    ctx->pc = 0x1299bcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1112)));
label_1299c0:
    // 0x1299c0: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x1299c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1299c4:
    // 0x1299c4: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_1299c8:
    if (ctx->pc == 0x1299C8u) {
        ctx->pc = 0x1299C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299C4u;
        // 0x1299c8: 0x92030458  lbu         $v1, 0x458($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1299CCu;
        goto label_1299cc;
    }
    ctx->pc = 0x1299C4u;
    {
        const bool branch_taken_0x1299c4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1299C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299C4u;
        // 0x1299c8: 0x92030458  lbu         $v1, 0x458($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299c4) {
            ctx->pc = 0x1299D4u;
            goto label_1299d4;
        }
    }
    ctx->pc = 0x1299CCu;
label_1299cc:
    // 0x1299cc: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_1299d0:
    if (ctx->pc == 0x1299D0u) {
        ctx->pc = 0x1299D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299CCu;
        // 0x1299d0: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1299D4u;
        goto label_1299d4;
    }
    ctx->pc = 0x1299CCu;
    {
        const bool branch_taken_0x1299cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299CCu;
        // 0x1299d0: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299cc) {
            ctx->pc = 0x129A00u;
            goto label_129a00;
        }
    }
    ctx->pc = 0x1299D4u;
label_1299d4:
    // 0x1299d4: 0x92020455  lbu         $v0, 0x455($s0)
    ctx->pc = 0x1299d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1109)));
label_1299d8:
    // 0x1299d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1299dc:
    if (ctx->pc == 0x1299DCu) {
        ctx->pc = 0x1299DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299D8u;
        // 0x1299dc: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1299E0u;
        goto label_1299e0;
    }
    ctx->pc = 0x1299D8u;
    {
        const bool branch_taken_0x1299d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299D8u;
        // 0x1299dc: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299d8) {
            ctx->pc = 0x1299F4u;
            goto label_1299f4;
        }
    }
    ctx->pc = 0x1299E0u;
label_1299e0:
    // 0x1299e0: 0xc44091c8  lwc1        $f0, -0x6E38($v0)
    ctx->pc = 0x1299e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1299e4:
    // 0x1299e4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1299e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1299e8:
    // 0x1299e8: 0x0  nop
    ctx->pc = 0x1299e8u;
    // NOP
label_1299ec:
    // 0x1299ec: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1299f0:
    if (ctx->pc == 0x1299F0u) {
        ctx->pc = 0x1299F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299ECu;
        // 0x1299f0: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1299F4u;
        goto label_1299f4;
    }
    ctx->pc = 0x1299ECu;
    {
        const bool branch_taken_0x1299ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1299F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299ECu;
        // 0x1299f0: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299ec) {
            ctx->pc = 0x129A00u;
            goto label_129a00;
        }
    }
    ctx->pc = 0x1299F4u;
label_1299f4:
    // 0x1299f4: 0x483009a  bgezl       $a0, . + 4 + (0x9A << 2)
label_1299f8:
    if (ctx->pc == 0x1299F8u) {
        ctx->pc = 0x1299F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299F4u;
        // 0x1299f8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1299FCu;
        goto label_1299fc;
    }
    ctx->pc = 0x1299F4u;
    {
        const bool branch_taken_0x1299f4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1299f4) {
            ctx->pc = 0x1299F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1299F4u;
            // 0x1299f8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129C60u;
            goto label_129c60;
        }
    }
    ctx->pc = 0x1299FCu;
label_1299fc:
    // 0x1299fc: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1299fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_129a00:
    // 0x129a00: 0x4420018  bltzl       $v0, . + 4 + (0x18 << 2)
label_129a04:
    if (ctx->pc == 0x129A04u) {
        ctx->pc = 0x129A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A00u;
        // 0x129a04: 0x92020455  lbu         $v0, 0x455($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1109)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129A08u;
        goto label_129a08;
    }
    ctx->pc = 0x129A00u;
    {
        const bool branch_taken_0x129a00 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x129a00) {
            ctx->pc = 0x129A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129A00u;
            // 0x129a04: 0x92020455  lbu         $v0, 0x455($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1109)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129A64u;
            goto label_129a64;
        }
    }
    ctx->pc = 0x129A08u;
label_129a08:
    // 0x129a08: 0x56200014  bnel        $s1, $zero, . + 4 + (0x14 << 2)
label_129a0c:
    if (ctx->pc == 0x129A0Cu) {
        ctx->pc = 0x129A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A08u;
        // 0x129a0c: 0x82020458  lb          $v0, 0x458($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129A10u;
        goto label_129a10;
    }
    ctx->pc = 0x129A08u;
    {
        const bool branch_taken_0x129a08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x129a08) {
            ctx->pc = 0x129A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129A08u;
            // 0x129a0c: 0x82020458  lb          $v0, 0x458($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129A5Cu;
            goto label_129a5c;
        }
    }
    ctx->pc = 0x129A10u;
label_129a10:
    // 0x129a10: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x129a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_129a14:
    // 0x129a14: 0xc44091c4  lwc1        $f0, -0x6E3C($v0)
    ctx->pc = 0x129a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129a18:
    // 0x129a18: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x129a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129a1c:
    // 0x129a1c: 0x0  nop
    ctx->pc = 0x129a1cu;
    // NOP
label_129a20:
    // 0x129a20: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_129a24:
    if (ctx->pc == 0x129A24u) {
        ctx->pc = 0x129A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A20u;
        // 0x129a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129A28u;
        goto label_129a28;
    }
    ctx->pc = 0x129A20u;
    {
        const bool branch_taken_0x129a20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A20u;
        // 0x129a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a20) {
            ctx->pc = 0x129A58u;
            goto label_129a58;
        }
    }
    ctx->pc = 0x129A28u;
label_129a28:
    // 0x129a28: 0xc601035c  lwc1        $f1, 0x35C($s0)
    ctx->pc = 0x129a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129a2c:
    // 0x129a2c: 0x3c014108  lui         $at, 0x4108
    ctx->pc = 0x129a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16648 << 16));
label_129a30:
    // 0x129a30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x129a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_129a34:
    // 0x129a34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x129a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129a38:
    // 0x129a38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x129a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_129a3c:
    // 0x129a3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129a40:
    // 0x129a40: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x129a40u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_129a44:
    // 0x129a44: 0xc04b5ea  jal         func_12D7A8
label_129a48:
    if (ctx->pc == 0x129A48u) {
        ctx->pc = 0x129A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A44u;
        // 0x129a48: 0xe6000398  swc1        $f0, 0x398($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 920), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x129A4Cu;
        goto label_129a4c;
    }
    ctx->pc = 0x129A44u;
    SET_GPR_U32(ctx, 31, 0x129A4Cu);
    ctx->pc = 0x129A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129A44u;
    // 0x129a48: 0xe6000398  swc1        $f0, 0x398($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 920), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7A8u, 0x129A44u, 0x129A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A4Cu;
label_129a4c:
    // 0x129a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129a50:
    // 0x129a50: 0x1000003d  b           . + 4 + (0x3D << 2)
label_129a54:
    if (ctx->pc == 0x129A54u) {
        ctx->pc = 0x129A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A50u;
        // 0x129a54: 0xa2020455  sb          $v0, 0x455($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1109), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129A58u;
        goto label_129a58;
    }
    ctx->pc = 0x129A50u;
    {
        const bool branch_taken_0x129a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A50u;
        // 0x129a54: 0xa2020455  sb          $v0, 0x455($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1109), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a50) {
            ctx->pc = 0x129B48u;
            goto label_129b48;
        }
    }
    ctx->pc = 0x129A58u;
label_129a58:
    // 0x129a58: 0x82020458  lb          $v0, 0x458($s0)
    ctx->pc = 0x129a58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1112)));
label_129a5c:
    // 0x129a5c: 0x441001d  bgez        $v0, . + 4 + (0x1D << 2)
label_129a60:
    if (ctx->pc == 0x129A60u) {
        ctx->pc = 0x129A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A5Cu;
        // 0x129a60: 0x92020455  lbu         $v0, 0x455($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1109)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129A64u;
        goto label_129a64;
    }
    ctx->pc = 0x129A5Cu;
    {
        const bool branch_taken_0x129a5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x129A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A5Cu;
        // 0x129a60: 0x92020455  lbu         $v0, 0x455($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1109)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a5c) {
            ctx->pc = 0x129AD4u;
            goto label_129ad4;
        }
    }
    ctx->pc = 0x129A64u;
label_129a64:
    // 0x129a64: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_129a68:
    if (ctx->pc == 0x129A68u) {
        ctx->pc = 0x129A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A64u;
        // 0x129a68: 0xc600032c  lwc1        $f0, 0x32C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x129A6Cu;
        goto label_129a6c;
    }
    ctx->pc = 0x129A64u;
    {
        const bool branch_taken_0x129a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129a64) {
            ctx->pc = 0x129A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129A64u;
            // 0x129a68: 0xc600032c  lwc1        $f0, 0x32C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x129AB8u;
            goto label_129ab8;
        }
    }
    ctx->pc = 0x129A6Cu;
label_129a6c:
    // 0x129a6c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x129a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_129a70:
    // 0x129a70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x129a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_129a74:
    // 0x129a74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x129a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_129a78:
    // 0x129a78: 0xc136b24  jal         func_4DAC90
label_129a7c:
    if (ctx->pc == 0x129A7Cu) {
        ctx->pc = 0x129A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A78u;
        // 0x129a7c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129A80u;
        goto label_129a80;
    }
    ctx->pc = 0x129A78u;
    SET_GPR_U32(ctx, 31, 0x129A80u);
    ctx->pc = 0x129A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129A78u;
    // 0x129a7c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x129A78u, 0x129A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A80u;
label_129a80:
    // 0x129a80: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x129a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_129a84:
    // 0x129a84: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x129a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_129a88:
    // 0x129a88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x129a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_129a8c:
    // 0x129a8c: 0xc136b24  jal         func_4DAC90
label_129a90:
    if (ctx->pc == 0x129A90u) {
        ctx->pc = 0x129A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A8Cu;
        // 0x129a90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129A94u;
        goto label_129a94;
    }
    ctx->pc = 0x129A8Cu;
    SET_GPR_U32(ctx, 31, 0x129A94u);
    ctx->pc = 0x129A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129A8Cu;
    // 0x129a90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x129A8Cu, 0x129A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A94u;
label_129a94:
    // 0x129a94: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x129a94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_129a98:
    // 0x129a98: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x129a98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_129a9c:
    // 0x129a9c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x129a9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_129aa0:
    // 0x129aa0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x129aa0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_129aa4:
    // 0x129aa4: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x129aa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_129aa8:
    // 0x129aa8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x129aa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_129aac:
    // 0x129aac: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x129aacu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_129ab0:
    // 0x129ab0: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x129ab0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_129ab4:
    // 0x129ab4: 0xc600032c  lwc1        $f0, 0x32C($s0)
    ctx->pc = 0x129ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129ab8:
    // 0x129ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129abc:
    // 0x129abc: 0xc60c035c  lwc1        $f12, 0x35C($s0)
    ctx->pc = 0x129abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_129ac0:
    // 0x129ac0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x129ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129ac4:
    // 0x129ac4: 0xc04b5ea  jal         func_12D7A8
label_129ac8:
    if (ctx->pc == 0x129AC8u) {
        ctx->pc = 0x129AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129AC4u;
        // 0x129ac8: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x129ACCu;
        goto label_129acc;
    }
    ctx->pc = 0x129AC4u;
    SET_GPR_U32(ctx, 31, 0x129ACCu);
    ctx->pc = 0x129AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129AC4u;
    // 0x129ac8: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7A8u, 0x129AC4u, 0x129ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129ACCu;
label_129acc:
    // 0x129acc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_129ad0:
    if (ctx->pc == 0x129AD0u) {
        ctx->pc = 0x129AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129ACCu;
        // 0x129ad0: 0xa2000455  sb          $zero, 0x455($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1109), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129AD4u;
        goto label_129ad4;
    }
    ctx->pc = 0x129ACCu;
    {
        const bool branch_taken_0x129acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129ACCu;
        // 0x129ad0: 0xa2000455  sb          $zero, 0x455($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1109), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129acc) {
            ctx->pc = 0x129B48u;
            goto label_129b48;
        }
    }
    ctx->pc = 0x129AD4u;
label_129ad4:
    // 0x129ad4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_129ad8:
    if (ctx->pc == 0x129AD8u) {
        ctx->pc = 0x129AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129AD4u;
        // 0x129ad8: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129ADCu;
        goto label_129adc;
    }
    ctx->pc = 0x129AD4u;
    {
        const bool branch_taken_0x129ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129AD4u;
        // 0x129ad8: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ad4) {
            ctx->pc = 0x129B48u;
            goto label_129b48;
        }
    }
    ctx->pc = 0x129ADCu;
label_129adc:
    // 0x129adc: 0xc44091c8  lwc1        $f0, -0x6E38($v0)
    ctx->pc = 0x129adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129ae0:
    // 0x129ae0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x129ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129ae4:
    // 0x129ae4: 0x0  nop
    ctx->pc = 0x129ae4u;
    // NOP
label_129ae8:
    // 0x129ae8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_129aec:
    if (ctx->pc == 0x129AECu) {
        ctx->pc = 0x129AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129AE8u;
        // 0x129aec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129AF0u;
        goto label_129af0;
    }
    ctx->pc = 0x129AE8u;
    {
        const bool branch_taken_0x129ae8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129AE8u;
        // 0x129aec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ae8) {
            ctx->pc = 0x129B48u;
            goto label_129b48;
        }
    }
    ctx->pc = 0x129AF0u;
label_129af0:
    // 0x129af0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x129af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_129af4:
    // 0x129af4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x129af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_129af8:
    // 0x129af8: 0xc136b24  jal         func_4DAC90
label_129afc:
    if (ctx->pc == 0x129AFCu) {
        ctx->pc = 0x129AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129AF8u;
        // 0x129afc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129B00u;
        goto label_129b00;
    }
    ctx->pc = 0x129AF8u;
    SET_GPR_U32(ctx, 31, 0x129B00u);
    ctx->pc = 0x129AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129AF8u;
    // 0x129afc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x129AF8u, 0x129B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129B00u;
label_129b00:
    // 0x129b00: 0xc600032c  lwc1        $f0, 0x32C($s0)
    ctx->pc = 0x129b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129b04:
    // 0x129b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129b08:
    // 0x129b08: 0xc60c035c  lwc1        $f12, 0x35C($s0)
    ctx->pc = 0x129b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_129b0c:
    // 0x129b0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x129b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129b10:
    // 0x129b10: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x129b10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_129b14:
    // 0x129b14: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x129b14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_129b18:
    // 0x129b18: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x129b18u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_129b1c:
    // 0x129b1c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x129b1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_129b20:
    // 0x129b20: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x129b20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_129b24:
    // 0x129b24: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x129b24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_129b28:
    // 0x129b28: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x129b28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_129b2c:
    // 0x129b2c: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x129b2cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_129b30:
    // 0x129b30: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x129b30u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_129b34:
    // 0x129b34: 0xc04b5ea  jal         func_12D7A8
label_129b38:
    if (ctx->pc == 0x129B38u) {
        ctx->pc = 0x129B3Cu;
        goto label_129b3c;
    }
    ctx->pc = 0x129B34u;
    SET_GPR_U32(ctx, 31, 0x129B3Cu);
    ctx->pc = 0x12D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7A8u, 0x129B34u, 0x129B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129B3Cu;
label_129b3c:
    // 0x129b3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129b40:
    // 0x129b40: 0xa2000455  sb          $zero, 0x455($s0)
    ctx->pc = 0x129b40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1109), (uint8_t)GPR_U32(ctx, 0));
label_129b44:
    // 0x129b44: 0xa2020459  sb          $v0, 0x459($s0)
    ctx->pc = 0x129b44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1113), (uint8_t)GPR_U32(ctx, 2));
label_129b48:
    // 0x129b48: 0x82020458  lb          $v0, 0x458($s0)
    ctx->pc = 0x129b48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1112)));
label_129b4c:
    // 0x129b4c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_129b50:
    if (ctx->pc == 0x129B50u) {
        ctx->pc = 0x129B54u;
        goto label_129b54;
    }
    ctx->pc = 0x129B4Cu;
    {
        const bool branch_taken_0x129b4c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x129b4c) {
            ctx->pc = 0x129B60u;
            goto label_129b60;
        }
    }
    ctx->pc = 0x129B54u;
label_129b54:
    // 0x129b54: 0x92020455  lbu         $v0, 0x455($s0)
    ctx->pc = 0x129b54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1109)));
label_129b58:
    // 0x129b58: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
label_129b5c:
    if (ctx->pc == 0x129B5Cu) {
        ctx->pc = 0x129B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B58u;
        // 0x129b5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129B60u;
        goto label_129b60;
    }
    ctx->pc = 0x129B58u;
    {
        const bool branch_taken_0x129b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129b58) {
            ctx->pc = 0x129B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129B58u;
            // 0x129b5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129C60u;
            goto label_129c60;
        }
    }
    ctx->pc = 0x129B60u;
label_129b60:
    // 0x129b60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x129b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_129b64:
    // 0x129b64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x129b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_129b68:
    // 0x129b68: 0x0  nop
    ctx->pc = 0x129b68u;
    // NOP
label_129b6c:
    // 0x129b6c: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x129b6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129b70:
    // 0x129b70: 0x0  nop
    ctx->pc = 0x129b70u;
    // NOP
label_129b74:
    // 0x129b74: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_129b78:
    if (ctx->pc == 0x129B78u) {
        ctx->pc = 0x129B7Cu;
        goto label_129b7c;
    }
    ctx->pc = 0x129B74u;
    {
        const bool branch_taken_0x129b74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129b74) {
            ctx->pc = 0x129B88u;
            goto label_129b88;
        }
    }
    ctx->pc = 0x129B7Cu;
label_129b7c:
    // 0x129b7c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x129b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_129b80:
    // 0x129b80: 0x1000001c  b           . + 4 + (0x1C << 2)
label_129b84:
    if (ctx->pc == 0x129B84u) {
        ctx->pc = 0x129B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B80u;
        // 0x129b84: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x129B88u;
        goto label_129b88;
    }
    ctx->pc = 0x129B80u;
    {
        const bool branch_taken_0x129b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B80u;
        // 0x129b84: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b80) {
            ctx->pc = 0x129BF4u;
            goto label_129bf4;
        }
    }
    ctx->pc = 0x129B88u;
label_129b88:
    // 0x129b88: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x129b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_129b8c:
    // 0x129b8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129b90:
    // 0x129b90: 0x0  nop
    ctx->pc = 0x129b90u;
    // NOP
label_129b94:
    // 0x129b94: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x129b94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129b98:
    // 0x129b98: 0x0  nop
    ctx->pc = 0x129b98u;
    // NOP
label_129b9c:
    // 0x129b9c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_129ba0:
    if (ctx->pc == 0x129BA0u) {
        ctx->pc = 0x129BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B9Cu;
        // 0x129ba0: 0x4614a302  mul.s       $f12, $f20, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x129BA4u;
        goto label_129ba4;
    }
    ctx->pc = 0x129B9Cu;
    {
        const bool branch_taken_0x129b9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129b9c) {
            ctx->pc = 0x129BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129B9Cu;
            // 0x129ba0: 0x4614a302  mul.s       $f12, $f20, $f20 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x129BB8u;
            goto label_129bb8;
        }
    }
    ctx->pc = 0x129BA4u;
label_129ba4:
    // 0x129ba4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x129ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_129ba8:
    // 0x129ba8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x129ba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_129bac:
    // 0x129bac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x129bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_129bb0:
    // 0x129bb0: 0x10000010  b           . + 4 + (0x10 << 2)
label_129bb4:
    if (ctx->pc == 0x129BB4u) {
        ctx->pc = 0x129BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BB0u;
        // 0x129bb4: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x129BB8u;
        goto label_129bb8;
    }
    ctx->pc = 0x129BB0u;
    {
        const bool branch_taken_0x129bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BB0u;
        // 0x129bb4: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129bb0) {
            ctx->pc = 0x129BF4u;
            goto label_129bf4;
        }
    }
    ctx->pc = 0x129BB8u;
label_129bb8:
    // 0x129bb8: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x129bb8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_129bbc:
    // 0x129bbc: 0x0  nop
    ctx->pc = 0x129bbcu;
    // NOP
label_129bc0:
    // 0x129bc0: 0x0  nop
    ctx->pc = 0x129bc0u;
    // NOP
label_129bc4:
    // 0x129bc4: 0x460c0304  c1          0xC0304
    ctx->pc = 0x129bc4u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_129bc8:
    // 0x129bc8: 0x0  nop
    ctx->pc = 0x129bc8u;
    // NOP
label_129bcc:
    // 0x129bcc: 0x0  nop
    ctx->pc = 0x129bccu;
    // NOP
label_129bd0:
    // 0x129bd0: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x129bd0u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
label_129bd4:
    // 0x129bd4: 0xc0cd5a8  jal         func_3356A0
label_129bd8:
    if (ctx->pc == 0x129BD8u) {
        ctx->pc = 0x129BDCu;
        goto label_129bdc;
    }
    ctx->pc = 0x129BD4u;
    SET_GPR_U32(ctx, 31, 0x129BDCu);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x129BD4u, 0x129BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129BDCu;
label_129bdc:
    // 0x129bdc: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x129bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_129be0:
    // 0x129be0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x129be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_129be4:
    // 0x129be4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x129be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_129be8:
    // 0x129be8: 0x0  nop
    ctx->pc = 0x129be8u;
    // NOP
label_129bec:
    // 0x129bec: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x129becu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_129bf0:
    // 0x129bf0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x129bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129bf4:
    // 0x129bf4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x129bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_129bf8:
    // 0x129bf8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x129bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129bfc:
    // 0x129bfc: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x129bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_129c00:
    // 0x129c00: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x129c00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_129c04:
    // 0x129c04: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x129c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_129c08:
    // 0x129c08: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x129c08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_129c0c:
    // 0x129c0c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x129c0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_129c10:
    // 0x129c10: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x129c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129c14:
    // 0x129c14: 0x0  nop
    ctx->pc = 0x129c14u;
    // NOP
label_129c18:
    // 0x129c18: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_129c1c:
    if (ctx->pc == 0x129C1Cu) {
        ctx->pc = 0x129C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C18u;
        // 0x129c1c: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C20u;
        goto label_129c20;
    }
    ctx->pc = 0x129C18u;
    {
        const bool branch_taken_0x129c18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129c18) {
            ctx->pc = 0x129C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129C18u;
            // 0x129c1c: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x129C20u;
            goto label_129c20;
        }
    }
    ctx->pc = 0x129C20u;
label_129c20:
    // 0x129c20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x129c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_129c24:
    // 0x129c24: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x129c24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_129c28:
    // 0x129c28: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x129c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_129c2c:
    // 0x129c2c: 0x40f809  jalr        $v0
label_129c30:
    if (ctx->pc == 0x129C30u) {
        ctx->pc = 0x129C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C2Cu;
        // 0x129c30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C34u;
        goto label_129c34;
    }
    ctx->pc = 0x129C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x129C34u);
        ctx->pc = 0x129C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C2Cu;
        // 0x129c30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129C2Cu, 0x129C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x129C34u;
label_129c34:
    // 0x129c34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x129c34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_129c38:
    // 0x129c38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x129c38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_129c3c:
    // 0x129c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129c40:
    // 0x129c40: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x129c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_129c44:
    // 0x129c44: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x129c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_129c48:
    // 0x129c48: 0xc04b5a2  jal         func_12D688
label_129c4c:
    if (ctx->pc == 0x129C4Cu) {
        ctx->pc = 0x129C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C48u;
        // 0x129c4c: 0x26060180  addiu       $a2, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C50u;
        goto label_129c50;
    }
    ctx->pc = 0x129C48u;
    SET_GPR_U32(ctx, 31, 0x129C50u);
    ctx->pc = 0x129C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129C48u;
    // 0x129c4c: 0x26060180  addiu       $a2, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D688u, 0x129C48u, 0x129C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C50u;
label_129c50:
    // 0x129c50: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x129c50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_129c54:
    // 0x129c54: 0x7e020250  sq          $v0, 0x250($s0)
    ctx->pc = 0x129c54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 592), GPR_VEC(ctx, 2));
label_129c58:
    // 0x129c58: 0x7e020260  sq          $v0, 0x260($s0)
    ctx->pc = 0x129c58u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 608), GPR_VEC(ctx, 2));
label_129c5c:
    // 0x129c5c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x129c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_129c60:
    // 0x129c60: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x129c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_129c64:
    // 0x129c64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x129c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_129c68:
    // 0x129c68: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x129c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_129c6c:
    // 0x129c6c: 0x3e00008  jr          $ra
label_129c70:
    if (ctx->pc == 0x129C70u) {
        ctx->pc = 0x129C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C6Cu;
        // 0x129c70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C74u;
        goto label_129c74;
    }
    ctx->pc = 0x129C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C6Cu;
        // 0x129c70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129C74u;
label_129c74:
    // 0x129c74: 0x0  nop
    ctx->pc = 0x129c74u;
    // NOP
    ctx->pc = 0x129c78u;
}
