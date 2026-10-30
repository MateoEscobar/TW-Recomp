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

// Function: sub_00314038
// Address: 0x314038 - 0x314530
void sub_00314038_0x314038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314038_0x314038");
#endif

    switch (ctx->pc) {
        case 0x314074u: goto label_314074;
        case 0x314080u: goto label_314080;
        case 0x31408cu: goto label_31408c;
        case 0x3140b4u: goto label_3140b4;
        case 0x3140c4u: goto label_3140c4;
        case 0x3140d4u: goto label_3140d4;
        case 0x31421cu: goto label_31421c;
        case 0x31426cu: goto label_31426c;
        case 0x314318u: goto label_314318;
        case 0x314320u: goto label_314320;
        case 0x314328u: goto label_314328;
        case 0x31433cu: goto label_31433c;
        case 0x314358u: goto label_314358;
        case 0x314400u: goto label_314400;
        case 0x314414u: goto label_314414;
        case 0x31442cu: goto label_31442c;
        case 0x314438u: goto label_314438;
        case 0x314444u: goto label_314444;
        case 0x3144acu: goto label_3144ac;
        case 0x3144c0u: goto label_3144c0;
        case 0x3144d8u: goto label_3144d8;
        case 0x3144e0u: goto label_3144e0;
        case 0x3144ecu: goto label_3144ec;
        default: break;
    }

    ctx->pc = 0x314038u;

    // 0x314038: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x314038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x31403c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x31403cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x314040: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x314040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314044: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x314044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x314048: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x314048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x31404c: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x31404cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x314050: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x314050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x314054: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x314054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x314058: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x314058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x31405c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x31405cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x314060: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x314060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x314064: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x314064u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x314068: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x314068u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x31406c: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x31406Cu;
    SET_GPR_U32(ctx, 31, 0x314074u);
    ctx->pc = 0x314070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31406Cu;
    // 0x314070: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x31406Cu, 0x314074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314074u;
label_314074:
    // 0x314074: 0x26440024  addiu       $a0, $s2, 0x24
    ctx->pc = 0x314074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x314078: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x314078u;
    SET_GPR_U32(ctx, 31, 0x314080u);
    ctx->pc = 0x31407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314078u;
    // 0x31407c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x314078u, 0x314080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314080u;
label_314080:
    // 0x314080: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x314080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314084: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x314084u;
    SET_GPR_U32(ctx, 31, 0x31408Cu);
    ctx->pc = 0x314088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314084u;
    // 0x314088: 0x26440028  addiu       $a0, $s2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x314084u, 0x31408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31408Cu;
label_31408c:
    // 0x31408c: 0x1200011b  beqz        $s0, . + 4 + (0x11B << 2)
    ctx->pc = 0x31408Cu;
    {
        const bool branch_taken_0x31408c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x314090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31408Cu;
        // 0x314090: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31408c) {
            ctx->pc = 0x3144FCu;
            goto label_3144fc;
        }
    }
    ctx->pc = 0x314094u;
    // 0x314094: 0x5220011a  beql        $s1, $zero, . + 4 + (0x11A << 2)
    ctx->pc = 0x314094u;
    {
        const bool branch_taken_0x314094 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x314094) {
            ctx->pc = 0x314098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314094u;
            // 0x314098: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314500u;
            goto label_314500;
        }
    }
    ctx->pc = 0x31409Cu;
    // 0x31409c: 0x52600118  beql        $s3, $zero, . + 4 + (0x118 << 2)
    ctx->pc = 0x31409Cu;
    {
        const bool branch_taken_0x31409c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x31409c) {
            ctx->pc = 0x3140A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31409Cu;
            // 0x3140a0: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314500u;
            goto label_314500;
        }
    }
    ctx->pc = 0x3140A4u;
    // 0x3140a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3140a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3140a8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3140a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3140ac: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x3140ACu;
    SET_GPR_U32(ctx, 31, 0x3140B4u);
    ctx->pc = 0x3140B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3140ACu;
    // 0x3140b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x3140ACu, 0x3140B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3140B4u;
label_3140b4:
    // 0x3140b4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3140b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3140b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3140b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3140bc: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x3140BCu;
    SET_GPR_U32(ctx, 31, 0x3140C4u);
    ctx->pc = 0x3140C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3140BCu;
    // 0x3140c0: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x3140BCu, 0x3140C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3140C4u;
