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

// Function: sub_00340B38
// Address: 0x340b38 - 0x340d08
void sub_00340B38_0x340b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340B38_0x340b38");
#endif

    switch (ctx->pc) {
        case 0x340bacu: goto label_340bac;
        case 0x340bd0u: goto label_340bd0;
        case 0x340c74u: goto label_340c74;
        default: break;
    }

    ctx->pc = 0x340b38u;

    // 0x340b38: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x340b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x340b3c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x340b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x340b40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x340b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b44: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x340b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x340b48: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x340b48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b4c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x340b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x340b50: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x340b50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b54: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x340b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x340b58: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x340b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b5c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x340b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x340b60: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x340b60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x340b64: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x340b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x340b68: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x340b68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x340b6c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x340b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x340b70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x340b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b74: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x340b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x340b78: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x340b78u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x340b7c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x340b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x340b80: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x340b80u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x340b84: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x340b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x340b88: 0x32b60008  andi        $s6, $s5, 0x8
    ctx->pc = 0x340b88u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
    // 0x340b8c: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x340b8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x340b90: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x340b90u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x340b94: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x340b94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x340b98: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x340b98u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340b9c: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x340b9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x340ba0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x340ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x340ba4: 0xc0cd940  jal         func_336500
    ctx->pc = 0x340BA4u;
    SET_GPR_U32(ctx, 31, 0x340BACu);
    ctx->pc = 0x340BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340BA4u;
    // 0x340ba8: 0x3694ffff  ori         $s4, $s4, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x340BA4u, 0x340BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340BACu;
label_340bac:
    // 0x340bac: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x340bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x340bb0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x340bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x340bb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x340bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x340bb8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x340bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x340bbc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x340bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x340bc0: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x340bc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340bc4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x340bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x340bc8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x340bc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x340bcc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x340bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_340bd0:
    // 0x340bd0: 0x23e1004  sllv        $v0, $fp, $s1
    ctx->pc = 0x340bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), GPR_U32(ctx, 17) & 0x1F));
    // 0x340bd4: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x340bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x340bd8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x340BD8u;
    {
        const bool branch_taken_0x340bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340bd8) {
            ctx->pc = 0x340C94u;
            goto label_340c94;
        }
    }
    ctx->pc = 0x340BE0u;
    // 0x340be0: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x340be0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x340be4: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x340be4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x340be8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x340be8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x340bec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x340becu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x340bf0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x340bf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x340bf4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x340bf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x340bf8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x340bf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x340bfc: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x340bfcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x340c00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x340c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x340c04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x340c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340c08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x340c08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340c0c: 0x0  nop
    ctx->pc = 0x340c0cu;
    // NOP
    // 0x340c10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x340c10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340c14: 0x0  nop
    ctx->pc = 0x340c14u;
    // NOP
    // 0x340c18: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x340C18u;
    {
        const bool branch_taken_0x340c18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x340c18) {
            ctx->pc = 0x340C2Cu;
            goto label_340c2c;
        }
    }
    ctx->pc = 0x340C20u;
    // 0x340c20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x340c20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340c24: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x340C24u;
    {
        const bool branch_taken_0x340c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340c24) {
            ctx->pc = 0x340C78u;
            goto label_340c78;
        }
    }
    ctx->pc = 0x340C2Cu;
label_340c2c:
    // 0x340c2c: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x340c2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340c30: 0x0  nop
    ctx->pc = 0x340c30u;
    // NOP
    // 0x340c34: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x340C34u;
    {
        const bool branch_taken_0x340c34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x340c34) {
            ctx->pc = 0x340C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340C34u;
            // 0x340c38: 0x46000302  mul.s       $f12, $f0, $f0 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x340C50u;
            goto label_340c50;
        }
    }
    ctx->pc = 0x340C3Cu;
    // 0x340c3c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x340c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x340c40: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x340c40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x340c44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x340c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x340c48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x340C48u;
    {
        const bool branch_taken_0x340c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340c48) {
            ctx->pc = 0x340C78u;
            goto label_340c78;
        }
    }
    ctx->pc = 0x340C50u;
label_340c50:
    // 0x340c50: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x340c50u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x340c54: 0x0  nop
    ctx->pc = 0x340c54u;
    // NOP
    // 0x340c58: 0x0  nop
    ctx->pc = 0x340c58u;
    // NOP
    // 0x340c5c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x340c5cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x340c60: 0x0  nop
    ctx->pc = 0x340c60u;
    // NOP
    // 0x340c64: 0x0  nop
    ctx->pc = 0x340c64u;
    // NOP
    // 0x340c68: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x340c68u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x340c6c: 0xc0cd5a8  jal         func_3356A0
    ctx->pc = 0x340C6Cu;
    SET_GPR_U32(ctx, 31, 0x340C74u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x340C6Cu, 0x340C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340C74u;
label_340c74:
    // 0x340c74: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x340c74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_340c78:
    // 0x340c78: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x340c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x340c7c: 0x0  nop
    ctx->pc = 0x340c7cu;
    // NOP
    // 0x340c80: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x340C80u;
    {
        const bool branch_taken_0x340c80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x340c80) {
            ctx->pc = 0x340C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340C80u;
            // 0x340c84: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340CACu;
            goto label_340cac;
        }
    }
    ctx->pc = 0x340C88u;
    // 0x340c88: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x340c88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x340c8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x340C8Cu;
    {
        const bool branch_taken_0x340c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C8Cu;
        // 0x340c90: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340c8c) {
            ctx->pc = 0x340CA8u;
            goto label_340ca8;
        }
    }
    ctx->pc = 0x340C94u;
label_340c94:
    // 0x340c94: 0x52c00005  beql        $s6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x340C94u;
    {
        const bool branch_taken_0x340c94 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x340c94) {
            ctx->pc = 0x340C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340C94u;
            // 0x340c98: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340CACu;
            goto label_340cac;
        }
    }
    ctx->pc = 0x340C9Cu;
    // 0x340c9c: 0x16140002  bne         $s0, $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x340C9Cu;
    {
        const bool branch_taken_0x340c9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x340CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C9Cu;
        // 0x340ca0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340c9c) {
            ctx->pc = 0x340CA8u;
            goto label_340ca8;
        }
    }
    ctx->pc = 0x340CA4u;
    // 0x340ca4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x340ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_340ca8:
    // 0x340ca8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x340ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_340cac:
    // 0x340cac: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x340cacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x340cb0: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x340CB0u;
    {
        const bool branch_taken_0x340cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x340CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340CB0u;
        // 0x340cb4: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340cb0) {
            ctx->pc = 0x340BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340bd0;
        }
    }
    ctx->pc = 0x340CB8u;
    // 0x340cb8: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x340cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x340cbc: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x340cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x340cc0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x340cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x340cc4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x340cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x340cc8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x340cc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x340ccc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x340cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x340cd0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x340cd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x340cd4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x340cd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x340cd8: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x340cd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x340cdc: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x340cdcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x340ce0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x340ce0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x340ce4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x340ce4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x340ce8: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x340ce8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x340cec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x340cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x340cf0: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x340cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x340cf4: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x340cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x340cf8: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x340cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x340cfc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x340cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x340d00: 0x3e00008  jr          $ra
    ctx->pc = 0x340D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D00u;
        // 0x340d04: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340D08u;
}
