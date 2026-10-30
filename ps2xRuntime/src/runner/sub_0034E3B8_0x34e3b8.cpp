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

// Function: sub_0034E3B8
// Address: 0x34e3b8 - 0x34e5d0
void sub_0034E3B8_0x34e3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E3B8_0x34e3b8");
#endif

    switch (ctx->pc) {
        case 0x34e40cu: goto label_34e40c;
        case 0x34e440u: goto label_34e440;
        default: break;
    }

    ctx->pc = 0x34e3b8u;

    // 0x34e3b8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x34e3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x34e3bc: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x34e3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x34e3c0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x34e3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x34e3c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34e3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3c8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x34e3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x34e3cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34e3ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3d0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x34e3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x34e3d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x34e3d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3d8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x34e3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x34e3dc: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x34e3dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3e0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x34e3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x34e3e4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x34e3e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3e8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x34e3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x34e3ec: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x34e3ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3f0: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x34e3f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x34e3f4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x34e3f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3f8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x34e3f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x34e3fc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x34e3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x34e400: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x34e400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e404: 0xc0d3848  jal         func_34E120
    ctx->pc = 0x34E404u;
    SET_GPR_U32(ctx, 31, 0x34E40Cu);
    ctx->pc = 0x34E408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E404u;
    // 0x34e408: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E120u, 0x34E404u, 0x34E40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E40Cu;
label_34e40c:
    // 0x34e40c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34E40Cu;
    {
        const bool branch_taken_0x34e40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E40Cu;
        // 0x34e410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e40c) {
            ctx->pc = 0x34E41Cu;
            goto label_34e41c;
        }
    }
    ctx->pc = 0x34E414u;
    // 0x34e414: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x34E414u;
    {
        const bool branch_taken_0x34e414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E414u;
        // 0x34e418: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e414) {
            ctx->pc = 0x34E5A4u;
            goto label_34e5a4;
        }
    }
    ctx->pc = 0x34E41Cu;
label_34e41c:
    // 0x34e41c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34e41cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x34e420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34e420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e424: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x34e424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e428: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34e428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e42c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34e42cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e430: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x34e430u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e434: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x34e434u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e438: 0xc0d37fe  jal         func_34DFF8
    ctx->pc = 0x34E438u;
    SET_GPR_U32(ctx, 31, 0x34E440u);
    ctx->pc = 0x34E43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E438u;
    // 0x34e43c: 0x3a0502d  daddu       $t2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DFF8u, 0x34E438u, 0x34E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E440u;
label_34e440:
    // 0x34e440: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34E440u;
    {
        const bool branch_taken_0x34e440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E440u;
        // 0x34e444: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e440) {
            ctx->pc = 0x34E450u;
            goto label_34e450;
        }
    }
    ctx->pc = 0x34E448u;
    // 0x34e448: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x34E448u;
    {
        const bool branch_taken_0x34e448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E448u;
        // 0x34e44c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e448) {
            ctx->pc = 0x34E5A4u;
            goto label_34e5a4;
        }
    }
    ctx->pc = 0x34E450u;
label_34e450:
    // 0x34e450: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x34e450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x34e454: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x34e454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x34e458: 0x7a050000  lq          $a1, 0x0($s0)
    ctx->pc = 0x34e458u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34e45c: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x34e45cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34e460: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x34e460u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34e464: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34e464u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34e468: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e468u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e46c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e46cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e470: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e470u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e474: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34e474u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e478: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x34e478u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34e47c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34e47cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34e480: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e480u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e484: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e484u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e488: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e488u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e48c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34e48cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e494: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x34e494u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x34e498: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x34e498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34e49c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34e49cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34e4a0: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x34e4a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x34e4a4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34e4a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34e4a8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x34e4a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34e4ac: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x34e4acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34e4b0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34e4b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e4b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34e4b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34e4b8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34e4b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34e4bc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34e4bcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34e4c0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34e4c0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34e4c4: 0x460010c0  add.s       $f3, $f2, $f0
    ctx->pc = 0x34e4c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34e4c8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x34e4c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34e4cc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34e4ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e4d0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34e4d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e4d4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34e4d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e4d8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34e4d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34e4dc: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34e4dcu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34e4e0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x34e4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x34e4e4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x34e4e4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e4e8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x34e4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x34e4ec: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34e4ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e4f0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x34e4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x34e4f4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x34e4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x34e4f8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x34e4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x34e4fc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x34e4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x34e500: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x34E500u;
    {
        const bool branch_taken_0x34e500 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E500u;
        // 0x34e504: 0x7fa40020  sq          $a0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e500) {
            ctx->pc = 0x34E510u;
            goto label_34e510;
        }
    }
    ctx->pc = 0x34E508u;
    // 0x34e508: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x34E508u;
    {
        const bool branch_taken_0x34e508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E508u;
        // 0x34e50c: 0x7e640000  sq          $a0, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e508) {
            ctx->pc = 0x34E598u;
            goto label_34e598;
        }
    }
    ctx->pc = 0x34E510u;
label_34e510:
    // 0x34e510: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x34e510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e514: 0x0  nop
    ctx->pc = 0x34e514u;
    // NOP
    // 0x34e518: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x34E518u;
    {
        const bool branch_taken_0x34e518 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34e518) {
            ctx->pc = 0x34E51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E518u;
            // 0x34e51c: 0x46021841  sub.s       $f1, $f3, $f2 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E548u;
            goto label_34e548;
        }
    }
    ctx->pc = 0x34E520u;
    // 0x34e520: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34e520u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34e524: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x34e524u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34e528: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34e528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34e52c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34e52cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34e530: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x34e530u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34e534: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x34e534u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x34e538: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x34e538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x34e53c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x34e53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x34e540: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x34E540u;
    {
        const bool branch_taken_0x34e540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E540u;
        // 0x34e544: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e540) {
            ctx->pc = 0x34E598u;
            goto label_34e598;
        }
    }
    ctx->pc = 0x34E548u;
label_34e548:
    // 0x34e548: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x34e548u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x34e54c: 0x0  nop
    ctx->pc = 0x34e54cu;
    // NOP
    // 0x34e550: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x34e550u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x34e554: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x34e554u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x34e558: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x34e558u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34e55c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34e55cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34e560: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34e560u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34e564: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x34e564u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34e568: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x34e568u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34e56c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34e56cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34e570: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x34e570u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34e574: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34e574u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34e578: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x34e578u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34e57c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x34e57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x34e580: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x34e580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x34e584: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x34e584u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    // 0x34e588: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x34e588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x34e58c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x34e58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x34e590: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x34e590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x34e594: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x34e594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_34e598:
    // 0x34e598: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34e598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e59c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e5a0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x34e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_34e5a4:
    // 0x34e5a4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x34e5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x34e5a8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x34e5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x34e5ac: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x34e5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x34e5b0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x34e5b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x34e5b4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x34e5b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x34e5b8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x34e5b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x34e5bc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x34e5bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x34e5c0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x34e5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34e5c4: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x34e5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34e5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x34E5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E5C8u;
        // 0x34e5cc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E5D0u;
}
