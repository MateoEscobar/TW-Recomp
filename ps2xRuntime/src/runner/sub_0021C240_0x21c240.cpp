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

// Function: sub_0021C240
// Address: 0x21c240 - 0x21c418
void sub_0021C240_0x21c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C240_0x21c240");
#endif

    switch (ctx->pc) {
        case 0x21c240u: goto label_21c240;
        case 0x21c244u: goto label_21c244;
        case 0x21c248u: goto label_21c248;
        case 0x21c24cu: goto label_21c24c;
        case 0x21c250u: goto label_21c250;
        case 0x21c254u: goto label_21c254;
        case 0x21c258u: goto label_21c258;
        case 0x21c25cu: goto label_21c25c;
        case 0x21c260u: goto label_21c260;
        case 0x21c264u: goto label_21c264;
        case 0x21c268u: goto label_21c268;
        case 0x21c26cu: goto label_21c26c;
        case 0x21c270u: goto label_21c270;
        case 0x21c274u: goto label_21c274;
        case 0x21c278u: goto label_21c278;
        case 0x21c27cu: goto label_21c27c;
        case 0x21c280u: goto label_21c280;
        case 0x21c284u: goto label_21c284;
        case 0x21c288u: goto label_21c288;
        case 0x21c28cu: goto label_21c28c;
        case 0x21c290u: goto label_21c290;
        case 0x21c294u: goto label_21c294;
        case 0x21c298u: goto label_21c298;
        case 0x21c29cu: goto label_21c29c;
        case 0x21c2a0u: goto label_21c2a0;
        case 0x21c2a4u: goto label_21c2a4;
        case 0x21c2a8u: goto label_21c2a8;
        case 0x21c2acu: goto label_21c2ac;
        case 0x21c2b0u: goto label_21c2b0;
        case 0x21c2b4u: goto label_21c2b4;
        case 0x21c2b8u: goto label_21c2b8;
        case 0x21c2bcu: goto label_21c2bc;
        case 0x21c2c0u: goto label_21c2c0;
        case 0x21c2c4u: goto label_21c2c4;
        case 0x21c2c8u: goto label_21c2c8;
        case 0x21c2ccu: goto label_21c2cc;
        case 0x21c2d0u: goto label_21c2d0;
        case 0x21c2d4u: goto label_21c2d4;
        case 0x21c2d8u: goto label_21c2d8;
        case 0x21c2dcu: goto label_21c2dc;
        case 0x21c2e0u: goto label_21c2e0;
        case 0x21c2e4u: goto label_21c2e4;
        case 0x21c2e8u: goto label_21c2e8;
        case 0x21c2ecu: goto label_21c2ec;
        case 0x21c2f0u: goto label_21c2f0;
        case 0x21c2f4u: goto label_21c2f4;
        case 0x21c2f8u: goto label_21c2f8;
        case 0x21c2fcu: goto label_21c2fc;
        case 0x21c300u: goto label_21c300;
        case 0x21c304u: goto label_21c304;
        case 0x21c308u: goto label_21c308;
        case 0x21c30cu: goto label_21c30c;
        case 0x21c310u: goto label_21c310;
        case 0x21c314u: goto label_21c314;
        case 0x21c318u: goto label_21c318;
        case 0x21c31cu: goto label_21c31c;
        case 0x21c320u: goto label_21c320;
        case 0x21c324u: goto label_21c324;
        case 0x21c328u: goto label_21c328;
        case 0x21c32cu: goto label_21c32c;
        case 0x21c330u: goto label_21c330;
        case 0x21c334u: goto label_21c334;
        case 0x21c338u: goto label_21c338;
        case 0x21c33cu: goto label_21c33c;
        case 0x21c340u: goto label_21c340;
        case 0x21c344u: goto label_21c344;
        case 0x21c348u: goto label_21c348;
        case 0x21c34cu: goto label_21c34c;
        case 0x21c350u: goto label_21c350;
        case 0x21c354u: goto label_21c354;
        case 0x21c358u: goto label_21c358;
        case 0x21c35cu: goto label_21c35c;
        case 0x21c360u: goto label_21c360;
        case 0x21c364u: goto label_21c364;
        case 0x21c368u: goto label_21c368;
        case 0x21c36cu: goto label_21c36c;
        case 0x21c370u: goto label_21c370;
        case 0x21c374u: goto label_21c374;
        case 0x21c378u: goto label_21c378;
        case 0x21c37cu: goto label_21c37c;
        case 0x21c380u: goto label_21c380;
        case 0x21c384u: goto label_21c384;
        case 0x21c388u: goto label_21c388;
        case 0x21c38cu: goto label_21c38c;
        case 0x21c390u: goto label_21c390;
        case 0x21c394u: goto label_21c394;
        case 0x21c398u: goto label_21c398;
        case 0x21c39cu: goto label_21c39c;
        case 0x21c3a0u: goto label_21c3a0;
        case 0x21c3a4u: goto label_21c3a4;
        case 0x21c3a8u: goto label_21c3a8;
        case 0x21c3acu: goto label_21c3ac;
        case 0x21c3b0u: goto label_21c3b0;
        case 0x21c3b4u: goto label_21c3b4;
        case 0x21c3b8u: goto label_21c3b8;
        case 0x21c3bcu: goto label_21c3bc;
        case 0x21c3c0u: goto label_21c3c0;
        case 0x21c3c4u: goto label_21c3c4;
        case 0x21c3c8u: goto label_21c3c8;
        case 0x21c3ccu: goto label_21c3cc;
        case 0x21c3d0u: goto label_21c3d0;
        case 0x21c3d4u: goto label_21c3d4;
        case 0x21c3d8u: goto label_21c3d8;
        case 0x21c3dcu: goto label_21c3dc;
        case 0x21c3e0u: goto label_21c3e0;
        case 0x21c3e4u: goto label_21c3e4;
        case 0x21c3e8u: goto label_21c3e8;
        case 0x21c3ecu: goto label_21c3ec;
        case 0x21c3f0u: goto label_21c3f0;
        case 0x21c3f4u: goto label_21c3f4;
        case 0x21c3f8u: goto label_21c3f8;
        case 0x21c3fcu: goto label_21c3fc;
        case 0x21c400u: goto label_21c400;
        case 0x21c404u: goto label_21c404;
        case 0x21c408u: goto label_21c408;
        case 0x21c40cu: goto label_21c40c;
        case 0x21c410u: goto label_21c410;
        case 0x21c414u: goto label_21c414;
        default: break;
    }

    ctx->pc = 0x21c240u;

