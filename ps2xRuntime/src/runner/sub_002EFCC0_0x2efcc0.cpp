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

// Function: sub_002EFCC0
// Address: 0x2efcc0 - 0x2efdc8
void sub_002EFCC0_0x2efcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFCC0_0x2efcc0");
#endif

    switch (ctx->pc) {
        case 0x2efcc0u: goto label_2efcc0;
        case 0x2efcc4u: goto label_2efcc4;
        case 0x2efcc8u: goto label_2efcc8;
        case 0x2efcccu: goto label_2efccc;
        case 0x2efcd0u: goto label_2efcd0;
        case 0x2efcd4u: goto label_2efcd4;
        case 0x2efcd8u: goto label_2efcd8;
        case 0x2efcdcu: goto label_2efcdc;
        case 0x2efce0u: goto label_2efce0;
        case 0x2efce4u: goto label_2efce4;
        case 0x2efce8u: goto label_2efce8;
        case 0x2efcecu: goto label_2efcec;
        case 0x2efcf0u: goto label_2efcf0;
        case 0x2efcf4u: goto label_2efcf4;
        case 0x2efcf8u: goto label_2efcf8;
        case 0x2efcfcu: goto label_2efcfc;
        case 0x2efd00u: goto label_2efd00;
        case 0x2efd04u: goto label_2efd04;
        case 0x2efd08u: goto label_2efd08;
        case 0x2efd0cu: goto label_2efd0c;
        case 0x2efd10u: goto label_2efd10;
        case 0x2efd14u: goto label_2efd14;
        case 0x2efd18u: goto label_2efd18;
        case 0x2efd1cu: goto label_2efd1c;
        case 0x2efd20u: goto label_2efd20;
        case 0x2efd24u: goto label_2efd24;
        case 0x2efd28u: goto label_2efd28;
        case 0x2efd2cu: goto label_2efd2c;
        case 0x2efd30u: goto label_2efd30;
        case 0x2efd34u: goto label_2efd34;
        case 0x2efd38u: goto label_2efd38;
        case 0x2efd3cu: goto label_2efd3c;
        case 0x2efd40u: goto label_2efd40;
        case 0x2efd44u: goto label_2efd44;
        case 0x2efd48u: goto label_2efd48;
        case 0x2efd4cu: goto label_2efd4c;
        case 0x2efd50u: goto label_2efd50;
        case 0x2efd54u: goto label_2efd54;
        case 0x2efd58u: goto label_2efd58;
        case 0x2efd5cu: goto label_2efd5c;
        case 0x2efd60u: goto label_2efd60;
        case 0x2efd64u: goto label_2efd64;
        case 0x2efd68u: goto label_2efd68;
        case 0x2efd6cu: goto label_2efd6c;
        case 0x2efd70u: goto label_2efd70;
        case 0x2efd74u: goto label_2efd74;
        case 0x2efd78u: goto label_2efd78;
        case 0x2efd7cu: goto label_2efd7c;
        case 0x2efd80u: goto label_2efd80;
        case 0x2efd84u: goto label_2efd84;
        case 0x2efd88u: goto label_2efd88;
        case 0x2efd8cu: goto label_2efd8c;
        case 0x2efd90u: goto label_2efd90;
        case 0x2efd94u: goto label_2efd94;
        case 0x2efd98u: goto label_2efd98;
        case 0x2efd9cu: goto label_2efd9c;
        case 0x2efda0u: goto label_2efda0;
        case 0x2efda4u: goto label_2efda4;
        case 0x2efda8u: goto label_2efda8;
        case 0x2efdacu: goto label_2efdac;
        case 0x2efdb0u: goto label_2efdb0;
        case 0x2efdb4u: goto label_2efdb4;
        case 0x2efdb8u: goto label_2efdb8;
        case 0x2efdbcu: goto label_2efdbc;
        case 0x2efdc0u: goto label_2efdc0;
        case 0x2efdc4u: goto label_2efdc4;
        default: break;
    }

    ctx->pc = 0x2efcc0u;

