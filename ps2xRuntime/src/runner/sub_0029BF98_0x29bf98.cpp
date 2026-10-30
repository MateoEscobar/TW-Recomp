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

// Function: sub_0029BF98
// Address: 0x29bf98 - 0x29c0d8
void sub_0029BF98_0x29bf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BF98_0x29bf98");
#endif

    switch (ctx->pc) {
        case 0x29bfc8u: goto label_29bfc8;
        case 0x29c000u: goto label_29c000;
        case 0x29c024u: goto label_29c024;
        case 0x29c060u: goto label_29c060;
        case 0x29c070u: goto label_29c070;
        case 0x29c07cu: goto label_29c07c;
        case 0x29c090u: goto label_29c090;
        case 0x29c0a4u: goto label_29c0a4;
        case 0x29c0b0u: goto label_29c0b0;
        default: break;
    }

    ctx->pc = 0x29bf98u;

    // 0x29bf98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29bf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29bf9c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x29bf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x29bfa0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x29bfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x29bfa4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29bfa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bfa8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29bfa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bfac: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x29bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x29bfb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29bfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bfb4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x29bfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x29bfb8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x29bfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x29bfbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29bfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29bfc0: 0xc087502  jal         func_21D408
    ctx->pc = 0x29BFC0u;
    SET_GPR_U32(ctx, 31, 0x29BFC8u);
    ctx->pc = 0x29BFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BFC0u;
    // 0x29bfc4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29BFC0u, 0x29BFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BFC8u;
label_29bfc8:
    // 0x29bfc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29bfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bfcc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x29bfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29bfd0: 0x14740018  bne         $v1, $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x29BFD0u;
    {
        const bool branch_taken_0x29bfd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x29BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFD0u;
        // 0x29bfd4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bfd0) {
            ctx->pc = 0x29C034u;
            goto label_29c034;
        }
    }
    ctx->pc = 0x29BFD8u;
    // 0x29bfd8: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x29bfd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x29bfdc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x29bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x29bfe0: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x29bfe0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x29bfe4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x29bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x29bfe8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x29bfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x29bfec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29bfecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bff0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x29bff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x29bff4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29bff8: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x29BFF8u;
    SET_GPR_U32(ctx, 31, 0x29C000u);
    ctx->pc = 0x29BFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BFF8u;
    // 0x29bffc: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x29BFF8u, 0x29C000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C000u;
label_29c000:
    // 0x29c000: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x29c000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x29c004: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29c004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29c008: 0x0  nop
    ctx->pc = 0x29c008u;
    // NOP
    // 0x29c00c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29c00cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c010: 0x0  nop
    ctx->pc = 0x29c010u;
    // NOP
    // 0x29c014: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x29C014u;
    {
        const bool branch_taken_0x29c014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C014u;
        // 0x29c018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c014) {
            ctx->pc = 0x29C080u;
            goto label_29c080;
        }
    }
    ctx->pc = 0x29C01Cu;
    // 0x29c01c: 0xc088a92  jal         func_222A48
    ctx->pc = 0x29C01Cu;
    SET_GPR_U32(ctx, 31, 0x29C024u);
    ctx->pc = 0x29C020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C01Cu;
    // 0x29c020: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x29C01Cu, 0x29C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C024u;
label_29c024:
    // 0x29c024: 0x54540024  bnel        $v0, $s4, . + 4 + (0x24 << 2)
    ctx->pc = 0x29C024u;
    {
        const bool branch_taken_0x29c024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x29c024) {
            ctx->pc = 0x29C028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C024u;
            // 0x29c028: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C0B8u;
            goto label_29c0b8;
        }
    }
    ctx->pc = 0x29C02Cu;
    // 0x29c02c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x29C02Cu;
    {
        const bool branch_taken_0x29c02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c02c) {
            ctx->pc = 0x29C068u;
            goto label_29c068;
        }
    }
    ctx->pc = 0x29C034u;
