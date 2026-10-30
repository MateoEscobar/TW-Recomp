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

// Function: sub_0038FC70
// Address: 0x38fc70 - 0x38fdf0
void sub_0038FC70_0x38fc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FC70_0x38fc70");
#endif

    switch (ctx->pc) {
        case 0x38fc70u: goto label_38fc70;
        case 0x38fc74u: goto label_38fc74;
        case 0x38fc78u: goto label_38fc78;
        case 0x38fc7cu: goto label_38fc7c;
        case 0x38fc80u: goto label_38fc80;
        case 0x38fc84u: goto label_38fc84;
        case 0x38fc88u: goto label_38fc88;
        case 0x38fc8cu: goto label_38fc8c;
        case 0x38fc90u: goto label_38fc90;
        case 0x38fc94u: goto label_38fc94;
        case 0x38fc98u: goto label_38fc98;
        case 0x38fc9cu: goto label_38fc9c;
        case 0x38fca0u: goto label_38fca0;
        case 0x38fca4u: goto label_38fca4;
        case 0x38fca8u: goto label_38fca8;
        case 0x38fcacu: goto label_38fcac;
        case 0x38fcb0u: goto label_38fcb0;
        case 0x38fcb4u: goto label_38fcb4;
        case 0x38fcb8u: goto label_38fcb8;
        case 0x38fcbcu: goto label_38fcbc;
        case 0x38fcc0u: goto label_38fcc0;
        case 0x38fcc4u: goto label_38fcc4;
        case 0x38fcc8u: goto label_38fcc8;
        case 0x38fcccu: goto label_38fccc;
        case 0x38fcd0u: goto label_38fcd0;
        case 0x38fcd4u: goto label_38fcd4;
        case 0x38fcd8u: goto label_38fcd8;
        case 0x38fcdcu: goto label_38fcdc;
        case 0x38fce0u: goto label_38fce0;
        case 0x38fce4u: goto label_38fce4;
        case 0x38fce8u: goto label_38fce8;
        case 0x38fcecu: goto label_38fcec;
        case 0x38fcf0u: goto label_38fcf0;
        case 0x38fcf4u: goto label_38fcf4;
        case 0x38fcf8u: goto label_38fcf8;
        case 0x38fcfcu: goto label_38fcfc;
        case 0x38fd00u: goto label_38fd00;
        case 0x38fd04u: goto label_38fd04;
        case 0x38fd08u: goto label_38fd08;
        case 0x38fd0cu: goto label_38fd0c;
        case 0x38fd10u: goto label_38fd10;
        case 0x38fd14u: goto label_38fd14;
        case 0x38fd18u: goto label_38fd18;
        case 0x38fd1cu: goto label_38fd1c;
        case 0x38fd20u: goto label_38fd20;
        case 0x38fd24u: goto label_38fd24;
        case 0x38fd28u: goto label_38fd28;
        case 0x38fd2cu: goto label_38fd2c;
        case 0x38fd30u: goto label_38fd30;
        case 0x38fd34u: goto label_38fd34;
        case 0x38fd38u: goto label_38fd38;
        case 0x38fd3cu: goto label_38fd3c;
        case 0x38fd40u: goto label_38fd40;
        case 0x38fd44u: goto label_38fd44;
        case 0x38fd48u: goto label_38fd48;
        case 0x38fd4cu: goto label_38fd4c;
        case 0x38fd50u: goto label_38fd50;
        case 0x38fd54u: goto label_38fd54;
        case 0x38fd58u: goto label_38fd58;
        case 0x38fd5cu: goto label_38fd5c;
        case 0x38fd60u: goto label_38fd60;
        case 0x38fd64u: goto label_38fd64;
        case 0x38fd68u: goto label_38fd68;
        case 0x38fd6cu: goto label_38fd6c;
        case 0x38fd70u: goto label_38fd70;
        case 0x38fd74u: goto label_38fd74;
        case 0x38fd78u: goto label_38fd78;
        case 0x38fd7cu: goto label_38fd7c;
        case 0x38fd80u: goto label_38fd80;
        case 0x38fd84u: goto label_38fd84;
        case 0x38fd88u: goto label_38fd88;
        case 0x38fd8cu: goto label_38fd8c;
        case 0x38fd90u: goto label_38fd90;
        case 0x38fd94u: goto label_38fd94;
        case 0x38fd98u: goto label_38fd98;
        case 0x38fd9cu: goto label_38fd9c;
        case 0x38fda0u: goto label_38fda0;
        case 0x38fda4u: goto label_38fda4;
        case 0x38fda8u: goto label_38fda8;
        case 0x38fdacu: goto label_38fdac;
        case 0x38fdb0u: goto label_38fdb0;
        case 0x38fdb4u: goto label_38fdb4;
        case 0x38fdb8u: goto label_38fdb8;
        case 0x38fdbcu: goto label_38fdbc;
        case 0x38fdc0u: goto label_38fdc0;
        case 0x38fdc4u: goto label_38fdc4;
        case 0x38fdc8u: goto label_38fdc8;
        case 0x38fdccu: goto label_38fdcc;
        case 0x38fdd0u: goto label_38fdd0;
        case 0x38fdd4u: goto label_38fdd4;
        case 0x38fdd8u: goto label_38fdd8;
        case 0x38fddcu: goto label_38fddc;
        case 0x38fde0u: goto label_38fde0;
        case 0x38fde4u: goto label_38fde4;
        case 0x38fde8u: goto label_38fde8;
        case 0x38fdecu: goto label_38fdec;
        default: break;
    }

    ctx->pc = 0x38fc70u;

