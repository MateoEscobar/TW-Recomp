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

// Function: sub_0019D390
// Address: 0x19d390 - 0x19d5a0
void sub_0019D390_0x19d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D390_0x19d390");
#endif

    switch (ctx->pc) {
        case 0x19d390u: goto label_19d390;
        case 0x19d394u: goto label_19d394;
        case 0x19d398u: goto label_19d398;
        case 0x19d39cu: goto label_19d39c;
        case 0x19d3a0u: goto label_19d3a0;
        case 0x19d3a4u: goto label_19d3a4;
        case 0x19d3a8u: goto label_19d3a8;
        case 0x19d3acu: goto label_19d3ac;
        case 0x19d3b0u: goto label_19d3b0;
        case 0x19d3b4u: goto label_19d3b4;
        case 0x19d3b8u: goto label_19d3b8;
        case 0x19d3bcu: goto label_19d3bc;
        case 0x19d3c0u: goto label_19d3c0;
        case 0x19d3c4u: goto label_19d3c4;
        case 0x19d3c8u: goto label_19d3c8;
        case 0x19d3ccu: goto label_19d3cc;
        case 0x19d3d0u: goto label_19d3d0;
        case 0x19d3d4u: goto label_19d3d4;
        case 0x19d3d8u: goto label_19d3d8;
        case 0x19d3dcu: goto label_19d3dc;
        case 0x19d3e0u: goto label_19d3e0;
        case 0x19d3e4u: goto label_19d3e4;
        case 0x19d3e8u: goto label_19d3e8;
        case 0x19d3ecu: goto label_19d3ec;
        case 0x19d3f0u: goto label_19d3f0;
        case 0x19d3f4u: goto label_19d3f4;
        case 0x19d3f8u: goto label_19d3f8;
        case 0x19d3fcu: goto label_19d3fc;
        case 0x19d400u: goto label_19d400;
        case 0x19d404u: goto label_19d404;
        case 0x19d408u: goto label_19d408;
        case 0x19d40cu: goto label_19d40c;
        case 0x19d410u: goto label_19d410;
        case 0x19d414u: goto label_19d414;
        case 0x19d418u: goto label_19d418;
        case 0x19d41cu: goto label_19d41c;
        case 0x19d420u: goto label_19d420;
        case 0x19d424u: goto label_19d424;
        case 0x19d428u: goto label_19d428;
        case 0x19d42cu: goto label_19d42c;
        case 0x19d430u: goto label_19d430;
        case 0x19d434u: goto label_19d434;
        case 0x19d438u: goto label_19d438;
        case 0x19d43cu: goto label_19d43c;
        case 0x19d440u: goto label_19d440;
        case 0x19d444u: goto label_19d444;
        case 0x19d448u: goto label_19d448;
        case 0x19d44cu: goto label_19d44c;
        case 0x19d450u: goto label_19d450;
        case 0x19d454u: goto label_19d454;
        case 0x19d458u: goto label_19d458;
        case 0x19d45cu: goto label_19d45c;
        case 0x19d460u: goto label_19d460;
        case 0x19d464u: goto label_19d464;
        case 0x19d468u: goto label_19d468;
        case 0x19d46cu: goto label_19d46c;
        case 0x19d470u: goto label_19d470;
        case 0x19d474u: goto label_19d474;
        case 0x19d478u: goto label_19d478;
        case 0x19d47cu: goto label_19d47c;
        case 0x19d480u: goto label_19d480;
        case 0x19d484u: goto label_19d484;
        case 0x19d488u: goto label_19d488;
        case 0x19d48cu: goto label_19d48c;
        case 0x19d490u: goto label_19d490;
        case 0x19d494u: goto label_19d494;
        case 0x19d498u: goto label_19d498;
        case 0x19d49cu: goto label_19d49c;
        case 0x19d4a0u: goto label_19d4a0;
        case 0x19d4a4u: goto label_19d4a4;
        case 0x19d4a8u: goto label_19d4a8;
        case 0x19d4acu: goto label_19d4ac;
        case 0x19d4b0u: goto label_19d4b0;
        case 0x19d4b4u: goto label_19d4b4;
        case 0x19d4b8u: goto label_19d4b8;
        case 0x19d4bcu: goto label_19d4bc;
        case 0x19d4c0u: goto label_19d4c0;
        case 0x19d4c4u: goto label_19d4c4;
        case 0x19d4c8u: goto label_19d4c8;
        case 0x19d4ccu: goto label_19d4cc;
        case 0x19d4d0u: goto label_19d4d0;
        case 0x19d4d4u: goto label_19d4d4;
        case 0x19d4d8u: goto label_19d4d8;
        case 0x19d4dcu: goto label_19d4dc;
        case 0x19d4e0u: goto label_19d4e0;
        case 0x19d4e4u: goto label_19d4e4;
        case 0x19d4e8u: goto label_19d4e8;
        case 0x19d4ecu: goto label_19d4ec;
        case 0x19d4f0u: goto label_19d4f0;
        case 0x19d4f4u: goto label_19d4f4;
        case 0x19d4f8u: goto label_19d4f8;
        case 0x19d4fcu: goto label_19d4fc;
        case 0x19d500u: goto label_19d500;
        case 0x19d504u: goto label_19d504;
        case 0x19d508u: goto label_19d508;
        case 0x19d50cu: goto label_19d50c;
        case 0x19d510u: goto label_19d510;
        case 0x19d514u: goto label_19d514;
        case 0x19d518u: goto label_19d518;
        case 0x19d51cu: goto label_19d51c;
        case 0x19d520u: goto label_19d520;
        case 0x19d524u: goto label_19d524;
        case 0x19d528u: goto label_19d528;
        case 0x19d52cu: goto label_19d52c;
        case 0x19d530u: goto label_19d530;
        case 0x19d534u: goto label_19d534;
        case 0x19d538u: goto label_19d538;
        case 0x19d53cu: goto label_19d53c;
        case 0x19d540u: goto label_19d540;
        case 0x19d544u: goto label_19d544;
        case 0x19d548u: goto label_19d548;
        case 0x19d54cu: goto label_19d54c;
        case 0x19d550u: goto label_19d550;
        case 0x19d554u: goto label_19d554;
        case 0x19d558u: goto label_19d558;
        case 0x19d55cu: goto label_19d55c;
        case 0x19d560u: goto label_19d560;
        case 0x19d564u: goto label_19d564;
        case 0x19d568u: goto label_19d568;
        case 0x19d56cu: goto label_19d56c;
        case 0x19d570u: goto label_19d570;
        case 0x19d574u: goto label_19d574;
        case 0x19d578u: goto label_19d578;
        case 0x19d57cu: goto label_19d57c;
        case 0x19d580u: goto label_19d580;
        case 0x19d584u: goto label_19d584;
        case 0x19d588u: goto label_19d588;
        case 0x19d58cu: goto label_19d58c;
        case 0x19d590u: goto label_19d590;
        case 0x19d594u: goto label_19d594;
        case 0x19d598u: goto label_19d598;
        case 0x19d59cu: goto label_19d59c;
        default: break;
    }

    ctx->pc = 0x19d390u;

