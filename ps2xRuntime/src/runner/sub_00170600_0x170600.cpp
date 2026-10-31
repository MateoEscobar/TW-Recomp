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

// Function: sub_00170600
// Address: 0x170600 - 0x170b28
void sub_00170600_0x170600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170600_0x170600");
#endif

    switch (ctx->pc) {
        case 0x170654u: goto label_170654;
        case 0x17073cu: goto label_17073c;
        case 0x170754u: goto label_170754;
        case 0x170764u: goto label_170764;
        case 0x17079cu: goto label_17079c;
        case 0x1707b0u: goto label_1707b0;
        case 0x170810u: goto label_170810;
        case 0x17084cu: goto label_17084c;
        case 0x170864u: goto label_170864;
        case 0x170870u: goto label_170870;
        case 0x1708e4u: goto label_1708e4;
        case 0x170914u: goto label_170914;
        case 0x170934u: goto label_170934;
        default: break;
    }

    ctx->pc = 0x170600u;

    // 0x170600: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x170600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x170604: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x170604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x170608: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x170608u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x17060c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x17060cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x170610: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x170610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x170614: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x170614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x170618: 0x2452b8a8  addiu       $s2, $v0, -0x4758
    ctx->pc = 0x170618u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949032));
    // 0x17061c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x17061cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x170620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x170620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170624: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x170624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x170628: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x170628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17062c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x17062cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x170630: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x170630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x170634: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x170634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170638: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x170638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x17063c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x17063cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x170640: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x170640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x170644: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x170644u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x170648: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x170648u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x17064c: 0xc0cd508  jal         func_335420
    ctx->pc = 0x17064Cu;
    SET_GPR_U32(ctx, 31, 0x170654u);
    ctx->pc = 0x170650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17064Cu;
    // 0x170650: 0xe7b500d8  swc1        $f21, 0xD8($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x17064Cu, 0x170654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170654u;
label_170654:
    // 0x170654: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x170654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x170658: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x170658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17065c: 0x246331a0  addiu       $v1, $v1, 0x31A0
    ctx->pc = 0x17065cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12704));
    // 0x170660: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x170660u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x6F31A0u));
    // 0x170664: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x170664u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x170668: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x170668u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17066c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17066cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x170670: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x170670u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x170674: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x170674u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x170678: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x170678u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17067c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x17067cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170680: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x170680u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170684: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x170684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170688: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x170688u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x17068c: 0x4a0003bf  vwaitq
    ctx->pc = 0x17068cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x170690: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x170690u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170694: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x170694u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x170698: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x170698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x17069c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17069cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1706a0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1706a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1706a4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1706a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1706a8: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1706A8u;
    {
        const bool branch_taken_0x1706a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1706ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706A8u;
        // 0x1706ac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706a8) {
            ctx->pc = 0x1706BCu;
            goto label_1706bc;
        }
    }
    ctx->pc = 0x1706B0u;
    // 0x1706b0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1706b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1706b4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1706b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1706b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1706b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1706bc:
    // 0x1706bc: 0x0  nop
    ctx->pc = 0x1706bcu;
    // NOP
    // 0x1706c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1706c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1706c4: 0x0  nop
    ctx->pc = 0x1706c4u;
    // NOP
    // 0x1706c8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1706C8u;
    {
        const bool branch_taken_0x1706c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1706c8) {
            ctx->pc = 0x1706CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1706C8u;
            // 0x1706cc: 0x460105c1  sub.s       $f23, $f0, $f1 (Delay Slot)
            ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1706E4u;
            goto label_1706e4;
        }
    }
    ctx->pc = 0x1706D0u;
    // 0x1706d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1706d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1706d4: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x1706d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x1706d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1706d8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x1706dc: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x1706DCu;
    {
        const bool branch_taken_0x1706dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1706E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706DCu;
        // 0x1706e0: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706dc) {
            ctx->pc = 0x1709E4u;
            goto label_1709e4;
        }
    }
    ctx->pc = 0x1706E4u;