label_38fc70:
    // 0x38fc70: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x38fc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_38fc74:
    // 0x38fc74: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x38fc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_38fc78:
    // 0x38fc78: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x38fc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_38fc7c:
    // 0x38fc7c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x38fc7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38fc80:
    // 0x38fc80: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x38fc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_38fc84:
    // 0x38fc84: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x38fc84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38fc88:
    // 0x38fc88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x38fc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_38fc8c:
    // 0x38fc8c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x38fc8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38fc90:
    // 0x38fc90: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x38fc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_38fc94:
    // 0x38fc94: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x38fc94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_38fc98:
    // 0x38fc98: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x38fc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_38fc9c:
    // 0x38fc9c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x38fc9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38fca0:
    // 0x38fca0: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x38fca0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_38fca4:
    // 0x38fca4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x38fca4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_38fca8:
    // 0x38fca8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x38fca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_38fcac:
    // 0x38fcac: 0x460c6542  mul.s       $f21, $f12, $f12
    ctx->pc = 0x38fcacu;
    ctx->f[21] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_38fcb0:
    // 0x38fcb0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x38fcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_38fcb4:
    // 0x38fcb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x38fcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38fcb8:
    // 0x38fcb8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x38fcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_38fcbc:
    // 0x38fcbc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38fcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_38fcc0:
    // 0x38fcc0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x38fcc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_38fcc4:
    // 0x38fcc4: 0xc08a61a  jal         func_229868
label_38fcc8:
    if (ctx->pc == 0x38FCC8u) {
        ctx->pc = 0x38FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCC4u;
        // 0x38fcc8: 0xafa60020  sw          $a2, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FCCCu;
        goto label_38fccc;
    }
    ctx->pc = 0x38FCC4u;
    SET_GPR_U32(ctx, 31, 0x38FCCCu);
    ctx->pc = 0x38FCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FCC4u;
    // 0x38fcc8: 0xafa60020  sw          $a2, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x38FCC4u, 0x38FCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FCCCu;
label_38fccc:
    // 0x38fccc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_38fcd0:
    if (ctx->pc == 0x38FCD0u) {
        ctx->pc = 0x38FCD4u;
        goto label_38fcd4;
    }
    ctx->pc = 0x38FCCCu;
    {
        const bool branch_taken_0x38fccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fccc) {
            ctx->pc = 0x38FCE0u;
            goto label_38fce0;
        }
    }
    ctx->pc = 0x38FCD4u;
label_38fcd4:
    // 0x38fcd4: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x38fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_38fcd8:
    // 0x38fcd8: 0x10000002  b           . + 4 + (0x2 << 2)
label_38fcdc:
    if (ctx->pc == 0x38FCDCu) {
        ctx->pc = 0x38FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCD8u;
        // 0x38fcdc: 0xc45400d8  lwc1        $f20, 0xD8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FCE0u;
        goto label_38fce0;
    }
    ctx->pc = 0x38FCD8u;
    {
        const bool branch_taken_0x38fcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCD8u;
        // 0x38fcdc: 0xc45400d8  lwc1        $f20, 0xD8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fcd8) {
            ctx->pc = 0x38FCE4u;
            goto label_38fce4;
        }
    }
    ctx->pc = 0x38FCE0u;
label_38fce0:
    // 0x38fce0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x38fce0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_38fce4:
    // 0x38fce4: 0x0  nop
    ctx->pc = 0x38fce4u;
    // NOP
label_38fce8:
    // 0x38fce8: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x38fce8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_38fcec:
    // 0x38fcec: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x38fcecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_38fcf0:
    // 0x38fcf0: 0x10000027  b           . + 4 + (0x27 << 2)
