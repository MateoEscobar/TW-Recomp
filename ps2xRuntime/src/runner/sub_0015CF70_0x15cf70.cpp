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

// Function: sub_0015CF70
// Address: 0x15cf70 - 0x15d0f0
void sub_0015CF70_0x15cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CF70_0x15cf70");
#endif

    switch (ctx->pc) {
        case 0x15cf70u: goto label_15cf70;
        case 0x15cf74u: goto label_15cf74;
        case 0x15cf78u: goto label_15cf78;
        case 0x15cf7cu: goto label_15cf7c;
        case 0x15cf80u: goto label_15cf80;
        case 0x15cf84u: goto label_15cf84;
        case 0x15cf88u: goto label_15cf88;
        case 0x15cf8cu: goto label_15cf8c;
        case 0x15cf90u: goto label_15cf90;
        case 0x15cf94u: goto label_15cf94;
        case 0x15cf98u: goto label_15cf98;
        case 0x15cf9cu: goto label_15cf9c;
        case 0x15cfa0u: goto label_15cfa0;
        case 0x15cfa4u: goto label_15cfa4;
        case 0x15cfa8u: goto label_15cfa8;
        case 0x15cfacu: goto label_15cfac;
        case 0x15cfb0u: goto label_15cfb0;
        case 0x15cfb4u: goto label_15cfb4;
        case 0x15cfb8u: goto label_15cfb8;
        case 0x15cfbcu: goto label_15cfbc;
        case 0x15cfc0u: goto label_15cfc0;
        case 0x15cfc4u: goto label_15cfc4;
        case 0x15cfc8u: goto label_15cfc8;
        case 0x15cfccu: goto label_15cfcc;
        case 0x15cfd0u: goto label_15cfd0;
        case 0x15cfd4u: goto label_15cfd4;
        case 0x15cfd8u: goto label_15cfd8;
        case 0x15cfdcu: goto label_15cfdc;
        case 0x15cfe0u: goto label_15cfe0;
        case 0x15cfe4u: goto label_15cfe4;
        case 0x15cfe8u: goto label_15cfe8;
        case 0x15cfecu: goto label_15cfec;
        case 0x15cff0u: goto label_15cff0;
        case 0x15cff4u: goto label_15cff4;
        case 0x15cff8u: goto label_15cff8;
        case 0x15cffcu: goto label_15cffc;
        case 0x15d000u: goto label_15d000;
        case 0x15d004u: goto label_15d004;
        case 0x15d008u: goto label_15d008;
        case 0x15d00cu: goto label_15d00c;
        case 0x15d010u: goto label_15d010;
        case 0x15d014u: goto label_15d014;
        case 0x15d018u: goto label_15d018;
        case 0x15d01cu: goto label_15d01c;
        case 0x15d020u: goto label_15d020;
        case 0x15d024u: goto label_15d024;
        case 0x15d028u: goto label_15d028;
        case 0x15d02cu: goto label_15d02c;
        case 0x15d030u: goto label_15d030;
        case 0x15d034u: goto label_15d034;
        case 0x15d038u: goto label_15d038;
        case 0x15d03cu: goto label_15d03c;
        case 0x15d040u: goto label_15d040;
        case 0x15d044u: goto label_15d044;
        case 0x15d048u: goto label_15d048;
        case 0x15d04cu: goto label_15d04c;
        case 0x15d050u: goto label_15d050;
        case 0x15d054u: goto label_15d054;
        case 0x15d058u: goto label_15d058;
        case 0x15d05cu: goto label_15d05c;
        case 0x15d060u: goto label_15d060;
        case 0x15d064u: goto label_15d064;
        case 0x15d068u: goto label_15d068;
        case 0x15d06cu: goto label_15d06c;
        case 0x15d070u: goto label_15d070;
        case 0x15d074u: goto label_15d074;
        case 0x15d078u: goto label_15d078;
        case 0x15d07cu: goto label_15d07c;
        case 0x15d080u: goto label_15d080;
        case 0x15d084u: goto label_15d084;
        case 0x15d088u: goto label_15d088;
        case 0x15d08cu: goto label_15d08c;
        case 0x15d090u: goto label_15d090;
        case 0x15d094u: goto label_15d094;
        case 0x15d098u: goto label_15d098;
        case 0x15d09cu: goto label_15d09c;
        case 0x15d0a0u: goto label_15d0a0;
        case 0x15d0a4u: goto label_15d0a4;
        case 0x15d0a8u: goto label_15d0a8;
        case 0x15d0acu: goto label_15d0ac;
        case 0x15d0b0u: goto label_15d0b0;
        case 0x15d0b4u: goto label_15d0b4;
        case 0x15d0b8u: goto label_15d0b8;
        case 0x15d0bcu: goto label_15d0bc;
        case 0x15d0c0u: goto label_15d0c0;
        case 0x15d0c4u: goto label_15d0c4;
        case 0x15d0c8u: goto label_15d0c8;
        case 0x15d0ccu: goto label_15d0cc;
        case 0x15d0d0u: goto label_15d0d0;
        case 0x15d0d4u: goto label_15d0d4;
        case 0x15d0d8u: goto label_15d0d8;
        case 0x15d0dcu: goto label_15d0dc;
        case 0x15d0e0u: goto label_15d0e0;
        case 0x15d0e4u: goto label_15d0e4;
        case 0x15d0e8u: goto label_15d0e8;
        case 0x15d0ecu: goto label_15d0ec;
        default: break;
    }

    ctx->pc = 0x15cf70u;

