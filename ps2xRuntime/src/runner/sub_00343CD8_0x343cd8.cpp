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

// Function: sub_00343CD8
// Address: 0x343cd8 - 0x3440d0
void sub_00343CD8_0x343cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343CD8_0x343cd8");
#endif

    switch (ctx->pc) {
        case 0x343db4u: goto label_343db4;
        case 0x343e2cu: goto label_343e2c;
        default: break;
    }

    ctx->pc = 0x343cd8u;

    // 0x343cd8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x343cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x343cdc: 0x3c01b586  lui         $at, 0xB586
    ctx->pc = 0x343cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46470 << 16));
    // 0x343ce0: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x343ce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x343ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x343ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343ce8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x343ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x343cec: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x343cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x343cf0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x343cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343cf4: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x343cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x343cf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x343cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343cfc: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x343cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x343d00: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x343d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343d04: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x343d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x343d08: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x343d08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343d0c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x343d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x343d10: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x343d10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343d14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x343d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x343d18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x343d18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343d1c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x343d1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343d20: 0x7a420050  lq          $v0, 0x50($s2)
    ctx->pc = 0x343d20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x343d24: 0x7a030050  lq          $v1, 0x50($s0)
    ctx->pc = 0x343d24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x343d28: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x343d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x343d2c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x343d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x343d30: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x343d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x343d34: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x343d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x343d38: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x343d38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x343d3c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x343d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x343d40: 0x7a640000  lq          $a0, 0x0($s3)
    ctx->pc = 0x343d40u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x343d44: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x343d44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x343d48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x343d48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343d4c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x343d4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x343d50: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x343d50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343d54: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x343d54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x343d58: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x343d58u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x343d5c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x343d5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x343d60: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x343d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x343d64: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x343d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x343d68: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x343d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x343d6c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x343d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x343d70: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x343D70u;
    {
        const bool branch_taken_0x343d70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x343D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D70u;
        // 0x343d74: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343d70) {
            ctx->pc = 0x343D90u;
            goto label_343d90;
        }
    }
    ctx->pc = 0x343D78u;
    // 0x343d78: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x343d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x343d7c: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x343d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x343d80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x343d80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343d84: 0x0  nop
    ctx->pc = 0x343d84u;
    // NOP
    // 0x343d88: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x343D88u;
    {
        const bool branch_taken_0x343d88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x343d88) {
            ctx->pc = 0x343D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343D88u;
            // 0x343d8c: 0xc64c0040  lwc1        $f12, 0x40($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x343D98u;
            goto label_343d98;
        }
    }
    ctx->pc = 0x343D90u;
label_343d90:
    // 0x343d90: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x343d90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343d94: 0xc64c0040  lwc1        $f12, 0x40($s2)
    ctx->pc = 0x343d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_343d98:
    // 0x343d98: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x343d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x343d9c: 0xc60d0040  lwc1        $f13, 0x40($s0)
    ctx->pc = 0x343d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x343da0: 0x27a50064  addiu       $a1, $sp, 0x64
    ctx->pc = 0x343da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x343da4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x343da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x343da8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x343da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x343dac: 0xc0d2630  jal         func_3498C0
    ctx->pc = 0x343DACu;
    SET_GPR_U32(ctx, 31, 0x343DB4u);
    ctx->pc = 0x343DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343DACu;
    // 0x343db0: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498C0u, 0x343DACu, 0x343DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DB4u;
