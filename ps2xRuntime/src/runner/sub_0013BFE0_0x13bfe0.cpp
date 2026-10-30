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

// Function: sub_0013BFE0
// Address: 0x13bfe0 - 0x13c590
void sub_0013BFE0_0x13bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BFE0_0x13bfe0");
#endif

    switch (ctx->pc) {
        case 0x13c018u: goto label_13c018;
        case 0x13c044u: goto label_13c044;
        case 0x13c090u: goto label_13c090;
        case 0x13c134u: goto label_13c134;
        case 0x13c14cu: goto label_13c14c;
        case 0x13c1e0u: goto label_13c1e0;
        case 0x13c1f8u: goto label_13c1f8;
        case 0x13c284u: goto label_13c284;
        case 0x13c29cu: goto label_13c29c;
        case 0x13c2b8u: goto label_13c2b8;
        case 0x13c35cu: goto label_13c35c;
        case 0x13c374u: goto label_13c374;
        case 0x13c408u: goto label_13c408;
        case 0x13c420u: goto label_13c420;
        case 0x13c4acu: goto label_13c4ac;
        case 0x13c4c4u: goto label_13c4c4;
        case 0x13c530u: goto label_13c530;
        case 0x13c548u: goto label_13c548;
        case 0x13c560u: goto label_13c560;
        default: break;
    }

    ctx->pc = 0x13bfe0u;

    // 0x13bfe0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x13bfe4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x13bfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x13bfe8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x13bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x13bfec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13bfecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bff0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x13bff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x13bff4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13bff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bff8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x13bff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x13bffc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x13bffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c000: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13c000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13c004: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x13c004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x13c008: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x13c008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
    // 0x13c00c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x13c00cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x13c010: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x13C010u;
    SET_GPR_U32(ctx, 31, 0x13C018u);
    ctx->pc = 0x13C014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C010u;
    // 0x13c014: 0x8e040340  lw          $a0, 0x340($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x13C010u, 0x13C018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C018u;
label_13c018:
    // 0x13c018: 0x54400156  bnel        $v0, $zero, . + 4 + (0x156 << 2)
    ctx->pc = 0x13C018u;
    {
        const bool branch_taken_0x13c018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c018) {
            ctx->pc = 0x13C01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C018u;
            // 0x13c01c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C574u;
            goto label_13c574;
        }
    }
    ctx->pc = 0x13C020u;
    // 0x13c020: 0x86050352  lh          $a1, 0x352($s0)
    ctx->pc = 0x13c020u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 850)));
    // 0x13c024: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13c024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13c028: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x13c028u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c02c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13c02cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13c030: 0xb03021  addu        $a2, $a1, $s0
    ctx->pc = 0x13c030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x13c034: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13c034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c038: 0x24a501e0  addiu       $a1, $a1, 0x1E0
    ctx->pc = 0x13c038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 480));
    // 0x13c03c: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x13C03Cu;
    SET_GPR_U32(ctx, 31, 0x13C044u);
    ctx->pc = 0x13C040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C03Cu;
    // 0x13c040: 0x24c601f0  addiu       $a2, $a2, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13C03Cu, 0x13C044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C044u;
label_13c044:
    // 0x13c044: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x13c044u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c048: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13c048u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13c04c: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13c04cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c050: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13c050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c054: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13c054u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13c058: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x13c058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x13c05c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x13c05cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x13c060: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13c060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13c064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c068: 0x0  nop
    ctx->pc = 0x13c068u;
    // NOP
    // 0x13c06c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13c06cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c070: 0x0  nop
    ctx->pc = 0x13c070u;
    // NOP
    // 0x13c074: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13C074u;
    {
        const bool branch_taken_0x13c074 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C074u;
        // 0x13c078: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c074) {
            ctx->pc = 0x13C080u;
            goto label_13c080;
        }
    }
    ctx->pc = 0x13C07Cu;
    // 0x13c07c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13c07cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c080:
    // 0x13c080: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13c080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13c084: 0x26050180  addiu       $a1, $s0, 0x180
    ctx->pc = 0x13c084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x13c088: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x13C088u;
    SET_GPR_U32(ctx, 31, 0x13C090u);
    ctx->pc = 0x13C08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C088u;
    // 0x13c08c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13C088u, 0x13C090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C090u;
