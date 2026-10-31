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

// Function: sub_0024F718
// Address: 0x24f718 - 0x24fbf8
void sub_0024F718_0x24f718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F718_0x24f718");
#endif

    switch (ctx->pc) {
        case 0x24f7c8u: goto label_24f7c8;
        case 0x24f7dcu: goto label_24f7dc;
        case 0x24f818u: goto label_24f818;
        case 0x24f970u: goto label_24f970;
        case 0x24f978u: goto label_24f978;
        case 0x24f9ccu: goto label_24f9cc;
        case 0x24fa78u: goto label_24fa78;
        case 0x24fabcu: goto label_24fabc;
        default: break;
    }

    ctx->pc = 0x24f718u;

    // 0x24f718: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x24f718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x24f71c: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x24f71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x24f720: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24f720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24f724: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x24f724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x24f728: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x24f728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x24f72c: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x24f72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x24f730: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x24f730u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f734: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x24f734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x24f738: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x24f738u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f73c: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x24f73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x24f740: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x24f740u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24f744: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x24f744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x24f748: 0x30f7ffff  andi        $s7, $a3, 0xFFFF
    ctx->pc = 0x24f748u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x24f74c: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x24f74cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24f750: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x24f750u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f754: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x24f754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x24f758: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x24f758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x24f75c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x24f75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x24f760: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24f760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24f764: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x24f764u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x24f768: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x24f768u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x24f76c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x24f76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x24f770: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f774: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x24f774u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24f778: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x24f778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x24f77c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x24f77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x24f780: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x24f780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x24f784: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x24f784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24f788: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x24f788u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x24f78c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x24f78cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x24f790: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x24f790u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x24f794: 0x4bc3112f  vmini.xyz   $vf4, $vf2, $vf3
    ctx->pc = 0x24f794u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24f798: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x24f798u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x24f79c: 0x4bc3116b  vmax.xyz    $vf5, $vf2, $vf3
    ctx->pc = 0x24f79cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x24f7a0: 0x48232000  qmfc2.ni    $v1, $vf4
    ctx->pc = 0x24f7a0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24f7a4: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x24f7a4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x24f7a8: 0x8fb00088  lw          $s0, 0x88($sp)
    ctx->pc = 0x24f7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24f7ac: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x24f7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x24f7b0: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x24f7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x24f7b4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x24f7b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24f7b8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24f7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24f7bc: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x24f7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x24f7c0: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x24f7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
    // 0x24f7c4: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x24f7c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_24f7c8:
    // 0x24f7c8: 0x16c0000d  bnez        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x24F7C8u;
    {
        const bool branch_taken_0x24f7c8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7C8u;
        // 0x24f7cc: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7c8) {
            ctx->pc = 0x24F800u;
            goto label_24f800;
        }
    }
    ctx->pc = 0x24F7D0u;
    // 0x24f7d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24f7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f7d4: 0xc0941c2  jal         func_250708
    ctx->pc = 0x24F7D4u;
    SET_GPR_U32(ctx, 31, 0x24F7DCu);
    ctx->pc = 0x24F7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F7D4u;
    // 0x24f7d8: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x24F7D4u, 0x24F7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F7DCu;
label_24f7dc:
    // 0x24f7dc: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x24f7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f7e0: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x24f7e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f7e4: 0x0  nop
    ctx->pc = 0x24f7e4u;
    // NOP
    // 0x24f7e8: 0x450100f1  bc1t        . + 4 + (0xF1 << 2)
    ctx->pc = 0x24F7E8u;
    {
        const bool branch_taken_0x24f7e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7E8u;
        // 0x24f7ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7e8) {
            ctx->pc = 0x24FBB0u;
            goto label_24fbb0;
        }
    }
    ctx->pc = 0x24F7F0u;
    // 0x24f7f0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F7F0u;
    {
        const bool branch_taken_0x24f7f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7F0u;
        // 0x24f7f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7f0) {
            ctx->pc = 0x24F808u;
            goto label_24f808;
        }
    }
    ctx->pc = 0x24F7F8u;
    // 0x24f7f8: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x24F7F8u;
    {
        const bool branch_taken_0x24f7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7F8u;
        // 0x24f7fc: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7f8) {
            ctx->pc = 0x24FBC0u;
            goto label_24fbc0;
        }
    }
    ctx->pc = 0x24F800u;