label_21c240:
    // 0x21c240: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x21c240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_21c244:
    // 0x21c244: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x21c244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
label_21c248:
    // 0x21c248: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x21c248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
label_21c24c:
    // 0x21c24c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c24cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c250:
    // 0x21c250: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x21c250u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_21c254:
    // 0x21c254: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21c254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21c258:
    // 0x21c258: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x21c258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21c25c:
    // 0x21c25c: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x21c25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
label_21c260:
    // 0x21c260: 0xc0d0d2a  jal         func_3434A8
label_21c264:
    if (ctx->pc == 0x21C264u) {
        ctx->pc = 0x21C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C260u;
        // 0x21c264: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C268u;
        goto label_21c268;
    }
    ctx->pc = 0x21C260u;
    SET_GPR_U32(ctx, 31, 0x21C268u);
    ctx->pc = 0x21C264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C260u;
    // 0x21c264: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3434A8u, 0x21C260u, 0x21C268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C268u;
label_21c268:
    // 0x21c268: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x21c268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_21c26c:
    // 0x21c26c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x21c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_21c270:
    // 0x21c270: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x21c270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
label_21c274:
    // 0x21c274: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x21c274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
label_21c278:
    // 0x21c278: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x21c278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
label_21c27c:
    // 0x21c27c: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x21c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
label_21c280:
    // 0x21c280: 0xafa00144  sw          $zero, 0x144($sp)
    ctx->pc = 0x21c280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 0));
label_21c284:
    // 0x21c284: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x21c284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
label_21c288:
    // 0x21c288: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x21c288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
label_21c28c:
    // 0x21c28c: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x21c28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_21c290:
    // 0x21c290: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x21c290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