label_13c090:
    // 0x13c090: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x13c090u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c094: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13c094u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13c098: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13c098u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c09c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13c09cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c0a0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13c0a0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13c0a4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x13c0a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13c0a8: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x13C0A8u;
    {
        const bool branch_taken_0x13c0a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C0A8u;
        // 0x13c0ac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c0a8) {
            ctx->pc = 0x13C0D4u;
            goto label_13c0d4;
        }
    }
    ctx->pc = 0x13C0B0u;
    // 0x13c0b0: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x13c0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c0b4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x13c0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c0b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13c0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13c0bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13c0bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13c0c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13c0c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13c0c4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x13c0c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c0c8: 0x0  nop
    ctx->pc = 0x13c0c8u;
    // NOP
    // 0x13c0cc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x13C0CCu;
    {
        const bool branch_taken_0x13c0cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c0cc) {
            ctx->pc = 0x13C0F0u;
            goto label_13c0f0;
        }
    }
    ctx->pc = 0x13C0D4u;
label_13c0d4:
    // 0x13c0d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13c0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13c0d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13c0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13c0dc: 0x0  nop
    ctx->pc = 0x13c0dcu;
    // NOP
    // 0x13c0e0: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x13c0e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c0e4: 0x0  nop
    ctx->pc = 0x13c0e4u;
    // NOP
    // 0x13c0e8: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x13C0E8u;
    {
        const bool branch_taken_0x13c0e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c0e8) {
            ctx->pc = 0x13C188u;
            goto label_13c188;
        }
    }
    ctx->pc = 0x13C0F0u;
label_13c0f0:
    // 0x13c0f0: 0x16600020  bnez        $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x13C0F0u;
    {
        const bool branch_taken_0x13c0f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c0f0) {
            ctx->pc = 0x13C174u;
            goto label_13c174;
        }
    }
    ctx->pc = 0x13C0F8u;
    // 0x13c0f8: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x13c0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c0fc: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x13c0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c100: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13c100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13c104: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13c104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13c108: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13c108u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13c10c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x13c10cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c110: 0x0  nop
    ctx->pc = 0x13c110u;
    // NOP
    // 0x13c114: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x13C114u;
    {
        const bool branch_taken_0x13c114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C114u;
        // 0x13c118: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c114) {
            ctx->pc = 0x13C174u;
            goto label_13c174;
        }
    }
    ctx->pc = 0x13C11Cu;
    // 0x13c11c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13c11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13c120: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13c120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13c124: 0x0  nop
    ctx->pc = 0x13c124u;
    // NOP
    // 0x13c128: 0x46026329  min.s       $f12, $f12, $f2
    ctx->pc = 0x13c128u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[2]);
    // 0x13c12c: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x13C12Cu;
    SET_GPR_U32(ctx, 31, 0x13C134u);
    ctx->pc = 0x13C130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C12Cu;
    // 0x13c130: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13C12Cu, 0x13C134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C134u;
label_13c134:
    // 0x13c134: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13c134u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c138: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13c138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c13c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13c13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c140: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x13c140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13c144: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x13C144u;
    SET_GPR_U32(ctx, 31, 0x13C14Cu);
    ctx->pc = 0x13C148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C144u;
    // 0x13c148: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13C144u, 0x13C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C14Cu;
