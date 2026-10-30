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

// Function: sub_0043BF78
// Address: 0x43bf78 - 0x43c0d0
void sub_0043BF78_0x43bf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043BF78_0x43bf78");
#endif

    switch (ctx->pc) {
        case 0x43bf98u: goto label_43bf98;
        case 0x43bfa4u: goto label_43bfa4;
        case 0x43bfd0u: goto label_43bfd0;
        case 0x43bfe8u: goto label_43bfe8;
        case 0x43bffcu: goto label_43bffc;
        case 0x43c00cu: goto label_43c00c;
        case 0x43c020u: goto label_43c020;
        case 0x43c028u: goto label_43c028;
        case 0x43c048u: goto label_43c048;
        case 0x43c05cu: goto label_43c05c;
        case 0x43c080u: goto label_43c080;
        case 0x43c088u: goto label_43c088;
        default: break;
    }

    ctx->pc = 0x43bf78u;

    // 0x43bf78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x43bf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x43bf7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x43bf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x43bf80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x43bf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x43bf84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43bf84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bf88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x43bf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x43bf8c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x43bf8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x43bf90: 0xc10ef28  jal         func_43BCA0
    ctx->pc = 0x43BF90u;
    SET_GPR_U32(ctx, 31, 0x43BF98u);
    ctx->pc = 0x43BF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BF90u;
    // 0x43bf94: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43BCA0u, 0x43BF90u, 0x43BF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BF98u;
label_43bf98:
    // 0x43bf98: 0x8e04722c  lw          $a0, 0x722C($s0)
    ctx->pc = 0x43bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29228)));
    // 0x43bf9c: 0xc10f43c  jal         func_43D0F0
    ctx->pc = 0x43BF9Cu;
    SET_GPR_U32(ctx, 31, 0x43BFA4u);
    ctx->pc = 0x43D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0F0u, 0x43BF9Cu, 0x43BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BFA4u;
label_43bfa4:
    // 0x43bfa4: 0x8e03722c  lw          $v1, 0x722C($s0)
    ctx->pc = 0x43bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29228)));
    // 0x43bfa8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x43BFA8u;
    {
        const bool branch_taken_0x43bfa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x43BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BFA8u;
        // 0x43bfac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bfa8) {
            ctx->pc = 0x43BFD8u;
            goto label_43bfd8;
        }
    }
    ctx->pc = 0x43BFB0u;
    // 0x43bfb0: 0x8c437210  lw          $v1, 0x7210($v0)
    ctx->pc = 0x43bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29200)));
    // 0x43bfb4: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x43BFB4u;
    {
        const bool branch_taken_0x43bfb4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x43BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BFB4u;
        // 0x43bfb8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bfb4) {
            ctx->pc = 0x43BFFCu;
            goto label_43bffc;
        }
    }
    ctx->pc = 0x43BFBCu;
    // 0x43bfbc: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x43bfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x43bfc0: 0x8c467218  lw          $a2, 0x7218($v0)
    ctx->pc = 0x43bfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29208)));
    // 0x43bfc4: 0x2484d420  addiu       $a0, $a0, -0x2BE0
    ctx->pc = 0x43bfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
    // 0x43bfc8: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x43BFC8u;
    SET_GPR_U32(ctx, 31, 0x43BFD0u);
    ctx->pc = 0x43BFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BFC8u;
    // 0x43bfcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x43BFC8u, 0x43BFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BFD0u;
label_43bfd0:
    // 0x43bfd0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x43BFD0u;
    {
        const bool branch_taken_0x43bfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BFD0u;
        // 0x43bfd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bfd0) {
            ctx->pc = 0x43C0B8u;
            goto label_43c0b8;
        }
    }
    ctx->pc = 0x43BFD8u;
label_43bfd8:
    // 0x43bfd8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x43bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x43bfdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x43bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43bfe0: 0xc10efc2  jal         func_43BF08
    ctx->pc = 0x43BFE0u;
    SET_GPR_U32(ctx, 31, 0x43BFE8u);
    ctx->pc = 0x43BFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BFE0u;
    // 0x43bfe4: 0xac517218  sw          $s1, 0x7218($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 29208), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43BF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43BF08u, 0x43BFE0u, 0x43BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BFE8u;
label_43bfe8:
    // 0x43bfe8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43BFE8u;
    {
        const bool branch_taken_0x43bfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BFE8u;
        // 0x43bfec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bfe8) {
            ctx->pc = 0x43C004u;
            goto label_43c004;
        }
    }
    ctx->pc = 0x43BFF0u;
    // 0x43bff0: 0x8e04722c  lw          $a0, 0x722C($s0)
    ctx->pc = 0x43bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29228)));
    // 0x43bff4: 0xc10f430  jal         func_43D0C0
    ctx->pc = 0x43BFF4u;
    SET_GPR_U32(ctx, 31, 0x43BFFCu);
    ctx->pc = 0x43D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0C0u, 0x43BFF4u, 0x43BFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BFFCu;
label_43bffc:
    // 0x43bffc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x43BFFCu;
    {
        const bool branch_taken_0x43bffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BFFCu;
        // 0x43c000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bffc) {
            ctx->pc = 0x43C0B8u;
            goto label_43c0b8;
        }
    }
    ctx->pc = 0x43C004u;