label_24f800:
    // 0x24f800: 0x120000c9  beqz        $s0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x24F800u;
    {
        const bool branch_taken_0x24f800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f800) {
            ctx->pc = 0x24FB28u;
            goto label_24fb28;
        }
    }
    ctx->pc = 0x24F808u;
label_24f808:
    // 0x24f808: 0x3c01417f  lui         $at, 0x417F
    ctx->pc = 0x24f808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16767 << 16));
    // 0x24f80c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x24f80cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x24f810: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x24f810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x24f814: 0x96030048  lhu         $v1, 0x48($s0)
    ctx->pc = 0x24f814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
label_24f818:
    // 0x24f818: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x24f818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x24f81c: 0x544000c0  bnel        $v0, $zero, . + 4 + (0xC0 << 2)
    ctx->pc = 0x24F81Cu;
    {
        const bool branch_taken_0x24f81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f81c) {
            ctx->pc = 0x24F820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F81Cu;
            // 0x24f820: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FB20u;
            goto label_24fb20;
        }
    }
    ctx->pc = 0x24F824u;
    // 0x24f824: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x24f824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x24f828: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x24f828u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24f82c: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x24f82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x24f830: 0x544000bb  bnel        $v0, $zero, . + 4 + (0xBB << 2)
    ctx->pc = 0x24F830u;
    {
        const bool branch_taken_0x24f830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f830) {
            ctx->pc = 0x24F834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F830u;
            // 0x24f834: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FB20u;
            goto label_24fb20;
        }
    }
    ctx->pc = 0x24F838u;
    // 0x24f838: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x24f838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f83c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x24f83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f840: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24f840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f844: 0x0  nop
    ctx->pc = 0x24f844u;
    // NOP
    // 0x24f848: 0x450300b5  bc1tl       . + 4 + (0xB5 << 2)
    ctx->pc = 0x24F848u;
    {
        const bool branch_taken_0x24f848 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f848) {
            ctx->pc = 0x24F84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F848u;
            // 0x24f84c: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FB20u;
            goto label_24fb20;
        }
    }
    ctx->pc = 0x24F850u;
    // 0x24f850: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x24f850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f854: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x24f854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f858: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24f858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f85c: 0x0  nop
    ctx->pc = 0x24f85cu;
    // NOP
    // 0x24f860: 0x450300af  bc1tl       . + 4 + (0xAF << 2)
    ctx->pc = 0x24F860u;
    {
        const bool branch_taken_0x24f860 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f860) {
            ctx->pc = 0x24F864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F860u;
            // 0x24f864: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FB20u;
            goto label_24fb20;
        }
    }
    ctx->pc = 0x24F868u;
    // 0x24f868: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x24f868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f86c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x24f86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f870: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x24f870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f874: 0x0  nop
    ctx->pc = 0x24f874u;
    // NOP
    // 0x24f878: 0x450300a9  bc1tl       . + 4 + (0xA9 << 2)
    ctx->pc = 0x24F878u;
    {
        const bool branch_taken_0x24f878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f878) {
            ctx->pc = 0x24F87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F878u;
            // 0x24f87c: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FB20u;
            goto label_24fb20;
        }
    }
    ctx->pc = 0x24F880u;
    // 0x24f880: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x24f880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f884: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x24f884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f888: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x24f888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f88c: 0x0  nop
    ctx->pc = 0x24f88cu;
    // NOP
    // 0x24f890: 0x450300a3  bc1tl       . + 4 + (0xA3 << 2)
    ctx->pc = 0x24F890u;
    {
        const bool branch_taken_0x24f890 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f890) {
            ctx->pc = 0x24F894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F890u;
            // 0x24f894: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FB20u;
            goto label_24fb20;
        }
    }
    ctx->pc = 0x24F898u;
    // 0x24f898: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x24f898u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x24f89c: 0x4420070  bltzl       $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x24F89Cu;
    {
        const bool branch_taken_0x24f89c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24f89c) {
            ctx->pc = 0x24F8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F89Cu;
            // 0x24f8a0: 0x86110000  lh          $s1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA60u;
            goto label_24fa60;
        }
    }
    ctx->pc = 0x24F8A4u;
    // 0x24f8a4: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x24f8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f8a8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x24f8a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x24f8ac: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x24f8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f8b0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x24f8b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x24f8b4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x24f8b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x24f8b8: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x24f8b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x24f8bc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x24f8bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x24f8c0: 0x0  nop
    ctx->pc = 0x24f8c0u;
    // NOP
    // 0x24f8c4: 0x0  nop
    ctx->pc = 0x24f8c4u;
    // NOP
    // 0x24f8c8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x24f8c8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x24f8cc: 0x0  nop
    ctx->pc = 0x24f8ccu;
    // NOP
    // 0x24f8d0: 0x0  nop
    ctx->pc = 0x24f8d0u;
    // NOP
    // 0x24f8d4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x24f8d4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x24f8d8: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24f8d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x24f8dc: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x24f8dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24f8e0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24f8e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24f8e4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x24f8e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24f8e8: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x24f8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24f8ec: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F8ECu;
    {
        const bool branch_taken_0x24f8ec = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x24F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F8ECu;
        // 0x24f8f0: 0x28620010  slti        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f8ec) {
            ctx->pc = 0x24F900u;
            goto label_24f900;
        }
    }
    ctx->pc = 0x24F8F4u;
    // 0x24f8f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24f8f8: 0x42023  negu        $a0, $a0
    ctx->pc = 0x24f8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x24f8fc: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x24f8fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_24f900:
    // 0x24f900: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x24F900u;
    {
        const bool branch_taken_0x24f900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F900u;
        // 0x24f904: 0x642821  addu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f900) {
            ctx->pc = 0x24FB1Cu;
            goto label_24fb1c;
        }
    }
    ctx->pc = 0x24F908u;
    // 0x24f908: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x24f908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x24f90c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24F90Cu;
    {
        const bool branch_taken_0x24f90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F90Cu;
        // 0x24f910: 0x2482000f  addiu       $v0, $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f90c) {
            ctx->pc = 0x24F918u;
            goto label_24f918;
        }
    }
    ctx->pc = 0x24F914u;
    // 0x24f914: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x24f914u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_24f918:
    // 0x24f918: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F918u;
    {
        const bool branch_taken_0x24f918 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x24F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F918u;
        // 0x24f91c: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f918) {
            ctx->pc = 0x24F930u;
            goto label_24f930;
        }
    }
    ctx->pc = 0x24F920u;
    // 0x24f920: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24f920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24f924: 0x480007d  bltz        $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x24F924u;
    {
        const bool branch_taken_0x24f924 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x24F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F924u;
        // 0x24f928: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f924) {
            ctx->pc = 0x24FB1Cu;
            goto label_24fb1c;
        }
    }
    ctx->pc = 0x24F92Cu;
    // 0x24f92c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x24f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_24f930:
    // 0x24f930: 0x2492ffff  addiu       $s2, $a0, -0x1
    ctx->pc = 0x24f930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24f934: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24f934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24f938: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x24f938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x24f93c: 0x84510028  lh          $s1, 0x28($v0)
    ctx->pc = 0x24f93cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x24f940: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x24f940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f944: 0x8c64a220  lw          $a0, -0x5DE0($v1)
    ctx->pc = 0x24f944u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6CA220u));
    // 0x24f948: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x24f948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x24f94c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24f950: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x24f950u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f954: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24F954u;
    {
        const bool branch_taken_0x24f954 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x24F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F954u;
        // 0x24f958: 0x8e64a220  lw          $a0, -0x5DE0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f954) {
            ctx->pc = 0x24F978u;
            goto label_24f978;
        }
    }
    ctx->pc = 0x24F95Cu;
    // 0x24f95c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24f95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f960: 0x482006f  bltzl       $a0, . + 4 + (0x6F << 2)
    ctx->pc = 0x24F960u;
    {
        const bool branch_taken_0x24f960 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x24f960) {
            ctx->pc = 0x24F964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F960u;
            // 0x24f964: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FB20u;
            goto label_24fb20;
        }
    }
    ctx->pc = 0x24F968u;
    // 0x24f968: 0x2492ffff  addiu       $s2, $a0, -0x1
    ctx->pc = 0x24f968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24f96c: 0x0  nop
    ctx->pc = 0x24f96cu;
    // NOP
