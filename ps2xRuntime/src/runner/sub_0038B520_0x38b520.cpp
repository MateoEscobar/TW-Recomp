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

// Function: sub_0038B520
// Address: 0x38b520 - 0x38b8d0
void sub_0038B520_0x38b520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B520_0x38b520");
#endif

    switch (ctx->pc) {
        case 0x38b594u: goto label_38b594;
        case 0x38b59cu: goto label_38b59c;
        case 0x38b7d0u: goto label_38b7d0;
        case 0x38b7f4u: goto label_38b7f4;
        case 0x38b854u: goto label_38b854;
        case 0x38b878u: goto label_38b878;
        default: break;
    }

    ctx->pc = 0x38b520u;

    // 0x38b520: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x38b520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x38b524: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x38b524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x38b528: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x38b528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x38b52c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x38b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x38b530: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x38b530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x38b534: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x38b534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b538: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x38b538u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x38b53c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38b53cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b540: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x38b540u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x38b544: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x38b544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38b548: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x38b548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x38b54c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x38b54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x38b550: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x38b550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x38b554: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x38b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x38b558: 0x84a70092  lh          $a3, 0x92($a1)
    ctx->pc = 0x38b558u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
    // 0x38b55c: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x38b55cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x38b560: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x38b560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x38b564: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x38b564u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x38b568: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x38b568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x38b56c: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x38b56cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x38b570: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38b570u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38b574: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38b574u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38b578: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x38b578u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38b57c: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x38b57cu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x38b580: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x38b580u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x38b584: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x38b584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x38b588: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x38b588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x38b58c: 0xc0cd940  jal         func_336500
    ctx->pc = 0x38B58Cu;
    SET_GPR_U32(ctx, 31, 0x38B594u);
    ctx->pc = 0x38B590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B58Cu;
    // 0x38b590: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x38B58Cu, 0x38B594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B594u;
label_38b594:
    // 0x38b594: 0xc0e3400  jal         func_38D000
    ctx->pc = 0x38B594u;
    SET_GPR_U32(ctx, 31, 0x38B59Cu);
    ctx->pc = 0x38B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B594u;
    // 0x38b598: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D000u, 0x38B594u, 0x38B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B59Cu;
label_38b59c:
    // 0x38b59c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x38b59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x38b5a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38b5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38b5a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x38b5a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38b5a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x38b5a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x38b5ac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38b5acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38b5b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38b5b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38b5b4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x38b5b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x38b5b8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x38b5b8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x38b5bc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x38b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x38b5c0: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x38b5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x38b5c4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x38b5c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38b5c8: 0x7ba50040  lq          $a1, 0x40($sp)
    ctx->pc = 0x38b5c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38b5cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38b5ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38b5d0: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x38b5d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x38b5d4: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x38b5d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38b5d8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38b5d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38b5dc: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x38b5dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x38b5e0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x38b5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38b5e4: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x38b5e4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38b5e8: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x38b5e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x38b5ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38b5ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38b5f0: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x38b5f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x38b5f4: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x38b5f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38b5f8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38b5f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38b5fc: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x38b5fcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x38b600: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x38b600u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x38b604: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x38b604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x38b608: 0x0  nop
    ctx->pc = 0x38b608u;
    // NOP
    // 0x38b60c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x38b60cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38b610: 0x0  nop
    ctx->pc = 0x38b610u;
    // NOP
    // 0x38b614: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x38B614u;
    {
        const bool branch_taken_0x38b614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38B618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B614u;
        // 0x38b618: 0x7fa40070  sq          $a0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b614) {
            ctx->pc = 0x38B688u;
            goto label_38b688;
        }
    }
    ctx->pc = 0x38B61Cu;
    // 0x38b61c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x38b61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38b620: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x38b620u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x38b624: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x38b624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38b628: 0x0  nop
    ctx->pc = 0x38b628u;
    // NOP
    // 0x38b62c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x38B62Cu;
    {
        const bool branch_taken_0x38b62c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38b62c) {
            ctx->pc = 0x38B640u;
            goto label_38b640;
        }
    }
    ctx->pc = 0x38B634u;
    // 0x38b634: 0x4602a800  add.s       $f0, $f21, $f2
    ctx->pc = 0x38b634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x38b638: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x38B638u;
    {
        const bool branch_taken_0x38b638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B638u;
        // 0x38b63c: 0x4601a040  add.s       $f1, $f20, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b638) {
            ctx->pc = 0x38B730u;
            goto label_38b730;
        }
    }
    ctx->pc = 0x38B640u;
