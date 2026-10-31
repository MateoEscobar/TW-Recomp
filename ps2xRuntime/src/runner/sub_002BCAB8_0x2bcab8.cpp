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

// Function: sub_002BCAB8
// Address: 0x2bcab8 - 0x2bcb88
void sub_002BCAB8_0x2bcab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCAB8_0x2bcab8");
#endif

    switch (ctx->pc) {
        case 0x2bcab8u: goto label_2bcab8;
        case 0x2bcabcu: goto label_2bcabc;
        case 0x2bcac0u: goto label_2bcac0;
        case 0x2bcac4u: goto label_2bcac4;
        case 0x2bcac8u: goto label_2bcac8;
        case 0x2bcaccu: goto label_2bcacc;
        case 0x2bcad0u: goto label_2bcad0;
        case 0x2bcad4u: goto label_2bcad4;
        case 0x2bcad8u: goto label_2bcad8;
        case 0x2bcadcu: goto label_2bcadc;
        case 0x2bcae0u: goto label_2bcae0;
        case 0x2bcae4u: goto label_2bcae4;
        case 0x2bcae8u: goto label_2bcae8;
        case 0x2bcaecu: goto label_2bcaec;
        case 0x2bcaf0u: goto label_2bcaf0;
        case 0x2bcaf4u: goto label_2bcaf4;
        case 0x2bcaf8u: goto label_2bcaf8;
        case 0x2bcafcu: goto label_2bcafc;
        case 0x2bcb00u: goto label_2bcb00;
        case 0x2bcb04u: goto label_2bcb04;
        case 0x2bcb08u: goto label_2bcb08;
        case 0x2bcb0cu: goto label_2bcb0c;
        case 0x2bcb10u: goto label_2bcb10;
        case 0x2bcb14u: goto label_2bcb14;
        case 0x2bcb18u: goto label_2bcb18;
        case 0x2bcb1cu: goto label_2bcb1c;
        case 0x2bcb20u: goto label_2bcb20;
        case 0x2bcb24u: goto label_2bcb24;
        case 0x2bcb28u: goto label_2bcb28;
        case 0x2bcb2cu: goto label_2bcb2c;
        case 0x2bcb30u: goto label_2bcb30;
        case 0x2bcb34u: goto label_2bcb34;
        case 0x2bcb38u: goto label_2bcb38;
        case 0x2bcb3cu: goto label_2bcb3c;
        case 0x2bcb40u: goto label_2bcb40;
        case 0x2bcb44u: goto label_2bcb44;
        case 0x2bcb48u: goto label_2bcb48;
        case 0x2bcb4cu: goto label_2bcb4c;
        case 0x2bcb50u: goto label_2bcb50;
        case 0x2bcb54u: goto label_2bcb54;
        case 0x2bcb58u: goto label_2bcb58;
        case 0x2bcb5cu: goto label_2bcb5c;
        case 0x2bcb60u: goto label_2bcb60;
        case 0x2bcb64u: goto label_2bcb64;
        case 0x2bcb68u: goto label_2bcb68;
        case 0x2bcb6cu: goto label_2bcb6c;
        case 0x2bcb70u: goto label_2bcb70;
        case 0x2bcb74u: goto label_2bcb74;
        case 0x2bcb78u: goto label_2bcb78;
        case 0x2bcb7cu: goto label_2bcb7c;
        case 0x2bcb80u: goto label_2bcb80;
        case 0x2bcb84u: goto label_2bcb84;
        default: break;
    }

    ctx->pc = 0x2bcab8u;

label_2bcab8:
    // 0x2bcab8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bcab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2bcabc:
    // 0x2bcabc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bcabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2bcac0:
    // 0x2bcac0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2bcac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2bcac4:
    // 0x2bcac4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bcac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bcac8:
    // 0x2bcac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bcac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2bcacc:
    // 0x2bcacc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bcaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bcad0:
    // 0x2bcad0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2bcad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2bcad4:
    // 0x2bcad4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2bcad4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bcad8:
    // 0x2bcad8: 0xc0e409a  jal         func_390268
label_2bcadc:
    if (ctx->pc == 0x2BCADCu) {
        ctx->pc = 0x2BCADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCAD8u;
        // 0x2bcadc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCAE0u;
        goto label_2bcae0;
    }
    ctx->pc = 0x2BCAD8u;
    SET_GPR_U32(ctx, 31, 0x2BCAE0u);
    ctx->pc = 0x2BCADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCAD8u;
    // 0x2bcadc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BCAD8u, 0x2BCAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCAE0u;
label_2bcae0:
    // 0x2bcae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bcae4:
    // 0x2bcae4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bcae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bcae8:
    // 0x2bcae8: 0xc0a352c  jal         func_28D4B0
label_2bcaec:
    if (ctx->pc == 0x2BCAECu) {
        ctx->pc = 0x2BCAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCAE8u;
        // 0x2bcaec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCAF0u;
        goto label_2bcaf0;
    }
    ctx->pc = 0x2BCAE8u;
    SET_GPR_U32(ctx, 31, 0x2BCAF0u);
    ctx->pc = 0x2BCAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCAE8u;
    // 0x2bcaec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2BCAE8u, 0x2BCAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCAF0u;