label_13c14c:
    // 0x13c14c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13c14cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c150: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x13c150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x13c154: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13c154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13c158: 0x7e020180  sq          $v0, 0x180($s0)
    ctx->pc = 0x13c158u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 384), GPR_VEC(ctx, 2));
    // 0x13c15c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13c15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x13c160: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x13c160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c164: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x13c164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c168: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13c168u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13c16c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x13C16Cu;
    {
        const bool branch_taken_0x13c16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C16Cu;
        // 0x13c170: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c16c) {
            ctx->pc = 0x13C214u;
            goto label_13c214;
        }
    }
    ctx->pc = 0x13C174u;
label_13c174:
    // 0x13c174: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x13c174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x13c178: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13c178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13c17c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c180: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x13C180u;
    {
        const bool branch_taken_0x13c180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C180u;
        // 0x13c184: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c180) {
            ctx->pc = 0x13C27Cu;
            goto label_13c27c;
        }
    }
    ctx->pc = 0x13C188u;
label_13c188:
    // 0x13c188: 0x16600025  bnez        $s3, . + 4 + (0x25 << 2)
    ctx->pc = 0x13C188u;
    {
        const bool branch_taken_0x13c188 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c188) {
            ctx->pc = 0x13C220u;
            goto label_13c220;
        }
    }
    ctx->pc = 0x13C190u;
    // 0x13c190: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x13c190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c194: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x13c194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c198: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x13c198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x13c19c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13c19cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x13c1a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13c1a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13c1a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13c1a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13c1a8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x13c1a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c1ac: 0x0  nop
    ctx->pc = 0x13c1acu;
    // NOP
    // 0x13c1b0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x13C1B0u;
    {
        const bool branch_taken_0x13c1b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C1B0u;
        // 0x13c1b4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c1b0) {
            ctx->pc = 0x13C220u;
            goto label_13c220;
        }
    }
    ctx->pc = 0x13C1B8u;
    // 0x13c1b8: 0x46140d01  sub.s       $f20, $f1, $f20
    ctx->pc = 0x13c1b8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x13c1bc: 0x3c01bff0  lui         $at, 0xBFF0
    ctx->pc = 0x13c1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49136 << 16));
    // 0x13c1c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13c1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c1c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13c1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c1c8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x13c1c8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x13c1cc: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x13c1ccu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x13c1d0: 0x4614a300  add.s       $f12, $f20, $f20
    ctx->pc = 0x13c1d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x13c1d4: 0x460c1329  min.s       $f12, $f2, $f12
    ctx->pc = 0x13c1d4u;
    ctx->f[12] = std::min(ctx->f[2], ctx->f[12]);
    // 0x13c1d8: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x13C1D8u;
    SET_GPR_U32(ctx, 31, 0x13C1E0u);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13C1D8u, 0x13C1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C1E0u;
label_13c1e0:
    // 0x13c1e0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13c1e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c1e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13c1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c1e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13c1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c1ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x13c1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13c1f0: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x13C1F0u;
    SET_GPR_U32(ctx, 31, 0x13C1F8u);
    ctx->pc = 0x13C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C1F0u;
    // 0x13c1f4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13C1F0u, 0x13C1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C1F8u;
label_13c1f8:
    // 0x13c1f8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13c1f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c1fc: 0x7e020180  sq          $v0, 0x180($s0)
    ctx->pc = 0x13c1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 384), GPR_VEC(ctx, 2));
    // 0x13c200: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13c200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x13c204: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x13c204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c208: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x13c208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c20c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13c20cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13c210: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x13c210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_13c214:
    // 0x13c214: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13c214u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13c218: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x13C218u;
    {
        const bool branch_taken_0x13c218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C218u;
        // 0x13c21c: 0xe6010188  swc1        $f1, 0x188($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c218) {
            ctx->pc = 0x13C2A8u;
            goto label_13c2a8;
        }
    }
    ctx->pc = 0x13C220u;
