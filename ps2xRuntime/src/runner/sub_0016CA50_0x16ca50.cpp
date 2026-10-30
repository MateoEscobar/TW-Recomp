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

// Function: sub_0016CA50
// Address: 0x16ca50 - 0x16cb78
void sub_0016CA50_0x16ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CA50_0x16ca50");
#endif

    switch (ctx->pc) {
        case 0x16ca50u: goto label_16ca50;
        case 0x16ca54u: goto label_16ca54;
        case 0x16ca58u: goto label_16ca58;
        case 0x16ca5cu: goto label_16ca5c;
        case 0x16ca60u: goto label_16ca60;
        case 0x16ca64u: goto label_16ca64;
        case 0x16ca68u: goto label_16ca68;
        case 0x16ca6cu: goto label_16ca6c;
        case 0x16ca70u: goto label_16ca70;
        case 0x16ca74u: goto label_16ca74;
        case 0x16ca78u: goto label_16ca78;
        case 0x16ca7cu: goto label_16ca7c;
        case 0x16ca80u: goto label_16ca80;
        case 0x16ca84u: goto label_16ca84;
        case 0x16ca88u: goto label_16ca88;
        case 0x16ca8cu: goto label_16ca8c;
        case 0x16ca90u: goto label_16ca90;
        case 0x16ca94u: goto label_16ca94;
        case 0x16ca98u: goto label_16ca98;
        case 0x16ca9cu: goto label_16ca9c;
        case 0x16caa0u: goto label_16caa0;
        case 0x16caa4u: goto label_16caa4;
        case 0x16caa8u: goto label_16caa8;
        case 0x16caacu: goto label_16caac;
        case 0x16cab0u: goto label_16cab0;
        case 0x16cab4u: goto label_16cab4;
        case 0x16cab8u: goto label_16cab8;
        case 0x16cabcu: goto label_16cabc;
        case 0x16cac0u: goto label_16cac0;
        case 0x16cac4u: goto label_16cac4;
        case 0x16cac8u: goto label_16cac8;
        case 0x16caccu: goto label_16cacc;
        case 0x16cad0u: goto label_16cad0;
        case 0x16cad4u: goto label_16cad4;
        case 0x16cad8u: goto label_16cad8;
        case 0x16cadcu: goto label_16cadc;
        case 0x16cae0u: goto label_16cae0;
        case 0x16cae4u: goto label_16cae4;
        case 0x16cae8u: goto label_16cae8;
        case 0x16caecu: goto label_16caec;
        case 0x16caf0u: goto label_16caf0;
        case 0x16caf4u: goto label_16caf4;
        case 0x16caf8u: goto label_16caf8;
        case 0x16cafcu: goto label_16cafc;
        case 0x16cb00u: goto label_16cb00;
        case 0x16cb04u: goto label_16cb04;
        case 0x16cb08u: goto label_16cb08;
        case 0x16cb0cu: goto label_16cb0c;
        case 0x16cb10u: goto label_16cb10;
        case 0x16cb14u: goto label_16cb14;
        case 0x16cb18u: goto label_16cb18;
        case 0x16cb1cu: goto label_16cb1c;
        case 0x16cb20u: goto label_16cb20;
        case 0x16cb24u: goto label_16cb24;
        case 0x16cb28u: goto label_16cb28;
        case 0x16cb2cu: goto label_16cb2c;
        case 0x16cb30u: goto label_16cb30;
        case 0x16cb34u: goto label_16cb34;
        case 0x16cb38u: goto label_16cb38;
        case 0x16cb3cu: goto label_16cb3c;
        case 0x16cb40u: goto label_16cb40;
        case 0x16cb44u: goto label_16cb44;
        case 0x16cb48u: goto label_16cb48;
        case 0x16cb4cu: goto label_16cb4c;
        case 0x16cb50u: goto label_16cb50;
        case 0x16cb54u: goto label_16cb54;
        case 0x16cb58u: goto label_16cb58;
        case 0x16cb5cu: goto label_16cb5c;
        case 0x16cb60u: goto label_16cb60;
        case 0x16cb64u: goto label_16cb64;
        case 0x16cb68u: goto label_16cb68;
        case 0x16cb6cu: goto label_16cb6c;
        case 0x16cb70u: goto label_16cb70;
        case 0x16cb74u: goto label_16cb74;
        default: break;
    }

    ctx->pc = 0x16ca50u;

