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

// Function: sub_00106A80
// Address: 0x106a80 - 0x106b60
void sub_00106A80_0x106a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106A80_0x106a80");
#endif

    switch (ctx->pc) {
        case 0x106a80u: goto label_106a80;
        case 0x106a84u: goto label_106a84;
        case 0x106a88u: goto label_106a88;
        case 0x106a8cu: goto label_106a8c;
        case 0x106a90u: goto label_106a90;
        case 0x106a94u: goto label_106a94;
        case 0x106a98u: goto label_106a98;
        case 0x106a9cu: goto label_106a9c;
        case 0x106aa0u: goto label_106aa0;
        case 0x106aa4u: goto label_106aa4;
        case 0x106aa8u: goto label_106aa8;
        case 0x106aacu: goto label_106aac;
        case 0x106ab0u: goto label_106ab0;
        case 0x106ab4u: goto label_106ab4;
        case 0x106ab8u: goto label_106ab8;
        case 0x106abcu: goto label_106abc;
        case 0x106ac0u: goto label_106ac0;
        case 0x106ac4u: goto label_106ac4;
        case 0x106ac8u: goto label_106ac8;
        case 0x106accu: goto label_106acc;
        case 0x106ad0u: goto label_106ad0;
        case 0x106ad4u: goto label_106ad4;
        case 0x106ad8u: goto label_106ad8;
        case 0x106adcu: goto label_106adc;
        case 0x106ae0u: goto label_106ae0;
        case 0x106ae4u: goto label_106ae4;
        case 0x106ae8u: goto label_106ae8;
        case 0x106aecu: goto label_106aec;
        case 0x106af0u: goto label_106af0;
        case 0x106af4u: goto label_106af4;
        case 0x106af8u: goto label_106af8;
        case 0x106afcu: goto label_106afc;
        case 0x106b00u: goto label_106b00;
        case 0x106b04u: goto label_106b04;
        case 0x106b08u: goto label_106b08;
        case 0x106b0cu: goto label_106b0c;
        case 0x106b10u: goto label_106b10;
        case 0x106b14u: goto label_106b14;
        case 0x106b18u: goto label_106b18;
        case 0x106b1cu: goto label_106b1c;
        case 0x106b20u: goto label_106b20;
        case 0x106b24u: goto label_106b24;
        case 0x106b28u: goto label_106b28;
        case 0x106b2cu: goto label_106b2c;
        case 0x106b30u: goto label_106b30;
        case 0x106b34u: goto label_106b34;
        case 0x106b38u: goto label_106b38;
        case 0x106b3cu: goto label_106b3c;
        case 0x106b40u: goto label_106b40;
        case 0x106b44u: goto label_106b44;
        case 0x106b48u: goto label_106b48;
        case 0x106b4cu: goto label_106b4c;
        case 0x106b50u: goto label_106b50;
        case 0x106b54u: goto label_106b54;
        case 0x106b58u: goto label_106b58;
        case 0x106b5cu: goto label_106b5c;
        default: break;
    }

    ctx->pc = 0x106a80u;

label_106a80:
    // 0x106a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_106a84:
    // 0x106a84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x106a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_106a88:
    // 0x106a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_106a8c:
    // 0x106a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_106a90:
    // 0x106a90: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x106a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_106a94:
    // 0x106a94: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x106a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_106a98:
    // 0x106a98: 0xc041128  jal         func_1044A0
label_106a9c:
    if (ctx->pc == 0x106A9Cu) {
        ctx->pc = 0x106A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A98u;
        // 0x106a9c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x106AA0u;
        goto label_106aa0;
    }
    ctx->pc = 0x106A98u;
    SET_GPR_U32(ctx, 31, 0x106AA0u);
    ctx->pc = 0x106A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A98u;
    // 0x106a9c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x106A98u, 0x106AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106AA0u;
label_106aa0:
    // 0x106aa0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x106aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_106aa4:
    // 0x106aa4: 0x0  nop
    ctx->pc = 0x106aa4u;
    // NOP