label_3140c4:
    // 0x3140c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3140c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3140c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3140c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3140cc: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x3140CCu;
    SET_GPR_U32(ctx, 31, 0x3140D4u);
    ctx->pc = 0x3140D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3140CCu;
    // 0x3140d0: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x3140CCu, 0x3140D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3140D4u;
label_3140d4:
    // 0x3140d4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3140d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3140d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3140d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3140dc: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3140dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3140e0: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x3140e0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3140e4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3140e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3140e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3140e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3140ec: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3140ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3140f0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3140f0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3140f4: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x3140f4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3140f8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3140f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3140fc: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3140fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x314100: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x314100u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x314104: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x314104u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x314108: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x314108u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x31410c: 0x4a0003bf  vwaitq
    ctx->pc = 0x31410cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x314110: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x314110u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x314114: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x314114u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x314118: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x314118u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x31411c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x31411cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x314120: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x314120u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x314124: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x314124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x314128: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x314128u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x31412c: 0x4a0003bf  vwaitq
    ctx->pc = 0x31412cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x314130: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x314130u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x314134: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x314134u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x314138: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x314138u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x31413c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x31413cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x314140: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x314140u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x314144: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x314144u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x314148: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x314148u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x31414c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x31414cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x314150: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x314150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x314154: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x314154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x314158: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x314158u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x31415c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x31415cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x314160: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x314160u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x314164: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x314164u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x314168: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x314168u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x31416c: 0x7fa80050  sq          $t0, 0x50($sp)
    ctx->pc = 0x31416cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 8));
    // 0x314170: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x314170u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x314174: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x314174u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x314178: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x314178u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31417c: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x31417cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x314180: 0x7fa70050  sq          $a3, 0x50($sp)
    ctx->pc = 0x314180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
    // 0x314184: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x314184u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x314188: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x314188u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x31418c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x31418cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x314190: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x314190u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x314194: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x314194u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x314198: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x314198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x31419c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31419cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3141a0: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x3141a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x3141a4: 0x7e440030  sq          $a0, 0x30($s2)
    ctx->pc = 0x3141a4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 4));
    // 0x3141a8: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x3141a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x3141ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3141acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3141b0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3141b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3141b4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3141b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3141b8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3141b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3141bc: 0x7fa60080  sq          $a2, 0x80($sp)
    ctx->pc = 0x3141bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 6));
    // 0x3141c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3141c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3141c4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3141c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3141c8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3141c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3141cc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3141ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3141d0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3141d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3141d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x3141d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3141d8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3141d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3141dc: 0x482a0800  qmfc2.ni    $t2, $vf1
    ctx->pc = 0x3141dcu;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3141e0: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x3141e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x3141e4: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x3141e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x3141e8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3141e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x3141ec: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x3141ecu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x3141f0: 0x7e4a0050  sq          $t2, 0x50($s2)
    ctx->pc = 0x3141f0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 10));
    // 0x3141f4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3141f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3141f8: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x3141f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x3141fc: 0x7fa80040  sq          $t0, 0x40($sp)
    ctx->pc = 0x3141fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 8));
    // 0x314200: 0x7e470030  sq          $a3, 0x30($s2)
    ctx->pc = 0x314200u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 7));
    // 0x314204: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x314204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x314208: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x314208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x31420c: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x31420cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x314210: 0x7e430040  sq          $v1, 0x40($s2)
    ctx->pc = 0x314210u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 3));
    // 0x314214: 0xc059856  jal         func_166158
    ctx->pc = 0x314214u;
    SET_GPR_U32(ctx, 31, 0x31421Cu);
    ctx->pc = 0x314218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314214u;
    // 0x314218: 0x7faa0050  sq          $t2, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x314214u, 0x31421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31421Cu;
label_31421c:
    // 0x31421c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31421cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314220: 0x0  nop
    ctx->pc = 0x314220u;
    // NOP
    // 0x314224: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x314224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x314228: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x314228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x31422c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x31422cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x314230: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x314230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314234: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x314234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314238: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x314238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31423c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31423cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x314240: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x314240u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x314244: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x314244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x314248: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x314248u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x31424c: 0x50802a  slt         $s0, $v0, $s0
    ctx->pc = 0x31424cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x314250: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x314250u;
    {
        const bool branch_taken_0x314250 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x314250) {
            ctx->pc = 0x314254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314250u;
            // 0x314254: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314258u;
            goto label_314258;
        }
    }
    ctx->pc = 0x314258u;
