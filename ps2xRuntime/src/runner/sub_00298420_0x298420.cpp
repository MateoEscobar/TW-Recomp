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

// Function: sub_00298420
// Address: 0x298420 - 0x2985e0
void sub_00298420_0x298420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298420_0x298420");
#endif

    switch (ctx->pc) {
        case 0x298448u: goto label_298448;
        case 0x298454u: goto label_298454;
        case 0x298474u: goto label_298474;
        case 0x2984a0u: goto label_2984a0;
        case 0x2984f0u: goto label_2984f0;
        case 0x298530u: goto label_298530;
        case 0x298548u: goto label_298548;
        case 0x29856cu: goto label_29856c;
        case 0x29858cu: goto label_29858c;
        case 0x2985b0u: goto label_2985b0;
        default: break;
    }

    ctx->pc = 0x298420u;

    // 0x298420: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x298420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x298424: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x298424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x298428: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x298428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29842c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x29842cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x298430: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x298430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x298434: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x298434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x298438: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x298438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29843c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29843cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x298440: 0xc0a5a72  jal         func_2969C8
    ctx->pc = 0x298440u;
    SET_GPR_U32(ctx, 31, 0x298448u);
    ctx->pc = 0x298444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298440u;
    // 0x298444: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x298440u, 0x298448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298448u;
label_298448:
    // 0x298448: 0x8624000c  lh          $a0, 0xC($s1)
    ctx->pc = 0x298448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29844c: 0xc0e402c  jal         func_3900B0
    ctx->pc = 0x29844Cu;
    SET_GPR_U32(ctx, 31, 0x298454u);
    ctx->pc = 0x298450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29844Cu;
    // 0x298450: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x29844Cu, 0x298454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298454u;
label_298454:
    // 0x298454: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298458: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x298458u;
    {
        const bool branch_taken_0x298458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298458u;
        // 0x29845c: 0x26140090  addiu       $s4, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298458) {
            ctx->pc = 0x298584u;
            goto label_298584;
        }
    }
    ctx->pc = 0x298460u;
    // 0x298460: 0x3c013dfa  lui         $at, 0x3DFA
    ctx->pc = 0x298460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15866 << 16));
    // 0x298464: 0x342135de  ori         $at, $at, 0x35DE
    ctx->pc = 0x298464u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13790);
    // 0x298468: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29846c: 0xc12e34c  jal         func_4B8D30
    ctx->pc = 0x29846Cu;
    SET_GPR_U32(ctx, 31, 0x298474u);
    ctx->pc = 0x298470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29846Cu;
    // 0x298470: 0x26530284  addiu       $s3, $s2, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x29846Cu, 0x298474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298474u;
label_298474:
    // 0x298474: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x298474u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x298478: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x298478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x29847c: 0x86860002  lh          $a2, 0x2($s4)
    ctx->pc = 0x29847cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x298480: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x298480u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x298484: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x298484u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x298488: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x298488u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x29848c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x29848cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x298490: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x298490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x298494: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x298494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x298498: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x298498u;
    SET_GPR_U32(ctx, 31, 0x2984A0u);
    ctx->pc = 0x29849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298498u;
    // 0x29849c: 0xd23021  addu        $a2, $a2, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x298498u, 0x2984A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2984A0u;
label_2984a0:
    // 0x2984a0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2984a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2984a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2984a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2984a8: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x2984a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2984ac: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2984acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2984b0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2984b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x2984b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2984b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2984b8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2984b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2984bc: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2984bcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2984c0: 0x9223000f  lbu         $v1, 0xF($s1)
    ctx->pc = 0x2984c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
    // 0x2984c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2984c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2984c8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2984c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2984cc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2984CCu;
    {
        const bool branch_taken_0x2984cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2984D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984CCu;
        // 0x2984d0: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2984cc) {
            ctx->pc = 0x2984F8u;
            goto label_2984f8;
        }
    }
    ctx->pc = 0x2984D4u;
    // 0x2984d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2984d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2984d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2984d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2984dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2984dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2984e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2984e4: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2984e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2984e8: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x2984E8u;
    SET_GPR_U32(ctx, 31, 0x2984F0u);
    ctx->pc = 0x2984ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2984E8u;
    // 0x2984ec: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2984E8u, 0x2984F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2984F0u;
label_2984f0:
    // 0x2984f0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2984F0u;
    {
        const bool branch_taken_0x2984f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2984F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984F0u;
        // 0x2984f4: 0x9222000f  lbu         $v0, 0xF($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2984f0) {
            ctx->pc = 0x2985B4u;
            goto label_2985b4;
        }
    }
    ctx->pc = 0x2984F8u;
