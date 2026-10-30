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

// Function: sub_0019A780
// Address: 0x19a780 - 0x19a8e0
void sub_0019A780_0x19a780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A780_0x19a780");
#endif

    switch (ctx->pc) {
        case 0x19a780u: goto label_19a780;
        case 0x19a784u: goto label_19a784;
        case 0x19a788u: goto label_19a788;
        case 0x19a78cu: goto label_19a78c;
        case 0x19a790u: goto label_19a790;
        case 0x19a794u: goto label_19a794;
        case 0x19a798u: goto label_19a798;
        case 0x19a79cu: goto label_19a79c;
        case 0x19a7a0u: goto label_19a7a0;
        case 0x19a7a4u: goto label_19a7a4;
        case 0x19a7a8u: goto label_19a7a8;
        case 0x19a7acu: goto label_19a7ac;
        case 0x19a7b0u: goto label_19a7b0;
        case 0x19a7b4u: goto label_19a7b4;
        case 0x19a7b8u: goto label_19a7b8;
        case 0x19a7bcu: goto label_19a7bc;
        case 0x19a7c0u: goto label_19a7c0;
        case 0x19a7c4u: goto label_19a7c4;
        case 0x19a7c8u: goto label_19a7c8;
        case 0x19a7ccu: goto label_19a7cc;
        case 0x19a7d0u: goto label_19a7d0;
        case 0x19a7d4u: goto label_19a7d4;
        case 0x19a7d8u: goto label_19a7d8;
        case 0x19a7dcu: goto label_19a7dc;
        case 0x19a7e0u: goto label_19a7e0;
        case 0x19a7e4u: goto label_19a7e4;
        case 0x19a7e8u: goto label_19a7e8;
        case 0x19a7ecu: goto label_19a7ec;
        case 0x19a7f0u: goto label_19a7f0;
        case 0x19a7f4u: goto label_19a7f4;
        case 0x19a7f8u: goto label_19a7f8;
        case 0x19a7fcu: goto label_19a7fc;
        case 0x19a800u: goto label_19a800;
        case 0x19a804u: goto label_19a804;
        case 0x19a808u: goto label_19a808;
        case 0x19a80cu: goto label_19a80c;
        case 0x19a810u: goto label_19a810;
        case 0x19a814u: goto label_19a814;
        case 0x19a818u: goto label_19a818;
        case 0x19a81cu: goto label_19a81c;
        case 0x19a820u: goto label_19a820;
        case 0x19a824u: goto label_19a824;
        case 0x19a828u: goto label_19a828;
        case 0x19a82cu: goto label_19a82c;
        case 0x19a830u: goto label_19a830;
        case 0x19a834u: goto label_19a834;
        case 0x19a838u: goto label_19a838;
        case 0x19a83cu: goto label_19a83c;
        case 0x19a840u: goto label_19a840;
        case 0x19a844u: goto label_19a844;
        case 0x19a848u: goto label_19a848;
        case 0x19a84cu: goto label_19a84c;
        case 0x19a850u: goto label_19a850;
        case 0x19a854u: goto label_19a854;
        case 0x19a858u: goto label_19a858;
        case 0x19a85cu: goto label_19a85c;
        case 0x19a860u: goto label_19a860;
        case 0x19a864u: goto label_19a864;
        case 0x19a868u: goto label_19a868;
        case 0x19a86cu: goto label_19a86c;
        case 0x19a870u: goto label_19a870;
        case 0x19a874u: goto label_19a874;
        case 0x19a878u: goto label_19a878;
        case 0x19a87cu: goto label_19a87c;
        case 0x19a880u: goto label_19a880;
        case 0x19a884u: goto label_19a884;
        case 0x19a888u: goto label_19a888;
        case 0x19a88cu: goto label_19a88c;
        case 0x19a890u: goto label_19a890;
        case 0x19a894u: goto label_19a894;
        case 0x19a898u: goto label_19a898;
        case 0x19a89cu: goto label_19a89c;
        case 0x19a8a0u: goto label_19a8a0;
        case 0x19a8a4u: goto label_19a8a4;
        case 0x19a8a8u: goto label_19a8a8;
        case 0x19a8acu: goto label_19a8ac;
        case 0x19a8b0u: goto label_19a8b0;
        case 0x19a8b4u: goto label_19a8b4;
        case 0x19a8b8u: goto label_19a8b8;
        case 0x19a8bcu: goto label_19a8bc;
        case 0x19a8c0u: goto label_19a8c0;
        case 0x19a8c4u: goto label_19a8c4;
        case 0x19a8c8u: goto label_19a8c8;
        case 0x19a8ccu: goto label_19a8cc;
        case 0x19a8d0u: goto label_19a8d0;
        case 0x19a8d4u: goto label_19a8d4;
        case 0x19a8d8u: goto label_19a8d8;
        case 0x19a8dcu: goto label_19a8dc;
        default: break;
    }

    ctx->pc = 0x19a780u;

