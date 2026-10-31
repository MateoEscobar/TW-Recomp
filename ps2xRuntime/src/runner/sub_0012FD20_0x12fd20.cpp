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

// Function: sub_0012FD20
// Address: 0x12fd20 - 0x1303c8
void sub_0012FD20_0x12fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FD20_0x12fd20");
#endif

    switch (ctx->pc) {
        case 0x12fd80u: goto label_12fd80;
        case 0x12fd90u: goto label_12fd90;
        case 0x12fe0cu: goto label_12fe0c;
        case 0x12fe50u: goto label_12fe50;
        case 0x12fea4u: goto label_12fea4;
        case 0x12ff04u: goto label_12ff04;
        case 0x12ff18u: goto label_12ff18;
        case 0x12ff2cu: goto label_12ff2c;
        case 0x12ff40u: goto label_12ff40;
        case 0x12ff54u: goto label_12ff54;
        case 0x12ffd0u: goto label_12ffd0;
        case 0x130014u: goto label_130014;
        case 0x130020u: goto label_130020;
        case 0x13006cu: goto label_13006c;
        case 0x1300a4u: goto label_1300a4;
        case 0x1300e4u: goto label_1300e4;
        case 0x1300f0u: goto label_1300f0;
        case 0x13013cu: goto label_13013c;
        case 0x13016cu: goto label_13016c;
        case 0x1301b0u: goto label_1301b0;
        case 0x130284u: goto label_130284;
        case 0x130290u: goto label_130290;
        case 0x1302f8u: goto label_1302f8;
        case 0x130304u: goto label_130304;
        case 0x130350u: goto label_130350;
        case 0x130370u: goto label_130370;
        case 0x130388u: goto label_130388;
        default: break;
    }

    ctx->pc = 0x12fd20u;

    // 0x12fd20: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x12fd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x12fd24: 0x7fb101e0  sq          $s1, 0x1E0($sp)
    ctx->pc = 0x12fd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 17));
    // 0x12fd28: 0x7fb201d0  sq          $s2, 0x1D0($sp)
    ctx->pc = 0x12fd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 18));
    // 0x12fd2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12fd2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd30: 0x7fb301c0  sq          $s3, 0x1C0($sp)
    ctx->pc = 0x12fd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 19));
    // 0x12fd34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12fd34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd38: 0x7fb70180  sq          $s7, 0x180($sp)
    ctx->pc = 0x12fd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 23));
    // 0x12fd3c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12fd3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd40: 0x7fbe0170  sq          $fp, 0x170($sp)
    ctx->pc = 0x12fd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 30));
    // 0x12fd44: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x12fd44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd48: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x12fd48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x12fd4c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x12fd4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd50: 0x7fb401b0  sq          $s4, 0x1B0($sp)
    ctx->pc = 0x12fd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 20));
    // 0x12fd54: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x12fd54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x12fd58: 0x7fb501a0  sq          $s5, 0x1A0($sp)
    ctx->pc = 0x12fd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 21));
    // 0x12fd5c: 0x7fb60190  sq          $s6, 0x190($sp)
    ctx->pc = 0x12fd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 22));
    // 0x12fd60: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x12fd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x12fd64: 0xe7b60210  swc1        $f22, 0x210($sp)
    ctx->pc = 0x12fd64u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x12fd68: 0xe7b50208  swc1        $f21, 0x208($sp)
    ctx->pc = 0x12fd68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x12fd6c: 0x7fb001f0  sq          $s0, 0x1F0($sp)
    ctx->pc = 0x12fd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 16));
    // 0x12fd70: 0x8e500314  lw          $s0, 0x314($s2)
    ctx->pc = 0x12fd70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    // 0x12fd74: 0xe7ac0150  swc1        $f12, 0x150($sp)
    ctx->pc = 0x12fd74u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x12fd78: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x12FD78u;
    SET_GPR_U32(ctx, 31, 0x12FD80u);
    ctx->pc = 0x12FD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD78u;
    // 0x12fd7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x12FD78u, 0x12FD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD80u;