label_21c294:
    // 0x21c294: 0xe7b40158  swc1        $f20, 0x158($sp)
    ctx->pc = 0x21c294u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_21c298:
    // 0x21c298: 0xe7b4015c  swc1        $f20, 0x15C($sp)
    ctx->pc = 0x21c298u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_21c29c:
    // 0x21c29c: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x21c29cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_21c2a0:
    // 0x21c2a0: 0xe7b40164  swc1        $f20, 0x164($sp)
    ctx->pc = 0x21c2a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_21c2a4:
    // 0x21c2a4: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x21c2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
label_21c2a8:
    // 0x21c2a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21c2ac:
    // 0x21c2ac: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x21c2acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_21c2b0:
    // 0x21c2b0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x21c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_21c2b4:
    // 0x21c2b4: 0x60f809  jalr        $v1
label_21c2b8:
    if (ctx->pc == 0x21C2B8u) {
        ctx->pc = 0x21C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2B4u;
        // 0x21c2b8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C2BCu;
        goto label_21c2bc;
    }
    ctx->pc = 0x21C2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21C2BCu);
        ctx->pc = 0x21C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2B4u;
        // 0x21c2b8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C2B4u, 0x21C2BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C2BCu;
label_21c2bc:
    // 0x21c2bc: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x21c2bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_21c2c0:
    // 0x21c2c0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x21c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_21c2c4:
    // 0x21c2c4: 0x7ba30170  lq          $v1, 0x170($sp)
    ctx->pc = 0x21c2c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_21c2c8:
    // 0x21c2c8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x21c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_21c2cc:
    // 0x21c2cc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x21c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_21c2d0:
    // 0x21c2d0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x21c2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_21c2d4:
    // 0x21c2d4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x21c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_21c2d8:
    // 0x21c2d8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x21c2d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_21c2dc:
    // 0x21c2dc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21c2dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21c2e0:
    // 0x21c2e0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x21c2e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21c2e4:
    // 0x21c2e4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21c2e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21c2e8:
    // 0x21c2e8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21c2e8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21c2ec:
    // 0x21c2ec: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x21c2ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_21c2f0:
    // 0x21c2f0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x21c2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_21c2f4:
    // 0x21c2f4: 0x7fa30170  sq          $v1, 0x170($sp)
    ctx->pc = 0x21c2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 3));
label_21c2f8:
    // 0x21c2f8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x21c2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21c2fc:
    // 0x21c2fc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x21c2fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21c300:
    // 0x21c300: 0x0  nop
    ctx->pc = 0x21c300u;
    // NOP
label_21c304:
    // 0x21c304: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_21c308:
    if (ctx->pc == 0x21C308u) {
        ctx->pc = 0x21C30Cu;
        goto label_21c30c;
    }
    ctx->pc = 0x21C304u;
    {
        const bool branch_taken_0x21c304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21c304) {
            ctx->pc = 0x21C33Cu;
            goto label_21c33c;
        }
    }
    ctx->pc = 0x21C30Cu;
label_21c30c:
    // 0x21c30c: 0xc086624  jal         func_219890
label_21c310:
    if (ctx->pc == 0x21C310u) {
        ctx->pc = 0x21C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C30Cu;
        // 0x21c310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C314u;
        goto label_21c314;
    }
    ctx->pc = 0x21C30Cu;
    SET_GPR_U32(ctx, 31, 0x21C314u);
    ctx->pc = 0x21C310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C30Cu;
    // 0x21c310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219890u, 0x21C30Cu, 0x21C314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C314u;
label_21c314:
    // 0x21c314: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x21c314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_21c318:
    // 0x21c318: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x21c318u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_21c31c:
    // 0x21c31c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21c31cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21c320:
    // 0x21c320: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21c320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21c324:
    // 0x21c324: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x21c324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_21c328:
    // 0x21c328: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21c328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21c32c:
    // 0x21c32c: 0xc0d0d46  jal         func_343518
label_21c330:
    if (ctx->pc == 0x21C330u) {
        ctx->pc = 0x21C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C32Cu;
        // 0x21c330: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C334u;
        goto label_21c334;
    }
    ctx->pc = 0x21C32Cu;
    SET_GPR_U32(ctx, 31, 0x21C334u);
    ctx->pc = 0x21C330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C32Cu;
    // 0x21c330: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x343518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343518u, 0x21C32Cu, 0x21C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C334u;