label_24f970:
    // 0x24f970: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x24F970u;
    {
        const bool branch_taken_0x24f970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F970u;
        // 0x24f974: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f970) {
            ctx->pc = 0x24FA34u;
            goto label_24fa34;
        }
    }
    ctx->pc = 0x24F978u;
label_24f978:
    // 0x24f978: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x24f978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x24f97c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x24f97cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24f980: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24f980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24f984: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24f984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24f988: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x24f988u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24f98c: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x24f98cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f990: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24F990u;
    {
        const bool branch_taken_0x24f990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f990) {
            ctx->pc = 0x24F994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F990u;
            // 0x24f994: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F998u;
            goto label_24f998;
        }
    }
    ctx->pc = 0x24F998u;
label_24f998:
    // 0x24f998: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24f998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f99c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24f99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f9a0: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x24f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24f9a4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x24f9a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f9a8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x24f9a8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24f9ac: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x24f9acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x24f9b0: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x24f9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x24f9b4: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x24f9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24f9b8: 0x27aa0084  addiu       $t2, $sp, 0x84
    ctx->pc = 0x24f9b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x24f9bc: 0x3810  mfhi        $a3
    ctx->pc = 0x24f9bcu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x24f9c0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x24f9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x24f9c4: 0xc093a4e  jal         func_24E938
    ctx->pc = 0x24F9C4u;
    SET_GPR_U32(ctx, 31, 0x24F9CCu);
    ctx->pc = 0x24F9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F9C4u;
    // 0x24f9c8: 0x1673821  addu        $a3, $t3, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E938u, 0x24F9C4u, 0x24F9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F9CCu;
