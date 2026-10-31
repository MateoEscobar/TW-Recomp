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

// Function: sub_00108C80
// Address: 0x108c80 - 0x108dd0
void sub_00108C80_0x108c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108C80_0x108c80");
#endif

    switch (ctx->pc) {
        case 0x108c80u: goto label_108c80;
        case 0x108c84u: goto label_108c84;
        case 0x108c88u: goto label_108c88;
        case 0x108c8cu: goto label_108c8c;
        case 0x108c90u: goto label_108c90;
        case 0x108c94u: goto label_108c94;
        case 0x108c98u: goto label_108c98;
        case 0x108c9cu: goto label_108c9c;
        case 0x108ca0u: goto label_108ca0;
        case 0x108ca4u: goto label_108ca4;
        case 0x108ca8u: goto label_108ca8;
        case 0x108cacu: goto label_108cac;
        case 0x108cb0u: goto label_108cb0;
        case 0x108cb4u: goto label_108cb4;
        case 0x108cb8u: goto label_108cb8;
        case 0x108cbcu: goto label_108cbc;
        case 0x108cc0u: goto label_108cc0;
        case 0x108cc4u: goto label_108cc4;
        case 0x108cc8u: goto label_108cc8;
        case 0x108cccu: goto label_108ccc;
        case 0x108cd0u: goto label_108cd0;
        case 0x108cd4u: goto label_108cd4;
        case 0x108cd8u: goto label_108cd8;
        case 0x108cdcu: goto label_108cdc;
        case 0x108ce0u: goto label_108ce0;
        case 0x108ce4u: goto label_108ce4;
        case 0x108ce8u: goto label_108ce8;
        case 0x108cecu: goto label_108cec;
        case 0x108cf0u: goto label_108cf0;
        case 0x108cf4u: goto label_108cf4;
        case 0x108cf8u: goto label_108cf8;
        case 0x108cfcu: goto label_108cfc;
        case 0x108d00u: goto label_108d00;
        case 0x108d04u: goto label_108d04;
        case 0x108d08u: goto label_108d08;
        case 0x108d0cu: goto label_108d0c;
        case 0x108d10u: goto label_108d10;
        case 0x108d14u: goto label_108d14;
        case 0x108d18u: goto label_108d18;
        case 0x108d1cu: goto label_108d1c;
        case 0x108d20u: goto label_108d20;
        case 0x108d24u: goto label_108d24;
        case 0x108d28u: goto label_108d28;
        case 0x108d2cu: goto label_108d2c;
        case 0x108d30u: goto label_108d30;
        case 0x108d34u: goto label_108d34;
        case 0x108d38u: goto label_108d38;
        case 0x108d3cu: goto label_108d3c;
        case 0x108d40u: goto label_108d40;
        case 0x108d44u: goto label_108d44;
        case 0x108d48u: goto label_108d48;
        case 0x108d4cu: goto label_108d4c;
        case 0x108d50u: goto label_108d50;
        case 0x108d54u: goto label_108d54;
        case 0x108d58u: goto label_108d58;
        case 0x108d5cu: goto label_108d5c;
        case 0x108d60u: goto label_108d60;
        case 0x108d64u: goto label_108d64;
        case 0x108d68u: goto label_108d68;
        case 0x108d6cu: goto label_108d6c;
        case 0x108d70u: goto label_108d70;
        case 0x108d74u: goto label_108d74;
        case 0x108d78u: goto label_108d78;
        case 0x108d7cu: goto label_108d7c;
        case 0x108d80u: goto label_108d80;
        case 0x108d84u: goto label_108d84;
        case 0x108d88u: goto label_108d88;
        case 0x108d8cu: goto label_108d8c;
        case 0x108d90u: goto label_108d90;
        case 0x108d94u: goto label_108d94;
        case 0x108d98u: goto label_108d98;
        case 0x108d9cu: goto label_108d9c;
        case 0x108da0u: goto label_108da0;
        case 0x108da4u: goto label_108da4;
        case 0x108da8u: goto label_108da8;
        case 0x108dacu: goto label_108dac;
        case 0x108db0u: goto label_108db0;
        case 0x108db4u: goto label_108db4;
        case 0x108db8u: goto label_108db8;
        case 0x108dbcu: goto label_108dbc;
        case 0x108dc0u: goto label_108dc0;
        case 0x108dc4u: goto label_108dc4;
        case 0x108dc8u: goto label_108dc8;
        case 0x108dccu: goto label_108dcc;
        default: break;
    }

    ctx->pc = 0x108c80u;