label_19a780:
    // 0x19a780: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x19a780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_19a784:
    // 0x19a784: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x19a784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_19a788:
    // 0x19a788: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x19a788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_19a78c:
    // 0x19a78c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_19a790:
    if (ctx->pc == 0x19A790u) {
        ctx->pc = 0x19A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A78Cu;
        // 0x19a790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A794u;
        goto label_19a794;
    }
    ctx->pc = 0x19A78Cu;
    {
        const bool branch_taken_0x19a78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A78Cu;
        // 0x19a790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a78c) {
            ctx->pc = 0x19A8D0u;
            goto label_19a8d0;
        }
    }
    ctx->pc = 0x19A794u;
label_19a794:
    // 0x19a794: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x19a794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19a798:
    // 0x19a798: 0xc4a90020  lwc1        $f9, 0x20($a1)
    ctx->pc = 0x19a798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_19a79c:
    // 0x19a79c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x19a79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19a7a0:
    // 0x19a7a0: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x19a7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19a7a4:
    // 0x19a7a4: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x19a7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_19a7a8:
    // 0x19a7a8: 0xc4a50010  lwc1        $f5, 0x10($a1)
    ctx->pc = 0x19a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_19a7ac:
    // 0x19a7ac: 0xc4a60014  lwc1        $f6, 0x14($a1)
    ctx->pc = 0x19a7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_19a7b0:
    // 0x19a7b0: 0xc4a70018  lwc1        $f7, 0x18($a1)
    ctx->pc = 0x19a7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_19a7b4:
    // 0x19a7b4: 0xc4a8001c  lwc1        $f8, 0x1C($a1)
    ctx->pc = 0x19a7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_19a7b8:
    // 0x19a7b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19a7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19a7bc:
    // 0x19a7bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a7bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19a7c0:
    // 0x19a7c0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x19a7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_19a7c4:
    // 0x19a7c4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x19a7c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19a7c8:
    // 0x19a7c8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x19a7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_19a7cc:
    // 0x19a7cc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x19a7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_19a7d0:
    // 0x19a7d0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x19a7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_19a7d4:
    // 0x19a7d4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x19a7d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_19a7d8:
    // 0x19a7d8: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x19a7d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19a7dc:
    // 0x19a7dc: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x19a7dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_19a7e0:
    // 0x19a7e0: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x19a7e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_19a7e4:
    // 0x19a7e4: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x19a7e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_19a7e8:
    // 0x19a7e8: 0xe7a70020  swc1        $f7, 0x20($sp)
    ctx->pc = 0x19a7e8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_19a7ec:
    // 0x19a7ec: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x19a7ecu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_19a7f0:
    // 0x19a7f0: 0xc047e6c  jal         func_11F9B0
label_19a7f4:
    if (ctx->pc == 0x19A7F4u) {
        ctx->pc = 0x19A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7F0u;
        // 0x19a7f4: 0xe7a90028  swc1        $f9, 0x28($sp) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A7F8u;
        goto label_19a7f8;
    }
    ctx->pc = 0x19A7F0u;
    SET_GPR_U32(ctx, 31, 0x19A7F8u);
    ctx->pc = 0x19A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A7F0u;
    // 0x19a7f4: 0xe7a90028  swc1        $f9, 0x28($sp) (Delay Slot)
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x19A7F0u, 0x19A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A7F8u;
label_19a7f8:
    // 0x19a7f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19a7fc:
    // 0x19a7fc: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x19a7fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_19a800:
    // 0x19a800: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x19a800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_19a804:
    // 0x19a804: 0xa0f809  jalr        $a1