label_38b640:
    // 0x38b640: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x38b640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38b644: 0x0  nop
    ctx->pc = 0x38b644u;
    // NOP
    // 0x38b648: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x38B648u;
    {
        const bool branch_taken_0x38b648 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B648u;
        // 0x38b64c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b648) {
            ctx->pc = 0x38B680u;
            goto label_38b680;
        }
    }
    ctx->pc = 0x38B650u;
    // 0x38b650: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x38b650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38b654: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x38b654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38b658: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x38b658u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x38b65c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x38b65cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x38b660: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x38b660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38b664: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x38b664u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x38b668: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x38b668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x38b66c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x38b66cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x38b670: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x38b670u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x38b674: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x38b674u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x38b678: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x38B678u;
    {
        const bool branch_taken_0x38b678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B678u;
        // 0x38b67c: 0x7ba20090  lq          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b678) {
            ctx->pc = 0x38B75Cu;
            goto label_38b75c;
        }
    }
    ctx->pc = 0x38B680u;
label_38b680:
    // 0x38b680: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x38B680u;
    {
        const bool branch_taken_0x38b680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B680u;
        // 0x38b684: 0x4602a800  add.s       $f0, $f21, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b680) {
            ctx->pc = 0x38B72Cu;
            goto label_38b72c;
        }
    }
    ctx->pc = 0x38B688u;
label_38b688:
    // 0x38b688: 0x4602a836  c.le.s      $f21, $f2
    ctx->pc = 0x38b688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38b68c: 0x0  nop
    ctx->pc = 0x38b68cu;
    // NOP
    // 0x38b690: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x38B690u;
    {
        const bool branch_taken_0x38b690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B690u;
        // 0x38b694: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b690) {
            ctx->pc = 0x38B6F4u;
            goto label_38b6f4;
        }
    }
    ctx->pc = 0x38B698u;
    // 0x38b698: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x38b698u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x38b69c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x38b69cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38b6a0: 0x0  nop
    ctx->pc = 0x38b6a0u;
    // NOP
    // 0x38b6a4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x38B6A4u;
    {
        const bool branch_taken_0x38b6a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B6A4u;
        // 0x38b6a8: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b6a4) {
            ctx->pc = 0x38B6DCu;
            goto label_38b6dc;
        }
    }
    ctx->pc = 0x38B6ACu;
    // 0x38b6ac: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x38b6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38b6b0: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x38b6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38b6b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x38b6b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x38b6b8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x38b6b8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x38b6bc: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x38b6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38b6c0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x38b6c0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x38b6c4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x38b6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x38b6c8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x38b6c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x38b6cc: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x38b6ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x38b6d0: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x38b6d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x38b6d4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x38B6D4u;
    {
        const bool branch_taken_0x38b6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B6D4u;
        // 0x38b6d8: 0x7ba20090  lq          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b6d4) {
            ctx->pc = 0x38B75Cu;
            goto label_38b75c;
        }
    }
    ctx->pc = 0x38B6DCu;
label_38b6dc:
    // 0x38b6dc: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x38b6dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38b6e0: 0x0  nop
    ctx->pc = 0x38b6e0u;
    // NOP
    // 0x38b6e4: 0x45010070  bc1t        . + 4 + (0x70 << 2)
    ctx->pc = 0x38B6E4u;
    {
        const bool branch_taken_0x38b6e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B6E4u;
        // 0x38b6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b6e4) {
            ctx->pc = 0x38B8A8u;
            goto label_38b8a8;
        }
    }
    ctx->pc = 0x38B6ECu;
    // 0x38b6ec: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x38B6ECu;
    {
        const bool branch_taken_0x38b6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B6ECu;
        // 0x38b6f0: 0x7fa50070  sq          $a1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b6ec) {
            ctx->pc = 0x38B764u;
            goto label_38b764;
        }
    }
    ctx->pc = 0x38B6F4u;