label_19d390:
    // 0x19d390: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_19d394:
    // 0x19d394: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x19d394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_19d398:
    // 0x19d398: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x19d398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_19d39c:
    // 0x19d39c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19d39cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d3a0:
    // 0x19d3a0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x19d3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_19d3a4:
    // 0x19d3a4: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x19d3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_19d3a8:
    // 0x19d3a8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x19d3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_19d3ac:
    // 0x19d3ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19d3acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19d3b0:
    // 0x19d3b0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x19d3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_19d3b4:
    // 0x19d3b4: 0xc047e6c  jal         func_11F9B0
label_19d3b8:
    if (ctx->pc == 0x19D3B8u) {
        ctx->pc = 0x19D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D3B4u;
        // 0x19d3b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D3BCu;
        goto label_19d3bc;
    }
    ctx->pc = 0x19D3B4u;
    SET_GPR_U32(ctx, 31, 0x19D3BCu);
    ctx->pc = 0x19D3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D3B4u;
    // 0x19d3b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x19D3B4u, 0x19D3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D3BCu;
label_19d3bc:
    // 0x19d3bc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x19d3bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19d3c0:
    // 0x19d3c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19d3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19d3c4:
    // 0x19d3c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19d3c8:
    // 0x19d3c8: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x19d3c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_19d3cc:
    // 0x19d3cc: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x19d3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_19d3d0:
    // 0x19d3d0: 0xc0f809  jalr        $a2