label_19a808:
    if (ctx->pc == 0x19A808u) {
        ctx->pc = 0x19A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A804u;
        // 0x19a808: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A80Cu;
        goto label_19a80c;
    }
    ctx->pc = 0x19A804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x19A80Cu);
        ctx->pc = 0x19A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A804u;
        // 0x19a808: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A804u, 0x19A80Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A80Cu;
label_19a80c:
    // 0x19a80c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x19a80cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19a810:
    // 0x19a810: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x19a810u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19a814:
    // 0x19a814: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x19a814u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19a818:
    // 0x19a818: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x19a818u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_19a81c:
    // 0x19a81c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19a81cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_19a820:
    // 0x19a820: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x19a820u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19a824:
    // 0x19a824: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x19a824u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_19a828:
    // 0x19a828: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x19a828u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_19a82c:
    // 0x19a82c: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x19a82cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19a830:
    // 0x19a830: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x19a830u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_19a834:
    // 0x19a834: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19a834u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_19a838:
    // 0x19a838: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x19a838u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19a83c:
    // 0x19a83c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x19a83cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_19a840:
    // 0x19a840: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x19a840u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
label_19a844:
    // 0x19a844: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x19a844u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_19a848:
    // 0x19a848: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x19a848u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_19a84c:
    // 0x19a84c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x19a84cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_19a850:
    // 0x19a850: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x19a850u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19a854:
    // 0x19a854: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x19a854u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
label_19a858:
    // 0x19a858: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x19a858u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_19a85c:
    // 0x19a85c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x19a85cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_19a860:
    // 0x19a860: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x19a860u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19a864:
    // 0x19a864: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x19a864u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_19a868:
    // 0x19a868: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x19a868u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_19a86c:
    // 0x19a86c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x19a86cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_19a870:
    // 0x19a870: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x19a870u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_19a874:
    // 0x19a874: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x19a874u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19a878:
    // 0x19a878: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x19a878u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19a87c:
    // 0x19a87c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x19a87cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19a880:
    // 0x19a880: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x19a880u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_19a884:
    // 0x19a884: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19a884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19a888:
    // 0x19a888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19a88c:
    // 0x19a88c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x19a88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_19a890:
    // 0x19a890: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19a890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a894:
    // 0x19a894: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19a898:
    // 0x19a898: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x19a898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_19a89c:
    // 0x19a89c: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x19a89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
label_19a8a0:
    // 0x19a8a0: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x19a8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
label_19a8a4:
    // 0x19a8a4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x19a8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_19a8a8:
    // 0x19a8a8: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x19a8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
label_19a8ac:
    // 0x19a8ac: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x19a8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
label_19a8b0:
    // 0x19a8b0: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x19a8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
label_19a8b4:
    // 0x19a8b4: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x19a8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
label_19a8b8:
    // 0x19a8b8: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x19a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
label_19a8bc:
    // 0x19a8bc: 0x7fa600e0  sq          $a2, 0xE0($sp)
    ctx->pc = 0x19a8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 6));
label_19a8c0:
    // 0x19a8c0: 0x7fa600d0  sq          $a2, 0xD0($sp)
    ctx->pc = 0x19a8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 6));
label_19a8c4:
    // 0x19a8c4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_19a8c8:
    if (ctx->pc == 0x19A8C8u) {
        ctx->pc = 0x19A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8C4u;
        // 0x19a8c8: 0x7fa60050  sq          $a2, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A8CCu;
        goto label_19a8cc;
    }
    ctx->pc = 0x19A8C4u;
    {
        const bool branch_taken_0x19a8c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8C4u;
        // 0x19a8c8: 0x7fa60050  sq          $a2, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8c4) {
            ctx->pc = 0x19A8D0u;
            goto label_19a8d0;
        }
    }
    ctx->pc = 0x19A8CCu;
label_19a8cc:
    // 0x19a8cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a8d0:
    // 0x19a8d0: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x19a8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_19a8d4:
    // 0x19a8d4: 0x3e00008  jr          $ra
label_19a8d8:
    if (ctx->pc == 0x19A8D8u) {
        ctx->pc = 0x19A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8D4u;
        // 0x19a8d8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A8DCu;
        goto label_19a8dc;
    }
    ctx->pc = 0x19A8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8D4u;
        // 0x19a8d8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A8DCu;
label_19a8dc:
    // 0x19a8dc: 0x0  nop
    ctx->pc = 0x19a8dcu;
    // NOP
    ctx->pc = 0x19a8e0u;
}
