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

// Function: sub_002E7608
// Address: 0x2e7608 - 0x2e77a0
void sub_002E7608_0x2e7608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7608_0x2e7608");
#endif

    switch (ctx->pc) {
        case 0x2e7678u: goto label_2e7678;
        case 0x2e76acu: goto label_2e76ac;
        default: break;
    }

    ctx->pc = 0x2e7608u;

    // 0x2e7608: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2e7608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2e760c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e760cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2e7610: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2e7610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x2e7614: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x2e7614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x2e7618: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2e7618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x2e761c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2e761cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7620: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2e7620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x2e7624: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2e7624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7628: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2e7628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x2e762c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e762cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7630: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2e7630u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2e7634: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e7634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7638: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2e7638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2e763c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2e763cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2e7640: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2e7640u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2e7644: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e7644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7648: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2e7648u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x2e764c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e764cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7650: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2e7650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2e7654: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2e7654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2e7658: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x2e7658u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x2e765c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2e765cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2e7660: 0x8c447198  lw          $a0, 0x7198($v0)
    ctx->pc = 0x2e7660u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x597198u));
    // 0x2e7664: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x2e7664u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e7668: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x2e7668u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e766c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2e766cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2e7670: 0xc0cfbb8  jal         func_33EEE0
    ctx->pc = 0x2E7670u;
    SET_GPR_U32(ctx, 31, 0x2E7678u);
    ctx->pc = 0x2E7674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7670u;
    // 0x2e7674: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EEE0u, 0x2E7670u, 0x2E7678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7678u;
label_2e7678:
    // 0x2e7678: 0x7a470000  lq          $a3, 0x0($s2)
    ctx->pc = 0x2e7678u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e767c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2e767cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2e7680: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x2e7680u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e7684: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e7684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7688: 0x8ca447c4  lw          $a0, 0x47C4($a1)
    ctx->pc = 0x2e7688u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x2e768c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2e768cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e7690: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x2e7690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    // 0x2e7694: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e7694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e7698: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2e7698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2e769c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e769cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e76a0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2e76a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2e76a4: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2E76A4u;
    SET_GPR_U32(ctx, 31, 0x2E76ACu);
    ctx->pc = 0x2E76A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E76A4u;
    // 0x2e76a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2E76A4u, 0x2E76ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E76ACu;
label_2e76ac:
    // 0x2e76ac: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E76ACu;
    {
        const bool branch_taken_0x2e76ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E76B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76ACu;
        // 0x2e76b0: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e76ac) {
            ctx->pc = 0x2E76D8u;
            goto label_2e76d8;
        }
    }
    ctx->pc = 0x2E76B4u;
    // 0x2e76b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E76B4u;
    {
        const bool branch_taken_0x2e76b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76B4u;
        // 0x2e76b8: 0xc7a10064  lwc1        $f1, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e76b4) {
            ctx->pc = 0x2E76D8u;
            goto label_2e76d8;
        }
    }
    ctx->pc = 0x2E76BCu;
    // 0x2e76bc: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x2e76bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e76c0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2e76c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2e76c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e76c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e76c8: 0x0  nop
    ctx->pc = 0x2e76c8u;
    // NOP
    // 0x2e76cc: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2E76CCu;
    {
        const bool branch_taken_0x2e76cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e76cc) {
            ctx->pc = 0x2E76D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E76CCu;
            // 0x2e76d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E76D8u;
            goto label_2e76d8;
        }
    }
    ctx->pc = 0x2E76D4u;
    // 0x2e76d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e76d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e76d8:
    // 0x2e76d8: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E76D8u;
    {
        const bool branch_taken_0x2e76d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76D8u;
        // 0x2e76dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e76d8) {
            ctx->pc = 0x2E772Cu;
            goto label_2e772c;
        }
    }
    ctx->pc = 0x2E76E0u;
    // 0x2e76e0: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x2e76e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e76e4: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x2e76e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e76e8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2e76e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2e76ec: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x2e76ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e76f0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2e76f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e76f4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e76f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2e76f8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2e76f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2e76fc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2e76fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e7700: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2e7700u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e7704: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x2e7704u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x2e7708: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x2e7708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x2e770c: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x2e770cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e7710: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e7710u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e7714: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2e7714u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2e7718: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e7718u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e771c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e771cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2e7720: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2e7720u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2e7724: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E7724u;
    {
        const bool branch_taken_0x2e7724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7724u;
        // 0x2e7728: 0x7e020090  sq          $v0, 0x90($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7724) {
            ctx->pc = 0x2E7778u;
            goto label_2e7778;
        }
    }
    ctx->pc = 0x2E772Cu;
label_2e772c:
    // 0x2e772c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E772Cu;
    {
        const bool branch_taken_0x2e772c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E772Cu;
        // 0x2e7730: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e772c) {
            ctx->pc = 0x2E777Cu;
            goto label_2e777c;
        }
    }
    ctx->pc = 0x2E7734u;
    // 0x2e7734: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x2e7734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e7738: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2e7738u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e773c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e773cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e7740: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2e7740u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2e7744: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2e7744u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e7748: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2e7748u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e774c: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x2e774cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x2e7750: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x2e7750u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e7754: 0x7ba40050  lq          $a0, 0x50($sp)
    ctx->pc = 0x2e7754u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7758: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e7758u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2e775c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e775cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e7760: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e7760u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e7764: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e7764u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2e7768: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2e7768u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2e776c: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x2e776cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x2e7770: 0x7e0400a0  sq          $a0, 0xA0($s0)
    ctx->pc = 0x2e7770u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 4));
    // 0x2e7774: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x2e7774u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
label_2e7778:
    // 0x2e7778: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x2e7778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_2e777c:
    // 0x2e777c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2e777cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e7780: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2e7780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7784: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2e7784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e7788: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2e7788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e778c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2e778cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e7790: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2e7790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e7794: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2e7794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e7798: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7798u;
        // 0x2e779c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E77A0u;
}