label_19d3d4:
    if (ctx->pc == 0x19D3D4u) {
        ctx->pc = 0x19D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D3D0u;
        // 0x19d3d4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D3D8u;
        goto label_19d3d8;
    }
    ctx->pc = 0x19D3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x19D3D8u);
        ctx->pc = 0x19D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D3D0u;
        // 0x19d3d4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D3D0u, 0x19D3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D3D8u;
label_19d3d8:
    // 0x19d3d8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x19d3d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19d3dc:
    // 0x19d3dc: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x19d3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19d3e0:
    // 0x19d3e0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x19d3e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_19d3e4:
    // 0x19d3e4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19d3e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_19d3e8:
    // 0x19d3e8: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x19d3e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19d3ec:
    // 0x19d3ec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x19d3ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19d3f0:
    // 0x19d3f0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x19d3f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19d3f4:
    // 0x19d3f4: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x19d3f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19d3f8:
    // 0x19d3f8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x19d3f8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_19d3fc:
    // 0x19d3fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19d3fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19d400:
    // 0x19d400: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x19d400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19d404:
    // 0x19d404: 0x0  nop
    ctx->pc = 0x19d404u;
    // NOP
label_19d408:
    // 0x19d408: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x19d408u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19d40c:
    // 0x19d40c: 0x0  nop
    ctx->pc = 0x19d40cu;
    // NOP
label_19d410:
    // 0x19d410: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_19d414:
    if (ctx->pc == 0x19D414u) {
        ctx->pc = 0x19D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D410u;
        // 0x19d414: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D418u;
        goto label_19d418;
    }
    ctx->pc = 0x19D410u;
    {
        const bool branch_taken_0x19d410 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D410u;
        // 0x19d414: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d410) {
            ctx->pc = 0x19D438u;
            goto label_19d438;
        }
    }
    ctx->pc = 0x19D418u;
label_19d418:
    // 0x19d418: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19d418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19d41c:
    // 0x19d41c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d420:
    // 0x19d420: 0x0  nop
    ctx->pc = 0x19d420u;
    // NOP
label_19d424:
    // 0x19d424: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x19d424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_19d428:
    // 0x19d428: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x19d428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_19d42c:
    // 0x19d42c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x19d42cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_19d430:
    // 0x19d430: 0x1000000d  b           . + 4 + (0xD << 2)
label_19d434:
    if (ctx->pc == 0x19D434u) {
        ctx->pc = 0x19D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D430u;
        // 0x19d434: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D438u;
        goto label_19d438;
    }
    ctx->pc = 0x19D430u;
    {
        const bool branch_taken_0x19d430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D430u;
        // 0x19d434: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d430) {
            ctx->pc = 0x19D468u;
            goto label_19d468;
        }
    }
    ctx->pc = 0x19D438u;
label_19d438:
    // 0x19d438: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19d438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19d43c:
    // 0x19d43c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d43cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d440:
    // 0x19d440: 0x0  nop
    ctx->pc = 0x19d440u;
    // NOP
label_19d444:
    // 0x19d444: 0x0  nop
    ctx->pc = 0x19d444u;
    // NOP
label_19d448:
    // 0x19d448: 0x46020016  rsqrt.s     $f0, $f0, $f2
    ctx->pc = 0x19d448u;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[0], ctx->f[2]);
label_19d44c:
    // 0x19d44c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19d44cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19d450:
    // 0x19d450: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x19d450u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_19d454:
    // 0x19d454: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19d454u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_19d458:
    // 0x19d458: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x19d458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19d45c:
    // 0x19d45c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x19d45cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_19d460:
    // 0x19d460: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x19d460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_19d464:
    // 0x19d464: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x19d464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_19d468:
    // 0x19d468: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19d468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19d46c:
    // 0x19d46c: 0xc0cd8ec  jal         func_3363B0
label_19d470:
    if (ctx->pc == 0x19D470u) {
        ctx->pc = 0x19D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D46Cu;
        // 0x19d470: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D474u;
        goto label_19d474;
    }
    ctx->pc = 0x19D46Cu;
    SET_GPR_U32(ctx, 31, 0x19D474u);
    ctx->pc = 0x19D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D46Cu;
    // 0x19d470: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x19D46Cu, 0x19D474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D474u;
