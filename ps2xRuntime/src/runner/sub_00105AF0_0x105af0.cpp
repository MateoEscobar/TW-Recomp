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

// Function: sub_00105AF0
// Address: 0x105af0 - 0x105ba0
void sub_00105AF0_0x105af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105AF0_0x105af0");
#endif

    switch (ctx->pc) {
        case 0x105af0u: goto label_105af0;
        case 0x105af4u: goto label_105af4;
        case 0x105af8u: goto label_105af8;
        case 0x105afcu: goto label_105afc;
        case 0x105b00u: goto label_105b00;
        case 0x105b04u: goto label_105b04;
        case 0x105b08u: goto label_105b08;
        case 0x105b0cu: goto label_105b0c;
        case 0x105b10u: goto label_105b10;
        case 0x105b14u: goto label_105b14;
        case 0x105b18u: goto label_105b18;
        case 0x105b1cu: goto label_105b1c;
        case 0x105b20u: goto label_105b20;
        case 0x105b24u: goto label_105b24;
        case 0x105b28u: goto label_105b28;
        case 0x105b2cu: goto label_105b2c;
        case 0x105b30u: goto label_105b30;
        case 0x105b34u: goto label_105b34;
        case 0x105b38u: goto label_105b38;
        case 0x105b3cu: goto label_105b3c;
        case 0x105b40u: goto label_105b40;
        case 0x105b44u: goto label_105b44;
        case 0x105b48u: goto label_105b48;
        case 0x105b4cu: goto label_105b4c;
        case 0x105b50u: goto label_105b50;
        case 0x105b54u: goto label_105b54;
        case 0x105b58u: goto label_105b58;
        case 0x105b5cu: goto label_105b5c;
        case 0x105b60u: goto label_105b60;
        case 0x105b64u: goto label_105b64;
        case 0x105b68u: goto label_105b68;
        case 0x105b6cu: goto label_105b6c;
        case 0x105b70u: goto label_105b70;
        case 0x105b74u: goto label_105b74;
        case 0x105b78u: goto label_105b78;
        case 0x105b7cu: goto label_105b7c;
        case 0x105b80u: goto label_105b80;
        case 0x105b84u: goto label_105b84;
        case 0x105b88u: goto label_105b88;
        case 0x105b8cu: goto label_105b8c;
        case 0x105b90u: goto label_105b90;
        case 0x105b94u: goto label_105b94;
        case 0x105b98u: goto label_105b98;
        case 0x105b9cu: goto label_105b9c;
        default: break;
    }

    ctx->pc = 0x105af0u;

label_105af0:
    // 0x105af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x105af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_105af4:
    // 0x105af4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x105af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_105af8:
    // 0x105af8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x105af8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_105afc:
    // 0x105afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_105b00:
    // 0x105b00: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x105b00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_105b04:
    // 0x105b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_105b08:
    // 0x105b08: 0xc0420dc  jal         func_108370
label_105b0c:
    if (ctx->pc == 0x105B0Cu) {
        ctx->pc = 0x105B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B08u;
        // 0x105b0c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B10u;
        goto label_105b10;
    }
    ctx->pc = 0x105B08u;
    SET_GPR_U32(ctx, 31, 0x105B10u);
    ctx->pc = 0x105B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B08u;
    // 0x105b0c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x105B08u, 0x105B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B10u;
label_105b10:
    // 0x105b10: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x105b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_105b14:
    // 0x105b14: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x105b14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_105b18:
    // 0x105b18: 0xc041128  jal         func_1044A0
label_105b1c:
    if (ctx->pc == 0x105B1Cu) {
        ctx->pc = 0x105B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B18u;
        // 0x105b1c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B20u;
        goto label_105b20;
    }
    ctx->pc = 0x105B18u;
    SET_GPR_U32(ctx, 31, 0x105B20u);
    ctx->pc = 0x105B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B18u;
    // 0x105b1c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x105B18u, 0x105B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B20u;
label_105b20:
    // 0x105b20: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x105b20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_105b24:
    // 0x105b24: 0x0  nop
    ctx->pc = 0x105b24u;
    // NOP
label_105b28:
    // 0x105b28: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
label_105b2c:
    if (ctx->pc == 0x105B2Cu) {
        ctx->pc = 0x105B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B28u;
        // 0x105b2c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B30u;
        goto label_105b30;
    }
    ctx->pc = 0x105B28u;
    {
        const bool branch_taken_0x105b28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x105b28) {
            ctx->pc = 0x105B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105B28u;
            // 0x105b2c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105B7Cu;
            goto label_105b7c;
        }
    }
    ctx->pc = 0x105B30u;
