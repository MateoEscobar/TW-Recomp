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

// Function: sub_002BA608
// Address: 0x2ba608 - 0x2ba6f0
void sub_002BA608_0x2ba608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA608_0x2ba608");
#endif

    switch (ctx->pc) {
        case 0x2ba69cu: goto label_2ba69c;
        default: break;
    }

    ctx->pc = 0x2ba608u;

    // 0x2ba608: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ba608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ba60c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2ba60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2ba610: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2ba610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2ba614: 0x2442fb50  addiu       $v0, $v0, -0x4B0
    ctx->pc = 0x2ba614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966096));
    // 0x2ba618: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ba618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ba61c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba61cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba620: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2ba620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2ba624: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x2ba624u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x2ba628: 0xae270008  sw          $a3, 0x8($s1)
    ctx->pc = 0x2ba628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
    // 0x2ba62c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2ba62cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ba630: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2ba630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x2ba634: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x2ba634u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x2ba638: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2ba638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2ba63c: 0x24e716c0  addiu       $a3, $a3, 0x16C0
    ctx->pc = 0x2ba63cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5824));
    // 0x2ba640: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x2ba640u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ba644: 0x240b002d  addiu       $t3, $zero, 0x2D
    ctx->pc = 0x2ba644u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2ba648: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x2ba648u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ba64c: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x2ba64cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x2ba650: 0x25084b00  addiu       $t0, $t0, 0x4B00
    ctx->pc = 0x2ba650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19200));
    // 0x2ba654: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2ba654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ba658: 0x8d23bd30  lw          $v1, -0x42D0($t1)
    ctx->pc = 0x2ba658u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2ba65c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2ba65cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x2ba660: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2ba660u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ba664: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x2ba664u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x2ba668: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2ba668u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x2ba66c: 0xae2a0040  sw          $t2, 0x40($s1)
    ctx->pc = 0x2ba66cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 10));
    // 0x2ba670: 0x7e230030  sq          $v1, 0x30($s1)
    ctx->pc = 0x2ba670u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
    // 0x2ba674: 0xae2b0044  sw          $t3, 0x44($s1)
    ctx->pc = 0x2ba674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 11));
    // 0x2ba678: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x2ba678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x2ba67c: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x2ba67cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x2ba680: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2ba680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x2ba684: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ba684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ba688: 0x84500092  lh          $s0, 0x92($v0)
    ctx->pc = 0x2ba688u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2ba68c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2ba68cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2ba690: 0x2088021  addu        $s0, $s0, $t0
    ctx->pc = 0x2ba690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x2ba694: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2BA694u;
    SET_GPR_U32(ctx, 31, 0x2BA69Cu);
    ctx->pc = 0x2BA698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA694u;
    // 0x2ba698: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2BA694u, 0x2BA69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA69Cu;
label_2ba69c:
    // 0x2ba69c: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x2ba69cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ba6a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ba6a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba6a4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2ba6a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba6a8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2ba6a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2ba6ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2ba6acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2ba6b0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2ba6b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2ba6b4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2ba6b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2ba6b8: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x2ba6b8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2ba6bc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ba6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ba6c0: 0x7e240030  sq          $a0, 0x30($s1)
    ctx->pc = 0x2ba6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 4));
    // 0x2ba6c4: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x2ba6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x2ba6c8: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x2ba6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x2ba6cc: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x2ba6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x2ba6d0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2ba6d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ba6d4: 0x8ca3021c  lw          $v1, 0x21C($a1)
    ctx->pc = 0x2ba6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
    // 0x2ba6d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ba6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ba6dc: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x2ba6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x2ba6e0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2ba6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ba6e4: 0xaca0021c  sw          $zero, 0x21C($a1)
    ctx->pc = 0x2ba6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 540), GPR_U32(ctx, 0));
    // 0x2ba6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6E8u;
        // 0x2ba6ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA6F0u;
}