label_19d474:
    // 0x19d474: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x19d474u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19d478:
    // 0x19d478: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19d478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19d47c:
    // 0x19d47c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19d47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19d480:
    // 0x19d480: 0xc0cd916  jal         func_336458
label_19d484:
    if (ctx->pc == 0x19D484u) {
        ctx->pc = 0x19D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D480u;
        // 0x19d484: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D488u;
        goto label_19d488;
    }
    ctx->pc = 0x19D480u;
    SET_GPR_U32(ctx, 31, 0x19D488u);
    ctx->pc = 0x19D484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D480u;
    // 0x19d484: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336458u, 0x19D480u, 0x19D488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D488u;
label_19d488:
    // 0x19d488: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x19d488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19d48c:
    // 0x19d48c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19d490:
    // 0x19d490: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x19d490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19d494:
    // 0x19d494: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x19d494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19d498:
    // 0x19d498: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x19d498u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_19d49c:
    // 0x19d49c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x19d49cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_19d4a0:
    // 0x19d4a0: 0x7ba70040  lq          $a3, 0x40($sp)
    ctx->pc = 0x19d4a0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19d4a4:
    // 0x19d4a4: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x19d4a4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_19d4a8:
    // 0x19d4a8: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x19d4a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_19d4ac:
    // 0x19d4ac: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x19d4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_19d4b0:
    // 0x19d4b0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x19d4b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19d4b4:
    // 0x19d4b4: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x19d4b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19d4b8:
    // 0x19d4b8: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x19d4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
label_19d4bc:
    // 0x19d4bc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x19d4bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19d4c0:
    // 0x19d4c0: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x19d4c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_19d4c4:
    // 0x19d4c4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19d4c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_19d4c8:
    // 0x19d4c8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x19d4c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_19d4cc:
    // 0x19d4cc: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x19d4ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19d4d0:
    // 0x19d4d0: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x19d4d0u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
label_19d4d4:
    // 0x19d4d4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x19d4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19d4d8:
    // 0x19d4d8: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x19d4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
label_19d4dc:
    // 0x19d4dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19d4dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_19d4e0:
    // 0x19d4e0: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x19d4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_19d4e4:
    // 0x19d4e4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x19d4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19d4e8:
    // 0x19d4e8: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x19d4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_19d4ec:
    // 0x19d4ec: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x19d4ecu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_19d4f0:
    // 0x19d4f0: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x19d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_19d4f4:
    // 0x19d4f4: 0xc7a70018  lwc1        $f7, 0x18($sp)
    ctx->pc = 0x19d4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_19d4f8:
    // 0x19d4f8: 0xe6250020  swc1        $f5, 0x20($s1)
    ctx->pc = 0x19d4f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_19d4fc:
    // 0x19d4fc: 0xe6240024  swc1        $f4, 0x24($s1)
    ctx->pc = 0x19d4fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_19d500:
    // 0x19d500: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x19d500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_19d504:
    // 0x19d504: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x19d504u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_19d508:
    // 0x19d508: 0xe6230014  swc1        $f3, 0x14($s1)
    ctx->pc = 0x19d508u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_19d50c:
    // 0x19d50c: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x19d50cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_19d510:
    // 0x19d510: 0xe6270004  swc1        $f7, 0x4($s1)
    ctx->pc = 0x19d510u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_19d514:
    // 0x19d514: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x19d514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_19d518:
    // 0x19d518: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x19d518u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_19d51c:
    // 0x19d51c: 0x7a250010  lq          $a1, 0x10($s1)
    ctx->pc = 0x19d51cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_19d520:
    // 0x19d520: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x19d520u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_19d524:
    // 0x19d524: 0x7a260030  lq          $a2, 0x30($s1)
    ctx->pc = 0x19d524u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_19d528:
    // 0x19d528: 0x7e2300b0  sq          $v1, 0xB0($s1)
    ctx->pc = 0x19d528u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 176), GPR_VEC(ctx, 3));
label_19d52c:
    // 0x19d52c: 0x7e2500a0  sq          $a1, 0xA0($s1)
    ctx->pc = 0x19d52cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), GPR_VEC(ctx, 5));
