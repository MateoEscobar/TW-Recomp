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

// Function: sub_0028BFA8
// Address: 0x28bfa8 - 0x28c0c8
void sub_0028BFA8_0x28bfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BFA8_0x28bfa8");
#endif

    switch (ctx->pc) {
        case 0x28bfa8u: goto label_28bfa8;
        case 0x28bfacu: goto label_28bfac;
        case 0x28bfb0u: goto label_28bfb0;
        case 0x28bfb4u: goto label_28bfb4;
        case 0x28bfb8u: goto label_28bfb8;
        case 0x28bfbcu: goto label_28bfbc;
        case 0x28bfc0u: goto label_28bfc0;
        case 0x28bfc4u: goto label_28bfc4;
        case 0x28bfc8u: goto label_28bfc8;
        case 0x28bfccu: goto label_28bfcc;
        case 0x28bfd0u: goto label_28bfd0;
        case 0x28bfd4u: goto label_28bfd4;
        case 0x28bfd8u: goto label_28bfd8;
        case 0x28bfdcu: goto label_28bfdc;
        case 0x28bfe0u: goto label_28bfe0;
        case 0x28bfe4u: goto label_28bfe4;
        case 0x28bfe8u: goto label_28bfe8;
        case 0x28bfecu: goto label_28bfec;
        case 0x28bff0u: goto label_28bff0;
        case 0x28bff4u: goto label_28bff4;
        case 0x28bff8u: goto label_28bff8;
        case 0x28bffcu: goto label_28bffc;
        case 0x28c000u: goto label_28c000;
        case 0x28c004u: goto label_28c004;
        case 0x28c008u: goto label_28c008;
        case 0x28c00cu: goto label_28c00c;
        case 0x28c010u: goto label_28c010;
        case 0x28c014u: goto label_28c014;
        case 0x28c018u: goto label_28c018;
        case 0x28c01cu: goto label_28c01c;
        case 0x28c020u: goto label_28c020;
        case 0x28c024u: goto label_28c024;
        case 0x28c028u: goto label_28c028;
        case 0x28c02cu: goto label_28c02c;
        case 0x28c030u: goto label_28c030;
        case 0x28c034u: goto label_28c034;
        case 0x28c038u: goto label_28c038;
        case 0x28c03cu: goto label_28c03c;
        case 0x28c040u: goto label_28c040;
        case 0x28c044u: goto label_28c044;
        case 0x28c048u: goto label_28c048;
        case 0x28c04cu: goto label_28c04c;
        case 0x28c050u: goto label_28c050;
        case 0x28c054u: goto label_28c054;
        case 0x28c058u: goto label_28c058;
        case 0x28c05cu: goto label_28c05c;
        case 0x28c060u: goto label_28c060;
        case 0x28c064u: goto label_28c064;
        case 0x28c068u: goto label_28c068;
        case 0x28c06cu: goto label_28c06c;
        case 0x28c070u: goto label_28c070;
        case 0x28c074u: goto label_28c074;
        case 0x28c078u: goto label_28c078;
        case 0x28c07cu: goto label_28c07c;
        case 0x28c080u: goto label_28c080;
        case 0x28c084u: goto label_28c084;
        case 0x28c088u: goto label_28c088;
        case 0x28c08cu: goto label_28c08c;
        case 0x28c090u: goto label_28c090;
        case 0x28c094u: goto label_28c094;
        case 0x28c098u: goto label_28c098;
        case 0x28c09cu: goto label_28c09c;
        case 0x28c0a0u: goto label_28c0a0;
        case 0x28c0a4u: goto label_28c0a4;
        case 0x28c0a8u: goto label_28c0a8;
        case 0x28c0acu: goto label_28c0ac;
        case 0x28c0b0u: goto label_28c0b0;
        case 0x28c0b4u: goto label_28c0b4;
        case 0x28c0b8u: goto label_28c0b8;
        case 0x28c0bcu: goto label_28c0bc;
        case 0x28c0c0u: goto label_28c0c0;
        case 0x28c0c4u: goto label_28c0c4;
        default: break;
    }

    ctx->pc = 0x28bfa8u;