label_1706e4:
    // 0x1706e4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1706e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1706e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1706e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1706ec: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1706ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1706f0: 0x0  nop
    ctx->pc = 0x1706f0u;
    // NOP
    // 0x1706f4: 0x0  nop
    ctx->pc = 0x1706f4u;
    // NOP
    // 0x1706f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1706f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1706fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1706fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170700: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x170700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x170704: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x170704u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x170708: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x170708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x17070c: 0x460dbb42  mul.s       $f13, $f23, $f13
    ctx->pc = 0x17070cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[23], ctx->f[13]);
    // 0x170710: 0x4616bd42  mul.s       $f21, $f23, $f22
    ctx->pc = 0x170710u;
    ctx->f[21] = FPU_MUL_S(ctx->f[23], ctx->f[22]);
    // 0x170714: 0x46006b07  neg.s       $f12, $f13
    ctx->pc = 0x170714u;
    ctx->f[12] = FPU_NEG_S(ctx->f[13]);
    // 0x170718: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x170718u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x17071c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x17071cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x170720: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x170720u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x170724: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x170724u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x170728: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x170728u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17072c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x17072cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x170730: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x170730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x170734: 0xc0cd508  jal         func_335420
    ctx->pc = 0x170734u;
    SET_GPR_U32(ctx, 31, 0x17073Cu);
    ctx->pc = 0x170738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170734u;
    // 0x170738: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x170734u, 0x17073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17073Cu;
label_17073c:
    // 0x17073c: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x17073cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170740: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x170740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x170744: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x170744u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x170748: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x170748u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x17074c: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x17074Cu;
    SET_GPR_U32(ctx, 31, 0x170754u);
    ctx->pc = 0x170750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17074Cu;
    // 0x170750: 0xe6210054  swc1        $f1, 0x54($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x17074Cu, 0x170754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170754u;
label_170754:
    // 0x170754: 0xc62c0054  lwc1        $f12, 0x54($s1)
    ctx->pc = 0x170754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x170758: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x170758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x17075c: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x17075Cu;
    SET_GPR_U32(ctx, 31, 0x170764u);
    ctx->pc = 0x170760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17075Cu;
    // 0x170760: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x17075Cu, 0x170764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170764u;
label_170764:
    // 0x170764: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x170764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x170768: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x170768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x17076c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17076cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x170770: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x170770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x170774: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x170774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x170778: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x170778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17077c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x17077cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x170780: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x170780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x170784: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x170784u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x170788: 0x4601a528  max.s       $f20, $f20, $f1
    ctx->pc = 0x170788u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[1]);
    // 0x17078c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x17078cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x170790: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x170790u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x170794: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x170794u;
    SET_GPR_U32(ctx, 31, 0x17079Cu);
    ctx->pc = 0x170798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170794u;
    // 0x170798: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x170794u, 0x17079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17079Cu;
label_17079c:
    // 0x17079c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x17079cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1707a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1707a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1707a4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1707a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1707a8: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x1707A8u;
    SET_GPR_U32(ctx, 31, 0x1707B0u);
    ctx->pc = 0x1707ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707A8u;
    // 0x1707ac: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1707A8u, 0x1707B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707B0u;
label_1707b0:
    // 0x1707b0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1707b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1707b4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x1707b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1707b8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1707b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1707bc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1707bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1707c0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1707c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1707c4: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x1707c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1707c8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1707c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1707cc: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x1707ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1707d0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1707d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1707d4: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x1707d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1707d8: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x1707d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1707dc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1707dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1707e0: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x1707e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1707e4: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x1707e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1707e8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1707e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1707ec: 0x4600bb07  neg.s       $f12, $f23
    ctx->pc = 0x1707ecu;
    ctx->f[12] = FPU_NEG_S(ctx->f[23]);
    // 0x1707f0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1707f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1707f4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1707f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1707f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1707f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707fc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1707fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x170800: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x170800u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x170804: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x170804u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    // 0x170808: 0xc0cd508  jal         func_335420
    ctx->pc = 0x170808u;
    SET_GPR_U32(ctx, 31, 0x170810u);
    ctx->pc = 0x17080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170808u;
    // 0x17080c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x170808u, 0x170810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170810u;
label_170810:
    // 0x170810: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x170810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170814: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x170814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x170818: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x170818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x17081c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17081cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x170820: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x170820u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x170824: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x170824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x170828: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x170828u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
    // 0x17082c: 0x3c01be86  lui         $at, 0xBE86
    ctx->pc = 0x17082cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48774 << 16));
    // 0x170830: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x170830u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x170834: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x170834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170838: 0x0  nop
    ctx->pc = 0x170838u;
    // NOP
    // 0x17083c: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x17083cu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x170840: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x170840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x170844: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x170844u;
    SET_GPR_U32(ctx, 31, 0x17084Cu);
    ctx->pc = 0x170848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170844u;
    // 0x170848: 0xe6210058  swc1        $f1, 0x58($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x170844u, 0x17084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17084Cu;
