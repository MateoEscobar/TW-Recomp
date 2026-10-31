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

// Function: sub_003A50E0
// Address: 0x3a50e0 - 0x3a51f8
void sub_003A50E0_0x3a50e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A50E0_0x3a50e0");
#endif

    switch (ctx->pc) {
        case 0x3a50e0u: goto label_3a50e0;
        case 0x3a50e4u: goto label_3a50e4;
        case 0x3a50e8u: goto label_3a50e8;
        case 0x3a50ecu: goto label_3a50ec;
        case 0x3a50f0u: goto label_3a50f0;
        case 0x3a50f4u: goto label_3a50f4;
        case 0x3a50f8u: goto label_3a50f8;
        case 0x3a50fcu: goto label_3a50fc;
        case 0x3a5100u: goto label_3a5100;
        case 0x3a5104u: goto label_3a5104;
        case 0x3a5108u: goto label_3a5108;
        case 0x3a510cu: goto label_3a510c;
        case 0x3a5110u: goto label_3a5110;
        case 0x3a5114u: goto label_3a5114;
        case 0x3a5118u: goto label_3a5118;
        case 0x3a511cu: goto label_3a511c;
        case 0x3a5120u: goto label_3a5120;
        case 0x3a5124u: goto label_3a5124;
        case 0x3a5128u: goto label_3a5128;
        case 0x3a512cu: goto label_3a512c;
        case 0x3a5130u: goto label_3a5130;
        case 0x3a5134u: goto label_3a5134;
        case 0x3a5138u: goto label_3a5138;
        case 0x3a513cu: goto label_3a513c;
        case 0x3a5140u: goto label_3a5140;
        case 0x3a5144u: goto label_3a5144;
        case 0x3a5148u: goto label_3a5148;
        case 0x3a514cu: goto label_3a514c;
        case 0x3a5150u: goto label_3a5150;
        case 0x3a5154u: goto label_3a5154;
        case 0x3a5158u: goto label_3a5158;
        case 0x3a515cu: goto label_3a515c;
        case 0x3a5160u: goto label_3a5160;
        case 0x3a5164u: goto label_3a5164;
        case 0x3a5168u: goto label_3a5168;
        case 0x3a516cu: goto label_3a516c;
        case 0x3a5170u: goto label_3a5170;
        case 0x3a5174u: goto label_3a5174;
        case 0x3a5178u: goto label_3a5178;
        case 0x3a517cu: goto label_3a517c;
        case 0x3a5180u: goto label_3a5180;
        case 0x3a5184u: goto label_3a5184;
        case 0x3a5188u: goto label_3a5188;
        case 0x3a518cu: goto label_3a518c;
        case 0x3a5190u: goto label_3a5190;
        case 0x3a5194u: goto label_3a5194;
        case 0x3a5198u: goto label_3a5198;
        case 0x3a519cu: goto label_3a519c;
        case 0x3a51a0u: goto label_3a51a0;
        case 0x3a51a4u: goto label_3a51a4;
        case 0x3a51a8u: goto label_3a51a8;
        case 0x3a51acu: goto label_3a51ac;
        case 0x3a51b0u: goto label_3a51b0;
        case 0x3a51b4u: goto label_3a51b4;
        case 0x3a51b8u: goto label_3a51b8;
        case 0x3a51bcu: goto label_3a51bc;
        case 0x3a51c0u: goto label_3a51c0;
        case 0x3a51c4u: goto label_3a51c4;
        case 0x3a51c8u: goto label_3a51c8;
        case 0x3a51ccu: goto label_3a51cc;
        case 0x3a51d0u: goto label_3a51d0;
        case 0x3a51d4u: goto label_3a51d4;
        case 0x3a51d8u: goto label_3a51d8;
        case 0x3a51dcu: goto label_3a51dc;
        case 0x3a51e0u: goto label_3a51e0;
        case 0x3a51e4u: goto label_3a51e4;
        case 0x3a51e8u: goto label_3a51e8;
        case 0x3a51ecu: goto label_3a51ec;
        case 0x3a51f0u: goto label_3a51f0;
        case 0x3a51f4u: goto label_3a51f4;
        default: break;
    }

    ctx->pc = 0x3a50e0u;

label_3a50e0:
    // 0x3a50e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3a50e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3a50e4:
    // 0x3a50e4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3a50e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3a50e8:
    // 0x3a50e8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3a50e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3a50ec:
    // 0x3a50ec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3a50ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3a50f0:
    // 0x3a50f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a50f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a50f4:
    // 0x3a50f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a50f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3a50f8:
    // 0x3a50f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a50f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a50fc:
    // 0x3a50fc: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x3a50fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3a5100:
    // 0x3a5100: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x3a5100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a5104:
    // 0x3a5104: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a5104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3a5108:
    // 0x3a5108: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x3a5108u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_3a510c:
    // 0x3a510c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x3a510cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3a5110:
    // 0x3a5110: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3a5110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3a5114:
    // 0x3a5114: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3a5114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a5118:
    // 0x3a5118: 0xc047e6c  jal         func_11F9B0
label_3a511c:
    if (ctx->pc == 0x3A511Cu) {
        ctx->pc = 0x3A511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5118u;
        // 0x3a511c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5120u;
        goto label_3a5120;
    }
    ctx->pc = 0x3A5118u;
    SET_GPR_U32(ctx, 31, 0x3A5120u);
    ctx->pc = 0x3A511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5118u;
    // 0x3a511c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A5118u, 0x3A5120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5120u;
label_3a5120:
    // 0x3a5120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a5120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a5124:
    // 0x3a5124: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a5124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a5128:
    // 0x3a5128: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3a5128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3a512c:
    // 0x3a512c: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x3a512cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3a5130:
    // 0x3a5130: 0x40f809  jalr        $v0
