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

// Function: sub_00108BD0
// Address: 0x108bd0 - 0x108c80
void sub_00108BD0_0x108bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108BD0_0x108bd0");
#endif

    switch (ctx->pc) {
        case 0x108bd0u: goto label_108bd0;
        case 0x108bd4u: goto label_108bd4;
        case 0x108bd8u: goto label_108bd8;
        case 0x108bdcu: goto label_108bdc;
        case 0x108be0u: goto label_108be0;
        case 0x108be4u: goto label_108be4;
        case 0x108be8u: goto label_108be8;
        case 0x108becu: goto label_108bec;
        case 0x108bf0u: goto label_108bf0;
        case 0x108bf4u: goto label_108bf4;
        case 0x108bf8u: goto label_108bf8;
        case 0x108bfcu: goto label_108bfc;
        case 0x108c00u: goto label_108c00;
        case 0x108c04u: goto label_108c04;
        case 0x108c08u: goto label_108c08;
        case 0x108c0cu: goto label_108c0c;
        case 0x108c10u: goto label_108c10;
        case 0x108c14u: goto label_108c14;
        case 0x108c18u: goto label_108c18;
        case 0x108c1cu: goto label_108c1c;
        case 0x108c20u: goto label_108c20;
        case 0x108c24u: goto label_108c24;
        case 0x108c28u: goto label_108c28;
        case 0x108c2cu: goto label_108c2c;
        case 0x108c30u: goto label_108c30;
        case 0x108c34u: goto label_108c34;
        case 0x108c38u: goto label_108c38;
        case 0x108c3cu: goto label_108c3c;
        case 0x108c40u: goto label_108c40;
        case 0x108c44u: goto label_108c44;
        case 0x108c48u: goto label_108c48;
        case 0x108c4cu: goto label_108c4c;
        case 0x108c50u: goto label_108c50;
        case 0x108c54u: goto label_108c54;
        case 0x108c58u: goto label_108c58;
        case 0x108c5cu: goto label_108c5c;
        case 0x108c60u: goto label_108c60;
        case 0x108c64u: goto label_108c64;
        case 0x108c68u: goto label_108c68;
        case 0x108c6cu: goto label_108c6c;
        case 0x108c70u: goto label_108c70;
        case 0x108c74u: goto label_108c74;
        case 0x108c78u: goto label_108c78;
        case 0x108c7cu: goto label_108c7c;
        default: break;
    }

    ctx->pc = 0x108bd0u;

label_108bd0:
    // 0x108bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_108bd4:
    // 0x108bd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x108bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_108bd8:
    // 0x108bd8: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x108bd8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_108bdc:
    // 0x108bdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_108be0:
    // 0x108be0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x108be0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_108be4:
    // 0x108be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_108be8:
    // 0x108be8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x108be8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_108bec:
    // 0x108bec: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x108becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_108bf0:
    // 0x108bf0: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x108bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_108bf4:
    // 0x108bf4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x108bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_108bf8:
    // 0x108bf8: 0xc041128  jal         func_1044A0
label_108bfc:
    if (ctx->pc == 0x108BFCu) {
        ctx->pc = 0x108BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BF8u;
        // 0x108bfc: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x108C00u;
        goto label_108c00;
    }
    ctx->pc = 0x108BF8u;
    SET_GPR_U32(ctx, 31, 0x108C00u);
    ctx->pc = 0x108BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108BF8u;
    // 0x108bfc: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x108BF8u, 0x108C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C00u;
label_108c00:
    // 0x108c00: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x108c00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108c04:
    // 0x108c04: 0x0  nop
    ctx->pc = 0x108c04u;
    // NOP
label_108c08:
    // 0x108c08: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
label_108c0c:
    if (ctx->pc == 0x108C0Cu) {
        ctx->pc = 0x108C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C08u;
        // 0x108c0c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108C10u;
        goto label_108c10;
    }
    ctx->pc = 0x108C08u;
    {
        const bool branch_taken_0x108c08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x108c08) {
            ctx->pc = 0x108C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108C08u;
            // 0x108c0c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108C5Cu;
            goto label_108c5c;
        }
    }
    ctx->pc = 0x108C10u;
label_108c10:
    // 0x108c10: 0xc041590  jal         func_105640