label_108c80:
    // 0x108c80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x108c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_108c84:
    // 0x108c84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x108c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_108c88:
    // 0x108c88: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x108c88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_108c8c:
    // 0x108c8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_108c90:
    // 0x108c90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x108c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_108c94:
    // 0x108c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_108c98:
    // 0x108c98: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x108c98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_108c9c:
    // 0x108c9c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x108c9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_108ca0:
    // 0x108ca0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x108ca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_108ca4:
    // 0x108ca4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x108ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_108ca8:
    // 0x108ca8: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x108ca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_108cac:
    // 0x108cac: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x108cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_108cb0:
    // 0x108cb0: 0x60f809  jalr        $v1
label_108cb4:
    if (ctx->pc == 0x108CB4u) {
        ctx->pc = 0x108CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CB0u;
        // 0x108cb4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108CB8u;
        goto label_108cb8;
    }
    ctx->pc = 0x108CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x108CB8u);
        ctx->pc = 0x108CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CB0u;
        // 0x108cb4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108CB0u, 0x108CB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108CB8u;
label_108cb8:
    // 0x108cb8: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x108cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_108cbc:
    // 0x108cbc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x108cbcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_108cc0:
    // 0x108cc0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x108cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_108cc4:
    // 0x108cc4: 0x460cb034  c.lt.s      $f22, $f12
    ctx->pc = 0x108cc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108cc8:
    // 0x108cc8: 0x0  nop
    ctx->pc = 0x108cc8u;
    // NOP
label_108ccc:
    // 0x108ccc: 0x45000033  bc1f        . + 4 + (0x33 << 2)
label_108cd0:
    if (ctx->pc == 0x108CD0u) {
        ctx->pc = 0x108CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CCCu;
        // 0x108cd0: 0xc4800018  lwc1        $f0, 0x18($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108CD4u;
        goto label_108cd4;
    }
    ctx->pc = 0x108CCCu;
    {
        const bool branch_taken_0x108ccc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x108CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CCCu;
        // 0x108cd0: 0xc4800018  lwc1        $f0, 0x18($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ccc) {
            ctx->pc = 0x108D9Cu;
            goto label_108d9c;
        }
    }
    ctx->pc = 0x108CD4u;
label_108cd4:
    // 0x108cd4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x108cd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_108cd8:
    // 0x108cd8: 0x460c0540  add.s       $f21, $f0, $f12
    ctx->pc = 0x108cd8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_108cdc:
    // 0x108cdc: 0x0  nop
    ctx->pc = 0x108cdcu;
    // NOP
label_108ce0:
    // 0x108ce0: 0x0  nop
    ctx->pc = 0x108ce0u;
    // NOP
label_108ce4:
    // 0x108ce4: 0x460cad03  div.s       $f20, $f21, $f12
    ctx->pc = 0x108ce4u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[21], ctx->f[12]); }
label_108ce8:
    // 0x108ce8: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x108ce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108cec:
    // 0x108cec: 0x0  nop
    ctx->pc = 0x108cecu;
    // NOP
label_108cf0:
    // 0x108cf0: 0x4502002c  bc1fl       . + 4 + (0x2C << 2)
label_108cf4:
    if (ctx->pc == 0x108CF4u) {
        ctx->pc = 0x108CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CF0u;
        // 0x108cf4: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108CF8u;
        goto label_108cf8;
    }
    ctx->pc = 0x108CF0u;
    {
        const bool branch_taken_0x108cf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x108cf0) {
            ctx->pc = 0x108CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108CF0u;
            // 0x108cf4: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x108DA4u;
            goto label_108da4;
        }
    }
    ctx->pc = 0x108CF8u;
