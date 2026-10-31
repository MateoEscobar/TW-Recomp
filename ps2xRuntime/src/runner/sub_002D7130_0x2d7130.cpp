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

// Function: sub_002D7130
// Address: 0x2d7130 - 0x2d73b8
void sub_002D7130_0x2d7130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7130_0x2d7130");
#endif

    switch (ctx->pc) {
        case 0x2d7198u: goto label_2d7198;
        case 0x2d71a8u: goto label_2d71a8;
        case 0x2d71c8u: goto label_2d71c8;
        case 0x2d71f0u: goto label_2d71f0;
        case 0x2d71fcu: goto label_2d71fc;
        case 0x2d72e4u: goto label_2d72e4;
        case 0x2d7308u: goto label_2d7308;
        case 0x2d7314u: goto label_2d7314;
        case 0x2d732cu: goto label_2d732c;
        case 0x2d7350u: goto label_2d7350;
        case 0x2d736cu: goto label_2d736c;
        default: break;
    }

    ctx->pc = 0x2d7130u;

    // 0x2d7130: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2d7130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2d7134: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d7134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7138: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x2d7138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x2d713c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x2d713cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x2d7140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7144: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x2d7144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x2d7148: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2d7148u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d714c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x2d714cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x2d7150: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x2d7150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x2d7154: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x2d7154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x2d7158: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x2d7158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x2d715c: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x2d715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x2d7160: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d7160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d7164: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x2d7164u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2d7168: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x2d7168u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2d716c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2d716cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7170: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2d7170u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7174: 0x0  nop
    ctx->pc = 0x2d7174u;
    // NOP
    // 0x2d7178: 0x45010081  bc1t        . + 4 + (0x81 << 2)
    ctx->pc = 0x2D7178u;
    {
        const bool branch_taken_0x2d7178 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7178u;
        // 0x2d717c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7178) {
            ctx->pc = 0x2D7380u;
            goto label_2d7380;
        }
    }
    ctx->pc = 0x2D7180u;
    // 0x2d7180: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d7180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7184: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2d7184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d7188: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x2d7188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d718c: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x2d718cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d7190: 0xc0cd790  jal         func_335E40
    ctx->pc = 0x2D7190u;
    SET_GPR_U32(ctx, 31, 0x2D7198u);
    ctx->pc = 0x2D7194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7190u;
    // 0x2d7194: 0x8c560000  lw          $s6, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x2D7190u, 0x2D7198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7198u;
label_2d7198:
    // 0x2d7198: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x2d7198u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
    // 0x2d719c: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x2d719cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x2d71a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D71A0u;
    {
        const bool branch_taken_0x2d71a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D71A0u;
        // 0x2d71a4: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d71a0) {
            ctx->pc = 0x2D71B0u;
            goto label_2d71b0;
        }
    }
    ctx->pc = 0x2D71A8u;
label_2d71a8:
    // 0x2d71a8: 0x6600051  bltz        $s3, . + 4 + (0x51 << 2)
    ctx->pc = 0x2D71A8u;
    {
        const bool branch_taken_0x2d71a8 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x2d71a8) {
            ctx->pc = 0x2D72F0u;
            goto label_2d72f0;
        }
    }
    ctx->pc = 0x2D71B0u;
label_2d71b0:
    // 0x2d71b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d71b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d71b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d71b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d71b8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d71b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2d71bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d71bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d71c0: 0xc0cd508  jal         func_335420
    ctx->pc = 0x2D71C0u;
    SET_GPR_U32(ctx, 31, 0x2D71C8u);
    ctx->pc = 0x2D71C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D71C0u;
    // 0x2d71c4: 0x26a4b8a0  addiu       $a0, $s5, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2D71C0u, 0x2D71C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D71C8u;
label_2d71c8:
    // 0x2d71c8: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2d71c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d71cc: 0x26831740  addiu       $v1, $s4, 0x1740
    ctx->pc = 0x2d71ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 5952));
    // 0x2d71d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d71d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d71d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d71d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d71d8: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2d71d8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d71dc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2d71dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d71e0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2d71e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2d71e4: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x2d71e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2d71e8: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x2D71E8u;
    SET_GPR_U32(ctx, 31, 0x2D71F0u);
    ctx->pc = 0x2D71ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D71E8u;
    // 0x2d71ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2D71E8u, 0x2D71F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D71F0u;
label_2d71f0:
    // 0x2d71f0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2d71f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2d71f4: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x2D71F4u;
    SET_GPR_U32(ctx, 31, 0x2D71FCu);
    ctx->pc = 0x2D71F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D71F4u;
    // 0x2d71f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2D71F4u, 0x2D71FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D71FCu;