label_29c034:
    // 0x29c034: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x29C034u;
    {
        const bool branch_taken_0x29c034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29c034) {
            ctx->pc = 0x29C038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C034u;
            // 0x29c038: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C088u;
            goto label_29c088;
        }
    }
    ctx->pc = 0x29C03Cu;
    // 0x29c03c: 0x8c83026c  lw          $v1, 0x26C($a0)
    ctx->pc = 0x29c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 620)));
    // 0x29c040: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29c040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29c044: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29C044u;
    {
        const bool branch_taken_0x29c044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C044u;
        // 0x29c048: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c044) {
            ctx->pc = 0x29C080u;
            goto label_29c080;
        }
    }
    ctx->pc = 0x29C04Cu;
    // 0x29c04c: 0x8c82021c  lw          $v0, 0x21C($a0)
    ctx->pc = 0x29c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 540)));
    // 0x29c050: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x29C050u;
    {
        const bool branch_taken_0x29c050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C050u;
        // 0x29c054: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c050) {
            ctx->pc = 0x29C0B8u;
            goto label_29c0b8;
        }
    }
    ctx->pc = 0x29C058u;
    // 0x29c058: 0xc088e58  jal         func_223960
    ctx->pc = 0x29C058u;
    SET_GPR_U32(ctx, 31, 0x29C060u);
    ctx->pc = 0x29C05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C058u;
    // 0x29c05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223960u, 0x29C058u, 0x29C060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C060u;
label_29c060:
    // 0x29c060: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x29C060u;
    {
        const bool branch_taken_0x29c060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c060) {
            ctx->pc = 0x29C064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C060u;
            // 0x29c064: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C0B8u;
            goto label_29c0b8;
        }
    }
    ctx->pc = 0x29C068u;
label_29c068:
    // 0x29c068: 0xc087502  jal         func_21D408
    ctx->pc = 0x29C068u;
    SET_GPR_U32(ctx, 31, 0x29C070u);
    ctx->pc = 0x29C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C068u;
    // 0x29c06c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29C068u, 0x29C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C070u;
label_29c070:
    // 0x29c070: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c074: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x29C074u;
    SET_GPR_U32(ctx, 31, 0x29C07Cu);
    ctx->pc = 0x29C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C074u;
    // 0x29c078: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x29C074u, 0x29C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C07Cu;
label_29c07c:
    // 0x29c07c: 0x282880b  movn        $s1, $s4, $v0
    ctx->pc = 0x29c07cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 20));
label_29c080:
    // 0x29c080: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29C080u;
    {
        const bool branch_taken_0x29c080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C080u;
        // 0x29c084: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c080) {
            ctx->pc = 0x29C0B8u;
            goto label_29c0b8;
        }
    }
    ctx->pc = 0x29C088u;
label_29c088:
    // 0x29c088: 0xc088a92  jal         func_222A48
    ctx->pc = 0x29C088u;
    SET_GPR_U32(ctx, 31, 0x29C090u);
    ctx->pc = 0x29C08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C088u;
    // 0x29c08c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x29C088u, 0x29C090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C090u;
label_29c090:
    // 0x29c090: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29c090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c094: 0x16340007  bne         $s1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x29C094u;
    {
        const bool branch_taken_0x29c094 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x29C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C094u;
        // 0x29c098: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c094) {
            ctx->pc = 0x29C0B4u;
            goto label_29c0b4;
        }
    }
    ctx->pc = 0x29C09Cu;
    // 0x29c09c: 0xc087502  jal         func_21D408
    ctx->pc = 0x29C09Cu;
    SET_GPR_U32(ctx, 31, 0x29C0A4u);
    ctx->pc = 0x29C0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C09Cu;
    // 0x29c0a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29C09Cu, 0x29C0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C0A4u;
label_29c0a4:
    // 0x29c0a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0a8: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x29C0A8u;
    SET_GPR_U32(ctx, 31, 0x29C0B0u);
    ctx->pc = 0x29C0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C0A8u;
    // 0x29c0ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x29C0A8u, 0x29C0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C0B0u;
label_29c0b0:
    // 0x29c0b0: 0x222980b  movn        $s3, $s1, $v0
    ctx->pc = 0x29c0b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
label_29c0b4:
    // 0x29c0b4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x29c0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29c0b8:
    // 0x29c0b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x29c0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29c0bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x29c0bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29c0c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x29c0c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c0c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x29c0c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c0c8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x29c0c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c0cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x29C0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C0D0u;
        // 0x29c0d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C0D8u;
}
