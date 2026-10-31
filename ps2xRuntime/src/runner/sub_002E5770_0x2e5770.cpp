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

// Function: sub_002E5770
// Address: 0x2e5770 - 0x2e5870
void sub_002E5770_0x2e5770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5770_0x2e5770");
#endif

    switch (ctx->pc) {
        case 0x2e579cu: goto label_2e579c;
        case 0x2e57b0u: goto label_2e57b0;
        case 0x2e57b8u: goto label_2e57b8;
        case 0x2e57f0u: goto label_2e57f0;
        case 0x2e57fcu: goto label_2e57fc;
        case 0x2e582cu: goto label_2e582c;
        case 0x2e5840u: goto label_2e5840;
        case 0x2e5858u: goto label_2e5858;
        default: break;
    }

    ctx->pc = 0x2e5770u;

    // 0x2e5770: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e5770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e5774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e5774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5778: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2e5778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2e577c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2e577cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2e5780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e5780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5784: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2e5784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2e5788: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e5788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e578c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e578cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e5790: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2e5790u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e5794: 0xc0a22c6  jal         func_288B18
    ctx->pc = 0x2E5794u;
    SET_GPR_U32(ctx, 31, 0x2E579Cu);
    ctx->pc = 0x2E5798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5794u;
    // 0x2e5798: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2E5794u, 0x2E579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E579Cu;
label_2e579c:
    // 0x2e579c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2e579cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2e57a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e57a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57a4: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x2e57a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2e57a8: 0xc0d50de  jal         func_354378
    ctx->pc = 0x2E57A8u;
    SET_GPR_U32(ctx, 31, 0x2E57B0u);
    ctx->pc = 0x2E57ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E57A8u;
    // 0x2e57ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354378u, 0x2E57A8u, 0x2E57B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E57B0u;
label_2e57b0:
    // 0x2e57b0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2E57B0u;
    SET_GPR_U32(ctx, 31, 0x2E57B8u);
    ctx->pc = 0x2E57B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E57B0u;
    // 0x2e57b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E57B0u, 0x2E57B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E57B8u;
label_2e57b8:
    // 0x2e57b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e57b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57bc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E57BCu;
    {
        const bool branch_taken_0x2e57bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E57C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E57BCu;
        // 0x2e57c0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57bc) {
            ctx->pc = 0x2E57F0u;
            goto label_2e57f0;
        }
    }
    ctx->pc = 0x2E57C4u;
    // 0x2e57c4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e57c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e57c8: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2e57c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2e57cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e57ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57d0: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x2e57d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2e57d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e57d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57d8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e57d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2e57dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e57dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e57e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e57e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e57e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e57e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57e8: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2E57E8u;
    SET_GPR_U32(ctx, 31, 0x2E57F0u);
    ctx->pc = 0x2E57ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E57E8u;
    // 0x2e57ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2E57E8u, 0x2E57F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E57F0u;
label_2e57f0:
    // 0x2e57f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e57f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e57f4: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2E57F4u;
    SET_GPR_U32(ctx, 31, 0x2E57FCu);
    ctx->pc = 0x2E57F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E57F4u;
    // 0x2e57f8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2E57F4u, 0x2E57FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E57FCu;
label_2e57fc:
    // 0x2e57fc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2e57fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5800: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2e5800u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5804: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e5804u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e5808: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2e5808u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2e580c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e580cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e5810: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e5810u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2e5814: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2e5814u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2e5818: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e5818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e581c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2e581cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2e5820: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2e5820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2e5824: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2E5824u;
    SET_GPR_U32(ctx, 31, 0x2E582Cu);
    ctx->pc = 0x2E5828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5824u;
    // 0x2e5828: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E5824u, 0x2E582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E582Cu;
label_2e582c:
    // 0x2e582c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e582cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5830: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5830u;
    {
        const bool branch_taken_0x2e5830 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5830u;
        // 0x2e5834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5830) {
            ctx->pc = 0x2E5858u;
            goto label_2e5858;
        }
    }
    ctx->pc = 0x2E5838u;
    // 0x2e5838: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2E5838u;
    SET_GPR_U32(ctx, 31, 0x2E5840u);
    ctx->pc = 0x2E583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5838u;
    // 0x2e583c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2E5838u, 0x2E5840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5840u;
label_2e5840:
    // 0x2e5840: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e5840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e5844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e5844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5848: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e5848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e584c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e584cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e5850: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2E5850u;
    SET_GPR_U32(ctx, 31, 0x2E5858u);
    ctx->pc = 0x2E5854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5850u;
    // 0x2e5854: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2E5850u, 0x2E5858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5858u;
label_2e5858:
    // 0x2e5858: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2e5858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e585c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2e585cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e5860: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2e5860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5864: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e5864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e5868: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5868u;
        // 0x2e586c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5870u;
}
