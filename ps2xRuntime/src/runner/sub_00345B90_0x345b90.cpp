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

// Function: sub_00345B90
// Address: 0x345b90 - 0x345d18
void sub_00345B90_0x345b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345B90_0x345b90");
#endif

    switch (ctx->pc) {
        case 0x345c14u: goto label_345c14;
        case 0x345c50u: goto label_345c50;
        case 0x345ca0u: goto label_345ca0;
        default: break;
    }

    ctx->pc = 0x345b90u;

    // 0x345b90: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x345b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x345b94: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x345b94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x345b98: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x345b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x345b9c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x345b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345ba0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x345ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x345ba4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x345ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x345ba8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x345ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x345bac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x345bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x345bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345bb4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x345bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x345bb8: 0x78a80010  lq          $t0, 0x10($a1)
    ctx->pc = 0x345bb8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x345bbc: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x345bbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x345bc0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x345bc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x345bc4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x345bc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x345bc8: 0x482c0800  qmfc2.ni    $t4, $vf1
    ctx->pc = 0x345bc8u;
    SET_GPR_VEC(ctx, 12, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x345bcc: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x345bccu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x345bd0: 0x784d0040  lq          $t5, 0x40($v0)
    ctx->pc = 0x345bd0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x345bd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x345bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345bd8: 0x784b0050  lq          $t3, 0x50($v0)
    ctx->pc = 0x345bd8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x345bdc: 0x78490060  lq          $t1, 0x60($v0)
    ctx->pc = 0x345bdcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x345be0: 0x78470070  lq          $a3, 0x70($v0)
    ctx->pc = 0x345be0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x345be4: 0x78430080  lq          $v1, 0x80($v0)
    ctx->pc = 0x345be4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x345be8: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x345be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x345bec: 0x7faa0000  sq          $t2, 0x0($sp)
    ctx->pc = 0x345becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 10));
    // 0x345bf0: 0x7fac0010  sq          $t4, 0x10($sp)
    ctx->pc = 0x345bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 12));
    // 0x345bf4: 0x7fab0050  sq          $t3, 0x50($sp)
    ctx->pc = 0x345bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 11));
    // 0x345bf8: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x345bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
    // 0x345bfc: 0x7fa70070  sq          $a3, 0x70($sp)
    ctx->pc = 0x345bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 7));
    // 0x345c00: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x345c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x345c04: 0x7fad0090  sq          $t5, 0x90($sp)
    ctx->pc = 0x345c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 13));
    // 0x345c08: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x345c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x345c0c: 0xc0d2558  jal         func_349560
    ctx->pc = 0x345C0Cu;
    SET_GPR_U32(ctx, 31, 0x345C14u);
    ctx->pc = 0x345C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345C0Cu;
    // 0x345c10: 0x7fac00a0  sq          $t4, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349560u, 0x345C0Cu, 0x345C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C14u;
label_345c14:
    // 0x345c14: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x345C14u;
    {
        const bool branch_taken_0x345c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C14u;
        // 0x345c18: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345c14) {
            ctx->pc = 0x345CFCu;
            goto label_345cfc;
        }
    }
    ctx->pc = 0x345C1Cu;
    // 0x345c1c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x345c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x345c20: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x345c20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x345c24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x345c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x345c28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x345c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x345c2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x345c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345c30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x345c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x345c34: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x345C34u;
    {
        const bool branch_taken_0x345c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x345C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C34u;
        // 0x345c38: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345c34) {
            ctx->pc = 0x345CE4u;
            goto label_345ce4;
        }
    }
    ctx->pc = 0x345C3Cu;
    // 0x345c3c: 0x27a80024  addiu       $t0, $sp, 0x24
    ctx->pc = 0x345c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x345c40: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x345c40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x345c44: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x345c44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345c48: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x345c48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x345c4c: 0x0  nop
    ctx->pc = 0x345c4cu;
    // NOP
label_345c50:
    // 0x345c50: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x345c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x345c54: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x345c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x345c58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x345c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345c5c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x345c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345c60: 0x0  nop
    ctx->pc = 0x345c60u;
    // NOP
    // 0x345c64: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x345C64u;
    {
        const bool branch_taken_0x345c64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x345C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C64u;
        // 0x345c68: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345c64) {
            ctx->pc = 0x345C80u;
            goto label_345c80;
        }
    }
    ctx->pc = 0x345C6Cu;
    // 0x345c6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x345c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345c70: 0x0  nop
    ctx->pc = 0x345c70u;
    // NOP
    // 0x345c74: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x345C74u;
    {
        const bool branch_taken_0x345c74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x345C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C74u;
        // 0x345c78: 0x2466ffff  addiu       $a2, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345c74) {
            ctx->pc = 0x345CD8u;
            goto label_345cd8;
        }
    }
    ctx->pc = 0x345C7Cu;
    // 0x345c7c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x345c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_345c80:
    // 0x345c80: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x345c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x345c84: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x345c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x345c88: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x345C88u;
    {
        const bool branch_taken_0x345c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C88u;
        // 0x345c8c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345c88) {
            ctx->pc = 0x345CCCu;
            goto label_345ccc;
        }
    }
    ctx->pc = 0x345C90u;
    // 0x345c90: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x345c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x345c94: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x345c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x345c98: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x345c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x345c9c: 0x0  nop
    ctx->pc = 0x345c9cu;
    // NOP
label_345ca0:
    // 0x345ca0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x345ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345ca4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x345ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x345ca8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x345ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x345cac: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x345cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x345cb0: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x345cb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x345cb4: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x345cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x345cb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x345cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345cbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x345cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x345cc0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x345cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x345cc4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x345CC4u;
    {
        const bool branch_taken_0x345cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345CC4u;
        // 0x345cc8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345cc4) {
            ctx->pc = 0x345CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345ca0;
        }
    }
    ctx->pc = 0x345CCCu;
label_345ccc:
    // 0x345ccc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x345cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345cd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x345cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x345cd4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x345cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_345cd8:
    // 0x345cd8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x345cd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345cdc: 0x1467ffdc  bne         $v1, $a3, . + 4 + (-0x24 << 2)
    ctx->pc = 0x345CDCu;
    {
        const bool branch_taken_0x345cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x345CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345CDCu;
        // 0x345ce0: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345cdc) {
            ctx->pc = 0x345C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345c50;
        }
    }
    ctx->pc = 0x345CE4u;
label_345ce4:
    // 0x345ce4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x345CE4u;
    {
        const bool branch_taken_0x345ce4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x345CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345CE4u;
        // 0x345ce8: 0xc7a00024  lwc1        $f0, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ce4) {
            ctx->pc = 0x345CFCu;
            goto label_345cfc;
        }
    }
    ctx->pc = 0x345CECu;
    // 0x345cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x345cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345cf0: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x345cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x345cf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x345CF4u;
    {
        const bool branch_taken_0x345cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345CF4u;
        // 0x345cf8: 0xe6200080  swc1        $f0, 0x80($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345cf4) {
            ctx->pc = 0x345D00u;
            goto label_345d00;
        }
    }
    ctx->pc = 0x345CFCu;
label_345cfc:
    // 0x345cfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x345cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345d00:
    // 0x345d00: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x345d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x345d04: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x345d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x345d08: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x345d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x345d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x345D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D0Cu;
        // 0x345d10: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345D14u;
    // 0x345d14: 0x0  nop
    ctx->pc = 0x345d14u;
    // NOP
    ctx->pc = 0x345d18u;
}