label_28bfa8:
    // 0x28bfa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28bfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_28bfac:
    // 0x28bfac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28bfb0:
    // 0x28bfb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28bfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_28bfb4:
    // 0x28bfb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28bfb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28bfb8:
    // 0x28bfb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28bfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28bfbc:
    // 0x28bfbc: 0x92220266  lbu         $v0, 0x266($s1)
    ctx->pc = 0x28bfbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 614)));
label_28bfc0:
    // 0x28bfc0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_28bfc4:
    if (ctx->pc == 0x28BFC4u) {
        ctx->pc = 0x28BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFC0u;
        // 0x28bfc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFC8u;
        goto label_28bfc8;
    }
    ctx->pc = 0x28BFC0u;
    {
        const bool branch_taken_0x28bfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFC0u;
        // 0x28bfc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfc0) {
            ctx->pc = 0x28C0B4u;
            goto label_28c0b4;
        }
    }
    ctx->pc = 0x28BFC8u;
label_28bfc8:
    // 0x28bfc8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x28bfc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28bfcc:
    // 0x28bfcc: 0xc08a096  jal         func_228258
label_28bfd0:
    if (ctx->pc == 0x28BFD0u) {
        ctx->pc = 0x28BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFCCu;
        // 0x28bfd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFD4u;
        goto label_28bfd4;
    }
    ctx->pc = 0x28BFCCu;
    SET_GPR_U32(ctx, 31, 0x28BFD4u);
    ctx->pc = 0x28BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BFCCu;
    // 0x28bfd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x28BFCCu, 0x28BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BFD4u;
label_28bfd4:
    // 0x28bfd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28bfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28bfd8:
    // 0x28bfd8: 0x10430036  beq         $v0, $v1, . + 4 + (0x36 << 2)
label_28bfdc:
    if (ctx->pc == 0x28BFDCu) {
        ctx->pc = 0x28BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFD8u;
        // 0x28bfdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFE0u;
        goto label_28bfe0;
    }
    ctx->pc = 0x28BFD8u;
    {
        const bool branch_taken_0x28bfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x28BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFD8u;
        // 0x28bfdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfd8) {
            ctx->pc = 0x28C0B4u;
            goto label_28c0b4;
        }
    }
    ctx->pc = 0x28BFE0u;
label_28bfe0:
    // 0x28bfe0: 0xc0e4060  jal         func_390180
label_28bfe4:
    if (ctx->pc == 0x28BFE4u) {
        ctx->pc = 0x28BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFE0u;
        // 0x28bfe4: 0x26040364  addiu       $a0, $s0, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 868));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFE8u;
        goto label_28bfe8;
    }
    ctx->pc = 0x28BFE0u;
    SET_GPR_U32(ctx, 31, 0x28BFE8u);
    ctx->pc = 0x28BFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BFE0u;
    // 0x28bfe4: 0x26040364  addiu       $a0, $s0, 0x364 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 868));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x28BFE0u, 0x28BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BFE8u;
label_28bfe8:
    // 0x28bfe8: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_28bfec:
    if (ctx->pc == 0x28BFECu) {
        ctx->pc = 0x28BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFE8u;
        // 0x28bfec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFF0u;
        goto label_28bff0;
    }
    ctx->pc = 0x28BFE8u;
    {
        const bool branch_taken_0x28bfe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFE8u;
        // 0x28bfec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfe8) {
            ctx->pc = 0x28C0B4u;
            goto label_28c0b4;
        }
    }
    ctx->pc = 0x28BFF0u;
label_28bff0:
    // 0x28bff0: 0xc136b80  jal         func_4DAE00
label_28bff4:
    if (ctx->pc == 0x28BFF4u) {
        ctx->pc = 0x28BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFF0u;
        // 0x28bff4: 0x262401a4  addiu       $a0, $s1, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28BFF8u;
        goto label_28bff8;
    }
    ctx->pc = 0x28BFF0u;
    SET_GPR_U32(ctx, 31, 0x28BFF8u);
    ctx->pc = 0x28BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BFF0u;
    // 0x28bff4: 0x262401a4  addiu       $a0, $s1, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x28BFF0u, 0x28BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BFF8u;
label_28bff8:
    // 0x28bff8: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_28bffc:
    if (ctx->pc == 0x28BFFCu) {
        ctx->pc = 0x28BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFF8u;
        // 0x28bffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C000u;
        goto label_28c000;
    }
    ctx->pc = 0x28BFF8u;
    {
        const bool branch_taken_0x28bff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFF8u;
        // 0x28bffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bff8) {
            ctx->pc = 0x28C0B4u;
            goto label_28c0b4;
        }
    }
    ctx->pc = 0x28C000u;