label_13c220:
    // 0x13c220: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x13c220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
    // 0x13c224: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x13c224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x13c228: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13c228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c22c: 0x0  nop
    ctx->pc = 0x13c22cu;
    // NOP
    // 0x13c230: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x13c230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c234: 0x0  nop
    ctx->pc = 0x13c234u;
    // NOP
    // 0x13c238: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x13C238u;
    {
        const bool branch_taken_0x13c238 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C238u;
        // 0x13c23c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c238) {
            ctx->pc = 0x13C2ACu;
            goto label_13c2ac;
        }
    }
    ctx->pc = 0x13C240u;
    // 0x13c240: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x13c240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x13c244: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13c244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x13c248: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13c248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c24c: 0x0  nop
    ctx->pc = 0x13c24cu;
    // NOP
    // 0x13c250: 0x0  nop
    ctx->pc = 0x13c250u;
    // NOP
    // 0x13c254: 0x46030304  c1          0x30304
    ctx->pc = 0x13c254u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x13c258: 0x3c01bfa0  lui         $at, 0xBFA0
    ctx->pc = 0x13c258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49056 << 16));
    // 0x13c25c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13c25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13c260: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13c260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c264: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x13c264u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x13c268: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13c268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13c26c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13c26cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c270: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13c270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c274: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x13c274u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x13c278: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x13c278u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_13c27c:
    // 0x13c27c: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x13C27Cu;
    SET_GPR_U32(ctx, 31, 0x13C284u);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13C27Cu, 0x13C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C284u;
label_13c284:
    // 0x13c284: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13c284u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c288: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13c288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c28c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13c28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c290: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x13c290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13c294: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x13C294u;
    SET_GPR_U32(ctx, 31, 0x13C29Cu);
    ctx->pc = 0x13C298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C294u;
    // 0x13c298: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13C294u, 0x13C29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C29Cu;
label_13c29c:
    // 0x13c29c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13c29cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c2a0: 0x7e020180  sq          $v0, 0x180($s0)
    ctx->pc = 0x13c2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 384), GPR_VEC(ctx, 2));
    // 0x13c2a4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13c2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_13c2a8:
    // 0x13c2a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13c2ac:
    // 0x13c2ac: 0x260502f0  addiu       $a1, $s0, 0x2F0
    ctx->pc = 0x13c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x13c2b0: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x13C2B0u;
    SET_GPR_U32(ctx, 31, 0x13C2B8u);
    ctx->pc = 0x13C2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C2B0u;
    // 0x13c2b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13C2B0u, 0x13C2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C2B8u;
label_13c2b8:
    // 0x13c2b8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x13c2b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c2bc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13c2bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13c2c0: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x13c2c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c2c4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13c2c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c2c8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13c2c8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13c2cc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x13c2ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13c2d0: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x13C2D0u;
    {
        const bool branch_taken_0x13c2d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C2D0u;
        // 0x13c2d4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c2d0) {
            ctx->pc = 0x13C2FCu;
            goto label_13c2fc;
        }
    }
    ctx->pc = 0x13C2D8u;
    // 0x13c2d8: 0xc60002f8  lwc1        $f0, 0x2F8($s0)
    ctx->pc = 0x13c2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c2dc: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x13c2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c2e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13c2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13c2e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13c2e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13c2e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13c2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13c2ec: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x13c2ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c2f0: 0x0  nop
    ctx->pc = 0x13c2f0u;
    // NOP
    // 0x13c2f4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x13C2F4u;
    {
        const bool branch_taken_0x13c2f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c2f4) {
            ctx->pc = 0x13C318u;
            goto label_13c318;
        }
    }
    ctx->pc = 0x13C2FCu;
label_13c2fc:
    // 0x13c2fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13c2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13c300: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13c300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13c304: 0x0  nop
    ctx->pc = 0x13c304u;
    // NOP
    // 0x13c308: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x13c308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c30c: 0x0  nop
    ctx->pc = 0x13c30cu;
    // NOP
    // 0x13c310: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x13C310u;
    {
        const bool branch_taken_0x13c310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c310) {
            ctx->pc = 0x13C3B0u;
            goto label_13c3b0;
        }
    }
    ctx->pc = 0x13C318u;
