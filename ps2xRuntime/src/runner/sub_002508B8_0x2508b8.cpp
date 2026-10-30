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

// Function: sub_002508B8
// Address: 0x2508b8 - 0x250960
void sub_002508B8_0x2508b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002508B8_0x2508b8");
#endif

    switch (ctx->pc) {
        case 0x2508d0u: goto label_2508d0;
        case 0x250948u: goto label_250948;
        default: break;
    }

    ctx->pc = 0x2508b8u;

    // 0x2508b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2508b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2508bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2508bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2508c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2508c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2508c4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2508c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2508c8: 0x84c50014  lh          $a1, 0x14($a2)
    ctx->pc = 0x2508c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2508cc: 0x0  nop
    ctx->pc = 0x2508ccu;
    // NOP
label_2508d0:
    // 0x2508d0: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2508D0u;
    {
        const bool branch_taken_0x2508d0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2508D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2508D0u;
        // 0x2508d4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2508d0) {
            ctx->pc = 0x2508F8u;
            goto label_2508f8;
        }
    }
    ctx->pc = 0x2508D8u;
    // 0x2508d8: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x2508d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2508dc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2508dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2508e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2508e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2508e4: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x2508e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2508e8: 0x30420050  andi        $v0, $v0, 0x50
    ctx->pc = 0x2508e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)80);
    // 0x2508ec: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2508ECu;
    {
        const bool branch_taken_0x2508ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2508ec) {
            ctx->pc = 0x2508D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2508d0;
        }
    }
    ctx->pc = 0x2508F4u;
    // 0x2508f4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2508f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2508f8:
    // 0x2508f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2508f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2508fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2508fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250900: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x250900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250904: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x250904u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x250908: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x250908u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25090c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x25090cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x250910: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x250910u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x250914: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x250914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x250918: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x250918u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x25091c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x25091cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x250920: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x250920u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x250924: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x250924u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x250928: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x250928u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x25092c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x25092cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x250930: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x250930u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x250934: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x250934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x250938: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x250938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x25093c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x25093cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x250940: 0xc094040  jal         func_250100
    ctx->pc = 0x250940u;
    SET_GPR_U32(ctx, 31, 0x250948u);
    ctx->pc = 0x250944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250940u;
    // 0x250944: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250100u, 0x250940u, 0x250948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250948u;
label_250948:
    // 0x250948: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x250948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25094c: 0x3e00008  jr          $ra
    ctx->pc = 0x25094Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25094Cu;
        // 0x250950: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25094Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250954u;
    // 0x250954: 0x0  nop
    ctx->pc = 0x250954u;
    // NOP
    // 0x250958: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x250958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25095c: 0x0  nop
    ctx->pc = 0x25095cu;
    // NOP
    ctx->pc = 0x250960u;
}
