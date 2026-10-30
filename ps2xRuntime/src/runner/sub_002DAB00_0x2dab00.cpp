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

// Function: sub_002DAB00
// Address: 0x2dab00 - 0x2dacf8
void sub_002DAB00_0x2dab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAB00_0x2dab00");
#endif

    switch (ctx->pc) {
        case 0x2dab84u: goto label_2dab84;
        case 0x2dab9cu: goto label_2dab9c;
        case 0x2dabacu: goto label_2dabac;
        case 0x2dacdcu: goto label_2dacdc;
        default: break;
    }

    ctx->pc = 0x2dab00u;

    // 0x2dab00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2dab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2dab04: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2dab04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2dab08: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2dab08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2dab0c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2dab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2dab10: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2dab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2dab14: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2dab14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dab18: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DAB18u;
    {
        const bool branch_taken_0x2dab18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAB18u;
        // 0x2dab1c: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dab18) {
            ctx->pc = 0x2DAB60u;
            goto label_2dab60;
        }
    }
    ctx->pc = 0x2DAB20u;
    // 0x2dab20: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2dab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2dab24: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x2dab24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x2dab28: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x2DAB28u;
    {
        const bool branch_taken_0x2dab28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAB28u;
        // 0x2dab2c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dab28) {
            ctx->pc = 0x2DACE0u;
            goto label_2dace0;
        }
    }
    ctx->pc = 0x2DAB30u;
    // 0x2dab30: 0x8e2201a8  lw          $v0, 0x1A8($s1)
    ctx->pc = 0x2dab30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
    // 0x2dab34: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x2dab34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x2dab38: 0x5440006a  bnel        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x2DAB38u;
    {
        const bool branch_taken_0x2dab38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dab38) {
            ctx->pc = 0x2DAB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAB38u;
            // 0x2dab3c: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DACE4u;
            goto label_2dace4;
        }
    }
    ctx->pc = 0x2DAB40u;
    // 0x2dab40: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x2dab40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2dab44: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x2dab44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2dab48: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DAB48u;
    {
        const bool branch_taken_0x2dab48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dab48) {
            ctx->pc = 0x2DAB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAB48u;
            // 0x2dab4c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAB50u;
            goto label_2dab50;
        }
    }
    ctx->pc = 0x2DAB50u;
label_2dab50:
    // 0x2dab50: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2dab50u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2dab54: 0x1810  mfhi        $v1
    ctx->pc = 0x2dab54u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2dab58: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x2DAB58u;
    {
        const bool branch_taken_0x2dab58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAB58u;
        // 0x2dab5c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dab58) {
            ctx->pc = 0x2DACE0u;
            goto label_2dace0;
        }
    }
    ctx->pc = 0x2DAB60u;
label_2dab60:
    // 0x2dab60: 0x26300090  addiu       $s0, $s1, 0x90
    ctx->pc = 0x2dab60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2dab64: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2dab64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2dab68: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x2dab68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2dab6c: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x2dab6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2dab70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dab70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab74: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2dab74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2dab78: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2dab78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2dab7c: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2DAB7Cu;
    SET_GPR_U32(ctx, 31, 0x2DAB84u);
    ctx->pc = 0x2DAB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB7Cu;
    // 0x2dab80: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2DAB7Cu, 0x2DAB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB84u;
label_2dab84:
    // 0x2dab84: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x2dab84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2dab88: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2dab88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dab8c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2dab8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2dab90: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2dab90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2dab94: 0xc0cd8c2  jal         func_336308
    ctx->pc = 0x2DAB94u;
    SET_GPR_U32(ctx, 31, 0x2DAB9Cu);
    ctx->pc = 0x2DAB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB94u;
    // 0x2dab98: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x2DAB94u, 0x2DAB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB9Cu;
label_2dab9c:
    // 0x2dab9c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2dab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2daba0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2daba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2daba4: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2DABA4u;
    SET_GPR_U32(ctx, 31, 0x2DABACu);
    ctx->pc = 0x2DABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DABA4u;
    // 0x2daba8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2DABA4u, 0x2DABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DABACu;