label_2efcc0:
    // 0x2efcc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2efcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2efcc4:
    // 0x2efcc4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2efcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2efcc8:
    // 0x2efcc8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2efcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2efccc:
    // 0x2efccc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2efcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2efcd0:
    // 0x2efcd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2efcd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2efcd4:
    // 0x2efcd4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2efcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2efcd8:
    // 0x2efcd8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2efcd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2efcdc:
    // 0x2efcdc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2efcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2efce0:
    // 0x2efce0: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x2efce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2efce4:
    // 0x2efce4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2efce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2efce8:
    // 0x2efce8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2efce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2efcec:
    // 0x2efcec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2efcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2efcf0:
    // 0x2efcf0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2efcf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2efcf4:
    // 0x2efcf4: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2efcf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2efcf8:
    // 0x2efcf8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2efcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2efcfc:
    // 0x2efcfc: 0xc0cdb38  jal         func_336CE0
label_2efd00:
    if (ctx->pc == 0x2EFD00u) {
        ctx->pc = 0x2EFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCFCu;
        // 0x2efd00: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFD04u;
        goto label_2efd04;
    }
    ctx->pc = 0x2EFCFCu;
    SET_GPR_U32(ctx, 31, 0x2EFD04u);
    ctx->pc = 0x2EFD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFCFCu;
    // 0x2efd00: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2EFCFCu, 0x2EFD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFD04u;
label_2efd04:
    // 0x2efd04: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2efd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2efd08:
    // 0x2efd08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2efd08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2efd0c:
    // 0x2efd0c: 0x0  nop
    ctx->pc = 0x2efd0cu;
    // NOP
label_2efd10:
    // 0x2efd10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2efd10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2efd14:
    // 0x2efd14: 0x0  nop
    ctx->pc = 0x2efd14u;
    // NOP
label_2efd18:
    // 0x2efd18: 0x45030024  bc1tl       . + 4 + (0x24 << 2)
label_2efd1c:
    if (ctx->pc == 0x2EFD1Cu) {
        ctx->pc = 0x2EFD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD18u;
        // 0x2efd1c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFD20u;
        goto label_2efd20;
    }
    ctx->pc = 0x2EFD18u;
    {
        const bool branch_taken_0x2efd18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2efd18) {
            ctx->pc = 0x2EFD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD18u;
            // 0x2efd1c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFDACu;
            goto label_2efdac;
        }
    }
    ctx->pc = 0x2EFD20u;
label_2efd20:
    // 0x2efd20: 0xc08a140  jal         func_228500
label_2efd24:
    if (ctx->pc == 0x2EFD24u) {
        ctx->pc = 0x2EFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD20u;
        // 0x2efd24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFD28u;
        goto label_2efd28;
    }
    ctx->pc = 0x2EFD20u;
    SET_GPR_U32(ctx, 31, 0x2EFD28u);
    ctx->pc = 0x2EFD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD20u;
    // 0x2efd24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228500u, 0x2EFD20u, 0x2EFD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFD28u;
label_2efd28:
    // 0x2efd28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2efd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2efd2c:
    // 0x2efd2c: 0x5043001f  beql        $v0, $v1, . + 4 + (0x1F << 2)
label_2efd30:
    if (ctx->pc == 0x2EFD30u) {
        ctx->pc = 0x2EFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD2Cu;
        // 0x2efd30: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFD34u;
        goto label_2efd34;
    }
    ctx->pc = 0x2EFD2Cu;
    {
        const bool branch_taken_0x2efd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2efd2c) {
            ctx->pc = 0x2EFD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD2Cu;
            // 0x2efd30: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFDACu;
            goto label_2efdac;
        }
    }
    ctx->pc = 0x2EFD34u;
label_2efd34:
    // 0x2efd34: 0x8e0201a8  lw          $v0, 0x1A8($s0)
    ctx->pc = 0x2efd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_2efd38:
    // 0x2efd38: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_2efd3c:
    if (ctx->pc == 0x2EFD3Cu) {
        ctx->pc = 0x2EFD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD38u;
        // 0x2efd3c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFD40u;
        goto label_2efd40;
    }
    ctx->pc = 0x2EFD38u;
    {
        const bool branch_taken_0x2efd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efd38) {
            ctx->pc = 0x2EFD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFD38u;
            // 0x2efd3c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFDACu;
            goto label_2efdac;
        }
    }
    ctx->pc = 0x2EFD40u;