label_17084c:
    // 0x17084c: 0xc6340058  lwc1        $f20, 0x58($s1)
    ctx->pc = 0x17084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x170850: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x170850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x170854: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x170854u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x170858: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x170858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x17085c: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x17085Cu;
    SET_GPR_U32(ctx, 31, 0x170864u);
    ctx->pc = 0x170860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17085Cu;
    // 0x170860: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x17085Cu, 0x170864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170864u;
label_170864:
    // 0x170864: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x170864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x170868: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x170868u;
    SET_GPR_U32(ctx, 31, 0x170870u);
    ctx->pc = 0x17086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170868u;
    // 0x17086c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x170868u, 0x170870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170870u;
label_170870:
    // 0x170870: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x170870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x170874: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x170874u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170878: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x170878u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17087c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17087cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x170880: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x170880u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x170884: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x170884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170888: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x170888u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x17088c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x17088cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x170890: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x170890u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170894: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x170894u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x170898: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x170898u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17089c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x17089cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1708a0: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x1708a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1708a4: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x1708a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1708a8: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x1708a8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1708ac: 0x9224006d  lbu         $a0, 0x6D($s1)
    ctx->pc = 0x1708acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 109)));
    // 0x1708b0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x1708b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x1708b4: 0x30840009  andi        $a0, $a0, 0x9
    ctx->pc = 0x1708b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)9);
    // 0x1708b8: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1708b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x1708bc: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1708bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x1708c0: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1708C0u;
    {
        const bool branch_taken_0x1708c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1708C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708C0u;
        // 0x1708c4: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708c0) {
            ctx->pc = 0x1708ECu;
            goto label_1708ec;
        }
    }
    ctx->pc = 0x1708C8u;
    // 0x1708c8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1708c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1708cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1708ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1708d0: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x1708d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x1708d4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1708d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1708d8: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1708d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x1708dc: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x1708DCu;
    SET_GPR_U32(ctx, 31, 0x1708E4u);
    ctx->pc = 0x1708E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1708DCu;
    // 0x1708e0: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x1708DCu, 0x1708E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1708E4u;
label_1708e4:
    // 0x1708e4: 0xa6220062  sh          $v0, 0x62($s1)
    ctx->pc = 0x1708e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 98), (uint16_t)GPR_U32(ctx, 2));
    // 0x1708e8: 0xa6220060  sh          $v0, 0x60($s1)
    ctx->pc = 0x1708e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 2));
label_1708ec:
    // 0x1708ec: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1708ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1708f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1708f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1708f4: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1708f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1708f8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1708f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1708fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1708fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170900: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x170900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170904: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x170904u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x170908: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x170908u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x17090c: 0xc0cd55c  jal         func_335570
    ctx->pc = 0x17090Cu;
    SET_GPR_U32(ctx, 31, 0x170914u);
    ctx->pc = 0x170910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17090Cu;
    // 0x170910: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x17090Cu, 0x170914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170914u;
label_170914:
    // 0x170914: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x170914u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170918: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x170918u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17091c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17091cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170920: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x170920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170924: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x170924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x170928: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x170928u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x17092c: 0xc0cd55c  jal         func_335570
    ctx->pc = 0x17092Cu;
    SET_GPR_U32(ctx, 31, 0x170934u);
    ctx->pc = 0x170930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17092Cu;
    // 0x170930: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335570u, 0x17092Cu, 0x170934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170934u;
label_170934:
    // 0x170934: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x170934u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170938: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x170938u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17093c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x17093cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x170940: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x170940u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x170944: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x170944u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x170948: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x170948u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x17094c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x17094cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x170950: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x170950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x170954: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x170954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x170958: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x170958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17095c: 0x4403b800  mfc1        $v1, $f23
    ctx->pc = 0x17095cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x170960: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x170960u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x170964: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x170964u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x170968: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x170968u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17096c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x17096cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x170970: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x170970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x170974: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x170974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x170978: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x170978u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17097c: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x17097cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x170980: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x170980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x170984: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x170984u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x170988: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x170988u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17098c: 0x9226006d  lbu         $a2, 0x6D($s1)
    ctx->pc = 0x17098cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 109)));
    // 0x170990: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x170990u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x170994: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x170994u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x170998: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x170998u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x17099c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x17099cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1709a0: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1709a0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1709a4: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x1709a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x1709a8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1709a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x1709ac: 0x30c60002  andi        $a2, $a2, 0x2
    ctx->pc = 0x1709acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x1709b0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x1709b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x1709b4: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x1709b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x1709b8: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x1709b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x1709bc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1709bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1709c0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x1709c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x1709c4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1709c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x1709c8: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1709C8u;
    {
        const bool branch_taken_0x1709c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1709CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1709C8u;
        // 0x1709cc: 0x7fa50060  sq          $a1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1709c8) {
            ctx->pc = 0x1709E4u;
            goto label_1709e4;
        }
    }
    ctx->pc = 0x1709D0u;
    // 0x1709d0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1709d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1709d4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1709d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1709d8: 0x0  nop
    ctx->pc = 0x1709d8u;
    // NOP
    // 0x1709dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1709DCu;
    {
        const bool branch_taken_0x1709dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1709dc) {
            ctx->pc = 0x1709E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1709DCu;
            // 0x1709e0: 0xe7b50008  swc1        $f21, 0x8($sp) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1709E4u;
            goto label_1709e4;
        }
    }
    ctx->pc = 0x1709E4u;