label_105b30:
    // 0x105b30: 0xc041590  jal         func_105640
label_105b34:
    if (ctx->pc == 0x105B34u) {
        ctx->pc = 0x105B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B30u;
        // 0x105b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B38u;
        goto label_105b38;
    }
    ctx->pc = 0x105B30u;
    SET_GPR_U32(ctx, 31, 0x105B38u);
    ctx->pc = 0x105B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B30u;
    // 0x105b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105640u, 0x105B30u, 0x105B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B38u;
label_105b38:
    // 0x105b38: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x105b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_105b3c:
    // 0x105b3c: 0xc05d4e0  jal         func_175380
label_105b40:
    if (ctx->pc == 0x105B40u) {
        ctx->pc = 0x105B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B3Cu;
        // 0x105b40: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B44u;
        goto label_105b44;
    }
    ctx->pc = 0x105B3Cu;
    SET_GPR_U32(ctx, 31, 0x105B44u);
    ctx->pc = 0x105B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B3Cu;
    // 0x105b40: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175380u, 0x105B3Cu, 0x105B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B44u;
label_105b44:
    // 0x105b44: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x105b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_105b48:
    // 0x105b48: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x105b48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_105b4c:
    // 0x105b4c: 0x0  nop
    ctx->pc = 0x105b4cu;
    // NOP
label_105b50:
    // 0x105b50: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_105b54:
    if (ctx->pc == 0x105B54u) {
        ctx->pc = 0x105B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B50u;
        // 0x105b54: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B58u;
        goto label_105b58;
    }
    ctx->pc = 0x105B50u;
    {
        const bool branch_taken_0x105b50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x105b50) {
            ctx->pc = 0x105B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105B50u;
            // 0x105b54: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105B84u;
            goto label_105b84;
        }
    }
    ctx->pc = 0x105B58u;
label_105b58:
    // 0x105b58: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x105b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_105b5c:
    // 0x105b5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x105b5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_105b60:
    // 0x105b60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x105b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_105b64:
    // 0x105b64: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x105b64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_105b68:
    // 0x105b68: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x105b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_105b6c:
    // 0x105b6c: 0x60f809  jalr        $v1
label_105b70:
    if (ctx->pc == 0x105B70u) {
        ctx->pc = 0x105B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B6Cu;
        // 0x105b70: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B74u;
        goto label_105b74;
    }
    ctx->pc = 0x105B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x105B74u);
        ctx->pc = 0x105B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B6Cu;
        // 0x105b70: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105B6Cu, 0x105B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105B74u;
label_105b74:
    // 0x105b74: 0x10000003  b           . + 4 + (0x3 << 2)
label_105b78:
    if (ctx->pc == 0x105B78u) {
        ctx->pc = 0x105B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B74u;
        // 0x105b78: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B7Cu;
        goto label_105b7c;
    }
    ctx->pc = 0x105B74u;
    {
        const bool branch_taken_0x105b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B74u;
        // 0x105b78: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b74) {
            ctx->pc = 0x105B84u;
            goto label_105b84;
        }
    }
    ctx->pc = 0x105B7Cu;
label_105b7c:
    // 0x105b7c: 0xc05d4e0  jal         func_175380
label_105b80:
    if (ctx->pc == 0x105B80u) {
        ctx->pc = 0x105B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B7Cu;
        // 0x105b80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B84u;
        goto label_105b84;
    }
    ctx->pc = 0x105B7Cu;
    SET_GPR_U32(ctx, 31, 0x105B84u);
    ctx->pc = 0x105B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B7Cu;
    // 0x105b80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175380u, 0x105B7Cu, 0x105B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B84u;
label_105b84:
    // 0x105b84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x105b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_105b88:
    // 0x105b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_105b8c:
    // 0x105b8c: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x105b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_105b90:
    // 0x105b90: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x105b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_105b94:
    // 0x105b94: 0x3e00008  jr          $ra
label_105b98:
    if (ctx->pc == 0x105B98u) {
        ctx->pc = 0x105B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B94u;
        // 0x105b98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105B9Cu;
        goto label_105b9c;
    }
    ctx->pc = 0x105B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B94u;
        // 0x105b98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105B9Cu;
label_105b9c:
    // 0x105b9c: 0x0  nop
    ctx->pc = 0x105b9cu;
    // NOP
    ctx->pc = 0x105ba0u;
}