label_12fd80:
    // 0x12fd80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FD80u;
    {
        const bool branch_taken_0x12fd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fd80) {
            ctx->pc = 0x12FD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FD80u;
            // 0x12fd84: 0x8e460314  lw          $a2, 0x314($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FD98u;
            goto label_12fd98;
        }
    }
    ctx->pc = 0x12FD88u;
    // 0x12fd88: 0xc048d40  jal         func_123500
    ctx->pc = 0x12FD88u;
    SET_GPR_U32(ctx, 31, 0x12FD90u);
    ctx->pc = 0x12FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD88u;
    // 0x12fd8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123500u, 0x12FD88u, 0x12FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD90u;
label_12fd90:
    // 0x12fd90: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x12fd90u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12fd94: 0x8e460314  lw          $a2, 0x314($s2)
    ctx->pc = 0x12fd94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
label_12fd98:
    // 0x12fd98: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x12fd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x12fd9c: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x12fd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x12fda0: 0x7a650000  lq          $a1, 0x0($s3)
    ctx->pc = 0x12fda0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12fda4: 0x84c30092  lh          $v1, 0x92($a2)
    ctx->pc = 0x12fda4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
    // 0x12fda8: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x12fda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12fdac: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x12fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12fdb0: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x12fdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x12fdb4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x12fdb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x12fdb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12fdb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fdbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12fdc0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x12fdc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12fdc4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x12fdc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x12fdc8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12fdc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12fdcc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x12fdccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12fdd0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12fdd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12fdd4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12fdd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12fdd8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x12fdd8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12fddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12fddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fde0: 0x0  nop
    ctx->pc = 0x12fde0u;
    // NOP
    // 0x12fde4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x12fde4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x12fde8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12fde8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fdec: 0x0  nop
    ctx->pc = 0x12fdecu;
    // NOP
    // 0x12fdf0: 0x45020167  bc1fl       . + 4 + (0x167 << 2)
    ctx->pc = 0x12FDF0u;
    {
        const bool branch_taken_0x12fdf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fdf0) {
            ctx->pc = 0x12FDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FDF0u;
            // 0x12fdf4: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130390u;
            goto label_130390;
        }
    }
    ctx->pc = 0x12FDF8u;
    // 0x12fdf8: 0x92420454  lbu         $v0, 0x454($s2)
    ctx->pc = 0x12fdf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1108)));
    // 0x12fdfc: 0x54400164  bnel        $v0, $zero, . + 4 + (0x164 << 2)
    ctx->pc = 0x12FDFCu;
    {
        const bool branch_taken_0x12fdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fdfc) {
            ctx->pc = 0x12FE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FDFCu;
            // 0x12fe00: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130390u;
            goto label_130390;
        }
    }
    ctx->pc = 0x12FE04u;
    // 0x12fe04: 0xc088e68  jal         func_2239A0
    ctx->pc = 0x12FE04u;
    SET_GPR_U32(ctx, 31, 0x12FE0Cu);
    ctx->pc = 0x12FE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE04u;
    // 0x12fe08: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239A0u, 0x12FE04u, 0x12FE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE0Cu;
