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

// Function: sub_002985E0
// Address: 0x2985e0 - 0x2987a0
void sub_002985E0_0x2985e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002985E0_0x2985e0");
#endif

    switch (ctx->pc) {
        case 0x298608u: goto label_298608;
        case 0x298614u: goto label_298614;
        case 0x298634u: goto label_298634;
        case 0x298660u: goto label_298660;
        case 0x2986b0u: goto label_2986b0;
        case 0x2986f0u: goto label_2986f0;
        case 0x298708u: goto label_298708;
        case 0x29872cu: goto label_29872c;
        case 0x29874cu: goto label_29874c;
        case 0x298770u: goto label_298770;
        default: break;
    }

    ctx->pc = 0x2985e0u;

    // 0x2985e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2985e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2985e4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2985e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2985e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2985e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985ec: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2985ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2985f0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2985f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2985f4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2985f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2985f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2985f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2985fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2985fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x298600: 0xc0a5a72  jal         func_2969C8
    ctx->pc = 0x298600u;
    SET_GPR_U32(ctx, 31, 0x298608u);
    ctx->pc = 0x298604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298600u;
    // 0x298604: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x298600u, 0x298608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298608u;
label_298608:
    // 0x298608: 0x8624000c  lh          $a0, 0xC($s1)
    ctx->pc = 0x298608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29860c: 0xc0e402c  jal         func_3900B0
    ctx->pc = 0x29860Cu;
    SET_GPR_U32(ctx, 31, 0x298614u);
    ctx->pc = 0x298610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29860Cu;
    // 0x298610: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x29860Cu, 0x298614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298614u;
label_298614:
    // 0x298614: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298618: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x298618u;
    {
        const bool branch_taken_0x298618 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298618u;
        // 0x29861c: 0x26140090  addiu       $s4, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298618) {
            ctx->pc = 0x298744u;
            goto label_298744;
        }
    }
    ctx->pc = 0x298620u;
    // 0x298620: 0x3c013dfa  lui         $at, 0x3DFA
    ctx->pc = 0x298620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15866 << 16));
    // 0x298624: 0x342135de  ori         $at, $at, 0x35DE
    ctx->pc = 0x298624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13790);
    // 0x298628: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29862c: 0xc12e34c  jal         func_4B8D30
    ctx->pc = 0x29862Cu;
    SET_GPR_U32(ctx, 31, 0x298634u);
    ctx->pc = 0x298630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29862Cu;
    // 0x298630: 0x26530284  addiu       $s3, $s2, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x29862Cu, 0x298634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298634u;
label_298634:
    // 0x298634: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x298634u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x298638: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x298638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x29863c: 0x86860002  lh          $a2, 0x2($s4)
    ctx->pc = 0x29863cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x298640: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x298640u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x298644: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x298644u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x298648: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x298648u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x29864c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x29864cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x298650: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x298650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x298654: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x298654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x298658: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x298658u;
    SET_GPR_U32(ctx, 31, 0x298660u);
    ctx->pc = 0x29865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298658u;
    // 0x29865c: 0xd23021  addu        $a2, $a2, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x298658u, 0x298660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298660u;
label_298660:
    // 0x298660: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x298660u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298664: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x298664u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x298668: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x298668u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29866c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x29866cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x298670: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x298670u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x298674: 0x4a0003bf  vwaitq
    ctx->pc = 0x298674u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x298678: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x298678u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29867c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x29867cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x298680: 0x9223000f  lbu         $v1, 0xF($s1)
    ctx->pc = 0x298680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
    // 0x298684: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x298684u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298688: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x298688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x29868c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x29868Cu;
    {
        const bool branch_taken_0x29868c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x298690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29868Cu;
        // 0x298690: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29868c) {
            ctx->pc = 0x2986B8u;
            goto label_2986b8;
        }
    }
    ctx->pc = 0x298694u;
    // 0x298694: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x298694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x298698: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29869c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29869cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2986a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986a4: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2986a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2986a8: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x2986A8u;
    SET_GPR_U32(ctx, 31, 0x2986B0u);
    ctx->pc = 0x2986ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2986A8u;
    // 0x2986ac: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2986A8u, 0x2986B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2986B0u;
label_2986b0:
    // 0x2986b0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2986B0u;
    {
        const bool branch_taken_0x2986b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2986B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986B0u;
        // 0x2986b4: 0x9222000f  lbu         $v0, 0xF($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986b0) {
            ctx->pc = 0x298774u;
            goto label_298774;
        }
    }
    ctx->pc = 0x2986B8u;
