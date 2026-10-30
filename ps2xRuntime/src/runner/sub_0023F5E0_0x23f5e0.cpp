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

// Function: sub_0023F5E0
// Address: 0x23f5e0 - 0x23f9d0
void sub_0023F5E0_0x23f5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F5E0_0x23f5e0");
#endif

    switch (ctx->pc) {
        case 0x23f610u: goto label_23f610;
        case 0x23f648u: goto label_23f648;
        case 0x23f728u: goto label_23f728;
        case 0x23f774u: goto label_23f774;
        case 0x23f840u: goto label_23f840;
        case 0x23f84cu: goto label_23f84c;
        case 0x23f898u: goto label_23f898;
        default: break;
    }

    ctx->pc = 0x23f5e0u;

    // 0x23f5e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x23f5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x23f5e4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x23f5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x23f5e8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x23f5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x23f5ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f5f0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x23f5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x23f5f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23f5f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f5f8: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x23f5f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x23f5fc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x23f5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23f600: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x23f600u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x23f604: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x23f604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x23f608: 0xc0e409a  jal         func_390268
    ctx->pc = 0x23F608u;
    SET_GPR_U32(ctx, 31, 0x23F610u);
    ctx->pc = 0x23F60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F608u;
    // 0x23f60c: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23F608u, 0x23F610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F610u;
label_23f610:
    // 0x23f610: 0x544000e8  bnel        $v0, $zero, . + 4 + (0xE8 << 2)
    ctx->pc = 0x23F610u;
    {
        const bool branch_taken_0x23f610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f610) {
            ctx->pc = 0x23F614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F610u;
            // 0x23f614: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F9B4u;
            goto label_23f9b4;
        }
    }
    ctx->pc = 0x23F618u;
    // 0x23f618: 0x92020331  lbu         $v0, 0x331($s0)
    ctx->pc = 0x23f618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 817)));
    // 0x23f61c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x23F61Cu;
    {
        const bool branch_taken_0x23f61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F61Cu;
        // 0x23f620: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f61c) {
            ctx->pc = 0x23F738u;
            goto label_23f738;
        }
    }
    ctx->pc = 0x23F624u;
    // 0x23f624: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x23f624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f628: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x23f628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23f62c: 0x0  nop
    ctx->pc = 0x23f62cu;
    // NOP
    // 0x23f630: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x23f630u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f634: 0x0  nop
    ctx->pc = 0x23f634u;
    // NOP
    // 0x23f638: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x23F638u;
    {
        const bool branch_taken_0x23f638 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f638) {
            ctx->pc = 0x23F63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F638u;
            // 0x23f63c: 0xe6140300  swc1        $f20, 0x300($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F654u;
            goto label_23f654;
        }
    }
    ctx->pc = 0x23F640u;
    // 0x23f640: 0xc0e8630  jal         func_3A18C0
    ctx->pc = 0x23F640u;
    SET_GPR_U32(ctx, 31, 0x23F648u);
    ctx->pc = 0x23F644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F640u;
    // 0x23f644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x23F640u, 0x23F648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F648u;
label_23f648:
    // 0x23f648: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23F648u;
    {
        const bool branch_taken_0x23f648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F648u;
        // 0x23f64c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f648) {
            ctx->pc = 0x23F670u;
            goto label_23f670;
        }
    }
    ctx->pc = 0x23F650u;
    // 0x23f650: 0xe6140300  swc1        $f20, 0x300($s0)
    ctx->pc = 0x23f650u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
label_23f654:
    // 0x23f654: 0xa2000331  sb          $zero, 0x331($s0)
    ctx->pc = 0x23f654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 817), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f658: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x23f658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x23f65c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x23f65cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f660: 0x7e0302e0  sq          $v1, 0x2E0($s0)
    ctx->pc = 0x23f660u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 736), GPR_VEC(ctx, 3));
    // 0x23f664: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x23f664u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f668: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x23F668u;
    {
        const bool branch_taken_0x23f668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F668u;
        // 0x23f66c: 0x7e0402f0  sq          $a0, 0x2F0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 752), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f668) {
            ctx->pc = 0x23F744u;
            goto label_23f744;
        }
    }
    ctx->pc = 0x23F670u;