label_314258:
    // 0x314258: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x314258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x31425c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31425cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x314260: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x314260u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x314264: 0xc059856  jal         func_166158
    ctx->pc = 0x314264u;
    SET_GPR_U32(ctx, 31, 0x31426Cu);
    ctx->pc = 0x314268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314264u;
    // 0x314268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x314264u, 0x31426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31426Cu;
label_31426c:
    // 0x31426c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31426Cu;
    {
        const bool branch_taken_0x31426c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x314270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31426Cu;
        // 0x314270: 0x509823  subu        $s3, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31426c) {
            ctx->pc = 0x314288u;
            goto label_314288;
        }
    }
    ctx->pc = 0x314274u;
    // 0x314274: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x314274u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314278: 0x0  nop
    ctx->pc = 0x314278u;
    // NOP
    // 0x31427c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31427cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x314280: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x314280u;
    {
        const bool branch_taken_0x314280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314280u;
        // 0x314284: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314280) {
            ctx->pc = 0x3142A8u;
            goto label_3142a8;
        }
    }
    ctx->pc = 0x314288u;
label_314288:
    // 0x314288: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x314288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x31428c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x31428cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x314290: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x314290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x314294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314298: 0x0  nop
    ctx->pc = 0x314298u;
    // NOP
    // 0x31429c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31429cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3142a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3142a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3142a4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x3142a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_3142a8:
    // 0x3142a8: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3142A8u;
    {
        const bool branch_taken_0x3142a8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3142ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142A8u;
        // 0x3142ac: 0x4600a081  sub.s       $f2, $f20, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3142a8) {
            ctx->pc = 0x3142C4u;
            goto label_3142c4;
        }
    }
    ctx->pc = 0x3142B0u;
    // 0x3142b0: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x3142b0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3142b4: 0x0  nop
    ctx->pc = 0x3142b4u;
    // NOP
    // 0x3142b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3142b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3142bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3142BCu;
    {
        const bool branch_taken_0x3142bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3142bc) {
            ctx->pc = 0x3142E0u;
            goto label_3142e0;
        }
    }
    ctx->pc = 0x3142C4u;
label_3142c4:
    // 0x3142c4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3142c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3142c8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3142c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3142cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3142ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3142d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3142d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3142d4: 0x0  nop
    ctx->pc = 0x3142d4u;
    // NOP
    // 0x3142d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3142d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3142dc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3142dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3142e0:
    // 0x3142e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3142e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3142e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3142e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3142e8: 0x13b042  srl         $s6, $s3, 1
    ctx->pc = 0x3142e8u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x3142ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3142ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3142f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3142f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3142f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3142f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3142f8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3142f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3142fc: 0x24550048  addiu       $s5, $v0, 0x48
    ctx->pc = 0x3142fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x314300: 0x0  nop
    ctx->pc = 0x314300u;
    // NOP
    // 0x314304: 0x0  nop
    ctx->pc = 0x314304u;
    // NOP
    // 0x314308: 0x46011503  div.s       $f20, $f2, $f1
    ctx->pc = 0x314308u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x31430c: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x31430cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    // 0x314310: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x314310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314314: 0x0  nop
    ctx->pc = 0x314314u;
    // NOP
label_314318:
    // 0x314318: 0xc137826  jal         func_4DE098
    ctx->pc = 0x314318u;
    SET_GPR_U32(ctx, 31, 0x314320u);
    ctx->pc = 0x31431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314318u;
    // 0x31431c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x314318u, 0x314320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314320u;
label_314320:
    // 0x314320: 0xc0e409a  jal         func_390268
    ctx->pc = 0x314320u;
    SET_GPR_U32(ctx, 31, 0x314328u);
    ctx->pc = 0x314324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314320u;
    // 0x314324: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x314320u, 0x314328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314328u;