label_108cf8:
    // 0x108cf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x108cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_108cfc:
    // 0x108cfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x108cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_108d00:
    // 0x108d00: 0x0  nop
    ctx->pc = 0x108d00u;
    // NOP
label_108d04:
    // 0x108d04: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x108d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108d08:
    // 0x108d08: 0x0  nop
    ctx->pc = 0x108d08u;
    // NOP
label_108d0c:
    // 0x108d0c: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
label_108d10:
    if (ctx->pc == 0x108D10u) {
        ctx->pc = 0x108D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D0Cu;
        // 0x108d10: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D14u;
        goto label_108d14;
    }
    ctx->pc = 0x108D0Cu;
    {
        const bool branch_taken_0x108d0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x108d0c) {
            ctx->pc = 0x108D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108D0Cu;
            // 0x108d10: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x108DA4u;
            goto label_108da4;
        }
    }
    ctx->pc = 0x108D14u;
label_108d14:
    // 0x108d14: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x108d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_108d18:
    // 0x108d18: 0xc041338  jal         func_104CE0
label_108d1c:
    if (ctx->pc == 0x108D1Cu) {
        ctx->pc = 0x108D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D18u;
        // 0x108d1c: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D20u;
        goto label_108d20;
    }
    ctx->pc = 0x108D18u;
    SET_GPR_U32(ctx, 31, 0x108D20u);
    ctx->pc = 0x108D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D18u;
    // 0x108d1c: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x108D18u, 0x108D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D20u;
label_108d20:
    // 0x108d20: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_108d24:
    if (ctx->pc == 0x108D24u) {
        ctx->pc = 0x108D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D20u;
        // 0x108d24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D28u;
        goto label_108d28;
    }
    ctx->pc = 0x108D20u;
    {
        const bool branch_taken_0x108d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D20u;
        // 0x108d24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d20) {
            ctx->pc = 0x108DB0u;
            goto label_108db0;
        }
    }
    ctx->pc = 0x108D28u;
label_108d28:
    // 0x108d28: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x108d28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_108d2c:
    // 0x108d2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x108d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_108d30:
    // 0x108d30: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x108d30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_108d34:
    // 0x108d34: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x108d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_108d38:
    // 0x108d38: 0x60f809  jalr        $v1
label_108d3c:
    if (ctx->pc == 0x108D3Cu) {
        ctx->pc = 0x108D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D38u;
        // 0x108d3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D40u;
        goto label_108d40;
    }
    ctx->pc = 0x108D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x108D40u);
        ctx->pc = 0x108D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D38u;
        // 0x108d3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108D38u, 0x108D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108D40u;
label_108d40:
    // 0x108d40: 0x4600ab01  sub.s       $f12, $f21, $f0
    ctx->pc = 0x108d40u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_108d44:
    // 0x108d44: 0x460cb034  c.lt.s      $f22, $f12
    ctx->pc = 0x108d44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108d48:
    // 0x108d48: 0x0  nop
    ctx->pc = 0x108d48u;
    // NOP
label_108d4c:
    // 0x108d4c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_108d50:
    if (ctx->pc == 0x108D50u) {
        ctx->pc = 0x108D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D4Cu;
        // 0x108d50: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D54u;
        goto label_108d54;
    }
    ctx->pc = 0x108D4Cu;
    {
        const bool branch_taken_0x108d4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x108d4c) {
            ctx->pc = 0x108D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108D4Cu;
            // 0x108d50: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108D6Cu;
            goto label_108d6c;
        }
    }
    ctx->pc = 0x108D54u;
label_108d54:
    // 0x108d54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x108d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_108d58:
    // 0x108d58: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x108d58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_108d5c:
    // 0x108d5c: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x108d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_108d60:
    // 0x108d60: 0x60f809  jalr        $v1