label_23f670:
    // 0x23f670: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23f670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23f674: 0xc44002cc  lwc1        $f0, 0x2CC($v0)
    ctx->pc = 0x23f674u;
    { uint32_t bits = FAST_READ32(0x5102CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f678: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x23f678u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f67c: 0x0  nop
    ctx->pc = 0x23f67cu;
    // NOP
    // 0x23f680: 0x45030031  bc1tl       . + 4 + (0x31 << 2)
    ctx->pc = 0x23F680u;
    {
        const bool branch_taken_0x23f680 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f680) {
            ctx->pc = 0x23F684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F680u;
            // 0x23f684: 0x92020332  lbu         $v0, 0x332($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 818)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F748u;
            goto label_23f748;
        }
    }
    ctx->pc = 0x23F688u;
    // 0x23f688: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x23f688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f68c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23f68cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f690: 0x0  nop
    ctx->pc = 0x23f690u;
    // NOP
    // 0x23f694: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x23F694u;
    {
        const bool branch_taken_0x23f694 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F694u;
        // 0x23f698: 0x7a0202e0  lq          $v0, 0x2E0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f694) {
            ctx->pc = 0x23F6C8u;
            goto label_23f6c8;
        }
    }
    ctx->pc = 0x23F69Cu;
    // 0x23f69c: 0x0  nop
    ctx->pc = 0x23f69cu;
    // NOP
    // 0x23f6a0: 0x0  nop
    ctx->pc = 0x23f6a0u;
    // NOP
    // 0x23f6a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x23f6a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x23f6a8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x23f6a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23f6ac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23f6acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23f6b0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23f6b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23f6b4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23f6b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23f6b8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x23f6b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23f6bc: 0x7e0202f0  sq          $v0, 0x2F0($s0)
    ctx->pc = 0x23f6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 752), GPR_VEC(ctx, 2));
    // 0x23f6c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23F6C0u;
    {
        const bool branch_taken_0x23f6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6C0u;
        // 0x23f6c4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f6c0) {
            ctx->pc = 0x23F6CCu;
            goto label_23f6cc;
        }
    }
    ctx->pc = 0x23F6C8u;
label_23f6c8:
    // 0x23f6c8: 0x7e0202f0  sq          $v0, 0x2F0($s0)
    ctx->pc = 0x23f6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 752), GPR_VEC(ctx, 2));
label_23f6cc:
    // 0x23f6cc: 0x7a0202f0  lq          $v0, 0x2F0($s0)
    ctx->pc = 0x23f6ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x23f6d0: 0x260502f0  addiu       $a1, $s0, 0x2F0
    ctx->pc = 0x23f6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x23f6d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23f6d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23f6d8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x23f6d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f6dc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x23f6dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f6e0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x23f6e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f6e4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x23f6e4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x23f6e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x23f6e8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x23f6ec: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x23f6ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f6f0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x23f6f0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x23f6f4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x23f6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x23f6f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23f6f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f6fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23f6fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f700: 0x0  nop
    ctx->pc = 0x23f700u;
    // NOP
    // 0x23f704: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x23f704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f708: 0x0  nop
    ctx->pc = 0x23f708u;
    // NOP
    // 0x23f70c: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x23F70Cu;
    {
        const bool branch_taken_0x23f70c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f70c) {
            ctx->pc = 0x23F710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F70Cu;
            // 0x23f710: 0x92020332  lbu         $v0, 0x332($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 818)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F748u;
            goto label_23f748;
        }
    }
    ctx->pc = 0x23F714u;
    // 0x23f714: 0x0  nop
    ctx->pc = 0x23f714u;
    // NOP
    // 0x23f718: 0x0  nop
    ctx->pc = 0x23f718u;
    // NOP
    // 0x23f71c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x23f71cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x23f720: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x23F720u;
    SET_GPR_U32(ctx, 31, 0x23F728u);
    ctx->pc = 0x23F724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F720u;
    // 0x23f724: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x23F720u, 0x23F728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F728u;
label_23f728:
    // 0x23f728: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x23f728u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f72c: 0x7e0202f0  sq          $v0, 0x2F0($s0)
    ctx->pc = 0x23f72cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 752), GPR_VEC(ctx, 2));
    // 0x23f730: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23F730u;
    {
        const bool branch_taken_0x23f730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F730u;
        // 0x23f734: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f730) {
            ctx->pc = 0x23F744u;
            goto label_23f744;
        }
    }
    ctx->pc = 0x23F738u;
