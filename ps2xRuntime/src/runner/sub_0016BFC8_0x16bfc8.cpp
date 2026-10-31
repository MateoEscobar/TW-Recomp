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

// Function: sub_0016BFC8
// Address: 0x16bfc8 - 0x16c078
void sub_0016BFC8_0x16bfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BFC8_0x16bfc8");
#endif

    switch (ctx->pc) {
        case 0x16bfc8u: goto label_16bfc8;
        case 0x16bfccu: goto label_16bfcc;
        case 0x16bfd0u: goto label_16bfd0;
        case 0x16bfd4u: goto label_16bfd4;
        case 0x16bfd8u: goto label_16bfd8;
        case 0x16bfdcu: goto label_16bfdc;
        case 0x16bfe0u: goto label_16bfe0;
        case 0x16bfe4u: goto label_16bfe4;
        case 0x16bfe8u: goto label_16bfe8;
        case 0x16bfecu: goto label_16bfec;
        case 0x16bff0u: goto label_16bff0;
        case 0x16bff4u: goto label_16bff4;
        case 0x16bff8u: goto label_16bff8;
        case 0x16bffcu: goto label_16bffc;
        case 0x16c000u: goto label_16c000;
        case 0x16c004u: goto label_16c004;
        case 0x16c008u: goto label_16c008;
        case 0x16c00cu: goto label_16c00c;
        case 0x16c010u: goto label_16c010;
        case 0x16c014u: goto label_16c014;
        case 0x16c018u: goto label_16c018;
        case 0x16c01cu: goto label_16c01c;
        case 0x16c020u: goto label_16c020;
        case 0x16c024u: goto label_16c024;
        case 0x16c028u: goto label_16c028;
        case 0x16c02cu: goto label_16c02c;
        case 0x16c030u: goto label_16c030;
        case 0x16c034u: goto label_16c034;
        case 0x16c038u: goto label_16c038;
        case 0x16c03cu: goto label_16c03c;
        case 0x16c040u: goto label_16c040;
        case 0x16c044u: goto label_16c044;
        case 0x16c048u: goto label_16c048;
        case 0x16c04cu: goto label_16c04c;
        case 0x16c050u: goto label_16c050;
        case 0x16c054u: goto label_16c054;
        case 0x16c058u: goto label_16c058;
        case 0x16c05cu: goto label_16c05c;
        case 0x16c060u: goto label_16c060;
        case 0x16c064u: goto label_16c064;
        case 0x16c068u: goto label_16c068;
        case 0x16c06cu: goto label_16c06c;
        case 0x16c070u: goto label_16c070;
        case 0x16c074u: goto label_16c074;
        default: break;
    }

    ctx->pc = 0x16bfc8u;

label_16bfc8:
    // 0x16bfc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16bfcc:
    // 0x16bfcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16bfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16bfd0:
    // 0x16bfd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16bfd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16bfd4:
    // 0x16bfd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16bfd8:
    // 0x16bfd8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16bfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16bfdc:
    // 0x16bfdc: 0xc05a3f8  jal         func_168FE0
label_16bfe0:
    if (ctx->pc == 0x16BFE0u) {
        ctx->pc = 0x16BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFDCu;
        // 0x16bfe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BFE4u;
        goto label_16bfe4;
    }
    ctx->pc = 0x16BFDCu;
    SET_GPR_U32(ctx, 31, 0x16BFE4u);
    ctx->pc = 0x16BFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFDCu;
    // 0x16bfe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168FE0u, 0x16BFDCu, 0x16BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BFE4u;
label_16bfe4:
    // 0x16bfe4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_16bfe8:
    if (ctx->pc == 0x16BFE8u) {
        ctx->pc = 0x16BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFE4u;
        // 0x16bfe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BFECu;
        goto label_16bfec;
    }
    ctx->pc = 0x16BFE4u;
    {
        const bool branch_taken_0x16bfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFE4u;
        // 0x16bfe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bfe4) {
            ctx->pc = 0x16C064u;
            goto label_16c064;
        }
    }
    ctx->pc = 0x16BFECu;
label_16bfec:
    // 0x16bfec: 0x86020032  lh          $v0, 0x32($s0)
    ctx->pc = 0x16bfecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
label_16bff0:
    // 0x16bff0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x16bff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_16bff4:
    // 0x16bff4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_16bff8:
    if (ctx->pc == 0x16BFF8u) {
        ctx->pc = 0x16BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFF4u;
        // 0x16bff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BFFCu;
        goto label_16bffc;
    }
    ctx->pc = 0x16BFF4u;
    {
        const bool branch_taken_0x16bff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bff4) {
            ctx->pc = 0x16BFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BFF4u;
            // 0x16bff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C03Cu;
            goto label_16c03c;
        }
    }
    ctx->pc = 0x16BFFCu;