label_108d64:
    if (ctx->pc == 0x108D64u) {
        ctx->pc = 0x108D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D60u;
        // 0x108d64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D68u;
        goto label_108d68;
    }
    ctx->pc = 0x108D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x108D68u);
        ctx->pc = 0x108D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D60u;
        // 0x108d64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108D60u, 0x108D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108D68u;
label_108d68:
    // 0x108d68: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x108d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_108d6c:
    // 0x108d6c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x108d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_108d70:
    // 0x108d70: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x108d70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_108d74:
    // 0x108d74: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x108d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_108d78:
    // 0x108d78: 0x40f809  jalr        $v0
label_108d7c:
    if (ctx->pc == 0x108D7Cu) {
        ctx->pc = 0x108D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D78u;
        // 0x108d7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D80u;
        goto label_108d80;
    }
    ctx->pc = 0x108D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108D80u);
        ctx->pc = 0x108D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D78u;
        // 0x108d7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108D78u, 0x108D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108D80u;
label_108d80:
    // 0x108d80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_108d84:
    if (ctx->pc == 0x108D84u) {
        ctx->pc = 0x108D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D80u;
        // 0x108d84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D88u;
        goto label_108d88;
    }
    ctx->pc = 0x108D80u;
    {
        const bool branch_taken_0x108d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D80u;
        // 0x108d84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d80) {
            ctx->pc = 0x108DB0u;
            goto label_108db0;
        }
    }
    ctx->pc = 0x108D88u;
label_108d88:
    // 0x108d88: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x108d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_108d8c:
    // 0x108d8c: 0xc04152a  jal         func_1054A8
label_108d90:
    if (ctx->pc == 0x108D90u) {
        ctx->pc = 0x108D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D8Cu;
        // 0x108d90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D94u;
        goto label_108d94;
    }
    ctx->pc = 0x108D8Cu;
    SET_GPR_U32(ctx, 31, 0x108D94u);
    ctx->pc = 0x108D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D8Cu;
    // 0x108d90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054A8u, 0x108D8Cu, 0x108D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D94u;
label_108d94:
    // 0x108d94: 0x10000006  b           . + 4 + (0x6 << 2)
label_108d98:
    if (ctx->pc == 0x108D98u) {
        ctx->pc = 0x108D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D94u;
        // 0x108d98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108D9Cu;
        goto label_108d9c;
    }
    ctx->pc = 0x108D94u;
    {
        const bool branch_taken_0x108d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D94u;
        // 0x108d98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d94) {
            ctx->pc = 0x108DB0u;
            goto label_108db0;
        }
    }
    ctx->pc = 0x108D9Cu;
label_108d9c:
    // 0x108d9c: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x108d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_108da0:
    // 0x108da0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x108da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_108da4:
    // 0x108da4: 0xc041338  jal         func_104CE0
label_108da8:
    if (ctx->pc == 0x108DA8u) {
        ctx->pc = 0x108DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DA4u;
        // 0x108da8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108DACu;
        goto label_108dac;
    }
    ctx->pc = 0x108DA4u;
    SET_GPR_U32(ctx, 31, 0x108DACu);
    ctx->pc = 0x108DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DA4u;
    // 0x108da8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x108DA4u, 0x108DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DACu;
label_108dac:
    // 0x108dac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x108dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_108db0:
    // 0x108db0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x108db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_108db4:
    // 0x108db4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x108db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_108db8:
    // 0x108db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108dbc:
    // 0x108dbc: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x108dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_108dc0:
    // 0x108dc0: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x108dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_108dc4:
    // 0x108dc4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x108dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_108dc8:
    // 0x108dc8: 0x3e00008  jr          $ra
label_108dcc:
    if (ctx->pc == 0x108DCCu) {
        ctx->pc = 0x108DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DC8u;
        // 0x108dcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108DD0u;
        goto label_fallthrough_0x108dc8;
    }
    ctx->pc = 0x108DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DC8u;
        // 0x108dcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x108dc8:
    ctx->pc = 0x108DD0u;
}
