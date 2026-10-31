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

// Function: sub_0029E4B0
// Address: 0x29e4b0 - 0x29e5d8
void sub_0029E4B0_0x29e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E4B0_0x29e4b0");
#endif

    switch (ctx->pc) {
        case 0x29e52cu: goto label_29e52c;
        case 0x29e534u: goto label_29e534;
        case 0x29e5a8u: goto label_29e5a8;
        default: break;
    }

    ctx->pc = 0x29e4b0u;

    // 0x29e4b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29e4b4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x29e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x29e4b8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x29e4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x29e4bc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x29e4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x29e4c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e4c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29e4c8: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x29e4c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29e4cc: 0x92230006  lbu         $v1, 0x6($s1)
    ctx->pc = 0x29e4ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x29e4d0: 0x5060003c  beql        $v1, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x29E4D0u;
    {
        const bool branch_taken_0x29e4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e4d0) {
            ctx->pc = 0x29E4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E4D0u;
            // 0x29e4d4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E5C4u;
            goto label_29e5c4;
        }
    }
    ctx->pc = 0x29E4D8u;
    // 0x29e4d8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29E4D8u;
    {
        const bool branch_taken_0x29e4d8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x29E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4D8u;
        // 0x29e4dc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4d8) {
            ctx->pc = 0x29E4F4u;
            goto label_29e4f4;
        }
    }
    ctx->pc = 0x29E4E0u;
    // 0x29e4e0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x29e4e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29e4e4: 0x0  nop
    ctx->pc = 0x29e4e4u;
    // NOP
    // 0x29e4e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29e4e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29e4ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29E4ECu;
    {
        const bool branch_taken_0x29e4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4ECu;
        // 0x29e4f0: 0xc6000040  lwc1        $f0, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e4ec) {
            ctx->pc = 0x29E518u;
            goto label_29e518;
        }
    }
    ctx->pc = 0x29E4F4u;
label_29e4f4:
    // 0x29e4f4: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x29e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x29e4f8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x29e4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x29e4fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29e4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29e500: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29e500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29e504: 0x0  nop
    ctx->pc = 0x29e504u;
    // NOP
    // 0x29e508: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29e508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29e50c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29e50cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x29e510: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x29e510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x29e514: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x29e514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29e518:
    // 0x29e518: 0xc44c1a80  lwc1        $f12, 0x1A80($v0)
    ctx->pc = 0x29e518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29e51c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e520: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x29e520u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x29e524: 0xc0cd790  jal         func_335E40
    ctx->pc = 0x29E524u;
    SET_GPR_U32(ctx, 31, 0x29E52Cu);
    ctx->pc = 0x29E528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E524u;
    // 0x29e528: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x29E524u, 0x29E52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E52Cu;
label_29e52c:
    // 0x29e52c: 0xc0a791c  jal         func_29E470
    ctx->pc = 0x29E52Cu;
    SET_GPR_U32(ctx, 31, 0x29E534u);
    ctx->pc = 0x29E530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E52Cu;
    // 0x29e530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E470u, 0x29E52Cu, 0x29E534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E534u;
label_29e534:
    // 0x29e534: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x29e534u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x29e538: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x29e538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x29e53c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x29e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x29e540: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x29e540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x29e544: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29e544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e548: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x29e548u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x29e54c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29e54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e550: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x29e550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29e554: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x29e554u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e558: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29e558u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29e55c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29e55cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e560: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29e560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29e564: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29e564u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29e568: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x29e568u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x29e56c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x29e56cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x29e570: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x29e570u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29e574: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29e574u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29e578: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x29e578u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29e57c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29e57cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29e580: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29e580u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x29e584: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x29e584u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x29e588: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x29e588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x29e58c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x29e58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x29e590: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x29e590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29e594: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x29e594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x29e598: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x29e598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x29e59c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x29e59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x29e5a0: 0xc088878  jal         func_2221E0
    ctx->pc = 0x29E5A0u;
    SET_GPR_U32(ctx, 31, 0x29E5A8u);
    ctx->pc = 0x29E5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E5A0u;
    // 0x29e5a4: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x29E5A0u, 0x29E5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E5A8u;
label_29e5a8:
    // 0x29e5a8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29E5A8u;
    {
        const bool branch_taken_0x29e5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e5a8) {
            ctx->pc = 0x29E5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E5A8u;
            // 0x29e5ac: 0xa2200006  sb          $zero, 0x6($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E5C0u;
            goto label_29e5c0;
        }
    }
    ctx->pc = 0x29E5B0u;
    // 0x29e5b0: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x29e5b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29e5b4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x29e5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x29e5b8: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x29e5b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x29e5bc: 0xa2200006  sb          $zero, 0x6($s1)
    ctx->pc = 0x29e5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
label_29e5c0:
    // 0x29e5c0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x29e5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_29e5c4:
    // 0x29e5c4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x29e5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e5c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29e5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x29E5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E5CCu;
        // 0x29e5d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E5D4u;
    // 0x29e5d4: 0x0  nop
    ctx->pc = 0x29e5d4u;
    // NOP
    ctx->pc = 0x29e5d8u;
}