label_15cf70:
    // 0x15cf70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_15cf74:
    // 0x15cf74: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15cf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_15cf78:
    // 0x15cf78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15cf78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15cf7c:
    // 0x15cf7c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15cf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_15cf80:
    // 0x15cf80: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_15cf84:
    // 0x15cf84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15cf84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cf88:
    // 0x15cf88: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x15cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_15cf8c:
    // 0x15cf8c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x15cf8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cf90:
    // 0x15cf90: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x15cf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_15cf94:
    // 0x15cf94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15cf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15cf98:
    // 0x15cf98: 0xc0579e4  jal         func_15E790
label_15cf9c:
    if (ctx->pc == 0x15CF9Cu) {
        ctx->pc = 0x15CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF98u;
        // 0x15cf9c: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CFA0u;
        goto label_15cfa0;
    }
    ctx->pc = 0x15CF98u;
    SET_GPR_U32(ctx, 31, 0x15CFA0u);
    ctx->pc = 0x15CF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF98u;
    // 0x15cf9c: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E790u, 0x15CF98u, 0x15CFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFA0u;
label_15cfa0:
    // 0x15cfa0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x15cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_15cfa4:
    // 0x15cfa4: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x15cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_15cfa8:
    // 0x15cfa8: 0xc108c26  jal         func_423098
label_15cfac:
    if (ctx->pc == 0x15CFACu) {
        ctx->pc = 0x15CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFA8u;
        // 0x15cfac: 0x2484e490  addiu       $a0, $a0, -0x1B70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CFB0u;
        goto label_15cfb0;
    }
    ctx->pc = 0x15CFA8u;
    SET_GPR_U32(ctx, 31, 0x15CFB0u);
    ctx->pc = 0x15CFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CFA8u;
    // 0x15cfac: 0x2484e490  addiu       $a0, $a0, -0x1B70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423098u, 0x15CFA8u, 0x15CFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFB0u;
label_15cfb0:
    // 0x15cfb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15cfb4:
    // 0x15cfb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cfb8:
    // 0x15cfb8: 0xc0e8b20  jal         func_3A2C80
label_15cfbc:
    if (ctx->pc == 0x15CFBCu) {
        ctx->pc = 0x15CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFB8u;
        // 0x15cfbc: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CFC0u;
        goto label_15cfc0;
    }
    ctx->pc = 0x15CFB8u;
    SET_GPR_U32(ctx, 31, 0x15CFC0u);
    ctx->pc = 0x15CFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CFB8u;
    // 0x15cfbc: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x15CFB8u, 0x15CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFC0u;