label_2efd40:
    // 0x2efd40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2efd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2efd44:
    // 0x2efd44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2efd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2efd48:
    // 0x2efd48: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2efd48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2efd4c:
    // 0x2efd4c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2efd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2efd50:
    // 0x2efd50: 0x60f809  jalr        $v1
label_2efd54:
    if (ctx->pc == 0x2EFD54u) {
        ctx->pc = 0x2EFD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD50u;
        // 0x2efd54: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFD58u;
        goto label_2efd58;
    }
    ctx->pc = 0x2EFD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EFD58u);
        ctx->pc = 0x2EFD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD50u;
        // 0x2efd54: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFD50u, 0x2EFD58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EFD58u;
label_2efd58:
    // 0x2efd58: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x2efd58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2efd5c:
    // 0x2efd5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2efd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2efd60:
    // 0x2efd60: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2efd60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2efd64:
    // 0x2efd64: 0xc0cd780  jal         func_335E00
label_2efd68:
    if (ctx->pc == 0x2EFD68u) {
        ctx->pc = 0x2EFD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD64u;
        // 0x2efd68: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFD6Cu;
        goto label_2efd6c;
    }
    ctx->pc = 0x2EFD64u;
    SET_GPR_U32(ctx, 31, 0x2EFD6Cu);
    ctx->pc = 0x2EFD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD64u;
    // 0x2efd68: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2EFD64u, 0x2EFD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFD6Cu;
label_2efd6c:
    // 0x2efd6c: 0xc0cd742  jal         func_335D08
label_2efd70:
    if (ctx->pc == 0x2EFD70u) {
        ctx->pc = 0x2EFD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD6Cu;
        // 0x2efd70: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFD74u;
        goto label_2efd74;
    }
    ctx->pc = 0x2EFD6Cu;
    SET_GPR_U32(ctx, 31, 0x2EFD74u);
    ctx->pc = 0x2EFD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD6Cu;
    // 0x2efd70: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2EFD6Cu, 0x2EFD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFD74u;
label_2efd74:
    // 0x2efd74: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2efd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2efd78:
    // 0x2efd78: 0xc0cd7a8  jal         func_335EA0
label_2efd7c:
    if (ctx->pc == 0x2EFD7Cu) {
        ctx->pc = 0x2EFD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD78u;
        // 0x2efd7c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFD80u;
        goto label_2efd80;
    }
    ctx->pc = 0x2EFD78u;
    SET_GPR_U32(ctx, 31, 0x2EFD80u);
    ctx->pc = 0x2EFD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD78u;
    // 0x2efd7c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x2EFD78u, 0x2EFD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFD80u;
label_2efd80:
    // 0x2efd80: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x2efd80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2efd84:
    // 0x2efd84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2efd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2efd88:
    // 0x2efd88: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2efd88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2efd8c:
    // 0x2efd8c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2efd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2efd90:
    // 0x2efd90: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2efd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2efd94:
    // 0x2efd94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2efd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2efd98:
    // 0x2efd98: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x2efd98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_2efd9c:
    // 0x2efd9c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2efd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_2efda0:
    // 0x2efda0: 0x40f809  jalr        $v0
label_2efda4:
    if (ctx->pc == 0x2EFDA4u) {
        ctx->pc = 0x2EFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFDA0u;
        // 0x2efda4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFDA8u;
        goto label_2efda8;
    }
    ctx->pc = 0x2EFDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EFDA8u);
        ctx->pc = 0x2EFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFDA0u;
        // 0x2efda4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFDA0u, 0x2EFDA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EFDA8u;
label_2efda8:
    // 0x2efda8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2efda8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2efdac:
    // 0x2efdac: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2efdacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2efdb0:
    // 0x2efdb0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2efdb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2efdb4:
    // 0x2efdb4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2efdb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2efdb8:
    // 0x2efdb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2efdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2efdbc:
    // 0x2efdbc: 0x3e00008  jr          $ra
label_2efdc0:
    if (ctx->pc == 0x2EFDC0u) {
        ctx->pc = 0x2EFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFDBCu;
        // 0x2efdc0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EFDC4u;
        goto label_2efdc4;
    }
    ctx->pc = 0x2EFDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFDBCu;
        // 0x2efdc0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFDC4u;
label_2efdc4:
    // 0x2efdc4: 0x0  nop
    ctx->pc = 0x2efdc4u;
    // NOP
    ctx->pc = 0x2efdc8u;
}