label_12fe0c:
    // 0x12fe0c: 0x54400160  bnel        $v0, $zero, . + 4 + (0x160 << 2)
    ctx->pc = 0x12FE0Cu;
    {
        const bool branch_taken_0x12fe0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fe0c) {
            ctx->pc = 0x12FE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FE0Cu;
            // 0x12fe10: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130390u;
            goto label_130390;
        }
    }
    ctx->pc = 0x12FE14u;
    // 0x12fe14: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x12fe14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x12fe18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12fe18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fe1c: 0x0  nop
    ctx->pc = 0x12fe1cu;
    // NOP
    // 0x12fe20: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12fe20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fe24: 0x0  nop
    ctx->pc = 0x12fe24u;
    // NOP
    // 0x12fe28: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x12FE28u;
    {
        const bool branch_taken_0x12fe28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE28u;
        // 0x12fe2c: 0xc7a00150  lwc1        $f0, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe28) {
            ctx->pc = 0x12FE58u;
            goto label_12fe58;
        }
    }
    ctx->pc = 0x12FE30u;
    // 0x12fe30: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x12FE30u;
    {
        const bool branch_taken_0x12fe30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE30u;
        // 0x12fe34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe30) {
            ctx->pc = 0x12FE5Cu;
            goto label_12fe5c;
        }
    }
    ctx->pc = 0x12FE38u;
    // 0x12fe38: 0x3405e003  ori         $a1, $zero, 0xE003
    ctx->pc = 0x12fe38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57347);
    // 0x12fe3c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x12fe3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x12fe40: 0x34a5c300  ori         $a1, $a1, 0xC300
    ctx->pc = 0x12fe40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49920);
    // 0x12fe44: 0x528b8  dsll        $a1, $a1, 2
    ctx->pc = 0x12fe44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 2);
    // 0x12fe48: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x12FE48u;
    SET_GPR_U32(ctx, 31, 0x12FE50u);
    ctx->pc = 0x12FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE48u;
    // 0x12fe4c: 0x8e440314  lw          $a0, 0x314($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x12FE48u, 0x12FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE50u;
label_12fe50:
    // 0x12fe50: 0x1040014e  beqz        $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x12FE50u;
    {
        const bool branch_taken_0x12fe50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE50u;
        // 0x12fe54: 0xc7a00150  lwc1        $f0, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe50) {
            ctx->pc = 0x13038Cu;
            goto label_13038c;
        }
    }
    ctx->pc = 0x12FE58u;
label_12fe58:
    // 0x12fe58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12fe5c:
    // 0x12fe5c: 0xa2420464  sb          $v0, 0x464($s2)
    ctx->pc = 0x12fe5cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1124), (uint8_t)GPR_U32(ctx, 2));
    // 0x12fe60: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12fe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe64: 0xa2420463  sb          $v0, 0x463($s2)
    ctx->pc = 0x12fe64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1123), (uint8_t)GPR_U32(ctx, 2));
    // 0x12fe68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12fe68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe6c: 0xa2420462  sb          $v0, 0x462($s2)
    ctx->pc = 0x12fe6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1122), (uint8_t)GPR_U32(ctx, 2));
    // 0x12fe70: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12fe70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12fe74: 0x7a420180  lq          $v0, 0x180($s2)
    ctx->pc = 0x12fe74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x12fe78: 0x27b60150  addiu       $s6, $sp, 0x150
    ctx->pc = 0x12fe78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x12fe7c: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x12fe7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12fe80: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x12fe80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe84: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x12fe84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x12fe88: 0x24080201  addiu       $t0, $zero, 0x201
    ctx->pc = 0x12fe88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x12fe8c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x12fe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x12fe90: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12fe90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fe94: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x12fe94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x12fe98: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x12fe98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x12fe9c: 0xc0d4336  jal         func_350CD8
    ctx->pc = 0x12FE9Cu;
    SET_GPR_U32(ctx, 31, 0x12FEA4u);
    ctx->pc = 0x12FEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE9Cu;
    // 0x12fea0: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x12FE9Cu, 0x12FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FEA4u;
label_12fea4:
    // 0x12fea4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x12fea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x12fea8: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x12fea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x12feac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x12feacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12feb0: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x12feb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12feb4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x12feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x12feb8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x12feb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12febc: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x12febcu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x12fec0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12fec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12fec4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12fec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12fec8: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x12fec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x12fecc: 0x24438b10  addiu       $v1, $v0, -0x74F0
    ctx->pc = 0x12feccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x12fed0: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x12fed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x12fed4: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x12fed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x12fed8: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x12fed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x12fedc: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x12fedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x12fee0: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x12fee0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x548B20u));
    // 0x12fee4: 0xb3a400b7  sdl         $a0, 0xB7($sp)
    ctx->pc = 0x12fee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fee8: 0xb7a400b0  sdr         $a0, 0xB0($sp)
    ctx->pc = 0x12fee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12feec: 0xb3a500bf  sdl         $a1, 0xBF($sp)
    ctx->pc = 0x12feecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fef0: 0xb7a500b8  sdr         $a1, 0xB8($sp)
    ctx->pc = 0x12fef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12fef4: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x12fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x12fef8: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x12fef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12fefc: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x12FEFCu;
    SET_GPR_U32(ctx, 31, 0x12FF04u);
    ctx->pc = 0x12FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FEFCu;
    // 0x12ff00: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12FEFCu, 0x12FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF04u;
