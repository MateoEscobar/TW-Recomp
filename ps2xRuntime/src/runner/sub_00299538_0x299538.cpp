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

// Function: sub_00299538
// Address: 0x299538 - 0x299778
void sub_00299538_0x299538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299538_0x299538");
#endif

    switch (ctx->pc) {
        case 0x299580u: goto label_299580;
        case 0x2995bcu: goto label_2995bc;
        case 0x2995f0u: goto label_2995f0;
        case 0x299628u: goto label_299628;
        case 0x2996b8u: goto label_2996b8;
        case 0x2996c4u: goto label_2996c4;
        case 0x2996e0u: goto label_2996e0;
        default: break;
    }

    ctx->pc = 0x299538u;

    // 0x299538: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x299538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29953c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299540: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x299540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x299544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299548: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x299548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x29954c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x29954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x299550: 0x26070080  addiu       $a3, $s0, 0x80
    ctx->pc = 0x299550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x299554: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x299554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x299558: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x299558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29955c: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x29955cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x299560: 0x26030068  addiu       $v1, $s0, 0x68
    ctx->pc = 0x299560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x299564: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x299564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x299568: 0xa202008d  sb          $v0, 0x8D($s0)
    ctx->pc = 0x299568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 141), (uint8_t)GPR_U32(ctx, 2));
    // 0x29956c: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x29956cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
    // 0x299570: 0xae060064  sw          $a2, 0x64($s0)
    ctx->pc = 0x299570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
    // 0x299574: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x299574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x299578: 0xa202008c  sb          $v0, 0x8C($s0)
    ctx->pc = 0x299578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x29957c: 0x0  nop
    ctx->pc = 0x29957cu;
    // NOP
label_299580:
    // 0x299580: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x299580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x299584: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x299584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x299588: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x299588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x29958c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x29958cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x299590: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x299590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x299594: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x299594u;
    {
        const bool branch_taken_0x299594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299594u;
        // 0x299598: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299594) {
            ctx->pc = 0x299580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299580;
        }
    }
    ctx->pc = 0x29959Cu;
    // 0x29959c: 0x9203008d  lbu         $v1, 0x8D($s0)
    ctx->pc = 0x29959cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 141)));
    // 0x2995a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2995a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2995a4: 0x5462006c  bnel        $v1, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2995A4u;
    {
        const bool branch_taken_0x2995a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2995a4) {
            ctx->pc = 0x2995A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2995A4u;
            // 0x2995a8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299758u;
            goto label_299758;
        }
    }
    ctx->pc = 0x2995ACu;
    // 0x2995ac: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x2995acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2995b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2995b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2995b4: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x2995B4u;
    SET_GPR_U32(ctx, 31, 0x2995BCu);
    ctx->pc = 0x2995B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2995B4u;
    // 0x2995b8: 0x8e060064  lw          $a2, 0x64($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2995B4u, 0x2995BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2995BCu;
label_2995bc:
    // 0x2995bc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2995bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2995c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2995c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2995c4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2995c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2995c8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2995c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2995cc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2995ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2995d0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2995d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x2995d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2995d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2995d8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2995d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2995dc: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2995dcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2995e0: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x2995e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2995e4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2995e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2995e8: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x2995E8u;
    SET_GPR_U32(ctx, 31, 0x2995F0u);
    ctx->pc = 0x2995ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2995E8u;
    // 0x2995ec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x2995E8u, 0x2995F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2995F0u;
label_2995f0:
    // 0x2995f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2995f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2995f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2995f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2995f8: 0x2c440007  sltiu       $a0, $v0, 0x7
    ctx->pc = 0x2995f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2995fc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2995fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x299600: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x299600u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299604: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x299604u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x299608: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x299608u;
    {
        const bool branch_taken_0x299608 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299608u;
        // 0x29960c: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299608) {
            ctx->pc = 0x299634u;
            goto label_299634;
        }
    }
    ctx->pc = 0x299610u;
    // 0x299610: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x299610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x299614: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x299614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x299618: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x299618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29961c: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x29961cu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[21]); }
    // 0x299620: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x299620u;
    SET_GPR_U32(ctx, 31, 0x299628u);
    ctx->pc = 0x299624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299620u;
    // 0x299624: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x299620u, 0x299628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299628u;
label_299628:
    // 0x299628: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x299628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29962c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29962Cu;
    {
        const bool branch_taken_0x29962c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29962Cu;
        // 0x299630: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29962c) {
            ctx->pc = 0x299644u;
            goto label_299644;
        }
    }
    ctx->pc = 0x299634u;
label_299634:
    // 0x299634: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x299634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x299638: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x299638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x29963c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29963cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x299640: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x299640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_299644:
    // 0x299644: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x299644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x299648: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x299648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x29964c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x29964Cu;
    {
        const bool branch_taken_0x29964c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29964c) {
            ctx->pc = 0x299650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29964Cu;
            // 0x299650: 0x8e030064  lw          $v1, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2996A0u;
            goto label_2996a0;
        }
    }
    ctx->pc = 0x299654u;
    // 0x299654: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x299654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x299658: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x299658u;
    {
        const bool branch_taken_0x299658 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299658u;
        // 0x29965c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299658) {
            ctx->pc = 0x299674u;
            goto label_299674;
        }
    }
    ctx->pc = 0x299660u;
    // 0x299660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299664: 0x0  nop
    ctx->pc = 0x299664u;
    // NOP
    // 0x299668: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x299668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29966c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29966Cu;
    {
        const bool branch_taken_0x29966c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29966c) {
            ctx->pc = 0x29968Cu;
            goto label_29968c;
        }
    }
    ctx->pc = 0x299674u;