label_38fcf4:
    if (ctx->pc == 0x38FCF4u) {
        ctx->pc = 0x38FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCF0u;
        // 0x38fcf4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FCF8u;
        goto label_38fcf8;
    }
    ctx->pc = 0x38FCF0u;
    {
        const bool branch_taken_0x38fcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCF0u;
        // 0x38fcf4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fcf0) {
            ctx->pc = 0x38FD90u;
            goto label_38fd90;
        }
    }
    ctx->pc = 0x38FCF8u;
label_38fcf8:
    // 0x38fcf8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x38fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_38fcfc:
    // 0x38fcfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38fd00:
    // 0x38fd00: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x38fd00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38fd04:
    // 0x38fd04: 0x12140021  beq         $s0, $s4, . + 4 + (0x21 << 2)
label_38fd08:
    if (ctx->pc == 0x38FD08u) {
        ctx->pc = 0x38FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD04u;
        // 0x38fd08: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FD0Cu;
        goto label_38fd0c;
    }
    ctx->pc = 0x38FD04u;
    {
        const bool branch_taken_0x38fd04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x38FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD04u;
        // 0x38fd08: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd04) {
            ctx->pc = 0x38FD8Cu;
            goto label_38fd8c;
        }
    }
    ctx->pc = 0x38FD0Cu;
label_38fd0c:
    // 0x38fd0c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x38fd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_38fd10:
    // 0x38fd10: 0xc136afa  jal         func_4DABE8
label_38fd14:
    if (ctx->pc == 0x38FD14u) {
        ctx->pc = 0x38FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD10u;
        // 0x38fd14: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FD18u;
        goto label_38fd18;
    }
    ctx->pc = 0x38FD10u;
    SET_GPR_U32(ctx, 31, 0x38FD18u);
    ctx->pc = 0x38FD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FD10u;
    // 0x38fd14: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x38FD10u, 0x38FD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FD18u;
label_38fd18:
    // 0x38fd18: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x38fd18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38fd1c:
    // 0x38fd1c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38fd1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38fd20:
    // 0x38fd20: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x38fd20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38fd24:
    // 0x38fd24: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38fd24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38fd28:
    // 0x38fd28: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38fd28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38fd2c:
    // 0x38fd2c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x38fd2cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_38fd30:
    // 0x38fd30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38fd30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38fd34:
    // 0x38fd34: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38fd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_38fd38:
    // 0x38fd38: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x38fd38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38fd3c:
    // 0x38fd3c: 0x0  nop
    ctx->pc = 0x38fd3cu;
    // NOP
label_38fd40:
    // 0x38fd40: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_38fd44:
    if (ctx->pc == 0x38FD44u) {
        ctx->pc = 0x38FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD40u;
        // 0x38fd44: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FD48u;
        goto label_38fd48;
    }
    ctx->pc = 0x38FD40u;
    {
        const bool branch_taken_0x38fd40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD40u;
        // 0x38fd44: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd40) {
            ctx->pc = 0x38FD8Cu;
            goto label_38fd8c;
        }
    }
    ctx->pc = 0x38FD48u;
label_38fd48:
    // 0x38fd48: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x38fd48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38fd4c:
    // 0x38fd4c: 0x0  nop
    ctx->pc = 0x38fd4cu;
    // NOP
label_38fd50:
    // 0x38fd50: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
label_38fd54:
    if (ctx->pc == 0x38FD54u) {
        ctx->pc = 0x38FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD50u;
        // 0x38fd54: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FD58u;
        goto label_38fd58;
    }
    ctx->pc = 0x38FD50u;
    {
        const bool branch_taken_0x38fd50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38fd50) {
            ctx->pc = 0x38FD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FD50u;
            // 0x38fd54: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FD90u;
            goto label_38fd90;
        }
    }
    ctx->pc = 0x38FD58u;
label_38fd58:
    // 0x38fd58: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_38fd5c:
    if (ctx->pc == 0x38FD5Cu) {
        ctx->pc = 0x38FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD58u;
        // 0x38fd5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FD60u;
        goto label_38fd60;
    }
    ctx->pc = 0x38FD58u;
    {
        const bool branch_taken_0x38fd58 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD58u;
        // 0x38fd5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd58) {
            ctx->pc = 0x38FD70u;
            goto label_38fd70;
        }
    }
    ctx->pc = 0x38FD60u;
label_38fd60:
    // 0x38fd60: 0x2c0f809  jalr        $s6