label_12ff04:
    // 0x12ff04: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x12ff04u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x12ff08: 0xc7ac00b4  lwc1        $f12, 0xB4($sp)
    ctx->pc = 0x12ff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12ff0c: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x12ff0cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x12ff10: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x12FF10u;
    SET_GPR_U32(ctx, 31, 0x12FF18u);
    ctx->pc = 0x12FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FF10u;
    // 0x12ff14: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12FF10u, 0x12FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF18u;
label_12ff18:
    // 0x12ff18: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x12ff18u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x12ff1c: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x12ff1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12ff20: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x12ff20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x12ff24: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x12FF24u;
    SET_GPR_U32(ctx, 31, 0x12FF2Cu);
    ctx->pc = 0x12FF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FF24u;
    // 0x12ff28: 0xe7a00114  swc1        $f0, 0x114($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12FF24u, 0x12FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF2Cu;
label_12ff2c:
    // 0x12ff2c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x12ff2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x12ff30: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x12ff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12ff34: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x12ff34u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x12ff38: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x12FF38u;
    SET_GPR_U32(ctx, 31, 0x12FF40u);
    ctx->pc = 0x12FF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FF38u;
    // 0x12ff3c: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12FF38u, 0x12FF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF40u;
label_12ff40:
    // 0x12ff40: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x12ff40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x12ff44: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x12ff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12ff48: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x12ff48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x12ff4c: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x12FF4Cu;
    SET_GPR_U32(ctx, 31, 0x12FF54u);
    ctx->pc = 0x12FF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FF4Cu;
    // 0x12ff50: 0xe7a0011c  swc1        $f0, 0x11C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12FF4Cu, 0x12FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF54u;