label_15cfc0:
    // 0x15cfc0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15cfc4:
    // 0x15cfc4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15cfc8:
    // 0x15cfc8: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x15cfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_15cfcc:
    // 0x15cfcc: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x15cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_15cfd0:
    // 0x15cfd0: 0xc043ec8  jal         func_10FB20
label_15cfd4:
    if (ctx->pc == 0x15CFD4u) {
        ctx->pc = 0x15CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFD0u;
        // 0x15cfd4: 0xae050008  sw          $a1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CFD8u;
        goto label_15cfd8;
    }
    ctx->pc = 0x15CFD0u;
    SET_GPR_U32(ctx, 31, 0x15CFD8u);
    ctx->pc = 0x15CFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CFD0u;
    // 0x15cfd4: 0xae050008  sw          $a1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB20u, 0x15CFD0u, 0x15CFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFD8u;
label_15cfd8:
    // 0x15cfd8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15cfdc:
    // 0x15cfdc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x15cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_15cfe0:
    // 0x15cfe0: 0xac402b28  sw          $zero, 0x2B28($v0)
    ctx->pc = 0x15cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11048), GPR_U32(ctx, 0));
label_15cfe4:
    // 0x15cfe4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15cfe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15cfe8:
    // 0x15cfe8: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x15cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_15cfec:
    // 0x15cfec: 0x0  nop
    ctx->pc = 0x15cfecu;
    // NOP
label_15cff0:
    // 0x15cff0: 0xc0e402c  jal         func_3900B0
label_15cff4:
    if (ctx->pc == 0x15CFF4u) {
        ctx->pc = 0x15CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFF0u;
        // 0x15cff4: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CFF8u;
        goto label_15cff8;
    }
    ctx->pc = 0x15CFF0u;
    SET_GPR_U32(ctx, 31, 0x15CFF8u);
    ctx->pc = 0x15CFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CFF0u;
    // 0x15cff4: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x15CFF0u, 0x15CFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFF8u;
label_15cff8:
    // 0x15cff8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15cff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15cffc:
    // 0x15cffc: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
label_15d000:
    if (ctx->pc == 0x15D000u) {
        ctx->pc = 0x15D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFFCu;
        // 0x15d000: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D004u;
        goto label_15d004;
    }
    ctx->pc = 0x15CFFCu;
    {
        const bool branch_taken_0x15cffc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cffc) {
            ctx->pc = 0x15D000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CFFCu;
            // 0x15d000: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D07Cu;
            goto label_15d07c;
        }
    }
    ctx->pc = 0x15D004u;
label_15d004:
    // 0x15d004: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x15d004u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_15d008:
    // 0x15d008: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x15d008u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_15d00c:
    // 0x15d00c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x15d00cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_15d010:
    // 0x15d010: 0x14520017  bne         $v0, $s2, . + 4 + (0x17 << 2)
label_15d014:
    if (ctx->pc == 0x15D014u) {
        ctx->pc = 0x15D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D010u;
        // 0x15d014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D018u;
        goto label_15d018;
    }
    ctx->pc = 0x15D010u;
    {
        const bool branch_taken_0x15d010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x15D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D010u;
        // 0x15d014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d010) {
            ctx->pc = 0x15D070u;
            goto label_15d070;
        }
    }
    ctx->pc = 0x15D018u;
label_15d018:
    // 0x15d018: 0xc0874fa  jal         func_21D3E8
label_15d01c:
    if (ctx->pc == 0x15D01Cu) {
        ctx->pc = 0x15D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D018u;
        // 0x15d01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D020u;
        goto label_15d020;
    }
    ctx->pc = 0x15D018u;
    SET_GPR_U32(ctx, 31, 0x15D020u);
    ctx->pc = 0x15D01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D018u;
    // 0x15d01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x15D018u, 0x15D020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D020u;