label_1709e4:
    // 0x1709e4: 0x12600026  beqz        $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x1709E4u;
    {
        const bool branch_taken_0x1709e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1709E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1709E4u;
        // 0x1709e8: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1709e4) {
            ctx->pc = 0x170A80u;
            goto label_170a80;
        }
    }
    ctx->pc = 0x1709ECu;
    // 0x1709ec: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x1709ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x1709f0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1709f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1709f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1709f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1709f8: 0x0  nop
    ctx->pc = 0x1709f8u;
    // NOP
    // 0x1709fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1709fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x170a00: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x170a00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x170a04: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x170a04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x170a08: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x170a08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x170a0c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x170a0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x170a10: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x170a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x170a14: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x170a14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x170a18: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x170a18u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x170a1c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x170a1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x170a20: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x170a20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170a24: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x170a24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170a28: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x170a28u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x170a2c: 0x4a0003bf  vwaitq
    ctx->pc = 0x170a2cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x170a30: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x170a30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x170a34: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x170a34u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x170a38: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x170a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x170a3c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x170a3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x170a40: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x170a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170a44: 0x460310e8  max.s       $f3, $f2, $f3
    ctx->pc = 0x170a44u;
    ctx->f[3] = std::max(ctx->f[2], ctx->f[3]);
    // 0x170a48: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x170a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170a4c: 0x0  nop
    ctx->pc = 0x170a4cu;
    // NOP
    // 0x170a50: 0x0  nop
    ctx->pc = 0x170a50u;
    // NOP
    // 0x170a54: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x170a54u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x170a58: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x170a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x170a5c: 0x0  nop
    ctx->pc = 0x170a5cu;
    // NOP
    // 0x170a60: 0x0  nop
    ctx->pc = 0x170a60u;
    // NOP
    // 0x170a64: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x170a64u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x170a68: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x170a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x170a6c: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x170a6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x170a70: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x170a70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x170a74: 0xe6220040  swc1        $f2, 0x40($s1)
    ctx->pc = 0x170a74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x170a78: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x170A78u;
    {
        const bool branch_taken_0x170a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A78u;
        // 0x170a7c: 0xe6230044  swc1        $f3, 0x44($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a78) {
            ctx->pc = 0x170AF8u;
            goto label_170af8;
        }
    }
    ctx->pc = 0x170A80u;
label_170a80:
    // 0x170a80: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x170a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x170a84: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x170a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x170a88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x170a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170a8c: 0x7a230040  lq          $v1, 0x40($s1)
    ctx->pc = 0x170a8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x170a90: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x170a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x170a94: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x170a94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x170a98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x170a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170a9c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x170a9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x170aa0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x170aa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x170aa4: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x170aa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x170aa8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x170aa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x170aac: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x170aacu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x170ab0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x170ab0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170ab4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x170ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x170ab8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x170ab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x170abc: 0x7e230040  sq          $v1, 0x40($s1)
    ctx->pc = 0x170abcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 3));
    // 0x170ac0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x170ac0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x170ac4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x170ac4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x170ac8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x170ac8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x170acc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x170accu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x170ad0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x170ad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x170ad4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x170ad4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x170ad8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x170ad8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x170adc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x170adcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x170ae0: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x170ae0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x170ae4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x170ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x170ae8: 0x7e240040  sq          $a0, 0x40($s1)
    ctx->pc = 0x170ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 4));
    // 0x170aec: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x170aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x170af0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x170af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x170af4: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x170af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_170af8:
    // 0x170af8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x170af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x170afc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x170afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x170b00: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x170b00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x170b04: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x170b04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x170b08: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x170b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x170b0c: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x170b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x170b10: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x170b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x170b14: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x170b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x170b18: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x170b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x170b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x170B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B1Cu;
        // 0x170b20: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170B24u;
    // 0x170b24: 0x0  nop
    ctx->pc = 0x170b24u;
    // NOP
    ctx->pc = 0x170b28u;
}