label_2984f8:
    // 0x2984f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2984f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2984fc: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2984FCu;
    {
        const bool branch_taken_0x2984fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x298500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984FCu;
        // 0x298500: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2984fc) {
            ctx->pc = 0x298574u;
            goto label_298574;
        }
    }
    ctx->pc = 0x298504u;
    // 0x298504: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x298504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x298508: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x298508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x29850c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29850cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x298510: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x298510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x298514: 0x86900002  lh          $s0, 0x2($s4)
    ctx->pc = 0x298514u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x298518: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x298518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29851c: 0x46146301  sub.s       $f12, $f12, $f20
    ctx->pc = 0x29851cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    // 0x298520: 0x24a51740  addiu       $a1, $a1, 0x1740
    ctx->pc = 0x298520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
    // 0x298524: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x298524u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x298528: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x298528u;
    SET_GPR_U32(ctx, 31, 0x298530u);
    ctx->pc = 0x29852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298528u;
    // 0x29852c: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x298528u, 0x298530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298530u;
label_298530:
    // 0x298530: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x298530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298534: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x298534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298538: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x298538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29853c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x29853cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x298540: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x298540u;
    SET_GPR_U32(ctx, 31, 0x298548u);
    ctx->pc = 0x298544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298540u;
    // 0x298544: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x298540u, 0x298548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298548u;
label_298548:
    // 0x298548: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x298548u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29854c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29854cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298550: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x298550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x298554: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x298558: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x298558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29855c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x29855cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x298560: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x298560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x298564: 0xc0a67ca  jal         func_299F28
    ctx->pc = 0x298564u;
    SET_GPR_U32(ctx, 31, 0x29856Cu);
    ctx->pc = 0x298568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298564u;
    // 0x298568: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F28u, 0x298564u, 0x29856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29856Cu;
label_29856c:
    // 0x29856c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x29856Cu;
    {
        const bool branch_taken_0x29856c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29856Cu;
        // 0x298570: 0x9222000f  lbu         $v0, 0xF($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29856c) {
            ctx->pc = 0x2985B4u;
            goto label_2985b4;
        }
    }
    ctx->pc = 0x298574u;
label_298574:
    // 0x298574: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x298574u;
    {
        const bool branch_taken_0x298574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x298578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298574u;
        // 0x298578: 0x2c620009  sltiu       $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298574) {
            ctx->pc = 0x298594u;
            goto label_298594;
        }
    }
    ctx->pc = 0x29857Cu;
    // 0x29857c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x29857Cu;
    {
        const bool branch_taken_0x29857c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29857c) {
            ctx->pc = 0x298580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29857Cu;
            // 0x298580: 0x9222000f  lbu         $v0, 0xF($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2985B4u;
            goto label_2985b4;
        }
    }
    ctx->pc = 0x298584u;
label_298584:
    // 0x298584: 0xc0a5d78  jal         func_2975E0
    ctx->pc = 0x298584u;
    SET_GPR_U32(ctx, 31, 0x29858Cu);
    ctx->pc = 0x298588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298584u;
    // 0x298588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2975E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2975E0u, 0x298584u, 0x29858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29858Cu;
label_29858c:
    // 0x29858c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29858Cu;
    {
        const bool branch_taken_0x29858c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29858Cu;
        // 0x298590: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29858c) {
            ctx->pc = 0x2985C0u;
            goto label_2985c0;
        }
    }
    ctx->pc = 0x298594u;
label_298594:
    // 0x298594: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x298594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x298598: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29859c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29859cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2985a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985a4: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2985a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2985a8: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x2985A8u;
    SET_GPR_U32(ctx, 31, 0x2985B0u);
    ctx->pc = 0x2985ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985A8u;
    // 0x2985ac: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2985A8u, 0x2985B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985B0u;
label_2985b0:
    // 0x2985b0: 0x9222000f  lbu         $v0, 0xF($s1)
    ctx->pc = 0x2985b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
label_2985b4:
    // 0x2985b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2985b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2985b8: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x2985b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x2985bc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2985bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2985c0:
    // 0x2985c0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2985c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2985c4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2985c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2985c8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2985c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2985cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2985ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2985d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2985d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2985d4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2985d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2985d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2985D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2985DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2985D8u;
        // 0x2985dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2985D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2985E0u;
}