label_38fd64:
    if (ctx->pc == 0x38FD64u) {
        ctx->pc = 0x38FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD60u;
        // 0x38fd64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FD68u;
        goto label_38fd68;
    }
    ctx->pc = 0x38FD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x38FD68u);
        ctx->pc = 0x38FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD60u;
        // 0x38fd64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FD60u, 0x38FD68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38FD68u;
label_38fd68:
    // 0x38fd68: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_38fd6c:
    if (ctx->pc == 0x38FD6Cu) {
        ctx->pc = 0x38FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD68u;
        // 0x38fd6c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FD70u;
        goto label_38fd70;
    }
    ctx->pc = 0x38FD68u;
    {
        const bool branch_taken_0x38fd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fd68) {
            ctx->pc = 0x38FD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FD68u;
            // 0x38fd6c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FD90u;
            goto label_38fd90;
        }
    }
    ctx->pc = 0x38FD70u;
label_38fd70:
    // 0x38fd70: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x38fd70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_38fd74:
    // 0x38fd74: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x38fd74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_38fd78:
    // 0x38fd78: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x38fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_38fd7c:
    // 0x38fd7c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x38fd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_38fd80:
    // 0x38fd80: 0x264182b  sltu        $v1, $s3, $a0
    ctx->pc = 0x38fd80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_38fd84:
    // 0x38fd84: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_38fd88:
    if (ctx->pc == 0x38FD88u) {
        ctx->pc = 0x38FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD84u;
        // 0x38fd88: 0x2e28821  addu        $s1, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FD8Cu;
        goto label_38fd8c;
    }
    ctx->pc = 0x38FD84u;
    {
        const bool branch_taken_0x38fd84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD84u;
        // 0x38fd88: 0x2e28821  addu        $s1, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd84) {
            ctx->pc = 0x38FDB0u;
            goto label_38fdb0;
        }
    }
    ctx->pc = 0x38FD8Cu;
label_38fd8c:
    // 0x38fd8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38fd8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_38fd90:
    // 0x38fd90: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x38fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_38fd94:
    // 0x38fd94: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x38fd94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_38fd98:
    // 0x38fd98: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x38fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_38fd9c:
    // 0x38fd9c: 0x40f809  jalr        $v0
label_38fda0:
    if (ctx->pc == 0x38FDA0u) {
        ctx->pc = 0x38FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD9Cu;
        // 0x38fda0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FDA4u;
        goto label_38fda4;
    }
    ctx->pc = 0x38FD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38FDA4u);
        ctx->pc = 0x38FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD9Cu;
        // 0x38fda0: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FD9Cu, 0x38FDA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38FDA4u;
label_38fda4:
    // 0x38fda4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x38fda4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38fda8:
    // 0x38fda8: 0x5440ffd3  bnel        $v0, $zero, . + 4 + (-0x2D << 2)
label_38fdac:
    if (ctx->pc == 0x38FDACu) {
        ctx->pc = 0x38FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FDA8u;
        // 0x38fdac: 0x8ea30008  lw          $v1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FDB0u;
        goto label_38fdb0;
    }
    ctx->pc = 0x38FDA8u;
    {
        const bool branch_taken_0x38fda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38fda8) {
            ctx->pc = 0x38FDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FDA8u;
            // 0x38fdac: 0x8ea30008  lw          $v1, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fcf8;
        }
    }
    ctx->pc = 0x38FDB0u;
label_38fdb0:
    // 0x38fdb0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x38fdb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38fdb4:
    // 0x38fdb4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x38fdb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_38fdb8:
    // 0x38fdb8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x38fdb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_38fdbc:
    // 0x38fdbc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x38fdbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_38fdc0:
    // 0x38fdc0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x38fdc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38fdc4:
    // 0x38fdc4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x38fdc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38fdc8:
    // 0x38fdc8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x38fdc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38fdcc:
    // 0x38fdcc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x38fdccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38fdd0:
    // 0x38fdd0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x38fdd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38fdd4:
    // 0x38fdd4: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x38fdd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38fdd8:
    // 0x38fdd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38fdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38fddc:
    // 0x38fddc: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x38fddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_38fde0:
    // 0x38fde0: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x38fde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38fde4:
    // 0x38fde4: 0x3e00008  jr          $ra
label_38fde8:
    if (ctx->pc == 0x38FDE8u) {
        ctx->pc = 0x38FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FDE4u;
        // 0x38fde8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FDECu;
        goto label_38fdec;
    }
    ctx->pc = 0x38FDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FDE4u;
        // 0x38fde8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FDECu;
label_38fdec:
    // 0x38fdec: 0x0  nop
    ctx->pc = 0x38fdecu;
    // NOP
    ctx->pc = 0x38fdf0u;
}