label_343db4:
    // 0x343db4: 0x104000bb  beqz        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x343DB4u;
    {
        const bool branch_taken_0x343db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343DB4u;
        // 0x343db8: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x343db4) {
            ctx->pc = 0x3440A4u;
            goto label_3440a4;
        }
    }
    ctx->pc = 0x343DBCu;
    // 0x343dbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x343dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x343dc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x343dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x343dc4: 0x0  nop
    ctx->pc = 0x343dc4u;
    // NOP
    // 0x343dc8: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x343dc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343dcc: 0x0  nop
    ctx->pc = 0x343dccu;
    // NOP
    // 0x343dd0: 0x450000b5  bc1f        . + 4 + (0xB5 << 2)
    ctx->pc = 0x343DD0u;
    {
        const bool branch_taken_0x343dd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x343DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343DD0u;
        // 0x343dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343dd0) {
            ctx->pc = 0x3440A8u;
            goto label_3440a8;
        }
    }
    ctx->pc = 0x343DD8u;
    // 0x343dd8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x343dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x343ddc: 0x0  nop
    ctx->pc = 0x343ddcu;
    // NOP
    // 0x343de0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x343de0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343de4: 0x0  nop
    ctx->pc = 0x343de4u;
    // NOP
    // 0x343de8: 0x450200b0  bc1fl       . + 4 + (0xB0 << 2)
    ctx->pc = 0x343DE8u;
    {
        const bool branch_taken_0x343de8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x343de8) {
            ctx->pc = 0x343DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343DE8u;
            // 0x343dec: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3440ACu;
            goto label_3440ac;
        }
    }
    ctx->pc = 0x343DF0u;
    // 0x343df0: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x343df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x343df4: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x343df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x343df8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x343df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x343dfc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x343DFCu;
    {
        const bool branch_taken_0x343dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343DFCu;
        // 0x343e00: 0xe7ac006c  swc1        $f12, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x343dfc) {
            ctx->pc = 0x343E34u;
            goto label_343e34;
        }
    }
    ctx->pc = 0x343E04u;
    // 0x343e04: 0xc60e0058  lwc1        $f14, 0x58($s0)
    ctx->pc = 0x343e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x343e08: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x343e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x343e0c: 0xc6500058  lwc1        $f16, 0x58($s2)
    ctx->pc = 0x343e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x343e10: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x343e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x343e14: 0xc64f0044  lwc1        $f15, 0x44($s2)
    ctx->pc = 0x343e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x343e18: 0xc6110044  lwc1        $f17, 0x44($s0)
    ctx->pc = 0x343e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x343e1c: 0x460f73c0  add.s       $f15, $f14, $f15
    ctx->pc = 0x343e1cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[14], ctx->f[15]);
    // 0x343e20: 0xc66d0008  lwc1        $f13, 0x8($s3)
    ctx->pc = 0x343e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x343e24: 0xc0d2a34  jal         func_34A8D0
    ctx->pc = 0x343E24u;
    SET_GPR_U32(ctx, 31, 0x343E2Cu);
    ctx->pc = 0x343E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343E24u;
    // 0x343e28: 0x46118440  add.s       $f17, $f16, $f17 (Delay Slot)
    ctx->f[17] = FPU_ADD_S(ctx->f[16], ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A8D0u, 0x343E24u, 0x343E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343E2Cu;
label_343e2c:
    // 0x343e2c: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x343E2Cu;
    {
        const bool branch_taken_0x343e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E2Cu;
        // 0x343e30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343e2c) {
            ctx->pc = 0x3440A8u;
            goto label_3440a8;
        }
    }
    ctx->pc = 0x343E34u;
