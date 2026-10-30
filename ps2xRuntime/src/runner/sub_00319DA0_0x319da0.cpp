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

// Function: sub_00319DA0
// Address: 0x319da0 - 0x319ec8
void sub_00319DA0_0x319da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319DA0_0x319da0");
#endif

    switch (ctx->pc) {
        case 0x319e10u: goto label_319e10;
        case 0x319e1cu: goto label_319e1c;
        case 0x319e2cu: goto label_319e2c;
        case 0x319e4cu: goto label_319e4c;
        case 0x319e58u: goto label_319e58;
        default: break;
    }

    ctx->pc = 0x319da0u;

    // 0x319da0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x319da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x319da4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x319da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x319da8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x319da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x319dac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x319dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319db0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x319db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x319db4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x319db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x319db8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x319db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x319dbc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x319dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x319dc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x319dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x319dc4: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x319dc4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x319dc8: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x319dc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x319dcc: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x319dccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x319dd0: 0x9222003c  lbu         $v0, 0x3C($s1)
    ctx->pc = 0x319dd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x319dd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319DD4u;
    {
        const bool branch_taken_0x319dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DD4u;
        // 0x319dd8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319dd4) {
            ctx->pc = 0x319DE4u;
            goto label_319de4;
        }
    }
    ctx->pc = 0x319DDCu;
    // 0x319ddc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x319DDCu;
    {
        const bool branch_taken_0x319ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DDCu;
        // 0x319de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ddc) {
            ctx->pc = 0x319E94u;
            goto label_319e94;
        }
    }
    ctx->pc = 0x319DE4u;
label_319de4:
    // 0x319de4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x319de4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319de8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x319de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x319dec: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x319DECu;
    {
        const bool branch_taken_0x319dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DECu;
        // 0x319df0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319dec) {
            ctx->pc = 0x319E90u;
            goto label_319e90;
        }
    }
    ctx->pc = 0x319DF4u;
    // 0x319df4: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x319df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x319df8: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x319df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x319dfc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x319dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x319e00: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x319e00u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x319e04: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x319e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x319e08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x319e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x319e0c: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x319e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_319e10:
    // 0x319e10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x319e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x319e14: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x319E14u;
    SET_GPR_U32(ctx, 31, 0x319E1Cu);
    ctx->pc = 0x319E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319E14u;
    // 0x319e18: 0xe7b60000  swc1        $f22, 0x0($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x319E14u, 0x319E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319E1Cu;
label_319e1c:
    // 0x319e1c: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x319e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x319e20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x319e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319e24: 0xc1067b8  jal         func_419EE0
    ctx->pc = 0x319E24u;
    SET_GPR_U32(ctx, 31, 0x319E2Cu);
    ctx->pc = 0x319E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319E24u;
    // 0x319e28: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x319E24u, 0x319E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319E2Cu;
label_319e2c:
    // 0x319e2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x319E2Cu;
    {
        const bool branch_taken_0x319e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E2Cu;
        // 0x319e30: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e2c) {
            ctx->pc = 0x319E44u;
            goto label_319e44;
        }
    }
    ctx->pc = 0x319E34u;
    // 0x319e34: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x319e34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x319e38: 0x0  nop
    ctx->pc = 0x319e38u;
    // NOP
    // 0x319e3c: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x319E3Cu;
    {
        const bool branch_taken_0x319e3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x319e3c) {
            ctx->pc = 0x319E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319E3Cu;
            // 0x319e40: 0x9222003c  lbu         $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319E80u;
            goto label_319e80;
        }
    }
    ctx->pc = 0x319E44u;
label_319e44:
    // 0x319e44: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x319E44u;
    SET_GPR_U32(ctx, 31, 0x319E4Cu);
    ctx->pc = 0x319E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319E44u;
    // 0x319e48: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x319E44u, 0x319E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319E4Cu;
label_319e4c:
    // 0x319e4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x319e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319e50: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x319E50u;
    SET_GPR_U32(ctx, 31, 0x319E58u);
    ctx->pc = 0x319E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319E50u;
    // 0x319e54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x319E50u, 0x319E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319E58u;
label_319e58:
    // 0x319e58: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x319e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x319e5c: 0x0  nop
    ctx->pc = 0x319e5cu;
    // NOP
    // 0x319e60: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x319E60u;
    {
        const bool branch_taken_0x319e60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x319E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E60u;
        // 0x319e64: 0x9222003c  lbu         $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e60) {
            ctx->pc = 0x319E80u;
            goto label_319e80;
        }
    }
    ctx->pc = 0x319E68u;
    // 0x319e68: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x319e68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x319e6c: 0x0  nop
    ctx->pc = 0x319e6cu;
    // NOP
    // 0x319e70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x319E70u;
    {
        const bool branch_taken_0x319e70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x319e70) {
            ctx->pc = 0x319E80u;
            goto label_319e80;
        }
    }
    ctx->pc = 0x319E78u;
    // 0x319e78: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x319e78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x319e7c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x319e7cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_319e80:
    // 0x319e80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x319e80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x319e84: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x319e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x319e88: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x319E88u;
    {
        const bool branch_taken_0x319e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E88u;
        // 0x319e8c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e88) {
            ctx->pc = 0x319E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319e10;
        }
    }
    ctx->pc = 0x319E90u;
label_319e90:
    // 0x319e90: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x319e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_319e94:
    // 0x319e94: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x319e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x319e98: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x319e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x319e9c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x319e9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x319ea0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x319ea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x319ea4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x319ea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x319ea8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x319ea8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x319eac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x319eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319eb0: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x319eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x319eb4: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x319eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x319eb8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x319eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x319ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x319EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EBCu;
        // 0x319ec0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319EC4u;
    // 0x319ec4: 0x0  nop
    ctx->pc = 0x319ec4u;
    // NOP
    ctx->pc = 0x319ec8u;
}
