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

// Function: sub_00122D48
// Address: 0x122d48 - 0x122ed0
void sub_00122D48_0x122d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122D48_0x122d48");
#endif

    switch (ctx->pc) {
        case 0x122d48u: goto label_122d48;
        case 0x122d4cu: goto label_122d4c;
        case 0x122d50u: goto label_122d50;
        case 0x122d54u: goto label_122d54;
        case 0x122d58u: goto label_122d58;
        case 0x122d5cu: goto label_122d5c;
        case 0x122d60u: goto label_122d60;
        case 0x122d64u: goto label_122d64;
        case 0x122d68u: goto label_122d68;
        case 0x122d6cu: goto label_122d6c;
        case 0x122d70u: goto label_122d70;
        case 0x122d74u: goto label_122d74;
        case 0x122d78u: goto label_122d78;
        case 0x122d7cu: goto label_122d7c;
        case 0x122d80u: goto label_122d80;
        case 0x122d84u: goto label_122d84;
        case 0x122d88u: goto label_122d88;
        case 0x122d8cu: goto label_122d8c;
        case 0x122d90u: goto label_122d90;
        case 0x122d94u: goto label_122d94;
        case 0x122d98u: goto label_122d98;
        case 0x122d9cu: goto label_122d9c;
        case 0x122da0u: goto label_122da0;
        case 0x122da4u: goto label_122da4;
        case 0x122da8u: goto label_122da8;
        case 0x122dacu: goto label_122dac;
        case 0x122db0u: goto label_122db0;
        case 0x122db4u: goto label_122db4;
        case 0x122db8u: goto label_122db8;
        case 0x122dbcu: goto label_122dbc;
        case 0x122dc0u: goto label_122dc0;
        case 0x122dc4u: goto label_122dc4;
        case 0x122dc8u: goto label_122dc8;
        case 0x122dccu: goto label_122dcc;
        case 0x122dd0u: goto label_122dd0;
        case 0x122dd4u: goto label_122dd4;
        case 0x122dd8u: goto label_122dd8;
        case 0x122ddcu: goto label_122ddc;
        case 0x122de0u: goto label_122de0;
        case 0x122de4u: goto label_122de4;
        case 0x122de8u: goto label_122de8;
        case 0x122decu: goto label_122dec;
        case 0x122df0u: goto label_122df0;
        case 0x122df4u: goto label_122df4;
        case 0x122df8u: goto label_122df8;
        case 0x122dfcu: goto label_122dfc;
        case 0x122e00u: goto label_122e00;
        case 0x122e04u: goto label_122e04;
        case 0x122e08u: goto label_122e08;
        case 0x122e0cu: goto label_122e0c;
        case 0x122e10u: goto label_122e10;
        case 0x122e14u: goto label_122e14;
        case 0x122e18u: goto label_122e18;
        case 0x122e1cu: goto label_122e1c;
        case 0x122e20u: goto label_122e20;
        case 0x122e24u: goto label_122e24;
        case 0x122e28u: goto label_122e28;
        case 0x122e2cu: goto label_122e2c;
        case 0x122e30u: goto label_122e30;
        case 0x122e34u: goto label_122e34;
        case 0x122e38u: goto label_122e38;
        case 0x122e3cu: goto label_122e3c;
        case 0x122e40u: goto label_122e40;
        case 0x122e44u: goto label_122e44;
        case 0x122e48u: goto label_122e48;
        case 0x122e4cu: goto label_122e4c;
        case 0x122e50u: goto label_122e50;
        case 0x122e54u: goto label_122e54;
        case 0x122e58u: goto label_122e58;
        case 0x122e5cu: goto label_122e5c;
        case 0x122e60u: goto label_122e60;
        case 0x122e64u: goto label_122e64;
        case 0x122e68u: goto label_122e68;
        case 0x122e6cu: goto label_122e6c;
        case 0x122e70u: goto label_122e70;
        case 0x122e74u: goto label_122e74;
        case 0x122e78u: goto label_122e78;
        case 0x122e7cu: goto label_122e7c;
        case 0x122e80u: goto label_122e80;
        case 0x122e84u: goto label_122e84;
        case 0x122e88u: goto label_122e88;
        case 0x122e8cu: goto label_122e8c;
        case 0x122e90u: goto label_122e90;
        case 0x122e94u: goto label_122e94;
        case 0x122e98u: goto label_122e98;
        case 0x122e9cu: goto label_122e9c;
        case 0x122ea0u: goto label_122ea0;
        case 0x122ea4u: goto label_122ea4;
        case 0x122ea8u: goto label_122ea8;
        case 0x122eacu: goto label_122eac;
        case 0x122eb0u: goto label_122eb0;
        case 0x122eb4u: goto label_122eb4;
        case 0x122eb8u: goto label_122eb8;
        case 0x122ebcu: goto label_122ebc;
        case 0x122ec0u: goto label_122ec0;
        case 0x122ec4u: goto label_122ec4;
        case 0x122ec8u: goto label_122ec8;
        case 0x122eccu: goto label_122ecc;
        default: break;
    }

    ctx->pc = 0x122d48u;