label_13c318:
    // 0x13c318: 0x16600020  bnez        $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x13C318u;
    {
        const bool branch_taken_0x13c318 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c318) {
            ctx->pc = 0x13C39Cu;
            goto label_13c39c;
        }
    }
    ctx->pc = 0x13C320u;
    // 0x13c320: 0xc60002f8  lwc1        $f0, 0x2F8($s0)
    ctx->pc = 0x13c320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c324: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x13c324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c328: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13c328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13c32c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13c32cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13c330: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13c330u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13c334: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x13c334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c338: 0x0  nop
    ctx->pc = 0x13c338u;
    // NOP
    // 0x13c33c: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x13C33Cu;
    {
        const bool branch_taken_0x13c33c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C33Cu;
        // 0x13c340: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c33c) {
            ctx->pc = 0x13C39Cu;
            goto label_13c39c;
        }
    }
    ctx->pc = 0x13C344u;
    // 0x13c344: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13c344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13c348: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13c348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13c34c: 0x0  nop
    ctx->pc = 0x13c34cu;
    // NOP
    // 0x13c350: 0x46026329  min.s       $f12, $f12, $f2
    ctx->pc = 0x13c350u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[2]);
    // 0x13c354: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x13C354u;
    SET_GPR_U32(ctx, 31, 0x13C35Cu);
    ctx->pc = 0x13C358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C354u;
    // 0x13c358: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13C354u, 0x13C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C35Cu;
label_13c35c:
    // 0x13c35c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13c35cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c360: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13c360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13c364: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13c364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c368: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x13c368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c36c: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x13C36Cu;
    SET_GPR_U32(ctx, 31, 0x13C374u);
    ctx->pc = 0x13C370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C36Cu;
    // 0x13c370: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13C36Cu, 0x13C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C374u;
label_13c374:
    // 0x13c374: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13c374u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c378: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x13c378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x13c37c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13c37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13c380: 0x7e0202f0  sq          $v0, 0x2F0($s0)
    ctx->pc = 0x13c380u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 752), GPR_VEC(ctx, 2));
    // 0x13c384: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x13c384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x13c388: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x13c388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c38c: 0xc60002f8  lwc1        $f0, 0x2F8($s0)
    ctx->pc = 0x13c38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c390: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13c390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13c394: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x13C394u;
    {
        const bool branch_taken_0x13c394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C394u;
        // 0x13c398: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c394) {
            ctx->pc = 0x13C43Cu;
            goto label_13c43c;
        }
    }
    ctx->pc = 0x13C39Cu;
label_13c39c:
    // 0x13c39c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x13c39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x13c3a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13c3a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13c3a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13c3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13c3a8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x13C3A8u;
    {
        const bool branch_taken_0x13c3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C3A8u;
        // 0x13c3ac: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3a8) {
            ctx->pc = 0x13C4A4u;
            goto label_13c4a4;
        }
    }
    ctx->pc = 0x13C3B0u;
label_13c3b0:
    // 0x13c3b0: 0x16600025  bnez        $s3, . + 4 + (0x25 << 2)
    ctx->pc = 0x13C3B0u;
    {
        const bool branch_taken_0x13c3b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c3b0) {
            ctx->pc = 0x13C448u;
            goto label_13c448;
        }
    }
    ctx->pc = 0x13C3B8u;
    // 0x13c3b8: 0xc60102f8  lwc1        $f1, 0x2F8($s0)
    ctx->pc = 0x13c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c3bc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x13c3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c3c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x13c3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x13c3c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13c3c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x13c3c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13c3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13c3cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13c3ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13c3d0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x13c3d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c3d4: 0x0  nop
    ctx->pc = 0x13c3d4u;
    // NOP
    // 0x13c3d8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x13C3D8u;
    {
        const bool branch_taken_0x13c3d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C3D8u;
        // 0x13c3dc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3d8) {
            ctx->pc = 0x13C448u;
            goto label_13c448;
        }
    }
    ctx->pc = 0x13C3E0u;
    // 0x13c3e0: 0x46140d01  sub.s       $f20, $f1, $f20
    ctx->pc = 0x13c3e0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x13c3e4: 0x3c01bff0  lui         $at, 0xBFF0
    ctx->pc = 0x13c3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49136 << 16));
    // 0x13c3e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13c3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c3ec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13c3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13c3f0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x13c3f0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x13c3f4: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x13c3f4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x13c3f8: 0x4614a300  add.s       $f12, $f20, $f20
    ctx->pc = 0x13c3f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x13c3fc: 0x460c1329  min.s       $f12, $f2, $f12
    ctx->pc = 0x13c3fcu;
    ctx->f[12] = std::min(ctx->f[2], ctx->f[12]);
    // 0x13c400: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x13C400u;
    SET_GPR_U32(ctx, 31, 0x13C408u);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13C400u, 0x13C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C408u;