label_299674:
    // 0x299674: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x299674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x299678: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x299678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29967c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29967cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299680: 0x0  nop
    ctx->pc = 0x299680u;
    // NOP
    // 0x299684: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x299684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x299688: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x299688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_29968c:
    // 0x29968c: 0x0  nop
    ctx->pc = 0x29968cu;
    // NOP
    // 0x299690: 0x0  nop
    ctx->pc = 0x299690u;
    // NOP
    // 0x299694: 0x4600ad03  div.s       $f20, $f21, $f0
    ctx->pc = 0x299694u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x299698: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x299698u;
    {
        const bool branch_taken_0x299698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299698u;
        // 0x29969c: 0x8e030064  lw          $v1, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299698) {
            ctx->pc = 0x2996A4u;
            goto label_2996a4;
        }
    }
    ctx->pc = 0x2996A0u;
label_2996a0:
    // 0x2996a0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2996a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2996a4:
    // 0x2996a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2996a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2996a8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2996a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2996ac: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2996acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2996b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2996B0u;
    {
        const bool branch_taken_0x2996b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2996B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2996B0u;
        // 0x2996b4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2996b0) {
            ctx->pc = 0x2996F0u;
            goto label_2996f0;
        }
    }
    ctx->pc = 0x2996B8u;
label_2996b8:
    // 0x2996b8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2996b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2996bc: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x2996BCu;
    SET_GPR_U32(ctx, 31, 0x2996C4u);
    ctx->pc = 0x2996C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2996BCu;
    // 0x2996c0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2996BCu, 0x2996C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2996C4u;
label_2996c4:
    // 0x2996c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2996c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2996c8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2996c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2996cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2996ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2996d0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2996d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2996d4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2996d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2996d8: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x2996D8u;
    SET_GPR_U32(ctx, 31, 0x2996E0u);
    ctx->pc = 0x2996DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2996D8u;
    // 0x2996dc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x2996D8u, 0x2996E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2996E0u;
label_2996e0:
    // 0x2996e0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2996e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2996e4: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x2996e4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x2996e8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2996e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2996ec: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2996ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2996f0:
    // 0x2996f0: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x2996f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2996f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2996f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2996f8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2996f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2996fc: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2996FCu;
    {
        const bool branch_taken_0x2996fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2996fc) {
            ctx->pc = 0x299700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2996FCu;
            // 0x299700: 0xa200008d  sb          $zero, 0x8D($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 141), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299754u;
            goto label_299754;
        }
    }
    ctx->pc = 0x299704u;
    // 0x299704: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x299704u;
    {
        const bool branch_taken_0x299704 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x299708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299704u;
        // 0x299708: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299704) {
            ctx->pc = 0x299720u;
            goto label_299720;
        }
    }
    ctx->pc = 0x29970Cu;
    // 0x29970c: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x29970cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x299710: 0x0  nop
    ctx->pc = 0x299710u;
    // NOP
    // 0x299714: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x299714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x299718: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x299718u;
    {
        const bool branch_taken_0x299718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299718u;
        // 0x29971c: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299718) {
            ctx->pc = 0x29973Cu;
            goto label_29973c;
        }
    }
    ctx->pc = 0x299720u;
label_299720:
    // 0x299720: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x299720u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x299724: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x299724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299728: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x299728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29972c: 0x0  nop
    ctx->pc = 0x29972cu;
    // NOP
    // 0x299730: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x299730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x299734: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x299734u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x299738: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x299738u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_29973c:
    // 0x29973c: 0x460ca834  c.lt.s      $f21, $f12
    ctx->pc = 0x29973cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299740: 0x0  nop
    ctx->pc = 0x299740u;
    // NOP
    // 0x299744: 0x4500ffdc  bc1f        . + 4 + (-0x24 << 2)
    ctx->pc = 0x299744u;
    {
        const bool branch_taken_0x299744 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299744u;
        // 0x299748: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299744) {
            ctx->pc = 0x2996B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2996b8;
        }
    }
    ctx->pc = 0x29974Cu;
    // 0x29974c: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x29974cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x299750: 0xa200008d  sb          $zero, 0x8D($s0)
    ctx->pc = 0x299750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 141), (uint8_t)GPR_U32(ctx, 0));
label_299754:
    // 0x299754: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x299754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_299758:
    // 0x299758: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x299758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29975c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x29975cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x299760: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x299760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x299764: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x299764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x299768: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x299768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29976c: 0x3e00008  jr          $ra
    ctx->pc = 0x29976Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29976Cu;
        // 0x299770: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29976Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299774u;
    // 0x299774: 0x0  nop
    ctx->pc = 0x299774u;
    // NOP
    ctx->pc = 0x299778u;
}