label_43c004:
    // 0x43c004: 0xc110044  jal         func_440110
    ctx->pc = 0x43C004u;
    SET_GPR_U32(ctx, 31, 0x43C00Cu);
    ctx->pc = 0x43C008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C004u;
    // 0x43c008: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440110u, 0x43C004u, 0x43C00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C00Cu;
label_43c00c:
    // 0x43c00c: 0x8e427254  lw          $v0, 0x7254($s2)
    ctx->pc = 0x43c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29268)));
    // 0x43c010: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x43C010u;
    {
        const bool branch_taken_0x43c010 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x43C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C010u;
        // 0x43c014: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c010) {
            ctx->pc = 0x43C0B8u;
            goto label_43c0b8;
        }
    }
    ctx->pc = 0x43C018u;
    // 0x43c018: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x43C018u;
    {
        const bool branch_taken_0x43c018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C018u;
        // 0x43c01c: 0x3c110052  lui         $s1, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c018) {
            ctx->pc = 0x43C044u;
            goto label_43c044;
        }
    }
    ctx->pc = 0x43C020u;
label_43c020:
    // 0x43c020: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x43c020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x43c024: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43c024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_43c028:
    // 0x43c028: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x43c028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x43c02c: 0x0  nop
    ctx->pc = 0x43c02cu;
    // NOP
    // 0x43c030: 0x0  nop
    ctx->pc = 0x43c030u;
    // NOP
    // 0x43c034: 0x0  nop
    ctx->pc = 0x43c034u;
    // NOP
    // 0x43c038: 0x0  nop
    ctx->pc = 0x43c038u;
    // NOP
    // 0x43c03c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x43C03Cu;
    {
        const bool branch_taken_0x43c03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x43c03c) {
            ctx->pc = 0x43C028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c028;
        }
    }
    ctx->pc = 0x43C044u;
label_43c044:
    // 0x43c044: 0x26308d80  addiu       $s0, $s1, -0x7280
    ctx->pc = 0x43c044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294937984));
label_43c048:
    // 0x43c048: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x43c048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x43c04c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43c04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c050: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x43c050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x43c054: 0xc1101d6  jal         func_440758
    ctx->pc = 0x43C054u;
    SET_GPR_U32(ctx, 31, 0x43C05Cu);
    ctx->pc = 0x43C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C054u;
    // 0x43c058: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440758u, 0x43C054u, 0x43C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C05Cu;
label_43c05c:
    // 0x43c05c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x43C05Cu;
    {
        const bool branch_taken_0x43c05c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x43c05c) {
            ctx->pc = 0x43C060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43C05Cu;
            // 0x43c060: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43C0ACu;
            goto label_43c0ac;
        }
    }
    ctx->pc = 0x43C064u;
    // 0x43c064: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x43c064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x43c068: 0x8c437210  lw          $v1, 0x7210($v0)
    ctx->pc = 0x43c068u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x517210u));
    // 0x43c06c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x43C06Cu;
    {
        const bool branch_taken_0x43c06c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x43C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C06Cu;
        // 0x43c070: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c06c) {
            ctx->pc = 0x43C084u;
            goto label_43c084;
        }
    }
    ctx->pc = 0x43C074u;
    // 0x43c074: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x43c074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x43c078: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x43C078u;
    SET_GPR_U32(ctx, 31, 0x43C080u);
    ctx->pc = 0x43C07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43C078u;
    // 0x43c07c: 0x2484d448  addiu       $a0, $a0, -0x2BB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x43C078u, 0x43C080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43C080u;
label_43c080:
    // 0x43c080: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x43c080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_43c084:
    // 0x43c084: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43c084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_43c088:
    // 0x43c088: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x43c088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x43c08c: 0x0  nop
    ctx->pc = 0x43c08cu;
    // NOP
    // 0x43c090: 0x0  nop
    ctx->pc = 0x43c090u;
    // NOP
    // 0x43c094: 0x0  nop
    ctx->pc = 0x43c094u;
    // NOP
    // 0x43c098: 0x0  nop
    ctx->pc = 0x43c098u;
    // NOP
    // 0x43c09c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x43C09Cu;
    {
        const bool branch_taken_0x43c09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x43c09c) {
            ctx->pc = 0x43C088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c088;
        }
    }
    ctx->pc = 0x43C0A4u;
    // 0x43c0a4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x43C0A4u;
    {
        const bool branch_taken_0x43c0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C0A4u;
        // 0x43c0a8: 0x26308d80  addiu       $s0, $s1, -0x7280 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294937984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c0a4) {
            ctx->pc = 0x43C048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c048;
        }
    }
    ctx->pc = 0x43C0ACu;
label_43c0ac:
    // 0x43c0ac: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x43C0ACu;
    {
        const bool branch_taken_0x43c0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C0ACu;
        // 0x43c0b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c0ac) {
            ctx->pc = 0x43C020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43c020;
        }
    }
    ctx->pc = 0x43C0B4u;
    // 0x43c0b4: 0xae407254  sw          $zero, 0x7254($s2)
    ctx->pc = 0x43c0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 29268), GPR_U32(ctx, 0));
label_43c0b8:
    // 0x43c0b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x43c0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43c0bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x43c0bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43c0c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x43c0c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43c0c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43c0c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43c0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x43C0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43C0C8u;
        // 0x43c0cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43C0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43C0D0u;
}
