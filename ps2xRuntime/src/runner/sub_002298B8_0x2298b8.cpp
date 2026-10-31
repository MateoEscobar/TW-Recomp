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

// Function: sub_002298B8
// Address: 0x2298b8 - 0x229960
void sub_002298B8_0x2298b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002298B8_0x2298b8");
#endif

    switch (ctx->pc) {
        case 0x2298b8u: goto label_2298b8;
        case 0x2298bcu: goto label_2298bc;
        case 0x2298c0u: goto label_2298c0;
        case 0x2298c4u: goto label_2298c4;
        case 0x2298c8u: goto label_2298c8;
        case 0x2298ccu: goto label_2298cc;
        case 0x2298d0u: goto label_2298d0;
        case 0x2298d4u: goto label_2298d4;
        case 0x2298d8u: goto label_2298d8;
        case 0x2298dcu: goto label_2298dc;
        case 0x2298e0u: goto label_2298e0;
        case 0x2298e4u: goto label_2298e4;
        case 0x2298e8u: goto label_2298e8;
        case 0x2298ecu: goto label_2298ec;
        case 0x2298f0u: goto label_2298f0;
        case 0x2298f4u: goto label_2298f4;
        case 0x2298f8u: goto label_2298f8;
        case 0x2298fcu: goto label_2298fc;
        case 0x229900u: goto label_229900;
        case 0x229904u: goto label_229904;
        case 0x229908u: goto label_229908;
        case 0x22990cu: goto label_22990c;
        case 0x229910u: goto label_229910;
        case 0x229914u: goto label_229914;
        case 0x229918u: goto label_229918;
        case 0x22991cu: goto label_22991c;
        case 0x229920u: goto label_229920;
        case 0x229924u: goto label_229924;
        case 0x229928u: goto label_229928;
        case 0x22992cu: goto label_22992c;
        case 0x229930u: goto label_229930;
        case 0x229934u: goto label_229934;
        case 0x229938u: goto label_229938;
        case 0x22993cu: goto label_22993c;
        case 0x229940u: goto label_229940;
        case 0x229944u: goto label_229944;
        case 0x229948u: goto label_229948;
        case 0x22994cu: goto label_22994c;
        case 0x229950u: goto label_229950;
        case 0x229954u: goto label_229954;
        case 0x229958u: goto label_229958;
        case 0x22995cu: goto label_22995c;
        default: break;
    }

    ctx->pc = 0x2298b8u;

label_2298b8:
    // 0x2298b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2298b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2298bc:
    // 0x2298bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2298bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2298c0:
    // 0x2298c0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2298c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2298c4:
    // 0x2298c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2298c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2298c8:
    // 0x2298c8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_2298cc:
    if (ctx->pc == 0x2298CCu) {
        ctx->pc = 0x2298CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298C8u;
        // 0x2298cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2298D0u;
        goto label_2298d0;
    }
    ctx->pc = 0x2298C8u;
    {
        const bool branch_taken_0x2298c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2298CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298C8u;
        // 0x2298cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298c8) {
            ctx->pc = 0x2298D8u;
            goto label_2298d8;
        }
    }
    ctx->pc = 0x2298D0u;
label_2298d0:
    // 0x2298d0: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
label_2298d4:
    if (ctx->pc == 0x2298D4u) {
        ctx->pc = 0x2298D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298D0u;
        // 0x2298d4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2298D8u;
        goto label_2298d8;
    }
    ctx->pc = 0x2298D0u;
    {
        const bool branch_taken_0x2298d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2298d0) {
            ctx->pc = 0x2298D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2298D0u;
            // 0x2298d4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2298E4u;
            goto label_2298e4;
        }
    }
    ctx->pc = 0x2298D8u;
label_2298d8:
    // 0x2298d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2298d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2298dc:
    // 0x2298dc: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2298e0:
    if (ctx->pc == 0x2298E0u) {
        ctx->pc = 0x2298E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298DCu;
        // 0x2298e0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2298E4u;
        goto label_2298e4;
    }
    ctx->pc = 0x2298DCu;
    {
        const bool branch_taken_0x2298dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2298E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298DCu;
        // 0x2298e0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298dc) {
            ctx->pc = 0x229954u;
            goto label_229954;
        }
    }
    ctx->pc = 0x2298E4u;
label_2298e4:
    // 0x2298e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2298e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2298e8:
    // 0x2298e8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2298e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2298ec:
    // 0x2298ec: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2298ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2298f0:
    // 0x2298f0: 0x60f809  jalr        $v1
label_2298f4:
    if (ctx->pc == 0x2298F4u) {
        ctx->pc = 0x2298F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298F0u;
        // 0x2298f4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2298F8u;
        goto label_2298f8;
    }
    ctx->pc = 0x2298F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2298F8u);
        ctx->pc = 0x2298F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298F0u;
        // 0x2298f4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2298F0u, 0x2298F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2298F8u;
label_2298f8:
    // 0x2298f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2298f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2298fc:
    // 0x2298fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2298fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_229900:
    // 0x229900: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x229900u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_229904:
    // 0x229904: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x229904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_229908:
    // 0x229908: 0x60f809  jalr        $v1
label_22990c:
    if (ctx->pc == 0x22990Cu) {
        ctx->pc = 0x22990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229908u;
        // 0x22990c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229910u;
        goto label_229910;
    }
    ctx->pc = 0x229908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x229910u);
        ctx->pc = 0x22990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229908u;
        // 0x22990c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229908u, 0x229910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229910u;
label_229910:
    // 0x229910: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x229910u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_229914:
    // 0x229914: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x229914u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_229918:
    // 0x229918: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x229918u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_22991c:
    // 0x22991c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x22991cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_229920:
    // 0x229920: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x229920u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_229924:
    // 0x229924: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x229924u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_229928:
    // 0x229928: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x229928u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_22992c:
    // 0x22992c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x22992cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_229930:
    // 0x229930: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x229930u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_229934:
    // 0x229934: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x229934u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_229938:
    // 0x229938: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x229938u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_22993c:
    // 0x22993c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x22993cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_229940:
    // 0x229940: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x229940u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_229944:
    // 0x229944: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x229944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_229948:
    // 0x229948: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22994c:
    // 0x22994c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x22994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_229950:
    // 0x229950: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x229950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_229954:
    // 0x229954: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x229954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_229958:
    // 0x229958: 0x3e00008  jr          $ra
label_22995c:
    if (ctx->pc == 0x22995Cu) {
        ctx->pc = 0x22995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229958u;
        // 0x22995c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229960u;
        goto label_fallthrough_0x229958;
    }
    ctx->pc = 0x229958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229958u;
        // 0x22995c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x229958:
    ctx->pc = 0x229960u;
}