label_16bffc:
    // 0x16bffc: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x16bffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_16c000:
    // 0x16c000: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_16c004:
    if (ctx->pc == 0x16C004u) {
        ctx->pc = 0x16C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C000u;
        // 0x16c004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C008u;
        goto label_16c008;
    }
    ctx->pc = 0x16C000u;
    {
        const bool branch_taken_0x16c000 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C000u;
        // 0x16c004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c000) {
            ctx->pc = 0x16C064u;
            goto label_16c064;
        }
    }
    ctx->pc = 0x16C008u;
label_16c008:
    // 0x16c008: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x16c008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_16c00c:
    // 0x16c00c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x16c00cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_16c010:
    // 0x16c010: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x16c010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16c014:
    // 0x16c014: 0x40f809  jalr        $v0
label_16c018:
    if (ctx->pc == 0x16C018u) {
        ctx->pc = 0x16C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C014u;
        // 0x16c018: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C01Cu;
        goto label_16c01c;
    }
    ctx->pc = 0x16C014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16C01Cu);
        ctx->pc = 0x16C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C014u;
        // 0x16c018: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C014u, 0x16C01Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C01Cu;
label_16c01c:
    // 0x16c01c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x16c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_16c020:
    // 0x16c020: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_16c024:
    if (ctx->pc == 0x16C024u) {
        ctx->pc = 0x16C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C020u;
        // 0x16c024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C028u;
        goto label_16c028;
    }
    ctx->pc = 0x16C020u;
    {
        const bool branch_taken_0x16c020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C020u;
        // 0x16c024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c020) {
            ctx->pc = 0x16C064u;
            goto label_16c064;
        }
    }
    ctx->pc = 0x16C028u;
label_16c028:
    // 0x16c028: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x16c028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_16c02c:
    // 0x16c02c: 0x9443004c  lhu         $v1, 0x4C($v0)
    ctx->pc = 0x16c02cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 76)));
label_16c030:
    // 0x16c030: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_16c034:
    if (ctx->pc == 0x16C034u) {
        ctx->pc = 0x16C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C030u;
        // 0x16c034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C038u;
        goto label_16c038;
    }
    ctx->pc = 0x16C030u;
    {
        const bool branch_taken_0x16c030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C030u;
        // 0x16c034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c030) {
            ctx->pc = 0x16C064u;
            goto label_16c064;
        }
    }
    ctx->pc = 0x16C038u;
label_16c038:
    // 0x16c038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c03c:
    // 0x16c03c: 0xc059856  jal         func_166158
label_16c040:
    if (ctx->pc == 0x16C040u) {
        ctx->pc = 0x16C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C03Cu;
        // 0x16c040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C044u;
        goto label_16c044;
    }
    ctx->pc = 0x16C03Cu;
    SET_GPR_U32(ctx, 31, 0x16C044u);
    ctx->pc = 0x16C040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C03Cu;
    // 0x16c040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x16C03Cu, 0x16C044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C044u;
label_16c044:
    // 0x16c044: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_16c048:
    if (ctx->pc == 0x16C048u) {
        ctx->pc = 0x16C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C044u;
        // 0x16c048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C04Cu;
        goto label_16c04c;
    }
    ctx->pc = 0x16C044u;
    {
        const bool branch_taken_0x16c044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C044u;
        // 0x16c048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c044) {
            ctx->pc = 0x16C060u;
            goto label_16c060;
        }
    }
    ctx->pc = 0x16C04Cu;
label_16c04c:
    // 0x16c04c: 0xc05a776  jal         func_169DD8
label_16c050:
    if (ctx->pc == 0x16C050u) {
        ctx->pc = 0x16C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C04Cu;
        // 0x16c050: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C054u;
        goto label_16c054;
    }
    ctx->pc = 0x16C04Cu;
    SET_GPR_U32(ctx, 31, 0x16C054u);
    ctx->pc = 0x16C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C04Cu;
    // 0x16c050: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169DD8u, 0x16C04Cu, 0x16C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C054u;
label_16c054:
    // 0x16c054: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x16c054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_16c058:
    // 0x16c058: 0x10000002  b           . + 4 + (0x2 << 2)
label_16c05c:
    if (ctx->pc == 0x16C05Cu) {
        ctx->pc = 0x16C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C058u;
        // 0x16c05c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C060u;
        goto label_16c060;
    }
    ctx->pc = 0x16C058u;
    {
        const bool branch_taken_0x16c058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C058u;
        // 0x16c05c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c058) {
            ctx->pc = 0x16C064u;
            goto label_16c064;
        }
    }
    ctx->pc = 0x16C060u;
label_16c060:
    // 0x16c060: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16c060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c064:
    // 0x16c064: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16c064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16c068:
    // 0x16c068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c06c:
    // 0x16c06c: 0x3e00008  jr          $ra
label_16c070:
    if (ctx->pc == 0x16C070u) {
        ctx->pc = 0x16C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C06Cu;
        // 0x16c070: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C074u;
        goto label_16c074;
    }
    ctx->pc = 0x16C06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C06Cu;
        // 0x16c070: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C074u;
label_16c074:
    // 0x16c074: 0x0  nop
    ctx->pc = 0x16c074u;
    // NOP
    ctx->pc = 0x16c078u;
}