label_122d48:
    // 0x122d48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x122d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_122d4c:
    // 0x122d4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x122d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_122d50:
    // 0x122d50: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x122d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_122d54:
    // 0x122d54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x122d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_122d58:
    // 0x122d58: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x122d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_122d5c:
    // 0x122d5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x122d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_122d60:
    // 0x122d60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_122d64:
    // 0x122d64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x122d64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_122d68:
    // 0x122d68: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x122d68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_122d6c:
    // 0x122d6c: 0xc047e6c  jal         func_11F9B0
label_122d70:
    if (ctx->pc == 0x122D70u) {
        ctx->pc = 0x122D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D6Cu;
        // 0x122d70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122D74u;
        goto label_122d74;
    }
    ctx->pc = 0x122D6Cu;
    SET_GPR_U32(ctx, 31, 0x122D74u);
    ctx->pc = 0x122D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D6Cu;
    // 0x122d70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x122D6Cu, 0x122D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D74u;
label_122d74:
    // 0x122d74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122d78:
    // 0x122d78: 0x50a0004e  beql        $a1, $zero, . + 4 + (0x4E << 2)
label_122d7c:
    if (ctx->pc == 0x122D7Cu) {
        ctx->pc = 0x122D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D78u;
        // 0x122d7c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122D80u;
        goto label_122d80;
    }
    ctx->pc = 0x122D78u;
    {
        const bool branch_taken_0x122d78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x122d78) {
            ctx->pc = 0x122D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122D78u;
            // 0x122d7c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122EB4u;
            goto label_122eb4;
        }
    }
    ctx->pc = 0x122D80u;
label_122d80:
    // 0x122d80: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
label_122d84:
    if (ctx->pc == 0x122D84u) {
        ctx->pc = 0x122D88u;
        goto label_122d88;
    }
    ctx->pc = 0x122D80u;
    {
        const bool branch_taken_0x122d80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x122d80) {
            ctx->pc = 0x122E10u;
            goto label_122e10;
        }
    }
    ctx->pc = 0x122D88u;
label_122d88:
    // 0x122d88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x122d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_122d8c:
    // 0x122d8c: 0x844401f8  lh          $a0, 0x1F8($v0)
    ctx->pc = 0x122d8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 504)));
label_122d90:
    // 0x122d90: 0x8c4301fc  lw          $v1, 0x1FC($v0)
    ctx->pc = 0x122d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_122d94:
    // 0x122d94: 0x60f809  jalr        $v1
label_122d98:
    if (ctx->pc == 0x122D98u) {
        ctx->pc = 0x122D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D94u;
        // 0x122d98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122D9Cu;
        goto label_122d9c;
    }
    ctx->pc = 0x122D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122D9Cu);
        ctx->pc = 0x122D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D94u;
        // 0x122d98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122D94u, 0x122D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122D9Cu;
label_122d9c:
    // 0x122d9c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x122d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_122da0:
    // 0x122da0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x122da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_122da4:
    // 0x122da4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x122da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_122da8:
    // 0x122da8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x122da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_122dac:
    // 0x122dac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x122dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_122db0:
    // 0x122db0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x122db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_122db4:
    // 0x122db4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x122db4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_122db8:
    // 0x122db8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x122db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_122dbc:
    // 0x122dbc: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x122dbcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_122dc0:
    // 0x122dc0: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x122dc0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
label_122dc4:
    // 0x122dc4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x122dc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122dc8:
    // 0x122dc8: 0x0  nop
    ctx->pc = 0x122dc8u;
    // NOP