label_16ca50:
    // 0x16ca50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x16ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_16ca54:
    // 0x16ca54: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x16ca54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_16ca58:
    // 0x16ca58: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x16ca58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_16ca5c:
    // 0x16ca5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16ca5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ca60:
    // 0x16ca60: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x16ca60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_16ca64:
    // 0x16ca64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16ca64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16ca68:
    // 0x16ca68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16ca68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16ca6c:
    // 0x16ca6c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x16ca6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16ca70:
    // 0x16ca70: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x16ca70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_16ca74:
    // 0x16ca74: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16ca74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16ca78:
    // 0x16ca78: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x16ca78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_16ca7c:
    // 0x16ca7c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x16ca7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ca80:
    // 0x16ca80: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x16ca80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_16ca84:
    // 0x16ca84: 0x6b02b  sltu        $s6, $zero, $a2
    ctx->pc = 0x16ca84u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_16ca88:
    // 0x16ca88: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x16ca88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_16ca8c:
    // 0x16ca8c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x16ca8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_16ca90:
    // 0x16ca90: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x16ca90u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_16ca94:
    // 0x16ca94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16ca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16ca98:
    // 0x16ca98: 0x4615ad82  mul.s       $f22, $f21, $f21
    ctx->pc = 0x16ca98u;
    ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_16ca9c:
    // 0x16ca9c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x16ca9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_16caa0:
    // 0x16caa0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x16caa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_16caa4:
    // 0x16caa4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16caa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_16caa8:
    // 0x16caa8: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x16caa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_16caac:
    // 0x16caac: 0x0  nop
    ctx->pc = 0x16caacu;
    // NOP
label_16cab0:
    // 0x16cab0: 0xc05b0e2  jal         func_16C388
label_16cab4:
    if (ctx->pc == 0x16CAB4u) {
        ctx->pc = 0x16CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAB0u;
        // 0x16cab4: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CAB8u;
        goto label_16cab8;
    }
    ctx->pc = 0x16CAB0u;
    SET_GPR_U32(ctx, 31, 0x16CAB8u);
    ctx->pc = 0x16CAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CAB0u;
    // 0x16cab4: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16CAB0u, 0x16CAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CAB8u;
label_16cab8:
    // 0x16cab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16cab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16cabc:
    // 0x16cabc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_16cac0:
    // 0x16cac0: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_16cac4:
    if (ctx->pc == 0x16CAC4u) {
        ctx->pc = 0x16CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAC0u;
        // 0x16cac4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CAC8u;
        goto label_16cac8;
    }
    ctx->pc = 0x16CAC0u;
    {
        const bool branch_taken_0x16cac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cac0) {
            ctx->pc = 0x16CAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CAC0u;
            // 0x16cac4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CB34u;
            goto label_16cb34;
        }
    }
    ctx->pc = 0x16CAC8u;
label_16cac8:
    // 0x16cac8: 0x12120019  beq         $s0, $s2, . + 4 + (0x19 << 2)
label_16cacc:
    if (ctx->pc == 0x16CACCu) {
        ctx->pc = 0x16CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAC8u;
        // 0x16cacc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CAD0u;
        goto label_16cad0;
    }
    ctx->pc = 0x16CAC8u;
    {
        const bool branch_taken_0x16cac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x16CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAC8u;
        // 0x16cacc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cac8) {
            ctx->pc = 0x16CB30u;
            goto label_16cb30;
        }
    }
    ctx->pc = 0x16CAD0u;
label_16cad0:
    // 0x16cad0: 0xc0cdb38  jal         func_336CE0
label_16cad4:
    if (ctx->pc == 0x16CAD4u) {
        ctx->pc = 0x16CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAD0u;
        // 0x16cad4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CAD8u;
        goto label_16cad8;
    }
    ctx->pc = 0x16CAD0u;
    SET_GPR_U32(ctx, 31, 0x16CAD8u);
    ctx->pc = 0x16CAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CAD0u;
    // 0x16cad4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x16CAD0u, 0x16CAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CAD8u;
label_16cad8:
    // 0x16cad8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16cad8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16cadc:
    // 0x16cadc: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x16cadcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16cae0:
    // 0x16cae0: 0x0  nop
    ctx->pc = 0x16cae0u;
    // NOP
label_16cae4:
    // 0x16cae4: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
label_16cae8:
    if (ctx->pc == 0x16CAE8u) {
        ctx->pc = 0x16CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAE4u;
        // 0x16cae8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CAECu;
        goto label_16caec;
    }
    ctx->pc = 0x16CAE4u;
    {
        const bool branch_taken_0x16cae4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16cae4) {
            ctx->pc = 0x16CAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CAE4u;
            // 0x16cae8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CB34u;
            goto label_16cb34;
        }
    }
    ctx->pc = 0x16CAECu;
label_16caec:
    // 0x16caec: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x16caecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16caf0:
    // 0x16caf0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x16caf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16caf4:
    // 0x16caf4: 0x0  nop
    ctx->pc = 0x16caf4u;
    // NOP
label_16caf8:
    // 0x16caf8: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_16cafc:
    if (ctx->pc == 0x16CAFCu) {
        ctx->pc = 0x16CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAF8u;
        // 0x16cafc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB00u;
        goto label_16cb00;
    }
    ctx->pc = 0x16CAF8u;
    {
        const bool branch_taken_0x16caf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16caf8) {
            ctx->pc = 0x16CAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CAF8u;
            // 0x16cafc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CB34u;
            goto label_16cb34;
        }
    }
    ctx->pc = 0x16CB00u;