label_314328:
    // 0x314328: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x314328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31432c: 0x52200070  beql        $s1, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x31432Cu;
    {
        const bool branch_taken_0x31432c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31432c) {
            ctx->pc = 0x314330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31432Cu;
            // 0x314330: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3144F0u;
            goto label_3144f0;
        }
    }
    ctx->pc = 0x314334u;
    // 0x314334: 0xc089f98  jal         func_227E60
    ctx->pc = 0x314334u;
    SET_GPR_U32(ctx, 31, 0x31433Cu);
    ctx->pc = 0x314338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314334u;
    // 0x314338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x314334u, 0x31433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31433Cu;
label_31433c:
    // 0x31433c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31433cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314340: 0x5043006b  beql        $v0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x314340u;
    {
        const bool branch_taken_0x314340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x314340) {
            ctx->pc = 0x314344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314340u;
            // 0x314344: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3144F0u;
            goto label_3144f0;
        }
    }
    ctx->pc = 0x314348u;
    // 0x314348: 0x12600040  beqz        $s3, . + 4 + (0x40 << 2)
    ctx->pc = 0x314348u;
    {
        const bool branch_taken_0x314348 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314348u;
        // 0x31434c: 0x26440014  addiu       $a0, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314348) {
            ctx->pc = 0x31444Cu;
            goto label_31444c;
        }
    }
    ctx->pc = 0x314350u;
    // 0x314350: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x314350u;
    SET_GPR_U32(ctx, 31, 0x314358u);
    ctx->pc = 0x314354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314350u;
    // 0x314354: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x314350u, 0x314358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314358u;
label_314358:
    // 0x314358: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x314358u;
    {
        const bool branch_taken_0x314358 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314358u;
        // 0x31435c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314358) {
            ctx->pc = 0x314374u;
            goto label_314374;
        }
    }
    ctx->pc = 0x314360u;
    // 0x314360: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314364: 0x0  nop
    ctx->pc = 0x314364u;
    // NOP
    // 0x314368: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x314368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31436c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31436Cu;
    {
        const bool branch_taken_0x31436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31436c) {
            ctx->pc = 0x31438Cu;
            goto label_31438c;
        }
    }
    ctx->pc = 0x314374u;
label_314374:
    // 0x314374: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x314374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x314378: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x314378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31437c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31437cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314380: 0x0  nop
    ctx->pc = 0x314380u;
    // NOP
    // 0x314384: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x314384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x314388: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x314388u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_31438c:
    // 0x31438c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31438cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x314390: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x314390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314394: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x314394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x314398: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x314398u;
    {
        const bool branch_taken_0x314398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314398u;
        // 0x31439c: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314398) {
            ctx->pc = 0x3143A8u;
            goto label_3143a8;
        }
    }
    ctx->pc = 0x3143A0u;
    // 0x3143a0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3143a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3143a4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3143a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3143a8:
    // 0x3143a8: 0x0  nop
    ctx->pc = 0x3143a8u;
    // NOP
    // 0x3143ac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3143acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x3143b0: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x3143b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3143b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3143b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3143b8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3143b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3143bc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3143bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3143c0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3143c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3143c4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3143c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3143c8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3143c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3143cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3143ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3143d0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3143d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3143d4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3143d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3143d8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3143d8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3143dc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3143dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3143e0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3143e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x3143e4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3143e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x3143e8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3143e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x3143ec: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3143ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x3143f0: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3143f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x3143f4: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3143f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x3143f8: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x3143F8u;
    SET_GPR_U32(ctx, 31, 0x314400u);
    ctx->pc = 0x3143FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3143F8u;
    // 0x3143fc: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x3143F8u, 0x314400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314400u;
label_314400:
    // 0x314400: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314404: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x314404u;
    {
        const bool branch_taken_0x314404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x314408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314404u;
        // 0x314408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314404) {
            ctx->pc = 0x314430u;
            goto label_314430;
        }
    }
    ctx->pc = 0x31440Cu;
    // 0x31440c: 0xc087502  jal         func_21D408
    ctx->pc = 0x31440Cu;
    SET_GPR_U32(ctx, 31, 0x314414u);
    ctx->pc = 0x314410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31440Cu;
    // 0x314410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31440Cu, 0x314414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314414u;
label_314414:
    // 0x314414: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x314414u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x314418: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x314418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31441c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31441cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314420: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x314420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x314424: 0xc0b2756  jal         func_2C9D58
    ctx->pc = 0x314424u;
    SET_GPR_U32(ctx, 31, 0x31442Cu);
    ctx->pc = 0x314428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314424u;
    // 0x314428: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D58u, 0x314424u, 0x31442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31442Cu;