label_24f9cc:
    // 0x24f9cc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x24F9CCu;
    {
        const bool branch_taken_0x24f9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F9CCu;
        // 0x24f9d0: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f9cc) {
            ctx->pc = 0x24FA34u;
            goto label_24fa34;
        }
    }
    ctx->pc = 0x24F9D4u;
    // 0x24f9d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f9d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f9dc: 0x0  nop
    ctx->pc = 0x24f9dcu;
    // NOP
    // 0x24f9e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x24f9e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f9e4: 0x0  nop
    ctx->pc = 0x24f9e4u;
    // NOP
    // 0x24f9e8: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x24F9E8u;
    {
        const bool branch_taken_0x24f9e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F9E8u;
        // 0x24f9ec: 0x8e62a220  lw          $v0, -0x5DE0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f9e8) {
            ctx->pc = 0x24FA38u;
            goto label_24fa38;
        }
    }
    ctx->pc = 0x24F9F0u;
    // 0x24f9f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f9f4: 0x16c20009  bne         $s6, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24F9F4u;
    {
        const bool branch_taken_0x24f9f4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x24F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F9F4u;
        // 0x24f9f8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f9f4) {
            ctx->pc = 0x24FA1Cu;
            goto label_24fa1c;
        }
    }
    ctx->pc = 0x24F9FCu;
    // 0x24f9fc: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x24f9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fa00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24fa00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fa04: 0x0  nop
    ctx->pc = 0x24fa04u;
    // NOP
    // 0x24fa08: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x24FA08u;
    {
        const bool branch_taken_0x24fa08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA08u;
        // 0x24fa0c: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa08) {
            ctx->pc = 0x24FA34u;
            goto label_24fa34;
        }
    }
    ctx->pc = 0x24FA10u;
    // 0x24fa10: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x24fa10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24fa14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24FA14u;
    {
        const bool branch_taken_0x24fa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA14u;
        // 0x24fa18: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa14) {
            ctx->pc = 0x24FA34u;
            goto label_24fa34;
        }
    }
    ctx->pc = 0x24FA1Cu;
label_24fa1c:
    // 0x24fa1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24fa1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fa20: 0x0  nop
    ctx->pc = 0x24fa20u;
    // NOP
    // 0x24fa24: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24FA24u;
    {
        const bool branch_taken_0x24fa24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA24u;
        // 0x24fa28: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa24) {
            ctx->pc = 0x24FA34u;
            goto label_24fa34;
        }
    }
    ctx->pc = 0x24FA2Cu;
    // 0x24fa2c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x24fa2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24fa30: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x24fa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_24fa34:
    // 0x24fa34: 0x8e62a220  lw          $v0, -0x5DE0($s3)
    ctx->pc = 0x24fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943264)));
label_24fa38:
    // 0x24fa38: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x24fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x24fa3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24fa40: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x24fa40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24fa44: 0x481ffcc  bgez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x24FA44u;
    {
        const bool branch_taken_0x24fa44 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x24FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA44u;
        // 0x24fa48: 0x8e64a220  lw          $a0, -0x5DE0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa44) {
            ctx->pc = 0x24F978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f978;
        }
    }
    ctx->pc = 0x24FA4Cu;
    // 0x24fa4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24fa4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fa50: 0x481ffc7  bgez        $a0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x24FA50u;
    {
        const bool branch_taken_0x24fa50 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x24FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA50u;
        // 0x24fa54: 0x2492ffff  addiu       $s2, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa50) {
            ctx->pc = 0x24F970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f970;
        }
    }
    ctx->pc = 0x24FA58u;
    // 0x24fa58: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x24FA58u;
    {
        const bool branch_taken_0x24fa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FA58u;
        // 0x24fa5c: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa58) {
            ctx->pc = 0x24FB20u;
            goto label_24fb20;
        }
    }
    ctx->pc = 0x24FA60u;