label_23f738:
    // 0x23f738: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x23f738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x23f73c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x23f73cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f740: 0x7e0302f0  sq          $v1, 0x2F0($s0)
    ctx->pc = 0x23f740u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 752), GPR_VEC(ctx, 3));
label_23f744:
    // 0x23f744: 0x92020332  lbu         $v0, 0x332($s0)
    ctx->pc = 0x23f744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 818)));
label_23f748:
    // 0x23f748: 0x5040007e  beql        $v0, $zero, . + 4 + (0x7E << 2)
    ctx->pc = 0x23F748u;
    {
        const bool branch_taken_0x23f748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f748) {
            ctx->pc = 0x23F74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F748u;
            // 0x23f74c: 0xde020330  ld          $v0, 0x330($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 816)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F944u;
            goto label_23f944;
        }
    }
    ctx->pc = 0x23F750u;
    // 0x23f750: 0xc6000304  lwc1        $f0, 0x304($s0)
    ctx->pc = 0x23f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f754: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x23f754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23f758: 0x0  nop
    ctx->pc = 0x23f758u;
    // NOP
    // 0x23f75c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x23f75cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f760: 0x0  nop
    ctx->pc = 0x23f760u;
    // NOP
    // 0x23f764: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23F764u;
    {
        const bool branch_taken_0x23f764 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f764) {
            ctx->pc = 0x23F77Cu;
            goto label_23f77c;
        }
    }
    ctx->pc = 0x23F76Cu;
    // 0x23f76c: 0xc0e8630  jal         func_3A18C0
    ctx->pc = 0x23F76Cu;
    SET_GPR_U32(ctx, 31, 0x23F774u);
    ctx->pc = 0x23F770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F76Cu;
    // 0x23f770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x23F76Cu, 0x23F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F774u;
label_23f774:
    // 0x23f774: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23F774u;
    {
        const bool branch_taken_0x23f774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F774u;
        // 0x23f778: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f774) {
            ctx->pc = 0x23F7A4u;
            goto label_23f7a4;
        }
    }
    ctx->pc = 0x23F77Cu;
label_23f77c:
    // 0x23f77c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23f77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23f780: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23f780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f784: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x23f784u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23f788: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x23f788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x23f78c: 0xa2000332  sb          $zero, 0x332($s0)
    ctx->pc = 0x23f78cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 818), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f790: 0xe6140304  swc1        $f20, 0x304($s0)
    ctx->pc = 0x23f790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 772), bits); }
    // 0x23f794: 0xe6140308  swc1        $f20, 0x308($s0)
    ctx->pc = 0x23f794u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 776), bits); }
    // 0x23f798: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x23f798u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23f79c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x23F79Cu;
    {
        const bool branch_taken_0x23f79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F79Cu;
        // 0x23f7a0: 0xe7b40004  swc1        $f20, 0x4($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f79c) {
            ctx->pc = 0x23F940u;
            goto label_23f940;
        }
    }
    ctx->pc = 0x23F7A4u;
