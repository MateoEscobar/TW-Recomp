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

// Function: sub_00345670
// Address: 0x345670 - 0x345910
void sub_00345670_0x345670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345670_0x345670");
#endif

    switch (ctx->pc) {
        case 0x345728u: goto label_345728;
        case 0x345760u: goto label_345760;
        case 0x3457b0u: goto label_3457b0;
        default: break;
    }

    ctx->pc = 0x345670u;

    // 0x345670: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x345670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x345674: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x345674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x345678: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x345678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34567c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x34567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x345680: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345684: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x345684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x345688: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x345688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34568c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x34568cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x345690: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x345690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x345694: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x345694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x345698: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x345698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34569c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x34569cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x3456a0: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x3456a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3456a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3456a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3456a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3456a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3456ac: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x3456acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3456b0: 0xc6240040  lwc1        $f4, 0x40($s1)
    ctx->pc = 0x3456b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3456b4: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x3456b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3456b8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3456b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3456bc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3456bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x3456c0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3456c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3456c4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x3456c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3456c8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x3456c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3456cc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3456ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3456d0: 0xc6630040  lwc1        $f3, 0x40($s3)
    ctx->pc = 0x3456d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3456d4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3456d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3456d8: 0x7a680050  lq          $t0, 0x50($s3)
    ctx->pc = 0x3456d8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x3456dc: 0x7a870000  lq          $a3, 0x0($s4)
    ctx->pc = 0x3456dcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3456e0: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x3456e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x3456e4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x3456e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3456e8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3456e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3456ec: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3456ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3456f0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3456f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3456f4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3456f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3456f8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3456f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3456fc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3456fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x345700: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x345700u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x345704: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x345704u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x345708: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x345708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x34570c: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x34570cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x345710: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x345710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x345714: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x345714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x345718: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x345718u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x34571c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x34571cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x345720: 0xc0d2698  jal         func_349A60
    ctx->pc = 0x345720u;
    SET_GPR_U32(ctx, 31, 0x345728u);
    ctx->pc = 0x345724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345720u;
    // 0x345724: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349A60u, 0x345720u, 0x345728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345728u;
label_345728:
    // 0x345728: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x345728u;
    {
        const bool branch_taken_0x345728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345728u;
        // 0x34572c: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345728) {
            ctx->pc = 0x3458E8u;
            goto label_3458e8;
        }
    }
    ctx->pc = 0x345730u;
    // 0x345730: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x345730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x345734: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x345734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x345738: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x345738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x34573c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34573cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x345740: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x345740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345744: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x345744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x345748: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x345748u;
    {
        const bool branch_taken_0x345748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345748u;
        // 0x34574c: 0x8fa50060  lw          $a1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345748) {
            ctx->pc = 0x3457F4u;
            goto label_3457f4;
        }
    }
    ctx->pc = 0x345750u;
    // 0x345750: 0x27a80064  addiu       $t0, $sp, 0x64
    ctx->pc = 0x345750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x345754: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x345754u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x345758: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x345758u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34575c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x34575cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_345760:
    // 0x345760: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x345760u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x345764: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x345764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x345768: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x345768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34576c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34576cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345770: 0x0  nop
    ctx->pc = 0x345770u;
    // NOP
    // 0x345774: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x345774u;
    {
        const bool branch_taken_0x345774 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x345778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345774u;
        // 0x345778: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345774) {
            ctx->pc = 0x345790u;
            goto label_345790;
        }
    }
    ctx->pc = 0x34577Cu;
    // 0x34577c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34577cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345780: 0x0  nop
    ctx->pc = 0x345780u;
    // NOP
    // 0x345784: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x345784u;
    {
        const bool branch_taken_0x345784 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x345788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345784u;
        // 0x345788: 0x2466ffff  addiu       $a2, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345784) {
            ctx->pc = 0x3457E8u;
            goto label_3457e8;
        }
    }
    ctx->pc = 0x34578Cu;
    // 0x34578c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x34578cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_345790:
    // 0x345790: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x345790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x345794: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x345794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x345798: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x345798u;
    {
        const bool branch_taken_0x345798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345798u;
        // 0x34579c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345798) {
            ctx->pc = 0x3457DCu;
            goto label_3457dc;
        }
    }
    ctx->pc = 0x3457A0u;
    // 0x3457a0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3457a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3457a4: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x3457a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x3457a8: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x3457a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3457ac: 0x0  nop
    ctx->pc = 0x3457acu;
    // NOP
