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

// Function: sub_00229960
// Address: 0x229960 - 0x229a10
void sub_00229960_0x229960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229960_0x229960");
#endif

    switch (ctx->pc) {
        case 0x229960u: goto label_229960;
        case 0x229964u: goto label_229964;
        case 0x229968u: goto label_229968;
        case 0x22996cu: goto label_22996c;
        case 0x229970u: goto label_229970;
        case 0x229974u: goto label_229974;
        case 0x229978u: goto label_229978;
        case 0x22997cu: goto label_22997c;
        case 0x229980u: goto label_229980;
        case 0x229984u: goto label_229984;
        case 0x229988u: goto label_229988;
        case 0x22998cu: goto label_22998c;
        case 0x229990u: goto label_229990;
        case 0x229994u: goto label_229994;
        case 0x229998u: goto label_229998;
        case 0x22999cu: goto label_22999c;
        case 0x2299a0u: goto label_2299a0;
        case 0x2299a4u: goto label_2299a4;
        case 0x2299a8u: goto label_2299a8;
        case 0x2299acu: goto label_2299ac;
        case 0x2299b0u: goto label_2299b0;
        case 0x2299b4u: goto label_2299b4;
        case 0x2299b8u: goto label_2299b8;
        case 0x2299bcu: goto label_2299bc;
        case 0x2299c0u: goto label_2299c0;
        case 0x2299c4u: goto label_2299c4;
        case 0x2299c8u: goto label_2299c8;
        case 0x2299ccu: goto label_2299cc;
        case 0x2299d0u: goto label_2299d0;
        case 0x2299d4u: goto label_2299d4;
        case 0x2299d8u: goto label_2299d8;
        case 0x2299dcu: goto label_2299dc;
        case 0x2299e0u: goto label_2299e0;
        case 0x2299e4u: goto label_2299e4;
        case 0x2299e8u: goto label_2299e8;
        case 0x2299ecu: goto label_2299ec;
        case 0x2299f0u: goto label_2299f0;
        case 0x2299f4u: goto label_2299f4;
        case 0x2299f8u: goto label_2299f8;
        case 0x2299fcu: goto label_2299fc;
        case 0x229a00u: goto label_229a00;
        case 0x229a04u: goto label_229a04;
        case 0x229a08u: goto label_229a08;
        case 0x229a0cu: goto label_229a0c;
        default: break;
    }

    ctx->pc = 0x229960u;

label_229960:
    // 0x229960: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x229960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_229964:
    // 0x229964: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x229964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_229968:
    // 0x229968: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x229968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_22996c:
    // 0x22996c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22996cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_229970:
    // 0x229970: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_229974:
    if (ctx->pc == 0x229974u) {
        ctx->pc = 0x229974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229970u;
        // 0x229974: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229978u;
        goto label_229978;
    }
    ctx->pc = 0x229970u;
    {
        const bool branch_taken_0x229970 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x229974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229970u;
        // 0x229974: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229970) {
            ctx->pc = 0x229980u;
            goto label_229980;
        }
    }
    ctx->pc = 0x229978u;
label_229978:
    // 0x229978: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
label_22997c:
    if (ctx->pc == 0x22997Cu) {
        ctx->pc = 0x22997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229978u;
        // 0x22997c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229980u;
        goto label_229980;
    }
    ctx->pc = 0x229978u;
    {
        const bool branch_taken_0x229978 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x229978) {
            ctx->pc = 0x22997Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229978u;
            // 0x22997c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22998Cu;
            goto label_22998c;
        }
    }
    ctx->pc = 0x229980u;
label_229980:
    // 0x229980: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229980u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_229984:
    // 0x229984: 0x1000001f  b           . + 4 + (0x1F << 2)
label_229988:
    if (ctx->pc == 0x229988u) {
        ctx->pc = 0x229988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229984u;
        // 0x229988: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22998Cu;
        goto label_22998c;
    }
    ctx->pc = 0x229984u;
    {
        const bool branch_taken_0x229984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229984u;
        // 0x229988: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229984) {
            ctx->pc = 0x229A04u;
            goto label_229a04;
        }
    }
    ctx->pc = 0x22998Cu;
label_22998c:
    // 0x22998c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x22998cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_229990:
    // 0x229990: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x229990u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_229994:
    // 0x229994: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x229994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_229998:
    // 0x229998: 0x60f809  jalr        $v1
label_22999c:
    if (ctx->pc == 0x22999Cu) {
        ctx->pc = 0x22999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229998u;
        // 0x22999c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2299A0u;
        goto label_2299a0;
    }
    ctx->pc = 0x229998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2299A0u);
        ctx->pc = 0x22999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229998u;
        // 0x22999c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229998u, 0x2299A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2299A0u;
label_2299a0:
    // 0x2299a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2299a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2299a4:
    // 0x2299a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2299a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2299a8:
    // 0x2299a8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2299a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2299ac:
    // 0x2299ac: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2299acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2299b0:
    // 0x2299b0: 0x60f809  jalr        $v1
label_2299b4:
    if (ctx->pc == 0x2299B4u) {
        ctx->pc = 0x2299B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2299B0u;
        // 0x2299b4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2299B8u;
        goto label_2299b8;
    }
    ctx->pc = 0x2299B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2299B8u);
        ctx->pc = 0x2299B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2299B0u;
        // 0x2299b4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2299B0u, 0x2299B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2299B8u;
label_2299b8:
    // 0x2299b8: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2299b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2299bc:
    // 0x2299bc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2299bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2299c0:
    // 0x2299c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2299c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2299c4:
    // 0x2299c4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2299c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2299c8:
    // 0x2299c8: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2299c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2299cc:
    // 0x2299cc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2299ccu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2299d0:
    // 0x2299d0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2299d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2299d4:
    // 0x2299d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2299d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2299d8:
    // 0x2299d8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2299d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2299dc:
    // 0x2299dc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2299dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2299e0:
    // 0x2299e0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2299e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2299e4:
    // 0x2299e4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2299e4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2299e8:
    // 0x2299e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2299e8u;
    // VWAITQ (Q already resolved in this runtime)
label_2299ec:
    // 0x2299ec: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2299ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2299f0:
    // 0x2299f0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2299f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2299f4:
    // 0x2299f4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2299f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2299f8:
    // 0x2299f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2299f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2299fc:
    // 0x2299fc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2299fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_229a00:
    // 0x229a00: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x229a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_229a04:
    // 0x229a04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x229a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_229a08:
    // 0x229a08: 0x3e00008  jr          $ra
label_229a0c:
    if (ctx->pc == 0x229A0Cu) {
        ctx->pc = 0x229A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A08u;
        // 0x229a0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229A10u;
        goto label_fallthrough_0x229a08;
    }
    ctx->pc = 0x229A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A08u;
        // 0x229a0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x229a08:
    ctx->pc = 0x229A10u;
}