label_38b6f4:
    // 0x38b6f4: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x38b6f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x38b6f8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x38b6f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38b6fc: 0x0  nop
    ctx->pc = 0x38b6fcu;
    // NOP
    // 0x38b700: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x38B700u;
    {
        const bool branch_taken_0x38b700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38b700) {
            ctx->pc = 0x38B714u;
            goto label_38b714;
        }
    }
    ctx->pc = 0x38B708u;
    // 0x38b708: 0x4602a801  sub.s       $f0, $f21, $f2
    ctx->pc = 0x38b708u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x38b70c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38B70Cu;
    {
        const bool branch_taken_0x38b70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B70Cu;
        // 0x38b710: 0x4601a040  add.s       $f1, $f20, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b70c) {
            ctx->pc = 0x38B730u;
            goto label_38b730;
        }
    }
    ctx->pc = 0x38B714u;
label_38b714:
    // 0x38b714: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x38b714u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38b718: 0x0  nop
    ctx->pc = 0x38b718u;
    // NOP
    // 0x38b71c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x38B71Cu;
    {
        const bool branch_taken_0x38b71c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38b71c) {
            ctx->pc = 0x38B720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B71Cu;
            // 0x38b720: 0x4602a801  sub.s       $f0, $f21, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B72Cu;
            goto label_38b72c;
        }
    }
    ctx->pc = 0x38B724u;
    // 0x38b724: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x38B724u;
    {
        const bool branch_taken_0x38b724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B724u;
        // 0x38b728: 0x7fa60070  sq          $a2, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b724) {
            ctx->pc = 0x38B764u;
            goto label_38b764;
        }
    }
    ctx->pc = 0x38B72Cu;
label_38b72c:
    // 0x38b72c: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x38b72cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_38b730:
    // 0x38b730: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x38b730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x38b734: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x38b734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x38b738: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x38b738u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38b73c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38b73cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38b740: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x38b740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38b744: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x38b744u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x38b748: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x38b748u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x38b74c: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x38b74cu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x38b750: 0x4a0003bf  vwaitq
    ctx->pc = 0x38b750u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x38b754: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x38b754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x38b758: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x38b758u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_38b75c:
    // 0x38b75c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x38b75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x38b760: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x38b760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_38b764:
    // 0x38b764: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x38b764u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38b768: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x38b768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38b76c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38b76cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x38b770: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38b770u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x38b774: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x38b774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38b778: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38b778u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38b77c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38b77cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x38b780: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x38b780u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x38b784: 0x3c01bf33  lui         $at, 0xBF33
    ctx->pc = 0x38b784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48947 << 16));
    // 0x38b788: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x38b788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x38b78c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x38b78cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38b790: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38b790u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38b794: 0x0  nop
    ctx->pc = 0x38b794u;
    // NOP
    // 0x38b798: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38b798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38b79c: 0x0  nop
    ctx->pc = 0x38b79cu;
    // NOP
    // 0x38b7a0: 0x45010041  bc1t        . + 4 + (0x41 << 2)
    ctx->pc = 0x38B7A0u;
    {
        const bool branch_taken_0x38b7a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B7A0u;
        // 0x38b7a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b7a0) {
            ctx->pc = 0x38B8A8u;
            goto label_38b8a8;
        }
    }
    ctx->pc = 0x38B7A8u;
    // 0x38b7a8: 0x8e6511e0  lw          $a1, 0x11E0($s3)
    ctx->pc = 0x38b7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4576)));
    // 0x38b7ac: 0x241405f0  addiu       $s4, $zero, 0x5F0
    ctx->pc = 0x38b7acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
    // 0x38b7b0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x38b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x38b7b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38b7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b7b8: 0xb42818  mult        $a1, $a1, $s4
    ctx->pc = 0x38b7b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x38b7bc: 0x2452e514  addiu       $s2, $v0, -0x1AEC
    ctx->pc = 0x38b7bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960404));
    // 0x38b7c0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x38b7c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x38b7c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x38b7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38b7c8: 0xc0e27ea  jal         func_389FA8
    ctx->pc = 0x38B7C8u;
    SET_GPR_U32(ctx, 31, 0x38B7D0u);
    ctx->pc = 0x38B7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B7C8u;
    // 0x38b7cc: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389FA8u, 0x38B7C8u, 0x38B7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B7D0u;