label_28c000:
    // 0x28c000: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x28c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_28c004:
    // 0x28c004: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x28c004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
label_28c008:
    // 0x28c008: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x28c008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_28c00c:
    // 0x28c00c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_28c010:
    if (ctx->pc == 0x28C010u) {
        ctx->pc = 0x28C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C00Cu;
        // 0x28c010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C014u;
        goto label_28c014;
    }
    ctx->pc = 0x28C00Cu;
    {
        const bool branch_taken_0x28c00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C00Cu;
        // 0x28c010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c00c) {
            ctx->pc = 0x28C0B4u;
            goto label_28c0b4;
        }
    }
    ctx->pc = 0x28C014u;
label_28c014:
    // 0x28c014: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x28c014u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_28c018:
    // 0x28c018: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_28c01c:
    if (ctx->pc == 0x28C01Cu) {
        ctx->pc = 0x28C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C018u;
        // 0x28c01c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C020u;
        goto label_28c020;
    }
    ctx->pc = 0x28C018u;
    {
        const bool branch_taken_0x28c018 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C018u;
        // 0x28c01c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c018) {
            ctx->pc = 0x28C02Cu;
            goto label_28c02c;
        }
    }
    ctx->pc = 0x28C020u;
label_28c020:
    // 0x28c020: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28c020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28c024:
    // 0x28c024: 0x10000002  b           . + 4 + (0x2 << 2)
label_28c028:
    if (ctx->pc == 0x28C028u) {
        ctx->pc = 0x28C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C024u;
        // 0x28c028: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C02Cu;
        goto label_28c02c;
    }
    ctx->pc = 0x28C024u;
    {
        const bool branch_taken_0x28c024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C024u;
        // 0x28c028: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c024) {
            ctx->pc = 0x28C030u;
            goto label_28c030;
        }
    }
    ctx->pc = 0x28C02Cu;
label_28c02c:
    // 0x28c02c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28c02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c030:
    // 0x28c030: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
label_28c034:
    if (ctx->pc == 0x28C034u) {
        ctx->pc = 0x28C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C030u;
        // 0x28c034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C038u;
        goto label_28c038;
    }
    ctx->pc = 0x28C030u;
    {
        const bool branch_taken_0x28c030 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C030u;
        // 0x28c034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c030) {
            ctx->pc = 0x28C0B4u;
            goto label_28c0b4;
        }
    }
    ctx->pc = 0x28C038u;
label_28c038:
    // 0x28c038: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x28c038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_28c03c:
    // 0x28c03c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x28c03cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_28c040:
    // 0x28c040: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x28c040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_28c044:
    // 0x28c044: 0x40f809  jalr        $v0
label_28c048:
    if (ctx->pc == 0x28C048u) {
        ctx->pc = 0x28C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C044u;
        // 0x28c048: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C04Cu;
        goto label_28c04c;
    }
    ctx->pc = 0x28C044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28C04Cu);
        ctx->pc = 0x28C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C044u;
        // 0x28c048: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C044u, 0x28C04Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C04Cu;
label_28c04c:
    // 0x28c04c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28c04cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c050:
    // 0x28c050: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x28c050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_28c054:
    // 0x28c054: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_28c058:
    if (ctx->pc == 0x28C058u) {
        ctx->pc = 0x28C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C054u;
        // 0x28c058: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C05Cu;
        goto label_28c05c;
    }
    ctx->pc = 0x28C054u;
    {
        const bool branch_taken_0x28c054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C054u;
        // 0x28c058: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c054) {
            ctx->pc = 0x28C0B0u;
            goto label_28c0b0;
        }
    }
    ctx->pc = 0x28C05Cu;
label_28c05c:
    // 0x28c05c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_28c060:
    if (ctx->pc == 0x28C060u) {
        ctx->pc = 0x28C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C05Cu;
        // 0x28c060: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C064u;
        goto label_28c064;
    }
    ctx->pc = 0x28C05Cu;
    {
        const bool branch_taken_0x28c05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C05Cu;
        // 0x28c060: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c05c) {
            ctx->pc = 0x28C0B0u;
            goto label_28c0b0;
        }
    }
    ctx->pc = 0x28C064u;