label_343e34:
    // 0x343e34: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x343e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x343e38: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x343e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x343e3c: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x343e3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x343e40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x343e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x343e44: 0x0  nop
    ctx->pc = 0x343e44u;
    // NOP
    // 0x343e48: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x343e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343e4c: 0x0  nop
    ctx->pc = 0x343e4cu;
    // NOP
    // 0x343e50: 0x45000067  bc1f        . + 4 + (0x67 << 2)
    ctx->pc = 0x343E50u;
    {
        const bool branch_taken_0x343e50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x343e50) {
            ctx->pc = 0x343FF0u;
            goto label_343ff0;
        }
    }
    ctx->pc = 0x343E58u;
    // 0x343e58: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x343e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x343e5c: 0x3c01b586  lui         $at, 0xB586
    ctx->pc = 0x343e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46470 << 16));
    // 0x343e60: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x343e60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x343e64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x343e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343e68: 0x0  nop
    ctx->pc = 0x343e68u;
    // NOP
    // 0x343e6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x343e6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343e70: 0x0  nop
    ctx->pc = 0x343e70u;
    // NOP
    // 0x343e74: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
    ctx->pc = 0x343E74u;
    {
        const bool branch_taken_0x343e74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x343e74) {
            ctx->pc = 0x343FF0u;
            goto label_343ff0;
        }
    }
    ctx->pc = 0x343E7Cu;
    // 0x343e7c: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x343e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x343e80: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x343e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x343e84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x343e84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343e88: 0x0  nop
    ctx->pc = 0x343e88u;
    // NOP
    // 0x343e8c: 0x45000058  bc1f        . + 4 + (0x58 << 2)
    ctx->pc = 0x343E8Cu;
    {
        const bool branch_taken_0x343e8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x343E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E8Cu;
        // 0x343e90: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343e8c) {
            ctx->pc = 0x343FF0u;
            goto label_343ff0;
        }
    }
    ctx->pc = 0x343E94u;
    // 0x343e94: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x343e94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343e98: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x343e98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343e9c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x343e9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x343ea0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x343ea0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x343ea4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x343ea4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x343ea8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x343ea8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x343eac: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x343eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x343eb0: 0x0  nop
    ctx->pc = 0x343eb0u;
    // NOP
    // 0x343eb4: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x343eb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343eb8: 0x0  nop
    ctx->pc = 0x343eb8u;
    // NOP
    // 0x343ebc: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x343EBCu;
    {
        const bool branch_taken_0x343ebc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x343EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343EBCu;
        // 0x343ec0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343ebc) {
            ctx->pc = 0x343F54u;
            goto label_343f54;
        }
    }
    ctx->pc = 0x343EC4u;
    // 0x343ec4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x343ec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343ec8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x343ec8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343ecc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x343eccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343ed0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x343ed0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x343ed4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x343ed4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x343ed8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x343ed8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x343edc: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x343edcu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x343ee0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x343ee0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343ee4: 0x0  nop
    ctx->pc = 0x343ee4u;
    // NOP
    // 0x343ee8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x343ee8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343eec: 0x0  nop
    ctx->pc = 0x343eecu;
    // NOP
    // 0x343ef0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x343EF0u;
    {
        const bool branch_taken_0x343ef0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x343ef0) {
            ctx->pc = 0x343F0Cu;
            goto label_343f0c;
        }
    }
    ctx->pc = 0x343EF8u;
    // 0x343ef8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x343ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x343efc: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x343efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
    // 0x343f00: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x343f00u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511730u));
    // 0x343f04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x343F04u;
    {
        const bool branch_taken_0x343f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F04u;
        // 0x343f08: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343f04) {
            ctx->pc = 0x343F34u;
            goto label_343f34;
        }
    }
    ctx->pc = 0x343F0Cu;
label_343f0c:
    // 0x343f0c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x343f0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343f10: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x343f10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x343f14: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x343f14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x343f18: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x343f18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x343f1c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x343f1cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x343f20: 0x4a0003bf  vwaitq
    ctx->pc = 0x343f20u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x343f24: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x343f24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x343f28: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x343f28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x343f2c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x343f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x343f30: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x343f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_343f34:
    // 0x343f34: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x343f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x343f38: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x343f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x343f3c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x343f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x343f40: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x343f40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x343f44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x343f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x343f48: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x343f48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x343f4c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x343F4Cu;
    {
        const bool branch_taken_0x343f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F4Cu;
        // 0x343f50: 0x46020900  add.s       $f4, $f1, $f2 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x343f4c) {
            ctx->pc = 0x343FB0u;
            goto label_343fb0;
        }
    }
    ctx->pc = 0x343F54u;