label_2dabac:
    // 0x2dabac: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x2dabacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x2dabb0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DABB0u;
    {
        const bool branch_taken_0x2dabb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DABB0u;
        // 0x2dabb4: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabb0) {
            ctx->pc = 0x2DABE8u;
            goto label_2dabe8;
        }
    }
    ctx->pc = 0x2DABB8u;
    // 0x2dabb8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2dabb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2dabbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dabbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dabc0: 0x0  nop
    ctx->pc = 0x2dabc0u;
    // NOP
    // 0x2dabc4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2dabc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2dabc8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2dabc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2dabcc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2dabccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2dabd0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2dabd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dabd4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2dabd4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dabd8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2dabd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2dabdc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2dabdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2dabe0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2dabe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2dabe4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2dabe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2dabe8:
    // 0x2dabe8: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2dabe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2dabec: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2dabecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2dabf0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2dabf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2dabf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dabf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dabf8: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x2dabf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    // 0x2dabfc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2dabfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2dac00: 0x7ba80000  lq          $t0, 0x0($sp)
    ctx->pc = 0x2dac00u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dac04: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2dac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2dac08: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x2dac08u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dac0c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2dac0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dac10: 0x240601f4  addiu       $a2, $zero, 0x1F4
    ctx->pc = 0x2dac10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x2dac14: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2dac14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dac18: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2dac18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2dac1c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2dac1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2dac20: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2dac20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2dac24: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2dac24u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2dac28: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2dac28u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2dac2c: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2dac2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2dac30: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2dac30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2dac34: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2dac34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dac38: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x2dac38u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dac3c: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x2dac3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x2dac40: 0x34213334  ori         $at, $at, 0x3334
    ctx->pc = 0x2dac40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13108);
    // 0x2dac44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dac44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dac48: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2dac48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dac4c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2dac4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2dac50: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x2dac50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2dac54: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2dac54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2dac58: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2dac58u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2dac5c: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x2dac5cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2dac60: 0x7fa80070  sq          $t0, 0x70($sp)
    ctx->pc = 0x2dac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    // 0x2dac64: 0x26240284  addiu       $a0, $s1, 0x284
    ctx->pc = 0x2dac64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
    // 0x2dac68: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2dac68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2dac6c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x2dac6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2dac70: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2dac70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2dac74: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2dac74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2dac78: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2dac78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dac7c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2dac7cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dac80: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2dac80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x2dac84: 0x7fa80080  sq          $t0, 0x80($sp)
    ctx->pc = 0x2dac84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 8));
    // 0x2dac88: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x2dac88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x2dac8c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2dac8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2dac90: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2dac90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2dac94: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2dac94u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2dac98: 0x482a1000  qmfc2.ni    $t2, $vf2
    ctx->pc = 0x2dac98u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2dac9c: 0x7fa90070  sq          $t1, 0x70($sp)
    ctx->pc = 0x2dac9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 9));
    // 0x2daca0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2daca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2daca4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2daca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2daca8: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x2daca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
    // 0x2dacac: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2dacacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x2dacb0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2dacb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x2dacb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dacb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dacb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dacb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dacbc: 0x7faa0020  sq          $t2, 0x20($sp)
    ctx->pc = 0x2dacbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
    // 0x2dacc0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2dacc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2dacc4: 0x7fa80050  sq          $t0, 0x50($sp)
    ctx->pc = 0x2dacc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 8));
    // 0x2dacc8: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x2dacc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
    // 0x2daccc: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2dacccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2dacd0: 0x7faa0080  sq          $t2, 0x80($sp)
    ctx->pc = 0x2dacd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 10));
    // 0x2dacd4: 0xc0a67ca  jal         func_299F28
    ctx->pc = 0x2DACD4u;
    SET_GPR_U32(ctx, 31, 0x2DACDCu);
    ctx->pc = 0x2DACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DACD4u;
    // 0x2dacd8: 0x7faa0070  sq          $t2, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F28u, 0x2DACD4u, 0x2DACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DACDCu;
label_2dacdc:
    // 0x2dacdc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2dacdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2dace0:
    // 0x2dace0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2dace0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2dace4:
    // 0x2dace4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2dace4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2dace8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2dace8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2dacec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DACECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DACECu;
        // 0x2dacf0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DACECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DACF4u;
    // 0x2dacf4: 0x0  nop
    ctx->pc = 0x2dacf4u;
    // NOP
    ctx->pc = 0x2dacf8u;
}