label_23f7a4:
    // 0x23f7a4: 0xc46202cc  lwc1        $f2, 0x2CC($v1)
    ctx->pc = 0x23f7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23f7a8: 0x46141032  c.eq.s      $f2, $f20
    ctx->pc = 0x23f7a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f7ac: 0x0  nop
    ctx->pc = 0x23f7acu;
    // NOP
    // 0x23f7b0: 0x45030064  bc1tl       . + 4 + (0x64 << 2)
    ctx->pc = 0x23F7B0u;
    {
        const bool branch_taken_0x23f7b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f7b0) {
            ctx->pc = 0x23F7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F7B0u;
            // 0x23f7b4: 0xde020330  ld          $v0, 0x330($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 816)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F944u;
            goto label_23f944;
        }
    }
    ctx->pc = 0x23F7B8u;
    // 0x23f7b8: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x23f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x23f7bc: 0xc44102a8  lwc1        $f1, 0x2A8($v0)
    ctx->pc = 0x23f7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f7c0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x23f7c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f7c4: 0x0  nop
    ctx->pc = 0x23f7c4u;
    // NOP
    // 0x23f7c8: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x23F7C8u;
    {
        const bool branch_taken_0x23f7c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f7c8) {
            ctx->pc = 0x23F7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F7C8u;
            // 0x23f7cc: 0xc6010304  lwc1        $f1, 0x304($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F7F0u;
            goto label_23f7f0;
        }
    }
    ctx->pc = 0x23F7D0u;
    // 0x23f7d0: 0xc6000304  lwc1        $f0, 0x304($s0)
    ctx->pc = 0x23f7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f7d4: 0x0  nop
    ctx->pc = 0x23f7d4u;
    // NOP
    // 0x23f7d8: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x23f7d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x23f7dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23f7dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23f7e0: 0x46140028  max.s       $f0, $f0, $f20
    ctx->pc = 0x23f7e0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[20]);
    // 0x23f7e4: 0xe44002a8  swc1        $f0, 0x2A8($v0)
    ctx->pc = 0x23f7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 680), bits); }
    // 0x23f7e8: 0xc46202cc  lwc1        $f2, 0x2CC($v1)
    ctx->pc = 0x23f7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23f7ec: 0xc6010304  lwc1        $f1, 0x304($s0)
    ctx->pc = 0x23f7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23f7f0:
    // 0x23f7f0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x23f7f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f7f4: 0x0  nop
    ctx->pc = 0x23f7f4u;
    // NOP
    // 0x23f7f8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x23F7F8u;
    {
        const bool branch_taken_0x23f7f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7F8u;
        // 0x23f7fc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7f8) {
            ctx->pc = 0x23F818u;
            goto label_23f818;
        }
    }
    ctx->pc = 0x23F800u;
    // 0x23f800: 0xc6140308  lwc1        $f20, 0x308($s0)
    ctx->pc = 0x23f800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f804: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x23f804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x23f808: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23f808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f80c: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x23f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
    // 0x23f810: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23F810u;
    {
        const bool branch_taken_0x23f810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F810u;
        // 0x23f814: 0x46140d02  mul.s       $f20, $f1, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f810) {
            ctx->pc = 0x23F82Cu;
            goto label_23f82c;
        }
    }
    ctx->pc = 0x23F818u;
label_23f818:
    // 0x23f818: 0xc6140308  lwc1        $f20, 0x308($s0)
    ctx->pc = 0x23f818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f81c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x23f81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x23f820: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23f820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f824: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x23f824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
    // 0x23f828: 0x46141502  mul.s       $f20, $f2, $f20
    ctx->pc = 0x23f828u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_23f82c:
    // 0x23f82c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x23f82cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f830: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x23f830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x23f834: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x23f834u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x23f838: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x23F838u;
    SET_GPR_U32(ctx, 31, 0x23F840u);
    ctx->pc = 0x23F83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F838u;
    // 0x23f83c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x23F838u, 0x23F840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F840u;
label_23f840:
    // 0x23f840: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x23f840u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x23f844: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x23F844u;
    SET_GPR_U32(ctx, 31, 0x23F84Cu);
    ctx->pc = 0x23F848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F844u;
    // 0x23f848: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x23F844u, 0x23F84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F84Cu;
label_23f84c:
    // 0x23f84c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x23f84cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f850: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x23f850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23f854: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23f854u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23f858: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23f858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23f85c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23f85cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23f860: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x23f860u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23f864: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x23f864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x23f868: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x23f868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x23f86c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x23f86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x23f870: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x23f870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f874: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x23f874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f878: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x23f878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23f87c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x23f87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23f880: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x23f880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23f884: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x23f884u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23f888: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x23f888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x23f88c: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x23f88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x23f890: 0xc0e409a  jal         func_390268
    ctx->pc = 0x23F890u;
    SET_GPR_U32(ctx, 31, 0x23F898u);
    ctx->pc = 0x23F894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F890u;
    // 0x23f894: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23F890u, 0x23F898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F898u;
label_23f898:
    // 0x23f898: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x23F898u;
    {
        const bool branch_taken_0x23f898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f898) {
            ctx->pc = 0x23F89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F898u;
            // 0x23f89c: 0x7a0400a0  lq          $a0, 0xA0($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F8E4u;
            goto label_23f8e4;
        }
    }
    ctx->pc = 0x23F8A0u;
    // 0x23f8a0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x23f8a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f8a4: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x23f8a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23f8a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23f8a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23f8ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23f8acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23f8b0: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x23f8b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f8b4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x23f8b4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23f8b8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x23f8b8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23f8bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x23f8bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f8c0: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x23f8c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23f8c4: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x23f8c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x23f8c8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x23f8c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f8cc: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x23f8ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x23f8d0: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x23f8d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x23f8d4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x23f8d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x23f8d8: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x23f8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x23f8dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x23F8DCu;
    {
        const bool branch_taken_0x23f8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8DCu;
        // 0x23f8e0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8dc) {
            ctx->pc = 0x23F940u;
            goto label_23f940;
        }
    }
    ctx->pc = 0x23F8E4u;