label_13c408:
    // 0x13c408: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13c408u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c40c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13c40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13c410: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13c410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c414: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x13c414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c418: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x13C418u;
    SET_GPR_U32(ctx, 31, 0x13C420u);
    ctx->pc = 0x13C41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C418u;
    // 0x13c41c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13C418u, 0x13C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C420u;
label_13c420:
    // 0x13c420: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13c420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c424: 0x7e0202f0  sq          $v0, 0x2F0($s0)
    ctx->pc = 0x13c424u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 752), GPR_VEC(ctx, 2));
    // 0x13c428: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x13c428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x13c42c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x13c42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c430: 0xc60002f8  lwc1        $f0, 0x2F8($s0)
    ctx->pc = 0x13c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c434: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13c434u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13c438: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x13c438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_13c43c:
    // 0x13c43c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13c43cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13c440: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x13C440u;
    {
        const bool branch_taken_0x13c440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C440u;
        // 0x13c444: 0xe60102f8  swc1        $f1, 0x2F8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 760), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c440) {
            ctx->pc = 0x13C4D0u;
            goto label_13c4d0;
        }
    }
    ctx->pc = 0x13C448u;
label_13c448:
    // 0x13c448: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x13c448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
    // 0x13c44c: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x13c44cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x13c450: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13c450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c454: 0x0  nop
    ctx->pc = 0x13c454u;
    // NOP
    // 0x13c458: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x13c458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c45c: 0x0  nop
    ctx->pc = 0x13c45cu;
    // NOP
    // 0x13c460: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x13C460u;
    {
        const bool branch_taken_0x13c460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13c460) {
            ctx->pc = 0x13C464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C460u;
            // 0x13c464: 0x820303ec  lb          $v1, 0x3EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1004)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C4D4u;
            goto label_13c4d4;
        }
    }
    ctx->pc = 0x13C468u;
    // 0x13c468: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x13c468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x13c46c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13c46cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x13c470: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13c470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c474: 0x0  nop
    ctx->pc = 0x13c474u;
    // NOP
    // 0x13c478: 0x0  nop
    ctx->pc = 0x13c478u;
    // NOP
    // 0x13c47c: 0x46030304  c1          0x30304
    ctx->pc = 0x13c47cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x13c480: 0x3c01bfa0  lui         $at, 0xBFA0
    ctx->pc = 0x13c480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49056 << 16));
    // 0x13c484: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13c484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13c488: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13c488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13c48c: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x13c48cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x13c490: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13c490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13c494: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13c494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c498: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13c498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13c49c: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x13c49cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x13c4a0: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x13c4a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_13c4a4:
    // 0x13c4a4: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x13C4A4u;
    SET_GPR_U32(ctx, 31, 0x13C4ACu);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13C4A4u, 0x13C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4ACu;
label_13c4ac:
    // 0x13c4ac: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13c4acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c4b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13c4b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13c4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4b8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x13c4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c4bc: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x13C4BCu;
    SET_GPR_U32(ctx, 31, 0x13C4C4u);
    ctx->pc = 0x13C4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4BCu;
    // 0x13c4c0: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13C4BCu, 0x13C4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4C4u;