label_106aa8:
    // 0x106aa8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x106aa8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_106aac:
    // 0x106aac: 0x0  nop
    ctx->pc = 0x106aacu;
    // NOP
label_106ab0:
    // 0x106ab0: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_106ab4:
    if (ctx->pc == 0x106AB4u) {
        ctx->pc = 0x106AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AB0u;
        // 0x106ab4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106AB8u;
        goto label_106ab8;
    }
    ctx->pc = 0x106AB0u;
    {
        const bool branch_taken_0x106ab0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x106ab0) {
            ctx->pc = 0x106AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106AB0u;
            // 0x106ab4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106AD0u;
            goto label_106ad0;
        }
    }
    ctx->pc = 0x106AB8u;
label_106ab8:
    // 0x106ab8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x106ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_106abc:
    // 0x106abc: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x106abcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_106ac0:
    // 0x106ac0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x106ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_106ac4:
    // 0x106ac4: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_106ac8:
    if (ctx->pc == 0x106AC8u) {
        ctx->pc = 0x106AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AC4u;
        // 0x106ac8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106ACCu;
        goto label_106acc;
    }
    ctx->pc = 0x106AC4u;
    {
        const bool branch_taken_0x106ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106ac4) {
            ctx->pc = 0x106AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106AC4u;
            // 0x106ac8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106B44u;
            goto label_106b44;
        }
    }
    ctx->pc = 0x106ACCu;
label_106acc:
    // 0x106acc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x106accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_106ad0:
    // 0x106ad0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x106ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_106ad4:
    // 0x106ad4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x106ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_106ad8:
    // 0x106ad8: 0xc0e409a  jal         func_390268
label_106adc:
    if (ctx->pc == 0x106ADCu) {
        ctx->pc = 0x106ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AD8u;
        // 0x106adc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106AE0u;
        goto label_106ae0;
    }
    ctx->pc = 0x106AD8u;
    SET_GPR_U32(ctx, 31, 0x106AE0u);
    ctx->pc = 0x106ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106AD8u;
    // 0x106adc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x106AD8u, 0x106AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106AE0u;
label_106ae0:
    // 0x106ae0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x106ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_106ae4:
    // 0x106ae4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106ae8:
    // 0x106ae8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_106aec:
    // 0x106aec: 0x60f809  jalr        $v1
label_106af0:
    if (ctx->pc == 0x106AF0u) {
        ctx->pc = 0x106AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AECu;
        // 0x106af0: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x106AF4u;
        goto label_106af4;
    }
    ctx->pc = 0x106AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x106AF4u);
        ctx->pc = 0x106AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AECu;
        // 0x106af0: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106AECu, 0x106AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106AF4u;
label_106af4:
    // 0x106af4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_106af8:
    if (ctx->pc == 0x106AF8u) {
        ctx->pc = 0x106AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AF4u;
        // 0x106af8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106AFCu;
        goto label_106afc;
    }
    ctx->pc = 0x106AF4u;
    {
        const bool branch_taken_0x106af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AF4u;
        // 0x106af8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106af4) {
            ctx->pc = 0x106B28u;
            goto label_106b28;
        }
    }
    ctx->pc = 0x106AFCu;
label_106afc:
    // 0x106afc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x106afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_106b00:
    // 0x106b00: 0xc04115c  jal         func_104570
label_106b04:
    if (ctx->pc == 0x106B04u) {
        ctx->pc = 0x106B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B00u;
        // 0x106b04: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106B08u;
        goto label_106b08;
    }
    ctx->pc = 0x106B00u;
    SET_GPR_U32(ctx, 31, 0x106B08u);
    ctx->pc = 0x106B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B00u;
    // 0x106b04: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x106B00u, 0x106B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B08u;
label_106b08:
    // 0x106b08: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x106b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_106b0c:
    // 0x106b0c: 0xc05d4e0  jal         func_175380
label_106b10:
    if (ctx->pc == 0x106B10u) {
        ctx->pc = 0x106B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B0Cu;
        // 0x106b10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106B14u;
        goto label_106b14;
    }
    ctx->pc = 0x106B0Cu;
    SET_GPR_U32(ctx, 31, 0x106B14u);
    ctx->pc = 0x106B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B0Cu;
    // 0x106b10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175380u, 0x106B0Cu, 0x106B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B14u;