label_24fa60:
    // 0x24fa60: 0x5a20002f  blezl       $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x24FA60u;
    {
        const bool branch_taken_0x24fa60 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x24fa60) {
            ctx->pc = 0x24FA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FA60u;
            // 0x24fa64: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FB20u;
            goto label_24fb20;
        }
    }
    ctx->pc = 0x24FA68u;
    // 0x24fa68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24fa68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24fa6c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24fa6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24fa70: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x24fa70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fa74: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x24fa74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_24fa78:
    // 0x24fa78: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x24fa78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24fa7c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x24fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24fa80: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x24fa80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24fa84: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x24fa84u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24fa88: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x24fa88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x24fa8c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24FA8Cu;
    {
        const bool branch_taken_0x24fa8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fa8c) {
            ctx->pc = 0x24FA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FA8Cu;
            // 0x24fa90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA94u;
            goto label_24fa94;
        }
    }
    ctx->pc = 0x24FA94u;
label_24fa94:
    // 0x24fa94: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x24fa94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x24fa98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24fa98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fa9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24fa9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24faa0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x24faa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24faa4: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x24faa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24faa8: 0x27aa0084  addiu       $t2, $sp, 0x84
    ctx->pc = 0x24faa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x24faac: 0x3810  mfhi        $a3
    ctx->pc = 0x24faacu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x24fab0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x24fab0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x24fab4: 0xc093a4e  jal         func_24E938
    ctx->pc = 0x24FAB4u;
    SET_GPR_U32(ctx, 31, 0x24FABCu);
    ctx->pc = 0x24FAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FAB4u;
    // 0x24fab8: 0x1673821  addu        $a3, $t3, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E938u, 0x24FAB4u, 0x24FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FABCu;
label_24fabc:
    // 0x24fabc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x24FABCu;
    {
        const bool branch_taken_0x24fabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FABCu;
        // 0x24fac0: 0xc7a10080  lwc1        $f1, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fabc) {
            ctx->pc = 0x24FB14u;
            goto label_24fb14;
        }
    }
    ctx->pc = 0x24FAC4u;
    // 0x24fac4: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x24fac4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fac8: 0x0  nop
    ctx->pc = 0x24fac8u;
    // NOP
    // 0x24facc: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x24FACCu;
    {
        const bool branch_taken_0x24facc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24facc) {
            ctx->pc = 0x24FB14u;
            goto label_24fb14;
        }
    }
    ctx->pc = 0x24FAD4u;
    // 0x24fad4: 0x16d20009  bne         $s6, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x24FAD4u;
    {
        const bool branch_taken_0x24fad4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 18));
        ctx->pc = 0x24FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FAD4u;
        // 0x24fad8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fad4) {
            ctx->pc = 0x24FAFCu;
            goto label_24fafc;
        }
    }
    ctx->pc = 0x24FADCu;
    // 0x24fadc: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x24fadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fae0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24fae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fae4: 0x0  nop
    ctx->pc = 0x24fae4u;
    // NOP
    // 0x24fae8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x24FAE8u;
    {
        const bool branch_taken_0x24fae8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FAE8u;
        // 0x24faec: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fae8) {
            ctx->pc = 0x24FB14u;
            goto label_24fb14;
        }
    }
    ctx->pc = 0x24FAF0u;
    // 0x24faf0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x24faf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24faf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24FAF4u;
    {
        const bool branch_taken_0x24faf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FAF4u;
        // 0x24faf8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24faf4) {
            ctx->pc = 0x24FB14u;
            goto label_24fb14;
        }
    }
    ctx->pc = 0x24FAFCu;