label_12ff54:
    // 0x12ff54: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x12ff54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x12ff58: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x12ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12ff5c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x12ff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12ff60: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x12ff60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12ff64: 0xafa40154  sw          $a0, 0x154($sp)
    ctx->pc = 0x12ff64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 4));
    // 0x12ff68: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12ff68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff6c: 0xafa5015c  sw          $a1, 0x15C($sp)
    ctx->pc = 0x12ff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 5));
    // 0x12ff70: 0x27b10088  addiu       $s1, $sp, 0x88
    ctx->pc = 0x12ff70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x12ff74: 0xafa60158  sw          $a2, 0x158($sp)
    ctx->pc = 0x12ff74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 6));
    // 0x12ff78: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x12ff78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12ff7c: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x12ff7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x12ff80: 0x6ba20117  ldl         $v0, 0x117($sp)
    ctx->pc = 0x12ff80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12ff84: 0x6fa20110  ldr         $v0, 0x110($sp)
    ctx->pc = 0x12ff84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x12ff88: 0x6ba3011f  ldl         $v1, 0x11F($sp)
    ctx->pc = 0x12ff88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12ff8c: 0x6fa30118  ldr         $v1, 0x118($sp)
    ctx->pc = 0x12ff8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12ff90: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x12ff90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12ff94: 0xb3a200f7  sdl         $v0, 0xF7($sp)
    ctx->pc = 0x12ff94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12ff98: 0xb7a200f0  sdr         $v0, 0xF0($sp)
    ctx->pc = 0x12ff98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12ff9c: 0xb3a300ff  sdl         $v1, 0xFF($sp)
    ctx->pc = 0x12ff9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12ffa0: 0xb7a300f8  sdr         $v1, 0xF8($sp)
    ctx->pc = 0x12ffa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12ffa4: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x12ffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x12ffa8: 0x6ba600f7  ldl         $a2, 0xF7($sp)
    ctx->pc = 0x12ffa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x12ffac: 0x6fa600f0  ldr         $a2, 0xF0($sp)
    ctx->pc = 0x12ffacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x12ffb0: 0x6ba200ff  ldl         $v0, 0xFF($sp)
    ctx->pc = 0x12ffb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12ffb4: 0x6fa200f8  ldr         $v0, 0xF8($sp)
    ctx->pc = 0x12ffb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x12ffb8: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x12ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12ffbc: 0xb3a600d7  sdl         $a2, 0xD7($sp)
    ctx->pc = 0x12ffbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12ffc0: 0xb7a600d0  sdr         $a2, 0xD0($sp)
    ctx->pc = 0x12ffc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12ffc4: 0xb3a200df  sdl         $v0, 0xDF($sp)
    ctx->pc = 0x12ffc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12ffc8: 0xb7a200d8  sdr         $v0, 0xD8($sp)
    ctx->pc = 0x12ffc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12ffcc: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x12ffccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_12ffd0:
    // 0x12ffd0: 0xc6b50000  lwc1        $f21, 0x0($s5)
    ctx->pc = 0x12ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12ffd4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x12ffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x12ffd8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x12ffd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x12ffdc: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x12ffdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x12ffe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ffe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ffe4: 0x24a31740  addiu       $v1, $a1, 0x1740
    ctx->pc = 0x12ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
    // 0x12ffe8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12ffe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12ffec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12ffecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fff0: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x12fff0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x12fff4: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x12fff4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x12fff8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x12fff8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511740u));
    // 0x12fffc: 0xc6160000  lwc1        $f22, 0x0($s0)
    ctx->pc = 0x12fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x130000: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x130000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x130004: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x130004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x130008: 0x4601ad42  mul.s       $f21, $f21, $f1
    ctx->pc = 0x130008u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x13000c: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x13000Cu;
    SET_GPR_U32(ctx, 31, 0x130014u);
    ctx->pc = 0x130010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13000Cu;
    // 0x130010: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x13000Cu, 0x130014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130014u;
label_130014:
    // 0x130014: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x130014u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x130018: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x130018u;
    SET_GPR_U32(ctx, 31, 0x130020u);
    ctx->pc = 0x13001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130018u;
    // 0x13001c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x130018u, 0x130020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130020u;
label_130020:
    // 0x130020: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x130020u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x130024: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x130024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x130028: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x130028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x13002c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x13002cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x130030: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x130030u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x130034: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x130034u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x130038: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x130038u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13003c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13003cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x130040: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x130040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x130044: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x130044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x130048: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x130048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13004c: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x13004cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x130050: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x130050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130054: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x130054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130058: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x130058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13005c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x13005cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x130060: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x130060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x130064: 0xc136b30  jal         func_4DACC0
    ctx->pc = 0x130064u;
    SET_GPR_U32(ctx, 31, 0x13006Cu);
    ctx->pc = 0x130068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130064u;
    // 0x130068: 0xe7a200a8  swc1        $f2, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x130064u, 0x13006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13006Cu;
label_13006c:
    // 0x13006c: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x13006cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130070: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x130070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130074: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x130074u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x130078: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x130078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13007c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x13007cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x130080: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x130080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x130084: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x130084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x130088: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x130088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13008c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x13008cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x130090: 0x24080201  addiu       $t0, $zero, 0x201
    ctx->pc = 0x130090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x130094: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x130094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x130098: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x130098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13009c: 0xc0d4336  jal         func_350CD8
    ctx->pc = 0x13009Cu;
    SET_GPR_U32(ctx, 31, 0x1300A4u);
    ctx->pc = 0x1300A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13009Cu;
    // 0x1300a0: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x13009Cu, 0x1300A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300A4u;