label_13c4c4:
    // 0x13c4c4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13c4c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c4c8: 0x7e0202f0  sq          $v0, 0x2F0($s0)
    ctx->pc = 0x13c4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 752), GPR_VEC(ctx, 2));
    // 0x13c4cc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x13c4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_13c4d0:
    // 0x13c4d0: 0x820303ec  lb          $v1, 0x3EC($s0)
    ctx->pc = 0x13c4d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1004)));
label_13c4d4:
    // 0x13c4d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c4d8: 0x54620026  bnel        $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x13C4D8u;
    {
        const bool branch_taken_0x13c4d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13c4d8) {
            ctx->pc = 0x13C4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C4D8u;
            // 0x13c4dc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C574u;
            goto label_13c574;
        }
    }
    ctx->pc = 0x13C4E0u;
    // 0x13c4e0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x13c4e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c4e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13c4e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13c4e8: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x13c4e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c4ec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13c4ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c4f0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13c4f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13c4f4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13c4f4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13c4f8: 0x3c012edb  lui         $at, 0x2EDB
    ctx->pc = 0x13c4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11995 << 16));
    // 0x13c4fc: 0x3421e6fe  ori         $at, $at, 0xE6FE
    ctx->pc = 0x13c4fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59134);
    // 0x13c500: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13c500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c504: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13c504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c508: 0x0  nop
    ctx->pc = 0x13c508u;
    // NOP
    // 0x13c50c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13c50cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13c510: 0x0  nop
    ctx->pc = 0x13c510u;
    // NOP
    // 0x13c514: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x13C514u;
    {
        const bool branch_taken_0x13c514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C514u;
        // 0x13c518: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c514) {
            ctx->pc = 0x13C550u;
            goto label_13c550;
        }
    }
    ctx->pc = 0x13C51Cu;
    // 0x13c51c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x13c51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x13c520: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13c520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x13c524: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13c524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13c528: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x13C528u;
    SET_GPR_U32(ctx, 31, 0x13C530u);
    ctx->pc = 0x13C52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C528u;
    // 0x13c52c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13C528u, 0x13C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C530u;
label_13c530:
    // 0x13c530: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x13c530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c534: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13c534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c538: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13c538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13c53c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x13c53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c540: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x13C540u;
    SET_GPR_U32(ctx, 31, 0x13C548u);
    ctx->pc = 0x13C544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C540u;
    // 0x13c544: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13C540u, 0x13C548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C548u;
label_13c548:
    // 0x13c548: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13C548u;
    {
        const bool branch_taken_0x13c548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C548u;
        // 0x13c54c: 0x7ba20040  lq          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c548) {
            ctx->pc = 0x13C568u;
            goto label_13c568;
        }
    }
    ctx->pc = 0x13C550u;
label_13c550:
    // 0x13c550: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13c550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c554: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13c554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c558: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x13C558u;
    SET_GPR_U32(ctx, 31, 0x13C560u);
    ctx->pc = 0x13C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C558u;
    // 0x13c55c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13C558u, 0x13C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C560u;
label_13c560:
    // 0x13c560: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13c560u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c564: 0xa20003ec  sb          $zero, 0x3EC($s0)
    ctx->pc = 0x13c564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1004), (uint8_t)GPR_U32(ctx, 0));
label_13c568:
    // 0x13c568: 0x7e0202f0  sq          $v0, 0x2F0($s0)
    ctx->pc = 0x13c568u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 752), GPR_VEC(ctx, 2));
    // 0x13c56c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x13c56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x13c570: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x13c570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13c574:
    // 0x13c574: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x13c574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13c578: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x13c578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c57c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x13c57cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c580: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13c580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c584: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x13c584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13c588: 0x3e00008  jr          $ra
    ctx->pc = 0x13C588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C588u;
        // 0x13c58c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C590u;
}