label_21c334:
    // 0x21c334: 0x10000021  b           . + 4 + (0x21 << 2)
label_21c338:
    if (ctx->pc == 0x21C338u) {
        ctx->pc = 0x21C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C334u;
        // 0x21c338: 0x8e2301a0  lw          $v1, 0x1A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C33Cu;
        goto label_21c33c;
    }
    ctx->pc = 0x21C334u;
    {
        const bool branch_taken_0x21c334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C334u;
        // 0x21c338: 0x8e2301a0  lw          $v1, 0x1A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c334) {
            ctx->pc = 0x21C3BCu;
            goto label_21c3bc;
        }
    }
    ctx->pc = 0x21C33Cu;
label_21c33c:
    // 0x21c33c: 0xc086624  jal         func_219890
label_21c340:
    if (ctx->pc == 0x21C340u) {
        ctx->pc = 0x21C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C33Cu;
        // 0x21c340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C344u;
        goto label_21c344;
    }
    ctx->pc = 0x21C33Cu;
    SET_GPR_U32(ctx, 31, 0x21C344u);
    ctx->pc = 0x21C340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C33Cu;
    // 0x21c340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219890u, 0x21C33Cu, 0x21C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C344u;
label_21c344:
    // 0x21c344: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x21c344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21c348:
    // 0x21c348: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x21c348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_21c34c:
    // 0x21c34c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21c34cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_21c350:
    // 0x21c350: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_21c354:
    // 0x21c354: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x21c354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21c358:
    // 0x21c358: 0x0  nop
    ctx->pc = 0x21c358u;
    // NOP
label_21c35c:
    // 0x21c35c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_21c360:
    if (ctx->pc == 0x21C360u) {
        ctx->pc = 0x21C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C35Cu;
        // 0x21c360: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C364u;
        goto label_21c364;
    }
    ctx->pc = 0x21C35Cu;
    {
        const bool branch_taken_0x21c35c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C35Cu;
        // 0x21c360: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c35c) {
            ctx->pc = 0x21C374u;
            goto label_21c374;
        }
    }
    ctx->pc = 0x21C364u;
label_21c364:
    // 0x21c364: 0xc0d0d38  jal         func_3434E0
label_21c368:
    if (ctx->pc == 0x21C368u) {
        ctx->pc = 0x21C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C364u;
        // 0x21c368: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C36Cu;
        goto label_21c36c;
    }
    ctx->pc = 0x21C364u;
    SET_GPR_U32(ctx, 31, 0x21C36Cu);
    ctx->pc = 0x21C368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C364u;
    // 0x21c368: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3434E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3434E0u, 0x21C364u, 0x21C36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C36Cu;
label_21c36c:
    // 0x21c36c: 0x10000023  b           . + 4 + (0x23 << 2)
label_21c370:
    if (ctx->pc == 0x21C370u) {
        ctx->pc = 0x21C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C36Cu;
        // 0x21c370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C374u;
        goto label_21c374;
    }
    ctx->pc = 0x21C36Cu;
    {
        const bool branch_taken_0x21c36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C36Cu;
        // 0x21c370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c36c) {
            ctx->pc = 0x21C3FCu;
            goto label_21c3fc;
        }
    }
    ctx->pc = 0x21C374u;
label_21c374:
    // 0x21c374: 0xc086624  jal         func_219890
label_21c378:
    if (ctx->pc == 0x21C378u) {
        ctx->pc = 0x21C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C374u;
        // 0x21c378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C37Cu;
        goto label_21c37c;
    }
    ctx->pc = 0x21C374u;
    SET_GPR_U32(ctx, 31, 0x21C37Cu);
    ctx->pc = 0x21C378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C374u;
    // 0x21c378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219890u, 0x21C374u, 0x21C37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C37Cu;
label_21c37c:
    // 0x21c37c: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x21c37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21c380:
    // 0x21c380: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21c380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21c384:
    // 0x21c384: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x21c384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_21c388:
    // 0x21c388: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21c388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_21c38c:
    // 0x21c38c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21c38cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21c390:
    // 0x21c390: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21c390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21c394:
    // 0x21c394: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x21c394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_21c398:
    // 0x21c398: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x21c398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_21c39c:
    // 0x21c39c: 0xc0d0d46  jal         func_343518