label_16cb00:
    // 0x16cb00: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_16cb04:
    if (ctx->pc == 0x16CB04u) {
        ctx->pc = 0x16CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB00u;
        // 0x16cb04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB08u;
        goto label_16cb08;
    }
    ctx->pc = 0x16CB00u;
    {
        const bool branch_taken_0x16cb00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB00u;
        // 0x16cb04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb00) {
            ctx->pc = 0x16CB18u;
            goto label_16cb18;
        }
    }
    ctx->pc = 0x16CB08u;
label_16cb08:
    // 0x16cb08: 0x260f809  jalr        $s3
label_16cb0c:
    if (ctx->pc == 0x16CB0Cu) {
        ctx->pc = 0x16CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB08u;
        // 0x16cb0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB10u;
        goto label_16cb10;
    }
    ctx->pc = 0x16CB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x16CB10u);
        ctx->pc = 0x16CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB08u;
        // 0x16cb0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CB08u, 0x16CB10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CB10u;
label_16cb10:
    // 0x16cb10: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_16cb14:
    if (ctx->pc == 0x16CB14u) {
        ctx->pc = 0x16CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB10u;
        // 0x16cb14: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB18u;
        goto label_16cb18;
    }
    ctx->pc = 0x16CB10u;
    {
        const bool branch_taken_0x16cb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB10u;
        // 0x16cb14: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb10) {
            ctx->pc = 0x16CB34u;
            goto label_16cb34;
        }
    }
    ctx->pc = 0x16CB18u;
label_16cb18:
    // 0x16cb18: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
label_16cb1c:
    if (ctx->pc == 0x16CB1Cu) {
        ctx->pc = 0x16CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB18u;
        // 0x16cb1c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB20u;
        goto label_16cb20;
    }
    ctx->pc = 0x16CB18u;
    {
        const bool branch_taken_0x16cb18 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB18u;
        // 0x16cb1c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb18) {
            ctx->pc = 0x16CB44u;
            goto label_16cb44;
        }
    }
    ctx->pc = 0x16CB20u;
label_16cb20:
    // 0x16cb20: 0xe6940004  swc1        $f20, 0x4($s4)
    ctx->pc = 0x16cb20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_16cb24:
    // 0x16cb24: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x16cb24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cb28:
    // 0x16cb28: 0x10000005  b           . + 4 + (0x5 << 2)
label_16cb2c:
    if (ctx->pc == 0x16CB2Cu) {
        ctx->pc = 0x16CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB28u;
        // 0x16cb2c: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB30u;
        goto label_16cb30;
    }
    ctx->pc = 0x16CB28u;
    {
        const bool branch_taken_0x16cb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB28u;
        // 0x16cb2c: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb28) {
            ctx->pc = 0x16CB40u;
            goto label_16cb40;
        }
    }
    ctx->pc = 0x16CB30u;
label_16cb30:
    // 0x16cb30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16cb30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16cb34:
    // 0x16cb34: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x16cb34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_16cb38:
    // 0x16cb38: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_16cb3c:
    if (ctx->pc == 0x16CB3Cu) {
        ctx->pc = 0x16CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB38u;
        // 0x16cb3c: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB40u;
        goto label_16cb40;
    }
    ctx->pc = 0x16CB38u;
    {
        const bool branch_taken_0x16cb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB38u;
        // 0x16cb3c: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb38) {
            ctx->pc = 0x16CAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cab0;
        }
    }
    ctx->pc = 0x16CB40u;
label_16cb40:
    // 0x16cb40: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x16cb40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16cb44:
    // 0x16cb44: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x16cb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16cb48:
    // 0x16cb48: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x16cb48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16cb4c:
    // 0x16cb4c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x16cb4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16cb50:
    // 0x16cb50: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x16cb50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16cb54:
    // 0x16cb54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16cb54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16cb58:
    // 0x16cb58: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x16cb58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16cb5c:
    // 0x16cb5c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x16cb5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16cb60:
    // 0x16cb60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16cb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16cb64:
    // 0x16cb64: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x16cb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_16cb68:
    // 0x16cb68: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x16cb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16cb6c:
    // 0x16cb6c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x16cb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16cb70:
    // 0x16cb70: 0x3e00008  jr          $ra
label_16cb74:
    if (ctx->pc == 0x16CB74u) {
        ctx->pc = 0x16CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB70u;
        // 0x16cb74: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB78u;
        goto label_fallthrough_0x16cb70;
    }
    ctx->pc = 0x16CB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB70u;
        // 0x16cb74: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16cb70:
    ctx->pc = 0x16CB78u;
}