label_31442c:
    // 0x31442c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31442cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314430:
    // 0x314430: 0xc087502  jal         func_21D408
    ctx->pc = 0x314430u;
    SET_GPR_U32(ctx, 31, 0x314438u);
    ctx->pc = 0x314434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314430u;
    // 0x314434: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x314430u, 0x314438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314438u;
label_314438:
    // 0x314438: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x314438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31443c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x31443Cu;
    SET_GPR_U32(ctx, 31, 0x314444u);
    ctx->pc = 0x314440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31443Cu;
    // 0x314440: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31443Cu, 0x314444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314444u;
label_314444:
    // 0x314444: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x314444u;
    {
        const bool branch_taken_0x314444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314444u;
        // 0x314448: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314444) {
            ctx->pc = 0x3144F0u;
            goto label_3144f0;
        }
    }
    ctx->pc = 0x31444Cu;
label_31444c:
    // 0x31444c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31444cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x314450: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x314450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314454: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x314454u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x314458: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x314458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31445c: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x31445cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x314460: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x314460u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x314464: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x314464u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x314468: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x314468u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31446c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x31446cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x314470: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x314470u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314474: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x314474u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x314478: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x314478u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x31447c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x31447cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x314480: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x314480u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x314484: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x314484u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x314488: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x314488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x31448c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x31448cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x314490: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x314490u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x314494: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x314494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x314498: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x314498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x31449c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x31449cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x3144a0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3144a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x3144a4: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x3144A4u;
    SET_GPR_U32(ctx, 31, 0x3144ACu);
    ctx->pc = 0x3144A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3144A4u;
    // 0x3144a8: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x3144A4u, 0x3144ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3144ACu;
label_3144ac:
    // 0x3144ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3144acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3144b0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3144B0u;
    {
        const bool branch_taken_0x3144b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3144b0) {
            ctx->pc = 0x3144D8u;
            goto label_3144d8;
        }
    }
    ctx->pc = 0x3144B8u;
    // 0x3144b8: 0xc087502  jal         func_21D408
    ctx->pc = 0x3144B8u;
    SET_GPR_U32(ctx, 31, 0x3144C0u);
    ctx->pc = 0x3144BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3144B8u;
    // 0x3144bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3144B8u, 0x3144C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3144C0u;
label_3144c0:
    // 0x3144c0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x3144c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x3144c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3144c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3144c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3144c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3144cc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3144ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3144d0: 0xc0b2386  jal         func_2C8E18
    ctx->pc = 0x3144D0u;
    SET_GPR_U32(ctx, 31, 0x3144D8u);
    ctx->pc = 0x3144D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3144D0u;
    // 0x3144d4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8E18u, 0x3144D0u, 0x3144D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3144D8u;
label_3144d8:
    // 0x3144d8: 0xc087502  jal         func_21D408
    ctx->pc = 0x3144D8u;
    SET_GPR_U32(ctx, 31, 0x3144E0u);
    ctx->pc = 0x3144DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3144D8u;
    // 0x3144dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3144D8u, 0x3144E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3144E0u;
label_3144e0:
    // 0x3144e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3144e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3144e4: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x3144E4u;
    SET_GPR_U32(ctx, 31, 0x3144ECu);
    ctx->pc = 0x3144E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3144E4u;
    // 0x3144e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x3144E4u, 0x3144ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3144ECu;
label_3144ec:
    // 0x3144ec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3144ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3144f0:
    // 0x3144f0: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x3144f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3144f4: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
    ctx->pc = 0x3144F4u;
    {
        const bool branch_taken_0x3144f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3144F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144F4u;
        // 0x3144f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3144f4) {
            ctx->pc = 0x314318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314318;
        }
    }
    ctx->pc = 0x3144FCu;
label_3144fc:
    // 0x3144fc: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x3144fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_314500:
    // 0x314500: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x314500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x314504: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x314504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x314508: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x314508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31450c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x31450cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x314510: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x314510u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x314514: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x314514u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x314518: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x314518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31451c: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x31451cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x314520: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x314520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x314524: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x314524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x314528: 0x3e00008  jr          $ra
    ctx->pc = 0x314528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314528u;
        // 0x31452c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314530u;
}