label_21c3a0:
    if (ctx->pc == 0x21C3A0u) {
        ctx->pc = 0x21C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C39Cu;
        // 0x21c3a0: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C3A4u;
        goto label_21c3a4;
    }
    ctx->pc = 0x21C39Cu;
    SET_GPR_U32(ctx, 31, 0x21C3A4u);
    ctx->pc = 0x21C3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C39Cu;
    // 0x21c3a0: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x343518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343518u, 0x21C39Cu, 0x21C3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C3A4u;
label_21c3a4:
    // 0x21c3a4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x21c3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21c3a8:
    // 0x21c3a8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x21c3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21c3ac:
    // 0x21c3ac: 0xe7b40068  swc1        $f20, 0x68($sp)
    ctx->pc = 0x21c3acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_21c3b0:
    // 0x21c3b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21c3b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_21c3b4:
    // 0x21c3b4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x21c3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_21c3b8:
    // 0x21c3b8: 0x8e2301a0  lw          $v1, 0x1A0($s1)
    ctx->pc = 0x21c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_21c3bc:
    // 0x21c3bc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x21c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_21c3c0:
    // 0x21c3c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21c3c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21c3c4:
    // 0x21c3c4: 0x8c447198  lw          $a0, 0x7198($v0)
    ctx->pc = 0x21c3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
label_21c3c8:
    // 0x21c3c8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x21c3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_21c3cc:
    // 0x21c3cc: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x21c3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
label_21c3d0:
    // 0x21c3d0: 0xafa80148  sw          $t0, 0x148($sp)
    ctx->pc = 0x21c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 8));
label_21c3d4:
    // 0x21c3d4: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x21c3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_21c3d8:
    // 0x21c3d8: 0xafbd0134  sw          $sp, 0x134($sp)
    ctx->pc = 0x21c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 29));
label_21c3dc:
    // 0x21c3dc: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x21c3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_21c3e0:
    // 0x21c3e0: 0xc0cf9fc  jal         func_33E7F0
label_21c3e4:
    if (ctx->pc == 0x21C3E4u) {
        ctx->pc = 0x21C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3E0u;
        // 0x21c3e4: 0xafa80140  sw          $t0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C3E8u;
        goto label_21c3e8;
    }
    ctx->pc = 0x21C3E0u;
    SET_GPR_U32(ctx, 31, 0x21C3E8u);
    ctx->pc = 0x21C3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C3E0u;
    // 0x21c3e4: 0xafa80140  sw          $t0, 0x140($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E7F0u, 0x21C3E0u, 0x21C3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C3E8u;
label_21c3e8:
    // 0x21c3e8: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x21c3e8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21c3ec:
    // 0x21c3ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21c3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21c3f0:
    // 0x21c3f0: 0xc0d0d38  jal         func_3434E0
label_21c3f4:
    if (ctx->pc == 0x21C3F4u) {
        ctx->pc = 0x21C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3F0u;
        // 0x21c3f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C3F8u;
        goto label_21c3f8;
    }
    ctx->pc = 0x21C3F0u;
    SET_GPR_U32(ctx, 31, 0x21C3F8u);
    ctx->pc = 0x21C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C3F0u;
    // 0x21c3f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3434E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3434E0u, 0x21C3F0u, 0x21C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C3F8u;
label_21c3f8:
    // 0x21c3f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21c3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21c3fc:
    // 0x21c3fc: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x21c3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_21c400:
    // 0x21c400: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x21c400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_21c404:
    // 0x21c404: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x21c404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_21c408:
    // 0x21c408: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x21c408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_21c40c:
    // 0x21c40c: 0x3e00008  jr          $ra
label_21c410:
    if (ctx->pc == 0x21C410u) {
        ctx->pc = 0x21C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C40Cu;
        // 0x21c410: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C414u;
        goto label_21c414;
    }
    ctx->pc = 0x21C40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C40Cu;
        // 0x21c410: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C414u;
label_21c414:
    // 0x21c414: 0x0  nop
    ctx->pc = 0x21c414u;
    // NOP
    ctx->pc = 0x21c418u;
}
