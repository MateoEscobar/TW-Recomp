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

// Function: sub_00198460
// Address: 0x198460 - 0x198548
void sub_00198460_0x198460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198460_0x198460");
#endif

    switch (ctx->pc) {
        case 0x198460u: goto label_198460;
        case 0x198464u: goto label_198464;
        case 0x198468u: goto label_198468;
        case 0x19846cu: goto label_19846c;
        case 0x198470u: goto label_198470;
        case 0x198474u: goto label_198474;
        case 0x198478u: goto label_198478;
        case 0x19847cu: goto label_19847c;
        case 0x198480u: goto label_198480;
        case 0x198484u: goto label_198484;
        case 0x198488u: goto label_198488;
        case 0x19848cu: goto label_19848c;
        case 0x198490u: goto label_198490;
        case 0x198494u: goto label_198494;
        case 0x198498u: goto label_198498;
        case 0x19849cu: goto label_19849c;
        case 0x1984a0u: goto label_1984a0;
        case 0x1984a4u: goto label_1984a4;
        case 0x1984a8u: goto label_1984a8;
        case 0x1984acu: goto label_1984ac;
        case 0x1984b0u: goto label_1984b0;
        case 0x1984b4u: goto label_1984b4;
        case 0x1984b8u: goto label_1984b8;
        case 0x1984bcu: goto label_1984bc;
        case 0x1984c0u: goto label_1984c0;
        case 0x1984c4u: goto label_1984c4;
        case 0x1984c8u: goto label_1984c8;
        case 0x1984ccu: goto label_1984cc;
        case 0x1984d0u: goto label_1984d0;
        case 0x1984d4u: goto label_1984d4;
        case 0x1984d8u: goto label_1984d8;
        case 0x1984dcu: goto label_1984dc;
        case 0x1984e0u: goto label_1984e0;
        case 0x1984e4u: goto label_1984e4;
        case 0x1984e8u: goto label_1984e8;
        case 0x1984ecu: goto label_1984ec;
        case 0x1984f0u: goto label_1984f0;
        case 0x1984f4u: goto label_1984f4;
        case 0x1984f8u: goto label_1984f8;
        case 0x1984fcu: goto label_1984fc;
        case 0x198500u: goto label_198500;
        case 0x198504u: goto label_198504;
        case 0x198508u: goto label_198508;
        case 0x19850cu: goto label_19850c;
        case 0x198510u: goto label_198510;
        case 0x198514u: goto label_198514;
        case 0x198518u: goto label_198518;
        case 0x19851cu: goto label_19851c;
        case 0x198520u: goto label_198520;
        case 0x198524u: goto label_198524;
        case 0x198528u: goto label_198528;
        case 0x19852cu: goto label_19852c;
        case 0x198530u: goto label_198530;
        case 0x198534u: goto label_198534;
        case 0x198538u: goto label_198538;
        case 0x19853cu: goto label_19853c;
        case 0x198540u: goto label_198540;
        case 0x198544u: goto label_198544;
        default: break;
    }

    ctx->pc = 0x198460u;

