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

// Function: sub_0029B4B8
// Address: 0x29b4b8 - 0x29b6d8
void sub_0029B4B8_0x29b4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B4B8_0x29b4b8");
#endif

    switch (ctx->pc) {
        case 0x29b4e4u: goto label_29b4e4;
        case 0x29b4f8u: goto label_29b4f8;
        case 0x29b508u: goto label_29b508;
        case 0x29b548u: goto label_29b548;
        case 0x29b558u: goto label_29b558;
        case 0x29b680u: goto label_29b680;
        case 0x29b6a4u: goto label_29b6a4;
        default: break;
    }

    ctx->pc = 0x29b4b8u;

    // 0x29b4b8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x29b4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x29b4bc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x29b4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x29b4c0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x29b4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x29b4c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29b4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b4c8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x29b4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x29b4cc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x29b4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x29b4d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29b4d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b4d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x29b4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x29b4d8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x29b4d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x29b4dc: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x29B4DCu;
    SET_GPR_U32(ctx, 31, 0x29B4E4u);
    ctx->pc = 0x29B4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B4DCu;
    // 0x29b4e0: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x29B4DCu, 0x29B4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B4E4u;
label_29b4e4:
    // 0x29b4e4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x29B4E4u;
    {
        const bool branch_taken_0x29b4e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B4E4u;
        // 0x29b4e8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b4e4) {
            ctx->pc = 0x29B510u;
            goto label_29b510;
        }
    }
    ctx->pc = 0x29B4ECu;
    // 0x29b4ec: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x29b4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x29b4f0: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x29B4F0u;
    SET_GPR_U32(ctx, 31, 0x29B4F8u);
    ctx->pc = 0x29B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B4F0u;
    // 0x29b4f4: 0x2605ffff  addiu       $a1, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x29B4F0u, 0x29B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B4F8u;
label_29b4f8:
    // 0x29b4f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29b4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b4fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29b4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b500: 0xc09441c  jal         func_251070
    ctx->pc = 0x29B500u;
    SET_GPR_U32(ctx, 31, 0x29B508u);
    ctx->pc = 0x29B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B500u;
    // 0x29b504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251070u, 0x29B500u, 0x29B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B508u;
label_29b508:
    // 0x29b508: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29B508u;
    {
        const bool branch_taken_0x29b508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B508u;
        // 0x29b50c: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b508) {
            ctx->pc = 0x29B51Cu;
            goto label_29b51c;
        }
    }
    ctx->pc = 0x29B510u;
label_29b510:
    // 0x29b510: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29b510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29b514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b518: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x29b518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_29b51c:
    // 0x29b51c: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x29B51Cu;
    {
        const bool branch_taken_0x29b51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B51Cu;
        // 0x29b520: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b51c) {
            ctx->pc = 0x29B6B4u;
            goto label_29b6b4;
        }
    }
    ctx->pc = 0x29B524u;
    // 0x29b524: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x29b524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x29b528: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x29b528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x29b52c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29b530: 0x22e03  sra         $a1, $v0, 24
    ctx->pc = 0x29b530u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
    // 0x29b534: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x29b534u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29b538: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x29B538u;
    {
        const bool branch_taken_0x29b538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B538u;
        // 0x29b53c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b538) {
            ctx->pc = 0x29B6B8u;
            goto label_29b6b8;
        }
    }
    ctx->pc = 0x29B540u;
    // 0x29b540: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x29B540u;
    SET_GPR_U32(ctx, 31, 0x29B548u);
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x29B540u, 0x29B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B548u;
label_29b548:
    // 0x29b548: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29b548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b54c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29b54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b550: 0xc09441c  jal         func_251070
    ctx->pc = 0x29B550u;
    SET_GPR_U32(ctx, 31, 0x29B558u);
    ctx->pc = 0x29B554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B550u;
    // 0x29b554: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251070u, 0x29B550u, 0x29B558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B558u;