label_108c14:
    if (ctx->pc == 0x108C14u) {
        ctx->pc = 0x108C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C10u;
        // 0x108c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108C18u;
        goto label_108c18;
    }
    ctx->pc = 0x108C10u;
    SET_GPR_U32(ctx, 31, 0x108C18u);
    ctx->pc = 0x108C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C10u;
    // 0x108c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105640u, 0x108C10u, 0x108C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C18u;
label_108c18:
    // 0x108c18: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x108c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_108c1c:
    // 0x108c1c: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x108c1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_108c20:
    // 0x108c20: 0x0  nop
    ctx->pc = 0x108c20u;
    // NOP
label_108c24:
    // 0x108c24: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_108c28:
    if (ctx->pc == 0x108C28u) {
        ctx->pc = 0x108C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C24u;
        // 0x108c28: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108C2Cu;
        goto label_108c2c;
    }
    ctx->pc = 0x108C24u;
    {
        const bool branch_taken_0x108c24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x108c24) {
            ctx->pc = 0x108C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108C24u;
            // 0x108c28: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108C4Cu;
            goto label_108c4c;
        }
    }
    ctx->pc = 0x108C2Cu;
label_108c2c:
    // 0x108c2c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x108c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_108c30:
    // 0x108c30: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x108c30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_108c34:
    // 0x108c34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x108c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_108c38:
    // 0x108c38: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x108c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_108c3c:
    // 0x108c3c: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x108c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_108c40:
    // 0x108c40: 0x60f809  jalr        $v1
label_108c44:
    if (ctx->pc == 0x108C44u) {
        ctx->pc = 0x108C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C40u;
        // 0x108c44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108C48u;
        goto label_108c48;
    }
    ctx->pc = 0x108C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x108C48u);
        ctx->pc = 0x108C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C40u;
        // 0x108c44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108C40u, 0x108C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108C48u;
label_108c48:
    // 0x108c48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x108c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_108c4c:
    // 0x108c4c: 0xc05d4e0  jal         func_175380
label_108c50:
    if (ctx->pc == 0x108C50u) {
        ctx->pc = 0x108C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C4Cu;
        // 0x108c50: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108C54u;
        goto label_108c54;
    }
    ctx->pc = 0x108C4Cu;
    SET_GPR_U32(ctx, 31, 0x108C54u);
    ctx->pc = 0x108C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C4Cu;
    // 0x108c50: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175380u, 0x108C4Cu, 0x108C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C54u;
label_108c54:
    // 0x108c54: 0x10000003  b           . + 4 + (0x3 << 2)
label_108c58:
    if (ctx->pc == 0x108C58u) {
        ctx->pc = 0x108C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C54u;
        // 0x108c58: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108C5Cu;
        goto label_108c5c;
    }
    ctx->pc = 0x108C54u;
    {
        const bool branch_taken_0x108c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C54u;
        // 0x108c58: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c54) {
            ctx->pc = 0x108C64u;
            goto label_108c64;
        }
    }
    ctx->pc = 0x108C5Cu;
label_108c5c:
    // 0x108c5c: 0xc05d4e0  jal         func_175380
label_108c60:
    if (ctx->pc == 0x108C60u) {
        ctx->pc = 0x108C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C5Cu;
        // 0x108c60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108C64u;
        goto label_108c64;
    }
    ctx->pc = 0x108C5Cu;
    SET_GPR_U32(ctx, 31, 0x108C64u);
    ctx->pc = 0x108C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C5Cu;
    // 0x108c60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175380u, 0x108C5Cu, 0x108C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C64u;
label_108c64:
    // 0x108c64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x108c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_108c68:
    // 0x108c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108c6c:
    // 0x108c6c: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x108c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_108c70:
    // 0x108c70: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x108c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_108c74:
    // 0x108c74: 0x3e00008  jr          $ra
label_108c78:
    if (ctx->pc == 0x108C78u) {
        ctx->pc = 0x108C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C74u;
        // 0x108c78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108C7Cu;
        goto label_108c7c;
    }
    ctx->pc = 0x108C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C74u;
        // 0x108c78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108C7Cu;
label_108c7c:
    // 0x108c7c: 0x0  nop
    ctx->pc = 0x108c7cu;
    // NOP
    ctx->pc = 0x108c80u;
}