label_198460:
    // 0x198460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x198460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_198464:
    // 0x198464: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x198464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_198468:
    // 0x198468: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x198468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_19846c:
    // 0x19846c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19846cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198470:
    // 0x198470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_198474:
    // 0x198474: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x198474u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_198478:
    // 0x198478: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x198478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_19847c:
    // 0x19847c: 0x8cb10004  lw          $s1, 0x4($a1)
    ctx->pc = 0x19847cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_198480:
    // 0x198480: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x198480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_198484:
    // 0x198484: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x198484u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_198488:
    // 0x198488: 0xd8510010  lqc2        $vf17, 0x10($v0)
    ctx->pc = 0x198488u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_19848c:
    // 0x19848c: 0xd8520020  lqc2        $vf18, 0x20($v0)
    ctx->pc = 0x19848cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_198490:
    // 0x198490: 0xd8530030  lqc2        $vf19, 0x30($v0)
    ctx->pc = 0x198490u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_198494:
    // 0x198494: 0xda0c0000  lqc2        $vf12, 0x0($s0)
    ctx->pc = 0x198494u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_198498:
    // 0x198498: 0x4bcc81bc  vmulax.xyz  $ACC, $vf16, $vf12x
    ctx->pc = 0x198498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_19849c:
    // 0x19849c: 0x4bcc88bd  vmadday.xyz $ACC, $vf17, $vf12y
    ctx->pc = 0x19849cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_1984a0:
    // 0x1984a0: 0x4bcc90be  vmaddaz.xyz $ACC, $vf18, $vf12z
    ctx->pc = 0x1984a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_1984a4:
    // 0x1984a4: 0x4bc09b0b  vmaddw.xyz  $vf12, $vf19, $vf0w
    ctx->pc = 0x1984a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_1984a8:
    // 0x1984a8: 0xfa0c0000  sqc2        $vf12, 0x0($s0)
    ctx->pc = 0x1984a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_1984ac:
    // 0x1984ac: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1984acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1984b0:
    // 0x1984b0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1984b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1984b4:
    // 0x1984b4: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x1984b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_1984b8:
    // 0x1984b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1984b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1984bc:
    // 0x1984bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1984bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1984c0:
    // 0x1984c0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1984c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1984c4:
    // 0x1984c4: 0x0  nop
    ctx->pc = 0x1984c4u;
    // NOP
label_1984c8:
    // 0x1984c8: 0x0  nop
    ctx->pc = 0x1984c8u;
    // NOP
label_1984cc:
    // 0x1984cc: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1984ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_1984d0:
    // 0x1984d0: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1984d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1984d4:
    // 0x1984d4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1984d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1984d8:
    // 0x1984d8: 0x60f809  jalr        $v1
label_1984dc:
    if (ctx->pc == 0x1984DCu) {
        ctx->pc = 0x1984DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984D8u;
        // 0x1984dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1984E0u;
        goto label_1984e0;
    }
    ctx->pc = 0x1984D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1984E0u);
        ctx->pc = 0x1984DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984D8u;
        // 0x1984dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1984D8u, 0x1984E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1984E0u;
label_1984e0:
    // 0x1984e0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1984e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1984e4:
    // 0x1984e4: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x1984e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_1984e8:
    // 0x1984e8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1984e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1984ec:
    // 0x1984ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1984ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1984f0:
    // 0x1984f0: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1984f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1984f4:
    // 0x1984f4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1984f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1984f8:
    // 0x1984f8: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1984f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1984fc:
    // 0x1984fc: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1984fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_198500:
    // 0x198500: 0x60f809  jalr        $v1
label_198504:
    if (ctx->pc == 0x198504u) {
        ctx->pc = 0x198504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198500u;
        // 0x198504: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198508u;
        goto label_198508;
    }
    ctx->pc = 0x198500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x198508u);
        ctx->pc = 0x198504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198500u;
        // 0x198504: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198500u, 0x198508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198508u;
label_198508:
    // 0x198508: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x198508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19850c:
    // 0x19850c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x19850cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_198510:
    // 0x198510: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x198510u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_198514:
    // 0x198514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198518:
    // 0x198518: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x198518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19851c:
    // 0x19851c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x19851cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_198520:
    // 0x198520: 0xc620008c  lwc1        $f0, 0x8C($s1)
    ctx->pc = 0x198520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_198524:
    // 0x198524: 0xc6210090  lwc1        $f1, 0x90($s1)
    ctx->pc = 0x198524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198528:
    // 0x198528: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x198528u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_19852c:
    // 0x19852c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19852cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_198530:
    // 0x198530: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x198530u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_198534:
    // 0x198534: 0xe6140008  swc1        $f20, 0x8($s0)
    ctx->pc = 0x198534u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_198538:
    // 0x198538: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x198538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19853c:
    // 0x19853c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x19853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_198540:
    // 0x198540: 0x3e00008  jr          $ra
label_198544:
    if (ctx->pc == 0x198544u) {
        ctx->pc = 0x198544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198540u;
        // 0x198544: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198548u;
        goto label_fallthrough_0x198540;
    }
    ctx->pc = 0x198540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198540u;
        // 0x198544: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x198540:
    ctx->pc = 0x198548u;
}