label_2d71fc:
    // 0x2d71fc: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2d71fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7200: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x2d7200u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d7204: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d7204u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d7208: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d7208u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d720c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d720cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d7210: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2d7210u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d7214: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2d7214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2d7218: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2d7218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2d721c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2d721cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2d7220: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2d7220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7224: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2d7224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7228: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2d7228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d722c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2d722cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d7230: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2d7230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d7234: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2d7234u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d7238: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2d7238u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d723c: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x2d723cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7240: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x2d7240u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2d7244: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d7244u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d7248: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2d7248u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d724c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2d724cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2d7250: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2d7250u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d7254: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2d7254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d7258: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2d7258u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d725c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2d725cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d7260: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2d7260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d7264: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2d7264u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d7268: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2d7268u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d726c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2d726cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d7270: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2d7270u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2d7274: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2d7274u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d7278: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2d7278u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d727c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2d727cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d7280: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x2d7280u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2d7284: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2d7284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d7288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d728c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2d728cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2d7290: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2d7290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d7294: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x2d7294u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2d7298: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d7298u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d729c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d729cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d72a0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2d72a0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d72a4: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x2d72a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d72a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d72a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d72ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d72acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d72b0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d72b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d72b4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d72b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d72b8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2d72b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2d72bc: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x2d72bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x2d72c0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2d72c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x2d72c4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2d72c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2d72c8: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x2d72c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x2d72cc: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x2d72ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x2d72d0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2d72d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2d72d4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2d72d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x2d72d8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2d72d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2d72dc: 0xc0941c2  jal         func_250708
    ctx->pc = 0x2D72DCu;
    SET_GPR_U32(ctx, 31, 0x2D72E4u);
    ctx->pc = 0x2D72E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D72DCu;
    // 0x2d72e0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x2D72DCu, 0x2D72E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D72E4u;
label_2d72e4:
    // 0x2d72e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d72e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72e8: 0x1220ffaf  beqz        $s1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x2D72E8u;
    {
        const bool branch_taken_0x2d72e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d72e8) {
            ctx->pc = 0x2D71A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d71a8;
        }
    }
    ctx->pc = 0x2D72F0u;
label_2d72f0:
    // 0x2d72f0: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D72F0u;
    {
        const bool branch_taken_0x2d72f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D72F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D72F0u;
        // 0x2d72f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d72f0) {
            ctx->pc = 0x2D7380u;
            goto label_2d7380;
        }
    }
    ctx->pc = 0x2D72F8u;
    // 0x2d72f8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2d72f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2d72fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d72fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d7300: 0xc0d3e54  jal         func_34F950
    ctx->pc = 0x2D7300u;
    SET_GPR_U32(ctx, 31, 0x2D7308u);
    ctx->pc = 0x2D7304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7300u;
    // 0x2d7304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F950u, 0x2D7300u, 0x2D7308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7308u;
label_2d7308:
    // 0x2d7308: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d7308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d730c: 0xc0a3fce  jal         func_28FF38
    ctx->pc = 0x2D730Cu;
    SET_GPR_U32(ctx, 31, 0x2D7314u);
    ctx->pc = 0x2D7310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D730Cu;
    // 0x2d7310: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x2D730Cu, 0x2D7314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7314u;
label_2d7314:
    // 0x2d7314: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d7314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d731c: 0x16620018  bne         $s3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D731Cu;
    {
        const bool branch_taken_0x2d731c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D731Cu;
        // 0x2d7320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d731c) {
            ctx->pc = 0x2D7380u;
            goto label_2d7380;
        }
    }
    ctx->pc = 0x2D7324u;
    // 0x2d7324: 0xc092414  jal         func_249050
    ctx->pc = 0x2D7324u;
    SET_GPR_U32(ctx, 31, 0x2D732Cu);
    ctx->pc = 0x2D7328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7324u;
    // 0x2d7328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249050u, 0x2D7324u, 0x2D732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D732Cu;
label_2d732c:
    // 0x2d732c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D732Cu;
    {
        const bool branch_taken_0x2d732c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D732Cu;
        // 0x2d7330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d732c) {
            ctx->pc = 0x2D7380u;
            goto label_2d7380;
        }
    }
    ctx->pc = 0x2D7334u;
    // 0x2d7334: 0x86d00092  lh          $s0, 0x92($s6)
    ctx->pc = 0x2d7334u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
    // 0x2d7338: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2d7338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2d733c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2d733cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2d7340: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d7340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7344: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2d7344u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2d7348: 0xc091e56  jal         func_247958
    ctx->pc = 0x2D7348u;
    SET_GPR_U32(ctx, 31, 0x2D7350u);
    ctx->pc = 0x2D734Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7348u;
    // 0x2d734c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247958u, 0x2D7348u, 0x2D7350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7350u;
label_2d7350:
    // 0x2d7350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7354: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d7354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7358: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d7358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d735c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d735cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7360: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d7360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7364: 0xc09381e  jal         func_24E078
    ctx->pc = 0x2D7364u;
    SET_GPR_U32(ctx, 31, 0x2D736Cu);
    ctx->pc = 0x2D7368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7364u;
    // 0x2d7368: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2D7364u, 0x2D736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D736Cu;
label_2d736c:
    // 0x2d736c: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D736Cu;
    {
        const bool branch_taken_0x2d736c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2D7370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D736Cu;
        // 0x2d7370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d736c) {
            ctx->pc = 0x2D7380u;
            goto label_2d7380;
        }
    }
    ctx->pc = 0x2D7374u;
    // 0x2d7374: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2d7374u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d737c: 0x7ee30000  sq          $v1, 0x0($s7)
    ctx->pc = 0x2d737cu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 3));
label_2d7380:
    // 0x2d7380: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x2d7380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d7384: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x2d7384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d7388: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x2d7388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d738c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x2d738cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d7390: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x2d7390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d7394: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x2d7394u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d7398: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x2d7398u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d739c: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x2d739cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d73a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d73a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d73a4: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x2d73a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d73a8: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x2d73a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d73ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2D73ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D73B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D73ACu;
        // 0x2d73b0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D73ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D73B4u;
    // 0x2d73b4: 0x0  nop
    ctx->pc = 0x2d73b4u;
    // NOP
    ctx->pc = 0x2d73b8u;
}