label_122dcc:
    // 0x122dcc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_122dd0:
    if (ctx->pc == 0x122DD0u) {
        ctx->pc = 0x122DD4u;
        goto label_122dd4;
    }
    ctx->pc = 0x122DCCu;
    {
        const bool branch_taken_0x122dcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x122dcc) {
            ctx->pc = 0x122E10u;
            goto label_122e10;
        }
    }
    ctx->pc = 0x122DD4u;
label_122dd4:
    // 0x122dd4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x122dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_122dd8:
    // 0x122dd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x122dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_122ddc:
    // 0x122ddc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x122ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122de0:
    // 0x122de0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x122de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122de4:
    // 0x122de4: 0x0  nop
    ctx->pc = 0x122de4u;
    // NOP
label_122de8:
    // 0x122de8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_122dec:
    if (ctx->pc == 0x122DECu) {
        ctx->pc = 0x122DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DE8u;
        // 0x122dec: 0x46011082  mul.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x122DF0u;
        goto label_122df0;
    }
    ctx->pc = 0x122DE8u;
    {
        const bool branch_taken_0x122de8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DE8u;
        // 0x122dec: 0x46011082  mul.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122de8) {
            ctx->pc = 0x122DF8u;
            goto label_122df8;
        }
    }
    ctx->pc = 0x122DF0u;
label_122df0:
    // 0x122df0: 0x10000006  b           . + 4 + (0x6 << 2)
label_122df4:
    if (ctx->pc == 0x122DF4u) {
        ctx->pc = 0x122DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DF0u;
        // 0x122df4: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x122DF8u;
        goto label_122df8;
    }
    ctx->pc = 0x122DF0u;
    {
        const bool branch_taken_0x122df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DF0u;
        // 0x122df4: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122df0) {
            ctx->pc = 0x122E0Cu;
            goto label_122e0c;
        }
    }
    ctx->pc = 0x122DF8u;
label_122df8:
    // 0x122df8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x122df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122dfc:
    // 0x122dfc: 0x0  nop
    ctx->pc = 0x122dfcu;
    // NOP
label_122e00:
    // 0x122e00: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_122e04:
    if (ctx->pc == 0x122E04u) {
        ctx->pc = 0x122E08u;
        goto label_122e08;
    }
    ctx->pc = 0x122E00u;
    {
        const bool branch_taken_0x122e00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x122e00) {
            ctx->pc = 0x122E10u;
            goto label_122e10;
        }
    }
    ctx->pc = 0x122E08u;
label_122e08:
    // 0x122e08: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x122e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_122e0c:
    // 0x122e0c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x122e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_122e10:
    // 0x122e10: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
label_122e14:
    if (ctx->pc == 0x122E14u) {
        ctx->pc = 0x122E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E10u;
        // 0x122e14: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122E18u;
        goto label_122e18;
    }
    ctx->pc = 0x122E10u;
    {
        const bool branch_taken_0x122e10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E10u;
        // 0x122e14: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e10) {
            ctx->pc = 0x122EB0u;
            goto label_122eb0;
        }
    }
    ctx->pc = 0x122E18u;
label_122e18:
    // 0x122e18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x122e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_122e1c:
    // 0x122e1c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x122e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_122e20:
    // 0x122e20: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x122e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_122e24:
    // 0x122e24: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x122e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_122e28:
    // 0x122e28: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x122e28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_122e2c:
    // 0x122e2c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x122e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_122e30:
    // 0x122e30: 0x60f809  jalr        $v1
label_122e34:
    if (ctx->pc == 0x122E34u) {
        ctx->pc = 0x122E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E30u;
        // 0x122e34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122E38u;
        goto label_122e38;
    }
    ctx->pc = 0x122E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122E38u);
        ctx->pc = 0x122E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E30u;
        // 0x122e34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122E30u, 0x122E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122E38u;
label_122e38:
    // 0x122e38: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x122e38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_122e3c:
    // 0x122e3c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x122e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_122e40:
    // 0x122e40: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x122e40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_122e44:
    // 0x122e44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x122e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_122e48:
    // 0x122e48: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x122e48u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_122e4c:
    // 0x122e4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x122e4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122e50:
    // 0x122e50: 0x0  nop
    ctx->pc = 0x122e50u;
    // NOP