label_28c064:
    // 0x28c064: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_28c068:
    if (ctx->pc == 0x28C068u) {
        ctx->pc = 0x28C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C064u;
        // 0x28c068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C06Cu;
        goto label_28c06c;
    }
    ctx->pc = 0x28C064u;
    {
        const bool branch_taken_0x28c064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C064u;
        // 0x28c068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c064) {
            ctx->pc = 0x28C0B4u;
            goto label_28c0b4;
        }
    }
    ctx->pc = 0x28C06Cu;
label_28c06c:
    // 0x28c06c: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x28c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_28c070:
    // 0x28c070: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x28c070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_28c074:
    // 0x28c074: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_28c078:
    if (ctx->pc == 0x28C078u) {
        ctx->pc = 0x28C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C074u;
        // 0x28c078: 0x10882b  sltu        $s1, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C07Cu;
        goto label_28c07c;
    }
    ctx->pc = 0x28C074u;
    {
        const bool branch_taken_0x28c074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C074u;
        // 0x28c078: 0x10882b  sltu        $s1, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c074) {
            ctx->pc = 0x28C0A8u;
            goto label_28c0a8;
        }
    }
    ctx->pc = 0x28C07Cu;
label_28c07c:
    // 0x28c07c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x28c07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_28c080:
    // 0x28c080: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x28c080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_28c084:
    // 0x28c084: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x28c084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_28c088:
    // 0x28c088: 0x40f809  jalr        $v0
label_28c08c:
    if (ctx->pc == 0x28C08Cu) {
        ctx->pc = 0x28C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C088u;
        // 0x28c08c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C090u;
        goto label_28c090;
    }
    ctx->pc = 0x28C088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28C090u);
        ctx->pc = 0x28C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C088u;
        // 0x28c08c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C088u, 0x28C090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28C090u;
label_28c090:
    // 0x28c090: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_28c094:
    if (ctx->pc == 0x28C094u) {
        ctx->pc = 0x28C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C090u;
        // 0x28c094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C098u;
        goto label_28c098;
    }
    ctx->pc = 0x28C090u;
    {
        const bool branch_taken_0x28c090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C090u;
        // 0x28c094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c090) {
            ctx->pc = 0x28C0B4u;
            goto label_28c0b4;
        }
    }
    ctx->pc = 0x28C098u;
label_28c098:
    // 0x28c098: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x28c098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_28c09c:
    // 0x28c09c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28c09cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28c0a0:
    // 0x28c0a0: 0x10710004  beq         $v1, $s1, . + 4 + (0x4 << 2)
label_28c0a4:
    if (ctx->pc == 0x28C0A4u) {
        ctx->pc = 0x28C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0A0u;
        // 0x28c0a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0A8u;
        goto label_28c0a8;
    }
    ctx->pc = 0x28C0A0u;
    {
        const bool branch_taken_0x28c0a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x28C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0A0u;
        // 0x28c0a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0a0) {
            ctx->pc = 0x28C0B4u;
            goto label_28c0b4;
        }
    }
    ctx->pc = 0x28C0A8u;
label_28c0a8:
    // 0x28c0a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_28c0ac:
    if (ctx->pc == 0x28C0ACu) {
        ctx->pc = 0x28C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0A8u;
        // 0x28c0ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0B0u;
        goto label_28c0b0;
    }
    ctx->pc = 0x28C0A8u;
    {
        const bool branch_taken_0x28c0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0A8u;
        // 0x28c0ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0a8) {
            ctx->pc = 0x28C0B4u;
            goto label_28c0b4;
        }
    }
    ctx->pc = 0x28C0B0u;
label_28c0b0:
    // 0x28c0b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28c0b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c0b4:
    // 0x28c0b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28c0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28c0b8:
    // 0x28c0b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28c0bc:
    // 0x28c0bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28c0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28c0c0:
    // 0x28c0c0: 0x3e00008  jr          $ra
label_28c0c4:
    if (ctx->pc == 0x28C0C4u) {
        ctx->pc = 0x28C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0C0u;
        // 0x28c0c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28C0C8u;
        goto label_fallthrough_0x28c0c0;
    }
    ctx->pc = 0x28C0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0C0u;
        // 0x28c0c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28c0c0:
    ctx->pc = 0x28C0C8u;
}