label_1300a4:
    // 0x1300a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1300a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1300a8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1300a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1300ac: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x1300acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1300b0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1300b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1300b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1300b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1300b8: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1300b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1300bc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1300bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1300c0: 0x24641770  addiu       $a0, $v1, 0x1770
    ctx->pc = 0x1300c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6000));
    // 0x1300c4: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x1300c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1300c8: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1300c8u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1300cc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1300ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1300d0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1300d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1300d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1300d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1300d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1300d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1300dc: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x1300DCu;
    SET_GPR_U32(ctx, 31, 0x1300E4u);
    ctx->pc = 0x1300E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300DCu;
    // 0x1300e0: 0x7fa30110  sq          $v1, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1300DCu, 0x1300E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300E4u;
label_1300e4:
    // 0x1300e4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1300e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1300e8: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x1300E8u;
    SET_GPR_U32(ctx, 31, 0x1300F0u);
    ctx->pc = 0x1300ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300E8u;
    // 0x1300ec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1300E8u, 0x1300F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300F0u;
label_1300f0:
    // 0x1300f0: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x1300f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1300f4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1300f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1300f8: 0x4405a000  mfc1        $a1, $f20
    ctx->pc = 0x1300f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1300fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1300fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130100: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x130100u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x130104: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x130104u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x130108: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x130108u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13010c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13010cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x130110: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x130110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x130114: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x130114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x130118: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x130118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13011c: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x13011cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x130120: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x130120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130124: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x130124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130128: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x130128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13012c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x13012cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x130130: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x130130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x130134: 0xc136b30  jal         func_4DACC0
    ctx->pc = 0x130134u;
    SET_GPR_U32(ctx, 31, 0x13013Cu);
    ctx->pc = 0x130138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130134u;
    // 0x130138: 0xe7a200a8  swc1        $f2, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x130134u, 0x13013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13013Cu;
label_13013c:
    // 0x13013c: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x13013cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x130140: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x130140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130144: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x130144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130148: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x130148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13014c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13014cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x130150: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x130150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x130154: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x130154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x130158: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x130158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13015c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x13015cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x130160: 0x24080201  addiu       $t0, $zero, 0x201
    ctx->pc = 0x130160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x130164: 0xc0d4336  jal         func_350CD8
    ctx->pc = 0x130164u;
    SET_GPR_U32(ctx, 31, 0x13016Cu);
    ctx->pc = 0x130168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130164u;
    // 0x130168: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x130164u, 0x13016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13016Cu;