label_38b7d0:
    // 0x38b7d0: 0x8e6511e0  lw          $a1, 0x11E0($s3)
    ctx->pc = 0x38b7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4576)));
    // 0x38b7d4: 0x2643ffec  addiu       $v1, $s2, -0x14
    ctx->pc = 0x38b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967276));
    // 0x38b7d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38b7d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b7dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38b7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b7e0: 0xb42818  mult        $a1, $a1, $s4
    ctx->pc = 0x38b7e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x38b7e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38b7e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x38b7e8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x38b7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38b7ec: 0xc0e27d0  jal         func_389F40
    ctx->pc = 0x38B7ECu;
    SET_GPR_U32(ctx, 31, 0x38B7F4u);
    ctx->pc = 0x38B7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B7ECu;
    // 0x38b7f0: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389F40u, 0x38B7ECu, 0x38B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B7F4u;
label_38b7f4:
    // 0x38b7f4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x38b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x38b7f8: 0x8e6411e0  lw          $a0, 0x11E0($s3)
    ctx->pc = 0x38b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4576)));
    // 0x38b7fc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x38b7fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x38b800: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x38b800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x38b804: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x38b804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x38b808: 0x942018  mult        $a0, $a0, $s4
    ctx->pc = 0x38b808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x38b80c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x38b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x38b810: 0x4600a045  abs.s       $f1, $f20
    ctx->pc = 0x38b810u;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x38b814: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38b814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38b818: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x38b818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x38b81c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38b81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38b820: 0xc440ffd0  lwc1        $f0, -0x30($v0)
    ctx->pc = 0x38b820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38b824: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x38b824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x38b828: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x38b828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x38b82c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38b82cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38b830: 0x0  nop
    ctx->pc = 0x38b830u;
    // NOP
    // 0x38b834: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x38B834u;
    {
        const bool branch_taken_0x38b834 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B834u;
        // 0x38b838: 0x8c710020  lw          $s1, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b834) {
            ctx->pc = 0x38B89Cu;
            goto label_38b89c;
        }
    }
    ctx->pc = 0x38B83Cu;
    // 0x38b83c: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x38b83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x38b840: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x38b840u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x38b844: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x38b844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x38b848: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38b848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38b84c: 0xc0e27ea  jal         func_389FA8
    ctx->pc = 0x38B84Cu;
    SET_GPR_U32(ctx, 31, 0x38B854u);
    ctx->pc = 0x38B850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B84Cu;
    // 0x38b850: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389FA8u, 0x38B84Cu, 0x38B854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B854u;
label_38b854:
    // 0x38b854: 0x8e6511e0  lw          $a1, 0x11E0($s3)
    ctx->pc = 0x38b854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4576)));
    // 0x38b858: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x38b858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x38b85c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38b85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b860: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38b860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b864: 0xb42818  mult        $a1, $a1, $s4
    ctx->pc = 0x38b864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x38b868: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38b868u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x38b86c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x38b86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38b870: 0xc0e27d0  jal         func_389F40
    ctx->pc = 0x38B870u;
    SET_GPR_U32(ctx, 31, 0x38B878u);
    ctx->pc = 0x38B874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B870u;
    // 0x38b874: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389F40u, 0x38B870u, 0x38B878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B878u;
label_38b878:
    // 0x38b878: 0x8e6411e0  lw          $a0, 0x11E0($s3)
    ctx->pc = 0x38b878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4576)));
    // 0x38b87c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x38b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x38b880: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x38b880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x38b884: 0x942018  mult        $a0, $a0, $s4
    ctx->pc = 0x38b884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x38b888: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38b888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38b88c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38b890: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x38b890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x38b894: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x38b894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x38b898: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x38b898u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_38b89c:
    // 0x38b89c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x38b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x38b8a0: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x38b8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x38b8a4: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x38b8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_38b8a8:
    // 0x38b8a8: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x38b8a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x38b8ac: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x38b8acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x38b8b0: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x38b8b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x38b8b4: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x38b8b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x38b8b8: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x38b8b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x38b8bc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x38b8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x38b8c0: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x38b8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x38b8c4: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x38b8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x38b8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x38B8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B8C8u;
        // 0x38b8cc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B8D0u;
}