label_15d020:
    // 0x15d020: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x15d020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
label_15d024:
    // 0x15d024: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15d024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15d028:
    // 0x15d028: 0x84440148  lh          $a0, 0x148($v0)
    ctx->pc = 0x15d028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
label_15d02c:
    // 0x15d02c: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x15d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_15d030:
    // 0x15d030: 0x60f809  jalr        $v1
label_15d034:
    if (ctx->pc == 0x15D034u) {
        ctx->pc = 0x15D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D030u;
        // 0x15d034: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D038u;
        goto label_15d038;
    }
    ctx->pc = 0x15D030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D038u);
        ctx->pc = 0x15D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D030u;
        // 0x15d034: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D030u, 0x15D038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D038u;
label_15d038:
    // 0x15d038: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x15d038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
label_15d03c:
    // 0x15d03c: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x15d03cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_15d040:
    // 0x15d040: 0xc089988  jal         func_226620
label_15d044:
    if (ctx->pc == 0x15D044u) {
        ctx->pc = 0x15D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D040u;
        // 0x15d044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D048u;
        goto label_15d048;
    }
    ctx->pc = 0x15D040u;
    SET_GPR_U32(ctx, 31, 0x15D048u);
    ctx->pc = 0x15D044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D040u;
    // 0x15d044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x15D040u, 0x15D048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D048u;
label_15d048:
    // 0x15d048: 0xc08a18c  jal         func_228630
label_15d04c:
    if (ctx->pc == 0x15D04Cu) {
        ctx->pc = 0x15D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D048u;
        // 0x15d04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D050u;
        goto label_15d050;
    }
    ctx->pc = 0x15D048u;
    SET_GPR_U32(ctx, 31, 0x15D050u);
    ctx->pc = 0x15D04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D048u;
    // 0x15d04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228630u, 0x15D048u, 0x15D050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D050u;
label_15d050:
    // 0x15d050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d054:
    // 0x15d054: 0xc0899aa  jal         func_2266A8
label_15d058:
    if (ctx->pc == 0x15D058u) {
        ctx->pc = 0x15D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D054u;
        // 0x15d058: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D05Cu;
        goto label_15d05c;
    }
    ctx->pc = 0x15D054u;
    SET_GPR_U32(ctx, 31, 0x15D05Cu);
    ctx->pc = 0x15D058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D054u;
    // 0x15d058: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x15D054u, 0x15D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D05Cu;
label_15d05c:
    // 0x15d05c: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x15d05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_15d060:
    // 0x15d060: 0xc05dc0e  jal         func_177038
label_15d064:
    if (ctx->pc == 0x15D064u) {
        ctx->pc = 0x15D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D060u;
        // 0x15d064: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D068u;
        goto label_15d068;
    }
    ctx->pc = 0x15D060u;
    SET_GPR_U32(ctx, 31, 0x15D068u);
    ctx->pc = 0x15D064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D060u;
    // 0x15d064: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177038u, 0x15D060u, 0x15D068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D068u;
label_15d068:
    // 0x15d068: 0x10000003  b           . + 4 + (0x3 << 2)
label_15d06c:
    if (ctx->pc == 0x15D06Cu) {
        ctx->pc = 0x15D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D068u;
        // 0x15d06c: 0xa2000284  sb          $zero, 0x284($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D070u;
        goto label_15d070;
    }
    ctx->pc = 0x15D068u;
    {
        const bool branch_taken_0x15d068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D068u;
        // 0x15d06c: 0xa2000284  sb          $zero, 0x284($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d068) {
            ctx->pc = 0x15D078u;
            goto label_15d078;
        }
    }
    ctx->pc = 0x15D070u;
label_15d070:
    // 0x15d070: 0xc0871f2  jal         func_21C7C8