label_13016c:
    // 0x13016c: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x13016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130170: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x130170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x130174: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x130174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130178: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x130178u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x13017c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x13017cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x130180: 0x1440ff93  bnez        $v0, . + 4 + (-0x6D << 2)
    ctx->pc = 0x130180u;
    {
        const bool branch_taken_0x130180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130180u;
        // 0x130184: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130180) {
            ctx->pc = 0x12FFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ffd0;
        }
    }
    ctx->pc = 0x130188u;
    // 0x130188: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x130188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x13018c: 0x8fa5015c  lw          $a1, 0x15C($sp)
    ctx->pc = 0x13018cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x130190: 0xc4428b24  lwc1        $f2, -0x74DC($v0)
    ctx->pc = 0x130190u;
    { uint32_t bits = FAST_READ32(0x548B24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130194: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x130194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130198: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x130198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x13019c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x13019cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1301a0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1301a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1301a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1301a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1301a8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1301a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1301ac: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1301acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1301b0:
    // 0x1301b0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1301b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1301b4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1301b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1301b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1301b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1301bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1301bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1301c0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1301c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1301c4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1301c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1301c8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1301c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1301cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1301ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1301d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1301d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1301d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1301d8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1301d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1301dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1301dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1301e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1301e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1301e4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1301e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1301e8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1301e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1301ec: 0x0  nop
    ctx->pc = 0x1301ecu;
    // NOP
    // 0x1301f0: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1301F0u;
    {
        const bool branch_taken_0x1301f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1301f0) {
            ctx->pc = 0x1301F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1301F0u;
            // 0x1301f4: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x130214u;
            goto label_130214;
        }
    }
    ctx->pc = 0x1301F8u;
    // 0x1301f8: 0x54870008  bnel        $a0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1301F8u;
    {
        const bool branch_taken_0x1301f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x1301f8) {
            ctx->pc = 0x1301FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1301F8u;
            // 0x1301fc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13021Cu;
            goto label_13021c;
        }
    }
    ctx->pc = 0x130200u;
    // 0x130200: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x130200u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130204: 0x0  nop
    ctx->pc = 0x130204u;
    // NOP
    // 0x130208: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x130208u;
    {
        const bool branch_taken_0x130208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130208) {
            ctx->pc = 0x13020Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130208u;
            // 0x13020c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13021Cu;
            goto label_13021c;
        }
    }
    ctx->pc = 0x130210u;
    // 0x130210: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x130210u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_130214:
    // 0x130214: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x130214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130218: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x130218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_13021c:
    // 0x13021c: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x13021cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x130220: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x130220u;
    {
        const bool branch_taken_0x130220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130220u;
        // 0x130224: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130220) {
            ctx->pc = 0x1301B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1301b0;
        }
    }
    ctx->pc = 0x130228u;
    // 0x130228: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x130228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13022c: 0x10c2004c  beq         $a2, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x13022Cu;
    {
        const bool branch_taken_0x13022c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x130230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13022Cu;
        // 0x130230: 0x28c20005  slti        $v0, $a2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13022c) {
            ctx->pc = 0x130360u;
            goto label_130360;
        }
    }
    ctx->pc = 0x130234u;
    // 0x130234: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x130234u;
    {
        const bool branch_taken_0x130234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130234u;
        // 0x130238: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130234) {
            ctx->pc = 0x1302B0u;
            goto label_1302b0;
        }
    }
    ctx->pc = 0x13023Cu;
    // 0x13023c: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x13023cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x130240: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x130240u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x130244: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x130244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x130248: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x130248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x13024c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13024cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x130250: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x130250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x130254: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x130254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x130258: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x130258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13025c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130260: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x130260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x130264: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x130264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130268: 0x24c41740  addiu       $a0, $a2, 0x1740
    ctx->pc = 0x130268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 5952));
    // 0x13026c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x13026cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511740u));
    // 0x130270: 0x46140d02  mul.s       $f20, $f1, $f20
    ctx->pc = 0x130270u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x130274: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x130274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x130278: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x130278u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x13027c: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x13027Cu;
    SET_GPR_U32(ctx, 31, 0x130284u);
    ctx->pc = 0x130280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13027Cu;
    // 0x130280: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x13027Cu, 0x130284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130284u;
label_130284:
    // 0x130284: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x130284u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x130288: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x130288u;
    SET_GPR_U32(ctx, 31, 0x130290u);
    ctx->pc = 0x13028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130288u;
    // 0x13028c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x130288u, 0x130290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130290u;
label_130290:
    // 0x130290: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x130290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x130294: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x130294u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x130298: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x130298u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13029c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x13029cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1302a0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1302a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1302a4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1302a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1302a8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1302A8u;
    {
        const bool branch_taken_0x1302a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1302ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302A8u;
        // 0x1302ac: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1302a8) {
            ctx->pc = 0x130320u;
            goto label_130320;
        }
    }
    ctx->pc = 0x1302B0u;
label_1302b0:
    // 0x1302b0: 0x24c2fffa  addiu       $v0, $a2, -0x6
    ctx->pc = 0x1302b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967290));
    // 0x1302b4: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x1302b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1302b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1302b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1302bc: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1302bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1302c0: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x1302c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x1302c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1302c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1302c8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1302c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1302cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1302ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1302d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1302d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1302d4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1302d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1302d8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1302d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1302dc: 0x24c41770  addiu       $a0, $a2, 0x1770
    ctx->pc = 0x1302dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 6000));
    // 0x1302e0: 0x46140d02  mul.s       $f20, $f1, $f20
    ctx->pc = 0x1302e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1302e4: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x1302e4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511770u));
    // 0x1302e8: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x1302e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x1302ec: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1302ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1302f0: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x1302F0u;
    SET_GPR_U32(ctx, 31, 0x1302F8u);
    ctx->pc = 0x1302F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1302F0u;
    // 0x1302f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1302F0u, 0x1302F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302F8u;