label_24fafc:
    // 0x24fafc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24fafcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fb00: 0x0  nop
    ctx->pc = 0x24fb00u;
    // NOP
    // 0x24fb04: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24FB04u;
    {
        const bool branch_taken_0x24fb04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FB04u;
        // 0x24fb08: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb04) {
            ctx->pc = 0x24FB14u;
            goto label_24fb14;
        }
    }
    ctx->pc = 0x24FB0Cu;
    // 0x24fb0c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x24fb0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24fb10: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x24fb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_24fb14:
    // 0x24fb14: 0x5e20ffd8  bgtzl       $s1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x24FB14u;
    {
        const bool branch_taken_0x24fb14 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x24fb14) {
            ctx->pc = 0x24FB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FB14u;
            // 0x24fb18: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24fa78;
        }
    }
    ctx->pc = 0x24FB1Cu;
label_24fb1c:
    // 0x24fb1c: 0x8e100020  lw          $s0, 0x20($s0)
    ctx->pc = 0x24fb1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_24fb20:
    // 0x24fb20: 0x5600ff3d  bnel        $s0, $zero, . + 4 + (-0xC3 << 2)
    ctx->pc = 0x24FB20u;
    {
        const bool branch_taken_0x24fb20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fb20) {
            ctx->pc = 0x24FB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FB20u;
            // 0x24fb24: 0x96030048  lhu         $v1, 0x48($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f818;
        }
    }
    ctx->pc = 0x24FB28u;
label_24fb28:
    // 0x24fb28: 0x5ec0ff27  bgtzl       $s6, . + 4 + (-0xD9 << 2)
    ctx->pc = 0x24FB28u;
    {
        const bool branch_taken_0x24fb28 = (GPR_S32(ctx, 22) > 0);
        if (branch_taken_0x24fb28) {
            ctx->pc = 0x24FB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FB28u;
            // 0x24fb2c: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f7c8;
        }
    }
    ctx->pc = 0x24FB30u;
    // 0x24fb30: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x24fb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fb34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24fb34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fb38: 0x0  nop
    ctx->pc = 0x24fb38u;
    // NOP
    // 0x24fb3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24fb3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fb40: 0x0  nop
    ctx->pc = 0x24fb40u;
    // NOP
    // 0x24fb44: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x24FB44u;
    {
        const bool branch_taken_0x24fb44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FB44u;
        // 0x24fb48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb44) {
            ctx->pc = 0x24FBBCu;
            goto label_24fbbc;
        }
    }
    ctx->pc = 0x24FB4Cu;
    // 0x24fb4c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x24fb4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24fb50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fb54: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x24fb54u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fb58: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x24fb58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x24fb5c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x24fb5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x24fb60: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x24fb60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24fb64: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x24fb64u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x24fb68: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x24fb68u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x24fb6c: 0x3c0139d1  lui         $at, 0x39D1
    ctx->pc = 0x24fb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14801 << 16));
    // 0x24fb70: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x24fb70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x24fb74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24fb74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24fb78: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x24fb78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x24fb7c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x24fb7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24fb80: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x24fb80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24fb84: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x24fb84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24fb88: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x24fb88u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x24fb8c: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x24fb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x24fb90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24fb90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fb94: 0x0  nop
    ctx->pc = 0x24fb94u;
    // NOP
    // 0x24fb98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24fb98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fb9c: 0x0  nop
    ctx->pc = 0x24fb9cu;
    // NOP
    // 0x24fba0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x24FBA0u;
    {
        const bool branch_taken_0x24fba0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FBA0u;
        // 0x24fba4: 0x7fa40000  sq          $a0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fba0) {
            ctx->pc = 0x24FBBCu;
            goto label_24fbbc;
        }
    }
    ctx->pc = 0x24FBA8u;
    // 0x24fba8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24FBA8u;
    {
        const bool branch_taken_0x24fba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FBA8u;
        // 0x24fbac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fba8) {
            ctx->pc = 0x24FBBCu;
            goto label_24fbbc;
        }
    }
    ctx->pc = 0x24FBB0u;
label_24fbb0:
    // 0x24fbb0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x24fbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24fbb4: 0x2041026  xor         $v0, $s0, $a0
    ctx->pc = 0x24fbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 4));
    // 0x24fbb8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x24fbb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_24fbbc:
    // 0x24fbbc: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x24fbbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_24fbc0:
    // 0x24fbc0: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x24fbc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24fbc4: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x24fbc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x24fbc8: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x24fbc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x24fbcc: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x24fbccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24fbd0: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x24fbd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24fbd4: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x24fbd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24fbd8: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x24fbd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24fbdc: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x24fbdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24fbe0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24fbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24fbe4: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x24fbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24fbe8: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x24fbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24fbec: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x24fbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24fbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x24FBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FBF0u;
        // 0x24fbf4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FBF8u;
}