label_2986b8:
    // 0x2986b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2986b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2986bc: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2986BCu;
    {
        const bool branch_taken_0x2986bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2986C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986BCu;
        // 0x2986c0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986bc) {
            ctx->pc = 0x298734u;
            goto label_298734;
        }
    }
    ctx->pc = 0x2986C4u;
    // 0x2986c4: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2986c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x2986c8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2986c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2986cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2986ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2986d0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2986d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2986d4: 0x86900002  lh          $s0, 0x2($s4)
    ctx->pc = 0x2986d4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2986d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2986d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2986dc: 0x460ca300  add.s       $f12, $f20, $f12
    ctx->pc = 0x2986dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    // 0x2986e0: 0x24a51740  addiu       $a1, $a1, 0x1740
    ctx->pc = 0x2986e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
    // 0x2986e4: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2986e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2986e8: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x2986E8u;
    SET_GPR_U32(ctx, 31, 0x2986F0u);
    ctx->pc = 0x2986ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2986E8u;
    // 0x2986ec: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2986E8u, 0x2986F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2986F0u;
label_2986f0:
    // 0x2986f0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2986f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2986f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2986f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2986f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2986fc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2986fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x298700: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x298700u;
    SET_GPR_U32(ctx, 31, 0x298708u);
    ctx->pc = 0x298704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298700u;
    // 0x298704: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x298700u, 0x298708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298708u;
label_298708:
    // 0x298708: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x298708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29870c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29870cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298710: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x298710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x298714: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x298718: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x298718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29871c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x29871cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x298720: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x298720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x298724: 0xc0a67ca  jal         func_299F28
    ctx->pc = 0x298724u;
    SET_GPR_U32(ctx, 31, 0x29872Cu);
    ctx->pc = 0x298728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298724u;
    // 0x298728: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F28u, 0x298724u, 0x29872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29872Cu;
label_29872c:
    // 0x29872c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x29872Cu;
    {
        const bool branch_taken_0x29872c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29872Cu;
        // 0x298730: 0x9222000f  lbu         $v0, 0xF($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29872c) {
            ctx->pc = 0x298774u;
            goto label_298774;
        }
    }
    ctx->pc = 0x298734u;
label_298734:
    // 0x298734: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x298734u;
    {
        const bool branch_taken_0x298734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x298738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298734u;
        // 0x298738: 0x2c620009  sltiu       $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298734) {
            ctx->pc = 0x298754u;
            goto label_298754;
        }
    }
    ctx->pc = 0x29873Cu;
    // 0x29873c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x29873Cu;
    {
        const bool branch_taken_0x29873c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29873c) {
            ctx->pc = 0x298740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29873Cu;
            // 0x298740: 0x9222000f  lbu         $v0, 0xF($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298774u;
            goto label_298774;
        }
    }
    ctx->pc = 0x298744u;
label_298744:
    // 0x298744: 0xc0a5d78  jal         func_2975E0
    ctx->pc = 0x298744u;
    SET_GPR_U32(ctx, 31, 0x29874Cu);
    ctx->pc = 0x298748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298744u;
    // 0x298748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2975E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2975E0u, 0x298744u, 0x29874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29874Cu;
label_29874c:
    // 0x29874c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29874Cu;
    {
        const bool branch_taken_0x29874c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29874Cu;
        // 0x298750: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29874c) {
            ctx->pc = 0x298780u;
            goto label_298780;
        }
    }
    ctx->pc = 0x298754u;
label_298754:
    // 0x298754: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x298754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x298758: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29875c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29875cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298760: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x298760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298764: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x298764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x298768: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x298768u;
    SET_GPR_U32(ctx, 31, 0x298770u);
    ctx->pc = 0x29876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298768u;
    // 0x29876c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x298768u, 0x298770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298770u;
label_298770:
    // 0x298770: 0x9222000f  lbu         $v0, 0xF($s1)
    ctx->pc = 0x298770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
label_298774:
    // 0x298774: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x298774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x298778: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x298778u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x29877c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x29877cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_298780:
    // 0x298780: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x298780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298784: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x298784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298788: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x298788u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29878c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29878cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298790: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x298790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298794: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x298794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x298798: 0x3e00008  jr          $ra
    ctx->pc = 0x298798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298798u;
        // 0x29879c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2987A0u;
}