label_2bcaf0:
    // 0x2bcaf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bcaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bcaf4:
    // 0x2bcaf4: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_2bcaf8:
    if (ctx->pc == 0x2BCAF8u) {
        ctx->pc = 0x2BCAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCAF4u;
        // 0x2bcaf8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCAFCu;
        goto label_2bcafc;
    }
    ctx->pc = 0x2BCAF4u;
    {
        const bool branch_taken_0x2bcaf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bcaf4) {
            ctx->pc = 0x2BCAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCAF4u;
            // 0x2bcaf8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCB24u;
            goto label_2bcb24;
        }
    }
    ctx->pc = 0x2BCAFCu;
label_2bcafc:
    // 0x2bcafc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bcafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bcb00:
    // 0x2bcb00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bcb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bcb04:
    // 0x2bcb04: 0xc08750a  jal         func_21D428
label_2bcb08:
    if (ctx->pc == 0x2BCB08u) {
        ctx->pc = 0x2BCB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB04u;
        // 0x2bcb08: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB0Cu;
        goto label_2bcb0c;
    }
    ctx->pc = 0x2BCB04u;
    SET_GPR_U32(ctx, 31, 0x2BCB0Cu);
    ctx->pc = 0x2BCB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB04u;
    // 0x2bcb08: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2BCB04u, 0x2BCB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB0Cu;
label_2bcb0c:
    // 0x2bcb0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bcb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bcb10:
    // 0x2bcb10: 0xc0a57ca  jal         func_295F28
label_2bcb14:
    if (ctx->pc == 0x2BCB14u) {
        ctx->pc = 0x2BCB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB10u;
        // 0x2bcb14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB18u;
        goto label_2bcb18;
    }
    ctx->pc = 0x2BCB10u;
    SET_GPR_U32(ctx, 31, 0x2BCB18u);
    ctx->pc = 0x2BCB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB10u;
    // 0x2bcb14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x2BCB10u, 0x2BCB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB18u;
label_2bcb18:
    // 0x2bcb18: 0xc08bfbc  jal         func_22FEF0
label_2bcb1c:
    if (ctx->pc == 0x2BCB1Cu) {
        ctx->pc = 0x2BCB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB18u;
        // 0x2bcb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB20u;
        goto label_2bcb20;
    }
    ctx->pc = 0x2BCB18u;
    SET_GPR_U32(ctx, 31, 0x2BCB20u);
    ctx->pc = 0x2BCB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB18u;
    // 0x2bcb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2BCB18u, 0x2BCB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB20u;
label_2bcb20:
    // 0x2bcb20: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2bcb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2bcb24:
    // 0x2bcb24: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2bcb24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2bcb28:
    // 0x2bcb28: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x2bcb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2bcb2c:
    // 0x2bcb2c: 0xa0f809  jalr        $a1
label_2bcb30:
    if (ctx->pc == 0x2BCB30u) {
        ctx->pc = 0x2BCB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB2Cu;
        // 0x2bcb30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB34u;
        goto label_2bcb34;
    }
    ctx->pc = 0x2BCB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2BCB34u);
        ctx->pc = 0x2BCB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB2Cu;
        // 0x2bcb30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCB2Cu, 0x2BCB34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BCB34u;
label_2bcb34:
    // 0x2bcb34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bcb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bcb38:
    // 0x2bcb38: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2bcb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2bcb3c:
    // 0x2bcb3c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2bcb3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2bcb40:
    // 0x2bcb40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bcb40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bcb44:
    // 0x2bcb44: 0xc460012c  lwc1        $f0, 0x12C($v1)
    ctx->pc = 0x2bcb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bcb48:
    // 0x2bcb48: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x2bcb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_2bcb4c:
    // 0x2bcb4c: 0x9062000b  lbu         $v0, 0xB($v1)
    ctx->pc = 0x2bcb4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
label_2bcb50:
    // 0x2bcb50: 0xa2220031  sb          $v0, 0x31($s1)
    ctx->pc = 0x2bcb50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 2));
label_2bcb54:
    // 0x2bcb54: 0xe461012c  swc1        $f1, 0x12C($v1)
    ctx->pc = 0x2bcb54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2bcb58:
    // 0x2bcb58: 0x92250031  lbu         $a1, 0x31($s1)
    ctx->pc = 0x2bcb58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
label_2bcb5c:
    // 0x2bcb5c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bcb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bcb60:
    // 0x2bcb60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2bcb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2bcb64:
    // 0x2bcb64: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2bcb64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2bcb68:
    // 0x2bcb68: 0xc0a337e  jal         func_28CDF8
label_2bcb6c:
    if (ctx->pc == 0x2BCB6Cu) {
        ctx->pc = 0x2BCB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB68u;
        // 0x2bcb6c: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB70u;
        goto label_2bcb70;
    }
    ctx->pc = 0x2BCB68u;
    SET_GPR_U32(ctx, 31, 0x2BCB70u);
    ctx->pc = 0x2BCB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB68u;
    // 0x2bcb6c: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2BCB68u, 0x2BCB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB70u;
label_2bcb70:
    // 0x2bcb70: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2bcb70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bcb74:
    // 0x2bcb74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bcb74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bcb78:
    // 0x2bcb78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bcb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bcb7c:
    // 0x2bcb7c: 0x3e00008  jr          $ra
label_2bcb80:
    if (ctx->pc == 0x2BCB80u) {
        ctx->pc = 0x2BCB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB7Cu;
        // 0x2bcb80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB84u;
        goto label_2bcb84;
    }
    ctx->pc = 0x2BCB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB7Cu;
        // 0x2bcb80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCB84u;
label_2bcb84:
    // 0x2bcb84: 0x0  nop
    ctx->pc = 0x2bcb84u;
    // NOP
    ctx->pc = 0x2bcb88u;
}