label_23f8e4:
    // 0x23f8e4: 0x7a0300b0  lq          $v1, 0xB0($s0)
    ctx->pc = 0x23f8e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x23f8e8: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x23f8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x23f8ec: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x23f8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x23f8f0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x23f8f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f8f4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23f8f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23f8f8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23f8f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23f8fc: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x23f8fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f900: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x23f900u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23f904: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x23f904u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23f908: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x23f908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f90c: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x23f90cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23f910: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x23f910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x23f914: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x23f914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23f918: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x23f918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x23f91c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x23f91cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x23f920: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x23f920u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x23f924: 0x7e0400a0  sq          $a0, 0xA0($s0)
    ctx->pc = 0x23f924u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 4));
    // 0x23f928: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x23f928u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    // 0x23f92c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x23f92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x23f930: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x23f930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x23f934: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x23f934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x23f938: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x23f938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x23f93c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x23f93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_23f940:
    // 0x23f940: 0xde020330  ld          $v0, 0x330($s0)
    ctx->pc = 0x23f940u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 816)));
label_23f944:
    // 0x23f944: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x23f944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x23f948: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x23f948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x23f94c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23f94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23f950: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23F950u;
    {
        const bool branch_taken_0x23f950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F950u;
        // 0x23f954: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f950) {
            ctx->pc = 0x23F9B0u;
            goto label_23f9b0;
        }
    }
    ctx->pc = 0x23F958u;
    // 0x23f958: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x23f958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f95c: 0xc44202cc  lwc1        $f2, 0x2CC($v0)
    ctx->pc = 0x23f95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23f960: 0xc6010304  lwc1        $f1, 0x304($s0)
    ctx->pc = 0x23f960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f964: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x23f964u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x23f968: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x23f968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23f96c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x23f96cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x23f970: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x23f970u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f974: 0xe6000300  swc1        $f0, 0x300($s0)
    ctx->pc = 0x23f974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    // 0x23f978: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23F978u;
    {
        const bool branch_taken_0x23f978 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F978u;
        // 0x23f97c: 0xe6010304  swc1        $f1, 0x304($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 772), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f978) {
            ctx->pc = 0x23F994u;
            goto label_23f994;
        }
    }
    ctx->pc = 0x23F980u;
    // 0x23f980: 0xa2000331  sb          $zero, 0x331($s0)
    ctx->pc = 0x23f980u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 817), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f984: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23f984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x23f988: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x23f988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x23f98c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x23f98cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x23f990: 0x7e0302e0  sq          $v1, 0x2E0($s0)
    ctx->pc = 0x23f990u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 736), GPR_VEC(ctx, 3));
label_23f994:
    // 0x23f994: 0xc6000304  lwc1        $f0, 0x304($s0)
    ctx->pc = 0x23f994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f998: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x23f998u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f99c: 0x0  nop
    ctx->pc = 0x23f99cu;
    // NOP
    // 0x23f9a0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x23F9A0u;
    {
        const bool branch_taken_0x23f9a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f9a0) {
            ctx->pc = 0x23F9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F9A0u;
            // 0x23f9a4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F9B4u;
            goto label_23f9b4;
        }
    }
    ctx->pc = 0x23F9A8u;
    // 0x23f9a8: 0xe6030308  swc1        $f3, 0x308($s0)
    ctx->pc = 0x23f9a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 776), bits); }
    // 0x23f9ac: 0xa2000332  sb          $zero, 0x332($s0)
    ctx->pc = 0x23f9acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 818), (uint8_t)GPR_U32(ctx, 0));
label_23f9b0:
    // 0x23f9b0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x23f9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_23f9b4:
    // 0x23f9b4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x23f9b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23f9b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x23f9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f9bc: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x23f9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23f9c0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x23f9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x23F9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9C4u;
        // 0x23f9c8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F9CCu;
    // 0x23f9cc: 0x0  nop
    ctx->pc = 0x23f9ccu;
    // NOP
    ctx->pc = 0x23f9d0u;
}