label_1302f8:
    // 0x1302f8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1302f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1302fc: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x1302FCu;
    SET_GPR_U32(ctx, 31, 0x130304u);
    ctx->pc = 0x130300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1302FCu;
    // 0x130300: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1302FCu, 0x130304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130304u;
label_130304:
    // 0x130304: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x130304u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x130308: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x130308u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13030c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13030cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x130310: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x130310u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x130314: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x130314u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x130318: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x130318u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13031c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x13031cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_130320:
    // 0x130320: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x130320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x130324: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x130324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x130328: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x130328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13032c: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x13032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130330: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x130330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130334: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x130334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x130338: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x130338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x13033c: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x13033cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x130340: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x130340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130344: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x130344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x130348: 0xc136b30  jal         func_4DACC0
    ctx->pc = 0x130348u;
    SET_GPR_U32(ctx, 31, 0x130350u);
    ctx->pc = 0x13034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130348u;
    // 0x13034c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x130348u, 0x130350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130350u;
label_130350:
    // 0x130350: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x130350u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x130354: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x130354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x130358: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x130358u;
    {
        const bool branch_taken_0x130358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130358u;
        // 0x13035c: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130358) {
            ctx->pc = 0x130368u;
            goto label_130368;
        }
    }
    ctx->pc = 0x130360u;
label_130360:
    // 0x130360: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x130360u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130364: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x130364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_130368:
    // 0x130368: 0xc0cd766  jal         func_335D98
    ctx->pc = 0x130368u;
    SET_GPR_U32(ctx, 31, 0x130370u);
    ctx->pc = 0x13036Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130368u;
    // 0x13036c: 0x8fa40158  lw          $a0, 0x158($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x130368u, 0x130370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130370u;
label_130370:
    // 0x130370: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x130370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x130374: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x130374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x130378: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x130378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13037c: 0xe640043c  swc1        $f0, 0x43C($s2)
    ctx->pc = 0x13037cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1084), bits); }
    // 0x130380: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x130380u;
    SET_GPR_U32(ctx, 31, 0x130388u);
    ctx->pc = 0x130384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130380u;
    // 0x130384: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x130380u, 0x130388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130388u;
label_130388:
    // 0x130388: 0xe640043c  swc1        $f0, 0x43C($s2)
    ctx->pc = 0x130388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1084), bits); }
label_13038c:
    // 0x13038c: 0x7bb001f0  lq          $s0, 0x1F0($sp)
    ctx->pc = 0x13038cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_130390:
    // 0x130390: 0x7bb101e0  lq          $s1, 0x1E0($sp)
    ctx->pc = 0x130390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x130394: 0x7bb201d0  lq          $s2, 0x1D0($sp)
    ctx->pc = 0x130394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x130398: 0x7bb301c0  lq          $s3, 0x1C0($sp)
    ctx->pc = 0x130398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x13039c: 0x7bb401b0  lq          $s4, 0x1B0($sp)
    ctx->pc = 0x13039cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1303a0: 0x7bb501a0  lq          $s5, 0x1A0($sp)
    ctx->pc = 0x1303a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1303a4: 0x7bb60190  lq          $s6, 0x190($sp)
    ctx->pc = 0x1303a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1303a8: 0x7bb70180  lq          $s7, 0x180($sp)
    ctx->pc = 0x1303a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1303ac: 0x7bbe0170  lq          $fp, 0x170($sp)
    ctx->pc = 0x1303acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1303b0: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x1303b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1303b4: 0xc7b60210  lwc1        $f22, 0x210($sp)
    ctx->pc = 0x1303b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1303b8: 0xc7b50208  lwc1        $f21, 0x208($sp)
    ctx->pc = 0x1303b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1303bc: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x1303bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1303c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1303C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1303C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303C0u;
        // 0x1303c4: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1303C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1303C8u;
}