label_343f54:
    // 0x343f54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x343f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x343f58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x343f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343f5c: 0x0  nop
    ctx->pc = 0x343f5cu;
    // NOP
    // 0x343f60: 0x0  nop
    ctx->pc = 0x343f60u;
    // NOP
    // 0x343f64: 0x46040104  c1          0x40104
    ctx->pc = 0x343f64u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x343f68: 0xc6020040  lwc1        $f2, 0x40($s0)
    ctx->pc = 0x343f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x343f6c: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x343f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x343f70: 0x0  nop
    ctx->pc = 0x343f70u;
    // NOP
    // 0x343f74: 0x0  nop
    ctx->pc = 0x343f74u;
    // NOP
    // 0x343f78: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x343f78u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x343f7c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x343f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x343f80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x343f80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x343f84: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x343f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x343f88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x343f88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x343f8c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x343f8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x343f90: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x343f90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x343f94: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x343f94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343f98: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x343f98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x343f9c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x343f9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x343fa0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x343fa0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x343fa4: 0x46030900  add.s       $f4, $f1, $f3
    ctx->pc = 0x343fa4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x343fa8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x343fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x343fac: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x343facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_343fb0:
    // 0x343fb0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x343fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x343fb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x343fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x343fb8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x343fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x343fbc: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x343fbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x343fc0: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x343fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    // 0x343fc4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x343fc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x343fc8: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x343fc8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x343fcc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x343fccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x343fd0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x343fd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x343fd4: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x343fd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x343fd8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x343fd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x343fdc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x343fdcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x343fe0: 0x7e2300a0  sq          $v1, 0xA0($s1)
    ctx->pc = 0x343fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), GPR_VEC(ctx, 3));
    // 0x343fe4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x343fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x343fe8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x343fe8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x343fec: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x343fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_343ff0:
    // 0x343ff0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x343ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x343ff4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x343ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x343ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343ffc: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x343ffcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344000: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x344000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344004: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x344004u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x344008: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x344008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34400c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x34400cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x344010: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x344010u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x344014: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x344014u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x344018: 0x4a0003bf  vwaitq
    ctx->pc = 0x344018u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x34401c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x34401cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x344020: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x344020u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344024: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x344024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344028: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x344028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x34402c: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x34402cu;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
    // 0x344030: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x344030u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x344034: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x344034u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x344038: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x344038u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34403c: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x34403cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344040: 0x7e250050  sq          $a1, 0x50($s1)
    ctx->pc = 0x344040u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 5));
    // 0x344044: 0x7e260010  sq          $a2, 0x10($s1)
    ctx->pc = 0x344044u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 6));
    // 0x344048: 0xe6220080  swc1        $f2, 0x80($s1)
    ctx->pc = 0x344048u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x34404c: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x34404cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x344050: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x344050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x344054: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x344054u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x344058: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x344058u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34405c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x34405cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x344060: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x344060u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x344064: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x344064u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344068: 0xae3500b0  sw          $s5, 0xB0($s1)
    ctx->pc = 0x344068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 21));
    // 0x34406c: 0x7e240090  sq          $a0, 0x90($s1)
    ctx->pc = 0x34406cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 4));
    // 0x344070: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x344070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x344074: 0x7a430050  lq          $v1, 0x50($s2)
    ctx->pc = 0x344074u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x344078: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x344078u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34407c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34407cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x344080: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x344080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x344084: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x344084u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x344088: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x344088u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34408c: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x34408cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x344090: 0x7e230090  sq          $v1, 0x90($s1)
    ctx->pc = 0x344090u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 3));
    // 0x344094: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x344094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x344098: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x344098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x34409c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34409Cu;
    {
        const bool branch_taken_0x34409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3440A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34409Cu;
        // 0x3440a0: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34409c) {
            ctx->pc = 0x3440A8u;
            goto label_3440a8;
        }
    }
    ctx->pc = 0x3440A4u;
label_3440a4:
    // 0x3440a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3440a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3440a8:
    // 0x3440a8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3440a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3440ac:
    // 0x3440ac: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3440acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3440b0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3440b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3440b4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3440b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3440b8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3440b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3440bc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3440bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3440c0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3440c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3440c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3440C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3440C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3440C4u;
        // 0x3440c8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3440C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3440CCu;
    // 0x3440cc: 0x0  nop
    ctx->pc = 0x3440ccu;
    // NOP
    ctx->pc = 0x3440d0u;
}
