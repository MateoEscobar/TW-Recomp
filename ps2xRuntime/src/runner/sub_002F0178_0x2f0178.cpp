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

// Function: sub_002F0178
// Address: 0x2f0178 - 0x2f0318
void sub_002F0178_0x2f0178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0178_0x2f0178");
#endif

    switch (ctx->pc) {
        case 0x2f01ecu: goto label_2f01ec;
        case 0x2f0220u: goto label_2f0220;
        default: break;
    }

    ctx->pc = 0x2f0178u;

    // 0x2f0178: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2f0178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2f017c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f017cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2f0180: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2f0180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x2f0184: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x2f0184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x2f0188: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2f0188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x2f018c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f018cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0190: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2f0190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x2f0194: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x2f0194u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
    // 0x2f0198: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2f0198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x2f019c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f019cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f01a0: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2f01a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2f01a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f01a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f01a8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2f01a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2f01ac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2f01acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2f01b0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f01b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2f01b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f01b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f01b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f01b8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x2f01bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f01bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f01c0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2f01c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2f01c4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2f01c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2f01c8: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x2f01c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x2f01cc: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x2f01ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f01d0: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x2f01d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f01d4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2f01d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2f01d8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2f01d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2f01dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f01e0: 0x8d047198  lw          $a0, 0x7198($t0)
    ctx->pc = 0x2f01e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x597198u));
    // 0x2f01e4: 0xc0cfbb8  jal         func_33EEE0
    ctx->pc = 0x2F01E4u;
    SET_GPR_U32(ctx, 31, 0x2F01ECu);
    ctx->pc = 0x2F01E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F01E4u;
    // 0x2f01e8: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EEE0u, 0x2F01E4u, 0x2F01ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F01ECu;
label_2f01ec:
    // 0x2f01ec: 0x7a470000  lq          $a3, 0x0($s2)
    ctx->pc = 0x2f01ecu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f01f0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2f01f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2f01f4: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x2f01f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f01f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f01f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f01fc: 0x8ca447c4  lw          $a0, 0x47C4($a1)
    ctx->pc = 0x2f01fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x2f0200: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f0200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f0204: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x2f0204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    // 0x2f0208: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f0208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f020c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2f020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2f0210: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f0210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0214: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2f0214u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f0218: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2F0218u;
    SET_GPR_U32(ctx, 31, 0x2F0220u);
    ctx->pc = 0x2F021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0218u;
    // 0x2f021c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2F0218u, 0x2F0220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0220u;
label_2f0220:
    // 0x2f0220: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F0220u;
    {
        const bool branch_taken_0x2f0220 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0220u;
        // 0x2f0224: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0220) {
            ctx->pc = 0x2F024Cu;
            goto label_2f024c;
        }
    }
    ctx->pc = 0x2F0228u;
    // 0x2f0228: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F0228u;
    {
        const bool branch_taken_0x2f0228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0228u;
        // 0x2f022c: 0xc7a10064  lwc1        $f1, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0228) {
            ctx->pc = 0x2F024Cu;
            goto label_2f024c;
        }
    }
    ctx->pc = 0x2F0230u;
    // 0x2f0230: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x2f0230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0234: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2f0234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2f0238: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f0238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f023c: 0x0  nop
    ctx->pc = 0x2f023cu;
    // NOP
    // 0x2f0240: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x2F0240u;
    {
        const bool branch_taken_0x2f0240 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0240) {
            ctx->pc = 0x2F0244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0240u;
            // 0x2f0244: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F024Cu;
            goto label_2f024c;
        }
    }
    ctx->pc = 0x2F0248u;
    // 0x2f0248: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f024c:
    // 0x2f024c: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F024Cu;
    {
        const bool branch_taken_0x2f024c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F024Cu;
        // 0x2f0250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f024c) {
            ctx->pc = 0x2F02A0u;
            goto label_2f02a0;
        }
    }
    ctx->pc = 0x2F0254u;
    // 0x2f0254: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x2f0254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0258: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x2f0258u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f025c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2f025cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2f0260: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x2f0260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2f0264: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2f0264u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f0268: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f0268u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f026c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2f026cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2f0270: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f0270u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f0274: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2f0274u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f0278: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x2f0278u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x2f027c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x2f027cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x2f0280: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x2f0280u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f0284: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f0284u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f0288: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f0288u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f028c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f028cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f0290: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f0290u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f0294: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2f0294u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2f0298: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2F0298u;
    {
        const bool branch_taken_0x2f0298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0298u;
        // 0x2f029c: 0x7e020090  sq          $v0, 0x90($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0298) {
            ctx->pc = 0x2F02ECu;
            goto label_2f02ec;
        }
    }
    ctx->pc = 0x2F02A0u;
label_2f02a0:
    // 0x2f02a0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F02A0u;
    {
        const bool branch_taken_0x2f02a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F02A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F02A0u;
        // 0x2f02a4: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f02a0) {
            ctx->pc = 0x2F02F0u;
            goto label_2f02f0;
        }
    }
    ctx->pc = 0x2F02A8u;
    // 0x2f02a8: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x2f02a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f02ac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2f02acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f02b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f02b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f02b4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2f02b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2f02b8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f02b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f02bc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2f02bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f02c0: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x2f02c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x2f02c4: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x2f02c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f02c8: 0x7ba40050  lq          $a0, 0x50($sp)
    ctx->pc = 0x2f02c8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f02cc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f02ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f02d0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f02d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f02d4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f02d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f02d8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f02d8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f02dc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2f02dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2f02e0: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x2f02e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x2f02e4: 0x7e0400a0  sq          $a0, 0xA0($s0)
    ctx->pc = 0x2f02e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 4));
    // 0x2f02e8: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x2f02e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
label_2f02ec:
    // 0x2f02ec: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x2f02ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_2f02f0:
    // 0x2f02f0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2f02f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2f02f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f02f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f02f8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2f02f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2f02fc: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2f02fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f0300: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2f0300u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f0304: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2f0304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f0308: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2f0308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f030c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F030Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F030Cu;
        // 0x2f0310: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F030Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0314u;
    // 0x2f0314: 0x0  nop
    ctx->pc = 0x2f0314u;
    // NOP
    ctx->pc = 0x2f0318u;
}