label_15d074:
    if (ctx->pc == 0x15D074u) {
        ctx->pc = 0x15D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D070u;
        // 0x15d074: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D078u;
        goto label_15d078;
    }
    ctx->pc = 0x15D070u;
    SET_GPR_U32(ctx, 31, 0x15D078u);
    ctx->pc = 0x15D074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D070u;
    // 0x15d074: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C7C8u, 0x15D070u, 0x15D078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D078u;
label_15d078:
    // 0x15d078: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15d078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15d07c:
    // 0x15d07c: 0x2a22003c  slti        $v0, $s1, 0x3C
    ctx->pc = 0x15d07cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)60) ? 1 : 0);
label_15d080:
    // 0x15d080: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
label_15d084:
    if (ctx->pc == 0x15D084u) {
        ctx->pc = 0x15D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D080u;
        // 0x15d084: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D088u;
        goto label_15d088;
    }
    ctx->pc = 0x15D080u;
    {
        const bool branch_taken_0x15d080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d080) {
            ctx->pc = 0x15D084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D080u;
            // 0x15d084: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cff0;
        }
    }
    ctx->pc = 0x15D088u;
label_15d088:
    // 0x15d088: 0x8e862b04  lw          $a2, 0x2B04($s4)
    ctx->pc = 0x15d088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
label_15d08c:
    // 0x15d08c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d090:
    // 0x15d090: 0xae622b28  sw          $v0, 0x2B28($s3)
    ctx->pc = 0x15d090u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 11048), GPR_U32(ctx, 2));
label_15d094:
    // 0x15d094: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x15d094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_15d098:
    // 0x15d098: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15d098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15d09c:
    // 0x15d09c: 0x24a5f528  addiu       $a1, $a1, -0xAD8
    ctx->pc = 0x15d09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964520));
label_15d0a0:
    // 0x15d0a0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x15d0a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_15d0a4:
    // 0x15d0a4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x15d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_15d0a8:
    // 0x15d0a8: 0x40f809  jalr        $v0
label_15d0ac:
    if (ctx->pc == 0x15D0ACu) {
        ctx->pc = 0x15D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0A8u;
        // 0x15d0ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D0B0u;
        goto label_15d0b0;
    }
    ctx->pc = 0x15D0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D0B0u);
        ctx->pc = 0x15D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0A8u;
        // 0x15d0ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D0A8u, 0x15D0B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D0B0u;
label_15d0b0:
    // 0x15d0b0: 0x8e872b04  lw          $a3, 0x2B04($s4)
    ctx->pc = 0x15d0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
label_15d0b4:
    // 0x15d0b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d0b8:
    // 0x15d0b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d0b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d0bc:
    // 0x15d0bc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x15d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_15d0c0:
    // 0x15d0c0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x15d0c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_15d0c4:
    // 0x15d0c4: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x15d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_15d0c8:
    // 0x15d0c8: 0x60f809  jalr        $v1
label_15d0cc:
    if (ctx->pc == 0x15D0CCu) {
        ctx->pc = 0x15D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0C8u;
        // 0x15d0cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D0D0u;
        goto label_15d0d0;
    }
    ctx->pc = 0x15D0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D0D0u);
        ctx->pc = 0x15D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0C8u;
        // 0x15d0cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D0C8u, 0x15D0D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D0D0u;
label_15d0d0:
    // 0x15d0d0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15d0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15d0d4:
    // 0x15d0d4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15d0d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15d0d8:
    // 0x15d0d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15d0d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15d0dc:
    // 0x15d0dc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x15d0dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15d0e0:
    // 0x15d0e0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x15d0e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15d0e4:
    // 0x15d0e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15d0e8:
    // 0x15d0e8: 0x3e00008  jr          $ra
label_15d0ec:
    if (ctx->pc == 0x15D0ECu) {
        ctx->pc = 0x15D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0E8u;
        // 0x15d0ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D0F0u;
        goto label_fallthrough_0x15d0e8;
    }
    ctx->pc = 0x15D0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0E8u;
        // 0x15d0ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15d0e8:
    ctx->pc = 0x15D0F0u;
}