label_3457b0:
    // 0x3457b0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3457b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3457b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3457b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3457b8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3457b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3457bc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3457bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3457c0: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x3457c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3457c4: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x3457c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x3457c8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x3457c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3457cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3457ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3457d0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3457d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3457d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3457D4u;
    {
        const bool branch_taken_0x3457d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3457D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457D4u;
        // 0x3457d8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3457d4) {
            ctx->pc = 0x3457B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3457b0;
        }
    }
    ctx->pc = 0x3457DCu;
label_3457dc:
    // 0x3457dc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x3457dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3457e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3457e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3457e4: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x3457e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_3457e8:
    // 0x3457e8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3457e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3457ec: 0x1467ffdc  bne         $v1, $a3, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3457ECu;
    {
        const bool branch_taken_0x3457ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x3457F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457ECu;
        // 0x3457f0: 0x8fa50060  lw          $a1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3457ec) {
            ctx->pc = 0x345760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345760;
        }
    }
    ctx->pc = 0x3457F4u;
label_3457f4:
    // 0x3457f4: 0x10a0003c  beqz        $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x3457F4u;
    {
        const bool branch_taken_0x3457f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3457F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457F4u;
        // 0x3457f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3457f4) {
            ctx->pc = 0x3458E8u;
            goto label_3458e8;
        }
    }
    ctx->pc = 0x3457FCu;
    // 0x3457fc: 0x7a230050  lq          $v1, 0x50($s1)
    ctx->pc = 0x3457fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x345800: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x345800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345804: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x345804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x345808: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x345808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34580c: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x34580cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x345810: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x345810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x345814: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x345814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345818: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x345818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34581c: 0x7a650050  lq          $a1, 0x50($s3)
    ctx->pc = 0x34581cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x345820: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x345820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x345824: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x345824u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345828: 0xe6020080  swc1        $f2, 0x80($s0)
    ctx->pc = 0x345828u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x34582c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x34582cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x345830: 0x7a840000  lq          $a0, 0x0($s4)
    ctx->pc = 0x345830u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x345834: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x345834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x345838: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x345838u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34583c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34583cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x345840: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x345840u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x345844: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x345844u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x345848: 0x7e040090  sq          $a0, 0x90($s0)
    ctx->pc = 0x345848u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 4));
    // 0x34584c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x34584cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x345850: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x345850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345854: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x345854u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x345858: 0x7e060090  sq          $a2, 0x90($s0)
    ctx->pc = 0x345858u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 6));
    // 0x34585c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34585cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x345860: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x345860u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x345864: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x345864u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x345868: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x345868u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34586c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34586cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x345870: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x345870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x345874: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x345874u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x345878: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x345878u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34587c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x34587cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x345880: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x345880u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x345884: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x345884u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x345888: 0x4a0003bf  vwaitq
    ctx->pc = 0x345888u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x34588c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x34588cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x345890: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x345890u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x345894: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x345894u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x345898: 0x7a640050  lq          $a0, 0x50($s3)
    ctx->pc = 0x345898u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x34589c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x34589cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x3458a0: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x3458a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x3458a4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3458a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3458a8: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x3458a8u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3458ac: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x3458acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
    // 0x3458b0: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3458b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3458b4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3458b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3458b8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3458b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3458bc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3458bcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3458c0: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x3458c0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3458c4: 0x7fa600a0  sq          $a2, 0xA0($sp)
    ctx->pc = 0x3458c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 6));
    // 0x3458c8: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3458c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x3458cc: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x3458ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x3458d0: 0x7e070010  sq          $a3, 0x10($s0)
    ctx->pc = 0x3458d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 7));
    // 0x3458d4: 0x7e040090  sq          $a0, 0x90($s0)
    ctx->pc = 0x3458d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 4));
    // 0x3458d8: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x3458d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
    // 0x3458dc: 0x7e050050  sq          $a1, 0x50($s0)
    ctx->pc = 0x3458dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 5));
    // 0x3458e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3458E0u;
    {
        const bool branch_taken_0x3458e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3458E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3458E0u;
        // 0x3458e4: 0x7fa700a0  sq          $a3, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3458e0) {
            ctx->pc = 0x3458ECu;
            goto label_3458ec;
        }
    }
    ctx->pc = 0x3458E8u;
label_3458e8:
    // 0x3458e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3458e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3458ec:
    // 0x3458ec: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x3458ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3458f0: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x3458f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3458f4: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x3458f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3458f8: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x3458f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3458fc: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x3458fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x345900: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x345900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x345904: 0x3e00008  jr          $ra
    ctx->pc = 0x345904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345904u;
        // 0x345908: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34590Cu;
    // 0x34590c: 0x0  nop
    ctx->pc = 0x34590cu;
    // NOP
    ctx->pc = 0x345910u;
}