label_3a5134:
    if (ctx->pc == 0x3A5134u) {
        ctx->pc = 0x3A5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5130u;
        // 0x3a5134: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5138u;
        goto label_3a5138;
    }
    ctx->pc = 0x3A5130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A5138u);
        ctx->pc = 0x3A5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5130u;
        // 0x3a5134: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5130u, 0x3A5138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A5138u;
label_3a5138:
    // 0x3a5138: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a5138u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3a513c:
    // 0x3a513c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a513cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a5140:
    // 0x3a5140: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3a5140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3a5144:
    // 0x3a5144: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a5144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a5148:
    // 0x3a5148: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x3a5148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_3a514c:
    // 0x3a514c: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x3a514cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_3a5150:
    // 0x3a5150: 0x40f809  jalr        $v0
label_3a5154:
    if (ctx->pc == 0x3A5154u) {
        ctx->pc = 0x3A5154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5150u;
        // 0x3a5154: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5158u;
        goto label_3a5158;
    }
    ctx->pc = 0x3A5150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A5158u);
        ctx->pc = 0x3A5154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5150u;
        // 0x3a5154: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5150u, 0x3A5158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A5158u;
label_3a5158:
    // 0x3a5158: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x3a5158u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a515c:
    // 0x3a515c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a515cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a5160:
    // 0x3a5160: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x3a5160u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3a5164:
    // 0x3a5164: 0x84e40170  lh          $a0, 0x170($a3)
    ctx->pc = 0x3a5164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 368)));
label_3a5168:
    // 0x3a5168: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x3a5168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
label_3a516c:
    // 0x3a516c: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x3a516cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_3a5170:
    // 0x3a5170: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x3a5170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_3a5174:
    // 0x3a5174: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3a5174u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3a5178:
    // 0x3a5178: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x3a5178u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_3a517c:
    // 0x3a517c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3a517cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a5180:
    // 0x3a5180: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3a5180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a5184:
    // 0x3a5184: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3a5184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a5188:
    // 0x3a5188: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x3a5188u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
label_3a518c:
    // 0x3a518c: 0x4487a000  mtc1        $a3, $f20
    ctx->pc = 0x3a518cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3a5190:
    // 0x3a5190: 0x40f809  jalr        $v0
label_3a5194:
    if (ctx->pc == 0x3A5194u) {
        ctx->pc = 0x3A5198u;
        goto label_3a5198;
    }
    ctx->pc = 0x3A5190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A5198u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5190u, 0x3A5198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A5198u;
label_3a5198:
    // 0x3a5198: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3a5198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a519c:
    // 0x3a519c: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x3a519cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
label_3a51a0:
    // 0x3a51a0: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x3a51a0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3a51a4:
    // 0x3a51a4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x3a51a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a51a8:
    // 0x3a51a8: 0x0  nop
    ctx->pc = 0x3a51a8u;
    // NOP
label_3a51ac:
    // 0x3a51ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3a51b0:
    if (ctx->pc == 0x3A51B0u) {
        ctx->pc = 0x3A51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51ACu;
        // 0x3a51b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A51B4u;
        goto label_3a51b4;
    }
    ctx->pc = 0x3A51ACu;
    {
        const bool branch_taken_0x3a51ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51ACu;
        // 0x3a51b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a51ac) {
            ctx->pc = 0x3A51BCu;
            goto label_3a51bc;
        }
    }
    ctx->pc = 0x3A51B4u;
label_3a51b4:
    // 0x3a51b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a51b8:
    if (ctx->pc == 0x3A51B8u) {
        ctx->pc = 0x3A51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51B4u;
        // 0x3a51b8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A51BCu;
        goto label_3a51bc;
    }
    ctx->pc = 0x3A51B4u;
    {
        const bool branch_taken_0x3a51b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51B4u;
        // 0x3a51b8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a51b4) {
            ctx->pc = 0x3A51CCu;
            goto label_3a51cc;
        }
    }
    ctx->pc = 0x3A51BCu;
label_3a51bc:
    // 0x3a51bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a51bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a51c0:
    // 0x3a51c0: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x3a51c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3a51c4:
    // 0x3a51c4: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
label_3a51c8:
    if (ctx->pc == 0x3A51C8u) {
        ctx->pc = 0x3A51C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51C4u;
        // 0x3a51c8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A51CCu;
        goto label_3a51cc;
    }
    ctx->pc = 0x3A51C4u;
    {
        const bool branch_taken_0x3a51c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a51c4) {
            ctx->pc = 0x3A51C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A51C4u;
            // 0x3a51c8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5148;
        }
    }
    ctx->pc = 0x3A51CCu;
label_3a51cc:
    // 0x3a51cc: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x3a51ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_3a51d0:
    // 0x3a51d0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3a51d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a51d4:
    // 0x3a51d4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3a51d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a51d8:
    // 0x3a51d8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3a51d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a51dc:
    // 0x3a51dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a51dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a51e0:
    // 0x3a51e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a51e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a51e4:
    // 0x3a51e4: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x3a51e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3a51e8:
    // 0x3a51e8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3a51e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a51ec:
    // 0x3a51ec: 0x3e00008  jr          $ra
label_3a51f0:
    if (ctx->pc == 0x3A51F0u) {
        ctx->pc = 0x3A51F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51ECu;
        // 0x3a51f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A51F4u;
        goto label_3a51f4;
    }
    ctx->pc = 0x3A51ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A51F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51ECu;
        // 0x3a51f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A51ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A51F4u;
label_3a51f4:
    // 0x3a51f4: 0x0  nop
    ctx->pc = 0x3a51f4u;
    // NOP
    ctx->pc = 0x3a51f8u;
}