label_106b14:
    // 0x106b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_106b18:
    // 0x106b18: 0xc041b14  jal         func_106C50
label_106b1c:
    if (ctx->pc == 0x106B1Cu) {
        ctx->pc = 0x106B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B18u;
        // 0x106b1c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x106B20u;
        goto label_106b20;
    }
    ctx->pc = 0x106B18u;
    SET_GPR_U32(ctx, 31, 0x106B20u);
    ctx->pc = 0x106B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B18u;
    // 0x106b1c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C50u, 0x106B18u, 0x106B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B20u;
label_106b20:
    // 0x106b20: 0x1000000b  b           . + 4 + (0xB << 2)
label_106b24:
    if (ctx->pc == 0x106B24u) {
        ctx->pc = 0x106B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B20u;
        // 0x106b24: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106B28u;
        goto label_106b28;
    }
    ctx->pc = 0x106B20u;
    {
        const bool branch_taken_0x106b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B20u;
        // 0x106b24: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b20) {
            ctx->pc = 0x106B50u;
            goto label_106b50;
        }
    }
    ctx->pc = 0x106B28u;
label_106b28:
    // 0x106b28: 0xc041590  jal         func_105640
label_106b2c:
    if (ctx->pc == 0x106B2Cu) {
        ctx->pc = 0x106B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B28u;
        // 0x106b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106B30u;
        goto label_106b30;
    }
    ctx->pc = 0x106B28u;
    SET_GPR_U32(ctx, 31, 0x106B30u);
    ctx->pc = 0x106B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B28u;
    // 0x106b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105640u, 0x106B28u, 0x106B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B30u;
label_106b30:
    // 0x106b30: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x106b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_106b34:
    // 0x106b34: 0xc05d4e0  jal         func_175380
label_106b38:
    if (ctx->pc == 0x106B38u) {
        ctx->pc = 0x106B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B34u;
        // 0x106b38: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106B3Cu;
        goto label_106b3c;
    }
    ctx->pc = 0x106B34u;
    SET_GPR_U32(ctx, 31, 0x106B3Cu);
    ctx->pc = 0x106B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B34u;
    // 0x106b38: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175380u, 0x106B34u, 0x106B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B3Cu;
label_106b3c:
    // 0x106b3c: 0x10000003  b           . + 4 + (0x3 << 2)
label_106b40:
    if (ctx->pc == 0x106B40u) {
        ctx->pc = 0x106B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B3Cu;
        // 0x106b40: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106B44u;
        goto label_106b44;
    }
    ctx->pc = 0x106B3Cu;
    {
        const bool branch_taken_0x106b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B3Cu;
        // 0x106b40: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b3c) {
            ctx->pc = 0x106B4Cu;
            goto label_106b4c;
        }
    }
    ctx->pc = 0x106B44u;
label_106b44:
    // 0x106b44: 0xc05d4e0  jal         func_175380
label_106b48:
    if (ctx->pc == 0x106B48u) {
        ctx->pc = 0x106B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B44u;
        // 0x106b48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106B4Cu;
        goto label_106b4c;
    }
    ctx->pc = 0x106B44u;
    SET_GPR_U32(ctx, 31, 0x106B4Cu);
    ctx->pc = 0x106B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106B44u;
    // 0x106b48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175380u, 0x106B44u, 0x106B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B4Cu;
label_106b4c:
    // 0x106b4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x106b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_106b50:
    // 0x106b50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_106b54:
    // 0x106b54: 0x3e00008  jr          $ra
label_106b58:
    if (ctx->pc == 0x106B58u) {
        ctx->pc = 0x106B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B54u;
        // 0x106b58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106B5Cu;
        goto label_106b5c;
    }
    ctx->pc = 0x106B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B54u;
        // 0x106b58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106B5Cu;
label_106b5c:
    // 0x106b5c: 0x0  nop
    ctx->pc = 0x106b5cu;
    // NOP
    ctx->pc = 0x106b60u;
}