label_122e54:
    // 0x122e54: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_122e58:
    if (ctx->pc == 0x122E58u) {
        ctx->pc = 0x122E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E54u;
        // 0x122e58: 0x8e05cdb4  lw          $a1, -0x324C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122E5Cu;
        goto label_122e5c;
    }
    ctx->pc = 0x122E54u;
    {
        const bool branch_taken_0x122e54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E54u;
        // 0x122e58: 0x8e05cdb4  lw          $a1, -0x324C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e54) {
            ctx->pc = 0x122EB0u;
            goto label_122eb0;
        }
    }
    ctx->pc = 0x122E5Cu;
label_122e5c:
    // 0x122e5c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x122e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_122e60:
    // 0x122e60: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x122e60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_122e64:
    // 0x122e64: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x122e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_122e68:
    // 0x122e68: 0x60f809  jalr        $v1
label_122e6c:
    if (ctx->pc == 0x122E6Cu) {
        ctx->pc = 0x122E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E68u;
        // 0x122e6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122E70u;
        goto label_122e70;
    }
    ctx->pc = 0x122E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122E70u);
        ctx->pc = 0x122E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E68u;
        // 0x122e6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122E68u, 0x122E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122E70u;
label_122e70:
    // 0x122e70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x122e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_122e74:
    // 0x122e74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x122e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_122e78:
    // 0x122e78: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x122e78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_122e7c:
    // 0x122e7c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x122e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122e80:
    // 0x122e80: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x122e80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122e84:
    // 0x122e84: 0x0  nop
    ctx->pc = 0x122e84u;
    // NOP
label_122e88:
    // 0x122e88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_122e8c:
    if (ctx->pc == 0x122E8Cu) {
        ctx->pc = 0x122E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E88u;
        // 0x122e8c: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x122E90u;
        goto label_122e90;
    }
    ctx->pc = 0x122E88u;
    {
        const bool branch_taken_0x122e88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E88u;
        // 0x122e8c: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e88) {
            ctx->pc = 0x122E98u;
            goto label_122e98;
        }
    }
    ctx->pc = 0x122E90u;
label_122e90:
    // 0x122e90: 0x10000006  b           . + 4 + (0x6 << 2)
label_122e94:
    if (ctx->pc == 0x122E94u) {
        ctx->pc = 0x122E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E90u;
        // 0x122e94: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x122E98u;
        goto label_122e98;
    }
    ctx->pc = 0x122E90u;
    {
        const bool branch_taken_0x122e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E90u;
        // 0x122e94: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e90) {
            ctx->pc = 0x122EACu;
            goto label_122eac;
        }
    }
    ctx->pc = 0x122E98u;
label_122e98:
    // 0x122e98: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x122e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122e9c:
    // 0x122e9c: 0x0  nop
    ctx->pc = 0x122e9cu;
    // NOP
label_122ea0:
    // 0x122ea0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_122ea4:
    if (ctx->pc == 0x122EA4u) {
        ctx->pc = 0x122EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EA0u;
        // 0x122ea4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122EA8u;
        goto label_122ea8;
    }
    ctx->pc = 0x122EA0u;
    {
        const bool branch_taken_0x122ea0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EA0u;
        // 0x122ea4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ea0) {
            ctx->pc = 0x122EB4u;
            goto label_122eb4;
        }
    }
    ctx->pc = 0x122EA8u;
label_122ea8:
    // 0x122ea8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x122ea8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_122eac:
    // 0x122eac: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x122eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_122eb0:
    // 0x122eb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x122eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_122eb4:
    // 0x122eb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x122eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_122eb8:
    // 0x122eb8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x122eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_122ebc:
    // 0x122ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122ec0:
    // 0x122ec0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x122ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_122ec4:
    // 0x122ec4: 0x3e00008  jr          $ra
label_122ec8:
    if (ctx->pc == 0x122EC8u) {
        ctx->pc = 0x122EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EC4u;
        // 0x122ec8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122ECCu;
        goto label_122ecc;
    }
    ctx->pc = 0x122EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EC4u;
        // 0x122ec8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122ECCu;
label_122ecc:
    // 0x122ecc: 0x0  nop
    ctx->pc = 0x122eccu;
    // NOP
    ctx->pc = 0x122ed0u;
}