label_29b558:
    // 0x29b558: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x29b558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x29b55c: 0x50400056  beql        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x29B55Cu;
    {
        const bool branch_taken_0x29b55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b55c) {
            ctx->pc = 0x29B560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B55Cu;
            // 0x29b560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B6B8u;
            goto label_29b6b8;
        }
    }
    ctx->pc = 0x29B564u;
    // 0x29b564: 0x5220004b  beql        $s1, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x29B564u;
    {
        const bool branch_taken_0x29b564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b564) {
            ctx->pc = 0x29B568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B564u;
            // 0x29b568: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B694u;
            goto label_29b694;
        }
    }
    ctx->pc = 0x29B56Cu;
    // 0x29b56c: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x29b56cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29b570: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x29b570u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29b574: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29b574u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29b578: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29b578u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29b57c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29b57cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29b580: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29b580u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x29b584: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x29b584u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x29b588: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x29b588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x29b58c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b58cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b590: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29b590u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29b594: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x29b594u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29b598: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x29b598u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29b59c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x29b59cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29b5a0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x29b5a0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x29b5a4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x29b5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x29b5a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29b5a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b5ac: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x29b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x29b5b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29b5b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b5b4: 0x0  nop
    ctx->pc = 0x29b5b4u;
    // NOP
    // 0x29b5b8: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x29B5B8u;
    {
        const bool branch_taken_0x29b5b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B5B8u;
        // 0x29b5bc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b5b8) {
            ctx->pc = 0x29B690u;
            goto label_29b690;
        }
    }
    ctx->pc = 0x29B5C0u;
    // 0x29b5c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29b5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29b5c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29b5c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b5c8: 0x0  nop
    ctx->pc = 0x29b5c8u;
    // NOP
    // 0x29b5cc: 0x0  nop
    ctx->pc = 0x29b5ccu;
    // NOP
    // 0x29b5d0: 0x46010044  c1          0x10044
    ctx->pc = 0x29b5d0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x29b5d4: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x29b5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x29b5d8: 0x3421cbe5  ori         $at, $at, 0xCBE5
    ctx->pc = 0x29b5d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52197);
    // 0x29b5dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29b5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29b5e0: 0x0  nop
    ctx->pc = 0x29b5e0u;
    // NOP
    // 0x29b5e4: 0x0  nop
    ctx->pc = 0x29b5e4u;
    // NOP
    // 0x29b5e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x29b5e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x29b5ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29b5ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29b5f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29b5f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29b5f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29b5f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29b5f8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x29b5f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x29b5fc: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x29b5fcu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x29b600: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x29b600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x29b604: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x29b604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x29b608: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x29b608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x29b60c: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x29b60cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29b610: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x29b610u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29b614: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29b614u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29b618: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29b618u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29b61c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29b61cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29b620: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29b620u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x29b624: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x29b624u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x29b628: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29b628u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29b62c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x29b62cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29b630: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x29b630u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29b634: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x29b634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29b638: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x29b638u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x29b63c: 0x4a0003bf  vwaitq
    ctx->pc = 0x29b63cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x29b640: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x29b640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x29b644: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x29b644u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x29b648: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x29b648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x29b64c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x29b64cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x29b650: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x29b650u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x29b654: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x29b654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29b658: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x29b658u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29b65c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x29b65cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29b660: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x29b660u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x29b664: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x29b664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x29b668: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x29b668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29b66c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x29b66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x29b670: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x29b670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x29b674: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x29b674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x29b678: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x29B678u;
    SET_GPR_U32(ctx, 31, 0x29B680u);
    ctx->pc = 0x29B67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B678u;
    // 0x29b67c: 0x7fa40020  sq          $a0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x29B678u, 0x29B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B680u;
label_29b680:
    // 0x29b680: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x29b680u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b684: 0x0  nop
    ctx->pc = 0x29b684u;
    // NOP
    // 0x29b688: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x29B688u;
    {
        const bool branch_taken_0x29b688 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B688u;
        // 0x29b68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b688) {
            ctx->pc = 0x29B6B8u;
            goto label_29b6b8;
        }
    }
    ctx->pc = 0x29B690u;
label_29b690:
    // 0x29b690: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x29b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_29b694:
    // 0x29b694: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29b694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b698: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29b698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b69c: 0xc088878  jal         func_2221E0
    ctx->pc = 0x29B69Cu;
    SET_GPR_U32(ctx, 31, 0x29B6A4u);
    ctx->pc = 0x29B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B69Cu;
    // 0x29b6a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x29B69Cu, 0x29B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B6A4u;
label_29b6a4:
    // 0x29b6a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29b6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b6a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29b6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b6ac: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29B6ACu;
    {
        const bool branch_taken_0x29b6ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B6ACu;
        // 0x29b6b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b6ac) {
            ctx->pc = 0x29B6B8u;
            goto label_29b6b8;
        }
    }
    ctx->pc = 0x29B6B4u;
label_29b6b4:
    // 0x29b6b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b6b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b6b8:
    // 0x29b6b8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x29b6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29b6bc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x29b6bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29b6c0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x29b6c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29b6c4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x29b6c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29b6c8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29b6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29b6cc: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x29b6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29b6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x29B6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B6D0u;
        // 0x29b6d4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B6D8u;
}