label_19d530:
    // 0x19d530: 0x7e220090  sq          $v0, 0x90($s1)
    ctx->pc = 0x19d530u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 2));
label_19d534:
    // 0x19d534: 0x7fa70040  sq          $a3, 0x40($sp)
    ctx->pc = 0x19d534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
label_19d538:
    // 0x19d538: 0x7e2600c0  sq          $a2, 0xC0($s1)
    ctx->pc = 0x19d538u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 192), GPR_VEC(ctx, 6));
label_19d53c:
    // 0x19d53c: 0xc0671d0  jal         func_19C740
label_19d540:
    if (ctx->pc == 0x19D540u) {
        ctx->pc = 0x19D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D53Cu;
        // 0x19d540: 0xae330080  sw          $s3, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D544u;
        goto label_19d544;
    }
    ctx->pc = 0x19D53Cu;
    SET_GPR_U32(ctx, 31, 0x19D544u);
    ctx->pc = 0x19D540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D53Cu;
    // 0x19d540: 0xae330080  sw          $s3, 0x80($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C740u, 0x19D53Cu, 0x19D544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D544u;
label_19d544:
    // 0x19d544: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19d544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19d548:
    // 0x19d548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19d54c:
    // 0x19d54c: 0xc067382  jal         func_19CE08
label_19d550:
    if (ctx->pc == 0x19D550u) {
        ctx->pc = 0x19D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D54Cu;
        // 0x19d550: 0xae2232f8  sw          $v0, 0x32F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 13048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D554u;
        goto label_19d554;
    }
    ctx->pc = 0x19D54Cu;
    SET_GPR_U32(ctx, 31, 0x19D554u);
    ctx->pc = 0x19D550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D54Cu;
    // 0x19d550: 0xae2232f8  sw          $v0, 0x32F8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 13048), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE08u, 0x19D54Cu, 0x19D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D554u;
label_19d554:
    // 0x19d554: 0x8e23330c  lw          $v1, 0x330C($s1)
    ctx->pc = 0x19d554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13068)));
label_19d558:
    // 0x19d558: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x19d558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_19d55c:
    // 0x19d55c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x19d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_19d560:
    // 0x19d560: 0x40f809  jalr        $v0
label_19d564:
    if (ctx->pc == 0x19D564u) {
        ctx->pc = 0x19D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D560u;
        // 0x19d564: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D568u;
        goto label_19d568;
    }
    ctx->pc = 0x19D560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D568u);
        ctx->pc = 0x19D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D560u;
        // 0x19d564: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D560u, 0x19D568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D568u;
label_19d568:
    // 0x19d568: 0x8e23330c  lw          $v1, 0x330C($s1)
    ctx->pc = 0x19d568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13068)));
label_19d56c:
    // 0x19d56c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19d570:
    // 0x19d570: 0xc44ccf24  lwc1        $f12, -0x30DC($v0)
    ctx->pc = 0x19d570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19d574:
    // 0x19d574: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x19d574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_19d578:
    // 0x19d578: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x19d578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_19d57c:
    // 0x19d57c: 0x40f809  jalr        $v0
label_19d580:
    if (ctx->pc == 0x19D580u) {
        ctx->pc = 0x19D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D57Cu;
        // 0x19d580: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D584u;
        goto label_19d584;
    }
    ctx->pc = 0x19D57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D584u);
        ctx->pc = 0x19D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D57Cu;
        // 0x19d580: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D57Cu, 0x19D584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D584u;
label_19d584:
    // 0x19d584: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x19d584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_19d588:
    // 0x19d588: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x19d588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_19d58c:
    // 0x19d58c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x19d58cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19d590:
    // 0x19d590: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x19d590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19d594:
    // 0x19d594: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x19d594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19d598:
    // 0x19d598: 0x3e00008  jr          $ra
label_19d59c:
    if (ctx->pc == 0x19D59Cu) {
        ctx->pc = 0x19D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D598u;
        // 0x19d59c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D5A0u;
        goto label_fallthrough_0x19d598;
    }
    ctx->pc = 0x19D598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D598u;
        // 0x19d59c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19d598:
    ctx->pc = 0x19D5A0u;
}
